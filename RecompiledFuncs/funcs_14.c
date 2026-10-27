#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800284E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800284E0: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800284E4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800284E8: lwc1        $f12, 0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800284EC: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x800284F0: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x800284F4: lwc1        $f14, 0x8($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800284F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800284FC: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80028500: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80028504: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80028508: mul.s       $f6, $f14, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8002850C: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80028510: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80028514: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80028518: add.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8002851C: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80028520: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80028524: nop

    // 0x80028528: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8002852C: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80028530: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80028534: mul.s       $f6, $f14, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80028538: lwc1        $f8, 0x34($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8002853C: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80028540: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80028544: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80028548: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8002854C: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x80028550: nop

    // 0x80028554: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80028558: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8002855C: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80028560: mul.s       $f6, $f14, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80028564: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80028568: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002856C: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80028570: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80028574: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80028578: mul.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8002857C: nop

    // 0x80028580: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80028584: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80028588: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8002858C: mul.s       $f6, $f14, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80028590: lwc1        $f8, 0x3C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x80028594: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80028598: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8002859C: swc1        $f4, -0x4344($at)
    MEM_W(-0X4344, ctx->r1) = ctx->f4.u32l;
    // 0x800285A0: lwc1        $f6, -0x4344($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4344);
    // 0x800285A4: nop

    // 0x800285A8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800285AC: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x800285B0: lwc1        $f10, -0x4344($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4344);
    // 0x800285B4: nop

    // 0x800285B8: mul.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x800285BC: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
    // 0x800285C0: lwc1        $f6, -0x4344($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4344);
    // 0x800285C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800285C8: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x800285CC: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x800285D0: swc1        $f0, -0x4350($at)
    MEM_W(-0X4350, ctx->r1) = ctx->f0.u32l;
    // 0x800285D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800285D8: swc1        $f16, -0x434C($at)
    MEM_W(-0X434C, ctx->r1) = ctx->f16.u32l;
    // 0x800285DC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800285E0: jr          $ra
    // 0x800285E4: swc1        $f18, -0x4348($at)
    MEM_W(-0X4348, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x800285E4: swc1        $f18, -0x4348($at)
    MEM_W(-0X4348, ctx->r1) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_800285E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800285E8: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800285EC: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800285F0: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800285F4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800285F8: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800285FC: nop

    // 0x80028600: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80028604: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x80028608: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x8002860C: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80028610: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80028614: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80028618: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8002861C: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80028620: nop

    // 0x80028624: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80028628: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8002862C: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
    // 0x80028630: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80028634: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80028638: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8002863C: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80028640: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80028644: nop

    // 0x80028648: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8002864C: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80028650: jr          $ra
    // 0x80028654: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
    return;
    // 0x80028654: swc1        $f10, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_80028658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028658: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8002865C: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80028660: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80028664: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80028668: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8002866C: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80028670: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80028674: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80028678: nop

    // 0x8002867C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80028680: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80028684: jr          $ra
    // 0x80028688: add.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f16.fl;
    return;
    // 0x80028688: add.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f16.fl;
;}
RECOMP_FUNC void func_8002868C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002868C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80028690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028694: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80028698: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8002869C: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800286A0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800286A4: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800286A8: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800286AC: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800286B0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800286B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800286B8: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800286BC: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800286C0: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800286C4: mul.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x800286C8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800286CC: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x800286D0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x800286D4: jal         0x800280D4
    // 0x800286D8: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    func_800280D4(rdram, ctx);
        goto after_0;
    // 0x800286D8: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x800286DC: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800286E0: beq         $v0, $zero, L_800287B4
    if (ctx->r2 == 0) {
        // 0x800286E4: nop
    
            goto L_800287B4;
    }
    // 0x800286E4: nop

    // 0x800286E8: jal         0x800281DC
    // 0x800286EC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    func_800281DC(rdram, ctx);
        goto after_1;
    // 0x800286EC: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    after_1:
    // 0x800286F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800286F4: beq         $v0, $at, L_80028738
    if (ctx->r2 == ctx->r1) {
        // 0x800286F8: nop
    
            goto L_80028738;
    }
    // 0x800286F8: nop

    // 0x800286FC: beq         $v0, $zero, L_80028714
    if (ctx->r2 == 0) {
        // 0x80028700: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80028714;
    }
    // 0x80028700: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80028704: beq         $v0, $at, L_80028724
    if (ctx->r2 == ctx->r1) {
        // 0x80028708: nop
    
            goto L_80028724;
    }
    // 0x80028708: nop

    // 0x8002870C: b           L_80028750
    // 0x80028710: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
        goto L_80028750;
    // 0x80028710: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
L_80028714:
    // 0x80028714: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80028718: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8002871C: b           L_8002874C
    // 0x80028720: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
        goto L_8002874C;
    // 0x80028720: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
L_80028724:
    // 0x80028724: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80028728: lwc1        $f10, 0x5610($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5610);
    // 0x8002872C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80028730: b           L_8002874C
    // 0x80028734: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
        goto L_8002874C;
    // 0x80028734: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
L_80028738:
    // 0x80028738: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002873C: lwc1        $f16, 0x5614($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5614);
    // 0x80028740: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80028744: nop

    // 0x80028748: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
L_8002874C:
    // 0x8002874C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
L_80028750:
    // 0x80028750: jal         0x800281DC
    // 0x80028754: nop

    func_800281DC(rdram, ctx);
        goto after_2;
    // 0x80028754: nop

    after_2:
    // 0x80028758: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002875C: beq         $v0, $at, L_800287A0
    if (ctx->r2 == ctx->r1) {
        // 0x80028760: nop
    
            goto L_800287A0;
    }
    // 0x80028760: nop

    // 0x80028764: beq         $v0, $zero, L_8002877C
    if (ctx->r2 == 0) {
        // 0x80028768: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8002877C;
    }
    // 0x80028768: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002876C: beq         $v0, $at, L_8002878C
    if (ctx->r2 == ctx->r1) {
        // 0x80028770: nop
    
            goto L_8002878C;
    }
    // 0x80028770: nop

    // 0x80028774: b           L_800287EC
    // 0x80028778: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
        goto L_800287EC;
    // 0x80028778: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
L_8002877C:
    // 0x8002877C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80028780: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80028784: b           L_800287E8
    // 0x80028788: swc1        $f18, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f18.u32l;
        goto L_800287E8;
    // 0x80028788: swc1        $f18, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f18.u32l;
L_8002878C:
    // 0x8002878C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80028790: lwc1        $f4, 0x5618($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5618);
    // 0x80028794: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80028798: b           L_800287E8
    // 0x8002879C: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
        goto L_800287E8;
    // 0x8002879C: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
L_800287A0:
    // 0x800287A0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800287A4: lwc1        $f6, 0x561C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X561C);
    // 0x800287A8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800287AC: b           L_800287E8
    // 0x800287B0: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
        goto L_800287E8;
    // 0x800287B0: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
L_800287B4:
    // 0x800287B4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800287B8: jal         0x80028248
    // 0x800287BC: div.s       $f12, $f14, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f8.fl);
    func_80028248(rdram, ctx);
        goto after_3;
    // 0x800287BC: div.s       $f12, $f14, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f8.fl);
    after_3:
    // 0x800287C0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800287C4: nop

    // 0x800287C8: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x800287CC: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800287D0: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800287D4: jal         0x80028248
    // 0x800287D8: div.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    func_80028248(rdram, ctx);
        goto after_4;
    // 0x800287D8: div.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    after_4:
    // 0x800287DC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800287E0: nop

    // 0x800287E4: swc1        $f0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f0.u32l;
L_800287E8:
    // 0x800287E8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
L_800287EC:
    // 0x800287EC: jal         0x800281DC
    // 0x800287F0: nop

    func_800281DC(rdram, ctx);
        goto after_5;
    // 0x800287F0: nop

    after_5:
    // 0x800287F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800287F8: bne         $v0, $at, L_80028844
    if (ctx->r2 != ctx->r1) {
        // 0x800287FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80028844;
    }
    // 0x800287FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028800: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80028804: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80028808: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8002880C: lwc1        $f1, 0x5620($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X5620);
    // 0x80028810: lwc1        $f0, 0x5624($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5624);
    // 0x80028814: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80028818: add.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f4.d + ctx->f0.d;
    // 0x8002881C: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80028820: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80028824: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80028828: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8002882C: nop

    // 0x80028830: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80028834: add.d       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f16.d + ctx->f0.d;
    // 0x80028838: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8002883C: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x80028840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80028844:
    // 0x80028844: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80028848: jr          $ra
    // 0x8002884C: nop

    return;
    // 0x8002884C: nop

;}
RECOMP_FUNC void func_80028850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028850: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80028854: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80028858: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8002885C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80028860: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80028864: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80028868: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8002886C: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80028870: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80028874: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80028878: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002887C: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80028880: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80028884: sub.s       $f20, $f16, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80028888: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8002888C: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80028890: mul.s       $f6, $f20, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80028894: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80028898: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x8002889C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800288A0: jal         0x8007A500
    // 0x800288A4: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x800288A4: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x800288A8: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x800288AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800288B0: lwc1        $f14, 0x5628($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5628);
    // 0x800288B4: jal         0x8002811C
    // 0x800288B8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_8002811C(rdram, ctx);
        goto after_1;
    // 0x800288B8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x800288BC: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800288C0: beq         $v0, $zero, L_80028904
    if (ctx->r2 == 0) {
        // 0x800288C4: nop
    
            goto L_80028904;
    }
    // 0x800288C4: nop

    // 0x800288C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800288CC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x800288D0: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x800288D4: jal         0x80028158
    // 0x800288D8: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    func_80028158(rdram, ctx);
        goto after_2;
    // 0x800288D8: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x800288DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800288E0: bne         $v0, $at, L_800288F4
    if (ctx->r2 != ctx->r1) {
        // 0x800288E4: nop
    
            goto L_800288F4;
    }
    // 0x800288E4: nop

    // 0x800288E8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800288EC: b           L_80028950
    // 0x800288F0: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
        goto L_80028950;
    // 0x800288F0: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
L_800288F4:
    // 0x800288F4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800288F8: lwc1        $f10, 0x562C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X562C);
    // 0x800288FC: b           L_80028950
    // 0x80028900: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
        goto L_80028950;
    // 0x80028900: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
L_80028904:
    // 0x80028904: jal         0x80028248
    // 0x80028908: div.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f20.fl);
    func_80028248(rdram, ctx);
        goto after_3;
    // 0x80028908: div.s       $f12, $f2, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = DIV_S(ctx->f2.fl, ctx->f20.fl);
    after_3:
    // 0x8002890C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80028910: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    // 0x80028914: c.lt.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl < ctx->f16.fl;
    // 0x80028918: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002891C: bc1f        L_80028940
    if (!c1cs) {
        // 0x80028920: nop
    
            goto L_80028940;
    }
    // 0x80028920: nop

    // 0x80028924: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80028928: lwc1        $f7, 0x5630($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5630);
    // 0x8002892C: lwc1        $f6, 0x5634($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5634);
    // 0x80028930: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80028934: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x80028938: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8002893C: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
L_80028940:
    // 0x80028940: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80028944: jal         0x80028248
    // 0x80028948: div.s       $f12, $f22, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f22.fl, ctx->f16.fl);
    func_80028248(rdram, ctx);
        goto after_4;
    // 0x80028948: div.s       $f12, $f22, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f22.fl, ctx->f16.fl);
    after_4:
    // 0x8002894C: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_80028950:
    // 0x80028950: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80028954: lwc1        $f14, 0x5638($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5638);
    // 0x80028958: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8002895C: jal         0x8002811C
    // 0x80028960: nop

    func_8002811C(rdram, ctx);
        goto after_5;
    // 0x80028960: nop

    after_5:
    // 0x80028964: mul.s       $f4, $f22, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x80028968: beq         $v0, $zero, L_8002897C
    if (ctx->r2 == 0) {
        // 0x8002896C: nop
    
            goto L_8002897C;
    }
    // 0x8002896C: nop

    // 0x80028970: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80028974: nop

    // 0x80028978: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
L_8002897C:
    // 0x8002897C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80028980: nop

    // 0x80028984: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80028988: jal         0x8007A500
    // 0x8002898C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_6;
    // 0x8002898C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_6:
    // 0x80028990: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x80028994: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80028998: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8002899C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800289A0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800289A4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800289A8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800289AC: jr          $ra
    // 0x800289B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800289B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800289B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800289B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800289B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800289BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800289C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800289C4: lwc1        $f12, 0x0($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X0);
    // 0x800289C8: jal         0x8007A640
    // 0x800289CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x800289CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x800289D0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x800289D4: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800289D8: jal         0x8007A800
    // 0x800289DC: nop

    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x800289DC: nop

    after_1:
    // 0x800289E0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800289E4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800289E8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800289EC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800289F0: nop

    // 0x800289F4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800289F8: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    // 0x800289FC: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80028A00: jal         0x8007A640
    // 0x80028A04: nop

    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x80028A04: nop

    after_2:
    // 0x80028A08: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80028A0C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80028A10: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80028A14: swc1        $f18, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f18.u32l;
    // 0x80028A18: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80028A1C: jal         0x8007A800
    // 0x80028A20: nop

    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x80028A20: nop

    after_3:
    // 0x80028A24: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80028A28: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80028A2C: jal         0x8007A800
    // 0x80028A30: nop

    __cosf_recomp(rdram, ctx);
        goto after_4;
    // 0x80028A30: nop

    after_4:
    // 0x80028A34: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80028A38: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80028A3C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80028A40: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80028A44: nop

    // 0x80028A48: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80028A4C: swc1        $f10, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f10.u32l;
    // 0x80028A50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80028A54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80028A58: jr          $ra
    // 0x80028A5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80028A5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80028A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028A60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028A68: jal         0x80073EC0
    // 0x80028A6C: nop

    func_80073EC0(rdram, ctx);
        goto after_0;
    // 0x80028A6C: nop

    after_0:
    // 0x80028A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028A78: jr          $ra
    // 0x80028A7C: nop

    return;
    // 0x80028A7C: nop

;}
RECOMP_FUNC void func_80028A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028A88: jal         0x80073EE0
    // 0x80028A8C: nop

    func_80073EE0(rdram, ctx);
        goto after_0;
    // 0x80028A8C: nop

    after_0:
    // 0x80028A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028A98: jr          $ra
    // 0x80028A9C: nop

    return;
    // 0x80028A9C: nop

;}
RECOMP_FUNC void func_80028AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028AB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028AC0: jal         0x80027ECC
    // 0x80028AC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80027ECC(rdram, ctx);
        goto after_0;
    // 0x80028AC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80028AC8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80028ACC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80028AD0: beq         $a2, $at, L_80028B34
    if (ctx->r6 == ctx->r1) {
        // 0x80028AD4: andi        $a1, $v0, 0x1
        ctx->r5 = ctx->r2 & 0X1;
            goto L_80028B34;
    }
    // 0x80028AD4: andi        $a1, $v0, 0x1
    ctx->r5 = ctx->r2 & 0X1;
    // 0x80028AD8: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80028ADC: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80028AE0: beq         $at, $zero, L_80028B34
    if (ctx->r1 == 0) {
        // 0x80028AE4: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80028B34;
    }
    // 0x80028AE4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80028AE8: addiu       $v1, $a2, 0x1
    ctx->r3 = ADD32(ctx->r6, 0X1);
    // 0x80028AEC: div         $zero, $a0, $v1
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r3)));
    // 0x80028AF0: bne         $v1, $zero, L_80028AFC
    if (ctx->r3 != 0) {
        // 0x80028AF4: nop
    
            goto L_80028AFC;
    }
    // 0x80028AF4: nop

    // 0x80028AF8: break       7
    do_break(2147650296);
L_80028AFC:
    // 0x80028AFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80028B00: bne         $v1, $at, L_80028B14
    if (ctx->r3 != ctx->r1) {
        // 0x80028B04: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80028B14;
    }
    // 0x80028B04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80028B08: bne         $a0, $at, L_80028B14
    if (ctx->r4 != ctx->r1) {
        // 0x80028B0C: nop
    
            goto L_80028B14;
    }
    // 0x80028B0C: nop

    // 0x80028B10: break       6
    do_break(2147650320);
L_80028B14:
    // 0x80028B14: mflo        $t6
    ctx->r14 = lo;
    // 0x80028B18: nop

    // 0x80028B1C: nop

    // 0x80028B20: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80028B24: mflo        $t7
    ctx->r15 = lo;
    // 0x80028B28: subu        $a1, $a0, $t7
    ctx->r5 = SUB32(ctx->r4, ctx->r15);
    // 0x80028B2C: b           L_80028B38
    // 0x80028B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80028B38;
    // 0x80028B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80028B34:
    // 0x80028B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80028B38:
    // 0x80028B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028B3C: jr          $ra
    // 0x80028B40: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80028B40: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_80028B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028B44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80028B48: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80028B4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80028B50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028B54: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x80028B58: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x80028B5C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80028B60: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80028B64: jal         0x800289B4
    // 0x80028B68: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    func_800289B4(rdram, ctx);
        goto after_0;
    // 0x80028B68: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80028B6C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80028B70: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80028B74: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80028B78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80028B7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80028B80: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80028B84: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80028B88: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80028B8C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80028B90: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80028B94: nop

    // 0x80028B98: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80028B9C: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x80028BA0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80028BA4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80028BA8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80028BAC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80028BB0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80028BB4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80028BB8: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80028BBC: nop

    // 0x80028BC0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80028BC4: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x80028BC8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80028BCC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80028BD0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80028BD4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80028BD8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80028BDC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80028BE0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80028BE4: andi        $t1, $a2, 0xFF
    ctx->r9 = ctx->r6 & 0XFF;
    // 0x80028BE8: jal         0x80008D8C
    // 0x80028BEC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    func_80008D8C(rdram, ctx);
        goto after_1;
    // 0x80028BEC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    after_1:
    // 0x80028BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028BF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80028BF8: jr          $ra
    // 0x80028BFC: nop

    return;
    // 0x80028BFC: nop

;}
RECOMP_FUNC void func_80028C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028C00: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80028C04: lwc1        $f4, 0x563C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X563C);
    // 0x80028C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028C0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028C10: mul.s       $f12, $f4, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80028C14: jal         0x8007A800
    // 0x80028C18: nop

    __cosf_recomp(rdram, ctx);
        goto after_0;
    // 0x80028C18: nop

    after_0:
    // 0x80028C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028C20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028C24: jr          $ra
    // 0x80028C28: nop

    return;
    // 0x80028C28: nop

;}
RECOMP_FUNC void func_80028C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028C2C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80028C30: lwc1        $f4, 0x5640($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5640);
    // 0x80028C34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028C3C: mul.s       $f12, $f4, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80028C40: jal         0x8007A640
    // 0x80028C44: nop

    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x80028C44: nop

    after_0:
    // 0x80028C48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028C50: jr          $ra
    // 0x80028C54: nop

    return;
    // 0x80028C54: nop

;}
RECOMP_FUNC void func_80028C58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028C58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028C60: jal         0x800281DC
    // 0x80028C64: nop

    func_800281DC(rdram, ctx);
        goto after_0;
    // 0x80028C64: nop

    after_0:
    // 0x80028C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028C6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028C70: jr          $ra
    // 0x80028C74: nop

    return;
    // 0x80028C74: nop

;}
RECOMP_FUNC void func_80028C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028C78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028C7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028C80: jal         0x800281A0
    // 0x80028C84: nop

    func_800281A0(rdram, ctx);
        goto after_0;
    // 0x80028C84: nop

    after_0:
    // 0x80028C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028C90: jr          $ra
    // 0x80028C94: nop

    return;
    // 0x80028C94: nop

;}
RECOMP_FUNC void func_80028C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028CA0: jal         0x80028158
    // 0x80028CA4: nop

    func_80028158(rdram, ctx);
        goto after_0;
    // 0x80028CA4: nop

    after_0:
    // 0x80028CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028CB0: jr          $ra
    // 0x80028CB4: nop

    return;
    // 0x80028CB4: nop

;}
RECOMP_FUNC void func_80028CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028CC0: jal         0x8002811C
    // 0x80028CC4: nop

    func_8002811C(rdram, ctx);
        goto after_0;
    // 0x80028CC4: nop

    after_0:
    // 0x80028CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028CD0: jr          $ra
    // 0x80028CD4: nop

    return;
    // 0x80028CD4: nop

;}
RECOMP_FUNC void func_80028CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028CD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028CE0: jal         0x800280D4
    // 0x80028CE4: nop

    func_800280D4(rdram, ctx);
        goto after_0;
    // 0x80028CE4: nop

    after_0:
    // 0x80028CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028CF0: jr          $ra
    // 0x80028CF4: nop

    return;
    // 0x80028CF4: nop

;}
RECOMP_FUNC void func_80028CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028CF8: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x80028CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028D04: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80028D08: jal         0x8002808C
    // 0x80028D0C: nop

    func_8002808C(rdram, ctx);
        goto after_0;
    // 0x80028D0C: nop

    after_0:
    // 0x80028D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028D14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028D18: jr          $ra
    // 0x80028D1C: nop

    return;
    // 0x80028D1C: nop

