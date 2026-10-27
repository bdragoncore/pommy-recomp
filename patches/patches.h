#ifndef __PATCHES_H__
#define __PATCHES_H__

// Attribute used by N64Recomp's patch mode: the function replaces the ROM
// function with the same name. Keep patch sources freestanding; this file is
// compiled for the N64, not for the host.
#define RECOMP_PATCH __attribute__((section(".recomp_patch")))
#define RECOMP_FORCE_PATCH __attribute__((section(".recomp_force_patch")))
#define RECOMP_EXPORT __attribute__((section(".recomp_export")))

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;

// Host functions made callable from patch code through syms.ld. They have the
// usual recomp signature (uint8_t* rdram, recomp_context* ctx) on the host.
void bm64_host_call_process(u32 delta);
void bm64_host_apply_cheats(void);

#endif
