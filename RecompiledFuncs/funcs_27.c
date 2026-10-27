#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8005A854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A854: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005A858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005A85C: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x8005A860: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8005A864: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x8005A868: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005A86C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005A870: addiu       $t9, $sp, 0x30
    ctx->r25 = ADD32(ctx->r29, 0X30);
    // 0x8005A874: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8005A878: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8005A87C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8005A880: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8005A884: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8005A888: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8005A88C: jal         0x80057CA0
    // 0x8005A890: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x8005A890: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8005A894: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8005A898: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A89C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005A8A0: bne         $t0, $at, L_8005A8B0
    if (ctx->r8 != ctx->r1) {
        // 0x8005A8A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005A8B0;
    }
    // 0x8005A8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005A8A8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8005A8AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005A8B0:
    // 0x8005A8B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8005A8B4: jr          $ra
    // 0x8005A8B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8005A8B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8005A8BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A8BC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005A8C0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005A8C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005A8C8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8005A8CC: addiu       $t6, $t6, 0x1CF4
    ctx->r14 = ADD32(ctx->r14, 0X1CF4);
    // 0x8005A8D0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8005A8D4: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x8005A8D8: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x8005A8DC: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8005A8E0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x8005A8E4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8005A8E8: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8005A8EC: addiu       $t2, $a0, 0x11
    ctx->r10 = ADD32(ctx->r4, 0X11);
    // 0x8005A8F0: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x8005A8F4: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x8005A8F8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005A8FC: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x8005A900: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x8005A904: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x8005A908: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x8005A90C: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x8005A910: nop

    // 0x8005A914: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x8005A918: lw          $at, 0x18($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X18);
    // 0x8005A91C: nop

    // 0x8005A920: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x8005A924: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8005A928: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8005A92C: nop

    // 0x8005A930: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x8005A934: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8005A938: nop

    // 0x8005A93C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x8005A940: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8005A944: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x8005A948: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8005A94C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005A950: jal         0x8004A0A0
    // 0x8005A954: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005A954: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8005A958: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8005A95C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8005A960: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8005A964: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8005A968: jal         0x8005A854
    // 0x8005A96C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    func_8005A854(rdram, ctx);
        goto after_1;
    // 0x8005A96C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x8005A970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005A974: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8005A978: jr          $ra
    // 0x8005A97C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005A97C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005A980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A980: jr          $ra
    // 0x8005A984: nop

    return;
    // 0x8005A984: nop

;}
RECOMP_FUNC void func_8005A988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A988: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8005A98C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8005A990: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8005A994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005A998: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8005A99C: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x8005A9A0: jal         0x80056D10
    // 0x8005A9A4: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    func_80056D10(rdram, ctx);
        goto after_0;
    // 0x8005A9A4: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8005A9A8: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8005A9AC: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8005A9B0: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8005A9B4: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x8005A9B8: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8005A9BC: jal         0x8007A500
    // 0x8005A9C0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x8005A9C0: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x8005A9C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8005A9C8: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8005A9CC: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x8005A9D0: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x8005A9D4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8005A9D8: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8005A9DC: addiu       $t1, $sp, 0x18
    ctx->r9 = ADD32(ctx->r29, 0X18);
    // 0x8005A9E0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8005A9E4: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8005A9E8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8005A9EC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8005A9F0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8005A9F4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8005A9F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005A9FC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8005AA00: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x8005AA04: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    // 0x8005AA08: jal         0x80057CA0
    // 0x8005AA0C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x8005AA0C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_2:
    // 0x8005AA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AA14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8005AA18: jr          $ra
    // 0x8005AA1C: nop

    return;
    // 0x8005AA1C: nop

;}
RECOMP_FUNC void func_8005AA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AA20: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8005AA24: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005AA28: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8005AA2C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8005AA30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AA34: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8005AA38: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x8005AA3C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005AA40: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x8005AA44: addiu       $t6, $zero, 0x1D
    ctx->r14 = ADD32(0, 0X1D);
    // 0x8005AA48: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8005AA4C: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8005AA50: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8005AA54: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8005AA58: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8005AA5C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8005AA60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005AA64: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8005AA68: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8005AA6C: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8005AA70: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x8005AA74: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x8005AA78: jal         0x80057CA0
    // 0x8005AA7C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x8005AA7C: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8005AA80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AA84: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8005AA88: jr          $ra
    // 0x8005AA8C: nop

    return;
    // 0x8005AA8C: nop

;}
RECOMP_FUNC void func_8005AA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AA90: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8005AA94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AA98: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8005AA9C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8005AAA0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005AAA4: jal         0x8004A0A0
    // 0x8005AAA8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005AAA8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x8005AAAC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005AAB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005AAB4: bne         $a0, $at, L_8005AB10
    if (ctx->r4 != ctx->r1) {
        // 0x8005AAB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005AB10;
    }
    // 0x8005AAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AABC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8005AAC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005AAC4: bne         $v0, $at, L_8005AB0C
    if (ctx->r2 != ctx->r1) {
        // 0x8005AAC8: addiu       $t9, $zero, 0x14
        ctx->r25 = ADD32(0, 0X14);
            goto L_8005AB0C;
    }
    // 0x8005AAC8: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8005AACC: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8005AAD0: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x8005AAD4: bne         $t7, $zero, L_8005AAE4
    if (ctx->r15 != 0) {
        // 0x8005AAD8: sw          $t6, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r14;
            goto L_8005AAE4;
    }
    // 0x8005AAD8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8005AADC: b           L_8005AAEC
    // 0x8005AAE0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
        goto L_8005AAEC;
    // 0x8005AAE0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8005AAE4:
    // 0x8005AAE4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005AAE8: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_8005AAEC:
    // 0x8005AAEC: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x8005AAF0: addiu       $t1, $sp, 0x28
    ctx->r9 = ADD32(ctx->r29, 0X28);
    // 0x8005AAF4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8005AAF8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8005AAFC: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8005AB00: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005AB04: jal         0x80057CA0
    // 0x8005AB08: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005AB08: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_1:
L_8005AB0C:
    // 0x8005AB0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005AB10:
    // 0x8005AB10: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8005AB14: jr          $ra
    // 0x8005AB18: nop

    return;
    // 0x8005AB18: nop

;}
RECOMP_FUNC void func_8005AB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AB1C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8005AB20: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8005AB24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005AB28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AB2C: addiu       $a0, $a0, -0x7A68
    ctx->r4 = ADD32(ctx->r4, -0X7A68);
    // 0x8005AB30: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x8005AB34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005AB38: jal         0x8004BAEC
    // 0x8005AB3C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004BAEC(rdram, ctx);
        goto after_0;
    // 0x8005AB3C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x8005AB40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AB44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005AB48: jr          $ra
    // 0x8005AB4C: nop

    return;
    // 0x8005AB4C: nop

;}
RECOMP_FUNC void func_8005AB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AB50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005AB54: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8005AB58: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8005AB5C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8005AB60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005AB64: addiu       $a0, $a0, -0x7A68
    ctx->r4 = ADD32(ctx->r4, -0X7A68);
    // 0x8005AB68: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8005AB6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005AB70: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005AB74: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x8005AB78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005AB7C: jal         0x8004BAEC
    // 0x8005AB80: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004BAEC(rdram, ctx);
        goto after_0;
    // 0x8005AB80: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x8005AB84: blez        $v0, L_8005ABC4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8005AB88: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8005ABC4;
    }
    // 0x8005AB88: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8005AB8C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005AB90: sll         $s1, $v0, 2
    ctx->r17 = S32(ctx->r2 << 2);
    // 0x8005AB94: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
L_8005AB98:
    // 0x8005AB98: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8005AB9C: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x8005ABA0: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x8005ABA4: nop

    // 0x8005ABA8: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8005ABAC: jal         0x8005AA90
    // 0x8005ABB0: nop

    func_8005AA90(rdram, ctx);
        goto after_1;
    // 0x8005ABB0: nop

    after_1:
    // 0x8005ABB4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005ABB8: slt         $at, $s0, $s1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8005ABBC: bne         $at, $zero, L_8005AB98
    if (ctx->r1 != 0) {
        // 0x8005ABC0: lw          $t6, 0x2C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X2C);
            goto L_8005AB98;
    }
    // 0x8005ABC0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
L_8005ABC4:
    // 0x8005ABC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005ABC8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x8005ABCC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8005ABD0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005ABD4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005ABD8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8005ABDC: jr          $ra
    // 0x8005ABE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005ABE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005ABE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005ABE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005ABE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005ABEC: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x8005ABF0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8005ABF4: addiu       $t7, $zero, 0xD
    ctx->r15 = ADD32(0, 0XD);
    // 0x8005ABF8: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005ABFC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8005AC00: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x8005AC04: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8005AC08: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8005AC0C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005AC10: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8005AC14: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8005AC18: jal         0x80057CA0
    // 0x8005AC1C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x8005AC1C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8005AC20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AC24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005AC28: jr          $ra
    // 0x8005AC2C: nop

    return;
    // 0x8005AC2C: nop

;}
RECOMP_FUNC void func_8005AC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AC30: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8005AC34: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005AC38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AC3C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8005AC40: addiu       $t6, $t6, 0x1CD8
    ctx->r14 = ADD32(ctx->r14, 0X1CD8);
    // 0x8005AC44: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8005AC48: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x8005AC4C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x8005AC50: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8005AC54: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8005AC58: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8005AC5C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8005AC60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005AC64: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x8005AC68: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x8005AC6C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x8005AC70: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x8005AC74: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x8005AC78: nop

    // 0x8005AC7C: sw          $at, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r1;
    // 0x8005AC80: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x8005AC84: nop

    // 0x8005AC88: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x8005AC8C: lw          $at, 0x18($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X18);
    // 0x8005AC90: nop

    // 0x8005AC94: sw          $at, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r1;
    // 0x8005AC98: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8005AC9C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8005ACA0: nop

    // 0x8005ACA4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x8005ACA8: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8005ACAC: nop

    // 0x8005ACB0: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x8005ACB4: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8005ACB8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8005ACBC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005ACC0: jal         0x8004A0A0
    // 0x8005ACC4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005ACC4: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8005ACC8: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x8005ACCC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8005ACD0: addiu       $t1, $zero, 0x11
    ctx->r9 = ADD32(0, 0X11);
    // 0x8005ACD4: addiu       $t3, $zero, 0xD
    ctx->r11 = ADD32(0, 0XD);
    // 0x8005ACD8: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x8005ACDC: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x8005ACE0: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x8005ACE4: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x8005ACE8: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x8005ACEC: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x8005ACF0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8005ACF4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8005ACF8: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x8005ACFC: jal         0x80057CA0
    // 0x8005AD00: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005AD00: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    after_1:
    // 0x8005AD04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AD08: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8005AD0C: jr          $ra
    // 0x8005AD10: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8005AD10: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8005AD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AD14: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8005AD18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AD1C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8005AD20: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8005AD24: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8005AD28: jal         0x8004A0A0
    // 0x8005AD2C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005AD2C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x8005AD30: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8005AD34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005AD38: bne         $t6, $at, L_8005AD8C
    if (ctx->r14 != ctx->r1) {
        // 0x8005AD3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005AD8C;
    }
    // 0x8005AD3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AD40: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8005AD44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005AD48: bne         $t7, $at, L_8005AD88
    if (ctx->r15 != ctx->r1) {
        // 0x8005AD4C: addiu       $t8, $zero, 0xF
        ctx->r24 = ADD32(0, 0XF);
            goto L_8005AD88;
    }
    // 0x8005AD4C: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x8005AD50: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8005AD54: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x8005AD58: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8005AD5C: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x8005AD60: addiu       $t3, $sp, 0x1C
    ctx->r11 = ADD32(ctx->r29, 0X1C);
    // 0x8005AD64: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005AD68: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8005AD6C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005AD70: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8005AD74: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8005AD78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005AD7C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8005AD80: jal         0x80057CA0
    // 0x8005AD84: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005AD84: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    after_1:
