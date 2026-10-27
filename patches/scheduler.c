#include "patches.h"

// The game's process scheduler, func_800077B4(delta), runs once per frame and
// steps every process. It cannot run on the recomp model: a process that yields
// with longjmp has lost the host frames of its callers. src/game/scheduler.cpp
// runs the loop on the host with one coroutine per process; this patch hands it
// the context. It is also where the Cheats tab's codes are applied, before any
// process runs, so every process sees them. `delta` is passed on explicitly so
// the cheat call cannot clobber $a0.
RECOMP_PATCH void func_800077B4(u32 delta) {
    bm64_host_apply_cheats();
    bm64_host_call_process(delta);
}
