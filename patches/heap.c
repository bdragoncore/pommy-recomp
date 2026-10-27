#include "patches.h"

// Main heap setup, func_80006E48(base, size). The boot code sizes the heap for
// a 4 MB console (0x802D0000 + 0x130000 = 0x80400000); the runtime has 8 MB and
// nothing in the ROM or overlays uses above 4 MB, so extend it to the end.
// Without this, an elemental bomb from Unlock All Bombs can exhaust the heap
// when its blast module loads.

#define RDRAM_4MB_END 0x80400000u
#define RDRAM_8MB_END 0x80800000u

// Initialises an allocator over [base, base + size) and returns its handle.
void* func_80007214(void* base, u32 size);

RECOMP_PATCH void func_80006E48(void* base, u32 size) {
    if ((u32)base + size == RDRAM_4MB_END) {
        size = RDRAM_8MB_END - (u32)base;
    }
    // The main heap handle.
    *(void**)0x800A5950 = func_80007214(base, size);
}