;}
RECOMP_FUNC void func_80028D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028D28: jal         0x80028040
    // 0x80028D2C: nop

    func_80028040(rdram, ctx);
        goto after_0;
    // 0x80028D2C: nop

    after_0:
    // 0x80028D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028D34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028D38: jr          $ra
    // 0x80028D3C: nop

    return;
    // 0x80028D3C: nop

;}
RECOMP_FUNC void func_80028D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80028D48: srl         $t6, $a0, 8
    ctx->r14 = S32(U32(ctx->r4) >> 8);
    // 0x80028D4C: addiu       $v0, $t6, -0x81
    ctx->r2 = ADD32(ctx->r14, -0X81);
    // 0x80028D50: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80028D54: slti        $at, $v1, 0x6F
    ctx->r1 = SIGNED(ctx->r3) < 0X6F ? 1 : 0;
    // 0x80028D58: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80028D5C: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x80028D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028D64: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x80028D68: or          $t3, $a1, $zero
    ctx->r11 = ctx->r5 | 0;
    // 0x80028D6C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80028D70: bne         $at, $zero, L_80028D80
    if (ctx->r1 != 0) {
        // 0x80028D74: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_80028D80;
    }
    // 0x80028D74: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80028D78: b           L_80028F14
    // 0x80028D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80028F14;
    // 0x80028D7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80028D80:
    // 0x80028D80: slti        $at, $v1, 0x1F
    ctx->r1 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x80028D84: bne         $at, $zero, L_80028DA0
    if (ctx->r1 != 0) {
        // 0x80028D88: or          $a2, $t2, $zero
        ctx->r6 = ctx->r10 | 0;
            goto L_80028DA0;
    }
    // 0x80028D88: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80028D8C: slti        $at, $v1, 0x3F
    ctx->r1 = SIGNED(ctx->r3) < 0X3F ? 1 : 0;
    // 0x80028D90: beq         $at, $zero, L_80028DA4
    if (ctx->r1 == 0) {
        // 0x80028D94: slti        $at, $v1, 0x1F
        ctx->r1 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
            goto L_80028DA4;
    }
    // 0x80028D94: slti        $at, $v1, 0x1F
    ctx->r1 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x80028D98: b           L_80028F14
    // 0x80028D9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80028F14;
    // 0x80028D9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80028DA0:
    // 0x80028DA0: slti        $at, $v1, 0x1F
    ctx->r1 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
L_80028DA4:
    // 0x80028DA4: bne         $at, $zero, L_80028DB8
    if (ctx->r1 != 0) {
        // 0x80028DA8: addiu       $a2, $a2, -0x40
        ctx->r6 = ADD32(ctx->r6, -0X40);
            goto L_80028DB8;
    }
    // 0x80028DA8: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    // 0x80028DAC: addiu       $a3, $v1, -0x40
    ctx->r7 = ADD32(ctx->r3, -0X40);
    // 0x80028DB0: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x80028DB4: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
L_80028DB8:
    // 0x80028DB8: sll         $t9, $a3, 1
    ctx->r25 = S32(ctx->r7 << 1);
    // 0x80028DBC: addiu       $a3, $t9, 0x21
    ctx->r7 = ADD32(ctx->r25, 0X21);
    // 0x80028DC0: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x80028DC4: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x80028DC8: slti        $at, $t5, 0xBD
    ctx->r1 = SIGNED(ctx->r13) < 0XBD ? 1 : 0;
    // 0x80028DCC: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
    // 0x80028DD0: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80028DD4: beq         $at, $zero, L_80028DE8
    if (ctx->r1 == 0) {
        // 0x80028DD8: or          $v1, $t5, $zero
        ctx->r3 = ctx->r13 | 0;
            goto L_80028DE8;
    }
    // 0x80028DD8: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x80028DDC: addiu       $at, $zero, 0x3F
    ctx->r1 = ADD32(0, 0X3F);
    // 0x80028DE0: bne         $t5, $at, L_80028DF4
    if (ctx->r13 != ctx->r1) {
        // 0x80028DE4: slti        $at, $v1, 0x3F
        ctx->r1 = SIGNED(ctx->r3) < 0X3F ? 1 : 0;
            goto L_80028DF4;
    }
    // 0x80028DE4: slti        $at, $v1, 0x3F
    ctx->r1 = SIGNED(ctx->r3) < 0X3F ? 1 : 0;
L_80028DE8:
    // 0x80028DE8: b           L_80028F14
    // 0x80028DEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80028F14;
    // 0x80028DEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80028DF0: slti        $at, $v1, 0x3F
    ctx->r1 = SIGNED(ctx->r3) < 0X3F ? 1 : 0;
L_80028DF4:
    // 0x80028DF4: beq         $at, $zero, L_80028E00
    if (ctx->r1 == 0) {
        // 0x80028DF8: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80028E00;
    }
    // 0x80028DF8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80028DFC: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
L_80028E00:
    // 0x80028E00: slti        $at, $v1, 0x5F
    ctx->r1 = SIGNED(ctx->r3) < 0X5F ? 1 : 0;
    // 0x80028E04: bne         $at, $zero, L_80028E28
    if (ctx->r1 != 0) {
        // 0x80028E08: addiu       $a2, $v1, 0x20
        ctx->r6 = ADD32(ctx->r3, 0X20);
            goto L_80028E28;
    }
    // 0x80028E08: addiu       $a2, $v1, 0x20
    ctx->r6 = ADD32(ctx->r3, 0X20);
    // 0x80028E0C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80028E10: addiu       $a2, $v1, -0x3E
    ctx->r6 = ADD32(ctx->r3, -0X3E);
    // 0x80028E14: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x80028E18: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x80028E1C: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x80028E20: b           L_80028E30
    // 0x80028E24: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
        goto L_80028E30;
    // 0x80028E24: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
L_80028E28:
    // 0x80028E28: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x80028E2C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
L_80028E30:
    // 0x80028E30: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x80028E34: bne         $a3, $at, L_80028E70
    if (ctx->r7 != ctx->r1) {
        // 0x80028E38: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_80028E70;
    }
    // 0x80028E38: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80028E3C: slti        $at, $a2, 0x61
    ctx->r1 = SIGNED(ctx->r6) < 0X61 ? 1 : 0;
    // 0x80028E40: bne         $at, $zero, L_80028E50
    if (ctx->r1 != 0) {
        // 0x80028E44: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_80028E50;
    }
    // 0x80028E44: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80028E48: addiu       $a2, $a2, -0x6
    ctx->r6 = ADD32(ctx->r6, -0X6);
    // 0x80028E4C: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
L_80028E50:
    // 0x80028E50: slti        $at, $v1, 0x41
    ctx->r1 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x80028E54: bne         $at, $zero, L_80028E60
    if (ctx->r1 != 0) {
        // 0x80028E58: addiu       $a2, $v1, -0x7
        ctx->r6 = ADD32(ctx->r3, -0X7);
            goto L_80028E60;
    }
    // 0x80028E58: addiu       $a2, $v1, -0x7
    ctx->r6 = ADD32(ctx->r3, -0X7);
    // 0x80028E5C: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
L_80028E60:
    // 0x80028E60: addiu       $a2, $v1, -0xF
    ctx->r6 = ADD32(ctx->r3, -0XF);
    // 0x80028E64: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80028E68: b           L_80028EDC
    // 0x80028E6C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
        goto L_80028EDC;
    // 0x80028E6C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
L_80028E70:
    // 0x80028E70: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x80028E74: bne         $a1, $at, L_80028E94
    if (ctx->r5 != ctx->r1) {
        // 0x80028E78: slti        $at, $a2, 0x41
        ctx->r1 = SIGNED(ctx->r6) < 0X41 ? 1 : 0;
            goto L_80028E94;
    }
    // 0x80028E78: slti        $at, $a2, 0x41
    ctx->r1 = SIGNED(ctx->r6) < 0X41 ? 1 : 0;
    // 0x80028E7C: bne         $at, $zero, L_80028EDC
    if (ctx->r1 != 0) {
        // 0x80028E80: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_80028EDC;
    }
    // 0x80028E80: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80028E84: addiu       $a2, $v1, -0x8
    ctx->r6 = ADD32(ctx->r3, -0X8);
    // 0x80028E88: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80028E8C: b           L_80028EDC
    // 0x80028E90: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
        goto L_80028EDC;
    // 0x80028E90: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
L_80028E94:
    // 0x80028E94: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x80028E98: bne         $a1, $at, L_80028EB8
    if (ctx->r5 != ctx->r1) {
        // 0x80028E9C: slti        $at, $a2, 0x51
        ctx->r1 = SIGNED(ctx->r6) < 0X51 ? 1 : 0;
            goto L_80028EB8;
    }
    // 0x80028E9C: slti        $at, $a2, 0x51
    ctx->r1 = SIGNED(ctx->r6) < 0X51 ? 1 : 0;
    // 0x80028EA0: bne         $at, $zero, L_80028EDC
    if (ctx->r1 != 0) {
        // 0x80028EA4: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_80028EDC;
    }
    // 0x80028EA4: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80028EA8: addiu       $a2, $v1, -0xF
    ctx->r6 = ADD32(ctx->r3, -0XF);
    // 0x80028EAC: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x80028EB0: b           L_80028EDC
    // 0x80028EB4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
        goto L_80028EDC;
    // 0x80028EB4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
L_80028EB8:
    // 0x80028EB8: slti        $at, $a1, 0x28
    ctx->r1 = SIGNED(ctx->r5) < 0X28 ? 1 : 0;
    // 0x80028EBC: bne         $at, $zero, L_80028EDC
    if (ctx->r1 != 0) {
        // 0x80028EC0: slti        $at, $a1, 0x30
        ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
            goto L_80028EDC;
    }
    // 0x80028EC0: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x80028EC4: bne         $at, $zero, L_80028ED4
    if (ctx->r1 != 0) {
        // 0x80028EC8: slti        $at, $a1, 0x50
        ctx->r1 = SIGNED(ctx->r5) < 0X50 ? 1 : 0;
            goto L_80028ED4;
    }
    // 0x80028EC8: slti        $at, $a1, 0x50
    ctx->r1 = SIGNED(ctx->r5) < 0X50 ? 1 : 0;
    // 0x80028ECC: bne         $at, $zero, L_80028EE0
    if (ctx->r1 != 0) {
        // 0x80028ED0: slti        $at, $a1, 0x28
        ctx->r1 = SIGNED(ctx->r5) < 0X28 ? 1 : 0;
            goto L_80028EE0;
    }
    // 0x80028ED0: slti        $at, $a1, 0x28
    ctx->r1 = SIGNED(ctx->r5) < 0X28 ? 1 : 0;
L_80028ED4:
    // 0x80028ED4: b           L_80028F14
    // 0x80028ED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80028F14;
    // 0x80028ED8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80028EDC:
    // 0x80028EDC: slti        $at, $a1, 0x28
    ctx->r1 = SIGNED(ctx->r5) < 0X28 ? 1 : 0;
L_80028EE0:
    // 0x80028EE0: bne         $at, $zero, L_80028EF0
    if (ctx->r1 != 0) {
        // 0x80028EE4: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_80028EF0;
    }
    // 0x80028EE4: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80028EE8: addiu       $a3, $a1, -0x8
    ctx->r7 = ADD32(ctx->r5, -0X8);
    // 0x80028EEC: andi        $a1, $a3, 0xFF
    ctx->r5 = ctx->r7 & 0XFF;
L_80028EF0:
    // 0x80028EF0: addiu       $a3, $a1, -0x21
    ctx->r7 = ADD32(ctx->r5, -0X21);
    // 0x80028EF4: andi        $t4, $a3, 0xFF
    ctx->r12 = ctx->r7 & 0XFF;
    // 0x80028EF8: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x80028EFC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80028F00: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80028F04: lhu         $t7, -0xBFC($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0XBFC);
    // 0x80028F08: addiu       $a2, $v1, -0x21
    ctx->r6 = ADD32(ctx->r3, -0X21);
    // 0x80028F0C: andi        $t5, $a2, 0xFF
    ctx->r13 = ctx->r6 & 0XFF;
    // 0x80028F10: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
L_80028F14:
    // 0x80028F14: bne         $v0, $zero, L_80028F34
    if (ctx->r2 != 0) {
        // 0x80028F18: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_80028F34;
    }
    // 0x80028F18: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x80028F1C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80028F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80028F24: jal         0x8000167C
    // 0x80028F28: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8000167C(rdram, ctx);
        goto after_0;
    // 0x80028F28: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x80028F2C: b           L_80028FF8
    // 0x80028F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80028FF8;
    // 0x80028F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80028F34:
    // 0x80028F34: sll         $t8, $t2, 3
    ctx->r24 = S32(ctx->r10 << 3);
    // 0x80028F38: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80028F3C: addu        $t8, $t8, $t2
    ctx->r24 = ADD32(ctx->r24, ctx->r10);
    // 0x80028F40: lw          $a0, -0xC00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC00);
    // 0x80028F44: sll         $a1, $t8, 1
    ctx->r5 = S32(ctx->r24 << 1);
    // 0x80028F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80028F4C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80028F50: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x80028F54: jal         0x800016BC
    // 0x80028F58: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    func_800016BC(rdram, ctx);
        goto after_1;
    // 0x80028F58: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    after_1:
    // 0x80028F5C: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x80028F60: lw          $a3, -0xC00($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XC00);
    // 0x80028F64: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80028F68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80028F6C: jal         0x80001A88
    // 0x80028F70: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_80001A88(rdram, ctx);
        goto after_2;
    // 0x80028F70: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x80028F74: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80028F78: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80028F7C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80028F80: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x80028F84: addu        $a0, $t1, $t9
    ctx->r4 = ADD32(ctx->r9, ctx->r25);
    // 0x80028F88: addiu       $t1, $sp, 0x4A
    ctx->r9 = ADD32(ctx->r29, 0X4A);
    // 0x80028F8C: addu        $v1, $t3, $t0
    ctx->r3 = ADD32(ctx->r11, ctx->r8);
L_80028F90:
    // 0x80028F90: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80028F94: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80028F98: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80028F9C: lbu         $v0, -0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, -0X2);
    // 0x80028FA0: sltu        $at, $a0, $t1
    ctx->r1 = ctx->r4 < ctx->r9 ? 1 : 0;
    // 0x80028FA4: andi        $t4, $v0, 0xF0
    ctx->r12 = ctx->r2 & 0XF0;
    // 0x80028FA8: sb          $t4, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r12;
    // 0x80028FAC: lbu         $t9, -0x1($a0)
    ctx->r25 = MEM_BU(ctx->r4, -0X1);
    // 0x80028FB0: sll         $t5, $v0, 4
    ctx->r13 = S32(ctx->r2 << 4);
    // 0x80028FB4: andi        $t6, $t9, 0xF0
    ctx->r14 = ctx->r25 & 0XF0;
    // 0x80028FB8: sra         $t7, $t6, 4
    ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
    // 0x80028FBC: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x80028FC0: sll         $t4, $t9, 4
    ctx->r12 = S32(ctx->r25 << 4);
    // 0x80028FC4: sb          $t8, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r24;
    // 0x80028FC8: sb          $t4, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r12;
    // 0x80028FCC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80028FD0: bne         $at, $zero, L_80028F90
    if (ctx->r1 != 0) {
        // 0x80028FD4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80028F90;
    }
    // 0x80028FD4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80028FD8: addu        $v0, $t3, $t0
    ctx->r2 = ADD32(ctx->r11, ctx->r8);
    // 0x80028FDC: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80028FE0: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
L_80028FE4:
    // 0x80028FE4: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80028FE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80028FEC: bgez        $t1, L_80028FE4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80028FF0: sb          $zero, 0x1($v0)
        MEM_B(0X1, ctx->r2) = 0;
            goto L_80028FE4;
    }
    // 0x80028FF0: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80028FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80028FF8:
    // 0x80028FF8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80028FFC: jr          $ra
    // 0x80029000: nop

    return;
    // 0x80029000: nop

;}
RECOMP_FUNC void func_80029004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029004: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80029008: lw          $a0, -0xC00($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC00);
    // 0x8002900C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029010: beq         $a0, $zero, L_80029028
    if (ctx->r4 == 0) {
        // 0x80029014: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80029028;
    }
    // 0x80029014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029018: jal         0x80001C84
    // 0x8002901C: nop

    func_80001C84(rdram, ctx);
        goto after_0;
    // 0x8002901C: nop

    after_0:
    // 0x80029020: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80029024: sw          $zero, -0xC00($at)
    MEM_W(-0XC00, ctx->r1) = 0;
L_80029028:
    // 0x80029028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002902C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029030: jr          $ra
    // 0x80029034: nop

    return;
    // 0x80029034: nop

;}
RECOMP_FUNC void func_80029038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029038: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8002903C: lw          $t6, -0xC00($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XC00);
    // 0x80029040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029044: bne         $t6, $zero, L_80029060
    if (ctx->r14 != 0) {
        // 0x80029048: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80029060;
    }
    // 0x80029048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002904C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80029050: jal         0x80001E6C
    // 0x80029054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80001E6C(rdram, ctx);
        goto after_0;
    // 0x80029054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80029058: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002905C: sw          $v0, -0xC00($at)
    MEM_W(-0XC00, ctx->r1) = ctx->r2;
L_80029060:
    // 0x80029060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80029068: jr          $ra
    // 0x8002906C: nop

    return;
    // 0x8002906C: nop

;}
RECOMP_FUNC void func_80029070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029078: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8002907C: addiu       $a1, $a1, -0xB80
    ctx->r5 = ADD32(ctx->r5, -0XB80);
    // 0x80029080: jal         0x80073EF0
    // 0x80029084: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80029084: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x80029088: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8002908C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80029090: addiu       $v1, $v1, 0x2310
    ctx->r3 = ADD32(ctx->r3, 0X2310);
    // 0x80029094: addiu       $v0, $v0, 0x2210
    ctx->r2 = ADD32(ctx->r2, 0X2210);
L_80029098:
    // 0x80029098: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8002909C: sw          $zero, -0x44($v0)
    MEM_W(-0X44, ctx->r2) = 0;
    // 0x800290A0: sw          $zero, -0x24($v0)
    MEM_W(-0X24, ctx->r2) = 0;
    // 0x800290A4: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x800290A8: bne         $v0, $v1, L_80029098
    if (ctx->r2 != ctx->r3) {
        // 0x800290AC: sw          $zero, -0x64($v0)
        MEM_W(-0X64, ctx->r2) = 0;
            goto L_80029098;
    }
    // 0x800290AC: sw          $zero, -0x64($v0)
    MEM_W(-0X64, ctx->r2) = 0;
    // 0x800290B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800290B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800290B8: jr          $ra
    // 0x800290BC: nop

    return;
    // 0x800290BC: nop

;}
RECOMP_FUNC void func_800290C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800290C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800290C4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800290C8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800290CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800290D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800290D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800290D8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800290DC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800290E0: addiu       $v0, $v0, 0x2310
    ctx->r2 = ADD32(ctx->r2, 0X2310);
    // 0x800290E4: addiu       $v1, $v1, 0x2210
    ctx->r3 = ADD32(ctx->r3, 0X2210);
L_800290E8:
    // 0x800290E8: lw          $t6, 0x1C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X1C);
    // 0x800290EC: nop

    // 0x800290F0: beq         $t6, $zero, L_80029104
    if (ctx->r14 == 0) {
        // 0x800290F4: nop
    
            goto L_80029104;
    }
    // 0x800290F4: nop

    // 0x800290F8: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x800290FC: bne         $v1, $v0, L_800290E8
    if (ctx->r3 != ctx->r2) {
        // 0x80029100: nop
    
            goto L_800290E8;
    }
    // 0x80029100: nop

L_80029104:
    // 0x80029104: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80029108: addiu       $t7, $t7, 0x2310
    ctx->r15 = ADD32(ctx->r15, 0X2310);
    // 0x8002910C: sltu        $at, $v1, $t7
    ctx->r1 = ctx->r3 < ctx->r15 ? 1 : 0;
    // 0x80029110: bne         $at, $zero, L_8002912C
    if (ctx->r1 != 0) {
        // 0x80029114: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_8002912C;
    }
    // 0x80029114: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80029118: addiu       $a0, $a0, 0x56B0
    ctx->r4 = ADD32(ctx->r4, 0X56B0);
    // 0x8002911C: jal         0x80000FBC
    // 0x80029120: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80029120: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80029124: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80029128: nop

L_8002912C:
    // 0x8002912C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80029130: addiu       $a0, $a0, -0x6138
    ctx->r4 = ADD32(ctx->r4, -0X6138);
    // 0x80029134: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x80029138: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002913C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80029140: jal         0x80007C3C
    // 0x80029144: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80007C3C(rdram, ctx);
        goto after_1;
    // 0x80029144: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80029148: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002914C: nop

    // 0x80029150: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80029154: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x80029158: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8002915C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80029160: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80029164: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80029168: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8002916C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80029170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80029178: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x8002917C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80029180: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80029184: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80029188: sw          $t0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r8;
    // 0x8002918C: sw          $t1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r9;
    // 0x80029190: sw          $t2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r10;
    // 0x80029194: jr          $ra
    // 0x80029198: sw          $t3, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r11;
    return;
    // 0x80029198: sw          $t3, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r11;
