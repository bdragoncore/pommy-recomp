#include "bm64_input.hpp"

#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>

#include <SDL.h>

#include "recomp.h"
#ifdef BM64_RECOMP_UI
#include "recompinput/profiles.h"
#include "recompinput/recompinput.h"
#endif

// ultramodern routes the osCont* reads here. With BM64_RECOMP_UI this forwards
// to recompinput (every connected pad, remappable in the Controls tab).
// Without it, the first SDL GameController and the keyboard are mapped here.
//
// Default keyboard: arrows = stick, WASD = D-pad, X = A, Z = B, C = Z,
// Enter = Start, Q = L, E = R, I/J/K/L = C-up/C-down/C-left/C-right.

// N64 controller bits, as libultra lays them out in OSContPad.button.
static constexpr uint16_t kBtnA      = 0x8000;
static constexpr uint16_t kBtnB      = 0x4000;
static constexpr uint16_t kBtnZ      = 0x2000;
static constexpr uint16_t kBtnStart  = 0x1000;
static constexpr uint16_t kBtnUp     = 0x0800;
static constexpr uint16_t kBtnDown   = 0x0400;
static constexpr uint16_t kBtnLeft   = 0x0200;
static constexpr uint16_t kBtnRight  = 0x0100;
static constexpr uint16_t kBtnL      = 0x0020;
static constexpr uint16_t kBtnR      = 0x0010;
static constexpr uint16_t kBtnCUp    = 0x0008;
static constexpr uint16_t kBtnCDown  = 0x0004;
static constexpr uint16_t kBtnCLeft  = 0x0002;
static constexpr uint16_t kBtnCRight = 0x0001;

namespace {
    struct state {
        bool tried_init = false;
        bool sdl_ready = false;
        bool scanned = false;
        SDL_GameController* pad = nullptr;
        SDL_JoystickID pad_instance = -1;
        uint16_t buttons = 0;
        float stick_x = 0.0f;
        float stick_y = 0.0f;
        unsigned long long polls = 0;
    };

    state g_state;

    // Set from the General tab's Controller Accessory option (src/game/config.cpp).
    std::atomic<bm64::input::Accessory> g_accessory{bm64::input::Accessory::Both};

#ifndef BM64_RECOMP_UI
    void open_pad(int device_index) {
        if (g_state.pad != nullptr || !g_state.sdl_ready) {
            return;
        }
        if (SDL_IsGameController(device_index) != SDL_TRUE) {
            return;
        }
        SDL_GameController* pad = SDL_GameControllerOpen(device_index);
        if (pad == nullptr) {
            std::fprintf(stderr, "Could not open controller %d: %s\n", device_index, SDL_GetError());
            return;
        }
        g_state.pad = pad;
        g_state.pad_instance = SDL_JoystickInstanceID(SDL_GameControllerGetJoystick(pad));
        const char* name = SDL_GameControllerName(pad);
        std::fprintf(stderr, "Controller %d: %s\n", device_index, name != nullptr ? name : "unknown");
    }

    void init() {
        if (g_state.tried_init) {
            return;
        }
        g_state.tried_init = true;

        // Video is already initialized by the host's create_window before RT64
        // starts; this brings up events and joystick and starts the event pump.
        if (SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER) != 0) {
            std::fprintf(stderr, "SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER) failed: %s\n", SDL_GetError());
            return;
        }

        // Use the checked-in mapping DB so pads released after this SDL build
        // still map; CMake copies it next to the executable.
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

        g_state.sdl_ready = true;
    }

    bool held(SDL_GameControllerButton button) {
        return SDL_GameControllerGetButton(g_state.pad, button) != 0;
    }
#endif
}

namespace bm64::input {
#ifdef BM64_RECOMP_UI
    void pump_events() {}

    void poll() {
        recompinput::poll_inputs();
        g_state.polls++;
    }

    bool get(int32_t controller, uint16_t* buttons, float* x, float* y) {
        if (controller != 0) {
            return false;
        }
        if (!recompinput::profiles::get_n64_input(controller, buttons, x, y)) {
            return false;
        }
        return true;
    }

    void set_rumble(int32_t controller, bool on) {
        if (g_accessory.load() == Accessory::ControllerPak) {
            return;
        }
        recompinput::set_rumble(controller, on);
    }

