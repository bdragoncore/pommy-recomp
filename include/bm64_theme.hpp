#pragma once

namespace bm64::ui_theme {
    // Applies the Bomberman palette and type scale to the RecompFrontend.
    // Must run before recomp::start builds the launcher and settings UI.
    void set_custom_theme();
}