L_8005AD88:
    // 0x8005AD88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005AD8C:
    // 0x8005AD8C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8005AD90: jr          $ra
    // 0x8005AD94: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8005AD94: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8005AD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AD98: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8005AD9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005ADA0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8005ADA4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8005ADA8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8005ADAC: jal         0x8004A0A0
    // 0x8005ADB0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005ADB0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x8005ADB4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8005ADB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005ADBC: bne         $t6, $at, L_8005AE10
    if (ctx->r14 != ctx->r1) {
        // 0x8005ADC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005AE10;
    }
    // 0x8005ADC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005ADC4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8005ADC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005ADCC: bne         $t7, $at, L_8005AE0C
    if (ctx->r15 != ctx->r1) {
        // 0x8005ADD0: addiu       $t8, $zero, 0x2C
        ctx->r24 = ADD32(0, 0X2C);
            goto L_8005AE0C;
    }
    // 0x8005ADD0: addiu       $t8, $zero, 0x2C
    ctx->r24 = ADD32(0, 0X2C);
    // 0x8005ADD4: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8005ADD8: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x8005ADDC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8005ADE0: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x8005ADE4: addiu       $t3, $sp, 0x1C
    ctx->r11 = ADD32(ctx->r29, 0X1C);
    // 0x8005ADE8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005ADEC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8005ADF0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005ADF4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8005ADF8: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8005ADFC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005AE00: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8005AE04: jal         0x80057CA0
    // 0x8005AE08: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005AE08: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    after_1:
L_8005AE0C:
    // 0x8005AE0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005AE10:
    // 0x8005AE10: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8005AE14: jr          $ra
    // 0x8005AE18: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8005AE18: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8005AE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AE1C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8005AE20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AE24: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8005AE28: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8005AE2C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8005AE30: jal         0x8004A0A0
    // 0x8005AE34: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005AE34: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x8005AE38: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8005AE3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005AE40: bne         $t6, $at, L_8005AE94
    if (ctx->r14 != ctx->r1) {
        // 0x8005AE44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005AE94;
    }
    // 0x8005AE44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AE48: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8005AE4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005AE50: bne         $t7, $at, L_8005AE90
    if (ctx->r15 != ctx->r1) {
        // 0x8005AE54: addiu       $t8, $zero, 0x13
        ctx->r24 = ADD32(0, 0X13);
            goto L_8005AE90;
    }
    // 0x8005AE54: addiu       $t8, $zero, 0x13
    ctx->r24 = ADD32(0, 0X13);
    // 0x8005AE58: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8005AE5C: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x8005AE60: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8005AE64: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x8005AE68: addiu       $t3, $sp, 0x1C
    ctx->r11 = ADD32(ctx->r29, 0X1C);
    // 0x8005AE6C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005AE70: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8005AE74: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005AE78: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8005AE7C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8005AE80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005AE84: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8005AE88: jal         0x80057CA0
    // 0x8005AE8C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005AE8C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    after_1:
L_8005AE90:
    // 0x8005AE90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005AE94:
    // 0x8005AE94: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8005AE98: jr          $ra
    // 0x8005AE9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8005AE9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8005AEA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AEA0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8005AEA4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8005AEA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AEAC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8005AEB0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8005AEB4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005AEB8: jal         0x8004A0A0
    // 0x8005AEBC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005AEBC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    after_0:
    // 0x8005AEC0: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8005AEC4: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8005AEC8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8005AECC: bne         $t6, $at, L_8005AF30
    if (ctx->r14 != ctx->r1) {
        // 0x8005AED0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005AF30;
    }
    // 0x8005AED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AED4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8005AED8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005AEDC: bne         $t7, $at, L_8005AF2C
    if (ctx->r15 != ctx->r1) {
        // 0x8005AEE0: addiu       $t8, $zero, 0xE
        ctx->r24 = ADD32(0, 0XE);
            goto L_8005AF2C;
    }
    // 0x8005AEE0: addiu       $t8, $zero, 0xE
    ctx->r24 = ADD32(0, 0XE);
    // 0x8005AEE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8005AEE8: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x8005AEEC: addiu       $t9, $sp, 0x18
    ctx->r25 = ADD32(ctx->r29, 0X18);
    // 0x8005AEF0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8005AEF4: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x8005AEF8: addiu       $t3, $sp, 0x1C
    ctx->r11 = ADD32(ctx->r29, 0X1C);
    // 0x8005AEFC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005AF00: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8005AF04: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005AF08: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8005AF0C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x8005AF10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005AF14: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8005AF18: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8005AF1C: jal         0x80057CA0
    // 0x8005AF20: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005AF20: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    after_1:
    // 0x8005AF24: lwc1        $f2, 0x18($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8005AF28: nop

L_8005AF2C:
    // 0x8005AF2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005AF30:
    // 0x8005AF30: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8005AF34: jr          $ra
    // 0x8005AF38: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8005AF38: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_8005AF3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AF3C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8005AF40: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8005AF44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005AF48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AF4C: addiu       $a0, $a0, -0x7A68
    ctx->r4 = ADD32(ctx->r4, -0X7A68);
    // 0x8005AF50: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x8005AF54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005AF58: jal         0x8004BAEC
    // 0x8005AF5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004BAEC(rdram, ctx);
        goto after_0;
    // 0x8005AF5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8005AF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AF64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005AF68: jr          $ra
    // 0x8005AF6C: nop

    return;
    // 0x8005AF6C: nop

;}
RECOMP_FUNC void func_8005AF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AF70: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8005AF74: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8005AF78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005AF7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AF80: addiu       $a0, $a0, -0x7A68
    ctx->r4 = ADD32(ctx->r4, -0X7A68);
    // 0x8005AF84: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x8005AF88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005AF8C: jal         0x8004BAEC
    // 0x8005AF90: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004BAEC(rdram, ctx);
        goto after_0;
    // 0x8005AF90: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x8005AF94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AF98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005AF9C: jr          $ra
    // 0x8005AFA0: nop

    return;
    // 0x8005AFA0: nop

;}
RECOMP_FUNC void func_8005AFA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AFA4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8005AFA8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8005AFAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005AFB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AFB4: addiu       $a0, $a0, -0x7A68
    ctx->r4 = ADD32(ctx->r4, -0X7A68);
    // 0x8005AFB8: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x8005AFBC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8005AFC0: jal         0x8004BAEC
    // 0x8005AFC4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004BAEC(rdram, ctx);
        goto after_0;
    // 0x8005AFC4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x8005AFC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005AFCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005AFD0: jr          $ra
    // 0x8005AFD4: nop

    return;
    // 0x8005AFD4: nop

;}
RECOMP_FUNC void func_8005AFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005AFD8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8005AFDC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8005AFE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005AFE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005AFE8: addiu       $a0, $a0, -0x7A68
    ctx->r4 = ADD32(ctx->r4, -0X7A68);
    // 0x8005AFEC: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x8005AFF0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8005AFF4: jal         0x8004BAEC
    // 0x8005AFF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004BAEC(rdram, ctx);
        goto after_0;
    // 0x8005AFF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8005AFFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005B004: jr          $ra
    // 0x8005B008: nop

    return;
    // 0x8005B008: nop

;}
RECOMP_FUNC void func_8005B00C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B00C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005B010: addiu       $t6, $sp, 0x1C
    ctx->r14 = ADD32(ctx->r29, 0X1C);
    // 0x8005B014: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8005B018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B01C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005B020: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005B024: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8005B028: addiu       $t6, $sp, 0x20
    ctx->r14 = ADD32(ctx->r29, 0X20);
    // 0x8005B02C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8005B030: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8005B034: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8005B038: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8005B03C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x8005B040: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8005B044: jal         0x80057CA0
    // 0x8005B048: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x8005B048: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x8005B04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B050: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B054: jr          $ra
    // 0x8005B058: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005B058: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8005B05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B05C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005B060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B064: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8005B068: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005B06C: jal         0x8005B00C
    // 0x8005B070: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8005B00C(rdram, ctx);
        goto after_0;
    // 0x8005B070: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_0:
    // 0x8005B074: bne         $v0, $zero, L_8005B090
    if (ctx->r2 != 0) {
        // 0x8005B078: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8005B090;
    }
    // 0x8005B078: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8005B07C: jal         0x8005B00C
    // 0x8005B080: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8005B00C(rdram, ctx);
        goto after_1;
    // 0x8005B080: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
    // 0x8005B084: bne         $v0, $zero, L_8005B090
    if (ctx->r2 != 0) {
        // 0x8005B088: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8005B090;
    }
    // 0x8005B088: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8005B08C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8005B090:
    // 0x8005B090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B094: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B098: jr          $ra
    // 0x8005B09C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8005B09C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005B0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B0A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005B0A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B0A8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8005B0AC: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8005B0B0: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x8005B0B4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005B0B8: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8005B0BC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8005B0C0: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x8005B0C4: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8005B0C8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8005B0CC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8005B0D0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8005B0D4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8005B0D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005B0DC: jal         0x80057CA0
    // 0x8005B0E0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x8005B0E0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8005B0E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B0E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005B0EC: jr          $ra
    // 0x8005B0F0: nop

    return;
    // 0x8005B0F0: nop

;}
RECOMP_FUNC void func_8005B0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B0F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8005B0F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005B0FC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8005B100: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005B104: beq         $a0, $zero, L_8005B348
    if (ctx->r4 == 0) {
        // 0x8005B108: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8005B348;
    }
    // 0x8005B108: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8005B10C: addiu       $v1, $a3, -0x1F4
    ctx->r3 = ADD32(ctx->r7, -0X1F4);
L_8005B110:
    // 0x8005B110: bltz        $v1, L_8005B120
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B114: addiu       $t0, $zero, -0x1
        ctx->r8 = ADD32(0, -0X1);
            goto L_8005B120;
    }
    // 0x8005B114: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8005B118: b           L_8005B124
    // 0x8005B11C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B124;
    // 0x8005B11C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B120:
    // 0x8005B120: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8005B124:
    // 0x8005B124: beq         $v0, $zero, L_8005B138
    if (ctx->r2 == 0) {
        // 0x8005B128: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_8005B138;
    }
    // 0x8005B128: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005B12C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B130: b           L_8005B2EC
    // 0x8005B134: ori         $t0, $zero, 0x9015
    ctx->r8 = 0 | 0X9015;
        goto L_8005B2EC;
    // 0x8005B134: ori         $t0, $zero, 0x9015
    ctx->r8 = 0 | 0X9015;
L_8005B138:
    // 0x8005B138: addiu       $v1, $a3, -0xFA
    ctx->r3 = ADD32(ctx->r7, -0XFA);
    // 0x8005B13C: bltz        $v1, L_8005B14C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B140: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B14C;
    }
    // 0x8005B140: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B144: b           L_8005B14C
    // 0x8005B148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B14C;
    // 0x8005B148: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B14C:
    // 0x8005B14C: beq         $v0, $zero, L_8005B160
    if (ctx->r2 == 0) {
        // 0x8005B150: nop
    
            goto L_8005B160;
    }
    // 0x8005B150: nop

    // 0x8005B154: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B158: b           L_8005B2EC
    // 0x8005B15C: ori         $t0, $zero, 0x9014
    ctx->r8 = 0 | 0X9014;
        goto L_8005B2EC;
    // 0x8005B15C: ori         $t0, $zero, 0x9014
    ctx->r8 = 0 | 0X9014;
L_8005B160:
    // 0x8005B160: addiu       $v1, $a3, -0x64
    ctx->r3 = ADD32(ctx->r7, -0X64);
    // 0x8005B164: bltz        $v1, L_8005B174
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B168: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B174;
    }
    // 0x8005B168: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B16C: b           L_8005B174
    // 0x8005B170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B174;
    // 0x8005B170: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B174:
    // 0x8005B174: beq         $v0, $zero, L_8005B188
    if (ctx->r2 == 0) {
        // 0x8005B178: nop
    
            goto L_8005B188;
    }
    // 0x8005B178: nop

    // 0x8005B17C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B180: b           L_8005B2EC
    // 0x8005B184: ori         $t0, $zero, 0x9013
    ctx->r8 = 0 | 0X9013;
        goto L_8005B2EC;
    // 0x8005B184: ori         $t0, $zero, 0x9013
    ctx->r8 = 0 | 0X9013;