    ultramodern::input::connected_device_info_t device_info(int32_t controller) {
        using namespace ultramodern::input;
        if (controller != 0) {
            return {Device::None, Pak::None};
        }
        if (g_accessory.load() != Accessory::RumblePak) {
            return {Device::Controller, kControllerPak};
        }
        return {Device::Controller, Pak::RumblePak};
    }
#else
    void pump_events() {
        init();
        if (!g_state.sdl_ready) {
            return;
        }

        // SDL_PollEvent pumps as well as pops. Draining here also keeps the
        // queue from growing, since no other part of the process reads it.
        // The launcher uses this too: it runs before the game thread starts
        // calling poll(), so without it the menu would never receive input.
        SDL_Event event;
        while (SDL_PollEvent(&event) != 0) {
#ifdef BM64_RECOMP_UI
            // The RecompFrontend menu consumes SDL events from its own queue.
            bm64::ui_frontend::queue_event(event);
#endif
            switch (event.type) {
            case SDL_CONTROLLERDEVICEADDED:
                open_pad(event.cdevice.which);
                break;
            case SDL_CONTROLLERDEVICEREMOVED:
                if (g_state.pad != nullptr && event.cdevice.which == g_state.pad_instance) {
                    SDL_GameControllerClose(g_state.pad);
                    g_state.pad = nullptr;
                    g_state.pad_instance = -1;
                    std::fprintf(stderr, "Controller removed\n");
                }
                break;
            default:
                break;
            }
        }

        if (!g_state.scanned) {
            g_state.scanned = true;
            const int count = SDL_NumJoysticks();
            for (int i = 0; i < count && g_state.pad == nullptr; i++) {
                open_pad(i);
            }
            if (g_state.pad == nullptr) {
                std::fprintf(stderr, "No game controller; keyboard only: "
                             "arrows = stick, WASD = d-pad, X/Z/C, Return, Q/E, I/J/K/L\n");
            }
        }
    }

    void poll() {
        pump_events();
        if (!g_state.sdl_ready) {
            return;
        }

        uint16_t buttons = 0;
        float x = 0.0f;
        float y = 0.0f;

        if (g_state.pad != nullptr) {
            if (held(SDL_CONTROLLER_BUTTON_A)) buttons |= kBtnA;
            if (held(SDL_CONTROLLER_BUTTON_B)) buttons |= kBtnB;
            if (held(SDL_CONTROLLER_BUTTON_Y)) buttons |= kBtnZ;
            if (held(SDL_CONTROLLER_BUTTON_START)) buttons |= kBtnStart;
            if (held(SDL_CONTROLLER_BUTTON_DPAD_UP)) buttons |= kBtnUp;
            if (held(SDL_CONTROLLER_BUTTON_DPAD_DOWN)) buttons |= kBtnDown;
            if (held(SDL_CONTROLLER_BUTTON_DPAD_LEFT)) buttons |= kBtnLeft;
            if (held(SDL_CONTROLLER_BUTTON_DPAD_RIGHT)) buttons |= kBtnRight;
            if (held(SDL_CONTROLLER_BUTTON_LEFTSHOULDER)) buttons |= kBtnL;
            if (held(SDL_CONTROLLER_BUTTON_RIGHTSHOULDER)) buttons |= kBtnR;

            // C buttons live on the right stick, Z also on the left trigger.
            constexpr Sint16 kCStickDeadzone = 16384;
            const Sint16 rx = SDL_GameControllerGetAxis(g_state.pad, SDL_CONTROLLER_AXIS_RIGHTX);
            const Sint16 ry = SDL_GameControllerGetAxis(g_state.pad, SDL_CONTROLLER_AXIS_RIGHTY);
            if (rx <= -kCStickDeadzone) buttons |= kBtnCLeft;
            if (rx >= kCStickDeadzone) buttons |= kBtnCRight;
            if (ry <= -kCStickDeadzone) buttons |= kBtnCUp;
            if (ry >= kCStickDeadzone) buttons |= kBtnCDown;
            if (SDL_GameControllerGetAxis(g_state.pad, SDL_CONTROLLER_AXIS_TRIGGERLEFT) > kCStickDeadzone) buttons |= kBtnZ;

            // SDL reports +y downwards; the N64 stick is +y upwards.
            float lx = SDL_GameControllerGetAxis(g_state.pad, SDL_CONTROLLER_AXIS_LEFTX) / 32767.0f;
            float ly = SDL_GameControllerGetAxis(g_state.pad, SDL_CONTROLLER_AXIS_LEFTY) / 32767.0f;
            constexpr float kStickDeadzone = 0.15f;
            if (lx > -kStickDeadzone && lx < kStickDeadzone) lx = 0.0f;
            if (ly > -kStickDeadzone && ly < kStickDeadzone) ly = 0.0f;
            x += lx;
            y -= ly;
        }

        const Uint8* keys = SDL_GetKeyboardState(nullptr);
        if (keys != nullptr) {
            if (keys[SDL_SCANCODE_UP]) y += 1.0f;
            if (keys[SDL_SCANCODE_DOWN]) y -= 1.0f;
            if (keys[SDL_SCANCODE_LEFT]) x -= 1.0f;
            if (keys[SDL_SCANCODE_RIGHT]) x += 1.0f;

            if (keys[SDL_SCANCODE_W]) buttons |= kBtnUp;
            if (keys[SDL_SCANCODE_S]) buttons |= kBtnDown;
            if (keys[SDL_SCANCODE_A]) buttons |= kBtnLeft;
            if (keys[SDL_SCANCODE_D]) buttons |= kBtnRight;
            if (keys[SDL_SCANCODE_X]) buttons |= kBtnA;
            if (keys[SDL_SCANCODE_Z]) buttons |= kBtnB;
            if (keys[SDL_SCANCODE_C]) buttons |= kBtnZ;
            if (keys[SDL_SCANCODE_RETURN] || keys[SDL_SCANCODE_KP_ENTER]) buttons |= kBtnStart;
            if (keys[SDL_SCANCODE_Q]) buttons |= kBtnL;
            if (keys[SDL_SCANCODE_E]) buttons |= kBtnR;
            if (keys[SDL_SCANCODE_I]) buttons |= kBtnCUp;
            if (keys[SDL_SCANCODE_K]) buttons |= kBtnCDown;
            if (keys[SDL_SCANCODE_J]) buttons |= kBtnCLeft;
            if (keys[SDL_SCANCODE_L]) buttons |= kBtnCRight;
        }

#ifdef BM64_RECOMP_UI
        // While a RecompFrontend menu or prompt is open it owns the input, so
        // the game must not see the same key presses.
        if (bm64::ui_frontend::is_capturing_input()) {
            buttons = 0;
            x = 0.0f;
            y = 0.0f;
        }
#endif

        const float magnitude = std::sqrt(x * x + y * y);
        if (magnitude > 1.0f) {
            x /= magnitude;
            y /= magnitude;
        }

        g_state.buttons = buttons;
        g_state.stick_x = x;
        g_state.stick_y = y;

        g_state.polls++;
    }

