#include <cstdint>
#include <cstdio>
#include <cstring>
#include <memory>
#include <unordered_map>

#include "librecomp/game.hpp"
#include "recomp.h"
#include "bm64_memory.hpp"

// Host implementations of libultra functions the runtime lacks, plus the game's
// setjmp/longjmp.

extern "C" void bm64u2_proc_yield(gpr val);
extern "C" bool bm64u2_proc_dispatch(uint8_t* rdram, uint32_t entry, recomp_context* pctx, recomp_context* sched);
extern "C" void bm64u2_tlb_map(uint32_t index, uint32_t pm, uint32_t vaddr, uint32_t evenp, uint32_t oddp);
extern "C" void bm64u2_tlb_unmap(uint32_t index);
extern "C" void bm64u2_tlb_unmap_all();

namespace bm64u2 {
    void register_tlb_functions(uint32_t alias_vaddr, uint32_t phys);
}

// The process scheduler's jump buffer (func_800077B4); a process yields here.
static constexpr uint32_t kSchedulerJmpBuf = 0x800A5960u;

extern "C" {

// osMapTLB(index, page_mask, vaddr, evenp, oddp, asid): oddp and asid are the
// fifth and sixth arguments, so they are on the stack.
void osMapTLB_recomp(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t index = (uint32_t)ctx->r4;
    const uint32_t pm = (uint32_t)ctx->r5;
    const uint32_t vaddr = (uint32_t)ctx->r6;
    const uint32_t evenp = (uint32_t)ctx->r7;
    const uint32_t oddp = (uint32_t)MEM_W(0x10, ctx->r29);

    bm64u2_tlb_map(index, pm, vaddr, evenp, oddp);
    // The function table also has to learn that code mapped at the virtual
    // address is callable, for when the game jumps there (e.g. 0x10000000).
    bm64u2::register_tlb_functions(vaddr, evenp);
}

void osUnmapTLB_recomp(uint8_t* rdram, recomp_context* ctx) {
    bm64u2_tlb_unmap((uint32_t)ctx->r4);
}

void osUnmapTLBAll_recomp(uint8_t* rdram, recomp_context* ctx) {
    bm64u2_tlb_unmap_all();
}

// The game uses __osContAddressCrc to identify the attached controller; the
// table is the SDK's.
namespace {
const uint16_t kContCrcTable[16] = {
    0x0000, 0x1081, 0x2102, 0x3183, 0x4204, 0x5285, 0x6306, 0x7387,
    0x8408, 0x9489, 0xA50A, 0xB58B, 0xC60C, 0xD68D, 0xE70E, 0xF78F,
};

// librecomp reserves 0x80801000 for patch data; this game doesn't use it.
constexpr uint32_t kCrcScratch = 0x80801000;
} // namespace

void __osContAddressCrc_recomp(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t cart_addr = (uint32_t)ctx->r4;  // physical
    const uint32_t buffer = (uint32_t)ctx->r5;     // 8-byte destination
    uint32_t crc = (uint32_t)ctx->r6;

    recomp::do_rom_read(rdram, bm64u2_sext(kCrcScratch), cart_addr, 8);
    for (int i = 0; i < 8; i++) {
        const uint8_t byte = (uint8_t)MEM_B(i, bm64u2_sext(kCrcScratch));
        MEM_B(i, bm64u2_sext(buffer)) = byte;
        crc = ((crc << 4) & 0xFFFF) ^ kContCrcTable[((crc >> 12) ^ byte) & 0xF];
    }

    ctx->r2 = crc;
}

// Controller Pak RAM is not emulated, so reads and writes report no data.
void __osContRamRead_recomp(uint8_t* rdram, recomp_context* ctx) {
    ctx->r2 = 0;
}

void __osContRamWrite_recomp(uint8_t* rdram, recomp_context* ctx) {
    ctx->r2 = 0;
}

void __osPfsGetStatus_recomp(uint8_t* rdram, recomp_context* ctx) {}
void __osPfsSelectBank_recomp(uint8_t* rdram, recomp_context* ctx) {}

} // extern "C"

