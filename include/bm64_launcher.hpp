#pragma once

#include "recompui/recompui.h"

namespace bm64::launcher {
    void animation_setup(recompui::LauncherMenu* menu);
    void animation_update(recompui::LauncherMenu* menu);

    // The options menu starts just off the right edge and slides in over the
    // first 1.5 seconds. Keep these in sync with the launcher layout in
    // main.cpp.
    constexpr float options_right_start = 96.0f;
    constexpr float options_right_end = 120.0f;
}
