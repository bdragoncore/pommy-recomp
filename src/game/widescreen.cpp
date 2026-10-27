#include "bm64_widescreen.hpp"

#include <cstring>

// The game builds its 3D projection at 0x80008E30 with a fixed 4:3 aspect.
// The matrix is only rebuilt when a scene loads, so correct m00 once per
// graphics task, before RT64 reads the display list. m11 is 1/tan(fovy/2),
// so m00 = m11 / aspect widens the frustum without changing the vertical
// field of view.

namespace {
    constexpr float kOriginalAspect = 4.0f / 3.0f;
    // The projection matrix the game writes to (vram 0x800A60F8).
    constexpr uint32_t kProjectionMatrix = 0xA60F8;
    constexpr uint32_t kM00 = kProjectionMatrix + 0 * 4;
    constexpr uint32_t kM11 = kProjectionMatrix + 5 * 4;

    float g_window_aspect = kOriginalAspect;
    bool g_enabled = true;
    // Only widen when RT64 expands the image to the window; under 4:3 it
    // pillarboxes, and a wider projection would squash the image.
    bool g_expand = true;

    float target_aspect() {
        return (g_enabled && g_expand) ? g_window_aspect : kOriginalAspect;
    }

    // RDRAM is stored as native-endian words.
    float read_word(const uint8_t* rdram, uint32_t offset) {
        uint32_t raw = 0;
        std::memcpy(&raw, rdram + offset, sizeof(raw));
        float value = 0.0f;
        std::memcpy(&value, &raw, sizeof(value));
        return value;
    }

    void write_word(uint8_t* rdram, uint32_t offset, float value) {
        uint32_t raw = 0;
        std::memcpy(&raw, &value, sizeof(raw));
        std::memcpy(rdram + offset, &raw, sizeof(raw));
    }
}

namespace bm64::widescreen {
    void set_window_size(unsigned width, unsigned height) {
        float aspect = kOriginalAspect;
        if (width > 0 && height > 0) {
            aspect = static_cast<float>(width) / static_cast<float>(height);
        }
        g_window_aspect = aspect > kOriginalAspect ? aspect : kOriginalAspect;
    }

    void set_enabled(bool enabled) {
        g_enabled = enabled;
    }

    bool enabled() {
        return g_enabled;
    }

    void set_expand(bool expand) {
        g_expand = expand;
    }

    void apply_projection(uint8_t* rdram) {
        const float m11 = read_word(rdram, kM11);
        if (!(m11 > 0.0f)) {
            return;
        }
        const float m00 = m11 / target_aspect();
        if (read_word(rdram, kM00) == m00) {
            return;
        }
        write_word(rdram, kM00, m00);
    }
}
