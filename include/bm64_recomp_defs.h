#ifndef BM64_RECOMP_DEFS_H
#define BM64_RECOMP_DEFS_H

// Force-included into the generated code (RecompiledFuncs and the patches).

#include "recomp.h"

// N64Recomp emits MEM_WU for lwu but recomp.h does not define it. Same mapping
// as MEM_W, read as unsigned.
#ifndef MEM_WU
#define MEM_WU(offset, reg) \
    (*(uint32_t*)(rdram + ((((reg) + (offset))) - 0xFFFFFFFF80000000)))
#endif

#ifdef BM64_SOFT_TLB
// Windows maps views only at 64 KB boundaries, too coarse for the game's 16 KB
// TLB pages, so kuseg addresses (every TLB window is there) are translated in
// software instead (src/main/tlb.cpp). kseg0 and kseg1 stay direct.
#ifdef __cplusplus
extern "C"
#endif
gpr bm64u2_tlb_translate(gpr address);

static inline gpr bm64u2_xlat(gpr address) {
    return (int32_t)address < 0 ? address : bm64u2_tlb_translate(address);
}

#undef MEM_W
#undef MEM_H
#undef MEM_B
#undef MEM_HU
#undef MEM_BU
#undef MEM_WU
#undef SD
#undef LD

#define MEM_W(offset, reg) \
    (*(int32_t*)(rdram + (bm64u2_xlat((reg) + (offset)) - 0xFFFFFFFF80000000)))
#define MEM_WU(offset, reg) \
    (*(uint32_t*)(rdram + (bm64u2_xlat((reg) + (offset)) - 0xFFFFFFFF80000000)))
#define MEM_H(offset, reg) \
    (*(int16_t*)(rdram + (bm64u2_xlat(((reg) + (offset)) ^ 2) - 0xFFFFFFFF80000000)))
#define MEM_HU(offset, reg) \
    (*(uint16_t*)(rdram + (bm64u2_xlat(((reg) + (offset)) ^ 2) - 0xFFFFFFFF80000000)))
#define MEM_B(offset, reg) \
    (*(int8_t*)(rdram + (bm64u2_xlat(((reg) + (offset)) ^ 3) - 0xFFFFFFFF80000000)))
#define MEM_BU(offset, reg) \
    (*(uint8_t*)(rdram + (bm64u2_xlat(((reg) + (offset)) ^ 3) - 0xFFFFFFFF80000000)))

#define SD(val, offset, reg) { \
    MEM_W((offset) + 4, reg) = (int32_t)(uint32_t)((gpr)(val) >> 0); \
    MEM_W((offset) + 0, reg) = (int32_t)(uint32_t)((gpr)(val) >> 32); \
}

// recomp.h's helpers expanded the stock macros, so the ones the generated code
// calls are redefined over the translating ones.
static inline uint64_t bm64u2_load_doubleword(uint8_t* rdram, gpr reg, gpr offset) {
    uint64_t lo = (uint64_t)(uint32_t)MEM_W(reg, offset + 4);
    uint64_t hi = (uint64_t)(uint32_t)MEM_W(reg, offset + 0);
    return (lo << 0) | (hi << 32);
}

#define LD(offset, reg) \
    bm64u2_load_doubleword(rdram, offset, reg)

static inline gpr bm64u2_do_lwl(uint8_t* rdram, gpr initial_value, gpr offset, gpr reg) {
    gpr address = (offset + reg);
    uint32_t loaded_value = MEM_W(0, address & ~0x3);
    gpr misalignment = address & 0x3;
    gpr masked_value = initial_value & (gpr)(uint32_t)~(0xFFFFFFFFu << (misalignment * 8));
    loaded_value <<= (misalignment * 8);
    return (gpr)(int32_t)(masked_value | loaded_value);
}

static inline gpr bm64u2_do_lwr(uint8_t* rdram, gpr initial_value, gpr offset, gpr reg) {
    gpr address = (offset + reg);
    uint32_t loaded_value = MEM_W(0, address & ~0x3);
    gpr misalignment = address & 0x3;
    gpr masked_value = initial_value & (gpr)(uint32_t)~(0xFFFFFFFFu >> (24 - misalignment * 8));
    loaded_value >>= (24 - misalignment * 8);
    return (gpr)(int32_t)(masked_value | loaded_value);
}

static inline void bm64u2_do_swl(uint8_t* rdram, gpr offset, gpr reg, gpr val) {
    gpr address = (offset + reg);
    gpr word_address = address & ~0x3;
    uint32_t initial_value = MEM_W(0, word_address);
    gpr misalignment = address & 0x3;
    uint32_t masked_initial_value = initial_value & ~(0xFFFFFFFFu >> (misalignment * 8));
    uint32_t shifted_input_value = ((uint32_t)val) >> (misalignment * 8);
    MEM_W(0, word_address) = masked_initial_value | shifted_input_value;
}

static inline void bm64u2_do_swr(uint8_t* rdram, gpr offset, gpr reg, gpr val) {
    gpr address = (offset + reg);
    gpr word_address = address & ~0x3;
    uint32_t initial_value = MEM_W(0, word_address);
    gpr misalignment = address & 0x3;
    uint32_t masked_initial_value = initial_value & ~(0xFFFFFFFFu << (24 - misalignment * 8));
    uint32_t shifted_input_value = ((uint32_t)val) << (24 - misalignment * 8);
    MEM_W(0, word_address) = masked_initial_value | shifted_input_value;
}

#define do_lwl bm64u2_do_lwl
#define do_lwr bm64u2_do_lwr
#define do_swl bm64u2_do_swl
#define do_swr bm64u2_do_swr
#endif

// Suspends the current game process and returns to the host scheduler; the
// file layer's yield loops call it through hooks in bm64u2.us.toml.
void bm64u2_yield_process(uint8_t* rdram, recomp_context* ctx);

// Tags a model part's matrix for frame interpolation (src/game/interpolation.cpp).
void bm64u2_tag_model_part(uint8_t* rdram, recomp_context* ctx);

// Keeps rumble working alongside the Controller Pak (src/game/input.cpp).
void bm64u2_motor_init_done(uint8_t* rdram, recomp_context* ctx);

#endif