// setjmp/longjmp. A recompiled function cannot be resumed in the middle, so
// the three cases the game relies on are handled with host coroutines: yielding
// to the scheduler, returning to an armed setjmp, and starting a new process.
// The scheduler's buffer is at kSchedulerJmpBuf; each process has one at
// record + 0x34.
namespace {

// Callee-saved guest state captured by setjmp and restored by longjmp.
struct JmpState {
    gpr r29, r31;
    gpr r16, r17, r18, r19, r20, r21, r22, r23, r30;
    uint64_t f[32];
};

// Keyed by guest jump buffer; a thread never longjmps onto another's buffer.
thread_local std::unordered_map<uint32_t, JmpState> host_states;

// One guest context per process, keyed by its jump buffer address.
thread_local std::unordered_map<uint32_t, std::unique_ptr<recomp_context>> process_contexts;

// The context holds f0..f31 as separate members rather than an array.
#define BM64_FPR_LIST(X)                                                          \
    X(0) X(1) X(2) X(3) X(4) X(5) X(6) X(7) X(8) X(9) X(10) X(11) X(12) X(13)      \
    X(14) X(15) X(16) X(17) X(18) X(19) X(20) X(21) X(22) X(23) X(24) X(25)      \
    X(26) X(27) X(28) X(29) X(30) X(31)

inline void save_fprs(recomp_context* ctx, JmpState& st) {
#define BM64_SAVE_FPR(i) st.f[i] = ctx->f##i.u64;
    BM64_FPR_LIST(BM64_SAVE_FPR)
#undef BM64_SAVE_FPR
}

inline void restore_fprs(recomp_context* ctx, const JmpState& st) {
#define BM64_LOAD_FPR(i) ctx->f##i.u64 = st.f[i];
    BM64_FPR_LIST(BM64_LOAD_FPR)
#undef BM64_LOAD_FPR
}

} // namespace

extern "C" void setjmp_recomp(uint8_t* rdram, recomp_context* ctx) {
    // Keep the guest-visible buffer consistent for the game's stack check.
    MEM_W(0x00, ctx->r4) = (uint32_t)ctx->r29;  // sp
    // Only the scheduler's buffer uses word 1 as a resume point; a process
    // keeps its own data there.
    if ((uint32_t)ctx->r4 == kSchedulerJmpBuf) {
        MEM_W(0x04, ctx->r4) = (uint32_t)ctx->r31;  // ra
    }
    MEM_W(0x08, ctx->r4) = (uint32_t)ctx->r16;  // s0
    MEM_W(0x0C, ctx->r4) = (uint32_t)ctx->r17;  // s1
    MEM_W(0x10, ctx->r4) = (uint32_t)ctx->r18;  // s2
    MEM_W(0x14, ctx->r4) = (uint32_t)ctx->r19;  // s3
    MEM_W(0x18, ctx->r4) = (uint32_t)ctx->r20;  // s4
    MEM_W(0x1C, ctx->r4) = (uint32_t)ctx->r21;  // s5
    MEM_W(0x20, ctx->r4) = (uint32_t)ctx->r22;  // s6
    MEM_W(0x24, ctx->r4) = (uint32_t)ctx->r23;  // s7
    MEM_W(0x28, ctx->r4) = (uint32_t)ctx->r30;  // fp
    MEM_W(0x2C, ctx->r4) = ctx->f20.u32l;
    MEM_W(0x30, ctx->r4) = ctx->f_odd[(21 - 1) * 2];
    MEM_W(0x34, ctx->r4) = ctx->f22.u32l;
    MEM_W(0x38, ctx->r4) = ctx->f_odd[(23 - 1) * 2];
    MEM_W(0x3C, ctx->r4) = ctx->f24.u32l;
    MEM_W(0x40, ctx->r4) = ctx->f_odd[(25 - 1) * 2];
    MEM_W(0x44, ctx->r4) = ctx->f26.u32l;
    MEM_W(0x48, ctx->r4) = ctx->f_odd[(27 - 1) * 2];
    MEM_W(0x4C, ctx->r4) = ctx->f28.u32l;
    MEM_W(0x50, ctx->r4) = ctx->f_odd[(29 - 1) * 2];
    MEM_W(0x54, ctx->r4) = ctx->f30.u32l;
    MEM_W(0x58, ctx->r4) = ctx->f31.u32l;

    JmpState st{};
    st.r29 = ctx->r29;
    st.r31 = ctx->r31;
    st.r16 = ctx->r16;
    st.r17 = ctx->r17;
    st.r18 = ctx->r18;
    st.r19 = ctx->r19;
    st.r20 = ctx->r20;
    st.r21 = ctx->r21;
    st.r22 = ctx->r22;
    st.r23 = ctx->r23;
    st.r30 = ctx->r30;
    save_fprs(ctx, st);
    host_states[(uint32_t)ctx->r4] = st;

    // setjmp reports 0 on the first call.
    ctx->r2 = 0;
}

