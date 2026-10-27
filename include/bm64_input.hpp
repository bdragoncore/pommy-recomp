#pragma once

#include <cstdint>

#include <ultramodern/input.hpp>

// Host controller input. ultramodern routes osContInit / osContStartReadData /
// osContGetReadData here. With the settings UI this forwards to recompinput
// (the same path as battle-tanx-recomp); without it, src/game/input.cpp maps
// the first pad and the keyboard itself.
namespace bm64::input {
    // Drain SDL's event queue. Only used when the settings UI is not built.
    void pump_events();
    void poll();
    bool get(int32_t controller, uint16_t* buttons, float* x, float* y);
    void set_rumble(int32_t controller, bool on);

    // What is plugged into the controller: a Controller Pak (saves, such as
    // Custom Bomberman designs), a Rumble Pak, or both at once, which a real
    // controller cannot do (src/game/input.cpp, bm64u2_motor_init_done).
    enum class Accessory { ControllerPak, RumblePak, Both };

    // ultramodern::input::Pak has ControllerPak commented out after RumblePak.
    // This is that value: the runtime then reports an accessory as present and
    // its osMotorInit answers PFS_ERR_DEVICE, as for a real Controller Pak.
    constexpr ultramodern::input::Pak kControllerPak = static_cast<ultramodern::input::Pak>(2);
    void set_accessory(Accessory accessory);
    ultramodern::input::connected_device_info_t device_info(int32_t controller);
}
