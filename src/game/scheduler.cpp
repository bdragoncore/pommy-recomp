// macOS only declares the (deprecated) ucontext routines under _XOPEN_SOURCE;
// _DARWIN_C_SOURCE keeps the rest of the system headers available.
#if defined(__APPLE__)
#define _XOPEN_SOURCE 600
#define _DARWIN_C_SOURCE
#endif

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <unordered_map>

#ifdef _WIN32
#include <windows.h>
#else
#include <ucontext.h>
#endif

#include "recomp.h"
#include "bm64_memory.hpp"

// Host scheduler for the game's process system. The game's scheduler
// (func_800077B4) steps processes with setjmp/longjmp, which a recompiled
// function cannot resume, so patches/scheduler.c calls bm64_host_call_process
// below; it runs each process in its own host coroutine (a fiber on Windows,
// a ucontext elsewhere).
//
// Process record: +0x00 next, +0x18 object, +0x24 mode, +0x2C sleep count,
// +0x34 jump buffer (word 0 stack top), +0x38 entry. List head 0x800A59BC,
// current process 0x800A59C0.

static constexpr uint32_t kProcessListHead = 0x800A59BC;
static constexpr uint32_t kCurrentProcess = 0x800A59C0;
// Ends a process: unlinks it and its children, runs the exit callback, longjmps with 2.
static constexpr uint32_t kEndProcess = 0x80007AE0;
// The game's heap free.
static constexpr uint32_t kFree = 0x80006DC0;
// Stack used when a process record has no plausible stack pointer.
static constexpr uint32_t kFallbackStack = 0x800B44F0;

static inline uint32_t rd_u32(uint8_t* rdram, uint32_t vaddr) {
    uint32_t v;
    memcpy(&v, bm64u2_guest_ptr(rdram, vaddr), 4);
    return v;
}

static inline void wr_u32(uint8_t* rdram, uint32_t vaddr, uint32_t val) {
    memcpy(bm64u2_guest_ptr(rdram, vaddr), &val, 4);
}

// Host stack for one coroutine. Native frames (the trampoline plus whatever the
// recompiled code calls) are much deeper than guest frames.
static constexpr size_t kHostStack = 0x80000;

struct bm64_proc {
#ifdef _WIN32
    void* fiber = nullptr;
#else
    ucontext_t ctx;
    uint8_t* host_stack = nullptr;
#endif
    bool started = false;
    bool done = false;
    recomp_context* gctx = nullptr;
    uint32_t entry = 0;
};

static std::unordered_map<recomp_context*, bm64_proc*> g_procs;
#ifdef _WIN32
static void* g_sched_fiber = nullptr;
#else
static ucontext_t g_sched_ctx;
#endif
static recomp_context* g_sched_gctx = nullptr;
static bm64_proc* g_running = nullptr;
static uint8_t* g_rd = nullptr;

// The last yield value: 1 is a normal yield, 2 means the process has ended.
static gpr g_last_yield = 0;

extern "C" bool bm64u2_proc_dispatch(uint8_t* rdram, uint32_t entry,
                                    recomp_context* pctx, recomp_context* sched);

// Switch from a process's coroutine back to the scheduler.
static void switch_to_scheduler(bm64_proc* p) {
#ifdef _WIN32
    SwitchToFiber(g_sched_fiber);
#else
    swapcontext(&p->ctx, &g_sched_ctx);
#endif
}

// Suspend the running process and return to the scheduler.
extern "C" void bm64u2_proc_yield(gpr val) {
    g_last_yield = val;
    if (g_running != nullptr && g_running->started && !g_running->done) {
        // The game's scheduler branches on the setjmp result ($v0, copied to
        // $s1), so the value goes into the scheduler's registers.
        if (g_sched_gctx != nullptr) {
            g_sched_gctx->r2 = val;
            g_sched_gctx->r17 = val;
        }
        switch_to_scheduler(g_running);
    }
}

