// The game decompresses its modules into TLB windows and jumps to the window
// base, where the module header returns its entry point. Install a trampoline
// at each base: read the entry point, identify the image (enemy and boss share
// a window and entry, so probe a few words), swap the recompiled section, and
// return the entry point. Re-install the trampoline after each swap because
// loading a section puts its own header stub at the base.
//
// The module table in generated_overlays.inl is generated from
// overlay/overlays.json and overlay/functions.json.

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include "recomp.h"
#include "bm64_memory.hpp"
#include "librecomp/overlays.hpp"

#include "generated_overlays.inl"

namespace bm64u2 {
    void register_overlay_switch();
    bool is_module_window_base(uint32_t vram);
}

namespace {

struct WindowState {
    uint32_t base = 0;
    const Bm64OverlayModule* module = nullptr;
};

WindowState windows[8];

recomp_func_t* trampoline_for(uint32_t base);

// Reads a word out of guest memory.
uint32_t guest_word(uint8_t* rdram, uint32_t vaddr) {
    uint32_t value;
    memcpy(&value, bm64u2_guest_ptr(rdram, vaddr), sizeof(value));
    return value;
}

bool probes_match(uint8_t* rdram, uint32_t base, const Bm64OverlayModule& module) {
    for (uint16_t i = 0; i < module.num_probes; i++) {
        if (guest_word(rdram, base + module.probe_off[i]) != module.probe_val[i]) {
            return false;
        }
    }
    return true;
}

// `entry` comes from the image's own header vector, so it is unique except
// for the enemy and boss images.
const Bm64OverlayModule* identify(uint8_t* rdram, uint32_t base, uint32_t entry) {
    const Bm64OverlayModule* by_entry = nullptr;
    size_t entry_matches = 0;
    for (const Bm64OverlayModule& module : bm64_overlay_modules) {
        if (module.base != base || module.entry != entry) {
            continue;
        }
        by_entry = &module;
        entry_matches++;
    }
    if (entry_matches == 1 &&
        (by_entry->num_probes == 0 || probes_match(rdram, base, *by_entry))) {
        return by_entry;
    }

    const Bm64OverlayModule* by_probe = nullptr;
    size_t probe_matches = 0;
    for (const Bm64OverlayModule& module : bm64_overlay_modules) {
        if (module.base != base || module.num_probes == 0) {
            continue;
        }
        if (probes_match(rdram, base, module)) {
            by_probe = &module;
            probe_matches++;
        }
    }
    if (probe_matches == 1) {
        return by_probe;
    }

    // A single-module window needs no disambiguation at all.
    const Bm64OverlayModule* only = nullptr;
    size_t candidates = 0;
    for (const Bm64OverlayModule& module : bm64_overlay_modules) {
        if (module.base == base) {
            only = &module;
            candidates++;
        }
    }
    return candidates == 1 ? only : nullptr;
}

void swap_in(uint8_t* rdram, uint32_t base, const Bm64OverlayModule& module) {
    for (WindowState& state : windows) {
        if (state.base != base || state.module == nullptr) {
            continue;
        }
        if (state.module == &module) {
            return;  // already loaded
        }
        unload_overlays((int32_t)base, state.module->size);
        state.module = nullptr;
    }
    load_overlays(module.rom, (int32_t)base, module.size);
    // Loading a section registers its own header stub; put the trampoline back.
    recomp::overlays::add_loaded_function((int32_t)base, trampoline_for(base));
    for (WindowState& state : windows) {
        if (state.base == base || state.base == 0) {
            state.base = base;
            state.module = &module;
            break;
        }
    }
}

// The header starts with the vector the loader jumps to:
//   lui $v0, 0x6000; jr $ra; addiu $v0, $v0, 0x681C
// The entry point is (first word << 16) + the sign-extended third-word immediate.
uint32_t header_entry(uint8_t* rdram, uint32_t base) {
    const uint32_t upper = guest_word(rdram, base) << 16;
    const uint32_t immediate = guest_word(rdram, base + 8) & 0xFFFF;
    return upper + (uint32_t)(int32_t)(int16_t)immediate;
}

template <uint32_t Base>
void window_entry(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t entry = header_entry(rdram, Base);
    const Bm64OverlayModule* module = identify(rdram, Base, entry);
    if (module == nullptr) {
        fprintf(stderr, "No module image at %08X matches entry %08X\n", Base, entry);
        ctx->r2 = bm64u2_sext(entry);
        return;
    }
    if (module->entry != entry) {
        fprintf(stderr, "Module image at %08X looks like %s but returns entry %08X, not %08X\n",
                Base, module->name, entry, module->entry);
    }
    swap_in(rdram, Base, *module);
    ctx->r2 = bm64u2_sext(entry);
}

recomp_func_t* trampoline_for(uint32_t base) {
    switch (base) {
        case 0x40000000: return &window_entry<0x40000000>;
        case 0x41000000: return &window_entry<0x41000000>;
        case 0x42000000: return &window_entry<0x42000000>;
        case 0x43000000: return &window_entry<0x43000000>;
        case 0x44000000: return &window_entry<0x44000000>;
        case 0x45000000: return &window_entry<0x45000000>;
        case 0x60000000: return &window_entry<0x60000000>;
    }
    return nullptr;
}

}  // namespace

bool bm64u2::is_module_window_base(uint32_t vram) {
    for (uint32_t base : bm64_overlay_window_bases) {
        if (base == vram) {
            return true;
        }
    }
    return false;
}

void bm64u2::register_overlay_switch() {
    for (uint32_t base : bm64_overlay_window_bases) {
        recomp_func_t* trampoline = trampoline_for(base);
        if (trampoline == nullptr) {
            fprintf(stderr, "No trampoline for module window %08X\n", base);
            abort();
        }
        recomp::overlays::add_loaded_function((int32_t)base, trampoline);
    }
}
