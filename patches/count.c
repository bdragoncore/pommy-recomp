#include "patches.h"

// Each boss overlay carries its own two-instruction copy of osGetCount
// (mfc0 $v0, Count; jr $ra). Stock N64Recomp does not translate cop0 reads, so
// the copies are stubbed in bm64u2.us.toml and routed here.

u32 osGetCount(void);

RECOMP_PATCH u32 ovl_boss_demon_9E60(void) {
    return osGetCount();
}

RECOMP_PATCH u32 ovl_boss_devil_ADD0(void) {
    return osGetCount();
}

RECOMP_PATCH u32 ovl_boss_angel_B4A0(void) {
    return osGetCount();
}