    bool get(int32_t controller, uint16_t* buttons, float* x, float* y) {
        if (controller != 0) {
            return false;
        }
        init();
        if (!g_state.sdl_ready) {
            return false;
        }
        *buttons = g_state.buttons;
        *x = g_state.stick_x;
        *y = g_state.stick_y;
        return true;
    }

    void set_rumble(int32_t controller, bool on) {
        if (controller != 0 || g_state.pad == nullptr || g_accessory.load() == Accessory::ControllerPak) {
            return;
        }
        const Uint16 strength = on ? 0xFFFF : 0;
        const Uint32 duration = on ? 0xFFFFFFFFu : 0;
        SDL_GameControllerRumble(g_state.pad, strength, strength, duration);
    }

    ultramodern::input::connected_device_info_t device_info(int32_t controller) {
        using namespace ultramodern::input;
        if (controller != 0) {
            return {Device::None, Pak::None};
        }
        init();
        if (!g_state.sdl_ready) {
            return {Device::None, Pak::None};
        }
        if (g_accessory.load() != Accessory::RumblePak) {
            return {Device::Controller, kControllerPak};
        }
        return {Device::Controller, g_state.pad != nullptr ? Pak::RumblePak : Pak::None};
    }
#endif

    void set_accessory(Accessory accessory) {
        g_accessory.store(accessory);
    }
}

// Hooked after the game's osMotorInit call (func_80006358, bm64u2.us.toml).
// With a Controller Pak reported the runtime's osMotorInit fails, and the game
// then leaves rumble off for that port. For Both, mark the motor handle
// initialised and report success: the runtime's __osMotorAccess only checks
// that bit before calling set_rumble. The same trick as Extreme-G's recomp.
extern "C" void bm64u2_motor_init_done(uint8_t* rdram, recomp_context* ctx) {
    if (ctx->r2 == 0 || g_accessory.load() != bm64::input::Accessory::Both) {
        return;
    }
    constexpr uint32_t kMotorHandles = 0x800A5560;  // one OSPfs (0x68 bytes) per port
    constexpr int32_t kPfsMotorInitialized = 0x8;
    const gpr channel_ptr = static_cast<int32_t>(MEM_W(0x20, ctx->r29));
    const int32_t channel = static_cast<int16_t>(MEM_H(0x0, channel_ptr));
    const gpr pfs = static_cast<int32_t>(kMotorHandles + channel * 0x68);
    MEM_W(0x00, pfs) = MEM_W(0x00, pfs) | kPfsMotorInitialized;
    ctx->r2 = 0;
}