;}
RECOMP_FUNC void func_8002919C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002919C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800291A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800291A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800291A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800291AC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x800291B0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800291B4: jal         0x80002F88
    // 0x800291B8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_80002F88(rdram, ctx);
        goto after_0;
    // 0x800291B8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x800291BC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800291C0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800291C4: beq         $a3, $zero, L_80029214
    if (ctx->r7 == 0) {
        // 0x800291C8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80029214;
    }
    // 0x800291C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800291CC:
    // 0x800291CC: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x800291D0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800291D4: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x800291D8: beq         $t6, $zero, L_800291F4
    if (ctx->r14 == 0) {
        // 0x800291DC: nop
    
            goto L_800291F4;
    }
    // 0x800291DC: nop

L_800291E0:
    // 0x800291E0: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x800291E4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800291E8: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x800291EC: bne         $t7, $zero, L_800291E0
    if (ctx->r15 != 0) {
        // 0x800291F0: nop
    
            goto L_800291E0;
    }
    // 0x800291F0: nop

L_800291F4:
    // 0x800291F4: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x800291F8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800291FC: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x80029200: bne         $t8, $zero, L_800291CC
    if (ctx->r24 != 0) {
        // 0x80029204: nop
    
            goto L_800291CC;
    }
    // 0x80029204: nop

    // 0x80029208: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002920C: bne         $v1, $a3, L_800291CC
    if (ctx->r3 != ctx->r7) {
        // 0x80029210: nop
    
            goto L_800291CC;
    }
    // 0x80029210: nop

L_80029214:
    // 0x80029214: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80029218: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8002921C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80029220: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80029224: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80029228: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8002922C: jal         0x800290C0
    // 0x80029230: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_800290C0(rdram, ctx);
        goto after_1;
    // 0x80029230: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_1:
    // 0x80029234: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80029238: jal         0x80002D08
    // 0x8002923C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80002D08(rdram, ctx);
        goto after_2;
    // 0x8002923C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80029240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80029244: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80029248: jr          $ra
    // 0x8002924C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002924C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80029250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029250: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80029258: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002925C: lw          $t6, 0x1C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C);
    // 0x80029260: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80029264: beq         $t6, $zero, L_80029288
    if (ctx->r14 == 0) {
        // 0x80029268: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80029288;
    }
    // 0x80029268: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8002926C:
    // 0x8002926C: jal         0x80007AB0
    // 0x80029270: nop

    func_80007AB0(rdram, ctx);
        goto after_0;
    // 0x80029270: nop

    after_0:
    // 0x80029274: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x80029278: nop

    // 0x8002927C: bne         $t7, $zero, L_8002926C
    if (ctx->r15 != 0) {
        // 0x80029280: nop
    
            goto L_8002926C;
    }
    // 0x80029280: nop

    // 0x80029284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80029288:
    // 0x80029288: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002928C: jr          $ra
    // 0x80029290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80029290: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80029294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029294: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x80029298: beq         $t6, $zero, L_800292D0
    if (ctx->r14 == 0) {
        // 0x8002929C: sra         $t9, $a2, 1
        ctx->r25 = S32(SIGNED(ctx->r6) >> 1);
            goto L_800292D0;
    }
    // 0x8002929C: sra         $t9, $a2, 1
    ctx->r25 = S32(SIGNED(ctx->r6) >> 1);
    // 0x800292A0: sra         $t9, $a2, 1
    ctx->r25 = S32(SIGNED(ctx->r6) >> 1);
    // 0x800292A4: multu       $t9, $a3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800292A8: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x800292AC: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x800292B0: mflo        $t6
    ctx->r14 = lo;
    // 0x800292B4: addu        $v0, $t8, $t6
    ctx->r2 = ADD32(ctx->r24, ctx->r14);
    // 0x800292B8: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x800292BC: nop

    // 0x800292C0: andi        $t9, $t7, 0xF0
    ctx->r25 = ctx->r15 & 0XF0;
    // 0x800292C4: or          $t8, $t9, $t0
    ctx->r24 = ctx->r25 | ctx->r8;
    // 0x800292C8: jr          $ra
    // 0x800292CC: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    return;
    // 0x800292CC: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_800292D0:
    // 0x800292D0: multu       $t9, $a3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800292D4: sra         $t6, $a1, 1
    ctx->r14 = S32(SIGNED(ctx->r5) >> 1);
    // 0x800292D8: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x800292DC: mflo        $t8
    ctx->r24 = lo;
    // 0x800292E0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x800292E4: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x800292E8: sll         $t7, $t0, 4
    ctx->r15 = S32(ctx->r8 << 4);
    // 0x800292EC: andi        $t9, $t6, 0xF
    ctx->r25 = ctx->r14 & 0XF;
    // 0x800292F0: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x800292F4: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x800292F8: jr          $ra
    // 0x800292FC: nop

    return;
    // 0x800292FC: nop

    // 0x80029300: jr          $ra
    // 0x80029304: nop

    return;
    // 0x80029304: nop

;}
RECOMP_FUNC void func_80029308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029308: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002930C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80029310: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80029314: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_80029318:
    // 0x80029318: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8002931C: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x80029320: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80029324: or          $v0, $v0, $t6
    ctx->r2 = ctx->r2 | ctx->r14;
    // 0x80029328: or          $v1, $v1, $t8
    ctx->r3 = ctx->r3 | ctx->r24;
    // 0x8002932C: slti        $at, $a0, 0x20
    ctx->r1 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x80029330: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80029334: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x80029338: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8002933C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80029340: bne         $at, $zero, L_80029318
    if (ctx->r1 != 0) {
        // 0x80029344: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_80029318;
    }
    // 0x80029344: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80029348: andi        $t6, $t7, 0x40
    ctx->r14 = ctx->r15 & 0X40;
    // 0x8002934C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80029350: bne         $t6, $zero, L_80029378
    if (ctx->r14 != 0) {
        // 0x80029354: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_80029378;
    }
    // 0x80029354: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80029358: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x8002935C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
L_80029360:
    // 0x80029360: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x80029364: andi        $t8, $a1, 0x40
    ctx->r24 = ctx->r5 & 0X40;
    // 0x80029368: bne         $t8, $zero, L_80029378
    if (ctx->r24 != 0) {
        // 0x8002936C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80029378;
    }
    // 0x8002936C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80029370: bne         $a0, $t0, L_80029360
    if (ctx->r4 != ctx->r8) {
        // 0x80029374: sll         $v0, $a1, 1
        ctx->r2 = S32(ctx->r5 << 1);
            goto L_80029360;
    }
    // 0x80029374: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
L_80029378:
    // 0x80029378: andi        $t9, $v1, 0x2
    ctx->r25 = ctx->r3 & 0X2;
    // 0x8002937C: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x80029380: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80029384: bne         $t9, $zero, L_800293A8
    if (ctx->r25 != 0) {
        // 0x80029388: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_800293A8;
    }
    // 0x80029388: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8002938C: srl         $v1, $v0, 1
    ctx->r3 = S32(U32(ctx->r2) >> 1);
L_80029390:
    // 0x80029390: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80029394: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x80029398: bne         $t7, $zero, L_800293A8
    if (ctx->r15 != 0) {
        // 0x8002939C: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_800293A8;
    }
    // 0x8002939C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800293A0: bne         $a3, $t0, L_80029390
    if (ctx->r7 != ctx->r8) {
        // 0x800293A4: srl         $v1, $v0, 1
        ctx->r3 = S32(U32(ctx->r2) >> 1);
            goto L_80029390;
    }
    // 0x800293A4: srl         $v1, $v0, 1
    ctx->r3 = S32(U32(ctx->r2) >> 1);
L_800293A8:
    // 0x800293A8: bne         $a1, $zero, L_800293C0
    if (ctx->r5 != 0) {
        // 0x800293AC: negu        $t8, $a0
        ctx->r24 = SUB32(0, ctx->r4);
            goto L_800293C0;
    }
    // 0x800293AC: negu        $t8, $a0
    ctx->r24 = SUB32(0, ctx->r4);
    // 0x800293B0: bne         $v0, $zero, L_800293C4
    if (ctx->r2 != 0) {
        // 0x800293B4: subu        $v1, $t8, $a3
        ctx->r3 = SUB32(ctx->r24, ctx->r7);
            goto L_800293C4;
    }
    // 0x800293B4: subu        $v1, $t8, $a3
    ctx->r3 = SUB32(ctx->r24, ctx->r7);
    // 0x800293B8: jr          $ra
    // 0x800293BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x800293BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_800293C0:
    // 0x800293C0: subu        $v1, $t8, $a3
    ctx->r3 = SUB32(ctx->r24, ctx->r7);
L_800293C4:
    // 0x800293C4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800293C8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x800293CC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x800293D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800293D4:
    // 0x800293D4: lbu         $a3, 0x0($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X0);
    // 0x800293D8: lbu         $t7, 0x1($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X1);
    // 0x800293DC: sll         $t9, $a3, 8
    ctx->r25 = S32(ctx->r7 << 8);
    // 0x800293E0: andi        $t6, $t9, 0xFF00
    ctx->r14 = ctx->r25 & 0XFF00;
    // 0x800293E4: or          $a3, $t6, $t7
    ctx->r7 = ctx->r14 | ctx->r15;
    // 0x800293E8: sllv        $t6, $a3, $a0
    ctx->r14 = S32(ctx->r7 << (ctx->r4 & 31));
    // 0x800293EC: lbu         $a3, 0x2($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X2);
    // 0x800293F0: sra         $t9, $t6, 8
    ctx->r25 = S32(SIGNED(ctx->r14) >> 8);
    // 0x800293F4: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
    // 0x800293F8: lbu         $t9, 0x3($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X3);
    // 0x800293FC: sll         $t7, $a3, 8
    ctx->r15 = S32(ctx->r7 << 8);
    // 0x80029400: andi        $t8, $t7, 0xFF00
    ctx->r24 = ctx->r15 & 0XFF00;
    // 0x80029404: or          $a3, $t8, $t9
    ctx->r7 = ctx->r24 | ctx->r25;
    // 0x80029408: sllv        $t8, $a3, $a0
    ctx->r24 = S32(ctx->r7 << (ctx->r4 & 31));
    // 0x8002940C: lbu         $a3, 0x4($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X4);
    // 0x80029410: sra         $t7, $t8, 8
    ctx->r15 = S32(SIGNED(ctx->r24) >> 8);
    // 0x80029414: sb          $t7, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r15;
    // 0x80029418: lbu         $t7, 0x5($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X5);
    // 0x8002941C: sb          $t6, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r14;
    // 0x80029420: sll         $t9, $a3, 8
    ctx->r25 = S32(ctx->r7 << 8);
    // 0x80029424: andi        $t6, $t9, 0xFF00
    ctx->r14 = ctx->r25 & 0XFF00;
    // 0x80029428: or          $a3, $t6, $t7
    ctx->r7 = ctx->r14 | ctx->r15;
    // 0x8002942C: sllv        $t6, $a3, $a0
    ctx->r14 = S32(ctx->r7 << (ctx->r4 & 31));
    // 0x80029430: lbu         $a3, 0x6($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X6);
    // 0x80029434: sra         $t9, $t6, 8
    ctx->r25 = S32(SIGNED(ctx->r14) >> 8);
    // 0x80029438: sb          $t9, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r25;
    // 0x8002943C: lbu         $t9, 0x7($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X7);
    // 0x80029440: sb          $t8, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r24;
    // 0x80029444: sll         $t7, $a3, 8
    ctx->r15 = S32(ctx->r7 << 8);
    // 0x80029448: andi        $t8, $t7, 0xFF00
    ctx->r24 = ctx->r15 & 0XFF00;
    // 0x8002944C: or          $a3, $t8, $t9
    ctx->r7 = ctx->r24 | ctx->r25;
    // 0x80029450: sllv        $t8, $a3, $a0
    ctx->r24 = S32(ctx->r7 << (ctx->r4 & 31));
    // 0x80029454: sra         $t7, $t8, 8
    ctx->r15 = S32(SIGNED(ctx->r24) >> 8);
    // 0x80029458: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8002945C: sb          $t7, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r15;
    // 0x80029460: sb          $t8, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r24;
    // 0x80029464: sb          $t6, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r14;
    // 0x80029468: bne         $v0, $a2, L_800293D4
    if (ctx->r2 != ctx->r6) {
        // 0x8002946C: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_800293D4;
    }
    // 0x8002946C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80029470: jr          $ra
    // 0x80029474: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80029474: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80029478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029478: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8002947C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80029480: addiu       $s7, $sp, 0xB0
    ctx->r23 = ADD32(ctx->r29, 0XB0);
    // 0x80029484: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x80029488: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8002948C: jal         0x80028D48
    // 0x80029490: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80028D48(rdram, ctx);
        goto after_0;
    // 0x80029490: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_0:
    // 0x80029494: andi        $t6, $s5, 0x4
    ctx->r14 = ctx->r21 & 0X4;
    // 0x80029498: beq         $t6, $zero, L_800294A8
    if (ctx->r14 == 0) {
        // 0x8002949C: addiu       $t7, $zero, 0xC
        ctx->r15 = ADD32(0, 0XC);
            goto L_800294A8;
    }
    // 0x8002949C: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x800294A0: b           L_800294B4
    // 0x800294A4: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
        goto L_800294B4;
    // 0x800294A4: sw          $t7, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r15;
L_800294A8:
    // 0x800294A8: jal         0x80029308
    // 0x800294AC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_80029308(rdram, ctx);
        goto after_1;
    // 0x800294AC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_1:
    // 0x800294B0: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
L_800294B4:
    // 0x800294B4: addiu       $t8, $sp, 0xB0
    ctx->r24 = ADD32(ctx->r29, 0XB0);
    // 0x800294B8: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x800294BC: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_800294C0:
    // 0x800294C0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800294C4: lw          $t6, 0xD8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD8);
    // 0x800294C8: lbu         $t4, 0x0($t9)
    ctx->r12 = MEM_BU(ctx->r25, 0X0);
    // 0x800294CC: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x800294D0: andi        $s7, $fp, 0x1
    ctx->r23 = ctx->r30 & 0X1;
    // 0x800294D4: subu        $t5, $s0, $t6
    ctx->r13 = SUB32(ctx->r16, ctx->r14);
L_800294D8:
    // 0x800294D8: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x800294DC: andi        $t8, $t4, 0x80
    ctx->r24 = ctx->r12 & 0X80;
    // 0x800294E0: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800294E4: beq         $at, $zero, L_800295F4
    if (ctx->r1 == 0) {
        // 0x800294E8: nop
    
            goto L_800295F4;
    }
    // 0x800294E8: nop

    // 0x800294EC: beq         $t8, $zero, L_8002957C
    if (ctx->r24 == 0) {
        // 0x800294F0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8002957C;
    }
    // 0x800294F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800294F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800294F8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800294FC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80029500: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80029504: or          $t0, $s6, $zero
    ctx->r8 = ctx->r22 | 0;
    // 0x80029508: jal         0x80029294
    // 0x8002950C: andi        $t1, $s5, 0x1
    ctx->r9 = ctx->r21 & 0X1;
    func_80029294(rdram, ctx);
        goto after_2;
    // 0x8002950C: andi        $t1, $s5, 0x1
    ctx->r9 = ctx->r21 & 0X1;
    after_2:
    // 0x80029510: beq         $t1, $zero, L_80029530
    if (ctx->r9 == 0) {
        // 0x80029514: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80029530;
    }
    // 0x80029514: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80029518: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    // 0x8002951C: addiu       $a3, $s1, 0x1
    ctx->r7 = ADD32(ctx->r17, 0X1);
    // 0x80029520: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80029524: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80029528: jal         0x80029294
    // 0x8002952C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    func_80029294(rdram, ctx);
        goto after_3;
    // 0x8002952C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    after_3:
L_80029530:
    // 0x80029530: lw          $t9, 0xE8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE8);
    // 0x80029534: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x80029538: bne         $t9, $at, L_8002957C
    if (ctx->r25 != ctx->r1) {
        // 0x8002953C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8002957C;
    }
    // 0x8002953C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80029540: addiu       $t2, $s0, 0x1
    ctx->r10 = ADD32(ctx->r16, 0X1);
    // 0x80029544: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80029548: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x8002954C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80029550: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80029554: jal         0x80029294
    // 0x80029558: or          $t0, $s6, $zero
    ctx->r8 = ctx->r22 | 0;
    func_80029294(rdram, ctx);
        goto after_4;
    // 0x80029558: or          $t0, $s6, $zero
    ctx->r8 = ctx->r22 | 0;
    after_4:
    // 0x8002955C: beq         $t1, $zero, L_8002957C
    if (ctx->r9 == 0) {
        // 0x80029560: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8002957C;
    }
    // 0x80029560: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80029564: addiu       $a1, $t2, 0x1
    ctx->r5 = ADD32(ctx->r10, 0X1);
    // 0x80029568: addiu       $a3, $s1, 0x1
    ctx->r7 = ADD32(ctx->r17, 0X1);
    // 0x8002956C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80029570: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80029574: jal         0x80029294
    // 0x80029578: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    func_80029294(rdram, ctx);
        goto after_5;
    // 0x80029578: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    after_5:
L_8002957C:
    // 0x8002957C: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x80029580: beq         $fp, $at, L_80029590
    if (ctx->r30 == ctx->r1) {
        // 0x80029584: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_80029590;
    }
    // 0x80029584: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x80029588: bne         $fp, $at, L_800295F4
    if (ctx->r30 != ctx->r1) {
        // 0x8002958C: nop
    
            goto L_800295F4;
    }
    // 0x8002958C: nop

L_80029590:
    // 0x80029590: lw          $t6, 0xE8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XE8);
    // 0x80029594: addiu       $at, $zero, 0x75
    ctx->r1 = ADD32(0, 0X75);
    // 0x80029598: bne         $t6, $at, L_800295F4
    if (ctx->r14 != ctx->r1) {
        // 0x8002959C: nop
    
            goto L_800295F4;
    }
    // 0x8002959C: nop

    // 0x800295A0: beq         $s7, $zero, L_800295B0
    if (ctx->r23 == 0) {
        // 0x800295A4: slti        $at, $t3, 0x4
        ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
            goto L_800295B0;
    }
    // 0x800295A4: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x800295A8: bne         $at, $zero, L_800295B8
    if (ctx->r1 != 0) {
        // 0x800295AC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800295B8;
    }
    // 0x800295AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_800295B0:
    // 0x800295B0: bne         $s7, $zero, L_800295F4
    if (ctx->r23 != 0) {
        // 0x800295B4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800295F4;
    }
    // 0x800295B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_800295B8:
    // 0x800295B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800295BC: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800295C0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x800295C4: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x800295C8: or          $t0, $s6, $zero
    ctx->r8 = ctx->r22 | 0;
    // 0x800295CC: jal         0x80029294
    // 0x800295D0: andi        $t1, $s5, 0x1
    ctx->r9 = ctx->r21 & 0X1;
    func_80029294(rdram, ctx);
        goto after_6;
    // 0x800295D0: andi        $t1, $s5, 0x1
    ctx->r9 = ctx->r21 & 0X1;
    after_6:
    // 0x800295D4: beq         $t1, $zero, L_800295F4
    if (ctx->r9 == 0) {
        // 0x800295D8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800295F4;
    }
    // 0x800295D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800295DC: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    // 0x800295E0: addiu       $a3, $s1, 0x1
    ctx->r7 = ADD32(ctx->r17, 0X1);
    // 0x800295E4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x800295E8: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x800295EC: jal         0x80029294
    // 0x800295F0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    func_80029294(rdram, ctx);
        goto after_7;
    // 0x800295F0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    after_7:
L_800295F4:
    // 0x800295F4: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x800295F8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800295FC: sll         $t7, $t4, 1
    ctx->r15 = S32(ctx->r12 << 1);
    // 0x80029600: andi        $t4, $t7, 0xFF
    ctx->r12 = ctx->r15 & 0XFF;
    // 0x80029604: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80029608: bne         $t3, $at, L_800294D8
    if (ctx->r11 != ctx->r1) {
        // 0x8002960C: addiu       $t5, $t5, 0x1
        ctx->r13 = ADD32(ctx->r13, 0X1);
            goto L_800294D8;
    }
    // 0x8002960C: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x80029610: beq         $s7, $zero, L_80029620
    if (ctx->r23 == 0) {
        // 0x80029614: addiu       $fp, $fp, 0x1
        ctx->r30 = ADD32(ctx->r30, 0X1);
            goto L_80029620;
    }
    // 0x80029614: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80029618: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x8002961C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80029620:
    // 0x80029620: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80029624: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80029628: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x8002962C: bne         $fp, $at, L_800294C0
    if (ctx->r30 != ctx->r1) {
        // 0x80029630: sw          $t6, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r14;
            goto L_800294C0;
    }
    // 0x80029630: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x80029634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80029638: lw          $v0, 0x98($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X98);
    // 0x8002963C: jr          $ra
    // 0x80029640: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x80029640: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_80029644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029644: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80029648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002964C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80029650: sw          $t6, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r14;
    // 0x80029654: addiu       $t7, $zero, 0x16
    ctx->r15 = ADD32(0, 0X16);
    // 0x80029658: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8002965C: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x80029660: jal         0x80029038
    // 0x80029664: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    func_80029038(rdram, ctx);
        goto after_0;
    // 0x80029664: sw          $t7, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r15;
    after_0:
    // 0x80029668: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x8002966C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80029670: addiu       $fp, $fp, 0x5650
    ctx->r30 = ADD32(ctx->r30, 0X5650);
    // 0x80029674: addiu       $s7, $zero, 0x20
    ctx->r23 = ADD32(0, 0X20);
    // 0x80029678: addiu       $s5, $sp, 0x2C
    ctx->r21 = ADD32(ctx->r29, 0X2C);
