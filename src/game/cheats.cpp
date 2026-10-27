#include "bm64_cheats.hpp"

#include <atomic>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <sstream>
#include <unordered_map>

#include "recomp.h"
#include "bm64_memory.hpp"

// GameShark interpreter for the Cheats tab. The built-in codes come from the
// published US lists (world-of-nintendo, almarsguides, Codejunkies, TCRF),
// which agree on the addresses. The usual master code (F1073EE4 2400) patches
// a watchpoint the recompiled game never uses, so it isn't included.
//
// Supported: 80/81 (8/16-bit write), D0-D3 (conditional), 50 (repeat),
// F0/F1 (first frame), DE/EE/FF (ignored), 90/91 (OR, extension).

namespace bm64::cheats {

namespace {

const std::vector<Cheat> kBuiltin = {
    // The published code, 810ABD52 FFFF, writes only the low half of the 32-bit
    // money at 0x800ABD50. Picking money up then carries into the high half
    // (0x0001FFFF = 131071), which the five-digit HUD shows as 13107. Hold the
    // whole word at 99999, the most the HUD can show.
    { "infinite_money", "Infinite Money",
      "Keeps the money counter at its maximum, 99999.",
      "810ABD50 0001\n810ABD52 869F" },
    // The published code only sets the bomb level. The capacity is a separate
    // field (+0x28) filled from the table at 0x80091D30 when a Bomb Up is
    // picked up, so set the level-3 capacity for each bomb type too.
    { "max_bombs", "Max Bombs",
      "Bomb level 3: up to 4 bombs at once with normal bombs (3 or 1 with some "
      "special bomb types, as in the game's own table).",
      "800AD737 0003\n"
      "D00AD73B 0000\n800AD75B 0004\n"
      "D00AD73B 0001\n800AD75B 0003\n"
      "D00AD73B 0002\n800AD75B 0003\n"
      "D00AD73B 0004\n800AD75B 0004" },
    { "max_fire", "Max Fire Level",
      "Fire level always 3.",
      "800AD733 0003" },
    // Not a published code. Type 3 of the player attribute setter (0x8005BE2C)
    // is the skate level, 0-3, a word at 0x800AD73C; the game accepts nothing
    // higher. Checked in a running game: 3 walks visibly faster.
    { "max_speed", "Max Speed",
      "Skate level always 3, the fastest walking speed.",
      "800AD73F 0003" },
    { "infinite_health", "Infinite Health",
      "Health refills to 5 hearts every frame.",
      "800AD75F 0005" },
    // Health above the capacity at 0x800AD762 hangs the game, so only refill
    // to 10 once the capacity is 10.
    { "infinite_health_10", "Infinite Health (10 Hearts)",
      "Health refills to 10 hearts every frame. Needs Maximum Health; without "
      "it the refill stays off.",
      "D10AD762 000A\n800AD75F 000A" },
    { "max_health", "Maximum Health (10 Hearts)",
      "Raises the heart capacity to 10. Story mode only. Pair it with "
      "Infinite Health (10 Hearts) to keep all ten full.",
      "D108F912 0005\n8108F912 000A\n810AD762 0005\n810AD762 000A" },
    // The word at 0x8008F8B4 holds the lives in its low nibble and a re-init
    // flag in bit 7. Writing 0x0004 every frame clears the flag before the game
    // consumes it, so guard with D3.
    { "infinite_lives", "Infinite Lives",
      "Lives stay at 4.",
      "D308F8B6 0084\n8108F8B6 0004" },
    { "infinite_continue_time", "Infinite Continue Time",
      "The continue countdown never runs out.",
      "810B5CD6 0090" },
    // The published "Have Time Bombs" code, 800AD743 0007, sets all three
    // armor abilities at once: bits 0-2 of the player's ability word at
    // 0x800AD740 (types 4-6 of the attribute setter, 0x8005BE2C). Each gets its
    // own toggle here, ORed in so they don't overwrite one another.
    { "kick_bombs", "Kick Bombs",
      "Kick bombs without the Guardian Boots.",
      "900AD743 0001" },
    { "throw_bombs", "Throw Bombs",
      "Pick up, throw and pump bombs without the Guardian Gloves.",
      "900AD743 0002" },
    { "remote_bombs", "Remote Bombs",
      "Bombs wait for the detonate button instead of a fuse. Can be glitchy in "
      "areas where remote bombs are normally unavailable.",
      "900AD743 0004" },
    // Not a published code. Story flags 0x88-0x8E are bits 0-6 of the byte at
    // 0x800AC2DE; bit 7 is an unrelated flag, so OR instead of writing.
    { "unlock_all_bombs", "Unlock All Bombs",
      "Every elemental bomb is available in the bomb select ring. The flags "
      "are story progress, so saving with this on keeps them.",
      "900AC2DE 007F" },
    // Not a published code. Bytes 0x800AC344-0x800AC356 of the save block
    // (block offsets 0x30-0x42) hold the worlds' open and cleared flags, found
    // by setting them in a running game. The Custom Bomberman parts on offer
    // follow progress, so this also opens every part. OR, like the bombs.
    { "unlock_all_progress", "Unlock All Progress",
      "Every world is open and marked as cleared, which also makes every Custom "
      "Bomberman part available. The flags are story progress, so saving with "
      "this on keeps them.",
      "910AC344 FFFF\n910AC346 FFFF\n910AC348 FFFF\n910AC34A FFFF\n910AC34C FFFF\n910AC34E FFFF\n910AC350 FFFF\n910AC352 FFFF\n910AC354 FFFF\n900AC356 00FF" },
};

const std::vector<const char*> kPommyForms = {
    "Standard Pommy", "Knuckle", "Pommy On All Fours", "Squeaky Hammer",
    "Blue w/ Black Claws", "Penguin", "Dinosaur", "Death", "Knight",
    "Bat w/ Spear", "Female Bomberman", "Bird", "Black Chicken",
    "Flying Dragon-Like Thing", "Big Dragon", "Fairy", "Flying Black Thing",
};

struct Code {
    uint8_t type;
    uint32_t addr;   // full kseg0 address
    uint16_t value;
    // Put the game's own value back when the cheat is turned off.
    bool restore = false;
};

// Cheats that switch something on rather than hand something out. The game
// keeps whatever they last wrote (it only resets the ability byte when a file
// loads), so turning one off would otherwise change nothing.
const char* const kRestoreOnDisable[] = { "kick_bombs", "throw_bombs", "remote_bombs" };

bool restores(const char* id) {
    for (const char* r : kRestoreOnDisable) {
        if (std::strcmp(r, id) == 0) {
            return true;
        }
    }
    return false;
}

struct State {
    std::mutex mutex;
    std::unordered_map<std::string, bool> enabled;
    int pommy_form = -1;
    int test_map = 0;
    std::string custom;
    bool dirty = true;
    std::vector<Code> program;
};

State& state() {
    static State s;
    return s;
}

// Parses "AAAAAAAA VVVV" pairs separated by newlines, ';' or ','. Anything
// that does not look like a code is skipped with a warning.
void parse_codes(const std::string& text, const char* origin, std::vector<Code>& out, bool restore = false) {
    std::string cleaned;
    for (char c : text) {
        cleaned += (c == ';' || c == ',' || c == '\n' || c == '\r') ? '\n' : c;
    }
    std::istringstream lines(cleaned);
    std::string line;
    while (std::getline(lines, line)) {
        std::string hex;
        for (char c : line) {
            if (std::isxdigit(static_cast<unsigned char>(c))) {
                hex += c;
            } else if (!std::isspace(static_cast<unsigned char>(c))) {
                hex = "!";
                break;
            }
        }
        if (hex.empty()) {
            continue;
        }
        if (hex.size() != 12) {
            fprintf(stderr, "Cheats (%s): ignoring malformed code '%s'\n", origin, line.c_str());
            continue;
        }
        const uint32_t word = static_cast<uint32_t>(std::strtoul(hex.substr(0, 8).c_str(), nullptr, 16));
        Code code;
        code.type = static_cast<uint8_t>(word >> 24);
        code.addr = 0x80000000u | (word & 0x00FFFFFFu);
        code.value = static_cast<uint16_t>(std::strtoul(hex.substr(8, 4).c_str(), nullptr, 16));
        code.restore = restore;
        out.push_back(code);
    }
}

void rebuild(State& s) {
    s.program.clear();
    for (const Cheat& cheat : kBuiltin) {
        auto it = s.enabled.find(cheat.id);
        if (it != s.enabled.end() && it->second) {
            parse_codes(cheat.codes, cheat.id, s.program, restores(cheat.id));
        }
    }
    char buf[256];
    if (s.pommy_form >= 0) {
        snprintf(buf, sizeof(buf), "800ABD60 00%02X", s.pommy_form & 0xFF);
        parse_codes(buf, "pommy_form", s.program, true);
    }
    if (s.test_map != 0) {
        // TCRF: hold L+R to warp. 0x800A0171 is the low byte of controller 1's
        // buttons; 0x08 is the slope test map, 0x09 the flat checkerboard.
        snprintf(buf, sizeof(buf),
                 "D00A0171 0030\n800ABD4B 00%02X\nD00A0171 0030\n800ABD4F 0000\n"
                 "D00A0171 0030\n800ABD43 0001",
                 s.test_map & 0xFF);
        parse_codes(buf, "test_map", s.program);
    }
    parse_codes(s.custom, "custom", s.program);
    s.dirty = false;
}

// RDRAM is stored as native-endian words, so sub-word accesses flip the low
// address bits exactly like the MEM_B / MEM_H macros do.
uint8_t* byte_ptr(uint8_t* rdram, uint32_t addr) {
    return bm64u2_guest_ptr(rdram, addr ^ 3);
}

uint16_t* half_ptr(uint8_t* rdram, uint32_t addr) {
    return reinterpret_cast<uint16_t*>(bm64u2_guest_ptr(rdram, (addr & ~1u) ^ 2));
}

uint16_t read(uint8_t* rdram, bool half, uint32_t addr) {
    if (half) {
        uint16_t* p = half_ptr(rdram, addr);
        return p != nullptr ? *p : 0;
    }
    uint8_t* p = byte_ptr(rdram, addr);
    return p != nullptr ? *p : 0;
}

void write(uint8_t* rdram, bool half, uint32_t addr, uint16_t value) {
    if (half) {
        if (uint16_t* p = half_ptr(rdram, addr)) {
            *p = value;
        }
    } else if (uint8_t* p = byte_ptr(rdram, addr)) {
        *p = static_cast<uint8_t>(value);
    }
}

bool is_half(uint8_t type) {
    return type == 0x81 || type == 0x89 || type == 0xA1 || type == 0xD1 ||
           type == 0xD3 || type == 0xF1 || type == 0x91;
}

// What a restoring code found under its mask before its first write, and what
// it wrote last. A plain write covers the whole byte or halfword; an OR code
// only its own bits, so several can share an address. Keyed by
// (address << 16) | mask. Only the game thread touches this.
struct Saved {
    uint32_t addr;
    bool half;
    uint16_t mask;
    uint16_t original;
    uint16_t written;
};

std::unordered_map<uint64_t, Saved>& saved_values() {
    static std::unordered_map<uint64_t, Saved> saved;
    return saved;
}

uint16_t code_mask(const Code& code, bool half) {
    if (code.type == 0x90 || code.type == 0x91) {
        return code.value;
    }
    return half ? 0xFFFF : 0xFF;
}

uint64_t saved_key(const Code& code, bool half) {
    return (static_cast<uint64_t>(code.addr) << 16) | code_mask(code, half);
}

// Records the value under a restoring code's mask the first time it applies.
void remember(uint8_t* rdram, const Code& code, bool half) {
    auto [it, inserted] = saved_values().try_emplace(saved_key(code, half));
    Saved& v = it->second;
    if (inserted) {
        v.addr = code.addr;
        v.half = half;
        v.mask = code_mask(code, half);
        v.original = read(rdram, half, code.addr) & v.mask;
    }
    v.written = code.value & v.mask;
}

// Puts back the game's value at every address no restoring code in `program`
// writes any more, unless the game has changed it since.
void restore_dropped(uint8_t* rdram, const std::vector<Code>& program) {
    auto& saved = saved_values();
    for (auto it = saved.begin(); it != saved.end();) {
        bool kept = false;
        for (const Code& code : program) {
            if (code.restore && saved_key(code, is_half(code.type)) == it->first) {
                kept = true;
                break;
            }
        }
        if (kept) {
            ++it;
            continue;
        }
        const Saved& v = it->second;
        const uint16_t current = read(rdram, v.half, v.addr);
        if ((current & v.mask) == v.written) {
            write(rdram, v.half, v.addr, static_cast<uint16_t>((current & ~v.mask) | v.original));
        }
        it = saved.erase(it);
    }
}

void run(uint8_t* rdram, const std::vector<Code>& program) {
    static bool first_frame = true;
    for (size_t i = 0; i < program.size(); i++) {
        const Code& code = program[i];
        switch (code.type) {
        case 0x80: case 0x88: case 0xA0:
        case 0x81: case 0x89: case 0xA1: {
            const bool half = is_half(code.type);
            if (code.restore) {
                remember(rdram, code, half);
            }
            write(rdram, half, code.addr, code.value);
            break;
        }
        case 0x90: case 0x91: {
            const bool half = is_half(code.type);
            if (code.restore) {
                remember(rdram, code, half);
            }
            const uint16_t merged = static_cast<uint16_t>(read(rdram, half, code.addr) | code.value);
            write(rdram, half, code.addr, merged);
            break;
        }
        case 0xF0: case 0xF1:
            if (first_frame) {
                write(rdram, is_half(code.type), code.addr, code.value);
            }
            break;
        case 0xD0: case 0xD1: case 0xD2: case 0xD3: {
            const bool half = is_half(code.type);
            const uint16_t want = half ? code.value : (code.value & 0xFF);
            const bool equal = read(rdram, half, code.addr) == want;
            const bool pass = (code.type <= 0xD1) ? equal : !equal;
            if (!pass) {
                i++;  // skip the guarded code
            }
            break;
        }
        case 0x50: {
            if (i + 1 >= program.size()) {
                break;
            }
            const Code& next = program[++i];
            const uint32_t count = (code.addr >> 8) & 0xFF;
            const uint32_t step = code.addr & 0xFF;
            uint32_t addr = next.addr;
            uint16_t value = next.value;
            for (uint32_t n = 0; n < count; n++) {
                write(rdram, is_half(next.type), addr, value);
                addr += step;
                value = static_cast<uint16_t>(value + code.value);
            }
            break;
        }
        case 0xDE: case 0xEE: case 0xFF:
            break;
        default: {
            static bool warned = false;
            if (!warned) {
                warned = true;
                fprintf(stderr, "Cheats: unsupported code type %02X (%08X %04X) ignored\n",
                        code.type, code.addr, code.value);
            }
            break;
        }
        }
    }
    first_frame = false;
}

} // namespace

const std::vector<Cheat>& builtin() { return kBuiltin; }

const std::vector<const char*>& pommy_forms() { return kPommyForms; }

void set_enabled(const std::string& id, bool enabled) {
    State& s = state();
    std::lock_guard lock(s.mutex);
    s.enabled[id] = enabled;
    s.dirty = true;
}

void set_pommy_form(int form) {
    State& s = state();
    std::lock_guard lock(s.mutex);
    s.pommy_form = form;
    s.dirty = true;
}

void set_test_map(int map) {
    State& s = state();
    std::lock_guard lock(s.mutex);
    s.test_map = map;
    s.dirty = true;
}

// The owned Custom Bomberman parts: two 32-bit masks at block offsets
// 0x20-0x27 of the save block, 0x800AC334-0x800AC33B in RAM. Found by diffing
// saves around shop purchases; the parts hidden in the stages are the bits the
// shop never sets. There are 40: all of the first word and the low byte of the
// second, checked in the Custom editor.
constexpr uint32_t kOwnedParts = 0x800AC334;
constexpr uint8_t kOwnedPartsMask[8] = { 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF };
std::atomic<bool> g_unlock_parts{false};

void unlock_custom_parts() {
    g_unlock_parts.store(true);
}

void set_custom_codes(const std::string& codes) {
    State& s = state();
    std::lock_guard lock(s.mutex);
    s.custom = codes;
    s.dirty = true;
}

} // namespace bm64::cheats

// Called from the scheduler patch (patches/scheduler.c) once per game frame.
extern "C" void bm64_host_apply_cheats(uint8_t* rdram, recomp_context* ctx) {
    (void)ctx;
    using namespace bm64::cheats;
    if (g_unlock_parts.exchange(false)) {
        for (uint32_t i = 0; i < sizeof(kOwnedPartsMask); i++) {
            const uint32_t addr = kOwnedParts + i;
            write(rdram, false, addr, static_cast<uint16_t>(read(rdram, false, addr) | kOwnedPartsMask[i]));
        }
    }

    State& s = state();
    std::vector<Code> program;
    bool rebuilt = false;
    {
        std::lock_guard lock(s.mutex);
        if (s.dirty) {
            rebuild(s);
            rebuilt = true;
        }
        program = s.program;
    }
    if (rebuilt) {
        restore_dropped(rdram, program);
    }
    if (!program.empty()) {
        run(rdram, program);
    }
}