// A yield: give the CPU back to the scheduler. The game's file and DMA wait
// loops call this through hooks in bm64u2.us.toml in place of osYieldThread.
extern "C" void bm64u2_yield_process(uint8_t* rdram, recomp_context* ctx) {
    bm64u2_proc_yield(1);
}

extern "C" void longjmp_recomp(uint8_t* rdram, recomp_context* ctx) {
    const uint32_t key = (uint32_t)ctx->r4;

    gpr val = ctx->r5;
    if (val == 0) {
        val = 1;  // longjmp(_, 0) behaves as longjmp(_, 1)
    }

    // Yield to the scheduler; when it resumes, return the value setjmp expects.
    if (key == kSchedulerJmpBuf) {
        ctx->r2 = val;
        bm64u2_proc_yield(val);
        ctx->r2 = val;
        return;
    }

    // A buffer setjmp_recomp armed: restore the callee-saved registers. The
    // call sites copy the result into $s1, so set both $v0 and $s1.
    auto st = host_states.find(key);
    if (st != host_states.end()) {
        const JmpState& s = st->second;
        ctx->r29 = s.r29;
        ctx->r31 = s.r31;
        ctx->r16 = s.r16;
        ctx->r17 = s.r17;
        ctx->r18 = s.r18;
        ctx->r19 = s.r19;
        ctx->r20 = s.r20;
        ctx->r21 = s.r21;
        ctx->r22 = s.r22;
        ctx->r23 = s.r23;
        ctx->r30 = s.r30;
        restore_fprs(ctx, s);
        ctx->r2 = val;
        ctx->r17 = val;
        return;
    }

    // Start a process. The record sits 0x34 below the buffer; func_80007C3C
    // stores the entry point at +0x38 (and +0x20).
    const uint32_t proc = key - 0x34u;
    gpr entry = 0;
    if (proc >= 0x80000400u && proc < 0x80800000u) {
        entry = (gpr)(int32_t)MEM_W(0x38, bm64u2_sext(proc));
        if (entry == 0) {
            entry = (gpr)(int32_t)MEM_W(0x20, bm64u2_sext(proc));
        }
    }

    auto& slot = process_contexts[key];
    if (slot == nullptr) {
        slot = std::make_unique<recomp_context>();
        recomp_context* pctx = slot.get();
        // Word 0 of the buffer is the top of the process's stack.
        uint32_t sp0 = (uint32_t)MEM_W(0x00, bm64u2_sext(key));
        if (sp0 < 0x80000000u || sp0 >= 0x80800000u) {
            sp0 = key;
        }
        pctx->r29 = bm64u2_sext(sp0);
        pctx->r31 = entry;
        pctx->mips3_float_mode = 0;
        pctx->f_odd = &pctx->f0.u32h;
    }
    recomp_context* pctx = slot.get();

    recomp_func_t* target = LOOKUP_FUNC((int32_t)entry);
    if (target == nullptr) {
        fprintf(stderr, "No function at %08X to start a process\n", (uint32_t)entry);
        return;
    }
    pctx->r2 = val;
    // A process whose coroutine has finished is called directly.
    if (!bm64u2_proc_dispatch(rdram, (uint32_t)entry, pctx, ctx)) {
        target(rdram, pctx);
    }
}