L_8002967C:
    // 0x8002967C: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
L_80029680:
    // 0x80029680: beq         $at, $zero, L_80029690
    if (ctx->r1 == 0) {
        // 0x80029684: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80029690;
    }
    // 0x80029684: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80029688: bne         $s7, $v0, L_800296F0
    if (ctx->r23 != ctx->r2) {
        // 0x8002968C: slti        $at, $v0, 0xE
        ctx->r1 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
            goto L_800296F0;
    }
    // 0x8002968C: slti        $at, $v0, 0xE
    ctx->r1 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
L_80029690:
    // 0x80029690: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x80029694: lbu         $t8, 0x1($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1);
    // 0x80029698: sll         $t9, $v0, 8
    ctx->r25 = S32(ctx->r2 << 8);
    // 0x8002969C: andi        $t6, $s1, 0x4
    ctx->r14 = ctx->r17 & 0X4;
    // 0x800296A0: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x800296A4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x800296A8: jal         0x80028D48
    // 0x800296AC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    func_80028D48(rdram, ctx);
        goto after_1;
    // 0x800296AC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    after_1:
    // 0x800296B0: beq         $s1, $zero, L_800296C0
    if (ctx->r17 == 0) {
        // 0x800296B4: nop
    
            goto L_800296C0;
    }
    // 0x800296B4: nop

    // 0x800296B8: b           L_800296CC
    // 0x800296BC: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
        goto L_800296CC;
    // 0x800296BC: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_800296C0:
    // 0x800296C0: jal         0x80029308
    // 0x800296C4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_80029308(rdram, ctx);
        goto after_2;
    // 0x800296C4: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_2:
    // 0x800296C8: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
L_800296CC:
    // 0x800296CC: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    // 0x800296D0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x800296D4: slt         $at, $t7, $s2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800296D8: beq         $at, $zero, L_800296E4
    if (ctx->r1 == 0) {
        // 0x800296DC: nop
    
            goto L_800296E4;
    }
    // 0x800296DC: nop

    // 0x800296E0: sw          $s2, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r18;
L_800296E4:
    // 0x800296E4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800296E8: b           L_80029680
    // 0x800296EC: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
        goto L_80029680;
    // 0x800296EC: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
L_800296F0:
    // 0x800296F0: bne         $at, $zero, L_8002973C
    if (ctx->r1 != 0) {
        // 0x800296F4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8002973C;
    }
    // 0x800296F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800296F8: slti        $at, $v0, 0x1B
    ctx->r1 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
    // 0x800296FC: bne         $at, $zero, L_80029728
    if (ctx->r1 != 0) {
        // 0x80029700: addiu       $t8, $v0, -0x61
        ctx->r24 = ADD32(ctx->r2, -0X61);
            goto L_80029728;
    }
    // 0x80029700: addiu       $t8, $v0, -0x61
    ctx->r24 = ADD32(ctx->r2, -0X61);
    // 0x80029704: sltiu       $at, $t8, 0x19
    ctx->r1 = ctx->r24 < 0X19 ? 1 : 0;
    // 0x80029708: beq         $at, $zero, L_8002980C
    if (ctx->r1 == 0) {
        // 0x8002970C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_8002980C;
    }
    // 0x8002970C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80029710: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80029714: addu        $at, $at, $t8
    gpr jr_addend_80029720 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80029718: lw          $t8, 0x56C4($at)
    ctx->r24 = ADD32(ctx->r1, 0X56C4);
    // 0x8002971C: nop

    // 0x80029720: jr          $t8
    // 0x80029724: nop

    switch (jr_addend_80029720 >> 2) {
        case 0: goto L_80029800; break;
        case 1: goto L_80029800; break;
        case 2: goto L_800297A0; break;
        case 3: goto L_8002980C; break;
        case 4: goto L_8002980C; break;
        case 5: goto L_800297E8; break;
        case 6: goto L_8002980C; break;
        case 7: goto L_8002980C; break;
        case 8: goto L_8002980C; break;
        case 9: goto L_8002980C; break;
        case 10: goto L_8002980C; break;
        case 11: goto L_8002980C; break;
        case 12: goto L_8002980C; break;
        case 13: goto L_80029800; break;
        case 14: goto L_8002980C; break;
        case 15: goto L_8002978C; break;
        case 16: goto L_8002980C; break;
        case 17: goto L_8002975C; break;
        case 18: goto L_800297F4; break;
        case 19: goto L_8002980C; break;
        case 20: goto L_80029800; break;
        case 21: goto L_8002980C; break;
        case 22: goto L_800297A0; break;
        case 23: goto L_800297A0; break;
        case 24: goto L_800297A0; break;
        default: switch_error(__func__, 0x80029720, 0x800956C4);
    }
    // 0x80029724: nop

L_80029728:
    // 0x80029728: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x8002972C: beq         $v1, $at, L_80029800
    if (ctx->r3 == ctx->r1) {
        // 0x80029730: nop
    
            goto L_80029800;
    }
    // 0x80029730: nop

    // 0x80029734: b           L_80029810
    // 0x80029738: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
        goto L_80029810;
    // 0x80029738: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
L_8002973C:
    // 0x8002973C: beq         $v1, $zero, L_80029778
    if (ctx->r3 == 0) {
        // 0x80029740: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_80029778;
    }
    // 0x80029740: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80029744: beq         $v1, $at, L_80029800
    if (ctx->r3 == ctx->r1) {
        // 0x80029748: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_80029800;
    }
    // 0x80029748: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8002974C: beq         $v1, $at, L_80029800
    if (ctx->r3 == ctx->r1) {
        // 0x80029750: nop
    
            goto L_80029800;
    }
    // 0x80029750: nop

    // 0x80029754: b           L_80029810
    // 0x80029758: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
        goto L_80029810;
    // 0x80029758: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
L_8002975C:
    // 0x8002975C: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x80029760: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x80029764: addiu       $t6, $t9, 0x10
    ctx->r14 = ADD32(ctx->r25, 0X10);
    // 0x80029768: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
    // 0x8002976C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80029770: b           L_80029680
    // 0x80029774: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
        goto L_80029680;
    // 0x80029774: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
L_80029778:
    // 0x80029778: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8002977C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80029780: addiu       $t8, $t7, -0x10
    ctx->r24 = ADD32(ctx->r15, -0X10);
    // 0x80029784: b           L_80029828
    // 0x80029788: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
        goto L_80029828;
    // 0x80029788: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
L_8002978C:
    // 0x8002978C: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x80029790: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80029794: addiu       $t6, $t9, -0x10
    ctx->r14 = ADD32(ctx->r25, -0X10);
    // 0x80029798: b           L_80029828
    // 0x8002979C: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
        goto L_80029828;
    // 0x8002979C: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
L_800297A0:
    // 0x800297A0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800297A4: nop

    // 0x800297A8: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x800297AC: bne         $at, $zero, L_80029680
    if (ctx->r1 != 0) {
        // 0x800297B0: slti        $at, $v0, 0x80
        ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
            goto L_80029680;
    }
    // 0x800297B0: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x800297B4: slti        $at, $v0, 0x3A
    ctx->r1 = SIGNED(ctx->r2) < 0X3A ? 1 : 0;
    // 0x800297B8: beq         $at, $zero, L_80029680
    if (ctx->r1 == 0) {
        // 0x800297BC: slti        $at, $v0, 0x80
        ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
            goto L_80029680;
    }
    // 0x800297BC: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
L_800297C0:
    // 0x800297C0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x800297C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800297C8: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x800297CC: bne         $at, $zero, L_80029680
    if (ctx->r1 != 0) {
        // 0x800297D0: slti        $at, $v0, 0x80
        ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
            goto L_80029680;
    }
    // 0x800297D0: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x800297D4: slti        $at, $v0, 0x3A
    ctx->r1 = SIGNED(ctx->r2) < 0X3A ? 1 : 0;
    // 0x800297D8: bne         $at, $zero, L_800297C0
    if (ctx->r1 != 0) {
        // 0x800297DC: nop
    
            goto L_800297C0;
    }
    // 0x800297DC: nop

    // 0x800297E0: b           L_80029680
    // 0x800297E4: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
        goto L_80029680;
    // 0x800297E4: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
L_800297E8:
    // 0x800297E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800297EC: b           L_8002967C
    // 0x800297F0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
        goto L_8002967C;
    // 0x800297F0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_800297F4:
    // 0x800297F4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800297F8: b           L_8002967C
    // 0x800297FC: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
        goto L_8002967C;
    // 0x800297FC: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
L_80029800:
    // 0x80029800: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80029804: b           L_80029680
    // 0x80029808: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
        goto L_80029680;
    // 0x80029808: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
L_8002980C:
    // 0x8002980C: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
L_80029810:
    // 0x80029810: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80029814: jal         0x80000FBC
    // 0x80029818: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_80000FBC(rdram, ctx);
        goto after_3;
    // 0x80029818: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_3:
    // 0x8002981C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80029820: b           L_80029680
    // 0x80029824: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
        goto L_80029680;
    // 0x80029824: slti        $at, $v0, 0x80
    ctx->r1 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
L_80029828:
    // 0x80029828: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002982C: beq         $s4, $at, L_80029854
    if (ctx->r20 == ctx->r1) {
        // 0x80029830: addiu       $t9, $zero, 0xF8
        ctx->r25 = ADD32(0, 0XF8);
            goto L_80029854;
    }
    // 0x80029830: addiu       $t9, $zero, 0xF8
    ctx->r25 = ADD32(0, 0XF8);
    // 0x80029834: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80029838: beq         $s4, $at, L_80029860
    if (ctx->r20 == ctx->r1) {
        // 0x8002983C: nop
    
            goto L_80029860;
    }
    // 0x8002983C: nop

    // 0x80029840: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x80029844: nop

    // 0x80029848: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x8002984C: beq         $t8, $zero, L_80029860
    if (ctx->r24 == 0) {
        // 0x80029850: nop
    
            goto L_80029860;
    }
    // 0x80029850: nop

L_80029854:
    // 0x80029854: sw          $t9, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r25;
    // 0x80029858: addiu       $t6, $zero, 0x3A
    ctx->r14 = ADD32(0, 0X3A);
    // 0x8002985C: sw          $t6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r14;
L_80029860:
    // 0x80029860: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x80029864: nop

    // 0x80029868: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x8002986C: beq         $t7, $zero, L_80029878
    if (ctx->r15 == 0) {
        // 0x80029870: addiu       $t8, $v0, 0x1
        ctx->r24 = ADD32(ctx->r2, 0X1);
            goto L_80029878;
    }
    // 0x80029870: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80029874: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
L_80029878:
    // 0x80029878: jal         0x80029004
    // 0x8002987C: nop

    func_80029004(rdram, ctx);
        goto after_4;
    // 0x8002987C: nop

    after_4:
    // 0x80029880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029884: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80029888: jr          $ra
    // 0x8002988C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    return;
    // 0x8002988C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
;}
RECOMP_FUNC void func_80029890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029890: jr          $ra
    // 0x80029894: nop

    return;
    // 0x80029894: nop

;}
RECOMP_FUNC void func_80029898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029898: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8002989C: addiu       $t8, $zero, 0x6E
    ctx->r24 = ADD32(0, 0X6E);
    // 0x800298A0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800298A4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800298A8: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x800298AC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800298B0: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x800298B4: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x800298B8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x800298BC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800298C0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800298C4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800298C8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800298CC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800298D0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800298D4: sw          $a0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r4;
    // 0x800298D8: sw          $a1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r5;
    // 0x800298DC: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x800298E0: sw          $t7, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r15;
    // 0x800298E4: sw          $t6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r14;
    // 0x800298E8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800298EC: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
    // 0x800298F0: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x800298F4: addiu       $s6, $sp, 0x94
    ctx->r22 = ADD32(ctx->r29, 0X94);
    // 0x800298F8: bne         $t9, $zero, L_80029908
    if (ctx->r25 != 0) {
        // 0x800298FC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80029908;
    }
    // 0x800298FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80029900: b           L_80029E20
    // 0x80029904: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80029E20;
    // 0x80029904: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029908:
    // 0x80029908: lw          $t6, 0xC4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC4);
    // 0x8002990C: addiu       $s3, $sp, 0x90
    ctx->r19 = ADD32(ctx->r29, 0X90);
    // 0x80029910: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    // 0x80029914: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x80029918: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x8002991C: jal         0x80029644
    // 0x80029920: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    func_80029644(rdram, ctx);
        goto after_0;
    // 0x80029920: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    after_0:
    // 0x80029924: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x80029928: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x8002992C: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x80029930: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029934: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x80029938: mflo        $a0
    ctx->r4 = lo;
    // 0x8002993C: sra         $t9, $a0, 1
    ctx->r25 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80029940: jal         0x80006DFC
    // 0x80029944: addiu       $a0, $t9, 0x40
    ctx->r4 = ADD32(ctx->r25, 0X40);
    func_80006DFC(rdram, ctx);
        goto after_1;
    // 0x80029944: addiu       $a0, $t9, 0x40
    ctx->r4 = ADD32(ctx->r25, 0X40);
    after_1:
    // 0x80029948: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x8002994C: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x80029950: lw          $v1, 0xC8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC8);
    // 0x80029954: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029958: addiu       $a0, $v0, 0x20
    ctx->r4 = ADD32(ctx->r2, 0X20);
    // 0x8002995C: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x80029960: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x80029964: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    // 0x80029968: or          $a1, $t6, $v1
    ctx->r5 = ctx->r14 | ctx->r3;
    // 0x8002996C: mflo        $a2
    ctx->r6 = lo;
    // 0x80029970: sra         $t9, $a2, 1
    ctx->r25 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80029974: jal         0x8000167C
    // 0x80029978: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_8000167C(rdram, ctx);
        goto after_2;
    // 0x80029978: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_2:
    // 0x8002997C: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x80029980: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80029984: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80029988: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x8002998C: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x80029990: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80029994: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029998: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8002999C: sw          $t8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r24;
    // 0x800299A0: addiu       $a1, $a1, -0xBA0
    ctx->r5 = ADD32(ctx->r5, -0XBA0);
    // 0x800299A4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x800299A8: mflo        $t9
    ctx->r25 = lo;
    // 0x800299AC: sra         $t6, $t9, 1
    ctx->r14 = S32(SIGNED(ctx->r25) >> 1);
    // 0x800299B0: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x800299B4: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
    // 0x800299B8: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x800299BC: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x800299C0: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x800299C4: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x800299C8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x800299CC: sw          $t7, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r15;
    // 0x800299D0: addu        $a0, $v1, $t8
    ctx->r4 = ADD32(ctx->r3, ctx->r24);
    // 0x800299D4: jal         0x80076BF8
    // 0x800299D8: sw          $t6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r14;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x800299D8: sw          $t6, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r14;
    after_3:
    // 0x800299DC: jal         0x80029038
    // 0x800299E0: nop

    func_80029038(rdram, ctx);
        goto after_4;
    // 0x800299E0: nop

    after_4:
    // 0x800299E4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x800299E8: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
    // 0x800299EC: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x800299F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800299F4: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x800299F8: addiu       $s7, $zero, 0xA
    ctx->r23 = ADD32(0, 0XA);
    // 0x800299FC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80029A00:
    // 0x80029A00: andi        $t6, $v1, 0x80
    ctx->r14 = ctx->r3 & 0X80;
    // 0x80029A04: beq         $t6, $zero, L_80029A68
    if (ctx->r14 == 0) {
        // 0x80029A08: slti        $at, $v1, 0x21
        ctx->r1 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_80029A68;
    }
    // 0x80029A08: slti        $at, $v1, 0x21
    ctx->r1 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x80029A0C: lbu         $t7, 0x1($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1);
    // 0x80029A10: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x80029A14: sll         $a0, $v0, 8
    ctx->r4 = S32(ctx->r2 << 8);
    // 0x80029A18: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80029A1C: lw          $s2, 0x7C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X7C);
    // 0x80029A20: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x80029A24: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x80029A28: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x80029A2C: lw          $s5, 0xC4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC4);
    // 0x80029A30: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x80029A34: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x80029A38: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x80029A3C: sw          $fp, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r30;
    // 0x80029A40: or          $s6, $s1, $zero
    ctx->r22 = ctx->r17 | 0;
    // 0x80029A44: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x80029A48: jal         0x80029478
    // 0x80029A4C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_80029478(rdram, ctx);
        goto after_5;
    // 0x80029A4C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_5:
    // 0x80029A50: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x80029A54: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x80029A58: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x80029A5C: addiu       $s7, $zero, 0xA
    ctx->r23 = ADD32(0, 0XA);
    // 0x80029A60: b           L_80029DD0
    // 0x80029A64: addu        $fp, $fp, $v0
    ctx->r30 = ADD32(ctx->r30, ctx->r2);
        goto L_80029DD0;
    // 0x80029A64: addu        $fp, $fp, $v0
    ctx->r30 = ADD32(ctx->r30, ctx->r2);
L_80029A68:
    // 0x80029A68: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80029A6C: bne         $at, $zero, L_80029A9C
    if (ctx->r1 != 0) {
        // 0x80029A70: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80029A9C;
    }
    // 0x80029A70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80029A74: addiu       $t9, $v1, -0x61
    ctx->r25 = ADD32(ctx->r3, -0X61);
    // 0x80029A78: sltiu       $at, $t9, 0x19
    ctx->r1 = ctx->r25 < 0X19 ? 1 : 0;
    // 0x80029A7C: beq         $at, $zero, L_80029DB4
    if (ctx->r1 == 0) {
        // 0x80029A80: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80029DB4;
    }
    // 0x80029A80: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80029A84: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80029A88: addu        $at, $at, $t9
    gpr jr_addend_80029A94 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80029A8C: lw          $t9, 0x5728($at)
    ctx->r25 = ADD32(ctx->r1, 0X5728);
    // 0x80029A90: nop

    // 0x80029A94: jr          $t9
    // 0x80029A98: nop

    switch (jr_addend_80029A94 >> 2) {
        case 0: goto L_80029AC0; break;
        case 1: goto L_80029CC4; break;
        case 2: goto L_80029BF0; break;
        case 3: goto L_80029DB4; break;
        case 4: goto L_80029DB4; break;
        case 5: goto L_80029DC0; break;
        case 6: goto L_80029DB4; break;
        case 7: goto L_80029DB4; break;
        case 8: goto L_80029DB4; break;
        case 9: goto L_80029DB4; break;
        case 10: goto L_80029DB4; break;
        case 11: goto L_80029DB4; break;
        case 12: goto L_80029DB4; break;
        case 13: goto L_80029CD0; break;
        case 14: goto L_80029DB4; break;
        case 15: goto L_80029BE4; break;
        case 16: goto L_80029DB4; break;
        case 17: goto L_80029BC0; break;
        case 18: goto L_80029DC0; break;
        case 19: goto L_80029DB4; break;
        case 20: goto L_80029CB8; break;
        case 21: goto L_80029DB4; break;
        case 22: goto L_80029C40; break;
        case 23: goto L_80029CDC; break;
        case 24: goto L_80029D48; break;
        default: switch_error(__func__, 0x80029A94, 0x80095728);
    }
    // 0x80029A98: nop

L_80029A9C:
    // 0x80029A9C: sltiu       $at, $v0, 0x21
    ctx->r1 = ctx->r2 < 0X21 ? 1 : 0;
    // 0x80029AA0: beq         $at, $zero, L_80029DB4
    if (ctx->r1 == 0) {
        // 0x80029AA4: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_80029DB4;
    }
    // 0x80029AA4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80029AA8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80029AAC: addu        $at, $at, $t6
    gpr jr_addend_80029AB8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80029AB0: lw          $t6, 0x578C($at)
    ctx->r14 = ADD32(ctx->r1, 0X578C);
    // 0x80029AB4: nop

    // 0x80029AB8: jr          $t6
    // 0x80029ABC: nop

    switch (jr_addend_80029AB8 >> 2) {
        case 0: goto L_80029BD4; break;
        case 1: goto L_80029DB4; break;
        case 2: goto L_80029DB4; break;
        case 3: goto L_80029DB4; break;
        case 4: goto L_80029DB4; break;
        case 5: goto L_80029DB4; break;
        case 6: goto L_80029DB4; break;
        case 7: goto L_80029DB4; break;
        case 8: goto L_80029DB4; break;
        case 9: goto L_80029DB4; break;
        case 10: goto L_80029DC0; break;
        case 11: goto L_80029DB4; break;
        case 12: goto L_80029DB4; break;
        case 13: goto L_80029DC0; break;
        case 14: goto L_80029DB4; break;
        case 15: goto L_80029DB4; break;
        case 16: goto L_80029DB4; break;
        case 17: goto L_80029DB4; break;
        case 18: goto L_80029DB4; break;
        case 19: goto L_80029DB4; break;
        case 20: goto L_80029DB4; break;
        case 21: goto L_80029DB4; break;
        case 22: goto L_80029DB4; break;
        case 23: goto L_80029DB4; break;
        case 24: goto L_80029DB4; break;
        case 25: goto L_80029DB4; break;
        case 26: goto L_80029DC0; break;
        case 27: goto L_80029DB4; break;
        case 28: goto L_80029DB4; break;
        case 29: goto L_80029DB4; break;
        case 30: goto L_80029DB4; break;
        case 31: goto L_80029DB4; break;
        case 32: goto L_80029BB8; break;
        default: switch_error(__func__, 0x80029AB8, 0x8009578C);
    }
    // 0x80029ABC: nop

