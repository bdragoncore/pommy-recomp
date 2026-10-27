#pragma once

#ifdef BM64_RECOMP_UI

#include <SDL.h>

#include "ultramodern/renderer_context.hpp"

// Host glue for N64Recomp's RecompFrontend (recompui + recompinput).
//
// The frontend owns the in-game settings menu (Escape), draws it through
// RT64's render hooks and reads input from the SDL events queued here.
namespace bm64::ui_frontend {
    // Creates the SDL window before RT64 starts. RT64 otherwise creates its
    // own window, but recompui needs the handle while RT64's init hook runs.
    ultramodern::renderer::WindowHandle create_window();

    // Queues one SDL event for the UI. Safe to call from the input thread.
    void queue_event(const SDL_Event& event);

    // True while a UI context (settings menu, prompt) owns the input.
    bool is_capturing_input();

}

#endif
