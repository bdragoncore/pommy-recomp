#include <array>
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <mutex>
#include <string>
#include <vector>

#include "recomp.h"
#include "ultramodern/ultramodern.hpp"
#include "bm64_input.hpp"

// Controller Pak. The game saves Custom Bomberman designs as Controller Pak
// notes, and the runtime's libultra replacements (librecomp/src/pak.cpp)
// answer "no pak" to everything. These replace them; defining every function
// that file has keeps it out of the link.
//
// Like N64ModernRuntime PR #139 (used by BattleTanxRecomp), this works at the
// level of notes, not a raw 32 KB pak image: the directory is
// saves/controller_pak/notes.bin (16 entries) and each note's data is
// note_N.bin. A pak is present in a port when the Controller Accessory option
// says so (src/game/input.cpp).

namespace {

// libultra's values.
constexpr int32_t PFS_ERR_NOPACK = 1;
constexpr int32_t PFS_ERR_INVALID = 5;
constexpr int32_t PFS_DATA_FULL = 7;
constexpr int32_t PFS_DIR_FULL = 8;
constexpr int32_t PFS_ERR_EXIST = 9;
constexpr int32_t PFS_ERR_DEVICE = 11;
constexpr uint8_t PFS_READ = 0;
constexpr uint8_t PFS_WRITE = 1;
constexpr int32_t PFS_INITIALIZED = 0x1;
constexpr int PFS_FILE_NAME_LEN = 16;
constexpr int PFS_FILE_EXT_LEN = 4;
constexpr int PFS_BLOCKSIZE = 32;
constexpr int PFS_PAGE_SIZE = 256;
constexpr int kMaxNotes = 16;
// 128 pages, 5 of which the filesystem itself uses.
constexpr int kDataPages = 123;
constexpr int kMaxChannels = 4;

// A directory entry, stored little-endian on the host.
struct Note {
    uint32_t file_size = 0;
    uint32_t game_code = 0;
    uint16_t company_code = 0;
    std::array<uint8_t, PFS_FILE_EXT_LEN> ext_name{};
    std::array<uint8_t, PFS_FILE_NAME_LEN> game_name{};

    bool used() const { return game_code != 0 && company_code != 0; }
    bool matches(uint16_t company, uint32_t game, const uint8_t* name, const uint8_t* ext) const {
        return used() && company_code == company && game_code == game &&
            std::memcmp(game_name.data(), name, PFS_FILE_NAME_LEN) == 0 &&
            std::memcmp(ext_name.data(), ext, PFS_FILE_EXT_LEN) == 0;
    }
};

std::mutex g_mutex;

std::filesystem::path pak_dir() {
    return ultramodern::get_save_file_path().parent_path() / "controller_pak";
}

std::filesystem::path notes_path() {
    return pak_dir() / "notes.bin";
}

std::filesystem::path note_path(int note) {
    return pak_dir() / ("note_" + std::to_string(note) + ".bin");
}

std::array<Note, kMaxNotes> load_notes() {
    std::array<Note, kMaxNotes> notes{};
    std::ifstream in(notes_path(), std::ios::binary);
    for (Note& n : notes) {
        if (!in.read(reinterpret_cast<char*>(&n.file_size), sizeof(n.file_size)) ||
            !in.read(reinterpret_cast<char*>(&n.game_code), sizeof(n.game_code)) ||
            !in.read(reinterpret_cast<char*>(&n.company_code), sizeof(n.company_code)) ||
            !in.read(reinterpret_cast<char*>(n.ext_name.data()), n.ext_name.size()) ||
            !in.read(reinterpret_cast<char*>(n.game_name.data()), n.game_name.size())) {
            n = Note{};
        }
    }
    return notes;
}

bool store_notes(const std::array<Note, kMaxNotes>& notes) {
    std::error_code ec;
    std::filesystem::create_directories(pak_dir(), ec);
    std::ofstream out(notes_path(), std::ios::binary | std::ios::trunc);
    for (const Note& n : notes) {
        out.write(reinterpret_cast<const char*>(&n.file_size), sizeof(n.file_size));
        out.write(reinterpret_cast<const char*>(&n.game_code), sizeof(n.game_code));
        out.write(reinterpret_cast<const char*>(&n.company_code), sizeof(n.company_code));
        out.write(reinterpret_cast<const char*>(n.ext_name.data()), n.ext_name.size());
        out.write(reinterpret_cast<const char*>(n.game_name.data()), n.game_name.size());
    }
    return out.good();
}

int pages(uint32_t bytes) {
    return static_cast<int>((bytes + PFS_PAGE_SIZE - 1) / PFS_PAGE_SIZE);
}

int free_pages(const std::array<Note, kMaxNotes>& notes) {
    int used = 0;
    for (const Note& n : notes) {
        if (n.used()) {
            used += pages(n.file_size);
        }
    }
    return kDataPages - used;
}

int32_t pak_status(int channel) {
    if (channel < 0 || channel >= kMaxChannels) {
        return PFS_ERR_NOPACK;
    }
    const auto info = bm64::input::device_info(channel);
    if (info.connected_device == ultramodern::input::Device::None ||
        info.connected_pak == ultramodern::input::Pak::None) {
        return PFS_ERR_NOPACK;
    }
    if (info.connected_pak != bm64::input::kControllerPak) {
        return PFS_ERR_DEVICE;
    }
    return 0;
}

// Guest arguments: a0-a3, then the caller's outgoing stack slots.
gpr stack_arg(uint8_t* rdram, recomp_context* ctx, int index) {
    return static_cast<int32_t>(MEM_W(index * 4, ctx->r29));
}

template <size_t N>
std::array<uint8_t, N> guest_bytes(uint8_t* rdram, gpr addr) {
    std::array<uint8_t, N> out{};
    for (size_t i = 0; i < N; i++) {
        out[i] = MEM_B(i, addr);
    }
    return out;
}

} // namespace