static void bm64u2_proc_run(bm64_proc* p) {
    p->started = true;
    recomp_func_t* target = p->entry != 0 ? LOOKUP_FUNC((int32_t)p->entry) : nullptr;
    if (target == nullptr) {
        fprintf(stderr, "No function at %08X to run a process\n", p->entry);
    } else {
        target(g_rd, p->gctx);
    }
    p->done = true;
    // Returning would end the coroutine (on Windows, the whole thread); swap
    // back to the scheduler explicitly instead.
    switch_to_scheduler(p);
}

#ifdef _WIN32
static void WINAPI bm64u2_proc_trampoline(void* arg) {
    bm64u2_proc_run((bm64_proc*)arg);
}
#else
static void bm64u2_proc_trampoline(uint32_t lo, uint32_t hi) {
    bm64u2_proc_run((bm64_proc*)(uintptr_t)(((uint64_t)hi << 32) | lo));
}
#endif

// One guest context per process, keyed by record address.
static std::unordered_map<uint32_t, recomp_context*> s_proc_gctx;

static gpr process_stack(uint8_t* rdram, uint32_t p) {
    const uint32_t sp = rd_u32(rdram, p + 0x34);
    return bm64u2_sext((sp >= 0x80000000u && sp < 0x80800000u) ? sp : kFallbackStack);
}

static recomp_context* process_gctx(uint8_t* rdram, uint32_t p) {
    auto it = s_proc_gctx.find(p);
    if (it != s_proc_gctx.end()) {
        return it->second;
    }
    recomp_context* c = new recomp_context();
    c->mips3_float_mode = 0;
    c->f_odd = &c->f0.u32h;
    c->r29 = process_stack(rdram, p);
    s_proc_gctx[p] = c;
    return c;
}

// Free a dead process's object with the game's heap free.
static void free_guest_object(uint8_t* rdram, uint32_t obj, gpr stack_top) {
    recomp_func_t* fn = LOOKUP_FUNC(kFree);
    if (fn == nullptr) {
        return;
    }
    recomp_context tmp{};
    tmp.mips3_float_mode = 0;
    tmp.f_odd = &tmp.f0.u32h;
    tmp.r29 = stack_top;
    tmp.r4 = bm64u2_sext(obj);
    fn(rdram, &tmp);
}

static void retire_context(recomp_context* pctx) {
    auto it = g_procs.find(pctx);
    if (it == g_procs.end()) {
        return;
    }
    bm64_proc* proc = it->second;
    g_procs.erase(it);
#ifdef _WIN32
    if (proc->fiber != nullptr) {
        DeleteFiber(proc->fiber);
    }
#else
    delete[] proc->host_stack;
#endif
    delete proc;
}

// A killed process's coroutine must never run again; the next process at the
// same address starts fresh.
static void retire_process(uint32_t p) {
    auto it = s_proc_gctx.find(p);
    if (it == s_proc_gctx.end()) {
        return;
    }
    recomp_context* old = it->second;
    s_proc_gctx.erase(it);
    retire_context(old);
    delete old;
}

// A run that came back with 2 ended its process (kEndProcess). Like the
// game's scheduler, free the process's object and drop its coroutine.
static void reap_ended(uint8_t* rdram, uint32_t p, recomp_context* sched_ctx) {
    if (g_last_yield != 2) {
        return;
    }
    const uint32_t obj = rd_u32(rdram, p + 0x18);
    if (obj != 0) {
        free_guest_object(rdram, obj, sched_ctx->r29);
    }
    retire_process(p);
}

// End a killed process. The game points its entry at kEndProcess and longjmps
// into it; a host coroutine cannot be restarted, so a fresh one runs it.
static void run_end_process(uint8_t* rdram, uint32_t p, recomp_context* sched_ctx) {
    recomp_context* c = new recomp_context();
    c->mips3_float_mode = 0;
    c->f_odd = &c->f0.u32h;
    c->r29 = process_stack(rdram, p);
    c->r31 = 0;
    c->r4 = bm64u2_sext(p);
    wr_u32(rdram, kCurrentProcess, p);
    g_last_yield = 0;
    bm64u2_proc_dispatch(rdram, kEndProcess, c, sched_ctx);
    reap_ended(rdram, p, sched_ctx);
    retire_context(c);
    delete c;
}