L_8005B188:
    // 0x8005B188: addiu       $v1, $a3, -0x46
    ctx->r3 = ADD32(ctx->r7, -0X46);
    // 0x8005B18C: bltz        $v1, L_8005B19C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B190: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B19C;
    }
    // 0x8005B190: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B194: b           L_8005B19C
    // 0x8005B198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B19C;
    // 0x8005B198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B19C:
    // 0x8005B19C: beq         $v0, $zero, L_8005B1B0
    if (ctx->r2 == 0) {
        // 0x8005B1A0: nop
    
            goto L_8005B1B0;
    }
    // 0x8005B1A0: nop

    // 0x8005B1A4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B1A8: b           L_8005B2EC
    // 0x8005B1AC: ori         $t0, $zero, 0x9012
    ctx->r8 = 0 | 0X9012;
        goto L_8005B2EC;
    // 0x8005B1AC: ori         $t0, $zero, 0x9012
    ctx->r8 = 0 | 0X9012;
L_8005B1B0:
    // 0x8005B1B0: addiu       $v1, $a3, -0x32
    ctx->r3 = ADD32(ctx->r7, -0X32);
    // 0x8005B1B4: bltz        $v1, L_8005B1C4
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B1B8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B1C4;
    }
    // 0x8005B1B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B1BC: b           L_8005B1C4
    // 0x8005B1C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B1C4;
    // 0x8005B1C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B1C4:
    // 0x8005B1C4: beq         $v0, $zero, L_8005B1D8
    if (ctx->r2 == 0) {
        // 0x8005B1C8: nop
    
            goto L_8005B1D8;
    }
    // 0x8005B1C8: nop

    // 0x8005B1CC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B1D0: b           L_8005B2EC
    // 0x8005B1D4: ori         $t0, $zero, 0x9011
    ctx->r8 = 0 | 0X9011;
        goto L_8005B2EC;
    // 0x8005B1D4: ori         $t0, $zero, 0x9011
    ctx->r8 = 0 | 0X9011;
L_8005B1D8:
    // 0x8005B1D8: addiu       $v1, $a3, -0x1E
    ctx->r3 = ADD32(ctx->r7, -0X1E);
    // 0x8005B1DC: bltz        $v1, L_8005B1EC
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B1E0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B1EC;
    }
    // 0x8005B1E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B1E4: b           L_8005B1EC
    // 0x8005B1E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B1EC;
    // 0x8005B1E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B1EC:
    // 0x8005B1EC: beq         $v0, $zero, L_8005B200
    if (ctx->r2 == 0) {
        // 0x8005B1F0: nop
    
            goto L_8005B200;
    }
    // 0x8005B1F0: nop

    // 0x8005B1F4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B1F8: b           L_8005B2EC
    // 0x8005B1FC: ori         $t0, $zero, 0x9010
    ctx->r8 = 0 | 0X9010;
        goto L_8005B2EC;
    // 0x8005B1FC: ori         $t0, $zero, 0x9010
    ctx->r8 = 0 | 0X9010;
L_8005B200:
    // 0x8005B200: addiu       $v1, $a3, -0x14
    ctx->r3 = ADD32(ctx->r7, -0X14);
    // 0x8005B204: bltz        $v1, L_8005B214
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B208: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B214;
    }
    // 0x8005B208: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B20C: b           L_8005B214
    // 0x8005B210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B214;
    // 0x8005B210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B214:
    // 0x8005B214: beq         $v0, $zero, L_8005B228
    if (ctx->r2 == 0) {
        // 0x8005B218: nop
    
            goto L_8005B228;
    }
    // 0x8005B218: nop

    // 0x8005B21C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B220: b           L_8005B2EC
    // 0x8005B224: ori         $t0, $zero, 0x900F
    ctx->r8 = 0 | 0X900F;
        goto L_8005B2EC;
    // 0x8005B224: ori         $t0, $zero, 0x900F
    ctx->r8 = 0 | 0X900F;
L_8005B228:
    // 0x8005B228: addiu       $v1, $a3, -0xA
    ctx->r3 = ADD32(ctx->r7, -0XA);
    // 0x8005B22C: bltz        $v1, L_8005B23C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B230: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B23C;
    }
    // 0x8005B230: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B234: b           L_8005B23C
    // 0x8005B238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B23C;
    // 0x8005B238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B23C:
    // 0x8005B23C: beq         $v0, $zero, L_8005B250
    if (ctx->r2 == 0) {
        // 0x8005B240: nop
    
            goto L_8005B250;
    }
    // 0x8005B240: nop

    // 0x8005B244: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B248: b           L_8005B2EC
    // 0x8005B24C: ori         $t0, $zero, 0x900C
    ctx->r8 = 0 | 0X900C;
        goto L_8005B2EC;
    // 0x8005B24C: ori         $t0, $zero, 0x900C
    ctx->r8 = 0 | 0X900C;
L_8005B250:
    // 0x8005B250: addiu       $v1, $a3, -0x7
    ctx->r3 = ADD32(ctx->r7, -0X7);
    // 0x8005B254: bltz        $v1, L_8005B264
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B258: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B264;
    }
    // 0x8005B258: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B25C: b           L_8005B264
    // 0x8005B260: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B264;
    // 0x8005B260: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B264:
    // 0x8005B264: beq         $v0, $zero, L_8005B278
    if (ctx->r2 == 0) {
        // 0x8005B268: nop
    
            goto L_8005B278;
    }
    // 0x8005B268: nop

    // 0x8005B26C: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B270: b           L_8005B2EC
    // 0x8005B274: ori         $t0, $zero, 0x900E
    ctx->r8 = 0 | 0X900E;
        goto L_8005B2EC;
    // 0x8005B274: ori         $t0, $zero, 0x900E
    ctx->r8 = 0 | 0X900E;
L_8005B278:
    // 0x8005B278: addiu       $v1, $a3, -0x5
    ctx->r3 = ADD32(ctx->r7, -0X5);
    // 0x8005B27C: bltz        $v1, L_8005B28C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B280: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B28C;
    }
    // 0x8005B280: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B284: b           L_8005B28C
    // 0x8005B288: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B28C;
    // 0x8005B288: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B28C:
    // 0x8005B28C: beq         $v0, $zero, L_8005B2A0
    if (ctx->r2 == 0) {
        // 0x8005B290: nop
    
            goto L_8005B2A0;
    }
    // 0x8005B290: nop

    // 0x8005B294: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B298: b           L_8005B2EC
    // 0x8005B29C: ori         $t0, $zero, 0x900B
    ctx->r8 = 0 | 0X900B;
        goto L_8005B2EC;
    // 0x8005B29C: ori         $t0, $zero, 0x900B
    ctx->r8 = 0 | 0X900B;
L_8005B2A0:
    // 0x8005B2A0: addiu       $v1, $a3, -0x2
    ctx->r3 = ADD32(ctx->r7, -0X2);
    // 0x8005B2A4: bltz        $v1, L_8005B2B4
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B2A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B2B4;
    }
    // 0x8005B2A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B2AC: b           L_8005B2B4
    // 0x8005B2B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B2B4;
    // 0x8005B2B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B2B4:
    // 0x8005B2B4: beq         $v0, $zero, L_8005B2C8
    if (ctx->r2 == 0) {
        // 0x8005B2B8: nop
    
            goto L_8005B2C8;
    }
    // 0x8005B2B8: nop

    // 0x8005B2BC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B2C0: b           L_8005B2EC
    // 0x8005B2C4: ori         $t0, $zero, 0x900A
    ctx->r8 = 0 | 0X900A;
        goto L_8005B2EC;
    // 0x8005B2C4: ori         $t0, $zero, 0x900A
    ctx->r8 = 0 | 0X900A;
L_8005B2C8:
    // 0x8005B2C8: addiu       $v1, $a3, -0x1
    ctx->r3 = ADD32(ctx->r7, -0X1);
    // 0x8005B2CC: bltz        $v1, L_8005B2DC
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B2D0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B2DC;
    }
    // 0x8005B2D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B2D4: b           L_8005B2DC
    // 0x8005B2D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B2DC;
    // 0x8005B2D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B2DC:
    // 0x8005B2DC: beq         $v0, $zero, L_8005B2EC
    if (ctx->r2 == 0) {
        // 0x8005B2E0: nop
    
            goto L_8005B2EC;
    }
    // 0x8005B2E0: nop

    // 0x8005B2E4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8005B2E8: ori         $t0, $zero, 0x9009
    ctx->r8 = 0 | 0X9009;
L_8005B2EC:
    // 0x8005B2EC: beq         $t0, $at, L_8005B340
    if (ctx->r8 == ctx->r1) {
        // 0x8005B2F0: lui         $t6, 0x8009
        ctx->r14 = S32(0X8009 << 16);
            goto L_8005B340;
    }
    // 0x8005B2F0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005B2F4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005B2F8: sw          $t0, 0x1CD4($at)
    MEM_W(0X1CD4, ctx->r1) = ctx->r8;
    // 0x8005B2FC: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8005B300: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005B304: swc1        $f4, 0x1CC8($at)
    MEM_W(0X1CC8, ctx->r1) = ctx->f4.u32l;
    // 0x8005B308: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8005B30C: addiu       $t6, $t6, 0x1CBC
    ctx->r14 = ADD32(ctx->r14, 0X1CBC);
    // 0x8005B310: swc1        $f6, 0x1CCC($at)
    MEM_W(0X1CCC, ctx->r1) = ctx->f6.u32l;
    // 0x8005B314: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8005B318: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005B31C: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8005B320: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x8005B324: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005B328: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005B32C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8005B330: jal         0x8004A0A0
    // 0x8005B334: swc1        $f8, 0x1CD0($at)
    MEM_W(0X1CD0, ctx->r1) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B334: swc1        $f8, 0x1CD0($at)
    MEM_W(0X1CD0, ctx->r1) = ctx->f8.u32l;
    after_0:
    // 0x8005B338: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x8005B33C: nop

L_8005B340:
    // 0x8005B340: bne         $a3, $zero, L_8005B110
    if (ctx->r7 != 0) {
        // 0x8005B344: addiu       $v1, $a3, -0x1F4
        ctx->r3 = ADD32(ctx->r7, -0X1F4);
            goto L_8005B110;
    }
    // 0x8005B344: addiu       $v1, $a3, -0x1F4
    ctx->r3 = ADD32(ctx->r7, -0X1F4);
L_8005B348:
    // 0x8005B348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B34C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005B350: jr          $ra
    // 0x8005B354: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8005B354: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8005B358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B358: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005B35C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005B360: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005B364: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8005B368: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8005B36C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005B370: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005B374: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005B378: beq         $a0, $zero, L_8005B474
    if (ctx->r4 == 0) {
        // 0x8005B37C: sw          $s2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r18;
            goto L_8005B474;
    }
    // 0x8005B37C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005B380: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8005B384: addiu       $s3, $s3, 0x1CA0
    ctx->r19 = ADD32(ctx->r19, 0X1CA0);
    // 0x8005B388: addiu       $s4, $sp, 0x40
    ctx->r20 = ADD32(ctx->r29, 0X40);
    // 0x8005B38C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8005B390: addiu       $v1, $s0, -0xA
    ctx->r3 = ADD32(ctx->r16, -0XA);