L_80029AC0:
    // 0x80029AC0: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    // 0x80029AC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80029AC8: jal         0x80002F88
    // 0x80029ACC: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    func_80002F88(rdram, ctx);
        goto after_6;
    // 0x80029ACC: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
    after_6:
    // 0x80029AD0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80029AD4: lbu         $a0, -0x42A0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X42A0);
    // 0x80029AD8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x80029ADC: addiu       $a0, $a0, 0x15
    ctx->r4 = ADD32(ctx->r4, 0X15);
    // 0x80029AE0: beq         $a0, $zero, L_80029B30
    if (ctx->r4 == 0) {
        // 0x80029AE4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80029B30;
    }
    // 0x80029AE4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80029AE8:
    // 0x80029AE8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80029AEC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80029AF0: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80029AF4: beq         $t7, $zero, L_80029B10
    if (ctx->r15 == 0) {
        // 0x80029AF8: nop
    
            goto L_80029B10;
    }
    // 0x80029AF8: nop

L_80029AFC:
    // 0x80029AFC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80029B00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80029B04: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x80029B08: bne         $t8, $zero, L_80029AFC
    if (ctx->r24 != 0) {
        // 0x80029B0C: nop
    
            goto L_80029AFC;
    }
    // 0x80029B0C: nop

L_80029B10:
    // 0x80029B10: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80029B14: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80029B18: sltu        $t9, $zero, $v0
    ctx->r25 = 0 < ctx->r2 ? 1 : 0;
    // 0x80029B1C: bne         $t9, $zero, L_80029AE8
    if (ctx->r25 != 0) {
        // 0x80029B20: nop
    
            goto L_80029AE8;
    }
    // 0x80029B20: nop

    // 0x80029B24: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80029B28: bne         $a1, $a0, L_80029AE8
    if (ctx->r5 != ctx->r4) {
        // 0x80029B2C: nop
    
            goto L_80029AE8;
    }
    // 0x80029B2C: nop

L_80029B30:
    // 0x80029B30: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x80029B34: nop

    // 0x80029B38: beq         $a1, $zero, L_80029BA8
    if (ctx->r5 == 0) {
        // 0x80029B3C: nop
    
            goto L_80029BA8;
    }
    // 0x80029B3C: nop

L_80029B40:
    // 0x80029B40: lbu         $t6, 0x1($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X1);
    // 0x80029B44: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x80029B48: sll         $a0, $a1, 8
    ctx->r4 = S32(ctx->r5 << 8);
    // 0x80029B4C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80029B50: lw          $s2, 0x7C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X7C);
    // 0x80029B54: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x80029B58: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x80029B5C: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x80029B60: lw          $s5, 0xC4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC4);
    // 0x80029B64: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x80029B68: sw          $fp, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r30;
    // 0x80029B6C: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x80029B70: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x80029B74: sw          $fp, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r30;
    // 0x80029B78: or          $s6, $s1, $zero
    ctx->r22 = ctx->r17 | 0;
    // 0x80029B7C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80029B80: jal         0x80029478
    // 0x80029B84: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_80029478(rdram, ctx);
        goto after_7;
    // 0x80029B84: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_7:
    // 0x80029B88: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80029B8C: lw          $fp, 0x88($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X88);
    // 0x80029B90: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x80029B94: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x80029B98: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x80029B9C: addiu       $s7, $zero, 0xA
    ctx->r23 = ADD32(0, 0XA);
    // 0x80029BA0: bne         $a1, $zero, L_80029B40
    if (ctx->r5 != 0) {
        // 0x80029BA4: addu        $fp, $fp, $v0
        ctx->r30 = ADD32(ctx->r30, ctx->r2);
            goto L_80029B40;
    }
    // 0x80029BA4: addu        $fp, $fp, $v0
    ctx->r30 = ADD32(ctx->r30, ctx->r2);
L_80029BA8:
    // 0x80029BA8: jal         0x80002D08
    // 0x80029BAC: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    func_80002D08(rdram, ctx);
        goto after_8;
    // 0x80029BAC: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_8:
    // 0x80029BB0: b           L_80029DC4
    // 0x80029BB4: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
        goto L_80029DC4;
    // 0x80029BB4: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
L_80029BB8:
    // 0x80029BB8: b           L_80029DC0
    // 0x80029BBC: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
        goto L_80029DC0;
    // 0x80029BBC: addiu       $fp, $fp, 0x8
    ctx->r30 = ADD32(ctx->r30, 0X8);
L_80029BC0:
    // 0x80029BC0: lw          $t8, 0x84($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X84);
    // 0x80029BC4: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x80029BC8: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80029BCC: b           L_80029DC0
    // 0x80029BD0: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
        goto L_80029DC0;
    // 0x80029BD0: sw          $t9, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r25;
L_80029BD4:
    // 0x80029BD4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80029BD8: sw          $t6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r14;
    // 0x80029BDC: b           L_80029DC0
    // 0x80029BE0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_80029DC0;
    // 0x80029BE0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_80029BE4:
    // 0x80029BE4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80029BE8: b           L_80029DC0
    // 0x80029BEC: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
        goto L_80029DC0;
    // 0x80029BEC: sw          $t7, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r15;
L_80029BF0:
    // 0x80029BF0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80029BF4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80029BF8: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x80029BFC: bne         $at, $zero, L_80029DC0
    if (ctx->r1 != 0) {
        // 0x80029C00: slti        $at, $v1, 0x3A
        ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
            goto L_80029DC0;
    }
    // 0x80029C00: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x80029C04: beq         $at, $zero, L_80029DC4
    if (ctx->r1 == 0) {
        // 0x80029C08: lw          $t9, 0x80($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X80);
            goto L_80029DC4;
    }
    // 0x80029C08: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
L_80029C0C:
    // 0x80029C0C: multu       $s1, $s7
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029C10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80029C14: mflo        $s1
    ctx->r17 = lo;
    // 0x80029C18: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x80029C1C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80029C20: addiu       $s1, $s1, -0x30
    ctx->r17 = ADD32(ctx->r17, -0X30);
    // 0x80029C24: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x80029C28: bne         $at, $zero, L_80029DC0
    if (ctx->r1 != 0) {
        // 0x80029C2C: slti        $at, $v1, 0x3A
        ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
            goto L_80029DC0;
    }
    // 0x80029C2C: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x80029C30: bne         $at, $zero, L_80029C0C
    if (ctx->r1 != 0) {
        // 0x80029C34: nop
    
            goto L_80029C0C;
    }
    // 0x80029C34: nop

    // 0x80029C38: b           L_80029DC4
    // 0x80029C3C: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
        goto L_80029DC4;
    // 0x80029C3C: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
L_80029C40:
    // 0x80029C40: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80029C44: lw          $t9, 0x94($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X94);
    // 0x80029C48: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x80029C4C: bne         $at, $zero, L_80029C8C
    if (ctx->r1 != 0) {
        // 0x80029C50: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80029C8C;
    }
    // 0x80029C50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80029C54: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x80029C58: beq         $at, $zero, L_80029C90
    if (ctx->r1 == 0) {
        // 0x80029C5C: lw          $t6, 0x90($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X90);
            goto L_80029C90;
    }
    // 0x80029C5C: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
L_80029C60:
    // 0x80029C60: multu       $v0, $s7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029C64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80029C68: mflo        $v0
    ctx->r2 = lo;
    // 0x80029C6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80029C70: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80029C74: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x80029C78: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x80029C7C: bne         $at, $zero, L_80029C8C
    if (ctx->r1 != 0) {
        // 0x80029C80: slti        $at, $v1, 0x3A
        ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
            goto L_80029C8C;
    }
    // 0x80029C80: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x80029C84: bne         $at, $zero, L_80029C60
    if (ctx->r1 != 0) {
        // 0x80029C88: nop
    
            goto L_80029C60;
    }
    // 0x80029C88: nop

L_80029C8C:
    // 0x80029C8C: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
L_80029C90:
    // 0x80029C90: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x80029C94: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029C98: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x80029C9C: or          $a1, $t8, $v0
    ctx->r5 = ctx->r24 | ctx->r2;
    // 0x80029CA0: mflo        $a2
    ctx->r6 = lo;
    // 0x80029CA4: sra         $t7, $a2, 1
    ctx->r15 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80029CA8: jal         0x8000167C
    // 0x80029CAC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8000167C(rdram, ctx);
        goto after_9;
    // 0x80029CAC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_9:
    // 0x80029CB0: b           L_80029DC4
    // 0x80029CB4: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
        goto L_80029DC4;
    // 0x80029CB4: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
L_80029CB8:
    // 0x80029CB8: addiu       $t8, $zero, 0x75
    ctx->r24 = ADD32(0, 0X75);
    // 0x80029CBC: b           L_80029DC0
    // 0x80029CC0: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
        goto L_80029DC0;
    // 0x80029CC0: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
L_80029CC4:
    // 0x80029CC4: addiu       $t9, $zero, 0x62
    ctx->r25 = ADD32(0, 0X62);
    // 0x80029CC8: b           L_80029DC0
    // 0x80029CCC: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
        goto L_80029DC0;
    // 0x80029CCC: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
L_80029CD0:
    // 0x80029CD0: addiu       $t6, $zero, 0x6E
    ctx->r14 = ADD32(0, 0X6E);
    // 0x80029CD4: b           L_80029DC0
    // 0x80029CD8: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
        goto L_80029DC0;
    // 0x80029CD8: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
L_80029CDC:
    // 0x80029CDC: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    // 0x80029CE0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80029CE4: nop

    // 0x80029CE8: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x80029CEC: bne         $at, $zero, L_80029DC0
    if (ctx->r1 != 0) {
        // 0x80029CF0: slti        $at, $v1, 0x3A
        ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
            goto L_80029DC0;
    }
    // 0x80029CF0: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x80029CF4: beq         $at, $zero, L_80029DC4
    if (ctx->r1 == 0) {
        // 0x80029CF8: lw          $t9, 0x80($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X80);
            goto L_80029DC4;
    }
    // 0x80029CF8: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x80029CFC: lw          $t7, 0xB0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB0);
L_80029D00:
    // 0x80029D00: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80029D04: multu       $t7, $s7
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029D08: mflo        $t8
    ctx->r24 = lo;
    // 0x80029D0C: sw          $t8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r24;
    // 0x80029D10: lbu         $t9, -0x1($s0)
    ctx->r25 = MEM_BU(ctx->r16, -0X1);
    // 0x80029D14: nop

    // 0x80029D18: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80029D1C: addiu       $t7, $t6, -0x30
    ctx->r15 = ADD32(ctx->r14, -0X30);
    // 0x80029D20: sw          $t7, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r15;
    // 0x80029D24: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80029D28: nop

    // 0x80029D2C: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x80029D30: bne         $at, $zero, L_80029DC0
    if (ctx->r1 != 0) {
        // 0x80029D34: slti        $at, $v1, 0x3A
        ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
            goto L_80029DC0;
    }
    // 0x80029D34: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x80029D38: bne         $at, $zero, L_80029D00
    if (ctx->r1 != 0) {
        // 0x80029D3C: lw          $t7, 0xB0($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB0);
            goto L_80029D00;
    }
    // 0x80029D3C: lw          $t7, 0xB0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB0);
    // 0x80029D40: b           L_80029DC4
    // 0x80029D44: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
        goto L_80029DC4;
    // 0x80029D44: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
L_80029D48:
    // 0x80029D48: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x80029D4C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80029D50: nop

    // 0x80029D54: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x80029D58: bne         $at, $zero, L_80029DC0
    if (ctx->r1 != 0) {
        // 0x80029D5C: slti        $at, $v1, 0x3A
        ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
            goto L_80029DC0;
    }
    // 0x80029D5C: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x80029D60: beq         $at, $zero, L_80029DC4
    if (ctx->r1 == 0) {
        // 0x80029D64: lw          $t9, 0x80($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X80);
            goto L_80029DC4;
    }
    // 0x80029D64: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x80029D68: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
L_80029D6C:
    // 0x80029D6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80029D70: multu       $t8, $s7
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029D74: mflo        $t9
    ctx->r25 = lo;
    // 0x80029D78: sw          $t9, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r25;
    // 0x80029D7C: lbu         $t6, -0x1($s0)
    ctx->r14 = MEM_BU(ctx->r16, -0X1);
    // 0x80029D80: nop

    // 0x80029D84: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80029D88: addiu       $t8, $t7, -0x30
    ctx->r24 = ADD32(ctx->r15, -0X30);
    // 0x80029D8C: sw          $t8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r24;
    // 0x80029D90: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80029D94: nop

    // 0x80029D98: slti        $at, $v1, 0x30
    ctx->r1 = SIGNED(ctx->r3) < 0X30 ? 1 : 0;
    // 0x80029D9C: bne         $at, $zero, L_80029DC0
    if (ctx->r1 != 0) {
        // 0x80029DA0: slti        $at, $v1, 0x3A
        ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
            goto L_80029DC0;
    }
    // 0x80029DA0: slti        $at, $v1, 0x3A
    ctx->r1 = SIGNED(ctx->r3) < 0X3A ? 1 : 0;
    // 0x80029DA4: bne         $at, $zero, L_80029D6C
    if (ctx->r1 != 0) {
        // 0x80029DA8: lw          $t8, 0xAC($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XAC);
            goto L_80029D6C;
    }
    // 0x80029DA8: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80029DAC: b           L_80029DC4
    // 0x80029DB0: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
        goto L_80029DC4;
    // 0x80029DB0: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
L_80029DB4:
    // 0x80029DB4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80029DB8: jal         0x80000FBC
    // 0x80029DBC: addiu       $a0, $a0, 0x5684
    ctx->r4 = ADD32(ctx->r4, 0X5684);
    func_80000FBC(rdram, ctx);
        goto after_10;
    // 0x80029DBC: addiu       $a0, $a0, 0x5684
    ctx->r4 = ADD32(ctx->r4, 0X5684);
    after_10:
L_80029DC0:
    // 0x80029DC0: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
L_80029DC4:
    // 0x80029DC4: nop

    // 0x80029DC8: bne         $t9, $zero, L_80029DDC
    if (ctx->r25 != 0) {
        // 0x80029DCC: nop
    
            goto L_80029DDC;
    }
    // 0x80029DCC: nop

L_80029DD0:
    // 0x80029DD0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80029DD4: b           L_80029A00
    // 0x80029DD8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80029A00;
    // 0x80029DD8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80029DDC:
    // 0x80029DDC: jal         0x80029004
    // 0x80029DE0: nop

    func_80029004(rdram, ctx);
        goto after_11;
    // 0x80029DE0: nop

    after_11:
    // 0x80029DE4: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x80029DE8: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x80029DEC: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x80029DF0: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80029DF4: mflo        $a1
    ctx->r5 = lo;
    // 0x80029DF8: sra         $t8, $a1, 1
    ctx->r24 = S32(SIGNED(ctx->r5) >> 1);
    // 0x80029DFC: jal         0x80075580
    // 0x80029E00: addiu       $a1, $t8, 0x20
    ctx->r5 = ADD32(ctx->r24, 0X20);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_12;
    // 0x80029E00: addiu       $a1, $t8, 0x20
    ctx->r5 = ADD32(ctx->r24, 0X20);
    after_12:
    // 0x80029E04: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x80029E08: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80029E0C: sw          $s0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r16;
    // 0x80029E10: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x80029E14: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x80029E18: jal         0x800154E8
    // 0x80029E1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_800154E8(rdram, ctx);
        goto after_13;
    // 0x80029E1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
L_80029E20:
    // 0x80029E20: bne         $v0, $zero, L_80029E30
    if (ctx->r2 != 0) {
        // 0x80029E24: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80029E30;
    }
    // 0x80029E24: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80029E28: b           L_80029E98
    // 0x80029E2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80029E98;
    // 0x80029E2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80029E30:
    // 0x80029E30: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
    // 0x80029E34: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80029E38: beq         $v0, $v1, L_80029E44
    if (ctx->r2 == ctx->r3) {
        // 0x80029E3C: nop
    
            goto L_80029E44;
    }
    // 0x80029E3C: nop

    // 0x80029E40: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
L_80029E44:
    // 0x80029E44: lw          $v0, 0xAC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XAC);
    // 0x80029E48: nop

    // 0x80029E4C: beq         $v0, $v1, L_80029E5C
    if (ctx->r2 == ctx->r3) {
        // 0x80029E50: lw          $t6, 0xB8($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XB8);
            goto L_80029E5C;
    }
    // 0x80029E50: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x80029E54: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    // 0x80029E58: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
L_80029E5C:
    // 0x80029E5C: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x80029E60: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80029E64: ori         $t9, $t8, 0x110
    ctx->r25 = ctx->r24 | 0X110;
    // 0x80029E68: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80029E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80029E70: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    // 0x80029E74: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
    // 0x80029E78: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x80029E7C: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x80029E80: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80029E84: nop

    // 0x80029E88: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80029E8C: jal         0x80014A7C
    // 0x80029E90: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    func_80014A7C(rdram, ctx);
        goto after_14;
    // 0x80029E90: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    after_14:
    // 0x80029E94: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80029E98:
    // 0x80029E98: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80029E9C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80029EA0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80029EA4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80029EA8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80029EAC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80029EB0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80029EB4: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80029EB8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80029EBC: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80029EC0: jr          $ra
    // 0x80029EC4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80029EC4: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_80029EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029EC8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80029ECC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80029ED0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80029ED4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80029ED8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80029EDC: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80029EE0: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x80029EE4: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80029EE8: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x80029EEC: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80029EF0: jal         0x80007774
    // 0x80029EF4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80029EF4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80029EF8: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80029EFC: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x80029F00: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80029F04: sw          $s1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r17;
    // 0x80029F08: sw          $t6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r14;
    // 0x80029F0C: jal         0x8000796C
    // 0x80029F10: addiu       $a0, $a0, -0x5E0C
    ctx->r4 = ADD32(ctx->r4, -0X5E0C);
    func_8000796C(rdram, ctx);
        goto after_1;
    // 0x80029F10: addiu       $a0, $a0, -0x5E0C
    ctx->r4 = ADD32(ctx->r4, -0X5E0C);
    after_1:
    // 0x80029F14: lw          $t7, 0x10($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X10);
    // 0x80029F18: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80029F1C: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x80029F20: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x80029F24: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x80029F28: sw          $a2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r6;
    // 0x80029F2C: jal         0x80029898
    // 0x80029F30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80029898(rdram, ctx);
        goto after_2;
    // 0x80029F30: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_2:
    // 0x80029F34: beq         $v0, $zero, L_8002A1BC
    if (ctx->r2 == 0) {
        // 0x80029F38: sw          $v0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r2;
            goto L_8002A1BC;
    }
    // 0x80029F38: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x80029F3C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80029F40: lwc1        $f24, 0x5810($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5810);
    // 0x80029F44: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80029F48: lwc1        $f22, 0x5814($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5814);
    // 0x80029F4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80029F50: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80029F54: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80029F58: addiu       $s2, $s2, 0x2C8
    ctx->r18 = ADD32(ctx->r18, 0X2C8);
L_80029F5C:
    // 0x80029F5C: lw          $t8, 0x14($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X14);
    // 0x80029F60: addiu       $a0, $zero, 0x937
    ctx->r4 = ADD32(0, 0X937);
    // 0x80029F64: bne         $t8, $zero, L_80029F78
    if (ctx->r24 != 0) {
        // 0x80029F68: addiu       $a1, $zero, 0x101
        ctx->r5 = ADD32(0, 0X101);
            goto L_80029F78;
    }
    // 0x80029F68: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    // 0x80029F6C: jal         0x80015784
    // 0x80029F70: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_80015784(rdram, ctx);
        goto after_3;
    // 0x80029F70: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_3:
    // 0x80029F74: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