extern "C" {

// osPfsInitPak(OSMesgQueue* mq, OSPfs* pfs, int channel)
void osPfsInitPak_recomp(uint8_t* rdram, recomp_context* ctx) {
    const int channel = static_cast<int32_t>(ctx->r6);
    const int32_t status = pak_status(channel);
    if (status != 0) {
        ctx->r2 = status;
        return;
    }

    // There is no real filesystem; fill OSPfs the way a freshly checked pak
    // would look, with one bank and the standard directory layout.
    constexpr int banks = 1;
    constexpr int dir_pages = 2;
    MEM_W(0x00, ctx->r5) = PFS_INITIALIZED;               // status
    MEM_W(0x04, ctx->r5) = static_cast<int32_t>(ctx->r4); // queue
    MEM_W(0x08, ctx->r5) = channel;
    for (int i = 0; i < 64; i++) {
        MEM_B(0x0C + i, ctx->r5) = 0;                     // id, label
    }
    MEM_W(0x4C, ctx->r5) = 0;                             // version
    MEM_W(0x50, ctx->r5) = dir_pages * 8;                 // dir_size
    MEM_W(0x54, ctx->r5) = 1 * 8;                         // inode_table
    MEM_W(0x58, ctx->r5) = (1 + banks) * 8;               // minode_table
    MEM_W(0x5C, ctx->r5) = (1 + 2 * banks) * 8;           // dir_table
    MEM_W(0x60, ctx->r5) = 1 + dir_pages + 2 * banks;     // inode_start_page
    MEM_B(0x64, ctx->r5) = banks;
    MEM_B(0x65, ctx->r5) = 0;                             // activebank
    ctx->r2 = 0;
}

void osPfsRepairId_recomp(uint8_t* rdram, recomp_context* ctx) {
    ctx->r2 = 0;
}

void osPfsChecker_recomp(uint8_t* rdram, recomp_context* ctx) {
    ctx->r2 = 0;
}

// osPfsIsPlug(OSMesgQueue* mq, u8* pattern)
void osPfsIsPlug_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint8_t bits = 0;
    for (int channel = 0; channel < kMaxChannels; channel++) {
        if (pak_status(channel) == 0) {
            bits |= 1 << channel;
        }
    }
    MEM_B(0, ctx->r5) = bits;
    ctx->r2 = 0;
}