L_8005B394:
    // 0x8005B394: bltz        $v1, L_8005B3A4
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B398: or          $a3, $s2, $zero
        ctx->r7 = ctx->r18 | 0;
            goto L_8005B3A4;
    }
    // 0x8005B398: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8005B39C: b           L_8005B3A8
    // 0x8005B3A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B3A8;
    // 0x8005B3A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B3A4:
    // 0x8005B3A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8005B3A8:
    // 0x8005B3A8: beq         $v0, $zero, L_8005B3BC
    if (ctx->r2 == 0) {
        // 0x8005B3AC: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_8005B3BC;
    }
    // 0x8005B3AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005B3B0: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8005B3B4: b           L_8005B430
    // 0x8005B3B8: ori         $a3, $zero, 0x900C
    ctx->r7 = 0 | 0X900C;
        goto L_8005B430;
    // 0x8005B3B8: ori         $a3, $zero, 0x900C
    ctx->r7 = 0 | 0X900C;
L_8005B3BC:
    // 0x8005B3BC: addiu       $v1, $s0, -0x5
    ctx->r3 = ADD32(ctx->r16, -0X5);
    // 0x8005B3C0: bltz        $v1, L_8005B3D0
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B3C4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B3D0;
    }
    // 0x8005B3C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B3C8: b           L_8005B3D0
    // 0x8005B3CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B3D0;
    // 0x8005B3CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B3D0:
    // 0x8005B3D0: beq         $v0, $zero, L_8005B3E4
    if (ctx->r2 == 0) {
        // 0x8005B3D4: nop
    
            goto L_8005B3E4;
    }
    // 0x8005B3D4: nop

    // 0x8005B3D8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8005B3DC: b           L_8005B430
    // 0x8005B3E0: ori         $a3, $zero, 0x900B
    ctx->r7 = 0 | 0X900B;
        goto L_8005B430;
    // 0x8005B3E0: ori         $a3, $zero, 0x900B
    ctx->r7 = 0 | 0X900B;
L_8005B3E4:
    // 0x8005B3E4: addiu       $v1, $s0, -0x2
    ctx->r3 = ADD32(ctx->r16, -0X2);
    // 0x8005B3E8: bltz        $v1, L_8005B3F8
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B3EC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B3F8;
    }
    // 0x8005B3EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B3F0: b           L_8005B3F8
    // 0x8005B3F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B3F8;
    // 0x8005B3F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B3F8:
    // 0x8005B3F8: beq         $v0, $zero, L_8005B40C
    if (ctx->r2 == 0) {
        // 0x8005B3FC: nop
    
            goto L_8005B40C;
    }
    // 0x8005B3FC: nop

    // 0x8005B400: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8005B404: b           L_8005B430
    // 0x8005B408: ori         $a3, $zero, 0x900A
    ctx->r7 = 0 | 0X900A;
        goto L_8005B430;
    // 0x8005B408: ori         $a3, $zero, 0x900A
    ctx->r7 = 0 | 0X900A;
L_8005B40C:
    // 0x8005B40C: addiu       $v1, $s0, -0x1
    ctx->r3 = ADD32(ctx->r16, -0X1);
    // 0x8005B410: bltz        $v1, L_8005B420
    if (SIGNED(ctx->r3) < 0) {
        // 0x8005B414: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005B420;
    }
    // 0x8005B414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005B418: b           L_8005B420
    // 0x8005B41C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005B420;
    // 0x8005B41C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005B420:
    // 0x8005B420: beq         $v0, $zero, L_8005B430
    if (ctx->r2 == 0) {
        // 0x8005B424: nop
    
            goto L_8005B430;
    }
    // 0x8005B424: nop

    // 0x8005B428: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8005B42C: ori         $a3, $zero, 0x9009
    ctx->r7 = 0 | 0X9009;
L_8005B430:
    // 0x8005B430: beq         $a3, $s2, L_8005B46C
    if (ctx->r7 == ctx->r18) {
        // 0x8005B434: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8005B46C;
    }
    // 0x8005B434: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8005B438: sw          $a3, 0x1CB8($at)
    MEM_W(0X1CB8, ctx->r1) = ctx->r7;
    // 0x8005B43C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8005B440: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005B444: swc1        $f4, 0x1CAC($at)
    MEM_W(0X1CAC, ctx->r1) = ctx->f4.u32l;
    // 0x8005B448: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8005B44C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005B450: swc1        $f6, 0x1CB0($at)
    MEM_W(0X1CB0, ctx->r1) = ctx->f6.u32l;
    // 0x8005B454: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8005B458: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8005B45C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005B460: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8005B464: jal         0x8004A0A0
    // 0x8005B468: swc1        $f8, 0x1CB4($at)
    MEM_W(0X1CB4, ctx->r1) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B468: swc1        $f8, 0x1CB4($at)
    MEM_W(0X1CB4, ctx->r1) = ctx->f8.u32l;
    after_0:
L_8005B46C:
    // 0x8005B46C: bne         $s0, $zero, L_8005B394
    if (ctx->r16 != 0) {
        // 0x8005B470: addiu       $v1, $s0, -0xA
        ctx->r3 = ADD32(ctx->r16, -0XA);
            goto L_8005B394;
    }
    // 0x8005B470: addiu       $v1, $s0, -0xA
    ctx->r3 = ADD32(ctx->r16, -0XA);
L_8005B474:
    // 0x8005B474: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005B478: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005B47C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B480: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005B484: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005B488: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005B48C: jr          $ra
    // 0x8005B490: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005B490: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005B494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B494: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005B498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B49C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8005B4A0: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x8005B4A4: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x8005B4A8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8005B4AC: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x8005B4B0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8005B4B4: addiu       $t1, $sp, 0x20
    ctx->r9 = ADD32(ctx->r29, 0X20);
    // 0x8005B4B8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8005B4BC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8005B4C0: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8005B4C4: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8005B4C8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8005B4CC: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8005B4D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005B4D4: jal         0x80057CA0
    // 0x8005B4D8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x8005B4D8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x8005B4DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B4E0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B4E4: jr          $ra
    // 0x8005B4E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005B4E8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8005B4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B4EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005B4F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B4F4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8005B4F8: jal         0x8005B00C
    // 0x8005B4FC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8005B00C(rdram, ctx);
        goto after_0;
    // 0x8005B4FC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x8005B500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005B508: jr          $ra
    // 0x8005B50C: nop

    return;
    // 0x8005B50C: nop

;}
RECOMP_FUNC void func_8005B510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B510: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005B514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B518: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8005B51C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8005B520: jal         0x8004A0A0
    // 0x8005B524: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B524: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x8005B528: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8005B52C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005B530: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x8005B534: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8005B538: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8005B53C: jal         0x8004A0A0
    // 0x8005B540: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005B540: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8005B544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B548: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005B54C: jr          $ra
    // 0x8005B550: nop

    return;
    // 0x8005B550: nop

;}
RECOMP_FUNC void func_8005B554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B554: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005B558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B55C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8005B560: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8005B564: jal         0x8004A0A0
    // 0x8005B568: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B568: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x8005B56C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8005B570: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8005B574: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005B578: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8005B57C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8005B580: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8005B584: jal         0x8004A0A0
    // 0x8005B588: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005B588: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8005B58C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8005B590: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005B594: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8005B598: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8005B59C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005B5A0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8005B5A4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x8005B5A8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8005B5AC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8005B5B0: jal         0x8004A0A0
    // 0x8005B5B4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8005B5B4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x8005B5B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B5BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005B5C0: jr          $ra
    // 0x8005B5C4: nop

    return;
    // 0x8005B5C4: nop

;}
RECOMP_FUNC void func_8005B5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B5C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005B5CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B5D0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8005B5D4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8005B5D8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8005B5DC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8005B5E0: jal         0x8004A0A0
    // 0x8005B5E4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B5E4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x8005B5E8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8005B5EC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B5F0: beq         $t6, $zero, L_8005B610
    if (ctx->r14 == 0) {
        // 0x8005B5F4: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_8005B610;
    }
    // 0x8005B5F4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8005B5F8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B5FC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x8005B600: ori         $t7, $v0, 0x1
    ctx->r15 = ctx->r2 | 0X1;
    // 0x8005B604: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8005B608: b           L_8005B61C
    // 0x8005B60C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_8005B61C;
    // 0x8005B60C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_8005B610:
    // 0x8005B610: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x8005B614: ori         $t0, $t9, 0x20
    ctx->r8 = ctx->r25 | 0X20;
    // 0x8005B618: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_8005B61C:
    // 0x8005B61C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8005B620: nop

    // 0x8005B624: sltiu       $at, $t1, 0x5
    ctx->r1 = ctx->r9 < 0X5 ? 1 : 0;
    // 0x8005B628: beq         $at, $zero, L_8005B6C0
    if (ctx->r1 == 0) {
        // 0x8005B62C: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_8005B6C0;
    }
    // 0x8005B62C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8005B630: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005B634: addu        $at, $at, $t1
    gpr jr_addend_8005B640 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8005B638: lw          $t1, 0x6270($at)
    ctx->r9 = ADD32(ctx->r1, 0X6270);
    // 0x8005B63C: nop

    // 0x8005B640: jr          $t1
    // 0x8005B644: nop

    switch (jr_addend_8005B640 >> 2) {
        case 0: goto L_8005B648; break;
        case 1: goto L_8005B668; break;
        case 2: goto L_8005B684; break;
        case 3: goto L_8005B69C; break;
        case 4: goto L_8005B6B0; break;
        default: switch_error(__func__, 0x8005B640, 0x80096270);
    }
    // 0x8005B644: nop

L_8005B648:
    // 0x8005B648: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8005B64C: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x8005B650: ori         $t2, $v0, 0x4
    ctx->r10 = ctx->r2 | 0X4;
    // 0x8005B654: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x8005B658: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x8005B65C: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x8005B660: b           L_8005B6C0
    // 0x8005B664: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
        goto L_8005B6C0;
    // 0x8005B664: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
L_8005B668:
    // 0x8005B668: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8005B66C: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x8005B670: ori         $t5, $v0, 0x4
    ctx->r13 = ctx->r2 | 0X4;
    // 0x8005B674: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x8005B678: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x8005B67C: b           L_8005B6C0
    // 0x8005B680: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
        goto L_8005B6C0;
    // 0x8005B680: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_8005B684:
    // 0x8005B684: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8005B688: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x8005B68C: ori         $t9, $t8, 0x44
    ctx->r25 = ctx->r24 | 0X44;
    // 0x8005B690: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x8005B694: b           L_8005B6C0
    // 0x8005B698: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
        goto L_8005B6C0;
    // 0x8005B698: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_8005B69C:
    // 0x8005B69C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8005B6A0: nop

    // 0x8005B6A4: ori         $t3, $t2, 0xC4
    ctx->r11 = ctx->r10 | 0XC4;
    // 0x8005B6A8: b           L_8005B6C0
    // 0x8005B6AC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
        goto L_8005B6C0;
    // 0x8005B6AC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
L_8005B6B0:
    // 0x8005B6B0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8005B6B4: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8005B6B8: and         $t4, $v0, $at
    ctx->r12 = ctx->r2 & ctx->r1;
    // 0x8005B6BC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
L_8005B6C0:
    // 0x8005B6C0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005B6C4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8005B6C8: jal         0x8004A0A0
    // 0x8005B6CC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005B6CC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8005B6D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B6D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005B6D8: jr          $ra
    // 0x8005B6DC: nop

    return;
    // 0x8005B6DC: nop

;}
RECOMP_FUNC void func_8005B6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B6E0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8005B6E4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8005B6E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8005B6EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005B6F0: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8005B6F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B6F8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8005B6FC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8005B700: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8005B704: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8005B708: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8005B70C: jal         0x8004A0A0
    // 0x8005B710: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B710: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_0:
    // 0x8005B714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B718: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8005B71C: jr          $ra
    // 0x8005B720: nop

    return;
    // 0x8005B720: nop

;}
RECOMP_FUNC void func_8005B724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B724: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005B728: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005B72C: lwc1        $f4, 0x6284($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6284);
    // 0x8005B730: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005B734: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8005B738: lwc1        $f6, 0x6288($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6288);
    // 0x8005B73C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8005B740: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8005B744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B748: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8005B74C: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x8005B750: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x8005B754: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x8005B758: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8005B75C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8005B760: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x8005B764: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8005B768: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x8005B76C: jal         0x8004A0A0
    // 0x8005B770: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B770: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8005B774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B778: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8005B77C: jr          $ra
    // 0x8005B780: nop

    return;
    // 0x8005B780: nop

