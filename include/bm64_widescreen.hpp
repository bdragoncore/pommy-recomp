#pragma once

#include <cstdint>

// Widescreen support. The window's aspect ratio is recorded each graphics task
// and written into the game's 3D projection matrix (see src/game/widescreen.cpp).
// The toggle is exposed as the "Widescreen" option in the Graphics tab.
namespace bm64::widescreen {
    void set_window_size(unsigned width, unsigned height);
    void set_enabled(bool enabled);
    bool enabled();
    void set_expand(bool expand);
    // Rewrites the 3D projection matrix in RDRAM for the current window aspect.
    void apply_projection(uint8_t* rdram);
}