// osPfsNumFiles(OSPfs* pfs, s32* max_files, s32* files_used)
void osPfsNumFiles_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(g_mutex);
    int used = 0;
    for (const Note& n : load_notes()) {
        used += n.used() ? 1 : 0;
    }
    MEM_W(0, ctx->r5) = kMaxNotes;
    MEM_W(0, ctx->r6) = used;
    ctx->r2 = 0;
}

// osPfsFreeBlocks(OSPfs* pfs, s32* bytes_not_used)
void osPfsFreeBlocks_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(g_mutex);
    MEM_W(0, ctx->r5) = free_pages(load_notes()) * PFS_PAGE_SIZE;
    ctx->r2 = 0;
}

// osPfsFindFile(OSPfs* pfs, u16 company_code, u32 game_code, u8* game_name,
//               u8* ext_name, s32* file_no)
void osPfsFindFile_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(g_mutex);
    const uint16_t company = static_cast<uint16_t>(ctx->r5);
    const uint32_t game = static_cast<uint32_t>(ctx->r6);
    const auto name = guest_bytes<PFS_FILE_NAME_LEN>(rdram, ctx->r7);
    const auto ext = guest_bytes<PFS_FILE_EXT_LEN>(rdram, stack_arg(rdram, ctx, 4));
    const gpr file_no = stack_arg(rdram, ctx, 5);
    if (company == 0 || game == 0) {
        ctx->r2 = PFS_ERR_INVALID;
        return;
    }
    const auto notes = load_notes();
    for (int i = 0; i < kMaxNotes; i++) {
        if (notes[i].matches(company, game, name.data(), ext.data())) {
            MEM_W(0, file_no) = i;
            ctx->r2 = 0;
            return;
        }
    }
    MEM_W(0, file_no) = -1;
    ctx->r2 = PFS_ERR_INVALID;
}

// osPfsAllocateFile(OSPfs* pfs, u16 company_code, u32 game_code, u8* game_name,
//                   u8* ext_name, int nbytes, s32* file_no)
void osPfsAllocateFile_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(g_mutex);
    const uint16_t company = static_cast<uint16_t>(ctx->r5);
    const uint32_t game = static_cast<uint32_t>(ctx->r6);
    const auto name = guest_bytes<PFS_FILE_NAME_LEN>(rdram, ctx->r7);
    const auto ext = guest_bytes<PFS_FILE_EXT_LEN>(rdram, stack_arg(rdram, ctx, 4));
    const int32_t nbytes = static_cast<int32_t>(stack_arg(rdram, ctx, 5));
    const gpr file_no = stack_arg(rdram, ctx, 6);
    if (company == 0 || game == 0 || nbytes <= 0) {
        ctx->r2 = PFS_ERR_INVALID;
        return;
    }

    auto notes = load_notes();
    int slot = -1;
    for (int i = 0; i < kMaxNotes; i++) {
        if (notes[i].matches(company, game, name.data(), ext.data())) {
            ctx->r2 = PFS_ERR_EXIST;
            return;
        }
        if (slot < 0 && !notes[i].used()) {
            slot = i;
        }
    }
    if (slot < 0) {
        ctx->r2 = PFS_DIR_FULL;
        return;
    }
    if (pages(nbytes) > free_pages(notes)) {
        ctx->r2 = PFS_DATA_FULL;
        return;
    }

    Note& n = notes[slot];
    n.file_size = static_cast<uint32_t>(pages(nbytes) * PFS_PAGE_SIZE);
    n.game_code = game;
    n.company_code = company;
    n.game_name = name;
    n.ext_name = ext;
    std::vector<char> zero(n.file_size);
    std::ofstream data(note_path(slot), std::ios::binary | std::ios::trunc);
    data.write(zero.data(), zero.size());
    if (!data.good() || !store_notes(notes)) {
        ctx->r2 = PFS_ERR_INVALID;
        return;
    }
    MEM_W(0, file_no) = slot;
    ctx->r2 = 0;
}