;}
RECOMP_FUNC void func_8005B784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B784: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8005B788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B78C: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8005B790: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x8005B794: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8005B798: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x8005B79C: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x8005B7A0: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x8005B7A4: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x8005B7A8: jal         0x8004A0A0
    // 0x8005B7AC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B7AC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_0:
    // 0x8005B7B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005B7B4: lwc1        $f0, 0x90($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8005B7B8: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8005B7BC: lwc1        $f6, 0x628C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X628C);
    // 0x8005B7C0: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8005B7C4: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8005B7C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8005B7CC: bc1t        L_8005B7DC
    if (c1cs) {
        // 0x8005B7D0: swc1        $f4, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
            goto L_8005B7DC;
    }
    // 0x8005B7D0: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x8005B7D4: b           L_8005B7F0
    // 0x8005B7D8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
        goto L_8005B7F0;
    // 0x8005B7D8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
L_8005B7DC:
    // 0x8005B7DC: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x8005B7E0: nop

    // 0x8005B7E4: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8005B7E8: nop

    // 0x8005B7EC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
L_8005B7F0:
    // 0x8005B7F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005B7F4: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8005B7F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8005B7FC: addiu       $t9, $sp, 0x18
    ctx->r25 = ADD32(ctx->r29, 0X18);
    // 0x8005B800: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8005B804: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x8005B808: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8005B80C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x8005B810: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8005B814: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8005B818: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x8005B81C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x8005B820: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x8005B824: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8005B828: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x8005B82C: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x8005B830: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x8005B834: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x8005B838: jal         0x8004A0A0
    // 0x8005B83C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005B83C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x8005B840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B844: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x8005B848: jr          $ra
    // 0x8005B84C: nop

    return;
    // 0x8005B84C: nop

    // 0x8005B850: jr          $ra
    // 0x8005B854: nop

    return;
    // 0x8005B854: nop

;}
RECOMP_FUNC void func_8005B858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B858: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005B85C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B860: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8005B864: addiu       $t7, $zero, 0x27
    ctx->r15 = ADD32(0, 0X27);
    // 0x8005B868: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x8005B86C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8005B870: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x8005B874: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x8005B878: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x8005B87C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8005B880: jal         0x8004A0A0
    // 0x8005B884: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B884: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x8005B888: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8005B88C: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x8005B890: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x8005B894: addiu       $t2, $sp, 0x50
    ctx->r10 = ADD32(ctx->r29, 0X50);
    // 0x8005B898: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8005B89C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8005B8A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005B8A4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005B8A8: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8005B8AC: jal         0x80057CA0
    // 0x8005B8B0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005B8B0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_1:
    // 0x8005B8B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B8B8: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x8005B8BC: jr          $ra
    // 0x8005B8C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005B8C0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005B8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B8C4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005B8C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B8CC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8005B8D0: addiu       $t7, $zero, 0x26
    ctx->r15 = ADD32(0, 0X26);
    // 0x8005B8D4: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x8005B8D8: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8005B8DC: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x8005B8E0: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x8005B8E4: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x8005B8E8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8005B8EC: jal         0x8004A0A0
    // 0x8005B8F0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B8F0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x8005B8F4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8005B8F8: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x8005B8FC: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x8005B900: addiu       $t2, $sp, 0x50
    ctx->r10 = ADD32(ctx->r29, 0X50);
    // 0x8005B904: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8005B908: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8005B90C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005B910: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005B914: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8005B918: jal         0x80057CA0
    // 0x8005B91C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005B91C: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    after_1:
    // 0x8005B920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B924: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x8005B928: jr          $ra
    // 0x8005B92C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005B92C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005B930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B930: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8005B934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B938: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
    // 0x8005B93C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8005B940: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x8005B944: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x8005B948: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8005B94C: jal         0x8004A0A0
    // 0x8005B950: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005B950: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x8005B954: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005B958: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8005B95C: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005B960: addiu       $t0, $sp, 0x48
    ctx->r8 = ADD32(ctx->r29, 0X48);
    // 0x8005B964: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005B968: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005B96C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005B970: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005B974: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8005B978: jal         0x80057CA0
    // 0x8005B97C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005B97C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_1:
    // 0x8005B980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005B984: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8005B988: jr          $ra
    // 0x8005B98C: nop

    return;
    // 0x8005B98C: nop

;}
RECOMP_FUNC void func_8005B990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005B990: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8005B994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005B998: jal         0x8002D000
    // 0x8005B99C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8005B99C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8005B9A0: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x8005B9A4: jal         0x8002D000
    // 0x8005B9A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x8005B9A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8005B9AC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8005B9B0: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8005B9B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8005B9B8: jal         0x8004A0A0
    // 0x8005B9BC: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8005B9BC: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x8005B9C0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8005B9C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005B9C8: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8005B9CC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8005B9D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005B9D4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x8005B9D8: jal         0x8005D1B4
    // 0x8005B9DC: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    func_8005D1B4(rdram, ctx);
        goto after_3;
    // 0x8005B9DC: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8005B9E0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8005B9E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005B9E8: jal         0x8004A0A0
    // 0x8005B9EC: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x8005B9EC: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x8005B9F0: addiu       $t6, $zero, 0x21
    ctx->r14 = ADD32(0, 0X21);
    // 0x8005B9F4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8005B9F8: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x8005B9FC: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x8005BA00: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005BA04: jal         0x8004A0A0
    // 0x8005BA08: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_5;
    // 0x8005BA08: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x8005BA0C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BA10: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8005BA14: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005BA18: addiu       $t0, $sp, 0x48
    ctx->r8 = ADD32(ctx->r29, 0X48);
    // 0x8005BA1C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005BA20: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005BA24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005BA28: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005BA2C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8005BA30: jal         0x80057CA0
    // 0x8005BA34: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80057CA0(rdram, ctx);
        goto after_6;
    // 0x8005BA34: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_6:
    // 0x8005BA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BA3C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8005BA40: jr          $ra
    // 0x8005BA44: nop

    return;
    // 0x8005BA44: nop

;}
RECOMP_FUNC void func_8005BA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BA48: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8005BA4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005BA50: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x8005BA54: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8005BA58: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8005BA5C: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x8005BA60: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005BA64: jal         0x8004A0A0
    // 0x8005BA68: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005BA68: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x8005BA6C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BA70: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8005BA74: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005BA78: addiu       $t0, $sp, 0x48
    ctx->r8 = ADD32(ctx->r29, 0X48);
    // 0x8005BA7C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005BA80: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005BA84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005BA88: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005BA8C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8005BA90: jal         0x80057CA0
    // 0x8005BA94: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005BA94: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_1:
    // 0x8005BA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BA9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8005BAA0: jr          $ra
    // 0x8005BAA4: nop

    return;
    // 0x8005BAA4: nop

    // 0x8005BAA8: jr          $ra
    // 0x8005BAAC: nop

    return;
    // 0x8005BAAC: nop

;}
RECOMP_FUNC void func_8005BAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BAB0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8005BAB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005BAB8: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x8005BABC: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8005BAC0: jal         0x8002D000
    // 0x8005BAC4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8005BAC4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8005BAC8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8005BACC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005BAD0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005BAD4: jal         0x8004A0A0
    // 0x8005BAD8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005BAD8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8005BADC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BAE0: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8005BAE4: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005BAE8: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x8005BAEC: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005BAF0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005BAF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005BAF8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005BAFC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8005BB00: jal         0x80057CA0
    // 0x8005BB04: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x8005BB04: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_2:
    // 0x8005BB08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BB0C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8005BB10: jr          $ra
    // 0x8005BB14: nop

    return;
    // 0x8005BB14: nop

;}
RECOMP_FUNC void func_8005BB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BB18: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8005BB1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005BB20: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8005BB24: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x8005BB28: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8005BB2C: jal         0x8002D000
    // 0x8005BB30: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8005BB30: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8005BB34: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8005BB38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005BB3C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005BB40: jal         0x8004A0A0
    // 0x8005BB44: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005BB44: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8005BB48: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BB4C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8005BB50: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005BB54: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x8005BB58: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005BB5C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005BB60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005BB64: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005BB68: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8005BB6C: jal         0x80057CA0
    // 0x8005BB70: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x8005BB70: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_2:
    // 0x8005BB74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BB78: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8005BB7C: jr          $ra
    // 0x8005BB80: nop

    return;
    // 0x8005BB80: nop

;}
RECOMP_FUNC void func_8005BB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BB84: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8005BB88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005BB8C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8005BB90: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x8005BB94: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8005BB98: jal         0x8002D000
    // 0x8005BB9C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8005BB9C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8005BBA0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8005BBA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005BBA8: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005BBAC: jal         0x8004A0A0
    // 0x8005BBB0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005BBB0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8005BBB4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BBB8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8005BBBC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005BBC0: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x8005BBC4: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005BBC8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005BBCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005BBD0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005BBD4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8005BBD8: jal         0x80057CA0
    // 0x8005BBDC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x8005BBDC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_2:
    // 0x8005BBE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BBE4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8005BBE8: jr          $ra
    // 0x8005BBEC: nop

    return;
    // 0x8005BBEC: nop

;}
RECOMP_FUNC void func_8005BBF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BBF0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8005BBF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005BBF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005BBFC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8005BC00: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8005BC04: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8005BC08: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8005BC0C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x8005BC10: jal         0x8002D000
    // 0x8005BC14: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8005BC14: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    after_0:
    // 0x8005BC18: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x8005BC1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005BC20: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005BC24: jal         0x8004A0A0
    // 0x8005BC28: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005BC28: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x8005BC2C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8005BC30: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8005BC34: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8005BC38: addiu       $t1, $sp, 0x70
    ctx->r9 = ADD32(ctx->r29, 0X70);
    // 0x8005BC3C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8005BC40: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8005BC44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005BC48: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8005BC4C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8005BC50: jal         0x80057CA0
    // 0x8005BC54: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x8005BC54: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_2:
    // 0x8005BC58: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005BC5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005BC60: beq         $a0, $at, L_8005BCA8
    if (ctx->r4 == ctx->r1) {
        // 0x8005BC64: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8005BCA8;
    }
    // 0x8005BC64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005BC68: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8005BC6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005BC70: beq         $v0, $at, L_8005BC88
    if (ctx->r2 == ctx->r1) {
        // 0x8005BC74: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005BC88;
    }
    // 0x8005BC74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005BC78: beq         $v0, $at, L_8005BC98
    if (ctx->r2 == ctx->r1) {
        // 0x8005BC7C: nop
    
            goto L_8005BC98;
    }
    // 0x8005BC7C: nop

    // 0x8005BC80: b           L_8005BCA8
    // 0x8005BC84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8005BCA8;
    // 0x8005BC84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005BC88:
    // 0x8005BC88: jal         0x8005AD14
    // 0x8005BC8C: nop

    func_8005AD14(rdram, ctx);
        goto after_3;
    // 0x8005BC8C: nop

    after_3:
    // 0x8005BC90: b           L_8005BCA4
    // 0x8005BC94: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
        goto L_8005BCA4;
    // 0x8005BC94: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
L_8005BC98:
    // 0x8005BC98: jal         0x8005957C
    // 0x8005BC9C: nop

    func_8005957C(rdram, ctx);
        goto after_4;
    // 0x8005BC9C: nop

    after_4:
    // 0x8005BCA0: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
