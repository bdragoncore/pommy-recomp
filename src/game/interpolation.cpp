#include <cmath>
#include <cstdint>
#include <cstring>
#include <unordered_map>

#include "recomp.h"
#include "bm64_memory.hpp"
#include "../include/rt64_extended_gbi.h"

// Frame interpolation for the game's models. Every model part is drawn by
// func_8000E728(gfx, node), which loads the part's matrix from a scratch copy
// of node + 0x10, so RT64 has nothing to tell the parts apart by and matches
// them between frames by how similar their matrices look. Bomberman's limbs
// share meshes and move a lot while walking, so it pairs the wrong ones and
// the model flickers. The node records persist from frame to frame, so a hook
// before the matrix load (bm64u2.us.toml) tags it with the node's address.
//
// The extended GBI this needs is enabled by RT64Context::send_dl.

extern "C" unsigned long long bm64u2_frame_count(void);

namespace {

// A part that turns more than this in one game frame is spinning, like the
// rollers on some enemies (135-155 degrees a frame). Interpolation takes the
// shortest way between the two orientations, which for a spin is often
// backwards, and the in-between frames showed angles the game never draws.
// Such parts are not interpolated at all: their translation swings with the
// spin (the roller is offset from its pivot), so pairing the current rotation
// with an interpolated translation threw the roller far out for a frame.
constexpr float kSpinCosine = 0.0f;  // cos(90 degrees)

struct Orientation {
    float r[3][3];
    unsigned long long frame;
};

std::unordered_map<uint32_t, Orientation> g_orientations;

float guest_float(uint8_t* rdram, gpr addr, int offset) {
    const uint32_t bits = MEM_W(offset, addr);
    float f;
    std::memcpy(&f, &bits, sizeof(f));
    return f;
}

// The rotation of the part's float matrix (node + 0x10, rows of 4), with the
// scale normalised out.
Orientation read_orientation(uint8_t* rdram, gpr node) {
    Orientation o{};
    for (int row = 0; row < 3; row++) {
        float len = 0.0f;
        for (int col = 0; col < 3; col++) {
            o.r[row][col] = guest_float(rdram, node, 0x10 + (row * 4 + col) * 4);
            len += o.r[row][col] * o.r[row][col];
        }
        len = std::sqrt(len);
        for (int col = 0; col < 3 && len > 0.0f; col++) {
            o.r[row][col] /= len;
        }
    }
    return o;
}

// Whether the part turned more than 90 degrees since the previous frame.
bool spinning(uint8_t* rdram, uint32_t node) {
    Orientation now = read_orientation(rdram, static_cast<int32_t>(node));
    now.frame = bm64u2_frame_count();
    auto it = g_orientations.find(node);
    bool spin = false;
    if (it != g_orientations.end() && now.frame - it->second.frame == 1) {
        // cos(angle) = (trace(A^T B) - 1) / 2
        float trace = 0.0f;
        for (int i = 0; i < 3; i++) {
            for (int k = 0; k < 3; k++) {
                trace += it->second.r[i][k] * now.r[i][k];
            }
        }
        spin = (trace - 1.0f) * 0.5f < kSpinCosine;
    }
    g_orientations[node] = now;
    return spin;
}

} // namespace

extern "C" void bm64u2_tag_model_part(uint8_t* rdram, recomp_context* ctx) {
    // $s2 is the display list pointer the matrix load writes to, $s1 the node.
    const uint32_t gfx = static_cast<uint32_t>(ctx->r18);
    const uint32_t node = static_cast<uint32_t>(ctx->r17);
    GfxCommand* cmd = reinterpret_cast<GfxCommand*>(bm64u2_guest_ptr(rdram, gfx));
    const uint32_t lerp = spinning(rdram, node) ? G_EX_COMPONENT_SKIP : G_EX_COMPONENT_INTERPOLATE;
    // Texture coordinates are not interpolated. Scrolling surfaces (the light
    // strips sliding under Warship Noah's floor, func_8000F7AC) step their
    // vertex t by 50 a frame and wrap by 2048; interpolating across the wrap
    // slid the texture backwards for a frame.
    gEXMatrixGroupDecomposed(cmd, node, G_EX_NOPUSH, 0,
        lerp, lerp, lerp, lerp, G_EX_COMPONENT_AUTO, G_EX_COMPONENT_AUTO, G_EX_COMPONENT_AUTO,
        G_EX_ORDER_LINEAR, G_EX_EDIT_NONE, G_EX_COMPONENT_SKIP, G_EX_COMPONENT_AUTO);
    ctx->r18 = bm64u2_sext(gfx + 2 * sizeof(GfxCommand));
}