L_80029F78:
    // 0x80029F78: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x80029F7C: jal         0x80014AB0
    // 0x80029F80: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AB0(rdram, ctx);
        goto after_4;
    // 0x80029F80: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_4:
    // 0x80029F84: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80029F88:
    // 0x80029F88: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80029F8C: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x80029F90: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80029F94: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80029F98: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80029F9C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80029FA0: jal         0x80014B38
    // 0x80029FA4: nop

    func_80014B38(rdram, ctx);
        goto after_5;
    // 0x80029FA4: nop

    after_5:
    // 0x80029FA8: jal         0x80007AB0
    // 0x80029FAC: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x80029FAC: nop

    after_6:
    // 0x80029FB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80029FB4: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80029FB8: bne         $at, $zero, L_80029F88
    if (ctx->r1 != 0) {
        // 0x80029FBC: nop
    
            goto L_80029F88;
    }
    // 0x80029FBC: nop

    // 0x80029FC0: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x80029FC4: jal         0x80014AC4
    // 0x80029FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AC4(rdram, ctx);
        goto after_7;
    // 0x80029FC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_7:
    // 0x80029FCC: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x80029FD0: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80029FD4: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80029FD8: jal         0x80014B38
    // 0x80029FDC: nop

    func_80014B38(rdram, ctx);
        goto after_8;
    // 0x80029FDC: nop

    after_8:
    // 0x80029FE0: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80029FE4: nop

    // 0x80029FE8: beq         $a0, $zero, L_8002A000
    if (ctx->r4 == 0) {
        // 0x80029FEC: nop
    
            goto L_8002A000;
    }
    // 0x80029FEC: nop

    // 0x80029FF0: jal         0x8000797C
    // 0x80029FF4: nop

    func_8000797C(rdram, ctx);
        goto after_9;
    // 0x80029FF4: nop

    after_9:
    // 0x80029FF8: b           L_8002A110
    // 0x80029FFC: lw          $t7, 0x14($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X14);
        goto L_8002A110;
    // 0x80029FFC: lw          $t7, 0x14($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X14);
L_8002A000:
    // 0x8002A000: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8002A004: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x8002A008: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8002A00C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002A010: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002A014: lwc1        $f10, 0x1C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8002A018: lw          $v1, 0x38($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X38);
    // 0x8002A01C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8002A020: lw          $t1, 0x10($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X10);
    // 0x8002A024: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x8002A028: srl         $t2, $t1, 1
    ctx->r10 = S32(U32(ctx->r9) >> 1);
    // 0x8002A02C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8002A030: addiu       $t4, $t3, -0x8
    ctx->r12 = ADD32(ctx->r11, -0X8);
    // 0x8002A034: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x8002A038: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8002A03C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8002A040: bgez        $t4, L_8002A058
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8002A044: cvt.s.w     $f18, $f18
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
            goto L_8002A058;
    }
    // 0x8002A044: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8002A048: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002A04C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002A050: nop

    // 0x8002A054: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8002A058:
    // 0x8002A058: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8002A05C: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x8002A060: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8002A064: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002A068: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002A06C: lw          $t7, 0x14($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X14);
    // 0x8002A070: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8002A074: srl         $t8, $t7, 1
    ctx->r24 = S32(U32(ctx->r15) >> 1);
    // 0x8002A078: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x8002A07C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8002A080: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8002A084: addiu       $t1, $t9, -0x8
    ctx->r9 = ADD32(ctx->r25, -0X8);
    // 0x8002A088: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8002A08C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8002A090: bgez        $t1, L_8002A0A8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8002A094: cvt.s.w     $f10, $f10
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8002A0A8;
    }
    // 0x8002A094: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002A098: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002A09C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002A0A0: nop

    // 0x8002A0A4: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_8002A0A8:
    // 0x8002A0A8: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8002A0AC: jal         0x80014B64
    // 0x8002A0B0: nop

    func_80014B64(rdram, ctx);
        goto after_10;
    // 0x8002A0B0: nop

    after_10:
    // 0x8002A0B4: lhu         $t0, 0x0($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X0);
    // 0x8002A0B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8002A0BC: andi        $t2, $t0, 0xC000
    ctx->r10 = ctx->r8 & 0XC000;
    // 0x8002A0C0: bne         $t2, $zero, L_8002A10C
    if (ctx->r10 != 0) {
        // 0x8002A0C4: andi        $t3, $s0, 0x8
        ctx->r11 = ctx->r16 & 0X8;
            goto L_8002A10C;
    }
    // 0x8002A0C4: andi        $t3, $s0, 0x8
    ctx->r11 = ctx->r16 & 0X8;
L_8002A0C8:
    // 0x8002A0C8: beq         $t3, $zero, L_8002A0E8
    if (ctx->r11 == 0) {
        // 0x8002A0CC: lw          $a0, 0x5C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X5C);
            goto L_8002A0E8;
    }
    // 0x8002A0CC: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8002A0D0: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8002A0D4: jal         0x80014AC4
    // 0x8002A0D8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AC4(rdram, ctx);
        goto after_11;
    // 0x8002A0D8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_11:
    // 0x8002A0DC: b           L_8002A0F0
    // 0x8002A0E0: nop

        goto L_8002A0F0;
    // 0x8002A0E0: nop

    // 0x8002A0E4: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
L_8002A0E8:
    // 0x8002A0E8: jal         0x80014AB0
    // 0x8002A0EC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AB0(rdram, ctx);
        goto after_12;
    // 0x8002A0EC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_12:
L_8002A0F0:
    // 0x8002A0F0: jal         0x80007AB0
    // 0x8002A0F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_80007AB0(rdram, ctx);
        goto after_13;
    // 0x8002A0F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_13:
    // 0x8002A0F8: lhu         $t4, 0x0($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X0);
    // 0x8002A0FC: nop

    // 0x8002A100: andi        $t5, $t4, 0xC000
    ctx->r13 = ctx->r12 & 0XC000;
    // 0x8002A104: beq         $t5, $zero, L_8002A0C8
    if (ctx->r13 == 0) {
        // 0x8002A108: andi        $t3, $s0, 0x8
        ctx->r11 = ctx->r16 & 0X8;
            goto L_8002A0C8;
    }
    // 0x8002A108: andi        $t3, $s0, 0x8
    ctx->r11 = ctx->r16 & 0X8;
L_8002A10C:
    // 0x8002A10C: lw          $t7, 0x14($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X14);
L_8002A110:
    // 0x8002A110: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8002A114: bne         $t7, $zero, L_8002A124
    if (ctx->r15 != 0) {
        // 0x8002A118: nop
    
            goto L_8002A124;
    }
    // 0x8002A118: nop

    // 0x8002A11C: jal         0x80014AC4
    // 0x8002A120: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AC4(rdram, ctx);
        goto after_14;
    // 0x8002A120: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_14:
L_8002A124:
    // 0x8002A124: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x8002A128: jal         0x80014AB0
    // 0x8002A12C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80014AB0(rdram, ctx);
        goto after_15;
    // 0x8002A12C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_15:
    // 0x8002A130: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_8002A134:
    // 0x8002A134: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
    // 0x8002A138: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x8002A13C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8002A140: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x8002A144: mul.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x8002A148: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8002A14C: jal         0x80014B38
    // 0x8002A150: nop

    func_80014B38(rdram, ctx);
        goto after_16;
    // 0x8002A150: nop

    after_16:
    // 0x8002A154: jal         0x80007AB0
    // 0x8002A158: nop

    func_80007AB0(rdram, ctx);
        goto after_17;
    // 0x8002A158: nop

    after_17:
    // 0x8002A15C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8002A160: bne         $s0, $zero, L_8002A134
    if (ctx->r16 != 0) {
        // 0x8002A164: nop
    
            goto L_8002A134;
    }
    // 0x8002A164: nop

    // 0x8002A168: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x8002A16C: jal         0x80014BF4
    // 0x8002A170: nop

    func_80014BF4(rdram, ctx);
        goto after_18;
    // 0x8002A170: nop

    after_18:
    // 0x8002A174: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x8002A178: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8002A17C: bne         $t6, $zero, L_8002A18C
    if (ctx->r14 != 0) {
        // 0x8002A180: nop
    
            goto L_8002A18C;
    }
    // 0x8002A180: nop

    // 0x8002A184: jal         0x80014BF4
    // 0x8002A188: nop

    func_80014BF4(rdram, ctx);
        goto after_19;
    // 0x8002A188: nop

    after_19:
L_8002A18C:
    // 0x8002A18C: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    // 0x8002A190: jal         0x8000797C
    // 0x8002A194: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8000797C(rdram, ctx);
        goto after_20;
    // 0x8002A194: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_20:
    // 0x8002A198: lw          $t8, 0x10($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X10);
    // 0x8002A19C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8002A1A0: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x8002A1A4: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x8002A1A8: lw          $a3, 0xC($s1)
    ctx->r7 = MEM_W(ctx->r17, 0XC);
    // 0x8002A1AC: jal         0x80029898
    // 0x8002A1B0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_80029898(rdram, ctx);
        goto after_21;
    // 0x8002A1B0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_21:
    // 0x8002A1B4: bne         $v0, $zero, L_80029F5C
    if (ctx->r2 != 0) {
        // 0x8002A1B8: sw          $v0, 0x18($s1)
        MEM_W(0X18, ctx->r17) = ctx->r2;
            goto L_80029F5C;
    }
    // 0x8002A1B8: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
L_8002A1BC:
    // 0x8002A1BC: jal         0x80007AE0
    // 0x8002A1C0: nop

    func_80007AE0(rdram, ctx);
        goto after_22;
    // 0x8002A1C0: nop

    after_22:
    // 0x8002A1C4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8002A1C8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8002A1CC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002A1D0: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8002A1D4: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8002A1D8: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8002A1DC: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8002A1E0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002A1E4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002A1E8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8002A1EC: jr          $ra
    // 0x8002A1F0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8002A1F0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8002A1F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A1F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A1F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A1FC: jal         0x80007774
    // 0x8002A200: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8002A200: nop

    after_0:
    // 0x8002A204: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x8002A208: nop

    // 0x8002A20C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8002A210: nop

    // 0x8002A214: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x8002A218: nop

    // 0x8002A21C: beq         $a0, $zero, L_8002A264
    if (ctx->r4 == 0) {
        // 0x8002A220: nop
    
            goto L_8002A264;
    }
    // 0x8002A220: nop

    // 0x8002A224: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    // 0x8002A228: nop

    // 0x8002A22C: bne         $t6, $zero, L_8002A250
    if (ctx->r14 != 0) {
        // 0x8002A230: nop
    
            goto L_8002A250;
    }
    // 0x8002A230: nop

    // 0x8002A234: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x8002A238: jal         0x80014BF4
    // 0x8002A23C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80014BF4(rdram, ctx);
        goto after_1;
    // 0x8002A23C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8002A240: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002A244: nop

    // 0x8002A248: lw          $a0, 0x18($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X18);
    // 0x8002A24C: nop

L_8002A250:
    // 0x8002A250: jal         0x80014BF4
    // 0x8002A254: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80014BF4(rdram, ctx);
        goto after_2;
    // 0x8002A254: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_2:
    // 0x8002A258: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002A25C: nop

    // 0x8002A260: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
L_8002A264:
    // 0x8002A264: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x8002A268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A26C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002A270: jr          $ra
    // 0x8002A274: nop

    return;
    // 0x8002A274: nop

;}
RECOMP_FUNC void func_8002A278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A278: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A27C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002A280: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8002A284: beq         $a3, $zero, L_8002A2EC
    if (ctx->r7 == 0) {
        // 0x8002A288: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8002A2EC;
    }
    // 0x8002A288: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8002A28C:
    // 0x8002A28C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
L_8002A290:
    // 0x8002A290: nop

    // 0x8002A294: lbu         $v0, 0x0($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X0);
    // 0x8002A298: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x8002A29C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8002A2A0: beq         $t7, $zero, L_8002A2C4
    if (ctx->r15 == 0) {
        // 0x8002A2A4: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_8002A2C4;
    }
    // 0x8002A2A4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_8002A2A8:
    // 0x8002A2A8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8002A2AC: nop

    // 0x8002A2B0: lbu         $v0, 0x0($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X0);
    // 0x8002A2B4: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8002A2B8: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x8002A2BC: bne         $t0, $zero, L_8002A2A8
    if (ctx->r8 != 0) {
        // 0x8002A2C0: sw          $t1, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r9;
            goto L_8002A2A8;
    }
    // 0x8002A2C0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_8002A2C4:
    // 0x8002A2C4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8002A2C8: nop

    // 0x8002A2CC: lbu         $v0, 0x0($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X0);
    // 0x8002A2D0: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x8002A2D4: sltu        $t3, $zero, $v0
    ctx->r11 = 0 < ctx->r2 ? 1 : 0;
    // 0x8002A2D8: bne         $t3, $zero, L_8002A28C
    if (ctx->r11 != 0) {
        // 0x8002A2DC: sw          $t4, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r12;
            goto L_8002A28C;
    }
    // 0x8002A2DC: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8002A2E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002A2E4: bne         $v1, $a3, L_8002A290
    if (ctx->r3 != ctx->r7) {
        // 0x8002A2E8: lw          $t6, 0x28($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X28);
            goto L_8002A290;
    }
    // 0x8002A2E8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
L_8002A2EC:
    // 0x8002A2EC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8002A2F0: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x8002A2F4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8002A2F8: jal         0x80029898
    // 0x8002A2FC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80029898(rdram, ctx);
        goto after_0;
    // 0x8002A2FC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_0:
    // 0x8002A300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002A308: jr          $ra
    // 0x8002A30C: nop

    return;
    // 0x8002A30C: nop

;}
RECOMP_FUNC void func_8002A310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A314: beq         $a0, $zero, L_8002A324
    if (ctx->r4 == 0) {
        // 0x8002A318: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002A324;
    }
    // 0x8002A318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A31C: jal         0x80014BF4
    // 0x8002A320: nop

    func_80014BF4(rdram, ctx);
        goto after_0;
    // 0x8002A320: nop

    after_0:
L_8002A324:
    // 0x8002A324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002A32C: jr          $ra
    // 0x8002A330: nop

    return;
    // 0x8002A330: nop

;}
RECOMP_FUNC void func_8002A334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A33C: lw          $a1, 0x1C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1C);
    // 0x8002A340: nop

    // 0x8002A344: beq         $a1, $zero, L_8002A358
    if (ctx->r5 == 0) {
        // 0x8002A348: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002A358;
    }
    // 0x8002A348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A34C: jal         0x800075A0
    // 0x8002A350: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x8002A350: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002A354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002A358:
    // 0x8002A358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002A35C: jr          $ra
    // 0x8002A360: nop

    return;
    // 0x8002A360: nop

;}
RECOMP_FUNC void func_8002A364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A364: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A368: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002A36C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8002A370: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x8002A374: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x8002A378: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002A37C: addiu       $s1, $s1, 0x2310
    ctx->r17 = ADD32(ctx->r17, 0X2310);
    // 0x8002A380: addiu       $s0, $s0, 0x2210
    ctx->r16 = ADD32(ctx->r16, 0X2210);
L_8002A384:
    // 0x8002A384: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x8002A388: nop

    // 0x8002A38C: beq         $a0, $zero, L_8002A3A4
    if (ctx->r4 == 0) {
        // 0x8002A390: nop
    
            goto L_8002A3A4;
    }
    // 0x8002A390: nop

    // 0x8002A394: beq         $a0, $zero, L_8002A3A4
    if (ctx->r4 == 0) {
        // 0x8002A398: nop
    
            goto L_8002A3A4;
    }
    // 0x8002A398: nop

    // 0x8002A39C: jal         0x800075A0
    // 0x8002A3A0: nop

    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x8002A3A0: nop

    after_0:
L_8002A3A4:
    // 0x8002A3A4: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x8002A3A8: bne         $s0, $s1, L_8002A384
    if (ctx->r16 != ctx->r17) {
        // 0x8002A3AC: nop
    
            goto L_8002A384;
    }
    // 0x8002A3AC: nop

    // 0x8002A3B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A3B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002A3B8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002A3BC: jr          $ra
    // 0x8002A3C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8002A3C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002A3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A3D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A3D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A3D8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8002A3DC: addiu       $a1, $a1, -0xB60
    ctx->r5 = ADD32(ctx->r5, -0XB60);
    // 0x8002A3E0: jal         0x80073EF0
    // 0x8002A3E4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x8002A3E4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x8002A3E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A3EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002A3F0: jr          $ra
    // 0x8002A3F4: nop

    return;
    // 0x8002A3F4: nop

;}
RECOMP_FUNC void func_8002A3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A3F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002A3FC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002A400: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8002A404: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8002A408: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8002A40C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8002A410: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8002A414: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8002A418: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002A41C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002A420: bne         $a0, $zero, L_8002A42C
    if (ctx->r4 != 0) {
        // 0x8002A424: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8002A42C;
    }
    // 0x8002A424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002A428: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
L_8002A42C:
    // 0x8002A42C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8002A430: bne         $a1, $zero, L_8002A43C
    if (ctx->r5 != 0) {
        // 0x8002A434: lui         $fp, 0x800B
        ctx->r30 = S32(0X800B << 16);
            goto L_8002A43C;
    }
    // 0x8002A434: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8002A438: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
L_8002A43C:
    // 0x8002A43C: bne         $a2, $zero, L_8002A448
    if (ctx->r6 != 0) {
        // 0x8002A440: addiu       $fp, $fp, -0x4334
        ctx->r30 = ADD32(ctx->r30, -0X4334);
            goto L_8002A448;
    }
    // 0x8002A440: addiu       $fp, $fp, -0x4334
    ctx->r30 = ADD32(ctx->r30, -0X4334);
    // 0x8002A444: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
L_8002A448:
    // 0x8002A448: bne         $a3, $zero, L_8002A454
    if (ctx->r7 != 0) {
        // 0x8002A44C: lui         $s7, 0x800B
        ctx->r23 = S32(0X800B << 16);
            goto L_8002A454;
    }
    // 0x8002A44C: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x8002A450: addiu       $a3, $zero, 0x400
    ctx->r7 = ADD32(0, 0X400);
L_8002A454:
    // 0x8002A454: bne         $t6, $zero, L_8002A464
    if (ctx->r14 != 0) {
        // 0x8002A458: addiu       $s7, $s7, -0x4340
        ctx->r23 = ADD32(ctx->r23, -0X4340);
            goto L_8002A464;
    }
    // 0x8002A458: addiu       $s7, $s7, -0x4340
    ctx->r23 = ADD32(ctx->r23, -0X4340);
    // 0x8002A45C: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x8002A460: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
L_8002A464:
    // 0x8002A464: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8002A468: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x8002A46C: bne         $t8, $zero, L_8002A47C
    if (ctx->r24 != 0) {
        // 0x8002A470: lui         $s5, 0x8000
        ctx->r21 = S32(0X8000 << 16);
            goto L_8002A47C;
    }
    // 0x8002A470: lui         $s5, 0x8000
    ctx->r21 = S32(0X8000 << 16);
    // 0x8002A474: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x8002A478: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
L_8002A47C:
    // 0x8002A47C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8002A480: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8002A484: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8002A488: addiu       $s1, $s1, -0x4338
    ctx->r17 = ADD32(ctx->r17, -0X4338);
    // 0x8002A48C: addiu       $s3, $s3, -0x433C
    ctx->r19 = ADD32(ctx->r19, -0X433C);
    // 0x8002A490: addiu       $s4, $s4, -0x4330
    ctx->r20 = ADD32(ctx->r20, -0X4330);
    // 0x8002A494: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8002A498: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002A49C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002A4A0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002A4A4: addiu       $s2, $zero, 0x1C
    ctx->r18 = ADD32(0, 0X1C);
L_8002A4A8:
    // 0x8002A4A8: jal         0x80007AB0
    // 0x8002A4AC: nop

    func_80007AB0(rdram, ctx);
        goto after_0;
    // 0x8002A4AC: nop

    after_0:
    // 0x8002A4B0: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8002A4B4: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x8002A4B8: lhu         $s0, 0x52A8($s0)
    ctx->r16 = MEM_HU(ctx->r16, 0X52A8);
    // 0x8002A4BC: andi        $t0, $a0, 0x4
    ctx->r8 = ctx->r4 & 0X4;
    // 0x8002A4C0: bne         $t0, $zero, L_8002A510
    if (ctx->r8 != 0) {
        // 0x8002A4C4: lw          $t4, 0x40($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X40);
            goto L_8002A510;
    }
    // 0x8002A4C4: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8002A4C8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8002A4CC: nop

    // 0x8002A4D0: and         $t2, $s0, $t1
    ctx->r10 = ctx->r16 & ctx->r9;
    // 0x8002A4D4: beq         $t2, $zero, L_8002A50C
    if (ctx->r10 == 0) {
        // 0x8002A4D8: andi        $t3, $a0, 0x8
        ctx->r11 = ctx->r4 & 0X8;
            goto L_8002A50C;
    }
    // 0x8002A4D8: andi        $t3, $a0, 0x8
    ctx->r11 = ctx->r4 & 0X8;
    // 0x8002A4DC: beq         $t3, $zero, L_8002A4EC
    if (ctx->r11 == 0) {
        // 0x8002A4E0: nop
    
            goto L_8002A4EC;
    }
    // 0x8002A4E0: nop

    // 0x8002A4E4: jal         0x80027874
    // 0x8002A4E8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    func_80027874(rdram, ctx);
        goto after_1;
    // 0x8002A4E8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_1:
L_8002A4EC:
    // 0x8002A4EC: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x8002A4F0: nop

    // 0x8002A4F4: beq         $v0, $zero, L_8002A504
    if (ctx->r2 == 0) {
        // 0x8002A4F8: nop
    
            goto L_8002A504;
    }
    // 0x8002A4F8: nop

    // 0x8002A4FC: jalr        $v0
    // 0x8002A500: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8002A500: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_2:
L_8002A504:
    // 0x8002A504: b           L_8002A95C
    // 0x8002A508: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8002A95C;
    // 0x8002A508: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002A50C:
    // 0x8002A50C: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
