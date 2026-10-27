#include "recomp.h"
#include "bm64_memory.hpp"
#include "librecomp/addresses.hpp"

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <map>

#ifdef _WIN32
#include <windows.h>
#else
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#endif

// TLB emulation through the host MMU. Stock N64Recomp resolves a guest address
// to rdram + (u32)(address + 0x80000000), and the runtime reserves 4 GB there.
// RDRAM is a shared memory object, and osMapTLB maps the entry's physical
// pages over that reservation, so the stock memory macros keep working. kseg1
// gets a permanent view of RDRAM. An entry has two pages: evenp at
// [vaddr, vaddr + size), oddp at [vaddr + size, vaddr + 2 * size).
//
// TLB windows are mapped in host pages (4 KB on Linux x86, 16 KB on Apple
// silicon). A host page larger than the game's 4 KB entries still works: the
// game's windows keep one vaddr-to-phys offset across their entries, so each
// page lands on its physical address, and the RDRAM exposed next to a window is
// never read through it. Windows can only map 64 KB-aligned views, which the
// 16 KB window at 0x40000000 -> 0x258000 is not, so BM64_SOFT_TLB translates
// kuseg addresses in the memory macros instead (bm64_recomp_defs.h) and only
// kseg0 and kseg1 are views there.

namespace {

constexpr int kMaxTlbEntries = 32;
constexpr uint32_t kRdramSize = 0x800000;
constexpr uint32_t kNoPage = 0xFFFFFFFFu;

struct TlbEntry {
    uint32_t pagesize = 0; // 0 means unused
    uint32_t vaddr = 0;
    uint32_t evenpaddr = kNoPage;
    uint32_t oddpaddr = kNoPage;
};

TlbEntry g_tlb[kMaxTlbEntries];
uint8_t* g_rdram = nullptr;
uint32_t g_block = 4096;
// Mapped blocks: guest vaddr of the block -> physical address it shows.
std::map<uint32_t, uint32_t> g_blocks;

uint32_t pagesize_from_mask(uint32_t pm) {
    switch (pm) {
    case 0x0000000: return 4096;      // OS_PM_4K
    case 0x0006000: return 16384;     // OS_PM_16K
    case 0x001E000: return 65536;     // OS_PM_64K
    case 0x007E000: return 262144;    // OS_PM_256K
    case 0x01FE000: return 1048576;   // OS_PM_1M
    case 0x07FE000: return 4194304;   // OS_PM_4M
    case 0x1FFE000: return 16777216;  // OS_PM_16M
    default:
        fprintf(stderr, "Unknown TLB page mask 0x%08X, assuming 4 KB\n", pm);
        return 4096;
    }
}

// Where the stock memory macros put a guest address.
uint8_t* host_address(uint32_t vaddr) {
    return g_rdram + static_cast<uint32_t>(vaddr + 0x80000000u);
}

#ifdef _WIN32

// Windows can only map a view over a placeholder, so init releases the
// runtime's reservation and reserves it again as one. The placeholder API is
// Windows 10 1803+, and is looked up at runtime.
#ifndef MEM_RESERVE_PLACEHOLDER
#define MEM_RESERVE_PLACEHOLDER 0x00040000
#endif
#ifndef MEM_REPLACE_PLACEHOLDER
#define MEM_REPLACE_PLACEHOLDER 0x00004000
#endif
#ifndef MEM_PRESERVE_PLACEHOLDER
#define MEM_PRESERVE_PLACEHOLDER 0x00000002
#endif

using VirtualAlloc2Fn = PVOID(WINAPI*)(HANDLE, PVOID, SIZE_T, ULONG, ULONG, void*, ULONG);
using MapViewOfFile3Fn = PVOID(WINAPI*)(HANDLE, HANDLE, PVOID, ULONG64, SIZE_T, ULONG, ULONG, void*, ULONG);
using UnmapViewOfFile2Fn = BOOL(WINAPI*)(HANDLE, PVOID, ULONG);

VirtualAlloc2Fn p_VirtualAlloc2 = nullptr;
MapViewOfFile3Fn p_MapViewOfFile3 = nullptr;
UnmapViewOfFile2Fn p_UnmapViewOfFile2 = nullptr;
HANDLE g_section = nullptr;

// The section covers the runtime's whole read-write range, which kseg0 shows.
constexpr uint32_t kSectionSize = static_cast<uint32_t>(recomp::mem_size);

bool map_at(uint8_t* at, uint32_t phys, uint32_t size) {
    // Split the placeholder so [at, at + size) is one of its own.
    VirtualFree(at, size, MEM_RELEASE | MEM_PRESERVE_PLACEHOLDER);
    void* p = p_MapViewOfFile3(g_section, GetCurrentProcess(), at, phys, size,
                               MEM_REPLACE_PLACEHOLDER, PAGE_READWRITE, nullptr, 0);
    return p == at;
}

void unmap_at(uint8_t* at) {
    p_UnmapViewOfFile2(GetCurrentProcess(), at, MEM_PRESERVE_PLACEHOLDER);
}

#ifndef BM64_SOFT_TLB
#error "Windows needs BM64_SOFT_TLB"
#endif

bool create_backing(uint8_t* rdram) {
    HMODULE kernelbase = GetModuleHandleW(L"kernelbase.dll");
    if (kernelbase != nullptr) {
        p_VirtualAlloc2 = (VirtualAlloc2Fn)GetProcAddress(kernelbase, "VirtualAlloc2");
        p_MapViewOfFile3 = (MapViewOfFile3Fn)GetProcAddress(kernelbase, "MapViewOfFile3");
        p_UnmapViewOfFile2 = (UnmapViewOfFile2Fn)GetProcAddress(kernelbase, "UnmapViewOfFile2");
    }
    if (!p_VirtualAlloc2 || !p_MapViewOfFile3 || !p_UnmapViewOfFile2) {
        fprintf(stderr, "TLB emulation needs Windows 10 version 1803 or later\n");
        return false;
    }

    SYSTEM_INFO info;
    GetSystemInfo(&info);
    g_block = info.dwAllocationGranularity;

    g_section = CreateFileMappingW(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE, 0, kSectionSize, nullptr);
    if (g_section == nullptr) {
        fprintf(stderr, "Failed to create the RDRAM section (%lu)\n", GetLastError());
        return false;
    }

    // Init runs before mods and the heap load, so only the range below the mod
    // area holds anything yet: RDRAM and the runtime's patch data.
    const uint32_t live = static_cast<uint32_t>(recomp::mod_rdram_start) - 0x80000000u;
    void* staging = MapViewOfFile(g_section, FILE_MAP_ALL_ACCESS, 0, 0, live);
    if (staging == nullptr) {
        fprintf(stderr, "Failed to map the RDRAM section (%lu)\n", GetLastError());
        return false;
    }
    memcpy(staging, rdram, live);
    UnmapViewOfFile(staging);

    if (!VirtualFree(rdram, 0, MEM_RELEASE)) {
        fprintf(stderr, "Failed to release the runtime's memory (%lu)\n", GetLastError());
        return false;
    }
    void* reserved = p_VirtualAlloc2(GetCurrentProcess(), rdram, recomp::allocation_size,
                                     MEM_RESERVE | MEM_RESERVE_PLACEHOLDER, PAGE_NOACCESS, nullptr, 0);
    if (reserved != rdram) {
        fprintf(stderr, "Failed to reserve guest memory again (%lu)\n", GetLastError());
        return false;
    }

    // kseg0 is the whole read-write range; kseg1 is RDRAM again.
    return map_at(host_address(0x80000000u), 0, kSectionSize) &&
           map_at(host_address(0xA0000000u), 0, kRdramSize);
}

#else

int g_rdram_fd = -1;

bool map_at(uint8_t* at, uint32_t phys, uint32_t size) {
    void* p = mmap(at, size, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_FIXED, g_rdram_fd, phys);
    return p == at;
}

void unmap_at(uint8_t* at) {
    mmap(at, g_block, PROT_NONE, MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED, -1, 0);
}

bool create_backing(uint8_t* rdram) {
    g_block = static_cast<uint32_t>(sysconf(_SC_PAGESIZE));
#if defined(__linux__)
    g_rdram_fd = memfd_create("bm64u2-rdram", MFD_CLOEXEC);
#else
    // macOS has no memfd; an unlinked POSIX shared memory object is the same.
    char name[32];
    snprintf(name, sizeof(name), "/bm64u2-rdram-%d", static_cast<int>(getpid()));
    g_rdram_fd = shm_open(name, O_RDWR | O_CREAT | O_EXCL, 0600);
    if (g_rdram_fd >= 0) {
        shm_unlink(name);
    }
#endif
    if (g_rdram_fd < 0 || ftruncate(g_rdram_fd, kRdramSize) != 0) {
        perror("Failed to create the RDRAM mapping");
        return false;
    }

    void* staging = mmap(nullptr, kRdramSize, PROT_READ | PROT_WRITE, MAP_SHARED, g_rdram_fd, 0);
    if (staging == MAP_FAILED) {
        perror("Failed to map RDRAM");
        return false;
    }
    memcpy(staging, rdram, kRdramSize);
    munmap(staging, kRdramSize);

    // kseg0 is RDRAM itself; kseg1 is the same memory again.
    return map_at(host_address(0x80000000u), 0, kRdramSize) &&
           map_at(host_address(0xA0000000u), 0, kRdramSize);
}

#endif

// Add the blocks one page needs: [vaddr, vaddr + size) shows phys onwards.
void want_page(std::map<uint32_t, uint32_t>& want, uint32_t vaddr, uint32_t phys, uint32_t size) {
    if (phys == kNoPage) {
        return;
    }
    if (phys + size > kRdramSize || (vaddr - phys) % g_block != 0) {
        fprintf(stderr, "Cannot map TLB page %08X -> %08X (%u bytes) in %u-byte host blocks\n",
                vaddr, phys, size, g_block);
        return;
    }
    const uint32_t first = vaddr - vaddr % g_block;
    for (uint32_t block = first; block - first < size + (vaddr - first); block += g_block) {
        const uint32_t block_phys = phys - (vaddr - block);
        if (block_phys + g_block > kRdramSize) {
            fprintf(stderr, "TLB block %08X -> %08X runs past RDRAM\n", block, block_phys);
            continue;
        }
        auto [it, added] = want.emplace(block, block_phys);
        if (!added && it->second != block_phys) {
            fprintf(stderr, "TLB entries disagree on block %08X (%08X, %08X)\n",
                    block, it->second, block_phys);
        }
    }
}

// Bring the mapped blocks in line with the TLB entries.
void sync_blocks() {
#ifdef BM64_SOFT_TLB
    return;
#endif
    std::map<uint32_t, uint32_t> want;
    for (const TlbEntry& e : g_tlb) {
        if (e.pagesize != 0) {
            want_page(want, e.vaddr, e.evenpaddr, e.pagesize);
            want_page(want, e.vaddr + e.pagesize, e.oddpaddr, e.pagesize);
        }
    }

    for (auto it = g_blocks.begin(); it != g_blocks.end();) {
        auto w = want.find(it->first);
        if (w == want.end() || w->second != it->second) {
            unmap_at(host_address(it->first));
            it = g_blocks.erase(it);
        } else {
            ++it;
        }
    }
    for (const auto& [block, phys] : want) {
        if (g_blocks.count(block) != 0) {
            continue;
        }
        if (map_at(host_address(block), phys, g_block)) {
            g_blocks[block] = phys;
        } else {
            fprintf(stderr, "Failed to map TLB block %08X -> %08X\n", block, phys);
        }
    }
}

} // namespace

