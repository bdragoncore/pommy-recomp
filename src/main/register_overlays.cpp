#include "../../RecompiledFuncs/recomp_overlays.inl"

#include <cstring>

#include "librecomp/overlays.hpp"

namespace bm64u2 {
    void register_overlays();
    void register_overlay_functions();
    void register_overlay_switch();
    void register_tlb_functions(uint32_t alias_vaddr, uint32_t phys);
    bool is_module_window_base(uint32_t vram);
}

void bm64u2::register_overlays() {
    recomp::overlays::overlay_section_table_data_t sections {
        .code_sections = section_table,
        .num_code_sections = ARRLEN(section_table),
        .total_num_sections = num_sections,
    };

    recomp::overlays::overlays_by_index_t overlays {
        .table = overlay_sections_by_index,
        .len = ARRLEN(overlay_sections_by_index),
    };

    recomp::overlays::register_overlays(sections, overlays);
}

void bm64u2::register_overlay_functions() {
    // Section 0 is the main text and is loaded by init(). The overlays are
    // decompressed into TLB windows by the game, and the windows are reused,
    // so librecomp never sees them. overlay_switch.cpp installs a trampoline
    // at each window base and swaps the section when the loader enters it.
    // Must run after init(): init_overlays() clears the map.
    bm64u2::register_overlay_switch();
}

// The game maps a page-indexed trampoline table at 0x10000000
// (set_zero_vaddr_tlb) and jumps to the stubs as 0x1000N000. librecomp
// resolves guest addresses linearly, so point each alias at the recompiled
// stub; otherwise the first jump fails with "Failed to find function".
void bm64u2::register_tlb_functions(uint32_t alias_vaddr, uint32_t phys) {
    // The sections use two address conventions: the secure-call dispatcher is
    // sectioned at 0x801D0000 but entered at 0x10000000, while the demo
    // overlay is sectioned and entered at 0x60000000.
    const uint32_t window = 0x00010000u;
    const uint32_t phys_vram = phys + 0x80000000u;

    for (size_t section_index = 0; section_index < ARRLEN(section_table); section_index++) {
        const SectionTableEntry& section = section_table[section_index];

        // Module sections are registered by overlay_switch.cpp when their
        // image loads; don't map every image that can live in the window.
        if (bm64u2::is_module_window_base(section.ram_addr)) {
            continue;
        }

        // Address this section's first byte maps to in the window.
        uint32_t base;
        if (section.ram_addr >= alias_vaddr && section.ram_addr < alias_vaddr + window) {
            base = alias_vaddr; // already virtual, e.g. the overlay at 0x60000000
        } else if (section.ram_addr >= phys_vram && section.ram_addr < phys_vram + window) {
            base = alias_vaddr - (phys_vram - section.ram_addr); // e.g. 0x801D0000 -> 0x10000000
        } else {
            continue;
        }

        for (size_t func_index = 0; func_index < section.num_funcs; func_index++) {
            const FuncEntry& func = section.funcs[func_index];
            const uint32_t vram = base + func.offset;
            if (vram < alias_vaddr || vram >= alias_vaddr + window) {
                continue;
            }
            recomp::overlays::add_loaded_function((int32_t)vram, func.func);
        }
    }
}
