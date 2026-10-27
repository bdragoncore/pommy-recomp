#pragma once

#include <cstdint>

// Host pointer for a guest address: kseg0, kseg1 or a TLB window (see
// src/main/tlb.cpp). Same mapping as N64Recomp's memory macros, so byte and
// halfword accesses still need the ^3 / ^2 swizzle.
extern "C" uint8_t* bm64u2_guest_ptr(uint8_t* rdram, uint32_t address);

// A guest address as a register value: guest registers hold addresses
// sign-extended, and the memory macros depend on it.
constexpr int64_t bm64u2_sext(uint32_t address) {
    return static_cast<int64_t>(static_cast<int32_t>(address));
}