// Back RDRAM with a shared memory object so its pages can be mapped at the TLB
// windows as well. Runs once the runtime has loaded the boot code, before the
// game starts.
extern "C" bool bm64u2_tlb_init(uint8_t* rdram) {
    g_rdram = rdram;
    if (!create_backing(rdram)) {
        return false;
    }
    sync_blocks();
    return true;
}

extern "C" void bm64u2_tlb_map(uint32_t index, uint32_t pm, uint32_t vaddr, uint32_t evenp, uint32_t oddp) {
    const int slot = static_cast<int>(index & (kMaxTlbEntries - 1));
    g_tlb[slot] = TlbEntry{
        .pagesize = pagesize_from_mask(pm),
        .vaddr = vaddr,
        .evenpaddr = evenp,
        .oddpaddr = oddp,
    };
    if (g_rdram != nullptr) {
        sync_blocks();
    }
}

extern "C" void bm64u2_tlb_unmap(uint32_t index) {
    g_tlb[index & (kMaxTlbEntries - 1)] = TlbEntry{};
    if (g_rdram != nullptr) {
        sync_blocks();
    }
}

extern "C" void bm64u2_tlb_unmap_all() {
    for (TlbEntry& e : g_tlb) {
        e = TlbEntry{};
    }
    if (g_rdram != nullptr) {
        sync_blocks();
    }
}

