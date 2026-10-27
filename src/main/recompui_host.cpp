#include "recompui_host.hpp"

#ifdef BM64_RECOMP_UI

#include <cstdio>
#include <cstdlib>
#include <string>

#include <SDL.h>
// The native window handle is only needed on Windows and macOS; on Linux this
// header pulls in X11, whose macros break RmlUi's headers.
#if defined(_WIN32) || defined(__APPLE__)
#include <SDL_syswm.h>
#endif

#include "bm64_config.hpp"
#include "icon_bytes.h"
#include "recompui/config.h"
#include "recompui/recompui.h"
#include "stb/stb_image.h"

// RecompFrontend's UI state looks up the host window through this global.
SDL_Window* window = nullptr;

namespace {
    bool g_ready = false;

    void set_window_icon(SDL_Window* target) {
        int width = 0;
        int height = 0;
        int channels = 0;
        stbi_uc* pixels = stbi_load_from_memory(
            reinterpret_cast<const stbi_uc*>(icon_bytes),
            static_cast<int>(icon_bytes_size),
            &width, &height, &channels, 4);
        if (pixels == nullptr) {
            return;
        }

        SDL_Surface* surface = SDL_CreateRGBSurfaceFrom(
            pixels, width, height, 32, width * 4,
#if SDL_BYTEORDER == SDL_LIL_ENDIAN
            0x000000FF, 0x0000FF00, 0x00FF0000, 0xFF000000
#else
            0xFF000000, 0x00FF0000, 0x0000FF00, 0x000000FF
#endif
        );
        if (surface != nullptr) {
            SDL_SetWindowIcon(target, surface);
            SDL_FreeSurface(surface);
        }
        stbi_image_free(pixels);
    }
}

namespace bm64::ui_frontend {
    ultramodern::renderer::WindowHandle create_window() {
        // Same hint set as battle-tanx-recomp. Hints must be set before the
        // joystick and gamecontroller subsystems come up.
        SDL_SetHint(SDL_HINT_WINDOWS_DPI_AWARENESS, "permonitorv2");
        SDL_SetHint(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, "0");
        SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS4_RUMBLE, "1");
        SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5_RUMBLE, "1");
        SDL_SetHint(SDL_HINT_MOUSE_FOCUS_CLICKTHROUGH, "1");
        SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");

        if (SDL_InitSubSystem(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER | SDL_INIT_JOYSTICK | SDL_INIT_HAPTIC) != 0) {
            std::fprintf(stderr, "Failed to initialise SDL: %s\n", SDL_GetError());
            return {};
        }

        // CMake copies this next to the executable. SDL_GetBasePath finds it
        // even when AppRun has cd'd into ~/.config/bm64u2.
        if (char* base = SDL_GetBasePath()) {
            const std::string mappings = std::string(base) + "recompcontrollerdb.txt";
            const int added = SDL_GameControllerAddMappingsFromFile(mappings.c_str());
            if (added > 0) {
                std::fprintf(stderr, "Loaded %d controller mappings\n", added);
            } else if (added < 0) {
                std::fprintf(stderr, "No controller mappings at %s: %s\n", mappings.c_str(), SDL_GetError());
            }
            SDL_free(base);
        }

#if defined(__APPLE__)
        constexpr Uint32 kFlags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_METAL;
#elif defined(RT64_SDL_WINDOW_VULKAN)
        constexpr Uint32 kFlags = SDL_WINDOW_RESIZABLE | SDL_WINDOW_VULKAN;
#else
        constexpr Uint32 kFlags = SDL_WINDOW_RESIZABLE;
#endif
        window = SDL_CreateWindow(bm64::program_name.c_str(),
                                  SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                  1280, 720, kFlags);
        if (window == nullptr) {
            std::fprintf(stderr, "Failed to create the window: %s\n", SDL_GetError());
            return {};
        }

        set_window_icon(window);

        g_ready = true;

        // RT64 takes the native window on Windows and macOS, the SDL window on
        // Linux.
#if defined(_WIN32) || defined(__APPLE__)
        SDL_SysWMinfo wm_info;
        SDL_VERSION(&wm_info.version);
        SDL_GetWindowWMInfo(window, &wm_info);
#endif
#if defined(_WIN32)
        return ultramodern::renderer::WindowHandle{wm_info.info.win.window, GetCurrentThreadId()};
#elif defined(__APPLE__)
        SDL_MetalView view = SDL_Metal_CreateView(window);
        return ultramodern::renderer::WindowHandle{wm_info.info.cocoa.window, SDL_Metal_GetLayer(view)};
#else
        return window;
#endif
    }

    void queue_event(const SDL_Event& event) {
        if (g_ready) {
            recompui::queue_event(event);
        }
    }

    bool is_capturing_input() {
        return g_ready && recompui::is_context_capturing_input();
    }

}

#endif