L_8002A510:
    // 0x8002A510: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x8002A514: and         $t5, $s0, $t4
    ctx->r13 = ctx->r16 & ctx->r12;
    // 0x8002A518: beq         $t5, $zero, L_8002A5B8
    if (ctx->r13 == 0) {
        // 0x8002A51C: and         $t0, $s0, $t9
        ctx->r8 = ctx->r16 & ctx->r25;
            goto L_8002A5B8;
    }
    // 0x8002A51C: and         $t0, $s0, $t9
    ctx->r8 = ctx->r16 & ctx->r25;
    // 0x8002A520: andi        $t6, $a0, 0x8
    ctx->r14 = ctx->r4 & 0X8;
    // 0x8002A524: beq         $t6, $zero, L_8002A544
    if (ctx->r14 == 0) {
        // 0x8002A528: andi        $t7, $a0, 0x2
        ctx->r15 = ctx->r4 & 0X2;
            goto L_8002A544;
    }
    // 0x8002A528: andi        $t7, $a0, 0x2
    ctx->r15 = ctx->r4 & 0X2;
    // 0x8002A52C: jal         0x80027874
    // 0x8002A530: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_80027874(rdram, ctx);
        goto after_3;
    // 0x8002A530: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_3:
    // 0x8002A534: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002A538: lw          $a0, -0x4330($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4330);
    // 0x8002A53C: nop

    // 0x8002A540: andi        $t7, $a0, 0x2
    ctx->r15 = ctx->r4 & 0X2;
L_8002A544:
    // 0x8002A544: beq         $t7, $zero, L_8002A590
    if (ctx->r15 == 0) {
        // 0x8002A548: nop
    
            goto L_8002A590;
    }
    // 0x8002A548: nop

    // 0x8002A54C: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8002A550: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8002A554: beq         $t8, $zero, L_8002A590
    if (ctx->r24 == 0) {
        // 0x8002A558: addiu       $s2, $zero, 0x3
        ctx->r18 = ADD32(0, 0X3);
            goto L_8002A590;
    }
    // 0x8002A558: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_8002A55C:
    // 0x8002A55C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8002A560: jal         0x80014AC4
    // 0x8002A564: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AC4(rdram, ctx);
        goto after_4;
    // 0x8002A564: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_4:
    // 0x8002A568: jal         0x8000797C
    // 0x8002A56C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000797C(rdram, ctx);
        goto after_5;
    // 0x8002A56C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8002A570: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8002A574: jal         0x80014AB0
    // 0x8002A578: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80014AB0(rdram, ctx);
        goto after_6;
    // 0x8002A578: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_6:
    // 0x8002A57C: jal         0x8000797C
    // 0x8002A580: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8000797C(rdram, ctx);
        goto after_7;
    // 0x8002A580: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x8002A584: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8002A588: bne         $s0, $s2, L_8002A55C
    if (ctx->r16 != ctx->r18) {
        // 0x8002A58C: nop
    
            goto L_8002A55C;
    }
    // 0x8002A58C: nop

L_8002A590:
    // 0x8002A590: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x8002A594: nop

    // 0x8002A598: beq         $v0, $zero, L_8002A5AC
    if (ctx->r2 == 0) {
        // 0x8002A59C: nop
    
            goto L_8002A5AC;
    }
    // 0x8002A59C: nop

    // 0x8002A5A0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8002A5A4: jalr        $v0
    // 0x8002A5A8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x8002A5A8: nop

    after_8:
L_8002A5AC:
    // 0x8002A5AC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8002A5B0: b           L_8002A960
    // 0x8002A5B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8002A960;
    // 0x8002A5B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8002A5B8:
    // 0x8002A5B8: beq         $t0, $zero, L_8002A69C
    if (ctx->r8 == 0) {
        // 0x8002A5BC: lw          $t5, 0x4C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X4C);
            goto L_8002A69C;
    }
    // 0x8002A5BC: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8002A5C0: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8002A5C4: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x8002A5C8: multu       $t1, $s2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A5CC: andi        $t4, $a0, 0x18
    ctx->r12 = ctx->r4 & 0X18;
    // 0x8002A5D0: mflo        $t2
    ctx->r10 = lo;
    // 0x8002A5D4: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x8002A5D8: lw          $v0, 0x8($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X8);
    // 0x8002A5DC: nop

    // 0x8002A5E0: beq         $s6, $v0, L_8002A69C
    if (ctx->r22 == ctx->r2) {
        // 0x8002A5E4: lw          $t5, 0x4C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X4C);
            goto L_8002A69C;
    }
    // 0x8002A5E4: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8002A5E8: beq         $t4, $zero, L_8002A618
    if (ctx->r12 == 0) {
        // 0x8002A5EC: nop
    
            goto L_8002A618;
    }
    // 0x8002A5EC: nop

    // 0x8002A5F0: jal         0x80027874
    // 0x8002A5F4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80027874(rdram, ctx);
        goto after_9;
    // 0x8002A5F4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_9:
    // 0x8002A5F8: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x8002A5FC: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x8002A600: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8002A604: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8002A608: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002A60C: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x8002A610: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x8002A614: nop

L_8002A618:
    // 0x8002A618: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8002A61C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002A620: beq         $a0, $zero, L_8002A65C
    if (ctx->r4 == 0) {
        // 0x8002A624: nop
    
            goto L_8002A65C;
    }
    // 0x8002A624: nop

    // 0x8002A628: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A62C: mflo        $t9
    ctx->r25 = lo;
    // 0x8002A630: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x8002A634: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8002A638: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x8002A63C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8002A640: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x8002A644: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002A648: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002A64C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8002A650: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8002A654: jal         0x80014B64
    // 0x8002A658: nop

    func_80014B64(rdram, ctx);
        goto after_10;
    // 0x8002A658: nop

    after_10:
L_8002A65C:
    // 0x8002A65C: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x8002A660: nop

    // 0x8002A664: beq         $v0, $zero, L_8002A678
    if (ctx->r2 == 0) {
        // 0x8002A668: nop
    
            goto L_8002A678;
    }
    // 0x8002A668: nop

    // 0x8002A66C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x8002A670: jalr        $v0
    // 0x8002A674: or          $a0, $t2, $s5
    ctx->r4 = ctx->r10 | ctx->r21;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x8002A674: or          $a0, $t2, $s5
    ctx->r4 = ctx->r10 | ctx->r21;
    after_11:
L_8002A678:
    // 0x8002A678: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8002A67C: nop

    // 0x8002A680: andi        $t3, $a0, 0x1
    ctx->r11 = ctx->r4 & 0X1;
    // 0x8002A684: beq         $t3, $zero, L_8002A69C
    if (ctx->r11 == 0) {
        // 0x8002A688: lw          $t5, 0x4C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X4C);
            goto L_8002A69C;
    }
    // 0x8002A688: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8002A68C: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8002A690: b           L_8002A95C
    // 0x8002A694: or          $v0, $t4, $s5
    ctx->r2 = ctx->r12 | ctx->r21;
        goto L_8002A95C;
    // 0x8002A694: or          $v0, $t4, $s5
    ctx->r2 = ctx->r12 | ctx->r21;
    // 0x8002A698: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
L_8002A69C:
    // 0x8002A69C: nop

    // 0x8002A6A0: and         $t6, $s0, $t5
    ctx->r14 = ctx->r16 & ctx->r13;
    // 0x8002A6A4: beq         $t6, $zero, L_8002A788
    if (ctx->r14 == 0) {
        // 0x8002A6A8: lw          $t1, 0x50($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X50);
            goto L_8002A788;
    }
    // 0x8002A6A8: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8002A6AC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8002A6B0: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x8002A6B4: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A6B8: andi        $t0, $a0, 0x18
    ctx->r8 = ctx->r4 & 0X18;
    // 0x8002A6BC: mflo        $t8
    ctx->r24 = lo;
    // 0x8002A6C0: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x8002A6C4: lw          $v0, 0xC($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XC);
    // 0x8002A6C8: nop

    // 0x8002A6CC: beq         $s6, $v0, L_8002A788
    if (ctx->r22 == ctx->r2) {
        // 0x8002A6D0: lw          $t1, 0x50($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X50);
            goto L_8002A788;
    }
    // 0x8002A6D0: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8002A6D4: beq         $t0, $zero, L_8002A704
    if (ctx->r8 == 0) {
        // 0x8002A6D8: nop
    
            goto L_8002A704;
    }
    // 0x8002A6D8: nop

    // 0x8002A6DC: jal         0x80027874
    // 0x8002A6E0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80027874(rdram, ctx);
        goto after_12;
    // 0x8002A6E0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_12:
    // 0x8002A6E4: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x8002A6E8: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x8002A6EC: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8002A6F0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8002A6F4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8002A6F8: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x8002A6FC: lw          $v0, 0xC($t3)
    ctx->r2 = MEM_W(ctx->r11, 0XC);
    // 0x8002A700: nop

L_8002A704:
    // 0x8002A704: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8002A708: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002A70C: beq         $a0, $zero, L_8002A748
    if (ctx->r4 == 0) {
        // 0x8002A710: nop
    
            goto L_8002A748;
    }
    // 0x8002A710: nop

    // 0x8002A714: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A718: mflo        $t5
    ctx->r13 = lo;
    // 0x8002A71C: addu        $v0, $v1, $t5
    ctx->r2 = ADD32(ctx->r3, ctx->r13);
    // 0x8002A720: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8002A724: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x8002A728: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8002A72C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8002A730: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002A734: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002A738: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8002A73C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x8002A740: jal         0x80014B64
    // 0x8002A744: nop

    func_80014B64(rdram, ctx);
        goto after_13;
    // 0x8002A744: nop

    after_13:
L_8002A748:
    // 0x8002A748: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x8002A74C: nop

    // 0x8002A750: beq         $v0, $zero, L_8002A764
    if (ctx->r2 == 0) {
        // 0x8002A754: nop
    
            goto L_8002A764;
    }
    // 0x8002A754: nop

    // 0x8002A758: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x8002A75C: jalr        $v0
    // 0x8002A760: or          $a0, $t8, $s5
    ctx->r4 = ctx->r24 | ctx->r21;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_14;
    // 0x8002A760: or          $a0, $t8, $s5
    ctx->r4 = ctx->r24 | ctx->r21;
    after_14:
L_8002A764:
    // 0x8002A764: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8002A768: nop

    // 0x8002A76C: andi        $t9, $a0, 0x1
    ctx->r25 = ctx->r4 & 0X1;
    // 0x8002A770: beq         $t9, $zero, L_8002A788
    if (ctx->r25 == 0) {
        // 0x8002A774: lw          $t1, 0x50($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X50);
            goto L_8002A788;
    }
    // 0x8002A774: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x8002A778: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8002A77C: b           L_8002A95C
    // 0x8002A780: or          $v0, $t0, $s5
    ctx->r2 = ctx->r8 | ctx->r21;
        goto L_8002A95C;
    // 0x8002A780: or          $v0, $t0, $s5
    ctx->r2 = ctx->r8 | ctx->r21;
    // 0x8002A784: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
L_8002A788:
    // 0x8002A788: nop

    // 0x8002A78C: and         $t2, $s0, $t1
    ctx->r10 = ctx->r16 & ctx->r9;
    // 0x8002A790: beq         $t2, $zero, L_8002A874
    if (ctx->r10 == 0) {
        // 0x8002A794: lw          $t7, 0x54($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X54);
            goto L_8002A874;
    }
    // 0x8002A794: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8002A798: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x8002A79C: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x8002A7A0: multu       $t3, $s2
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A7A4: andi        $t6, $a0, 0x18
    ctx->r14 = ctx->r4 & 0X18;
    // 0x8002A7A8: mflo        $t4
    ctx->r12 = lo;
    // 0x8002A7AC: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x8002A7B0: lw          $v0, 0x10($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X10);
    // 0x8002A7B4: nop

    // 0x8002A7B8: beq         $s6, $v0, L_8002A874
    if (ctx->r22 == ctx->r2) {
        // 0x8002A7BC: lw          $t7, 0x54($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X54);
            goto L_8002A874;
    }
    // 0x8002A7BC: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8002A7C0: beq         $t6, $zero, L_8002A7F0
    if (ctx->r14 == 0) {
        // 0x8002A7C4: nop
    
            goto L_8002A7F0;
    }
    // 0x8002A7C4: nop

    // 0x8002A7C8: jal         0x80027874
    // 0x8002A7CC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80027874(rdram, ctx);
        goto after_15;
    // 0x8002A7CC: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_15:
    // 0x8002A7D0: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8002A7D4: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x8002A7D8: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8002A7DC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8002A7E0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8002A7E4: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x8002A7E8: lw          $v0, 0x10($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X10);
    // 0x8002A7EC: nop

L_8002A7F0:
    // 0x8002A7F0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8002A7F4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002A7F8: beq         $a0, $zero, L_8002A834
    if (ctx->r4 == 0) {
        // 0x8002A7FC: nop
    
            goto L_8002A834;
    }
    // 0x8002A7FC: nop

    // 0x8002A800: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A804: mflo        $t1
    ctx->r9 = lo;
    // 0x8002A808: addu        $v0, $v1, $t1
    ctx->r2 = ADD32(ctx->r3, ctx->r9);
    // 0x8002A80C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8002A810: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x8002A814: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8002A818: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x8002A81C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8002A820: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8002A824: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8002A828: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8002A82C: jal         0x80014B64
    // 0x8002A830: nop

    func_80014B64(rdram, ctx);
        goto after_16;
    // 0x8002A830: nop

    after_16:
L_8002A834:
    // 0x8002A834: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x8002A838: nop

    // 0x8002A83C: beq         $v0, $zero, L_8002A850
    if (ctx->r2 == 0) {
        // 0x8002A840: nop
    
            goto L_8002A850;
    }
    // 0x8002A840: nop

    // 0x8002A844: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x8002A848: jalr        $v0
    // 0x8002A84C: or          $a0, $t4, $s5
    ctx->r4 = ctx->r12 | ctx->r21;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x8002A84C: or          $a0, $t4, $s5
    ctx->r4 = ctx->r12 | ctx->r21;
    after_17:
L_8002A850:
    // 0x8002A850: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x8002A854: nop

    // 0x8002A858: andi        $t5, $a0, 0x1
    ctx->r13 = ctx->r4 & 0X1;
    // 0x8002A85C: beq         $t5, $zero, L_8002A874
    if (ctx->r13 == 0) {
        // 0x8002A860: lw          $t7, 0x54($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X54);
            goto L_8002A874;
    }
    // 0x8002A860: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8002A864: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x8002A868: b           L_8002A95C
    // 0x8002A86C: or          $v0, $t6, $s5
    ctx->r2 = ctx->r14 | ctx->r21;
        goto L_8002A95C;
    // 0x8002A86C: or          $v0, $t6, $s5
    ctx->r2 = ctx->r14 | ctx->r21;
    // 0x8002A870: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
L_8002A874:
    // 0x8002A874: nop

    // 0x8002A878: and         $t8, $s0, $t7
    ctx->r24 = ctx->r16 & ctx->r15;
    // 0x8002A87C: beq         $t8, $zero, L_8002A4A8
    if (ctx->r24 == 0) {
        // 0x8002A880: nop
    
            goto L_8002A4A8;
    }
    // 0x8002A880: nop

    // 0x8002A884: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8002A888: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x8002A88C: multu       $t9, $s2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A890: mflo        $t0
    ctx->r8 = lo;
    // 0x8002A894: addu        $t1, $v1, $t0
    ctx->r9 = ADD32(ctx->r3, ctx->r8);
    // 0x8002A898: lw          $v0, 0x14($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X14);
    // 0x8002A89C: nop

    // 0x8002A8A0: beq         $s6, $v0, L_8002A4A8
    if (ctx->r22 == ctx->r2) {
        // 0x8002A8A4: nop
    
            goto L_8002A4A8;
    }
    // 0x8002A8A4: nop

    // 0x8002A8A8: andi        $t2, $a0, 0x18
    ctx->r10 = ctx->r4 & 0X18;
    // 0x8002A8AC: beq         $t2, $zero, L_8002A8DC
    if (ctx->r10 == 0) {
        // 0x8002A8B0: nop
    
            goto L_8002A8DC;
    }
    // 0x8002A8B0: nop

    // 0x8002A8B4: jal         0x80027874
    // 0x8002A8B8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_80027874(rdram, ctx);
        goto after_18;
    // 0x8002A8B8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_18:
    // 0x8002A8BC: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x8002A8C0: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x8002A8C4: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8002A8C8: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8002A8CC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8002A8D0: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x8002A8D4: lw          $v0, 0x14($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X14);
    // 0x8002A8D8: nop

L_8002A8DC:
    // 0x8002A8DC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8002A8E0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002A8E4: beq         $a0, $zero, L_8002A920
    if (ctx->r4 == 0) {
        // 0x8002A8E8: nop
    
            goto L_8002A920;
    }
    // 0x8002A8E8: nop

    // 0x8002A8EC: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002A8F0: mflo        $t7
    ctx->r15 = lo;
    // 0x8002A8F4: addu        $v0, $v1, $t7
    ctx->r2 = ADD32(ctx->r3, ctx->r15);
    // 0x8002A8F8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8002A8FC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x8002A900: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8002A904: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002A908: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002A90C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002A910: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8002A914: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8002A918: jal         0x80014B64
    // 0x8002A91C: nop

    func_80014B64(rdram, ctx);
        goto after_19;
    // 0x8002A91C: nop

    after_19:
L_8002A920:
    // 0x8002A920: lw          $v0, 0x0($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X0);
    // 0x8002A924: nop

    // 0x8002A928: beq         $v0, $zero, L_8002A93C
    if (ctx->r2 == 0) {
        // 0x8002A92C: nop
    
            goto L_8002A93C;
    }
    // 0x8002A92C: nop

    // 0x8002A930: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8002A934: jalr        $v0
    // 0x8002A938: or          $a0, $t0, $s5
    ctx->r4 = ctx->r8 | ctx->r21;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_20;
    // 0x8002A938: or          $a0, $t0, $s5
    ctx->r4 = ctx->r8 | ctx->r21;
    after_20:
L_8002A93C:
    // 0x8002A93C: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x8002A940: nop

    // 0x8002A944: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8002A948: beq         $t2, $zero, L_8002A4A8
    if (ctx->r10 == 0) {
        // 0x8002A94C: nop
    
            goto L_8002A4A8;
    }
    // 0x8002A94C: nop

    // 0x8002A950: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x8002A954: nop

    // 0x8002A958: or          $v0, $t3, $s5
    ctx->r2 = ctx->r11 | ctx->r21;
L_8002A95C:
    // 0x8002A95C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8002A960:
    // 0x8002A960: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002A964: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A968: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002A96C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8002A970: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8002A974: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A978: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8002A97C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8002A980: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8002A984: jr          $ra
    // 0x8002A988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8002A988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8002A98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A98C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A990: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002A994: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8002A998: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8002A99C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002A9A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002A9A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002A9A8: jal         0x8002A3F8
    // 0x8002A9AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8002A3F8(rdram, ctx);
        goto after_0;
    // 0x8002A9AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8002A9B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A9B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002A9B8: jr          $ra
    // 0x8002A9BC: nop

    return;
    // 0x8002A9BC: nop

;}
RECOMP_FUNC void func_8002A9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A9C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A9C4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002A9C8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002A9CC: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8002A9D0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8002A9D4: addiu       $t1, $t1, -0x4338
    ctx->r9 = ADD32(ctx->r9, -0X4338);
    // 0x8002A9D8: addiu       $v1, $v1, -0x4340
    ctx->r3 = ADD32(ctx->r3, -0X4340);
    // 0x8002A9DC: addiu       $v0, $v0, -0x433C
    ctx->r2 = ADD32(ctx->r2, -0X433C);
    // 0x8002A9E0: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8002A9E4: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x8002A9E8: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x8002A9EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002A9F0: sw          $t6, -0x4334($at)
    MEM_W(-0X4334, ctx->r1) = ctx->r14;
    // 0x8002A9F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002A9F8: sw          $a2, -0x4330($at)
    MEM_W(-0X4330, ctx->r1) = ctx->r6;
    // 0x8002A9FC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8002AA00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AA04: beq         $t0, $zero, L_8002AA54
    if (ctx->r8 == 0) {
        // 0x8002AA08: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002AA54;
    }
    // 0x8002AA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AA0C: lw          $t8, 0x0($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X0);
    // 0x8002AA10: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8002AA14: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8002AA18: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8002AA1C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002AA20: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x8002AA24: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8002AA28: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x8002AA2C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8002AA30: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x8002AA34: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002AA38: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8002AA3C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002AA40: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8002AA44: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8002AA48: jal         0x80014B64
    // 0x8002AA4C: nop

    func_80014B64(rdram, ctx);
        goto after_0;
    // 0x8002AA4C: nop

    after_0:
    // 0x8002AA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002AA54:
    // 0x8002AA54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AA58: jr          $ra
    // 0x8002AA5C: nop

    return;
    // 0x8002AA5C: nop

