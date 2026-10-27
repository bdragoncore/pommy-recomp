#include "../../RecompiledPatches/recomp_overlays.inl"

#include "librecomp/overlays.hpp"

extern "C" {
    extern const char bm64_patches_bin[];
    extern const size_t bm64_patches_bin_size;
}

// Register the N64Recomp-generated patch table. PatchesLib is linked before
// RecompiledFuncs, so its definitions override the originals; the binary and
// manual-symbol tables cover the runtime's module loading paths.
namespace bm64u2 {
void register_patches() {
    recomp::overlays::register_patches(bm64_patches_bin, bm64_patches_bin_size, section_table, ARRLEN(section_table));
    recomp::overlays::register_base_exports(export_table);
    recomp::overlays::register_base_events(event_names);
    recomp::overlays::register_manual_patch_symbols(manual_patch_symbols);
}
}