L_8005BCA4:
    // 0x8005BCA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005BCA8:
    // 0x8005BCA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005BCAC: jr          $ra
    // 0x8005BCB0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8005BCB0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8005BCB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BCB4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8005BCB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005BCBC: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x8005BCC0: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
    // 0x8005BCC4: jal         0x8002D000
    // 0x8005BCC8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8005BCC8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8005BCCC: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8005BCD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005BCD4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005BCD8: jal         0x8004A0A0
    // 0x8005BCDC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005BCDC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8005BCE0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8005BCE4: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8005BCE8: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005BCEC: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x8005BCF0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8005BCF4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8005BCF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005BCFC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8005BD00: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8005BD04: jal         0x80057CA0
    // 0x8005BD08: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    func_80057CA0(rdram, ctx);
        goto after_2;
    // 0x8005BD08: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    after_2:
    // 0x8005BD0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BD10: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8005BD14: jr          $ra
    // 0x8005BD18: nop

    return;
    // 0x8005BD18: nop

;}
RECOMP_FUNC void func_8005BD1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BD1C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8005BD20: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8005BD24: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8005BD28: addiu       $t7, $t7, -0x28D0
    ctx->r15 = ADD32(ctx->r15, -0X28D0);
    // 0x8005BD2C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005BD30: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8005BD34: lw          $t8, 0x30($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X30);
    // 0x8005BD38: jr          $ra
    // 0x8005BD3C: sw          $t8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r24;
    return;
    // 0x8005BD3C: sw          $t8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_8005BD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BD40: jr          $ra
    // 0x8005BD44: nop

    return;
    // 0x8005BD44: nop

;}
RECOMP_FUNC void func_8005BD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BD50: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
    // 0x8005BD54: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x8005BD58: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8005BD5C: addiu       $t7, $t7, -0x28D0
    ctx->r15 = ADD32(ctx->r15, -0X28D0);
    // 0x8005BD60: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005BD64: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8005BD68: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x8005BD6C: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x8005BD70: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x8005BD74: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8005BD78: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005BD7C: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x8005BD80: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8005BD84: lw          $v0, 0x1D30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D30);
    // 0x8005BD88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005BD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005BD90: beq         $a3, $zero, L_8005BE1C
    if (ctx->r7 == 0) {
        // 0x8005BD94: sw          $v0, 0x28($v1)
        MEM_W(0X28, ctx->r3) = ctx->r2;
            goto L_8005BE1C;
    }
    // 0x8005BD94: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x8005BD98: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8005BD9C: sltiu       $at, $a1, 0x7
    ctx->r1 = ctx->r5 < 0X7 ? 1 : 0;
    // 0x8005BDA0: beq         $at, $zero, L_8005BE14
    if (ctx->r1 == 0) {
        // 0x8005BDA4: sw          $t7, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r15;
            goto L_8005BE14;
    }
    // 0x8005BDA4: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x8005BDA8: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8005BDAC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005BDB0: addu        $at, $at, $t8
    gpr jr_addend_8005BDBC = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8005BDB4: lw          $t8, 0x6290($at)
    ctx->r24 = ADD32(ctx->r1, 0X6290);
    // 0x8005BDB8: nop

    // 0x8005BDBC: jr          $t8
    // 0x8005BDC0: nop

    switch (jr_addend_8005BDBC >> 2) {
        case 0: goto L_8005BDC4; break;
        case 1: goto L_8005BDD0; break;
        case 2: goto L_8005BDDC; break;
        case 3: goto L_8005BDE8; break;
        case 4: goto L_8005BDF4; break;
        case 5: goto L_8005BE00; break;
        case 6: goto L_8005BE0C; break;
        default: switch_error(__func__, 0x8005BDBC, 0x80096290);
    }
    // 0x8005BDC0: nop

L_8005BDC4:
    // 0x8005BDC4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8005BDC8: b           L_8005BE14
    // 0x8005BDCC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
        goto L_8005BE14;
    // 0x8005BDCC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_8005BDD0:
    // 0x8005BDD0: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8005BDD4: b           L_8005BE14
    // 0x8005BDD8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
        goto L_8005BE14;
    // 0x8005BDD8: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_8005BDDC:
    // 0x8005BDDC: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x8005BDE0: b           L_8005BE14
    // 0x8005BDE4: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
        goto L_8005BE14;
    // 0x8005BDE4: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
L_8005BDE8:
    // 0x8005BDE8: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8005BDEC: b           L_8005BE14
    // 0x8005BDF0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
        goto L_8005BE14;
    // 0x8005BDF0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_8005BDF4:
    // 0x8005BDF4: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x8005BDF8: b           L_8005BE14
    // 0x8005BDFC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
        goto L_8005BE14;
    // 0x8005BDFC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_8005BE00:
    // 0x8005BE00: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x8005BE04: b           L_8005BE14
    // 0x8005BE08: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
        goto L_8005BE14;
    // 0x8005BE08: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_8005BE0C:
    // 0x8005BE0C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8005BE10: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
L_8005BE14:
    // 0x8005BE14: jal         0x8005925C
    // 0x8005BE18: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    func_8005925C(rdram, ctx);
        goto after_0;
    // 0x8005BE18: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_0:
L_8005BE1C:
    // 0x8005BE1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005BE20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8005BE24: jr          $ra
    // 0x8005BE28: nop

    return;
    // 0x8005BE28: nop

;}
RECOMP_FUNC void func_8005BE2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005BE2C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8005BE30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005BE34: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8005BE38: or          $t2, $a0, $zero
    ctx->r10 = ctx->r4 | 0;
    // 0x8005BE3C: sltiu       $at, $t6, 0x12
    ctx->r1 = ctx->r14 < 0X12 ? 1 : 0;
    // 0x8005BE40: beq         $at, $zero, L_8005C394
    if (ctx->r1 == 0) {
        // 0x8005BE44: or          $t1, $a1, $zero
        ctx->r9 = ctx->r5 | 0;
            goto L_8005C394;
    }
    // 0x8005BE44: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x8005BE48: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005BE4C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005BE50: addu        $at, $at, $t6
    gpr jr_addend_8005BE5C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8005BE54: lw          $t6, 0x62AC($at)
    ctx->r14 = ADD32(ctx->r1, 0X62AC);
    // 0x8005BE58: nop

    // 0x8005BE5C: jr          $t6
    // 0x8005BE60: nop

    switch (jr_addend_8005BE5C >> 2) {
        case 0: goto L_8005BE64; break;
        case 1: goto L_8005BEAC; break;
        case 2: goto L_8005BF18; break;
        case 3: goto L_8005BF64; break;
        case 4: goto L_8005BFAC; break;
        case 5: goto L_8005C00C; break;
        case 6: goto L_8005C06C; break;
        case 7: goto L_8005C0CC; break;
        case 8: goto L_8005C194; break;
        case 9: goto L_8005C1F4; break;
        case 10: goto L_8005C214; break;
        case 11: goto L_8005C234; break;
        case 12: goto L_8005C254; break;
        case 13: goto L_8005C274; break;
        case 14: goto L_8005C294; break;
        case 15: goto L_8005C2F8; break;
        case 16: goto L_8005C358; break;
        case 17: goto L_8005C378; break;
        default: switch_error(__func__, 0x8005BE5C, 0x800962AC);
    }
    // 0x8005BE60: nop

L_8005BE64:
    // 0x8005BE64: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x8005BE68: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005BE6C: bltz        $t0, L_8005BE8C
    if (SIGNED(ctx->r8) < 0) {
        // 0x8005BE70: slti        $at, $t0, 0x4
        ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
            goto L_8005BE8C;
    }
    // 0x8005BE70: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8005BE74: beq         $at, $zero, L_8005BE84
    if (ctx->r1 == 0) {
        // 0x8005BE78: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005BE84;
    }
    // 0x8005BE78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005BE7C: b           L_8005BE8C
    // 0x8005BE80: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8005BE8C;
    // 0x8005BE80: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8005BE84:
    // 0x8005BE84: b           L_8005BE8C
    // 0x8005BE88: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8005BE8C;
    // 0x8005BE88: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8005BE8C:
    // 0x8005BE8C: beq         $v1, $zero, L_8005C394
    if (ctx->r3 == 0) {
        // 0x8005BE90: sll         $t7, $t2, 4
        ctx->r15 = S32(ctx->r10 << 4);
            goto L_8005C394;
    }
    // 0x8005BE90: sll         $t7, $t2, 4
    ctx->r15 = S32(ctx->r10 << 4);
    // 0x8005BE94: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x8005BE98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8005BE9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005BEA0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005BEA4: b           L_8005C394
    // 0x8005BEA8: sw          $t0, -0x28D0($at)
    MEM_W(-0X28D0, ctx->r1) = ctx->r8;
        goto L_8005C394;
    // 0x8005BEA8: sw          $t0, -0x28D0($at)
    MEM_W(-0X28D0, ctx->r1) = ctx->r8;
L_8005BEAC:
    // 0x8005BEAC: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x8005BEB0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005BEB4: bltz        $t0, L_8005BED4
    if (SIGNED(ctx->r8) < 0) {
        // 0x8005BEB8: slti        $at, $t0, 0x4
        ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
            goto L_8005BED4;
    }
    // 0x8005BEB8: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8005BEBC: beq         $at, $zero, L_8005BECC
    if (ctx->r1 == 0) {
        // 0x8005BEC0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005BECC;
    }
    // 0x8005BEC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005BEC4: b           L_8005BED4
    // 0x8005BEC8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8005BED4;
    // 0x8005BEC8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8005BECC:
    // 0x8005BECC: b           L_8005BED4
    // 0x8005BED0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8005BED4;
    // 0x8005BED0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8005BED4:
    // 0x8005BED4: beq         $v1, $zero, L_8005C394
    if (ctx->r3 == 0) {
        // 0x8005BED8: sll         $t8, $t2, 4
        ctx->r24 = S32(ctx->r10 << 4);
            goto L_8005C394;
    }
    // 0x8005BED8: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x8005BEDC: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x8005BEE0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8005BEE4: addiu       $t9, $t9, -0x28D0
    ctx->r25 = ADD32(ctx->r25, -0X28D0);
    // 0x8005BEE8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005BEEC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8005BEF0: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x8005BEF4: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x8005BEF8: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8005BEFC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8005BF00: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005BF04: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x8005BF08: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x8005BF0C: lw          $v0, 0x1D30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D30);
    // 0x8005BF10: b           L_8005C394
    // 0x8005BF14: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
        goto L_8005C394;
    // 0x8005BF14: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
L_8005BF18:
    // 0x8005BF18: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x8005BF1C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005BF20: bltz        $t0, L_8005BF40
    if (SIGNED(ctx->r8) < 0) {
        // 0x8005BF24: slti        $at, $t0, 0x7
        ctx->r1 = SIGNED(ctx->r8) < 0X7 ? 1 : 0;
            goto L_8005BF40;
    }
    // 0x8005BF24: slti        $at, $t0, 0x7
    ctx->r1 = SIGNED(ctx->r8) < 0X7 ? 1 : 0;
    // 0x8005BF28: beq         $at, $zero, L_8005BF38
    if (ctx->r1 == 0) {
        // 0x8005BF2C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005BF38;
    }
    // 0x8005BF2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005BF30: b           L_8005BF40
    // 0x8005BF34: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8005BF40;
    // 0x8005BF34: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8005BF38:
    // 0x8005BF38: b           L_8005BF40
    // 0x8005BF3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8005BF40;
    // 0x8005BF3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8005BF40:
    // 0x8005BF40: beq         $v1, $zero, L_8005C394
    if (ctx->r3 == 0) {
        // 0x8005BF44: or          $a2, $t2, $zero
        ctx->r6 = ctx->r10 | 0;
            goto L_8005C394;
    }
    // 0x8005BF44: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8005BF48: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8005BF4C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8005BF50: jal         0x8005BD50
    // 0x8005BF54: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    func_8005BD50(rdram, ctx);
        goto after_0;
    // 0x8005BF54: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    after_0:
    // 0x8005BF58: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8005BF5C: b           L_8005C398
    // 0x8005BF60: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
        goto L_8005C398;
    // 0x8005BF60: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