// The kseg0 address a kuseg address is mapped to, or the address itself when
// no entry maps it (so the access faults, as it would on hardware).
extern "C" gpr bm64u2_tlb_translate(gpr address) {
    const uint32_t a = static_cast<uint32_t>(address);
    static int last = 0;
    for (int n = 0; n < kMaxTlbEntries; n++) {
        const int i = (last + n) & (kMaxTlbEntries - 1);
        const TlbEntry& e = g_tlb[i];
        const uint32_t off = a - e.vaddr;
        if (e.pagesize == 0 || off >= 2 * e.pagesize) {
            continue;
        }
        const uint32_t phys = off < e.pagesize ? e.evenpaddr : e.oddpaddr;
        if (phys == kNoPage) {
            break;
        }
        last = i;
        return static_cast<gpr>(static_cast<int32_t>(0x80000000u + phys + off % e.pagesize));
    }
    return address;
}

extern "C" uint8_t* bm64u2_guest_ptr(uint8_t* rdram, uint32_t address) {
#ifdef BM64_SOFT_TLB
    if (static_cast<int32_t>(address) >= 0) {
        address = static_cast<uint32_t>(bm64u2_tlb_translate(address));
    }
#endif
    return rdram + static_cast<uint32_t>(address + 0x80000000u);
}