// osPfsDeleteFile(OSPfs* pfs, u16 company_code, u32 game_code, u8* game_name,
//                 u8* ext_name)
void osPfsDeleteFile_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(g_mutex);
    const uint16_t company = static_cast<uint16_t>(ctx->r5);
    const uint32_t game = static_cast<uint32_t>(ctx->r6);
    const auto name = guest_bytes<PFS_FILE_NAME_LEN>(rdram, ctx->r7);
    const auto ext = guest_bytes<PFS_FILE_EXT_LEN>(rdram, stack_arg(rdram, ctx, 4));
    auto notes = load_notes();
    for (int i = 0; i < kMaxNotes; i++) {
        if (notes[i].matches(company, game, name.data(), ext.data())) {
            notes[i] = Note{};
            std::error_code ec;
            std::filesystem::remove(note_path(i), ec);
            ctx->r2 = store_notes(notes) ? 0 : PFS_ERR_INVALID;
            return;
        }
    }
    ctx->r2 = PFS_ERR_INVALID;
}

// osPfsReadWriteFile(OSPfs* pfs, s32 file_no, u8 flag, int offset, int nbytes,
//                    u8* data_buffer)
void osPfsReadWriteFile_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(g_mutex);
    const int32_t file_no = static_cast<int32_t>(ctx->r5);
    const uint8_t flag = static_cast<uint8_t>(ctx->r6);
    const int32_t offset = static_cast<int32_t>(ctx->r7);
    const int32_t nbytes = static_cast<int32_t>(stack_arg(rdram, ctx, 4));
    const gpr buffer = stack_arg(rdram, ctx, 5);
    if (file_no < 0 || file_no >= kMaxNotes || !load_notes()[file_no].used()) {
        ctx->r2 = PFS_ERR_INVALID;
        return;
    }
    const uint32_t size = load_notes()[file_no].file_size;
    if (offset < 0 || nbytes < 0 || (offset % PFS_BLOCKSIZE) != 0 || (nbytes % PFS_BLOCKSIZE) != 0 ||
        static_cast<uint32_t>(offset + nbytes) > size) {
        ctx->r2 = PFS_ERR_INVALID;
        return;
    }

    std::vector<char> data(nbytes);
    if (flag == PFS_WRITE) {
        for (int32_t i = 0; i < nbytes; i++) {
            data[i] = static_cast<char>(MEM_B(i, buffer));
        }
        std::fstream f(note_path(file_no), std::ios::binary | std::ios::in | std::ios::out);
        f.seekp(offset);
        f.write(data.data(), nbytes);
        ctx->r2 = f.good() ? 0 : PFS_ERR_INVALID;
    } else if (flag == PFS_READ) {
        std::ifstream f(note_path(file_no), std::ios::binary);
        f.seekg(offset);
        f.read(data.data(), nbytes);
        if (!f.good()) {
            ctx->r2 = PFS_ERR_INVALID;
            return;
        }
        for (int32_t i = 0; i < nbytes; i++) {
            MEM_B(i, buffer) = static_cast<uint8_t>(data[i]);
        }
        ctx->r2 = 0;
    } else {
        ctx->r2 = PFS_ERR_INVALID;
    }
}

// osPfsFileState(OSPfs* pfs, s32 file_no, OSPfsState* state)
void osPfsFileState_recomp(uint8_t* rdram, recomp_context* ctx) {
    std::lock_guard lock(g_mutex);
    const int32_t file_no = static_cast<int32_t>(ctx->r5);
    if (file_no < 0 || file_no >= kMaxNotes) {
        ctx->r2 = PFS_ERR_INVALID;
        return;
    }
    const Note n = load_notes()[file_no];
    if (!n.used()) {
        ctx->r2 = PFS_ERR_INVALID;
        return;
    }
    // OSPfsState: u32 file_size, u32 game_code, u16 company_code,
    // char ext_name[4], char game_name[16].
    MEM_W(0x00, ctx->r6) = n.file_size;
    MEM_W(0x04, ctx->r6) = n.game_code;
    MEM_H(0x08, ctx->r6) = n.company_code;
    for (int i = 0; i < PFS_FILE_EXT_LEN; i++) {
        MEM_B(0x0A + i, ctx->r6) = n.ext_name[i];
    }
    for (int i = 0; i < PFS_FILE_NAME_LEN; i++) {
        MEM_B(0x0E + i, ctx->r6) = n.game_name[i];
    }
    ctx->r2 = 0;
}

} // extern "C"