;}
RECOMP_FUNC void func_8002AA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AA60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AA64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AA68: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8002AA6C: addiu       $a1, $a1, -0x7C4
    ctx->r5 = ADD32(ctx->r5, -0X7C4);
    // 0x8002AA70: jal         0x80073EF0
    // 0x8002AA74: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x8002AA74: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_0:
    // 0x8002AA78: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x8002AA7C: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8002AA80: addiu       $a0, $a0, -0x6020
    ctx->r4 = ADD32(ctx->r4, -0X6020);
    // 0x8002AA84: addiu       $v0, $v0, -0x6030
    ctx->r2 = ADD32(ctx->r2, -0X6030);
    // 0x8002AA88: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8002AA8C:
    // 0x8002AA8C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8002AA90: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8002AA94: bne         $at, $zero, L_8002AA8C
    if (ctx->r1 != 0) {
        // 0x8002AA98: sw          $v1, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r3;
            goto L_8002AA8C;
    }
    // 0x8002AA98: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x8002AA9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002AAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AAA4: sw          $zero, -0x4314($at)
    MEM_W(-0X4314, ctx->r1) = 0;
    // 0x8002AAA8: sw          $zero, -0x4318($at)
    MEM_W(-0X4318, ctx->r1) = 0;
    // 0x8002AAAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002AAB0: sw          $zero, -0x4310($at)
    MEM_W(-0X4310, ctx->r1) = 0;
    // 0x8002AAB4: sw          $zero, -0x430C($at)
    MEM_W(-0X430C, ctx->r1) = 0;
    // 0x8002AAB8: jr          $ra
    // 0x8002AABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002AABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002AAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AAC0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8002AAC4: lw          $t6, -0xB50($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XB50);
    // 0x8002AAC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AACC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8002AAD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AAD4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002AAD8: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8002AADC: jal         0x800597B0
    // 0x8002AAE0: nop

    func_800597B0(rdram, ctx);
        goto after_0;
    // 0x8002AAE0: nop

    after_0:
    // 0x8002AAE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AAE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AAEC: jr          $ra
    // 0x8002AAF0: nop

    return;
    // 0x8002AAF0: nop

;}
RECOMP_FUNC void func_8002AAF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AAF4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8002AAF8: lw          $t6, -0xB50($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XB50);
    // 0x8002AAFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8002AB00: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8002AB04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AB08: addu        $v1, $t6, $v0
    ctx->r3 = ADD32(ctx->r14, ctx->r2);
    // 0x8002AB0C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8002AB10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002AB14: beq         $t7, $at, L_8002AB58
    if (ctx->r15 == ctx->r1) {
        // 0x8002AB18: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_8002AB58;
    }
    // 0x8002AB18: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8002AB1C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8002AB20: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8002AB24: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002AB28: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002AB2C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8002AB30: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8002AB34: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8002AB38: jal         0x8004A0A0
    // 0x8002AB3C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8002AB3C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8002AB40: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8002AB44: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AB48: lw          $t0, -0xB50($t0)
    ctx->r8 = MEM_W(ctx->r8, -0XB50);
    // 0x8002AB4C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8002AB50: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x8002AB54: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
L_8002AB58:
    // 0x8002AB58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AB5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8002AB60: jr          $ra
    // 0x8002AB64: nop

    return;
    // 0x8002AB64: nop

;}
RECOMP_FUNC void func_8002AB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AB68: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8002AB6C: lw          $t6, -0xB50($t6)
    ctx->r14 = MEM_W(ctx->r14, -0XB50);
    // 0x8002AB70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8002AB74: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8002AB78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AB7C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8002AB80: lw          $a3, 0x0($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X0);
    // 0x8002AB84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002AB88: beq         $a3, $at, L_8002ABB8
    if (ctx->r7 == ctx->r1) {
        // 0x8002AB8C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8002ABB8;
    }
    // 0x8002AB8C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8002AB90: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8002AB94: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8002AB98: jal         0x8004A0A0
    // 0x8002AB9C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8002AB9C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8002ABA0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8002ABA4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8002ABA8: lw          $t9, -0xB50($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XB50);
    // 0x8002ABAC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8002ABB0: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x8002ABB4: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
L_8002ABB8:
    // 0x8002ABB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002ABBC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8002ABC0: jr          $ra
    // 0x8002ABC4: nop

    return;
    // 0x8002ABC4: nop

;}
RECOMP_FUNC void func_8002ABC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002ABC8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8002ABCC: addiu       $a3, $a3, -0x42C0
    ctx->r7 = ADD32(ctx->r7, -0X42C0);
    // 0x8002ABD0: lbu         $a2, 0x20($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X20);
    // 0x8002ABD4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8002ABD8: slti        $at, $a2, 0x7
    ctx->r1 = SIGNED(ctx->r6) < 0X7 ? 1 : 0;
    // 0x8002ABDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002ABE0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8002ABE4: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x8002ABE8: beq         $at, $zero, L_8002AD38
    if (ctx->r1 == 0) {
        // 0x8002ABEC: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_8002AD38;
    }
    // 0x8002ABEC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8002ABF0: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8002ABF4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8002ABF8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8002ABFC: lw          $v0, -0x964($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X964);
    // 0x8002AC00: lbu         $a0, 0x21($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X21);
    // 0x8002AC04: nop

    // 0x8002AC08: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002AC0C: beq         $at, $zero, L_8002AC3C
    if (ctx->r1 == 0) {
        // 0x8002AC10: nop
    
            goto L_8002AC3C;
    }
    // 0x8002AC10: nop

    // 0x8002AC14: lbu         $t7, 0x22($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X22);
    // 0x8002AC18: nop

    // 0x8002AC1C: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002AC20: beq         $at, $zero, L_8002AC3C
    if (ctx->r1 == 0) {
        // 0x8002AC24: nop
    
            goto L_8002AC3C;
    }
    // 0x8002AC24: nop

    // 0x8002AC28: lbu         $t8, 0x23($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X23);
    // 0x8002AC2C: nop

    // 0x8002AC30: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002AC34: bne         $at, $zero, L_8002AD38
    if (ctx->r1 != 0) {
        // 0x8002AC38: nop
    
            goto L_8002AD38;
    }
    // 0x8002AC38: nop

L_8002AC3C:
    // 0x8002AC3C: lbu         $v1, 0x22($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X22);
    // 0x8002AC40: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x8002AC44: bne         $at, $zero, L_8002ACA8
    if (ctx->r1 != 0) {
        // 0x8002AC48: sll         $t2, $a2, 3
        ctx->r10 = S32(ctx->r6 << 3);
            goto L_8002ACA8;
    }
    // 0x8002AC48: sll         $t2, $a2, 3
    ctx->r10 = S32(ctx->r6 << 3);
    // 0x8002AC4C: slti        $at, $a1, 0x7
    ctx->r1 = SIGNED(ctx->r5) < 0X7 ? 1 : 0;
    // 0x8002AC50: beq         $at, $zero, L_8002ACA8
    if (ctx->r1 == 0) {
        // 0x8002AC54: slti        $at, $a0, 0x32
        ctx->r1 = SIGNED(ctx->r4) < 0X32 ? 1 : 0;
            goto L_8002ACA8;
    }
    // 0x8002AC54: slti        $at, $a0, 0x32
    ctx->r1 = SIGNED(ctx->r4) < 0X32 ? 1 : 0;
    // 0x8002AC58: bne         $at, $zero, L_8002ACA8
    if (ctx->r1 != 0) {
        // 0x8002AC5C: slti        $at, $v1, 0x32
        ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
            goto L_8002ACA8;
    }
    // 0x8002AC5C: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x8002AC60: bne         $at, $zero, L_8002ACAC
    if (ctx->r1 != 0) {
        // 0x8002AC64: slt         $at, $v1, $a0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_8002ACAC;
    }
    // 0x8002AC64: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8002AC68: lbu         $v0, 0x23($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X23);
    // 0x8002AC6C: nop

    // 0x8002AC70: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x8002AC74: bne         $at, $zero, L_8002ACA8
    if (ctx->r1 != 0) {
        // 0x8002AC78: slt         $at, $a0, $v0
        ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8002ACA8;
    }
    // 0x8002AC78: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002AC7C: beq         $at, $zero, L_8002ACA8
    if (ctx->r1 == 0) {
        // 0x8002AC80: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8002ACA8;
    }
    // 0x8002AC80: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002AC84: beq         $at, $zero, L_8002ACA8
    if (ctx->r1 == 0) {
        // 0x8002AC88: slti        $at, $a1, 0x5
        ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
            goto L_8002ACA8;
    }
    // 0x8002AC88: slti        $at, $a1, 0x5
    ctx->r1 = SIGNED(ctx->r5) < 0X5 ? 1 : 0;
    // 0x8002AC8C: beq         $at, $zero, L_8002ACA0
    if (ctx->r1 == 0) {
        // 0x8002AC90: addiu       $t1, $zero, 0x10
        ctx->r9 = ADD32(0, 0X10);
            goto L_8002ACA0;
    }
    // 0x8002AC90: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x8002AC94: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x8002AC98: b           L_8002AD38
    // 0x8002AC9C: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
        goto L_8002AD38;
    // 0x8002AC9C: sw          $t9, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r25;
L_8002ACA0:
    // 0x8002ACA0: b           L_8002AD38
    // 0x8002ACA4: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
        goto L_8002AD38;
    // 0x8002ACA4: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
L_8002ACA8:
    // 0x8002ACA8: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
L_8002ACAC:
    // 0x8002ACAC: beq         $at, $zero, L_8002ACC0
    if (ctx->r1 == 0) {
        // 0x8002ACB0: slt         $at, $a0, $v1
        ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8002ACC0;
    }
    // 0x8002ACB0: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002ACB4: b           L_8002ACFC
    // 0x8002ACB8: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
        goto L_8002ACFC;
    // 0x8002ACB8: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x8002ACBC: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_8002ACC0:
    // 0x8002ACC0: beq         $at, $zero, L_8002ACD0
    if (ctx->r1 == 0) {
        // 0x8002ACC4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8002ACD0;
    }
    // 0x8002ACC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8002ACC8: b           L_8002ACFC
    // 0x8002ACCC: sw          $v1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r3;
        goto L_8002ACFC;
    // 0x8002ACCC: sw          $v1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r3;
L_8002ACD0:
    // 0x8002ACD0: lbu         $v0, 0x23($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X23);
    // 0x8002ACD4: nop

    // 0x8002ACD8: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002ACDC: beq         $at, $zero, L_8002ACF0
    if (ctx->r1 == 0) {
        // 0x8002ACE0: slt         $at, $a0, $v0
        ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8002ACF0;
    }
    // 0x8002ACE0: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002ACE4: b           L_8002ACFC
    // 0x8002ACE8: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
        goto L_8002ACFC;
    // 0x8002ACE8: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x8002ACEC: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
L_8002ACF0:
    // 0x8002ACF0: bne         $at, $zero, L_8002ACFC
    if (ctx->r1 != 0) {
        // 0x8002ACF4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8002ACFC;
    }
    // 0x8002ACF4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8002ACF8: sw          $v1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r3;
L_8002ACFC:
    // 0x8002ACFC: lw          $v1, 0x7C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X7C);
    // 0x8002AD00: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8002AD04: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x8002AD08: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8002AD0C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8002AD10: lw          $t5, -0x9E0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X9E0);
    // 0x8002AD14: beq         $t0, $zero, L_8002AD38
    if (ctx->r8 == 0) {
        // 0x8002AD18: sw          $t5, 0x78($sp)
        MEM_W(0X78, ctx->r29) = ctx->r13;
            goto L_8002AD38;
    }
    // 0x8002AD18: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    // 0x8002AD1C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002AD20: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002AD24: addiu       $v1, $v1, -0x42BD
    ctx->r3 = ADD32(ctx->r3, -0X42BD);
    // 0x8002AD28: addiu       $v0, $v0, -0x42C0
    ctx->r2 = ADD32(ctx->r2, -0X42C0);
L_8002AD2C:
    // 0x8002AD2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002AD30: bne         $v0, $v1, L_8002AD2C
    if (ctx->r2 != ctx->r3) {
        // 0x8002AD34: sb          $zero, 0x20($v0)
        MEM_B(0X20, ctx->r2) = 0;
            goto L_8002AD2C;
    }
    // 0x8002AD34: sb          $zero, 0x20($v0)
    MEM_B(0X20, ctx->r2) = 0;
L_8002AD38:
    // 0x8002AD38: beq         $t0, $zero, L_8002AE18
    if (ctx->r8 == 0) {
        // 0x8002AD3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002AE18;
    }
    // 0x8002AD3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AD40: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8002AD44: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8002AD48: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x8002AD4C: bne         $at, $zero, L_8002AD5C
    if (ctx->r1 != 0) {
        // 0x8002AD50: sb          $t6, 0x20($a3)
        MEM_B(0X20, ctx->r7) = ctx->r14;
            goto L_8002AD5C;
    }
    // 0x8002AD50: sb          $t6, 0x20($a3)
    MEM_B(0X20, ctx->r7) = ctx->r14;
    // 0x8002AD54: jal         0x8003E530
    // 0x8002AD58: addiu       $a0, $zero, 0xF5
    ctx->r4 = ADD32(0, 0XF5);
    func_8003E530(rdram, ctx);
        goto after_0;
    // 0x8002AD58: addiu       $a0, $zero, 0xF5
    ctx->r4 = ADD32(0, 0XF5);
    after_0:
L_8002AD5C:
    // 0x8002AD5C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002AD60: lw          $a0, -0xA8C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA8C);
    // 0x8002AD64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002AD68: jal         0x8004A0A0
    // 0x8002AD6C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8002AD6C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_1:
    // 0x8002AD70: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002AD74: lw          $a0, -0xA8C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA8C);
    // 0x8002AD78: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8002AD7C: jal         0x8004A0A0
    // 0x8002AD80: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8002AD80: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x8002AD84: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002AD88: lw          $a0, -0xA8C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA8C);
    // 0x8002AD8C: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8002AD90: jal         0x8004A0A0
    // 0x8002AD94: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8002AD94: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_3:
    // 0x8002AD98: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8002AD9C: addiu       $a3, $a3, -0x42C0
    ctx->r7 = ADD32(ctx->r7, -0X42C0);
    // 0x8002ADA0: lbu         $t8, 0x20($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X20);
    // 0x8002ADA4: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8002ADA8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002ADAC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8002ADB0: lw          $t1, -0x9A8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X9A8);
    // 0x8002ADB4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8002ADB8: addiu       $v0, $v0, -0xA8C
    ctx->r2 = ADD32(ctx->r2, -0XA8C);
    // 0x8002ADBC: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x8002ADC0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002ADC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8002ADC8: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x8002ADCC: jal         0x8004A0A0
    // 0x8002ADD0: sw          $t1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r9;
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x8002ADD0: sw          $t1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r9;
    after_4:
    // 0x8002ADD4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002ADD8: lw          $a0, -0xA8C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA8C);
    // 0x8002ADDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8002ADE0: jal         0x8004A0A0
    // 0x8002ADE4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8002ADE4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x8002ADE8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8002ADEC: lw          $a0, -0xA8C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XA8C);
    // 0x8002ADF0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8002ADF4: jal         0x8004A0A0
    // 0x8002ADF8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_6;
    // 0x8002ADF8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x8002ADFC: jal         0x80051DE4
    // 0x8002AE00: nop

    func_80051DE4(rdram, ctx);
        goto after_7;
    // 0x8002AE00: nop

    after_7:
    // 0x8002AE04: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x8002AE08: lw          $t2, -0xA8C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0XA8C);
    // 0x8002AE0C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8002AE10: sw          $t2, -0xB18($at)
    MEM_W(-0XB18, ctx->r1) = ctx->r10;
    // 0x8002AE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002AE18:
    // 0x8002AE18: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
    // 0x8002AE1C: jr          $ra
    // 0x8002AE20: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8002AE20: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_8002AE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AE24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002AE28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AE2C: beq         $a1, $zero, L_8002AEEC
    if (ctx->r5 == 0) {
        // 0x8002AE30: or          $t0, $a0, $zero
        ctx->r8 = ctx->r4 | 0;
            goto L_8002AEEC;
    }
    // 0x8002AE30: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8002AE34: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002AE38: addiu       $t7, $t7, -0x4318
    ctx->r15 = ADD32(ctx->r15, -0X4318);
    // 0x8002AE3C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002AE40: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x8002AE44: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x8002AE48: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8002AE4C: bne         $t8, $zero, L_8002AEEC
    if (ctx->r24 != 0) {
        // 0x8002AE50: addiu       $a0, $a0, -0xB5C
        ctx->r4 = ADD32(ctx->r4, -0XB5C);
            goto L_8002AEEC;
    }
    // 0x8002AE50: addiu       $a0, $a0, -0xB5C
    ctx->r4 = ADD32(ctx->r4, -0XB5C);
    // 0x8002AE54: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8002AE58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002AE5C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8002AE60: jal         0x8001574C
    // 0x8002AE64: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_8001574C(rdram, ctx);
        goto after_0;
    // 0x8002AE64: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_0:
    // 0x8002AE68: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8002AE6C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8002AE70: addiu       $t1, $t1, -0x840
    ctx->r9 = ADD32(ctx->r9, -0X840);
    // 0x8002AE74: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x8002AE78: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x8002AE7C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8002AE80: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8002AE84: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8002AE88: bgez        $t2, L_8002AEA0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8002AE8C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8002AEA0;
    }
    // 0x8002AE8C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002AE90: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002AE94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002AE98: nop

    // 0x8002AE9C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8002AEA0:
    // 0x8002AEA0: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x8002AEA4: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    // 0x8002AEA8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002AEAC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x8002AEB0: bgez        $t3, L_8002AEC4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8002AEB4: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8002AEC4;
    }
    // 0x8002AEB4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002AEB8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002AEBC: nop

    // 0x8002AEC0: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_8002AEC4:
    // 0x8002AEC4: swc1        $f16, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f16.u32l;
    // 0x8002AEC8: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x8002AECC: addiu       $t6, $zero, 0xA5
    ctx->r14 = ADD32(0, 0XA5);
    // 0x8002AED0: sw          $t4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r12;
    // 0x8002AED4: lw          $t5, 0xC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XC);
    // 0x8002AED8: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
    // 0x8002AEDC: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x8002AEE0: sw          $t5, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->r13;
    // 0x8002AEE4: b           L_8002AF24
    // 0x8002AEE8: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
        goto L_8002AF24;
    // 0x8002AEE8: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_8002AEEC:
    // 0x8002AEEC: bne         $a1, $zero, L_8002AF24
    if (ctx->r5 != 0) {
        // 0x8002AEF0: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8002AF24;
    }
    // 0x8002AEF0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8002AEF4: addiu       $t8, $t8, -0x4318
    ctx->r24 = ADD32(ctx->r24, -0X4318);
    // 0x8002AEF8: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x8002AEFC: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x8002AF00: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8002AF04: nop

    // 0x8002AF08: beq         $a0, $zero, L_8002AF28
    if (ctx->r4 == 0) {
        // 0x8002AF0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002AF28;
    }
    // 0x8002AF0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AF10: jal         0x80014BF4
    // 0x8002AF14: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80014BF4(rdram, ctx);
        goto after_1;
    // 0x8002AF14: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x8002AF18: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8002AF1C: nop

    // 0x8002AF20: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_8002AF24:
    // 0x8002AF24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002AF28:
    // 0x8002AF28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002AF2C: jr          $ra
    // 0x8002AF30: nop

    return;
    // 0x8002AF30: nop

;}
RECOMP_FUNC void func_8002AF34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AF34: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8002AF38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AF3C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8002AF40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AF44: lw          $a0, -0x42F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X42F0);
    // 0x8002AF48: jal         0x800191E8
    // 0x8002AF4C: nop

    func_800191E8(rdram, ctx);
        goto after_0;
    // 0x8002AF4C: nop

    after_0:
    // 0x8002AF50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AF54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AF58: jr          $ra
    // 0x8002AF5C: nop

    return;
    // 0x8002AF5C: nop

;}
RECOMP_FUNC void func_8002AF60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AF60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AF64: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x8002AF68: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x8002AF6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AF70: addiu       $s2, $s2, -0x6020
    ctx->r18 = ADD32(ctx->r18, -0X6020);
    // 0x8002AF74: addiu       $s0, $s0, -0x6030
    ctx->r16 = ADD32(ctx->r16, -0X6030);
    // 0x8002AF78: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
L_8002AF7C:
    // 0x8002AF7C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002AF80: nop

    // 0x8002AF84: beq         $s1, $a0, L_8002AF98
    if (ctx->r17 == ctx->r4) {
        // 0x8002AF88: nop
    
            goto L_8002AF98;
    }
    // 0x8002AF88: nop

    // 0x8002AF8C: jal         0x80050FE8
    // 0x8002AF90: nop

    func_80050FE8(rdram, ctx);
        goto after_0;
    // 0x8002AF90: nop

    after_0:
    // 0x8002AF94: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
L_8002AF98:
    // 0x8002AF98: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8002AF9C: bne         $s0, $s2, L_8002AF7C
    if (ctx->r16 != ctx->r18) {
        // 0x8002AFA0: nop
    
            goto L_8002AF7C;
    }
    // 0x8002AFA0: nop

    // 0x8002AFA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AFA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AFAC: jr          $ra
    // 0x8002AFB0: nop

    return;
    // 0x8002AFB0: nop

;}