// Frames elapsed: the scheduler runs exactly once per frame.
static unsigned long long g_frame_count = 0;

extern "C" unsigned long long bm64u2_frame_count(void) { return g_frame_count; }

// The scheduler. Walks the process list once, like the game's: ready processes
// run until they yield, sleeping ones count down, killed ones are ended.
extern "C" void bm64_host_call_process(uint8_t* rdram, recomp_context* ctx) {
    g_rd = rdram;
    g_sched_gctx = ctx;
    g_frame_count++;

    const uint32_t head = rd_u32(rdram, kProcessListHead);
    wr_u32(rdram, kCurrentProcess, head);
    if (head == 0) {
        return;
    }

    // Frames since the last call; sleeping processes count down by it.
    uint32_t delta = (uint32_t)ctx->r4;
    if (delta == 0) {
        delta = 1;
    }

    uint32_t p = head;
    while (p != 0) {
        const uint32_t next = rd_u32(rdram, p + 0x00);
        const uint32_t entry = rd_u32(rdram, p + 0x38);
        const uint32_t mode = rd_u32(rdram, p + 0x24);
        if (mode == 0 && entry != 0) {
            wr_u32(rdram, kCurrentProcess, p);
            g_last_yield = 0;
            bm64u2_proc_dispatch(rdram, entry, process_gctx(rdram, p), ctx);
            // A process can also end itself while it runs.
            reap_ended(rdram, p, ctx);
        } else if (mode == 1) {
            const uint32_t count = rd_u32(rdram, p + 0x2C);
            if (count != 0) {
                const uint32_t left = count - delta;
                if (left != 0 && left < 0x80000000u) {
                    wr_u32(rdram, p + 0x2C, left);
                } else {
                    wr_u32(rdram, p + 0x2C, 0);
                    wr_u32(rdram, p + 0x24, 0);
                }
            }
        } else if (mode == 3) {
            run_end_process(rdram, p, ctx);
        }
        p = next;
    }
    wr_u32(rdram, kCurrentProcess, 0);
}

// Run one process in its own coroutine until it yields or returns. Returns
// false if the process has already finished.
extern "C" bool bm64u2_proc_dispatch(uint8_t* rdram, uint32_t entry,
                                    recomp_context* pctx, recomp_context* sched_ctx) {
    g_rd = rdram;
    static bool captured = false;
    if (!captured) {
#ifdef _WIN32
        g_sched_fiber = IsThreadAFiber() ? GetCurrentFiber() : ConvertThreadToFiber(nullptr);
#else
        getcontext(&g_sched_ctx);
#endif
        captured = true;
    }

    bm64_proc* proc = nullptr;
    auto it = g_procs.find(pctx);
    if (it != g_procs.end()) {
        proc = it->second;
    }
    if (proc == nullptr) {
        proc = new bm64_proc();
        proc->gctx = pctx;
        proc->entry = entry;

#ifdef _WIN32
        proc->fiber = CreateFiber(kHostStack, bm64u2_proc_trampoline, proc);
#else
        getcontext(&proc->ctx);
        proc->host_stack = new uint8_t[kHostStack];
        proc->ctx.uc_stack.ss_sp = proc->host_stack;
        proc->ctx.uc_stack.ss_size = kHostStack;
        proc->ctx.uc_link = &g_sched_ctx;
        const uint64_t arg = (uint64_t)(uintptr_t)proc;
        makecontext(&proc->ctx, (void (*)())bm64u2_proc_trampoline, 2,
                    (uint32_t)(arg & 0xFFFFFFFFu), (uint32_t)(arg >> 32));
#endif
        g_procs[pctx] = proc;
    }
    if (proc->done) {
        return false;
    }

    g_sched_gctx = sched_ctx;
    g_running = proc;
#ifdef _WIN32
    SwitchToFiber(proc->fiber);
#else
    swapcontext(&g_sched_ctx, &proc->ctx);
#endif
    g_running = nullptr;
    return true;
}