L_8005BF64:
    // 0x8005BF64: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x8005BF68: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005BF6C: bltz        $t0, L_8005BF8C
    if (SIGNED(ctx->r8) < 0) {
        // 0x8005BF70: slti        $at, $t0, 0x4
        ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
            goto L_8005BF8C;
    }
    // 0x8005BF70: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8005BF74: beq         $at, $zero, L_8005BF84
    if (ctx->r1 == 0) {
        // 0x8005BF78: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005BF84;
    }
    // 0x8005BF78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005BF7C: b           L_8005BF8C
    // 0x8005BF80: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8005BF8C;
    // 0x8005BF80: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8005BF84:
    // 0x8005BF84: b           L_8005BF8C
    // 0x8005BF88: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8005BF8C;
    // 0x8005BF88: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8005BF8C:
    // 0x8005BF8C: beq         $v1, $zero, L_8005C394
    if (ctx->r3 == 0) {
        // 0x8005BF90: sll         $t9, $t2, 4
        ctx->r25 = S32(ctx->r10 << 4);
            goto L_8005C394;
    }
    // 0x8005BF90: sll         $t9, $t2, 4
    ctx->r25 = S32(ctx->r10 << 4);
    // 0x8005BF94: subu        $t9, $t9, $t2
    ctx->r25 = SUB32(ctx->r25, ctx->r10);
    // 0x8005BF98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005BF9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005BFA0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8005BFA4: b           L_8005C394
    // 0x8005BFA8: sw          $t0, -0x28C4($at)
    MEM_W(-0X28C4, ctx->r1) = ctx->r8;
        goto L_8005C394;
    // 0x8005BFA8: sw          $t0, -0x28C4($at)
    MEM_W(-0X28C4, ctx->r1) = ctx->r8;
L_8005BFAC:
    // 0x8005BFAC: lw          $t6, 0x4($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X4);
    // 0x8005BFB0: sll         $t7, $t2, 4
    ctx->r15 = S32(ctx->r10 << 4);
    // 0x8005BFB4: bne         $t6, $zero, L_8005BFE8
    if (ctx->r14 != 0) {
        // 0x8005BFB8: subu        $t7, $t7, $t2
        ctx->r15 = SUB32(ctx->r15, ctx->r10);
            goto L_8005BFE8;
    }
    // 0x8005BFB8: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x8005BFBC: sll         $t7, $t2, 4
    ctx->r15 = S32(ctx->r10 << 4);
    // 0x8005BFC0: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x8005BFC4: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8005BFC8: addiu       $t8, $t8, -0x28D0
    ctx->r24 = ADD32(ctx->r24, -0X28D0);
    // 0x8005BFCC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8005BFD0: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8005BFD4: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x8005BFD8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8005BFDC: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x8005BFE0: b           L_8005C394
    // 0x8005BFE4: sw          $t6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r14;
        goto L_8005C394;
    // 0x8005BFE4: sw          $t6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r14;
L_8005BFE8:
    // 0x8005BFE8: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8005BFEC: addiu       $t8, $t8, -0x28D0
    ctx->r24 = ADD32(ctx->r24, -0X28D0);
    // 0x8005BFF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8005BFF4: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8005BFF8: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x8005BFFC: nop

    // 0x8005C000: ori         $t6, $t9, 0x1
    ctx->r14 = ctx->r25 | 0X1;
    // 0x8005C004: b           L_8005C394
    // 0x8005C008: sw          $t6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r14;
        goto L_8005C394;
    // 0x8005C008: sw          $t6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r14;
L_8005C00C:
    // 0x8005C00C: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x8005C010: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x8005C014: bne         $t7, $zero, L_8005C048
    if (ctx->r15 != 0) {
        // 0x8005C018: subu        $t8, $t8, $t2
        ctx->r24 = SUB32(ctx->r24, ctx->r10);
            goto L_8005C048;
    }
    // 0x8005C018: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x8005C01C: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x8005C020: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x8005C024: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8005C028: addiu       $t9, $t9, -0x28D0
    ctx->r25 = ADD32(ctx->r25, -0X28D0);
    // 0x8005C02C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005C030: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8005C034: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x8005C038: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8005C03C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8005C040: b           L_8005C394
    // 0x8005C044: sw          $t7, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r15;
        goto L_8005C394;
    // 0x8005C044: sw          $t7, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r15;
L_8005C048:
    // 0x8005C048: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8005C04C: addiu       $t9, $t9, -0x28D0
    ctx->r25 = ADD32(ctx->r25, -0X28D0);
    // 0x8005C050: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005C054: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8005C058: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x8005C05C: nop

    // 0x8005C060: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8005C064: b           L_8005C394
    // 0x8005C068: sw          $t7, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r15;
        goto L_8005C394;
    // 0x8005C068: sw          $t7, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r15;
L_8005C06C:
    // 0x8005C06C: lw          $t8, 0x4($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X4);
    // 0x8005C070: sll         $t9, $t2, 4
    ctx->r25 = S32(ctx->r10 << 4);
    // 0x8005C074: bne         $t8, $zero, L_8005C0A8
    if (ctx->r24 != 0) {
        // 0x8005C078: subu        $t9, $t9, $t2
        ctx->r25 = SUB32(ctx->r25, ctx->r10);
            goto L_8005C0A8;
    }
    // 0x8005C078: subu        $t9, $t9, $t2
    ctx->r25 = SUB32(ctx->r25, ctx->r10);
    // 0x8005C07C: sll         $t9, $t2, 4
    ctx->r25 = S32(ctx->r10 << 4);
    // 0x8005C080: subu        $t9, $t9, $t2
    ctx->r25 = SUB32(ctx->r25, ctx->r10);
    // 0x8005C084: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8005C088: addiu       $t6, $t6, -0x28D0
    ctx->r14 = ADD32(ctx->r14, -0X28D0);
    // 0x8005C08C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005C090: addu        $v1, $t9, $t6
    ctx->r3 = ADD32(ctx->r25, ctx->r14);
    // 0x8005C094: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x8005C098: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8005C09C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8005C0A0: b           L_8005C394
    // 0x8005C0A4: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
        goto L_8005C394;
    // 0x8005C0A4: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
L_8005C0A8:
    // 0x8005C0A8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8005C0AC: addiu       $t6, $t6, -0x28D0
    ctx->r14 = ADD32(ctx->r14, -0X28D0);
    // 0x8005C0B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005C0B4: addu        $v1, $t9, $t6
    ctx->r3 = ADD32(ctx->r25, ctx->r14);
    // 0x8005C0B8: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x8005C0BC: nop

    // 0x8005C0C0: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8005C0C4: b           L_8005C394
    // 0x8005C0C8: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
        goto L_8005C394;
    // 0x8005C0C8: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
L_8005C0CC:
    // 0x8005C0CC: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8005C0D0: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    // 0x8005C0D4: jal         0x8002D000
    // 0x8005C0D8: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x8005C0D8: sw          $t2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r10;
    after_1:
    // 0x8005C0DC: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x8005C0E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005C0E4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8005C0E8: jal         0x8004A0A0
    // 0x8005C0EC: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8005C0EC: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_2:
    // 0x8005C0F0: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8005C0F4: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x8005C0F8: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8005C0FC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8005C100: bne         $t9, $zero, L_8005C144
    if (ctx->r25 != 0) {
        // 0x8005C104: addiu       $a2, $sp, 0x4C
        ctx->r6 = ADD32(ctx->r29, 0X4C);
            goto L_8005C144;
    }
    // 0x8005C104: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x8005C108: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x8005C10C: subu        $t6, $t6, $t2
    ctx->r14 = SUB32(ctx->r14, ctx->r10);
    // 0x8005C110: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8005C114: addiu       $t7, $t7, -0x28D0
    ctx->r15 = ADD32(ctx->r15, -0X28D0);
    // 0x8005C118: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005C11C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x8005C120: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x8005C124: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x8005C128: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8005C12C: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x8005C130: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8005C134: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x8005C138: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8005C13C: b           L_8005C17C
    // 0x8005C140: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
        goto L_8005C17C;
    // 0x8005C140: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
L_8005C144:
    // 0x8005C144: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x8005C148: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x8005C14C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8005C150: addiu       $t9, $t9, -0x28D0
    ctx->r25 = ADD32(ctx->r25, -0X28D0);
    // 0x8005C154: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005C158: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8005C15C: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x8005C160: nop

    // 0x8005C164: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x8005C168: sw          $t7, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r15;
    // 0x8005C16C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8005C170: nop

    // 0x8005C174: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x8005C178: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
L_8005C17C:
    // 0x8005C17C: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8005C180: jal         0x8004A0A0
    // 0x8005C184: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8005C184: sw          $t1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r9;
    after_3:
    // 0x8005C188: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8005C18C: b           L_8005C398
    // 0x8005C190: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
        goto L_8005C398;
    // 0x8005C190: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
L_8005C194:
    // 0x8005C194: lw          $t6, 0x4($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X4);
    // 0x8005C198: sll         $t7, $t2, 4
    ctx->r15 = S32(ctx->r10 << 4);
    // 0x8005C19C: bne         $t6, $zero, L_8005C1D0
    if (ctx->r14 != 0) {
        // 0x8005C1A0: subu        $t7, $t7, $t2
        ctx->r15 = SUB32(ctx->r15, ctx->r10);
            goto L_8005C1D0;
    }
    // 0x8005C1A0: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x8005C1A4: sll         $t7, $t2, 4
    ctx->r15 = S32(ctx->r10 << 4);
    // 0x8005C1A8: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x8005C1AC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8005C1B0: addiu       $t8, $t8, -0x28D0
    ctx->r24 = ADD32(ctx->r24, -0X28D0);
    // 0x8005C1B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8005C1B8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8005C1BC: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x8005C1C0: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x8005C1C4: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x8005C1C8: b           L_8005C394
    // 0x8005C1CC: sw          $t6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r14;
        goto L_8005C394;
    // 0x8005C1CC: sw          $t6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r14;
L_8005C1D0:
    // 0x8005C1D0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8005C1D4: addiu       $t8, $t8, -0x28D0
    ctx->r24 = ADD32(ctx->r24, -0X28D0);
    // 0x8005C1D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8005C1DC: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8005C1E0: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x8005C1E4: nop

    // 0x8005C1E8: ori         $t6, $t9, 0x800
    ctx->r14 = ctx->r25 | 0X800;
    // 0x8005C1EC: b           L_8005C394
    // 0x8005C1F0: sw          $t6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r14;
        goto L_8005C394;
    // 0x8005C1F0: sw          $t6, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r14;
L_8005C1F4:
    // 0x8005C1F4: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x8005C1F8: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x8005C1FC: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x8005C200: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005C204: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005C208: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8005C20C: b           L_8005C394
    // 0x8005C210: sw          $t7, -0x28BC($at)
    MEM_W(-0X28BC, ctx->r1) = ctx->r15;
        goto L_8005C394;
    // 0x8005C210: sw          $t7, -0x28BC($at)
    MEM_W(-0X28BC, ctx->r1) = ctx->r15;
L_8005C214:
    // 0x8005C214: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x8005C218: subu        $t6, $t6, $t2
    ctx->r14 = SUB32(ctx->r14, ctx->r10);
    // 0x8005C21C: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8005C220: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005C224: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005C228: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8005C22C: b           L_8005C394
    // 0x8005C230: sw          $t9, -0x28B8($at)
    MEM_W(-0X28B8, ctx->r1) = ctx->r25;
        goto L_8005C394;
    // 0x8005C230: sw          $t9, -0x28B8($at)
    MEM_W(-0X28B8, ctx->r1) = ctx->r25;
L_8005C234:
    // 0x8005C234: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x8005C238: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x8005C23C: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x8005C240: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005C244: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005C248: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8005C24C: b           L_8005C394
    // 0x8005C250: sw          $t7, -0x28B4($at)
    MEM_W(-0X28B4, ctx->r1) = ctx->r15;
        goto L_8005C394;
    // 0x8005C250: sw          $t7, -0x28B4($at)
    MEM_W(-0X28B4, ctx->r1) = ctx->r15;
L_8005C254:
    // 0x8005C254: sll         $t6, $t2, 4
    ctx->r14 = S32(ctx->r10 << 4);
    // 0x8005C258: subu        $t6, $t6, $t2
    ctx->r14 = SUB32(ctx->r14, ctx->r10);
    // 0x8005C25C: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8005C260: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005C264: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005C268: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8005C26C: b           L_8005C394
    // 0x8005C270: sw          $t9, -0x28B0($at)
    MEM_W(-0X28B0, ctx->r1) = ctx->r25;
        goto L_8005C394;
    // 0x8005C270: sw          $t9, -0x28B0($at)
    MEM_W(-0X28B0, ctx->r1) = ctx->r25;
L_8005C274:
    // 0x8005C274: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x8005C278: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x8005C27C: lw          $t7, 0x4($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X4);
    // 0x8005C280: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005C284: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005C288: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8005C28C: b           L_8005C394
    // 0x8005C290: sw          $t7, -0x28AC($at)
    MEM_W(-0X28AC, ctx->r1) = ctx->r15;
        goto L_8005C394;
    // 0x8005C290: sw          $t7, -0x28AC($at)
    MEM_W(-0X28AC, ctx->r1) = ctx->r15;
L_8005C294:
    // 0x8005C294: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x8005C298: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005C29C: bltz        $t0, L_8005C2D8
    if (SIGNED(ctx->r8) < 0) {
        // 0x8005C2A0: sll         $t9, $t2, 4
        ctx->r25 = S32(ctx->r10 << 4);
            goto L_8005C2D8;
    }
    // 0x8005C2A0: sll         $t9, $t2, 4
    ctx->r25 = S32(ctx->r10 << 4);
    // 0x8005C2A4: subu        $t9, $t9, $t2
    ctx->r25 = SUB32(ctx->r25, ctx->r10);
    // 0x8005C2A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005C2AC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8005C2B0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8005C2B4: lw          $t6, -0x28A0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X28A0);
    // 0x8005C2B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005C2BC: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8005C2C0: bne         $at, $zero, L_8005C2D0
    if (ctx->r1 != 0) {
        // 0x8005C2C4: nop
    
            goto L_8005C2D0;
    }
    // 0x8005C2C4: nop

    // 0x8005C2C8: b           L_8005C2D8
    // 0x8005C2CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8005C2D8;
    // 0x8005C2CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8005C2D0:
    // 0x8005C2D0: b           L_8005C2D8
    // 0x8005C2D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8005C2D8;
    // 0x8005C2D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8005C2D8:
    // 0x8005C2D8: beq         $v1, $zero, L_8005C394
    if (ctx->r3 == 0) {
        // 0x8005C2DC: sll         $t7, $t2, 4
        ctx->r15 = S32(ctx->r10 << 4);
            goto L_8005C394;
    }
    // 0x8005C2DC: sll         $t7, $t2, 4
    ctx->r15 = S32(ctx->r10 << 4);
    // 0x8005C2E0: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x8005C2E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8005C2E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005C2EC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005C2F0: b           L_8005C394
    // 0x8005C2F4: sw          $t0, -0x28A4($at)
    MEM_W(-0X28A4, ctx->r1) = ctx->r8;
        goto L_8005C394;
    // 0x8005C2F4: sw          $t0, -0x28A4($at)
    MEM_W(-0X28A4, ctx->r1) = ctx->r8;
L_8005C2F8:
    // 0x8005C2F8: lw          $t0, 0x4($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X4);
    // 0x8005C2FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005C300: blez        $t0, L_8005C320
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8005C304: slti        $at, $t0, 0xB
        ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
            goto L_8005C320;
    }
    // 0x8005C304: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x8005C308: beq         $at, $zero, L_8005C318
    if (ctx->r1 == 0) {
        // 0x8005C30C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8005C318;
    }
    // 0x8005C30C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8005C310: b           L_8005C320
    // 0x8005C314: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8005C320;
    // 0x8005C314: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8005C318:
    // 0x8005C318: b           L_8005C320
    // 0x8005C31C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8005C320;
    // 0x8005C31C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8005C320:
    // 0x8005C320: beq         $v1, $zero, L_8005C394
    if (ctx->r3 == 0) {
        // 0x8005C324: sll         $t8, $t2, 4
        ctx->r24 = S32(ctx->r10 << 4);
            goto L_8005C394;
    }
    // 0x8005C324: sll         $t8, $t2, 4
    ctx->r24 = S32(ctx->r10 << 4);
    // 0x8005C328: subu        $t8, $t8, $t2
    ctx->r24 = SUB32(ctx->r24, ctx->r10);
    // 0x8005C32C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8005C330: addiu       $t9, $t9, -0x28D0
    ctx->r25 = ADD32(ctx->r25, -0X28D0);
    // 0x8005C334: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8005C338: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8005C33C: lw          $t6, 0x2C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2C);
    // 0x8005C340: sw          $t0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r8;
    // 0x8005C344: slt         $at, $t0, $t6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8005C348: beq         $at, $zero, L_8005C394
    if (ctx->r1 == 0) {
        // 0x8005C34C: nop
    
            goto L_8005C394;
    }
    // 0x8005C34C: nop

    // 0x8005C350: b           L_8005C394
    // 0x8005C354: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
        goto L_8005C394;
    // 0x8005C354: sw          $t0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r8;
L_8005C358:
    // 0x8005C358: sll         $t9, $t2, 4
    ctx->r25 = S32(ctx->r10 << 4);
    // 0x8005C35C: subu        $t9, $t9, $t2
    ctx->r25 = SUB32(ctx->r25, ctx->r10);
    // 0x8005C360: lw          $t8, 0x4($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X4);
    // 0x8005C364: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8005C368: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005C36C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8005C370: b           L_8005C394
    // 0x8005C374: sw          $t8, -0x289C($at)
    MEM_W(-0X289C, ctx->r1) = ctx->r24;
        goto L_8005C394;
    // 0x8005C374: sw          $t8, -0x289C($at)
    MEM_W(-0X289C, ctx->r1) = ctx->r24;
L_8005C378:
    // 0x8005C378: sll         $t7, $t2, 4
    ctx->r15 = S32(ctx->r10 << 4);
    // 0x8005C37C: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x8005C380: lw          $t6, 0x4($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X4);
    // 0x8005C384: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8005C388: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005C38C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005C390: sw          $t6, -0x2898($at)
    MEM_W(-0X2898, ctx->r1) = ctx->r14;
L_8005C394:
    // 0x8005C394: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
L_8005C398:
    // 0x8005C398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C39C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8005C3A0: jr          $ra
    // 0x8005C3A4: nop

    return;
    // 0x8005C3A4: nop

;}
RECOMP_FUNC void func_8005C3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C3A8: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8005C3AC: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8005C3B0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8005C3B4: addiu       $t7, $t7, -0x28D0
    ctx->r15 = ADD32(ctx->r15, -0X28D0);
    // 0x8005C3B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005C3BC: jr          $ra
    // 0x8005C3C0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    return;
    // 0x8005C3C0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
;}
RECOMP_FUNC void func_8005C3C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C3C4: jr          $ra
    // 0x8005C3C8: nop

    return;
    // 0x8005C3C8: nop

;}
RECOMP_FUNC void func_8005C3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C3DC: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8005C3E0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8005C3E4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8005C3E8: addiu       $t7, $t7, -0x28D0
    ctx->r15 = ADD32(ctx->r15, -0X28D0);
    // 0x8005C3EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8005C3F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005C3F4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8005C3F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C3FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8005C400: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8005C404: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8005C408: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8005C40C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8005C410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005C414: jal         0x8005BD50
    // 0x8005C418: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8005BD50(rdram, ctx);
        goto after_0;
    // 0x8005C418: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8005C41C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8005C420: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8005C424: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x8005C428: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8005C42C: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x8005C430: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8005C434: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x8005C438: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x8005C43C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8005C440: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x8005C444: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x8005C448: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x8005C44C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C450: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x8005C454: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x8005C458: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8005C45C: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x8005C460: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005C464: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x8005C468: sw          $t9, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r25;
    // 0x8005C46C: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x8005C470: jr          $ra
    // 0x8005C474: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
    return;
    // 0x8005C474: sw          $zero, 0x38($v0)
    MEM_W(0X38, ctx->r2) = 0;
;}
RECOMP_FUNC void func_8005C478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005C47C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C480: jal         0x8005C3DC
    // 0x8005C484: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8005C3DC(rdram, ctx);
        goto after_0;
    // 0x8005C484: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8005C488: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8005C48C: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8005C490: sll         $a0, $t0, 4
    ctx->r4 = S32(ctx->r8 << 4);
    // 0x8005C494: subu        $a0, $a0, $t0
    ctx->r4 = SUB32(ctx->r4, ctx->r8);
    // 0x8005C498: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8005C49C: addiu       $t1, $t1, -0x28D0
    ctx->r9 = ADD32(ctx->r9, -0X28D0);
    // 0x8005C4A0: addu        $v1, $t1, $a0
    ctx->r3 = ADD32(ctx->r9, ctx->r4);
    // 0x8005C4A4: lw          $t6, 0x24($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X24);
    // 0x8005C4A8: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8005C4AC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8005C4B0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x8005C4B4: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x8005C4B8: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x8005C4BC: and         $t3, $t9, $at
    ctx->r11 = ctx->r25 & ctx->r1;
    // 0x8005C4C0: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8005C4C4: sw          $t7, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r15;
    // 0x8005C4C8: and         $t5, $t3, $at
    ctx->r13 = ctx->r11 & ctx->r1;
    // 0x8005C4CC: sw          $t9, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r25;
    // 0x8005C4D0: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x8005C4D4: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x8005C4D8: lw          $a3, 0x4($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X4);
    // 0x8005C4DC: sw          $t3, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r11;
    // 0x8005C4E0: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x8005C4E4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005C4E8: sw          $t5, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r13;
    // 0x8005C4EC: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x8005C4F0: sll         $t2, $a2, 4
    ctx->r10 = S32(ctx->r6 << 4);
    // 0x8005C4F4: sll         $t3, $a3, 2
    ctx->r11 = S32(ctx->r7 << 2);
    // 0x8005C4F8: sw          $t7, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r15;
    // 0x8005C4FC: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x8005C500: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8005C504: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005C508: lw          $t6, 0x2C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2C);
    // 0x8005C50C: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    // 0x8005C510: sw          $a1, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r5;
    // 0x8005C514: sw          $a1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r5;
    // 0x8005C518: sw          $a1, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r5;
    // 0x8005C51C: sw          $t9, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r25;
    // 0x8005C520: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x8005C524: lw          $v0, 0x1D30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D30);
    // 0x8005C528: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x8005C52C: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x8005C530: sw          $t5, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r13;
    // 0x8005C534: bne         $at, $zero, L_8005C540
    if (ctx->r1 != 0) {
        // 0x8005C538: sw          $v0, 0x28($v1)
        MEM_W(0X28, ctx->r3) = ctx->r2;
            goto L_8005C540;
    }
    // 0x8005C538: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x8005C53C: sw          $t5, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r13;
L_8005C540:
    // 0x8005C540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005C548: jr          $ra
    // 0x8005C54C: nop

    return;
    // 0x8005C54C: nop

;}
RECOMP_FUNC void func_8005C550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C550: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005C554: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8005C558: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005C55C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005C560: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005C564: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
L_8005C568:
    // 0x8005C568: jal         0x8005C478
    // 0x8005C56C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005C478(rdram, ctx);
        goto after_0;
    // 0x8005C56C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8005C570: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005C574: bne         $s0, $s1, L_8005C568
    if (ctx->r16 != ctx->r17) {
        // 0x8005C578: nop
    
            goto L_8005C568;
    }
    // 0x8005C578: nop

    // 0x8005C57C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8005C580: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005C584: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005C588: jr          $ra
    // 0x8005C58C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8005C58C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
