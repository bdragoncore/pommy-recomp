#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8004E6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E6D4: jr          $ra
    // 0x8004E6D8: nop

    return;
    // 0x8004E6D8: nop

;}
RECOMP_FUNC void func_8004E6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004E6DC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004E6E0: lw          $a1, 0x1B00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1B00);
    // 0x8004E6E4: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x8004E6E8: blez        $a1, L_8004ECC8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8004E6EC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8004ECC8;
    }
    // 0x8004E6EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004E6F0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004E6F4: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x8004E6F8: addiu       $t6, $t6, -0x61E8
    ctx->r14 = ADD32(ctx->r14, -0X61E8);
    // 0x8004E6FC: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x8004E700: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8004E704: addiu       $s2, $s2, -0x5A18
    ctx->r18 = ADD32(ctx->r18, -0X5A18);
    // 0x8004E708: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8004E70C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_8004E710:
    // 0x8004E710: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8004E714: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004E718: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x8004E71C: addiu       $t9, $t9, -0x61E8
    ctx->r25 = ADD32(ctx->r25, -0X61E8);
    // 0x8004E720: bne         $s4, $v1, L_8004E730
    if (ctx->r20 != ctx->r3) {
        // 0x8004E724: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_8004E730;
    }
    // 0x8004E724: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8004E728: b           L_8004ECB0
    // 0x8004E72C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
        goto L_8004ECB0;
    // 0x8004E72C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
L_8004E730:
    // 0x8004E730: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8004E734: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8004E738: andi        $t6, $v0, 0x4010
    ctx->r14 = ctx->r2 & 0X4010;
    // 0x8004E73C: beq         $t6, $zero, L_8004E754
    if (ctx->r14 == 0) {
        // 0x8004E740: andi        $t9, $v0, 0x100
        ctx->r25 = ctx->r2 & 0X100;
            goto L_8004E754;
    }
    // 0x8004E740: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x8004E744: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8004E748: addiu       $t8, $t8, -0x61E8
    ctx->r24 = ADD32(ctx->r24, -0X61E8);
    // 0x8004E74C: b           L_8004ECB0
    // 0x8004E750: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
        goto L_8004ECB0;
    // 0x8004E750: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8004E754:
    // 0x8004E754: beq         $t9, $zero, L_8004ECA0
    if (ctx->r25 == 0) {
        // 0x8004E758: andi        $t6, $v0, 0x1
        ctx->r14 = ctx->r2 & 0X1;
            goto L_8004ECA0;
    }
    // 0x8004E758: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8004E75C: beq         $t6, $zero, L_8004ECA0
    if (ctx->r14 == 0) {
        // 0x8004E760: nop
    
            goto L_8004ECA0;
    }
    // 0x8004E760: nop

    // 0x8004E764: lw          $t0, 0x154($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X154);
    // 0x8004E768: lw          $a0, 0x18($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X18);
    // 0x8004E76C: nop

    // 0x8004E770: slt         $at, $t0, $a0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004E774: beq         $at, $zero, L_8004ECA0
    if (ctx->r1 == 0) {
        // 0x8004E778: nop
    
            goto L_8004ECA0;
    }
    // 0x8004E778: nop

    // 0x8004E77C: lw          $t8, 0x20($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X20);
    // 0x8004E780: nop

    // 0x8004E784: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x8004E788: nop

L_8004E78C:
    // 0x8004E78C: blez        $v0, L_8004EC84
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004E790: sw          $zero, 0x148($sp)
        MEM_W(0X148, ctx->r29) = 0;
            goto L_8004EC84;
    }
    // 0x8004E790: sw          $zero, 0x148($sp)
    MEM_W(0X148, ctx->r29) = 0;
    // 0x8004E794: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x8004E798: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8004E79C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004E7A0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8004E7A4: or          $s7, $s4, $zero
    ctx->r23 = ctx->r20 | 0;
    // 0x8004E7A8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8004E7AC: sw          $t0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r8;
    // 0x8004E7B0: lw          $t0, 0x140($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X140);
L_8004E7B4:
    // 0x8004E7B4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8004E7B8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x8004E7BC: addiu       $a0, $sp, 0x118
    ctx->r4 = ADD32(ctx->r29, 0X118);
    // 0x8004E7C0: jal         0x8004C26C
    // 0x8004E7C4: or          $s6, $v1, $zero
    ctx->r22 = ctx->r3 | 0;
    func_8004C26C(rdram, ctx);
        goto after_0;
    // 0x8004E7C4: or          $s6, $v1, $zero
    ctx->r22 = ctx->r3 | 0;
    after_0:
    // 0x8004E7C8: lw          $t0, 0x148($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X148);
    // 0x8004E7CC: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8004E7D0: jal         0x8004BF58
    // 0x8004E7D4: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    func_8004BF58(rdram, ctx);
        goto after_1;
    // 0x8004E7D4: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    after_1:
    // 0x8004E7D8: lwc1        $f4, 0x118($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8004E7DC: lwc1        $f6, 0x124($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X124);
    // 0x8004E7E0: lwc1        $f10, 0x11C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x8004E7E4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8004E7E8: lwc1        $f4, 0x128($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X128);
    // 0x8004E7EC: swc1        $f8, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f8.u32l;
    // 0x8004E7F0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8004E7F4: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    // 0x8004E7F8: lwc1        $f8, 0x120($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X120);
    // 0x8004E7FC: lwc1        $f10, 0x12C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8004E800: swc1        $f6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f6.u32l;
    // 0x8004E804: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004E808: swc1        $f6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f6.u32l;
    // 0x8004E80C: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
    // 0x8004E810: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x8004E814: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8004E818: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    // 0x8004E81C: lw          $t6, 0x20($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X20);
    // 0x8004E820: addiu       $a0, $sp, 0x100
    ctx->r4 = ADD32(ctx->r29, 0X100);
    // 0x8004E824: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8004E828: lw          $t6, 0x1C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X1C);
    // 0x8004E82C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8004E830: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8004E834: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8004E838: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8004E83C: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8004E840: jal         0x8004BEC8
    // 0x8004E844: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8004BEC8(rdram, ctx);
        goto after_2;
    // 0x8004E844: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_2:
    // 0x8004E848: blez        $v0, L_8004EC38
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004E84C: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8004EC38;
    }
    // 0x8004E84C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8004E850: lw          $t9, 0x1C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X1C);
    // 0x8004E854: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8004E858: lw          $t8, 0x20($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X20);
    // 0x8004E85C: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8004E860: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8004E864: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8004E868: lw          $v1, 0x10($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X10);
    // 0x8004E86C: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8004E870: lw          $a2, 0x10($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X10);
    // 0x8004E874: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8004E878: lw          $a1, 0x4($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X4);
    // 0x8004E87C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004E880: addiu       $t8, $sp, 0x100
    ctx->r24 = ADD32(ctx->r29, 0X100);
    // 0x8004E884: sw          $t8, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r24;
    // 0x8004E888: swc1        $f20, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f20.u32l;
    // 0x8004E88C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8004E890: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x8004E894: sw          $a2, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r6;
    // 0x8004E898: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8004E89C: sw          $a1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r5;
    // 0x8004E8A0: jal         0x8004AF68
    // 0x8004E8A4: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    func_8004AF68(rdram, ctx);
        goto after_3;
    // 0x8004E8A4: swc1        $f4, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f4.u32l;
    after_3:
    // 0x8004E8A8: bne         $v0, $fp, L_8004EBB0
    if (ctx->r2 != ctx->r30) {
        // 0x8004E8AC: nop
    
            goto L_8004EBB0;
    }
    // 0x8004E8AC: nop

    // 0x8004E8B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8004E8B4: lwc1        $f6, 0xF4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x8004E8B8: lwc1        $f8, 0xF8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8004E8BC: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8004E8C0: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8004E8C4: bc1f        L_8004E8F8
    if (!c1cs) {
        // 0x8004E8C8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8004E8F8;
    }
    // 0x8004E8C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004E8CC: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x8004E8D0: lwc1        $f10, 0xFC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x8004E8D4: bc1f        L_8004E8FC
    if (!c1cs) {
        // 0x8004E8D8: addiu       $a0, $sp, 0xF4
        ctx->r4 = ADD32(ctx->r29, 0XF4);
            goto L_8004E8FC;
    }
    // 0x8004E8D8: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x8004E8DC: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x8004E8E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004E8E4: bc1f        L_8004E8FC
    if (!c1cs) {
        // 0x8004E8E8: addiu       $a0, $sp, 0xF4
        ctx->r4 = ADD32(ctx->r29, 0XF4);
            goto L_8004E8FC;
    }
    // 0x8004E8E8: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
    // 0x8004E8EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004E8F0: b           L_8004E908
    // 0x8004E8F4: swc1        $f4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f4.u32l;
        goto L_8004E908;
    // 0x8004E8F4: swc1        $f4, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f4.u32l;
L_8004E8F8:
    // 0x8004E8F8: addiu       $a0, $sp, 0xF4
    ctx->r4 = ADD32(ctx->r29, 0XF4);
L_8004E8FC:
    // 0x8004E8FC: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x8004E900: jal         0x8007A5B0
    // 0x8004E904: addiu       $a2, $sp, 0xFC
    ctx->r6 = ADD32(ctx->r29, 0XFC);
    guNormalize(rdram, ctx);
        goto after_4;
    // 0x8004E904: addiu       $a2, $sp, 0xFC
    ctx->r6 = ADD32(ctx->r29, 0XFC);
    after_4:
L_8004E908:
    // 0x8004E908: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8004E90C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8004E910: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8004E914: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8004E918: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    // 0x8004E91C: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8004E920: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8004E924: swc1        $f8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->f8.u32l;
    // 0x8004E928: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8004E92C: addiu       $a0, $a0, -0x5FE8
    ctx->r4 = ADD32(ctx->r4, -0X5FE8);
    // 0x8004E930: swc1        $f10, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f10.u32l;
    // 0x8004E934: lw          $t7, 0x20($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X20);
    // 0x8004E938: lw          $t9, 0x1C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X1C);
    // 0x8004E93C: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8004E940: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x8004E944: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x8004E948: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8004E94C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004E950: lwc1        $f10, 0xF4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x8004E954: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004E958: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8004E95C: swc1        $f4, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f4.u32l;
    // 0x8004E960: lwc1        $f6, 0xF8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x8004E964: nop

    // 0x8004E968: swc1        $f6, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f6.u32l;
    // 0x8004E96C: lw          $t6, 0x20($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X20);
    // 0x8004E970: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004E974: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8004E978: lwc1        $f6, 0xFC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x8004E97C: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8004E980: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8004E984: nop

    // 0x8004E988: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004E98C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8004E990: jal         0x8004DF9C
    // 0x8004E994: swc1        $f8, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f8.u32l;
    func_8004DF9C(rdram, ctx);
        goto after_5;
    // 0x8004E994: swc1        $f8, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f8.u32l;
    after_5:
    // 0x8004E998: lw          $t9, 0x18($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X18);
    // 0x8004E99C: nop

    // 0x8004E9A0: blez        $t9, L_8004EA64
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8004E9A4: or          $a3, $s4, $zero
        ctx->r7 = ctx->r20 | 0;
            goto L_8004EA64;
    }
    // 0x8004E9A4: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
L_8004E9A8:
    // 0x8004E9A8: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x8004E9AC: jal         0x8004C26C
    // 0x8004E9B0: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    func_8004C26C(rdram, ctx);
        goto after_6;
    // 0x8004E9B0: addiu       $a0, $sp, 0xE4
    ctx->r4 = ADD32(ctx->r29, 0XE4);
    after_6:
    // 0x8004E9B4: lwc1        $f10, 0xC($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8004E9B8: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8004E9BC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004E9C0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8004E9C4: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x8004E9C8: swc1        $f6, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f6.u32l;
    // 0x8004E9CC: lwc1        $f8, 0x10($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8004E9D0: addiu       $t7, $t7, -0x5FE8
    ctx->r15 = ADD32(ctx->r15, -0X5FE8);
    // 0x8004E9D4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004E9D8: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x8004E9DC: swc1        $f4, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f4.u32l;
    // 0x8004E9E0: lwc1        $f6, 0x14($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X14);
    // 0x8004E9E4: addiu       $t6, $sp, 0xD8
    ctx->r14 = ADD32(ctx->r29, 0XD8);
    // 0x8004E9E8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004E9EC: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x8004E9F0: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x8004E9F4: sw          $s7, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r23;
    // 0x8004E9F8: sw          $s6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r22;
    // 0x8004E9FC: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x8004EA00: sw          $s4, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r20;
    // 0x8004EA04: sw          $s3, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r19;
    // 0x8004EA08: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    // 0x8004EA0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004EA10: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x8004EA14: jal         0x8004E3E4
    // 0x8004EA18: addiu       $s1, $sp, 0xE4
    ctx->r17 = ADD32(ctx->r29, 0XE4);
    func_8004E3E4(rdram, ctx);
        goto after_7;
    // 0x8004EA18: addiu       $s1, $sp, 0xE4
    ctx->r17 = ADD32(ctx->r29, 0XE4);
    after_7:
    // 0x8004EA1C: lw          $s3, 0xD0($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XD0);
    // 0x8004EA20: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x8004EA24: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8004EA28: lw          $s0, 0xD4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD4);
    // 0x8004EA2C: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x8004EA30: lw          $s4, 0x150($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X150);
    // 0x8004EA34: lw          $s5, 0xC4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC4);
    // 0x8004EA38: lw          $s6, 0x138($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X138);
    // 0x8004EA3C: lw          $s7, 0x130($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X130);
    // 0x8004EA40: addiu       $s2, $s2, -0x5A18
    ctx->r18 = ADD32(ctx->r18, -0X5A18);
    // 0x8004EA44: bgez        $s3, L_8004EA50
    if (SIGNED(ctx->r19) >= 0) {
        // 0x8004EA48: addiu       $fp, $zero, 0x1
        ctx->r30 = ADD32(0, 0X1);
            goto L_8004EA50;
    }
    // 0x8004EA48: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x8004EA4C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_8004EA50:
    // 0x8004EA50: lw          $t8, 0x18($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X18);
    // 0x8004EA54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004EA58: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8004EA5C: bne         $at, $zero, L_8004E9A8
    if (ctx->r1 != 0) {
        // 0x8004EA60: or          $a3, $s4, $zero
        ctx->r7 = ctx->r20 | 0;
            goto L_8004E9A8;
    }
    // 0x8004EA60: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
L_8004EA64:
    // 0x8004EA64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004EA68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8004EA6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8004EA70: swc1        $f4, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f4.u32l;
    // 0x8004EA74: swc1        $f6, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f6.u32l;
    // 0x8004EA78: blez        $s3, L_8004EB00
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8004EA7C: swc1        $f8, 0xC($s4)
        MEM_W(0XC, ctx->r20) = ctx->f8.u32l;
            goto L_8004EB00;
    }
    // 0x8004EA7C: swc1        $f8, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f8.u32l;
    // 0x8004EA80: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x8004EA84: lw          $s0, -0x5F98($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5F98);
    // 0x8004EA88: nop

L_8004EA8C:
    // 0x8004EA8C: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8004EA90: lw          $t9, 0x1C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X1C);
    // 0x8004EA94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004EA98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004EA9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004EAA0: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8004EAA4: lw          $v1, 0x10($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X10);
    // 0x8004EAA8: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8004EAAC: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8004EAB0: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    // 0x8004EAB4: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8004EAB8: addiu       $t6, $s0, 0x3C
    ctx->r14 = ADD32(ctx->r16, 0X3C);
    // 0x8004EABC: sw          $t6, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r14;
    // 0x8004EAC0: swc1        $f20, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f20.u32l;
    // 0x8004EAC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8004EAC8: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x8004EACC: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8004EAD0: sw          $a1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r5;
    // 0x8004EAD4: sw          $a2, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r6;
    // 0x8004EAD8: jal         0x8004AF68
    // 0x8004EADC: swc1        $f0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f0.u32l;
    func_8004AF68(rdram, ctx);
        goto after_8;
    // 0x8004EADC: swc1        $f0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f0.u32l;
    after_8:
    // 0x8004EAE0: beq         $v0, $fp, L_8004EB00
    if (ctx->r2 == ctx->r30) {
        // 0x8004EAE4: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_8004EB00;
    }
    // 0x8004EAE4: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8004EAE8: lw          $s0, 0x50($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X50);
    // 0x8004EAEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004EAF0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8004EAF4: nop

    // 0x8004EAF8: bne         $t9, $at, L_8004EA8C
    if (ctx->r25 != ctx->r1) {
        // 0x8004EAFC: nop
    
            goto L_8004EA8C;
    }
    // 0x8004EAFC: nop

L_8004EB00:
    // 0x8004EB00: beq         $s5, $fp, L_8004EB88
    if (ctx->r21 == ctx->r30) {
        // 0x8004EB04: nop
    
            goto L_8004EB88;
    }
    // 0x8004EB04: nop

    // 0x8004EB08: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x8004EB0C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8004EB10: lw          $t6, 0x20($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X20);
    // 0x8004EB14: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8004EB18: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8004EB1C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8004EB20: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004EB24: addu        $t6, $t9, $t7
    ctx->r14 = ADD32(ctx->r25, ctx->r15);
    // 0x8004EB28: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8004EB2C: lwc1        $f8, 0xF4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x8004EB30: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8004EB34: lwc1        $f10, 0x124($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X124);
    // 0x8004EB38: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8004EB3C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004EB40: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8004EB44: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8004EB48: swc1        $f10, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f10.u32l;
    // 0x8004EB4C: lw          $t9, 0x1C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X1C);
    // 0x8004EB50: lw          $t6, 0x20($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X20);
    // 0x8004EB54: addu        $v0, $t9, $t8
    ctx->r2 = ADD32(ctx->r25, ctx->r24);
    // 0x8004EB58: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8004EB5C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004EB60: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8004EB64: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8004EB68: lwc1        $f10, 0xFC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x8004EB6C: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8004EB70: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x8004EB74: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8004EB78: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8004EB7C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004EB80: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004EB84: swc1        $f4, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f4.u32l;
L_8004EB88:
    // 0x8004EB88: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8004EB8C: lwc1        $f6, 0x10C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10C);
    // 0x8004EB90: nop

    // 0x8004EB94: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x8004EB98: lwc1        $f8, 0x110($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X110);
    // 0x8004EB9C: nop

    // 0x8004EBA0: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x8004EBA4: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x8004EBA8: nop

    // 0x8004EBAC: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
L_8004EBB0:
    // 0x8004EBB0: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x8004EBB4: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x8004EBB8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8004EBBC: lwc1        $f4, 0x108($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X108);
    // 0x8004EBC0: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    // 0x8004EBC4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8004EBC8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8004EBCC: swc1        $f6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f6.u32l;
    // 0x8004EBD0: swc1        $f10, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f10.u32l;
    // 0x8004EBD4: lw          $t6, 0x20($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X20);
    // 0x8004EBD8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8004EBDC: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8004EBE0: lw          $t6, 0x1C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X1C);
    // 0x8004EBE4: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8004EBE8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8004EBEC: lw          $v1, 0x10($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X10);
    // 0x8004EBF0: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x8004EBF4: lw          $a2, 0x10($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X10);
    // 0x8004EBF8: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x8004EBFC: lw          $v0, 0x4($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X4);
    // 0x8004EC00: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8004EC04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004EC08: addiu       $t8, $sp, 0x100
    ctx->r24 = ADD32(ctx->r29, 0X100);
    // 0x8004EC0C: sw          $t8, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r24;
    // 0x8004EC10: swc1        $f20, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f20.u32l;
    // 0x8004EC14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8004EC18: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    // 0x8004EC1C: sw          $a2, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r6;
    // 0x8004EC20: sw          $a1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r5;
    // 0x8004EC24: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8004EC28: jal         0x8004AF68
    // 0x8004EC2C: swc1        $f8, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f8.u32l;
    func_8004AF68(rdram, ctx);
        goto after_9;
    // 0x8004EC2C: swc1        $f8, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->f8.u32l;
    after_9:
    // 0x8004EC30: b           L_8004EC3C
    // 0x8004EC34: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
        goto L_8004EC3C;
    // 0x8004EC34: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
L_8004EC38:
    // 0x8004EC38: lw          $t6, 0x148($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X148);
L_8004EC3C:
    // 0x8004EC3C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8004EC40: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x8004EC44: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8004EC48: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x8004EC4C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8004EC50: sw          $t9, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->r25;
    // 0x8004EC54: lw          $v1, 0x0($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X0);
    // 0x8004EC58: nop

    // 0x8004EC5C: lw          $t7, 0x20($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X20);
    // 0x8004EC60: nop

    // 0x8004EC64: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x8004EC68: nop

    // 0x8004EC6C: slt         $at, $t9, $v0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004EC70: bne         $at, $zero, L_8004E7B4
    if (ctx->r1 != 0) {
        // 0x8004EC74: lw          $t0, 0x140($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X140);
            goto L_8004E7B4;
    }
    // 0x8004EC74: lw          $t0, 0x140($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X140);
    // 0x8004EC78: lw          $a0, 0x18($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X18);
    // 0x8004EC7C: lw          $t0, 0x140($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X140);
    // 0x8004EC80: nop

L_8004EC84:
    // 0x8004EC84: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8004EC88: slt         $at, $t0, $a0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004EC8C: bne         $at, $zero, L_8004E78C
    if (ctx->r1 != 0) {
        // 0x8004EC90: nop
    
            goto L_8004E78C;
    }
    // 0x8004EC90: nop

    // 0x8004EC94: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004EC98: lw          $a1, 0x1B00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1B00);
    // 0x8004EC9C: nop

L_8004ECA0:
    // 0x8004ECA0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004ECA4: addiu       $t6, $t6, -0x61E8
    ctx->r14 = ADD32(ctx->r14, -0X61E8);
    // 0x8004ECA8: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8004ECAC: addu        $v0, $t8, $t6
    ctx->r2 = ADD32(ctx->r24, ctx->r14);
L_8004ECB0:
    // 0x8004ECB0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8004ECB4: nop

    // 0x8004ECB8: addiu       $t9, $t7, 0x4
    ctx->r25 = ADD32(ctx->r15, 0X4);
    // 0x8004ECBC: sltu        $at, $t9, $v0
    ctx->r1 = ctx->r25 < ctx->r2 ? 1 : 0;
    // 0x8004ECC0: bne         $at, $zero, L_8004E710
    if (ctx->r1 != 0) {
        // 0x8004ECC4: sw          $t9, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r25;
            goto L_8004E710;
    }
    // 0x8004ECC4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_8004ECC8:
    // 0x8004ECC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004ECCC: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    // 0x8004ECD0: jr          $ra
    // 0x8004ECD4: nop

    return;
    // 0x8004ECD4: nop

;}
RECOMP_FUNC void func_8004ECD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004ECD8: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8004ECDC: nop

    // 0x8004ECE0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8004ECE4: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8004ECE8: nop

    // 0x8004ECEC: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x8004ECF0: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8004ECF4: nop

    // 0x8004ECF8: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    // 0x8004ECFC: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x8004ED00: nop

    // 0x8004ED04: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x8004ED08: lwc1        $f8, 0x14($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X14);
    // 0x8004ED0C: nop

    // 0x8004ED10: swc1        $f8, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f8.u32l;
    // 0x8004ED14: lwc1        $f10, 0x18($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8004ED18: nop

    // 0x8004ED1C: swc1        $f10, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f10.u32l;
    // 0x8004ED20: lwc1        $f4, 0x1C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x8004ED24: nop

    // 0x8004ED28: swc1        $f4, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f4.u32l;
    // 0x8004ED2C: lw          $t8, 0x20($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X20);
    // 0x8004ED30: nop

    // 0x8004ED34: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x8004ED38: lw          $t9, 0x24($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X24);
    // 0x8004ED3C: nop

    // 0x8004ED40: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
    // 0x8004ED44: lw          $t6, 0x2C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X2C);
    // 0x8004ED48: nop

    // 0x8004ED4C: sw          $t6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r14;
    // 0x8004ED50: lwc1        $f6, 0x30($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X30);
    // 0x8004ED54: nop

    // 0x8004ED58: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x8004ED5C: lwc1        $f8, 0x34($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8004ED60: nop

    // 0x8004ED64: swc1        $f8, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f8.u32l;
    // 0x8004ED68: lwc1        $f10, 0x38($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X38);
    // 0x8004ED6C: nop

    // 0x8004ED70: swc1        $f10, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f10.u32l;
    // 0x8004ED74: lwc1        $f4, 0x3C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X3C);
    // 0x8004ED78: nop

    // 0x8004ED7C: swc1        $f4, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f4.u32l;
    // 0x8004ED80: lwc1        $f6, 0x40($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X40);
    // 0x8004ED84: nop

    // 0x8004ED88: swc1        $f6, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f6.u32l;
    // 0x8004ED8C: lwc1        $f8, 0x44($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X44);
    // 0x8004ED90: nop

    // 0x8004ED94: swc1        $f8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f8.u32l;
    // 0x8004ED98: lw          $t7, 0x4C($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4C);
    // 0x8004ED9C: nop

    // 0x8004EDA0: sw          $t7, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r15;
    // 0x8004EDA4: lw          $t8, 0x50($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X50);
    // 0x8004EDA8: jr          $ra
    // 0x8004EDAC: sw          $t8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r24;
    return;
    // 0x8004EDAC: sw          $t8, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_8004EDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004EDB0: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8004EDB4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004EDB8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8004EDBC: lw          $a3, 0xB8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB8);
    // 0x8004EDC0: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x8004EDC4: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x8004EDC8: jal         0x8004C26C
    // 0x8004EDCC: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    func_8004C26C(rdram, ctx);
        goto after_0;
    // 0x8004EDCC: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    after_0:
    // 0x8004EDD0: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x8004EDD4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8004EDD8: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x8004EDDC: nop

    // 0x8004EDE0: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x8004EDE4: beq         $t8, $zero, L_8004EDFC
    if (ctx->r24 == 0) {
        // 0x8004EDE8: nop
    
            goto L_8004EDFC;
    }
    // 0x8004EDE8: nop

    // 0x8004EDEC: jal         0x8004C26C
    // 0x8004EDF0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_8004C26C(rdram, ctx);
        goto after_1;
    // 0x8004EDF0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x8004EDF4: lw          $a3, 0xC0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC0);
    // 0x8004EDF8: nop

L_8004EDFC:
    // 0x8004EDFC: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x8004EE00: lw          $v0, 0x20($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X20);
    // 0x8004EE04: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x8004EE08: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8004EE0C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8004EE10: blez        $t9, L_8004EFAC
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8004EE14: addu        $t6, $t6, $a2
        ctx->r14 = ADD32(ctx->r14, ctx->r6);
            goto L_8004EFAC;
    }
    // 0x8004EE14: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x8004EE18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004EE1C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004EE20: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8004EE24: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8004EE28: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8004EE2C: addiu       $fp, $sp, 0x80
    ctx->r30 = ADD32(ctx->r29, 0X80);
    // 0x8004EE30: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x8004EE34: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
L_8004EE38:
    // 0x8004EE38: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8004EE3C: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8004EE40: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8004EE44: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8004EE48: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8004EE4C: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x8004EE50: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8004EE54: lw          $a1, 0x10($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X10);
    // 0x8004EE58: lw          $a0, 0x30($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X30);
    // 0x8004EE5C: jal         0x8004C1C4
    // 0x8004EE60: nop

    func_8004C1C4(rdram, ctx);
        goto after_2;
    // 0x8004EE60: nop

    after_2:
    // 0x8004EE64: beq         $v0, $zero, L_8004EF78
    if (ctx->r2 == 0) {
        // 0x8004EE68: lw          $t7, 0xA4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XA4);
            goto L_8004EF78;
    }
    // 0x8004EE68: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8004EE6C: lw          $t2, 0xC0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC0);
    // 0x8004EE70: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x8004EE74: jal         0x8004C020
    // 0x8004EE78: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_8004C020(rdram, ctx);
        goto after_3;
    // 0x8004EE78: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_3:
    // 0x8004EE7C: lw          $t9, 0xC0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC0);
    // 0x8004EE80: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8004EE84: lw          $t6, 0x20($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X20);
    // 0x8004EE88: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x8004EE8C: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8004EE90: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x8004EE94: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8004EE98: lw          $s7, 0x0($t9)
    ctx->r23 = MEM_W(ctx->r25, 0X0);
    // 0x8004EE9C: jal         0x8004D608
    // 0x8004EEA0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8004D608(rdram, ctx);
        goto after_4;
    // 0x8004EEA0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_4:
    // 0x8004EEA4: bltz        $v0, L_8004EF74
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004EEA8: sw          $v0, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r2;
            goto L_8004EF74;
    }
    // 0x8004EEA8: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x8004EEAC: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x8004EEB0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8004EEB4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8004EEB8: jal         0x8004D4B4
    // 0x8004EEBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004D4B4(rdram, ctx);
        goto after_5;
    // 0x8004EEBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x8004EEC0: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x8004EEC4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x8004EEC8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8004EECC: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x8004EED0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8004EED4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8004EED8: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004EEDC: addiu       $a0, $sp, 0xAC
    ctx->r4 = ADD32(ctx->r29, 0XAC);
    // 0x8004EEE0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8004EEE4: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8004EEE8: bc1f        L_8004EEF4
    if (!c1cs) {
        // 0x8004EEEC: or          $a2, $s7, $zero
        ctx->r6 = ctx->r23 | 0;
            goto L_8004EEF4;
    }
    // 0x8004EEEC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x8004EEF0: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_8004EEF4:
    // 0x8004EEF4: andi        $t9, $a3, 0x2
    ctx->r25 = ctx->r7 & 0X2;
    // 0x8004EEF8: beq         $t9, $zero, L_8004EF78
    if (ctx->r25 == 0) {
        // 0x8004EEFC: lw          $t7, 0xA4($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XA4);
            goto L_8004EF78;
    }
    // 0x8004EEFC: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8004EF00: jal         0x8004D42C
    // 0x8004EF04: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_8004D42C(rdram, ctx);
        goto after_6;
    // 0x8004EF04: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_6:
    // 0x8004EF08: or          $s4, $fp, $zero
    ctx->r20 = ctx->r30 | 0;
    // 0x8004EF0C: jal         0x8004D0E0
    // 0x8004EF10: or          $s6, $s7, $zero
    ctx->r22 = ctx->r23 | 0;
    func_8004D0E0(rdram, ctx);
        goto after_7;
    // 0x8004EF10: or          $s6, $s7, $zero
    ctx->r22 = ctx->r23 | 0;
    after_7:
    // 0x8004EF14: blez        $v0, L_8004EF74
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004EF18: addiu       $s5, $sp, 0x74
        ctx->r21 = ADD32(ctx->r29, 0X74);
            goto L_8004EF74;
    }
    // 0x8004EF18: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x8004EF1C: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x8004EF20: swc1        $f24, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f24.u32l;
    // 0x8004EF24: lw          $t6, 0x20($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X20);
    // 0x8004EF28: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8004EF2C: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8004EF30: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004EF34: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8004EF38: lw          $s1, 0x0($t9)
    ctx->r17 = MEM_W(ctx->r25, 0X0);
    // 0x8004EF3C: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8004EF40: lw          $a3, 0xBC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XBC);
    // 0x8004EF44: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x8004EF48: addiu       $t0, $sp, 0x60
    ctx->r8 = ADD32(ctx->r29, 0X60);
    // 0x8004EF4C: addiu       $t1, $sp, 0x68
    ctx->r9 = ADD32(ctx->r29, 0X68);
    // 0x8004EF50: addiu       $t2, $sp, 0x6C
    ctx->r10 = ADD32(ctx->r29, 0X6C);
    // 0x8004EF54: or          $t3, $s5, $zero
    ctx->r11 = ctx->r21 | 0;
    // 0x8004EF58: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8004EF5C: or          $s2, $fp, $zero
    ctx->r18 = ctx->r30 | 0;
    // 0x8004EF60: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x8004EF64: addiu       $t5, $v0, 0x4
    ctx->r13 = ADD32(ctx->r2, 0X4);
    // 0x8004EF68: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    // 0x8004EF6C: jal         0x8004CC94
    // 0x8004EF70: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    func_8004CC94(rdram, ctx);
        goto after_8;
    // 0x8004EF70: addiu       $s1, $s1, 0x30
    ctx->r17 = ADD32(ctx->r17, 0X30);
    after_8:
L_8004EF74:
    // 0x8004EF74: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
L_8004EF78:
    // 0x8004EF78: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8004EF7C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8004EF80: lw          $t7, 0xC0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC0);
    // 0x8004EF84: addiu       $t6, $t9, 0x4
    ctx->r14 = ADD32(ctx->r25, 0X4);
    // 0x8004EF88: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x8004EF8C: sw          $t8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r24;
    // 0x8004EF90: lw          $v0, 0x20($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X20);
    // 0x8004EF94: nop

    // 0x8004EF98: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8004EF9C: nop

    // 0x8004EFA0: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8004EFA4: bne         $at, $zero, L_8004EE38
    if (ctx->r1 != 0) {
        // 0x8004EFA8: lw          $t7, 0xB8($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XB8);
            goto L_8004EE38;
    }
    // 0x8004EFA8: lw          $t7, 0xB8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB8);
L_8004EFAC:
    // 0x8004EFAC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004EFB0: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x8004EFB4: jr          $ra
    // 0x8004EFB8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8004EFB8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_8004EFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004EFBC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8004EFC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004EFC4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8004EFC8: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x8004EFCC: jal         0x8004DD00
    // 0x8004EFD0: addiu       $a0, $a0, -0x2E38
    ctx->r4 = ADD32(ctx->r4, -0X2E38);
    func_8004DD00(rdram, ctx);
        goto after_0;
    // 0x8004EFD0: addiu       $a0, $a0, -0x2E38
    ctx->r4 = ADD32(ctx->r4, -0X2E38);
    after_0:
    // 0x8004EFD4: jal         0x8004DCB8
    // 0x8004EFD8: nop

    func_8004DCB8(rdram, ctx);
        goto after_1;
    // 0x8004EFD8: nop

    after_1:
    // 0x8004EFDC: lw          $t6, 0x1C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X1C);
    // 0x8004EFE0: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8004EFE4: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8004EFE8: sll         $t7, $s5, 2
    ctx->r15 = S32(ctx->r21 << 2);
    // 0x8004EFEC: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8004EFF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004EFF4: addu        $t7, $t7, $s5
    ctx->r15 = ADD32(ctx->r15, ctx->r21);
    // 0x8004EFF8: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x8004EFFC: swc1        $f4, -0x2E40($at)
    MEM_W(-0X2E40, ctx->r1) = ctx->f4.u32l;
    // 0x8004F000: sll         $s5, $t7, 2
    ctx->r21 = S32(ctx->r15 << 2);
    // 0x8004F004: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x8004F008: addiu       $s3, $s2, 0xC
    ctx->r19 = ADD32(ctx->r18, 0XC);
L_8004F00C:
    // 0x8004F00C: lw          $t8, 0x1C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X1C);
    // 0x8004F010: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8004F014: addiu       $s0, $s0, -0x2E38
    ctx->r16 = ADD32(ctx->r16, -0X2E38);
    // 0x8004F018: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8004F01C: addiu       $a3, $sp, 0x64
    ctx->r7 = ADD32(ctx->r29, 0X64);
    // 0x8004F020: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004F024: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8004F028: jal         0x8004DA58
    // 0x8004F02C: addu        $a2, $t8, $s5
    ctx->r6 = ADD32(ctx->r24, ctx->r21);
    func_8004DA58(rdram, ctx);
        goto after_2;
    // 0x8004F02C: addu        $a2, $t8, $s5
    ctx->r6 = ADD32(ctx->r24, ctx->r21);
    after_2:
    // 0x8004F030: bltz        $v0, L_8004F08C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004F034: lui         $t6, 0x800D
        ctx->r14 = S32(0X800D << 16);
            goto L_8004F08C;
    }
    // 0x8004F034: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004F038: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8004F03C: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x8004F040: addiu       $t6, $t6, -0x5AA8
    ctx->r14 = ADD32(ctx->r14, -0X5AA8);
    // 0x8004F044: sw          $t6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r14;
    // 0x8004F048: sw          $s2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r18;
    // 0x8004F04C: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x8004F050: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8004F054: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8004F058: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x8004F05C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8004F060: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8004F064: jal         0x8004EDB0
    // 0x8004F068: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    func_8004EDB0(rdram, ctx);
        goto after_3;
    // 0x8004F068: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    after_3:
    // 0x8004F06C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x8004F070: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x8004F074: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x8004F078: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8004F07C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8004F080: bgez        $s4, L_8004F090
    if (SIGNED(ctx->r20) >= 0) {
        // 0x8004F084: lw          $t8, 0x64($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X64);
            goto L_8004F090;
    }
    // 0x8004F084: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8004F088: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_8004F08C:
    // 0x8004F08C: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
L_8004F090:
    // 0x8004F090: nop

    // 0x8004F094: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8004F098: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x8004F09C: bne         $at, $zero, L_8004F00C
    if (ctx->r1 != 0) {
        // 0x8004F0A0: sw          $t9, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r25;
            goto L_8004F00C;
    }
    // 0x8004F0A0: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x8004F0A4: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004F0A8: lw          $a1, 0x1B00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1B00);
    // 0x8004F0AC: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x8004F0B0: blez        $a1, L_8004F270
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8004F0B4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8004F270;
    }
    // 0x8004F0B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8004F0B8:
    // 0x8004F0B8: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x8004F0BC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8004F0C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004F0C4: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8004F0C8: lw          $a0, -0x61E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X61E8);
    // 0x8004F0CC: nop

    // 0x8004F0D0: beq         $s2, $a0, L_8004F258
    if (ctx->r18 == ctx->r4) {
        // 0x8004F0D4: lw          $t7, 0x64($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X64);
            goto L_8004F258;
    }
    // 0x8004F0D4: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8004F0D8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8004F0DC: nop

    // 0x8004F0E0: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8004F0E4: bne         $t8, $zero, L_8004F254
    if (ctx->r24 != 0) {
        // 0x8004F0E8: andi        $t9, $v0, 0x400
        ctx->r25 = ctx->r2 & 0X400;
            goto L_8004F254;
    }
    // 0x8004F0E8: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x8004F0EC: bne         $t9, $zero, L_8004F254
    if (ctx->r25 != 0) {
        // 0x8004F0F0: andi        $t6, $v0, 0x2
        ctx->r14 = ctx->r2 & 0X2;
            goto L_8004F254;
    }
    // 0x8004F0F0: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x8004F0F4: beq         $t6, $zero, L_8004F248
    if (ctx->r14 == 0) {
        // 0x8004F0F8: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_8004F248;
    }
    // 0x8004F0F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004F0FC: lw          $t7, 0x1C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X1C);
    // 0x8004F100: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8004F104: addu        $t8, $t7, $s5
    ctx->r24 = ADD32(ctx->r15, ctx->r21);
    // 0x8004F108: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8004F10C: bne         $v1, $at, L_8004F11C
    if (ctx->r3 != ctx->r1) {
        // 0x8004F110: nop
    
            goto L_8004F11C;
    }
    // 0x8004F110: nop

    // 0x8004F114: b           L_8004F1F8
    // 0x8004F118: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8004F1F8;
    // 0x8004F118: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004F11C:
    // 0x8004F11C: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8004F120: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8004F124: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8004F128: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8004F12C: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x8004F130: nop

    // 0x8004F134: bc1f        L_8004F144
    if (!c1cs) {
        // 0x8004F138: nop
    
            goto L_8004F144;
    }
    // 0x8004F138: nop

    // 0x8004F13C: b           L_8004F1F8
    // 0x8004F140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F1F8;
    // 0x8004F140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F144:
    // 0x8004F144: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004F148: nop

    // 0x8004F14C: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8004F150: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8004F154: nop

    // 0x8004F158: bc1f        L_8004F168
    if (!c1cs) {
        // 0x8004F15C: nop
    
            goto L_8004F168;
    }
    // 0x8004F15C: nop

    // 0x8004F160: b           L_8004F1F8
    // 0x8004F164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F1F8;
    // 0x8004F164: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F168:
    // 0x8004F168: lwc1        $f6, 0x14($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8004F16C: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8004F170: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8004F174: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x8004F178: nop

    // 0x8004F17C: bc1f        L_8004F18C
    if (!c1cs) {
        // 0x8004F180: nop
    
            goto L_8004F18C;
    }
    // 0x8004F180: nop

    // 0x8004F184: b           L_8004F1F8
    // 0x8004F188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F1F8;
    // 0x8004F188: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F18C:
    // 0x8004F18C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004F190: nop

    // 0x8004F194: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8004F198: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8004F19C: nop

    // 0x8004F1A0: bc1f        L_8004F1B0
    if (!c1cs) {
        // 0x8004F1A4: nop
    
            goto L_8004F1B0;
    }
    // 0x8004F1A4: nop

    // 0x8004F1A8: b           L_8004F1F8
    // 0x8004F1AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F1F8;
    // 0x8004F1AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F1B0:
    // 0x8004F1B0: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8004F1B4: lwc1        $f2, 0x4($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8004F1B8: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8004F1BC: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x8004F1C0: nop

    // 0x8004F1C4: bc1f        L_8004F1D4
    if (!c1cs) {
        // 0x8004F1C8: nop
    
            goto L_8004F1D4;
    }
    // 0x8004F1C8: nop

    // 0x8004F1CC: b           L_8004F1F8
    // 0x8004F1D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F1F8;
    // 0x8004F1D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F1D4:
    // 0x8004F1D4: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004F1D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004F1DC: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8004F1E0: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8004F1E4: nop

    // 0x8004F1E8: bc1f        L_8004F1F8
    if (!c1cs) {
        // 0x8004F1EC: nop
    
            goto L_8004F1F8;
    }
    // 0x8004F1EC: nop

    // 0x8004F1F0: b           L_8004F1F8
    // 0x8004F1F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004F1F8;
    // 0x8004F1F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004F1F8:
    // 0x8004F1F8: bgtz        $v0, L_8004F258
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004F1FC: lw          $t7, 0x64($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X64);
            goto L_8004F258;
    }
    // 0x8004F1FC: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8004F200: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8004F204: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x8004F208: sw          $s2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r18;
    // 0x8004F20C: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x8004F210: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x8004F214: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8004F218: sw          $s4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r20;
    // 0x8004F21C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8004F220: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8004F224: jal         0x8004EDB0
    // 0x8004F228: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    func_8004EDB0(rdram, ctx);
        goto after_4;
    // 0x8004F228: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    after_4:
    // 0x8004F22C: lw          $s4, 0x5C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X5C);
    // 0x8004F230: lw          $s1, 0x70($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X70);
    // 0x8004F234: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x8004F238: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8004F23C: bgez        $s4, L_8004F248
    if (SIGNED(ctx->r20) >= 0) {
        // 0x8004F240: nop
    
            goto L_8004F248;
    }
    // 0x8004F240: nop

    // 0x8004F244: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
L_8004F248:
    // 0x8004F248: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004F24C: lw          $a1, 0x1B00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1B00);
    // 0x8004F250: nop

L_8004F254:
    // 0x8004F254: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
L_8004F258:
    // 0x8004F258: nop

    // 0x8004F25C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8004F260: slt         $at, $t8, $a1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004F264: bne         $at, $zero, L_8004F0B8
    if (ctx->r1 != 0) {
        // 0x8004F268: sw          $t8, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r24;
            goto L_8004F0B8;
    }
    // 0x8004F268: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x8004F26C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8004F270:
    // 0x8004F270: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8004F274: jr          $ra
    // 0x8004F278: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    return;
    // 0x8004F278: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
;}
RECOMP_FUNC void func_8004F27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F27C: jr          $ra
    // 0x8004F280: nop

    return;
    // 0x8004F280: nop

;}
RECOMP_FUNC void func_8004F284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F284: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8004F288: addiu       $v0, $v0, -0x5A18
    ctx->r2 = ADD32(ctx->r2, -0X5A18);
    // 0x8004F28C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8004F290: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x8004F294: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004F298: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8004F29C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8004F2A0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8004F2A4: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8004F2A8: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8004F2AC: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x8004F2B0: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x8004F2B4: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x8004F2B8: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x8004F2BC: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x8004F2C0: jr          $ra
    // 0x8004F2C4: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x8004F2C4: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_8004F2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004F2C8: addiu       $sp, $sp, -0x3F0
    ctx->r29 = ADD32(ctx->r29, -0X3F0);
    // 0x8004F2CC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8004F2D0: addiu       $v0, $v0, 0x1B20
    ctx->r2 = ADD32(ctx->r2, 0X1B20);
    // 0x8004F2D4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8004F2D8: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8004F2DC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8004F2E0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8004F2E4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8004F2E8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8004F2EC: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x8004F2F0: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8004F2F4: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8004F2F8: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8004F2FC: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8004F300: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8004F304: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8004F308: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8004F30C: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8004F310: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x8004F314: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8004F318: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x8004F31C: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8004F320: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x8004F324: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8004F328: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x8004F32C: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8004F330: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8004F334: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8004F338: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8004F33C: sw          $a1, 0x3F4($sp)
    MEM_W(0X3F4, ctx->r29) = ctx->r5;
    // 0x8004F340: sw          $t8, 0x358($sp)
    MEM_W(0X358, ctx->r29) = ctx->r24;
    // 0x8004F344: sw          $zero, 0x340($sp)
    MEM_W(0X340, ctx->r29) = 0;
    // 0x8004F348: jal         0x8004F284
    // 0x8004F34C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_8004F284(rdram, ctx);
        goto after_0;
    // 0x8004F34C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_0:
    // 0x8004F350: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8004F354: lw          $t9, 0x1B10($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1B10);
    // 0x8004F358: nop

    // 0x8004F35C: andi        $t8, $t9, 0x1
    ctx->r24 = ctx->r25 & 0X1;
    // 0x8004F360: beq         $t8, $zero, L_8004F41C
    if (ctx->r24 == 0) {
        // 0x8004F364: nop
    
            goto L_8004F41C;
    }
    // 0x8004F364: nop

    // 0x8004F368: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8004F36C: lwc1        $f6, 0xC($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8004F370: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004F374: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8004F378: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8004F37C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004F380: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8004F384: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8004F388: lwc1        $f10, 0x10($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8004F38C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004F390: nop

    // 0x8004F394: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004F398: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x8004F39C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8004F3A0: lwc1        $f8, 0x14($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X14);
    // 0x8004F3A4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004F3A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004F3AC: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8004F3B0: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x8004F3B4: swc1        $f0, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f0.u32l;
    // 0x8004F3B8: swc1        $f0, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f0.u32l;
    // 0x8004F3BC: jal         0x8004F284
    // 0x8004F3C0: swc1        $f6, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f6.u32l;
    func_8004F284(rdram, ctx);
        goto after_1;
    // 0x8004F3C0: swc1        $f6, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f6.u32l;
    after_1:
    // 0x8004F3C4: lw          $t6, 0x4($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X4);
    // 0x8004F3C8: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x8004F3CC: addiu       $a0, $s3, -0x5A18
    ctx->r4 = ADD32(ctx->r19, -0X5A18);
    // 0x8004F3D0: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8004F3D4: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x8004F3D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F3DC: lw          $t9, 0x10($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X10);
    // 0x8004F3E0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8004F3E4: sw          $t9, -0x5A14($at)
    MEM_W(-0X5A14, ctx->r1) = ctx->r25;
    // 0x8004F3E8: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x8004F3EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004F3F0: addiu       $t6, $s4, 0xC
    ctx->r14 = ADD32(ctx->r20, 0XC);
    // 0x8004F3F4: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x8004F3F8: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8004F3FC: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x8004F400: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004F404: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x8004F408: lwc1        $f8, -0x5A6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A6C);
    // 0x8004F40C: jal         0x8004AF68
    // 0x8004F410: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    func_8004AF68(rdram, ctx);
        goto after_2;
    // 0x8004F410: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    after_2:
    // 0x8004F414: b           L_8005077C
    // 0x8004F418: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
        goto L_8005077C;
    // 0x8004F418: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_8004F41C:
    // 0x8004F41C: lw          $t7, 0x8($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X8);
    // 0x8004F420: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8004F424: andi        $t9, $t7, 0x400
    ctx->r25 = ctx->r15 & 0X400;
    // 0x8004F428: bne         $t9, $zero, L_80050604
    if (ctx->r25 != 0) {
        // 0x8004F42C: addiu       $t0, $t0, -0x5A78
        ctx->r8 = ADD32(ctx->r8, -0X5A78);
            goto L_80050604;
    }
    // 0x8004F42C: addiu       $t0, $t0, -0x5A78
    ctx->r8 = ADD32(ctx->r8, -0X5A78);
    // 0x8004F430: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8004F434: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x8004F438: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8004F43C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004F440: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8004F444: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8004F448: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8004F44C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8004F450: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x8004F454: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x8004F458: sw          $t6, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r14;
    // 0x8004F45C: sw          $t7, 0x58($t0)
    MEM_W(0X58, ctx->r8) = ctx->r15;
    // 0x8004F460: swc1        $f2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f2.u32l;
    // 0x8004F464: swc1        $f2, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f2.u32l;
    // 0x8004F468: swc1        $f2, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f2.u32l;
    // 0x8004F46C: swc1        $f2, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f2.u32l;
    // 0x8004F470: swc1        $f2, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f2.u32l;
    // 0x8004F474: swc1        $f2, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f2.u32l;
    // 0x8004F478: swc1        $f2, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f2.u32l;
    // 0x8004F47C: swc1        $f2, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f2.u32l;
    // 0x8004F480: swc1        $f2, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f2.u32l;
    // 0x8004F484: swc1        $f2, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->f2.u32l;
    // 0x8004F488: swc1        $f2, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->f2.u32l;
    // 0x8004F48C: swc1        $f2, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->f2.u32l;
    // 0x8004F490: swc1        $f2, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f2.u32l;
    // 0x8004F494: swc1        $f2, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f2.u32l;
    // 0x8004F498: swc1        $f2, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f2.u32l;
    // 0x8004F49C: swc1        $f2, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = ctx->f2.u32l;
    // 0x8004F4A0: swc1        $f26, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f26.u32l;
    // 0x8004F4A4: swc1        $f10, 0x48($t0)
    MEM_W(0X48, ctx->r8) = ctx->f10.u32l;
    // 0x8004F4A8: lwc1        $f0, 0xC($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8004F4AC: nop

    // 0x8004F4B0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8004F4B4: nop

    // 0x8004F4B8: bc1f        L_8004F504
    if (!c1cs) {
        // 0x8004F4BC: nop
    
            goto L_8004F504;
    }
    // 0x8004F4BC: nop

    // 0x8004F4C0: lwc1        $f6, 0x10($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8004F4C4: nop

    // 0x8004F4C8: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x8004F4CC: nop

    // 0x8004F4D0: bc1f        L_8004F504
    if (!c1cs) {
        // 0x8004F4D4: nop
    
            goto L_8004F504;
    }
    // 0x8004F4D4: nop

    // 0x8004F4D8: lwc1        $f4, 0x14($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X14);
    // 0x8004F4DC: nop

    // 0x8004F4E0: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x8004F4E4: nop

    // 0x8004F4E8: bc1f        L_8004F504
    if (!c1cs) {
        // 0x8004F4EC: nop
    
            goto L_8004F504;
    }
    // 0x8004F4EC: nop

    // 0x8004F4F0: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8004F4F4: nop

    // 0x8004F4F8: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x8004F4FC: bne         $t9, $zero, L_8004FCE4
    if (ctx->r25 != 0) {
        // 0x8004F500: lui         $at, 0xC000
        ctx->r1 = S32(0XC000 << 16);
            goto L_8004FCE4;
    }
    // 0x8004F500: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
L_8004F504:
    // 0x8004F504: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8004F508: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8004F50C: bc1f        L_8004F544
    if (!c1cs) {
        // 0x8004F510: nop
    
            goto L_8004F544;
    }
    // 0x8004F510: nop

    // 0x8004F514: lwc1        $f8, 0x10($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8004F518: nop

    // 0x8004F51C: c.eq.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl == ctx->f8.fl;
    // 0x8004F520: nop

    // 0x8004F524: bc1f        L_8004F544
    if (!c1cs) {
        // 0x8004F528: nop
    
            goto L_8004F544;
    }
    // 0x8004F528: nop

    // 0x8004F52C: lwc1        $f10, 0x14($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X14);
    // 0x8004F530: nop

    // 0x8004F534: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x8004F538: nop

    // 0x8004F53C: bc1t        L_8004F900
    if (c1cs) {
        // 0x8004F540: lui         $at, 0xC000
        ctx->r1 = S32(0XC000 << 16);
            goto L_8004F900;
    }
    // 0x8004F540: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
L_8004F544:
    // 0x8004F544: jal         0x8004DF9C
    // 0x8004F548: addiu       $a0, $a0, -0x5FE8
    ctx->r4 = ADD32(ctx->r4, -0X5FE8);
    func_8004DF9C(rdram, ctx);
        goto after_3;
    // 0x8004F548: addiu       $a0, $a0, -0x5FE8
    ctx->r4 = ADD32(ctx->r4, -0X5FE8);
    after_3:
    // 0x8004F54C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8004F550: addiu       $a1, $a1, -0x5FE8
    ctx->r5 = ADD32(ctx->r5, -0X5FE8);
    // 0x8004F554: jal         0x8004ECD8
    // 0x8004F558: addiu       $a0, $sp, 0x36C
    ctx->r4 = ADD32(ctx->r29, 0X36C);
    func_8004ECD8(rdram, ctx);
        goto after_4;
    // 0x8004F558: addiu       $a0, $sp, 0x36C
    ctx->r4 = ADD32(ctx->r29, 0X36C);
    after_4:
    // 0x8004F55C: lw          $t8, 0x18($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X18);
    // 0x8004F560: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8004F564: blez        $t8, L_8004F60C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8004F568: or          $t1, $zero, $zero
        ctx->r9 = 0 | 0;
            goto L_8004F60C;
    }
    // 0x8004F568: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x8004F56C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
L_8004F570:
    // 0x8004F570: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8004F574: jal         0x8004C26C
    // 0x8004F578: addiu       $a0, $sp, 0x3D8
    ctx->r4 = ADD32(ctx->r29, 0X3D8);
    func_8004C26C(rdram, ctx);
        goto after_5;
    // 0x8004F578: addiu       $a0, $sp, 0x3D8
    ctx->r4 = ADD32(ctx->r29, 0X3D8);
    after_5:
    // 0x8004F57C: lwc1        $f6, 0xC($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8004F580: lwc1        $f4, 0x3D8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3D8);
    // 0x8004F584: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8004F588: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8004F58C: lwc1        $f6, 0x3DC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3DC);
    // 0x8004F590: swc1        $f8, 0x3CC($sp)
    MEM_W(0X3CC, ctx->r29) = ctx->f8.u32l;
    // 0x8004F594: lwc1        $f10, 0x10($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8004F598: addiu       $t7, $t7, -0x5FE8
    ctx->r15 = ADD32(ctx->r15, -0X5FE8);
    // 0x8004F59C: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8004F5A0: lwc1        $f10, 0x3E0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3E0);
    // 0x8004F5A4: swc1        $f4, 0x3D0($sp)
    MEM_W(0X3D0, ctx->r29) = ctx->f4.u32l;
    // 0x8004F5A8: lwc1        $f8, 0x14($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X14);
    // 0x8004F5AC: addiu       $t6, $sp, 0x3CC
    ctx->r14 = ADD32(ctx->r29, 0X3CC);
    // 0x8004F5B0: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8004F5B4: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x8004F5B8: swc1        $f6, 0x3D4($sp)
    MEM_W(0X3D4, ctx->r29) = ctx->f6.u32l;
    // 0x8004F5BC: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    // 0x8004F5C0: sw          $t2, 0x360($sp)
    MEM_W(0X360, ctx->r29) = ctx->r10;
    // 0x8004F5C4: sw          $t1, 0x34C($sp)
    MEM_W(0X34C, ctx->r29) = ctx->r9;
    // 0x8004F5C8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8004F5CC: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x8004F5D0: jal         0x8004E3E4
    // 0x8004F5D4: addiu       $s1, $sp, 0x3D8
    ctx->r17 = ADD32(ctx->r29, 0X3D8);
    func_8004E3E4(rdram, ctx);
        goto after_6;
    // 0x8004F5D4: addiu       $s1, $sp, 0x3D8
    ctx->r17 = ADD32(ctx->r29, 0X3D8);
    after_6:
    // 0x8004F5D8: lw          $t2, 0x360($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X360);
    // 0x8004F5DC: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x8004F5E0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8004F5E4: lw          $t1, 0x34C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34C);
    // 0x8004F5E8: lw          $s4, 0x3F0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3F0);
    // 0x8004F5EC: bgez        $t2, L_8004F5F8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8004F5F0: nop
    
            goto L_8004F5F8;
    }
    // 0x8004F5F0: nop

    // 0x8004F5F4: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
L_8004F5F8:
    // 0x8004F5F8: lw          $t9, 0x18($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X18);
    // 0x8004F5FC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8004F600: slt         $at, $t1, $t9
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8004F604: bne         $at, $zero, L_8004F570
    if (ctx->r1 != 0) {
        // 0x8004F608: or          $a3, $s4, $zero
        ctx->r7 = ctx->r20 | 0;
            goto L_8004F570;
    }
    // 0x8004F608: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
L_8004F60C:
    // 0x8004F60C: blez        $t2, L_8004F860
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8004F610: lui         $s0, 0x800D
        ctx->r16 = S32(0X800D << 16);
            goto L_8004F860;
    }
    // 0x8004F610: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x8004F614: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8004F618: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x8004F61C: lw          $s0, -0x5F98($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5F98);
    // 0x8004F620: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8004F624: addiu       $s3, $s3, -0x5A18
    ctx->r19 = ADD32(ctx->r19, -0X5A18);
    // 0x8004F628: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
L_8004F62C:
    // 0x8004F62C: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8004F630: lw          $t8, 0x1C($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X1C);
    // 0x8004F634: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F638: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8004F63C: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8004F640: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    // 0x8004F644: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8004F648: addiu       $s1, $s0, 0x3C
    ctx->r17 = ADD32(ctx->r16, 0X3C);
    // 0x8004F64C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8004F650: mflo        $t7
    ctx->r15 = lo;
    // 0x8004F654: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8004F658: lw          $v1, 0x10($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X10);
    // 0x8004F65C: swc1        $f26, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f26.u32l;
    // 0x8004F660: sw          $s1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r17;
    // 0x8004F664: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8004F668: sw          $a1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r5;
    // 0x8004F66C: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    // 0x8004F670: swc1        $f0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f0.u32l;
    // 0x8004F674: jal         0x8004AF68
    // 0x8004F678: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    func_8004AF68(rdram, ctx);
        goto after_7;
    // 0x8004F678: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    after_7:
    // 0x8004F67C: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8004F680: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004F684: beq         $a3, $at, L_8004F6D0
    if (ctx->r7 == ctx->r1) {
        // 0x8004F688: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8004F6D0;
    }
    // 0x8004F688: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8004F68C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8004F690: lw          $t6, 0x1C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X1C);
    // 0x8004F694: multu       $t8, $s5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F698: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8004F69C: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x8004F6A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8004F6A4: mflo        $t7
    ctx->r15 = lo;
    // 0x8004F6A8: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x8004F6AC: lw          $a2, 0x10($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X10);
    // 0x8004F6B0: swc1        $f26, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f26.u32l;
    // 0x8004F6B4: swc1        $f28, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f28.u32l;
    // 0x8004F6B8: sw          $s1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r17;
    // 0x8004F6BC: sw          $a3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r7;
    // 0x8004F6C0: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    // 0x8004F6C4: sw          $a1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r5;
    // 0x8004F6C8: jal         0x8004AF68
    // 0x8004F6CC: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    func_8004AF68(rdram, ctx);
        goto after_8;
    // 0x8004F6CC: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    after_8:
L_8004F6D0:
    // 0x8004F6D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004F6D4: beq         $s2, $at, L_8004F6E0
    if (ctx->r18 == ctx->r1) {
        // 0x8004F6D8: addiu       $t1, $zero, 0x2
        ctx->r9 = ADD32(0, 0X2);
            goto L_8004F6E0;
    }
    // 0x8004F6D8: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8004F6DC: bne         $s2, $t1, L_8004F7C4
    if (ctx->r18 != ctx->r9) {
        // 0x8004F6E0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8004F7C4;
    }
L_8004F6E0:
    // 0x8004F6E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8004F6E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004F6E8: lwc1        $f2, 0x8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8004F6EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004F6F0: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x8004F6F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8004F6F8: bc1f        L_8004F710
    if (!c1cs) {
        // 0x8004F6FC: addiu       $a0, $sp, 0x36C
        ctx->r4 = ADD32(ctx->r29, 0X36C);
            goto L_8004F710;
    }
    // 0x8004F6FC: addiu       $a0, $sp, 0x36C
    ctx->r4 = ADD32(ctx->r29, 0X36C);
    // 0x8004F700: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8004F704: lwc1        $f0, 0x5DFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5DFC);
    // 0x8004F708: b           L_8004F720
    // 0x8004F70C: nop

        goto L_8004F720;
    // 0x8004F70C: nop

L_8004F710:
    // 0x8004F710: lwc1        $f8, 0x5E00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5E00);
    // 0x8004F714: nop

    // 0x8004F718: mul.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8004F71C: nop

L_8004F720:
    // 0x8004F720: jal         0x8004ECD8
    // 0x8004F724: swc1        $f0, 0x364($sp)
    MEM_W(0X364, ctx->r29) = ctx->f0.u32l;
    func_8004ECD8(rdram, ctx);
        goto after_9;
    // 0x8004F724: swc1        $f0, 0x364($sp)
    MEM_W(0X364, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x8004F728: sw          $zero, 0x3B8($sp)
    MEM_W(0X3B8, ctx->r29) = 0;
    // 0x8004F72C: sw          $zero, 0x3BC($sp)
    MEM_W(0X3BC, ctx->r29) = 0;
    // 0x8004F730: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8004F734: lwc1        $f0, 0x364($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X364);
    // 0x8004F738: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004F73C: nop

    // 0x8004F740: swc1        $f10, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f10.u32l;
    // 0x8004F744: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004F748: lwc1        $f8, 0x3C0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C0);
    // 0x8004F74C: swc1        $f6, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f6.u32l;
    // 0x8004F750: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004F754: nop

    // 0x8004F758: swc1        $f4, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->f4.u32l;
    // 0x8004F75C: lwc1        $f10, 0xC($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8004F760: nop

    // 0x8004F764: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8004F768: lwc1        $f10, 0x3C4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C4);
    // 0x8004F76C: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8004F770: swc1        $f4, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f4.u32l;
    // 0x8004F774: lwc1        $f8, 0x10($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8004F778: nop

    // 0x8004F77C: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8004F780: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8004F784: lwc1        $f10, 0x3C8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C8);
    // 0x8004F788: swc1        $f8, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f8.u32l;
    // 0x8004F78C: lwc1        $f6, 0x14($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X14);
    // 0x8004F790: nop

    // 0x8004F794: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8004F798: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8004F79C: swc1        $f6, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->f6.u32l;
    // 0x8004F7A0: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8004F7A4: nop

    // 0x8004F7A8: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x8004F7AC: lwc1        $f10, 0x3C4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C4);
    // 0x8004F7B0: nop

    // 0x8004F7B4: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x8004F7B8: lwc1        $f8, 0x3C8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C8);
    // 0x8004F7BC: b           L_8004F8E4
    // 0x8004F7C0: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
        goto L_8004F8E4;
    // 0x8004F7C0: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
L_8004F7C4:
    // 0x8004F7C4: lw          $s0, 0x50($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X50);
    // 0x8004F7C8: nop

    // 0x8004F7CC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8004F7D0: nop

    // 0x8004F7D4: bne         $t1, $t8, L_8004F62C
    if (ctx->r9 != ctx->r24) {
        // 0x8004F7D8: nop
    
            goto L_8004F62C;
    }
    // 0x8004F7D8: nop

    // 0x8004F7DC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8004F7E0: nop

    // 0x8004F7E4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004F7E8: nop

    // 0x8004F7EC: swc1        $f6, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f6.u32l;
    // 0x8004F7F0: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004F7F4: lwc1        $f8, 0x3C0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C0);
    // 0x8004F7F8: swc1        $f4, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f4.u32l;
    // 0x8004F7FC: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004F800: nop

    // 0x8004F804: swc1        $f10, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->f10.u32l;
    // 0x8004F808: lwc1        $f6, 0xC($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8004F80C: lwc1        $f10, 0x3C4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C4);
    // 0x8004F810: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8004F814: swc1        $f4, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f4.u32l;
    // 0x8004F818: lwc1        $f8, 0x10($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8004F81C: nop

    // 0x8004F820: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8004F824: lwc1        $f10, 0x3C8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C8);
    // 0x8004F828: swc1        $f6, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f6.u32l;
    // 0x8004F82C: lwc1        $f8, 0x14($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X14);
    // 0x8004F830: nop

    // 0x8004F834: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8004F838: swc1        $f6, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->f6.u32l;
    // 0x8004F83C: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8004F840: nop

    // 0x8004F844: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x8004F848: lwc1        $f10, 0x3C4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C4);
    // 0x8004F84C: nop

    // 0x8004F850: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x8004F854: lwc1        $f8, 0x3C8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C8);
    // 0x8004F858: b           L_8004F8E4
    // 0x8004F85C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
        goto L_8004F8E4;
    // 0x8004F85C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
L_8004F860:
    // 0x8004F860: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8004F864: nop

    // 0x8004F868: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004F86C: nop

    // 0x8004F870: swc1        $f6, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f6.u32l;
    // 0x8004F874: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004F878: lwc1        $f8, 0x3C0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C0);
    // 0x8004F87C: swc1        $f4, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f4.u32l;
    // 0x8004F880: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004F884: nop

    // 0x8004F888: swc1        $f10, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->f10.u32l;
    // 0x8004F88C: lwc1        $f6, 0xC($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0XC);
    // 0x8004F890: lwc1        $f10, 0x3C4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C4);
    // 0x8004F894: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8004F898: swc1        $f4, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f4.u32l;
    // 0x8004F89C: lwc1        $f8, 0x10($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8004F8A0: nop

    // 0x8004F8A4: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8004F8A8: lwc1        $f10, 0x3C8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C8);
    // 0x8004F8AC: swc1        $f6, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f6.u32l;
    // 0x8004F8B0: lwc1        $f8, 0x14($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X14);
    // 0x8004F8B4: nop

    // 0x8004F8B8: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8004F8BC: swc1        $f6, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->f6.u32l;
    // 0x8004F8C0: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8004F8C4: nop

    // 0x8004F8C8: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x8004F8CC: lwc1        $f10, 0x3C4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C4);
    // 0x8004F8D0: nop

    // 0x8004F8D4: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x8004F8D8: lwc1        $f8, 0x3C8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C8);
    // 0x8004F8DC: nop

    // 0x8004F8E0: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
L_8004F8E4:
    // 0x8004F8E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8004F8E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8004F8EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8004F8F0: swc1        $f6, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f6.u32l;
    // 0x8004F8F4: swc1        $f4, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f4.u32l;
    // 0x8004F8F8: swc1        $f10, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f10.u32l;
    // 0x8004F8FC: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
L_8004F900:
    // 0x8004F900: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8004F904: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8004F908: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x8004F90C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004F910: addiu       $s3, $s3, -0x5A18
    ctx->r19 = ADD32(ctx->r19, -0X5A18);
    // 0x8004F914: beq         $t6, $at, L_8004FCD8
    if (ctx->r14 == ctx->r1) {
        // 0x8004F918: addiu       $s5, $zero, 0x14
        ctx->r21 = ADD32(0, 0X14);
            goto L_8004FCD8;
    }
    // 0x8004F918: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x8004F91C: sw          $zero, 0x350($sp)
    MEM_W(0X350, ctx->r29) = 0;
L_8004F920:
    // 0x8004F920: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8004F924: addiu       $a0, $a0, -0x5FE8
    ctx->r4 = ADD32(ctx->r4, -0X5FE8);
    // 0x8004F928: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8004F92C: jal         0x8004DF9C
    // 0x8004F930: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    func_8004DF9C(rdram, ctx);
        goto after_10;
    // 0x8004F930: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    after_10:
    // 0x8004F934: lw          $t7, 0x18($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X18);
    // 0x8004F938: nop

    // 0x8004F93C: blez        $t7, L_8004F9AC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8004F940: or          $a3, $s4, $zero
        ctx->r7 = ctx->r20 | 0;
            goto L_8004F9AC;
    }
    // 0x8004F940: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
L_8004F944:
    // 0x8004F944: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8004F948: jal         0x8004C26C
    // 0x8004F94C: addiu       $a0, $sp, 0x3E4
    ctx->r4 = ADD32(ctx->r29, 0X3E4);
    func_8004C26C(rdram, ctx);
        goto after_11;
    // 0x8004F94C: addiu       $a0, $sp, 0x3E4
    ctx->r4 = ADD32(ctx->r29, 0X3E4);
    after_11:
    // 0x8004F950: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8004F954: addiu       $t9, $t9, -0x5FE8
    ctx->r25 = ADD32(ctx->r25, -0X5FE8);
    // 0x8004F958: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x8004F95C: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x8004F960: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x8004F964: addiu       $s1, $sp, 0x3E4
    ctx->r17 = ADD32(ctx->r29, 0X3E4);
    // 0x8004F968: sw          $t1, 0x34C($sp)
    MEM_W(0X34C, ctx->r29) = ctx->r9;
    // 0x8004F96C: sw          $t2, 0x360($sp)
    MEM_W(0X360, ctx->r29) = ctx->r10;
    // 0x8004F970: jal         0x8004EFBC
    // 0x8004F974: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    func_8004EFBC(rdram, ctx);
        goto after_12;
    // 0x8004F974: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    after_12:
    // 0x8004F978: lw          $t2, 0x360($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X360);
    // 0x8004F97C: lw          $t1, 0x34C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34C);
    // 0x8004F980: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x8004F984: lw          $s4, 0x3F0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3F0);
    // 0x8004F988: addiu       $s3, $s3, -0x5A18
    ctx->r19 = ADD32(ctx->r19, -0X5A18);
    // 0x8004F98C: bgez        $t2, L_8004F998
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8004F990: addiu       $s5, $zero, 0x14
        ctx->r21 = ADD32(0, 0X14);
            goto L_8004F998;
    }
    // 0x8004F990: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x8004F994: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
L_8004F998:
    // 0x8004F998: lw          $t8, 0x18($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X18);
    // 0x8004F99C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8004F9A0: slt         $at, $t1, $t8
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8004F9A4: bne         $at, $zero, L_8004F944
    if (ctx->r1 != 0) {
        // 0x8004F9A8: or          $a3, $s4, $zero
        ctx->r7 = ctx->r20 | 0;
            goto L_8004F944;
    }
    // 0x8004F9A8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
L_8004F9AC:
    // 0x8004F9AC: blez        $t2, L_8004FCBC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8004F9B0: lui         $s0, 0x800D
        ctx->r16 = S32(0X800D << 16);
            goto L_8004FCBC;
    }
    // 0x8004F9B0: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x8004F9B4: lw          $s0, -0x5F98($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5F98);
    // 0x8004F9B8: nop

L_8004F9BC:
    // 0x8004F9BC: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x8004F9C0: lw          $t6, 0x1C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X1C);
    // 0x8004F9C4: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F9C8: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8004F9CC: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8004F9D0: lw          $a2, 0x2C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X2C);
    // 0x8004F9D4: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8004F9D8: addiu       $s1, $s0, 0x3C
    ctx->r17 = ADD32(ctx->r16, 0X3C);
    // 0x8004F9DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8004F9E0: mflo        $t9
    ctx->r25 = lo;
    // 0x8004F9E4: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x8004F9E8: lw          $v1, 0x10($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X10);
    // 0x8004F9EC: swc1        $f26, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f26.u32l;
    // 0x8004F9F0: sw          $s1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r17;
    // 0x8004F9F4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8004F9F8: sw          $a1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r5;
    // 0x8004F9FC: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    // 0x8004FA00: swc1        $f0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f0.u32l;
    // 0x8004FA04: jal         0x8004AF68
    // 0x8004FA08: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    func_8004AF68(rdram, ctx);
        goto after_13;
    // 0x8004FA08: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    after_13:
    // 0x8004FA0C: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8004FA10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FA14: beq         $a3, $at, L_8004FA60
    if (ctx->r7 == ctx->r1) {
        // 0x8004FA18: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8004FA60;
    }
    // 0x8004FA18: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8004FA1C: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8004FA20: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FA24: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FA28: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8004FA2C: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x8004FA30: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8004FA34: mflo        $t9
    ctx->r25 = lo;
    // 0x8004FA38: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8004FA3C: lw          $a2, 0x10($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X10);
    // 0x8004FA40: swc1        $f26, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f26.u32l;
    // 0x8004FA44: swc1        $f28, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f28.u32l;
    // 0x8004FA48: sw          $s1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r17;
    // 0x8004FA4C: sw          $a3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r7;
    // 0x8004FA50: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    // 0x8004FA54: sw          $a1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r5;
    // 0x8004FA58: jal         0x8004AF68
    // 0x8004FA5C: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    func_8004AF68(rdram, ctx);
        goto after_14;
    // 0x8004FA5C: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    after_14:
L_8004FA60:
    // 0x8004FA60: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004FA64: bne         $s2, $at, L_8004FB74
    if (ctx->r18 != ctx->r1) {
        // 0x8004FA68: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8004FB74;
    }
    // 0x8004FA68: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8004FA6C: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
    // 0x8004FA70: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8004FA74: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8004FA78: sw          $t7, 0x340($sp)
    MEM_W(0X340, ctx->r29) = ctx->r15;
    // 0x8004FA7C: sw          $t9, 0x358($sp)
    MEM_W(0X358, ctx->r29) = ctx->r25;
    // 0x8004FA80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8004FA84: jal         0x8004ECD8
    // 0x8004FA88: addiu       $a0, $sp, 0x36C
    ctx->r4 = ADD32(ctx->r29, 0X36C);
    func_8004ECD8(rdram, ctx);
        goto after_15;
    // 0x8004FA88: addiu       $a0, $sp, 0x36C
    ctx->r4 = ADD32(ctx->r29, 0X36C);
    after_15:
    // 0x8004FA8C: sw          $zero, 0x3B8($sp)
    MEM_W(0X3B8, ctx->r29) = 0;
    // 0x8004FA90: sw          $zero, 0x3BC($sp)
    MEM_W(0X3BC, ctx->r29) = 0;
    // 0x8004FA94: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8004FA98: lw          $t8, 0x1C($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FA9C: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FAA0: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x8004FAA4: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8004FAA8: mflo        $t7
    ctx->r15 = lo;
    // 0x8004FAAC: addu        $v0, $t8, $t7
    ctx->r2 = ADD32(ctx->r24, ctx->r15);
    // 0x8004FAB0: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004FAB4: nop

    // 0x8004FAB8: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8004FABC: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004FAC0: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8004FAC4: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8004FAC8: swc1        $f10, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f10.u32l;
    // 0x8004FACC: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8004FAD0: lw          $t9, 0x1C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FAD4: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FAD8: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x8004FADC: mflo        $t8
    ctx->r24 = lo;
    // 0x8004FAE0: addu        $v0, $t9, $t8
    ctx->r2 = ADD32(ctx->r25, ctx->r24);
    // 0x8004FAE4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004FAE8: nop

    // 0x8004FAEC: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8004FAF0: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8004FAF4: nop

    // 0x8004FAF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004FAFC: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004FB00: nop

    // 0x8004FB04: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8004FB08: swc1        $f6, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f6.u32l;
    // 0x8004FB0C: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8004FB10: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FB14: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FB18: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8004FB1C: mflo        $t9
    ctx->r25 = lo;
    // 0x8004FB20: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x8004FB24: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004FB28: nop

    // 0x8004FB2C: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8004FB30: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8004FB34: nop

    // 0x8004FB38: add.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x8004FB3C: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8004FB40: nop

    // 0x8004FB44: sub.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8004FB48: swc1        $f6, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->f6.u32l;
    // 0x8004FB4C: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8004FB50: nop

    // 0x8004FB54: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x8004FB58: lwc1        $f4, 0x3C4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C4);
    // 0x8004FB5C: nop

    // 0x8004FB60: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x8004FB64: lwc1        $f8, 0x3C8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C8);
    // 0x8004FB68: b           L_8004FCC4
    // 0x8004FB6C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
        goto L_8004FCC4;
    // 0x8004FB6C: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
    // 0x8004FB70: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_8004FB74:
    // 0x8004FB74: bne         $s2, $at, L_8004FC9C
    if (ctx->r18 != ctx->r1) {
        // 0x8004FB78: nop
    
            goto L_8004FC9C;
    }
    // 0x8004FB78: nop

    // 0x8004FB7C: lw          $t8, 0x340($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X340);
    // 0x8004FB80: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8004FB84: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x8004FB88: sw          $t6, 0x340($sp)
    MEM_W(0X340, ctx->r29) = ctx->r14;
    // 0x8004FB8C: sw          $t7, 0x358($sp)
    MEM_W(0X358, ctx->r29) = ctx->r15;
    // 0x8004FB90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8004FB94: jal         0x8004ECD8
    // 0x8004FB98: addiu       $a0, $sp, 0x36C
    ctx->r4 = ADD32(ctx->r29, 0X36C);
    func_8004ECD8(rdram, ctx);
        goto after_16;
    // 0x8004FB98: addiu       $a0, $sp, 0x36C
    ctx->r4 = ADD32(ctx->r29, 0X36C);
    after_16:
    // 0x8004FB9C: sw          $zero, 0x3B8($sp)
    MEM_W(0X3B8, ctx->r29) = 0;
    // 0x8004FBA0: sw          $zero, 0x3BC($sp)
    MEM_W(0X3BC, ctx->r29) = 0;
    // 0x8004FBA4: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8004FBA8: lw          $t9, 0x1C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FBAC: multu       $t8, $s5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FBB0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8004FBB4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8004FBB8: lwc1        $f4, 0x3C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x8004FBBC: mflo        $t6
    ctx->r14 = lo;
    // 0x8004FBC0: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x8004FBC4: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004FBC8: nop

    // 0x8004FBCC: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8004FBD0: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8004FBD4: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8004FBD8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8004FBDC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8004FBE0: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8004FBE4: swc1        $f6, 0x3C0($sp)
    MEM_W(0X3C0, ctx->r29) = ctx->f6.u32l;
    // 0x8004FBE8: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8004FBEC: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FBF0: multu       $t8, $s5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FBF4: lwc1        $f4, 0x40($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X40);
    // 0x8004FBF8: mflo        $t9
    ctx->r25 = lo;
    // 0x8004FBFC: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x8004FC00: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004FC04: nop

    // 0x8004FC08: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8004FC0C: nop

    // 0x8004FC10: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8004FC14: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x8004FC18: nop

    // 0x8004FC1C: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8004FC20: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8004FC24: nop

    // 0x8004FC28: sub.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8004FC2C: swc1        $f8, 0x3C4($sp)
    MEM_W(0X3C4, ctx->r29) = ctx->f8.u32l;
    // 0x8004FC30: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8004FC34: lw          $t6, 0x1C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FC38: multu       $t8, $s5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FC3C: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8004FC40: mflo        $t7
    ctx->r15 = lo;
    // 0x8004FC44: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8004FC48: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8004FC4C: nop

    // 0x8004FC50: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8004FC54: nop

    // 0x8004FC58: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8004FC5C: lwc1        $f10, 0x1C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x8004FC60: nop

    // 0x8004FC64: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8004FC68: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8004FC6C: nop

    // 0x8004FC70: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8004FC74: swc1        $f4, 0x3C8($sp)
    MEM_W(0X3C8, ctx->r29) = ctx->f4.u32l;
    // 0x8004FC78: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8004FC7C: nop

    // 0x8004FC80: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x8004FC84: lwc1        $f8, 0x3C4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C4);
    // 0x8004FC88: nop

    // 0x8004FC8C: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x8004FC90: lwc1        $f10, 0x3C8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C8);
    // 0x8004FC94: b           L_8004FCC4
    // 0x8004FC98: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
        goto L_8004FCC4;
    // 0x8004FC98: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
L_8004FC9C:
    // 0x8004FC9C: lw          $s0, 0x50($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X50);
    // 0x8004FCA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004FCA4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8004FCA8: nop

    // 0x8004FCAC: bne         $t9, $at, L_8004F9BC
    if (ctx->r25 != ctx->r1) {
        // 0x8004FCB0: nop
    
            goto L_8004F9BC;
    }
    // 0x8004FCB0: nop

    // 0x8004FCB4: b           L_8004FCC8
    // 0x8004FCB8: lw          $v0, 0x350($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X350);
        goto L_8004FCC8;
    // 0x8004FCB8: lw          $v0, 0x350($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X350);
L_8004FCBC:
    // 0x8004FCBC: b           L_8004FCDC
    // 0x8004FCC0: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
        goto L_8004FCDC;
    // 0x8004FCC0: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
L_8004FCC4:
    // 0x8004FCC4: lw          $v0, 0x350($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X350);
L_8004FCC8:
    // 0x8004FCC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004FCCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004FCD0: bne         $v0, $at, L_8004F920
    if (ctx->r2 != ctx->r1) {
        // 0x8004FCD4: sw          $v0, 0x350($sp)
        MEM_W(0X350, ctx->r29) = ctx->r2;
            goto L_8004F920;
    }
    // 0x8004FCD4: sw          $v0, 0x350($sp)
    MEM_W(0X350, ctx->r29) = ctx->r2;
L_8004FCD8:
    // 0x8004FCD8: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
L_8004FCDC:
    // 0x8004FCDC: nop

    // 0x8004FCE0: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
L_8004FCE4:
    // 0x8004FCE4: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8004FCE8: andi        $t8, $v0, 0x10
    ctx->r24 = ctx->r2 & 0X10;
    // 0x8004FCEC: bne         $t8, $zero, L_8004FD18
    if (ctx->r24 != 0) {
        // 0x8004FCF0: nop
    
            goto L_8004FD18;
    }
    // 0x8004FCF0: nop

    // 0x8004FCF4: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8004FCF8: jal         0x8004E6DC
    // 0x8004FCFC: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    func_8004E6DC(rdram, ctx);
        goto after_17;
    // 0x8004FCFC: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    after_17:
    // 0x8004FD00: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x8004FD04: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8004FD08: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8004FD0C: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8004FD10: lw          $s4, 0x3F0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3F0);
    // 0x8004FD14: nop

L_8004FD18:
    // 0x8004FD18: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8004FD1C: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8004FD20: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8004FD24: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8004FD28: beq         $t7, $zero, L_8004FD44
    if (ctx->r15 == 0) {
        // 0x8004FD2C: nop
    
            goto L_8004FD44;
    }
    // 0x8004FD2C: nop

    // 0x8004FD30: lw          $t9, 0x8($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X8);
    // 0x8004FD34: nop

    // 0x8004FD38: andi        $t8, $t9, 0x2
    ctx->r24 = ctx->r25 & 0X2;
    // 0x8004FD3C: bne         $t8, $zero, L_80050608
    if (ctx->r24 != 0) {
        // 0x8004FD40: lw          $t6, 0x340($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X340);
            goto L_80050608;
    }
    // 0x8004FD40: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
L_8004FD44:
    // 0x8004FD44: jal         0x8004DF9C
    // 0x8004FD48: addiu       $a0, $a0, -0x5FE8
    ctx->r4 = ADD32(ctx->r4, -0X5FE8);
    func_8004DF9C(rdram, ctx);
        goto after_18;
    // 0x8004FD48: addiu       $a0, $a0, -0x5FE8
    ctx->r4 = ADD32(ctx->r4, -0X5FE8);
    after_18:
    // 0x8004FD4C: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x8004FD50: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8004FD54: jal         0x8004C26C
    // 0x8004FD58: addiu       $a0, $sp, 0x3D8
    ctx->r4 = ADD32(ctx->r29, 0X3D8);
    func_8004C26C(rdram, ctx);
        goto after_19;
    // 0x8004FD58: addiu       $a0, $sp, 0x3D8
    ctx->r4 = ADD32(ctx->r29, 0X3D8);
    after_19:
    // 0x8004FD5C: lwc1        $f4, 0x3D8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3D8);
    // 0x8004FD60: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8004FD64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004FD68: lwc1        $f6, 0x3DC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3DC);
    // 0x8004FD6C: swc1        $f4, 0x3CC($sp)
    MEM_W(0X3CC, ctx->r29) = ctx->f4.u32l;
    // 0x8004FD70: lwc1        $f4, 0x3E0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3E0);
    // 0x8004FD74: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8004FD78: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8004FD7C: addiu       $t6, $t6, -0x5FE8
    ctx->r14 = ADD32(ctx->r14, -0X5FE8);
    // 0x8004FD80: swc1        $f10, 0x3D0($sp)
    MEM_W(0X3D0, ctx->r29) = ctx->f10.u32l;
    // 0x8004FD84: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x8004FD88: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x8004FD8C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8004FD90: addiu       $s1, $sp, 0x3CC
    ctx->r17 = ADD32(ctx->r29, 0X3CC);
    // 0x8004FD94: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    // 0x8004FD98: jal         0x8004DD38
    // 0x8004FD9C: swc1        $f4, 0x3D4($sp)
    MEM_W(0X3D4, ctx->r29) = ctx->f4.u32l;
    func_8004DD38(rdram, ctx);
        goto after_20;
    // 0x8004FD9C: swc1        $f4, 0x3D4($sp)
    MEM_W(0X3D4, ctx->r29) = ctx->f4.u32l;
    after_20:
    // 0x8004FDA0: lw          $s4, 0x3F0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3F0);
    // 0x8004FDA4: blez        $v0, L_8004FED0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004FDA8: lui         $s0, 0x800D
        ctx->r16 = S32(0X800D << 16);
            goto L_8004FED0;
    }
    // 0x8004FDA8: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x8004FDAC: lw          $s0, -0x5F98($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5F98);
    // 0x8004FDB0: or          $fp, $s4, $zero
    ctx->r30 = ctx->r20 | 0;
    // 0x8004FDB4: lwc1        $f6, 0x3C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X3C);
    // 0x8004FDB8: nop

    // 0x8004FDBC: swc1        $f6, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f6.u32l;
    // 0x8004FDC0: lwc1        $f8, 0x40($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X40);
    // 0x8004FDC4: nop

    // 0x8004FDC8: swc1        $f8, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f8.u32l;
    // 0x8004FDCC: lwc1        $f10, 0x44($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X44);
    // 0x8004FDD0: nop

    // 0x8004FDD4: swc1        $f10, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f10.u32l;
    // 0x8004FDD8: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    // 0x8004FDDC: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8004FDE0: jal         0x8004C318
    // 0x8004FDE4: sw          $s0, 0x368($sp)
    MEM_W(0X368, ctx->r29) = ctx->r16;
    func_8004C318(rdram, ctx);
        goto after_21;
    // 0x8004FDE4: sw          $s0, 0x368($sp)
    MEM_W(0X368, ctx->r29) = ctx->r16;
    after_21:
    // 0x8004FDE8: lw          $s0, 0x368($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X368);
    // 0x8004FDEC: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x8004FDF0: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x8004FDF4: lw          $s4, 0x3F0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3F0);
    // 0x8004FDF8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8004FDFC: addiu       $s3, $s3, -0x5A18
    ctx->r19 = ADD32(ctx->r19, -0X5A18);
    // 0x8004FE00: addiu       $a1, $s1, -0x5A34
    ctx->r5 = ADD32(ctx->r17, -0X5A34);
    // 0x8004FE04: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x8004FE08: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8004FE0C: jal         0x8004BD98
    // 0x8004FE10: addiu       $a0, $a0, -0x59FC
    ctx->r4 = ADD32(ctx->r4, -0X59FC);
    func_8004BD98(rdram, ctx);
        goto after_22;
    // 0x8004FE10: addiu       $a0, $a0, -0x59FC
    ctx->r4 = ADD32(ctx->r4, -0X59FC);
    after_22:
    // 0x8004FE14: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8004FE18: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FE1C: multu       $t9, $s5
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FE20: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FE24: lwc1        $f0, -0x5A6C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5A6C);
    // 0x8004FE28: lw          $t9, 0x2C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2C);
    // 0x8004FE2C: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8004FE30: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8004FE34: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x8004FE38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004FE3C: addiu       $s1, $s0, 0x3C
    ctx->r17 = ADD32(ctx->r16, 0X3C);
    // 0x8004FE40: or          $a2, $t9, $s2
    ctx->r6 = ctx->r25 | ctx->r18;
    // 0x8004FE44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8004FE48: mflo        $t8
    ctx->r24 = lo;
    // 0x8004FE4C: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x8004FE50: lw          $v1, 0x10($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X10);
    // 0x8004FE54: sw          $s1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r17;
    // 0x8004FE58: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    // 0x8004FE5C: swc1        $f0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f0.u32l;
    // 0x8004FE60: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8004FE64: sw          $a1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r5;
    // 0x8004FE68: swc1        $f4, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f4.u32l;
    // 0x8004FE6C: jal         0x8004AF68
    // 0x8004FE70: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    func_8004AF68(rdram, ctx);
        goto after_23;
    // 0x8004FE70: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    after_23:
    // 0x8004FE74: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8004FE78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FE7C: beq         $a3, $at, L_80050608
    if (ctx->r7 == ctx->r1) {
        // 0x8004FE80: lw          $t6, 0x340($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X340);
            goto L_80050608;
    }
    // 0x8004FE80: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
    // 0x8004FE84: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8004FE88: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FE8C: multu       $t8, $s5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FE90: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8004FE94: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x8004FE98: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8004FE9C: mflo        $t6
    ctx->r14 = lo;
    // 0x8004FEA0: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x8004FEA4: lw          $a2, 0x10($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X10);
    // 0x8004FEA8: swc1        $f26, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f26.u32l;
    // 0x8004FEAC: swc1        $f28, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f28.u32l;
    // 0x8004FEB0: sw          $s1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r17;
    // 0x8004FEB4: sw          $a3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r7;
    // 0x8004FEB8: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    // 0x8004FEBC: sw          $a1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r5;
    // 0x8004FEC0: jal         0x8004AF68
    // 0x8004FEC4: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    func_8004AF68(rdram, ctx);
        goto after_24;
    // 0x8004FEC4: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    after_24:
    // 0x8004FEC8: b           L_80050608
    // 0x8004FECC: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
        goto L_80050608;
    // 0x8004FECC: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
L_8004FED0:
    // 0x8004FED0: lw          $t8, 0x358($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X358);
    // 0x8004FED4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8004FED8: blez        $t8, L_8004FFF4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8004FEDC: addiu       $v0, $v0, -0x5A78
        ctx->r2 = ADD32(ctx->r2, -0X5A78);
            goto L_8004FFF4;
    }
    // 0x8004FEDC: addiu       $v0, $v0, -0x5A78
    ctx->r2 = ADD32(ctx->r2, -0X5A78);
    // 0x8004FEE0: lwc1        $f6, 0x3A8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3A8);
    // 0x8004FEE4: or          $fp, $s4, $zero
    ctx->r30 = ctx->r20 | 0;
    // 0x8004FEE8: swc1        $f6, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f6.u32l;
    // 0x8004FEEC: lwc1        $f8, 0x3AC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3AC);
    // 0x8004FEF0: nop

    // 0x8004FEF4: swc1        $f8, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f8.u32l;
    // 0x8004FEF8: lwc1        $f10, 0x3B0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3B0);
    // 0x8004FEFC: nop

    // 0x8004FF00: swc1        $f10, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f10.u32l;
    // 0x8004FF04: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    // 0x8004FF08: jal         0x8004C318
    // 0x8004FF0C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    func_8004C318(rdram, ctx);
        goto after_25;
    // 0x8004FF0C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    after_25:
    // 0x8004FF10: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x8004FF14: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x8004FF18: lw          $s4, 0x3F0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3F0);
    // 0x8004FF1C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8004FF20: addiu       $s3, $s3, -0x5A18
    ctx->r19 = ADD32(ctx->r19, -0X5A18);
    // 0x8004FF24: addiu       $a1, $s1, -0x5A34
    ctx->r5 = ADD32(ctx->r17, -0X5A34);
    // 0x8004FF28: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x8004FF2C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8004FF30: jal         0x8004BD98
    // 0x8004FF34: addiu       $a0, $a0, -0x59FC
    ctx->r4 = ADD32(ctx->r4, -0X59FC);
    func_8004BD98(rdram, ctx);
        goto after_26;
    // 0x8004FF34: addiu       $a0, $a0, -0x59FC
    ctx->r4 = ADD32(ctx->r4, -0X59FC);
    after_26:
    // 0x8004FF38: lw          $t6, 0x370($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X370);
    // 0x8004FF3C: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FF40: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FF44: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004FF48: lwc1        $f0, -0x5A6C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5A6C);
    // 0x8004FF4C: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8004FF50: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x8004FF54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004FF58: lw          $t6, 0x390($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X390);
    // 0x8004FF5C: addiu       $s0, $sp, 0x3A8
    ctx->r16 = ADD32(ctx->r29, 0X3A8);
    // 0x8004FF60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8004FF64: mflo        $t9
    ctx->r25 = lo;
    // 0x8004FF68: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x8004FF6C: lw          $v1, 0x10($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X10);
    // 0x8004FF70: lw          $t7, 0x398($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X398);
    // 0x8004FF74: sw          $s0, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r16;
    // 0x8004FF78: or          $t9, $t7, $s2
    ctx->r25 = ctx->r15 | ctx->r18;
    // 0x8004FF7C: sw          $t9, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r25;
    // 0x8004FF80: swc1        $f0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f0.u32l;
    // 0x8004FF84: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8004FF88: swc1        $f4, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f4.u32l;
    // 0x8004FF8C: sw          $t6, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r14;
    // 0x8004FF90: jal         0x8004AF68
    // 0x8004FF94: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    func_8004AF68(rdram, ctx);
        goto after_27;
    // 0x8004FF94: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    after_27:
    // 0x8004FF98: lw          $t8, 0x390($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X390);
    // 0x8004FF9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FFA0: beq         $t8, $at, L_80050608
    if (ctx->r24 == ctx->r1) {
        // 0x8004FFA4: lw          $t6, 0x340($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X340);
            goto L_80050608;
    }
    // 0x8004FFA4: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
    // 0x8004FFA8: lw          $t7, 0x370($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X370);
    // 0x8004FFAC: lw          $t6, 0x1C($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X1C);
    // 0x8004FFB0: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004FFB4: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8004FFB8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8004FFBC: mflo        $t9
    ctx->r25 = lo;
    // 0x8004FFC0: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x8004FFC4: lw          $v1, 0x10($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X10);
    // 0x8004FFC8: lw          $t6, 0x398($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X398);
    // 0x8004FFCC: swc1        $f26, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f26.u32l;
    // 0x8004FFD0: swc1        $f28, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f28.u32l;
    // 0x8004FFD4: sw          $s0, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r16;
    // 0x8004FFD8: sw          $t8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r24;
    // 0x8004FFDC: sw          $v0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r2;
    // 0x8004FFE0: sw          $v1, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r3;
    // 0x8004FFE4: jal         0x8004AF68
    // 0x8004FFE8: sw          $t6, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r14;
    func_8004AF68(rdram, ctx);
        goto after_28;
    // 0x8004FFE8: sw          $t6, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r14;
    after_28:
    // 0x8004FFEC: b           L_80050608
    // 0x8004FFF0: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
        goto L_80050608;
    // 0x8004FFF0: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
L_8004FFF4:
    // 0x8004FFF4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8004FFF8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8004FFFC: bne         $t9, $at, L_80050558
    if (ctx->r25 != ctx->r1) {
        // 0x80050000: nop
    
            goto L_80050558;
    }
    // 0x80050000: nop

    // 0x80050004: lwc1        $f10, 0x40($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80050008: lwc1        $f16, 0x38($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8005000C: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80050010: lwc1        $f18, 0x3C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80050014: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80050018: lw          $a3, 0x1C($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X1C);
    // 0x8005001C: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x80050020: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80050024: sub.s       $f0, $f16, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x80050028: lwc1        $f6, 0x28($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X28);
    // 0x8005002C: sub.s       $f2, $f18, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80050030: lwc1        $f8, 0x3E0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3E0);
    // 0x80050034: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80050038: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8005003C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80050040: lwc1        $f8, 0x3D8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3D8);
    // 0x80050044: mul.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80050048: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x8005004C: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x80050050: addiu       $t3, $t3, -0x5A40
    ctx->r11 = ADD32(ctx->r11, -0X5A40);
    // 0x80050054: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80050058: lwc1        $f10, 0x3DC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3DC);
    // 0x8005005C: addiu       $t1, $t1, -0x5A58
    ctx->r9 = ADD32(ctx->r9, -0X5A58);
    // 0x80050060: addiu       $t0, $sp, 0x190
    ctx->r8 = ADD32(ctx->r29, 0X190);
    // 0x80050064: sub.s       $f10, $f18, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x80050068: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8005006C: mul.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x80050070: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80050074: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80050078: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005007C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80050080: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80050084: neg.s       $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = -ctx->f10.fl;
    // 0x80050088: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8005008C: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80050090: mul.s       $f10, $f12, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80050094: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80050098: nop

    // 0x8005009C: div.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800500A0: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800500A4: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x800500A8: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x800500AC: swc1        $f6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f6.u32l;
    // 0x800500B0: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x800500B4: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800500B8: swc1        $f10, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f10.u32l;
    // 0x800500BC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800500C0: jal         0x8004CA94
    // 0x800500C4: swc1        $f8, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f8.u32l;
    func_8004CA94(rdram, ctx);
        goto after_29;
    // 0x800500C4: swc1        $f8, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f8.u32l;
    after_29:
    // 0x800500C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800500CC: jal         0x8004CA54
    // 0x800500D0: addiu       $a1, $sp, 0x3D8
    ctx->r5 = ADD32(ctx->r29, 0X3D8);
    func_8004CA54(rdram, ctx);
        goto after_30;
    // 0x800500D0: addiu       $a1, $sp, 0x3D8
    ctx->r5 = ADD32(ctx->r29, 0X3D8);
    after_30:
    // 0x800500D4: lwc1        $f2, 0x0($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800500D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800500DC: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800500E0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800500E4: nop

    // 0x800500E8: bc1f        L_800500F8
    if (!c1cs) {
        // 0x800500EC: nop
    
            goto L_800500F8;
    }
    // 0x800500EC: nop

    // 0x800500F0: b           L_800502F0
    // 0x800500F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800502F0;
    // 0x800500F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800500F8:
    // 0x800500F8: lwc1        $f16, -0x5A4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5A4C);
    // 0x800500FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050100: lwc1        $f18, -0x5A48($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5A48);
    // 0x80050104: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050108: lwc1        $f4, -0x5A58($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A58);
    // 0x8005010C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050110: lwc1        $f6, -0x5A54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5A54);
    // 0x80050114: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050118: lwc1        $f8, -0x5A50($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A50);
    // 0x8005011C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050120: lwc1        $f10, -0x5A44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5A44);
    // 0x80050124: sub.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80050128: swc1        $f8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f8.u32l;
    // 0x8005012C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80050130: lwc1        $f10, 0x3D8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3D8);
    // 0x80050134: lwc1        $f8, 0x3DC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3DC);
    // 0x80050138: sub.s       $f10, $f4, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8005013C: swc1        $f6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f6.u32l;
    // 0x80050140: mul.s       $f10, $f0, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80050144: sub.s       $f2, $f6, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x80050148: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8005014C: addiu       $t2, $t2, -0x5A4C
    ctx->r10 = ADD32(ctx->r10, -0X5A4C);
    // 0x80050150: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80050154: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80050158: mul.s       $f8, $f2, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8005015C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80050160: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80050164: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80050168: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8005016C: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    // 0x80050170: lwc1        $f4, 0x3E0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3E0);
    // 0x80050174: nop

    // 0x80050178: sub.s       $f4, $f8, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x8005017C: mul.s       $f4, $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80050180: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80050184: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x80050188: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8005018C: nop

    // 0x80050190: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80050194: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80050198: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8005019C: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800501A0: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800501A4: div.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800501A8: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800501AC: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800501B0: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800501B4: mul.s       $f10, $f2, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x800501B8: swc1        $f4, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f4.u32l;
    // 0x800501BC: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800501C0: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x800501C4: swc1        $f4, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f4.u32l;
    // 0x800501C8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800501CC: jal         0x8004CA94
    // 0x800501D0: swc1        $f10, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f10.u32l;
    func_8004CA94(rdram, ctx);
        goto after_31;
    // 0x800501D0: swc1        $f10, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f10.u32l;
    after_31:
    // 0x800501D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800501D8: jal         0x8004CA54
    // 0x800501DC: addiu       $a1, $sp, 0x3D8
    ctx->r5 = ADD32(ctx->r29, 0X3D8);
    func_8004CA54(rdram, ctx);
        goto after_32;
    // 0x800501DC: addiu       $a1, $sp, 0x3D8
    ctx->r5 = ADD32(ctx->r29, 0X3D8);
    after_32:
    // 0x800501E0: lwc1        $f2, 0x0($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800501E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800501E8: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800501EC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x800501F0: nop

    // 0x800501F4: bc1f        L_80050204
    if (!c1cs) {
        // 0x800501F8: nop
    
            goto L_80050204;
    }
    // 0x800501F8: nop

    // 0x800501FC: b           L_800502F0
    // 0x80050200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800502F0;
    // 0x80050200: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80050204:
    // 0x80050204: lwc1        $f16, -0x5A4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5A4C);
    // 0x80050208: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005020C: lwc1        $f18, -0x5A48($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5A48);
    // 0x80050210: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050214: lwc1        $f8, -0x5A40($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A40);
    // 0x80050218: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005021C: lwc1        $f6, -0x5A3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5A3C);
    // 0x80050220: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050224: lwc1        $f10, -0x5A44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5A44);
    // 0x80050228: sub.s       $f0, $f16, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x8005022C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050230: lwc1        $f4, -0x5A38($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A38);
    // 0x80050234: lwc1        $f8, 0x3E0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3E0);
    // 0x80050238: sub.s       $f2, $f18, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8005023C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80050240: sub.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80050244: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80050248: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8005024C: lwc1        $f8, 0x3D8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3D8);
    // 0x80050250: mul.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80050254: sub.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x80050258: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x8005025C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80050260: lwc1        $f6, 0x3DC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3DC);
    // 0x80050264: nop

    // 0x80050268: sub.s       $f6, $f18, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x8005026C: mul.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80050270: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80050274: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80050278: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8005027C: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x80050280: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80050284: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80050288: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8005028C: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80050290: nop

    // 0x80050294: div.s       $f14, $f4, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80050298: mul.s       $f6, $f0, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x8005029C: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x800502A0: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x800502A4: swc1        $f4, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->f4.u32l;
    // 0x800502A8: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x800502AC: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x800502B0: swc1        $f6, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->f6.u32l;
    // 0x800502B4: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800502B8: jal         0x8004CA94
    // 0x800502BC: swc1        $f8, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f8.u32l;
    func_8004CA94(rdram, ctx);
        goto after_33;
    // 0x800502BC: swc1        $f8, 0x198($sp)
    MEM_W(0X198, ctx->r29) = ctx->f8.u32l;
    after_33:
    // 0x800502C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800502C4: jal         0x8004CA54
    // 0x800502C8: addiu       $a1, $sp, 0x3D8
    ctx->r5 = ADD32(ctx->r29, 0X3D8);
    func_8004CA54(rdram, ctx);
        goto after_34;
    // 0x800502C8: addiu       $a1, $sp, 0x3D8
    ctx->r5 = ADD32(ctx->r29, 0X3D8);
    after_34:
    // 0x800502CC: lwc1        $f2, 0x0($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X0);
    // 0x800502D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800502D4: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800502D8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x800502DC: nop

    // 0x800502E0: bc1f        L_800502F0
    if (!c1cs) {
        // 0x800502E4: nop
    
            goto L_800502F0;
    }
    // 0x800502E4: nop

    // 0x800502E8: b           L_800502F0
    // 0x800502EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800502F0;
    // 0x800502EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800502F0:
    // 0x800502F0: blez        $v0, L_800504A8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800502F4: or          $fp, $s4, $zero
        ctx->r30 = ctx->r20 | 0;
            goto L_800504A8;
    }
    // 0x800502F4: or          $fp, $s4, $zero
    ctx->r30 = ctx->r20 | 0;
    // 0x800502F8: or          $fp, $s4, $zero
    ctx->r30 = ctx->r20 | 0;
    // 0x800502FC: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80050300: jal         0x8004C318
    // 0x80050304: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    func_8004C318(rdram, ctx);
        goto after_35;
    // 0x80050304: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    after_35:
    // 0x80050308: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x8005030C: addiu       $s1, $s1, -0x5A34
    ctx->r17 = ADD32(ctx->r17, -0X5A34);
    // 0x80050310: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80050314: lw          $s4, 0x3F0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3F0);
    // 0x80050318: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8005031C: addiu       $s3, $s3, -0x5A18
    ctx->r19 = ADD32(ctx->r19, -0X5A18);
    // 0x80050320: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x80050324: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80050328: addiu       $a0, $a0, -0x59FC
    ctx->r4 = ADD32(ctx->r4, -0X59FC);
    // 0x8005032C: jal         0x8004BD98
    // 0x80050330: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8004BD98(rdram, ctx);
        goto after_36;
    // 0x80050330: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_36:
    // 0x80050334: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x80050338: addiu       $a3, $a3, -0x5A78
    ctx->r7 = ADD32(ctx->r7, -0X5A78);
    // 0x8005033C: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x80050340: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x80050344: multu       $t8, $s5
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80050348: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8005034C: lw          $t8, 0x58($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X58);
    // 0x80050350: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x80050354: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80050358: lw          $a1, 0x50($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X50);
    // 0x8005035C: lwc1        $f0, 0xC($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80050360: or          $a2, $t8, $s2
    ctx->r6 = ctx->r24 | ctx->r18;
    // 0x80050364: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80050368: mflo        $t6
    ctx->r14 = lo;
    // 0x8005036C: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x80050370: lw          $v1, 0x10($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X10);
    // 0x80050374: sw          $s1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r17;
    // 0x80050378: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    // 0x8005037C: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x80050380: swc1        $f10, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f10.u32l;
    // 0x80050384: sw          $a1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r5;
    // 0x80050388: swc1        $f0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f0.u32l;
    // 0x8005038C: jal         0x8004AF68
    // 0x80050390: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    func_8004AF68(rdram, ctx);
        goto after_37;
    // 0x80050390: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    after_37:
    // 0x80050394: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80050398: lw          $s0, -0x5A28($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5A28);
    // 0x8005039C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800503A0: beq         $s0, $at, L_800503FC
    if (ctx->r16 == ctx->r1) {
        // 0x800503A4: lui         $t6, 0x800D
        ctx->r14 = S32(0X800D << 16);
            goto L_800503FC;
    }
    // 0x800503A4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800503A8: lw          $t6, -0x5A74($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5A74);
    // 0x800503AC: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x800503B0: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800503B4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800503B8: lw          $v1, -0x5A20($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5A20);
    // 0x800503BC: lw          $a1, 0x4($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X4);
    // 0x800503C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800503C4: mflo        $t9
    ctx->r25 = lo;
    // 0x800503C8: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x800503CC: lw          $a2, 0x10($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X10);
    // 0x800503D0: swc1        $f26, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f26.u32l;
    // 0x800503D4: swc1        $f28, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f28.u32l;
    // 0x800503D8: sw          $s1, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r17;
    // 0x800503DC: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
    // 0x800503E0: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    // 0x800503E4: sw          $a1, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r5;
    // 0x800503E8: jal         0x8004AF68
    // 0x800503EC: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    func_8004AF68(rdram, ctx);
        goto after_38;
    // 0x800503EC: sw          $a2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r6;
    after_38:
    // 0x800503F0: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x800503F4: lw          $s0, -0x5A28($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5A28);
    // 0x800503F8: nop

L_800503FC:
    // 0x800503FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050400: lwc1        $f6, -0x5A70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5A70);
    // 0x80050404: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80050408: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005040C: lwc1        $f10, -0x5A6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5A6C);
    // 0x80050410: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80050414: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050418: swc1        $f4, 0x374($sp)
    MEM_W(0X374, ctx->r29) = ctx->f4.u32l;
    // 0x8005041C: lwc1        $f4, -0x5A68($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A68);
    // 0x80050420: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050424: swc1        $f8, 0x378($sp)
    MEM_W(0X378, ctx->r29) = ctx->f8.u32l;
    // 0x80050428: lwc1        $f8, -0x5A58($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A58);
    // 0x8005042C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050430: swc1        $f6, 0x380($sp)
    MEM_W(0X380, ctx->r29) = ctx->f6.u32l;
    // 0x80050434: lwc1        $f6, -0x5A54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5A54);
    // 0x80050438: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005043C: swc1        $f10, 0x384($sp)
    MEM_W(0X384, ctx->r29) = ctx->f10.u32l;
    // 0x80050440: lwc1        $f10, -0x5A50($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5A50);
    // 0x80050444: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80050448: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8005044C: lw          $t6, -0x5A78($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5A78);
    // 0x80050450: lw          $t9, -0x5A20($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5A20);
    // 0x80050454: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050458: swc1        $f4, 0x388($sp)
    MEM_W(0X388, ctx->r29) = ctx->f4.u32l;
    // 0x8005045C: lwc1        $f4, -0x5A34($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5A34);
    // 0x80050460: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80050464: sw          $t7, 0x38C($sp)
    MEM_W(0X38C, ctx->r29) = ctx->r15;
    // 0x80050468: sw          $s0, 0x390($sp)
    MEM_W(0X390, ctx->r29) = ctx->r16;
    // 0x8005046C: sw          $zero, 0x3B8($sp)
    MEM_W(0X3B8, ctx->r29) = 0;
    // 0x80050470: sw          $zero, 0x3BC($sp)
    MEM_W(0X3BC, ctx->r29) = 0;
    // 0x80050474: swc1        $f8, 0x39C($sp)
    MEM_W(0X39C, ctx->r29) = ctx->f8.u32l;
    // 0x80050478: swc1        $f6, 0x3A0($sp)
    MEM_W(0X3A0, ctx->r29) = ctx->f6.u32l;
    // 0x8005047C: swc1        $f10, 0x3A4($sp)
    MEM_W(0X3A4, ctx->r29) = ctx->f10.u32l;
    // 0x80050480: sw          $t6, 0x36C($sp)
    MEM_W(0X36C, ctx->r29) = ctx->r14;
    // 0x80050484: sw          $t9, 0x398($sp)
    MEM_W(0X398, ctx->r29) = ctx->r25;
    // 0x80050488: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005048C: swc1        $f4, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f4.u32l;
    // 0x80050490: lwc1        $f8, -0x5A30($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5A30);
    // 0x80050494: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050498: swc1        $f8, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f8.u32l;
    // 0x8005049C: lwc1        $f6, -0x5A2C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5A2C);
    // 0x800504A0: b           L_80050604
    // 0x800504A4: swc1        $f6, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f6.u32l;
        goto L_80050604;
    // 0x800504A4: swc1        $f6, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f6.u32l;
L_800504A8:
    // 0x800504A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800504AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800504B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800504B4: swc1        $f10, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f10.u32l;
    // 0x800504B8: swc1        $f4, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f4.u32l;
    // 0x800504BC: swc1        $f8, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f8.u32l;
    // 0x800504C0: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    // 0x800504C4: jal         0x8004C318
    // 0x800504C8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    func_8004C318(rdram, ctx);
        goto after_39;
    // 0x800504C8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    after_39:
    // 0x800504CC: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x800504D0: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x800504D4: lw          $s4, 0x3F0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3F0);
    // 0x800504D8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800504DC: addiu       $s3, $s3, -0x5A18
    ctx->r19 = ADD32(ctx->r19, -0X5A18);
    // 0x800504E0: addiu       $a1, $s1, -0x5A34
    ctx->r5 = ADD32(ctx->r17, -0X5A34);
    // 0x800504E4: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x800504E8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800504EC: jal         0x8004BD98
    // 0x800504F0: addiu       $a0, $a0, -0x59FC
    ctx->r4 = ADD32(ctx->r4, -0X59FC);
    func_8004BD98(rdram, ctx);
        goto after_40;
    // 0x800504F0: addiu       $a0, $a0, -0x59FC
    ctx->r4 = ADD32(ctx->r4, -0X59FC);
    after_40:
    // 0x800504F4: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x800504F8: lw          $t6, -0x5A74($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5A74);
    // 0x800504FC: lw          $t8, 0x1C($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X1C);
    // 0x80050500: multu       $t6, $s5
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80050504: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050508: lwc1        $f0, -0x5A6C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5A6C);
    // 0x8005050C: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x80050510: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x80050514: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80050518: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8005051C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80050520: mflo        $t7
    ctx->r15 = lo;
    // 0x80050524: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80050528: lw          $v1, 0x10($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X10);
    // 0x8005052C: addiu       $t8, $s4, 0xC
    ctx->r24 = ADD32(ctx->r20, 0XC);
    // 0x80050530: sw          $t8, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r24;
    // 0x80050534: sw          $s2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r18;
    // 0x80050538: sw          $t6, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r14;
    // 0x8005053C: swc1        $f0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f0.u32l;
    // 0x80050540: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x80050544: swc1        $f6, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f6.u32l;
    // 0x80050548: jal         0x8004AF68
    // 0x8005054C: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    func_8004AF68(rdram, ctx);
        goto after_41;
    // 0x8005054C: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    after_41:
    // 0x80050550: b           L_80050608
    // 0x80050554: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
        goto L_80050608;
    // 0x80050554: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
L_80050558:
    // 0x80050558: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8005055C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80050560: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80050564: swc1        $f10, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->f10.u32l;
    // 0x80050568: swc1        $f4, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->f4.u32l;
    // 0x8005056C: swc1        $f8, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->f8.u32l;
    // 0x80050570: sw          $s4, 0x3F0($sp)
    MEM_W(0X3F0, ctx->r29) = ctx->r20;
    // 0x80050574: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x80050578: jal         0x8004C318
    // 0x8005057C: or          $fp, $s4, $zero
    ctx->r30 = ctx->r20 | 0;
    func_8004C318(rdram, ctx);
        goto after_42;
    // 0x8005057C: or          $fp, $s4, $zero
    ctx->r30 = ctx->r20 | 0;
    after_42:
    // 0x80050580: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x80050584: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80050588: lw          $s4, 0x3F0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3F0);
    // 0x8005058C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80050590: addiu       $s3, $s3, -0x5A18
    ctx->r19 = ADD32(ctx->r19, -0X5A18);
    // 0x80050594: addiu       $a1, $s1, -0x5A34
    ctx->r5 = ADD32(ctx->r17, -0X5A34);
    // 0x80050598: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x8005059C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800505A0: jal         0x8004BD98
    // 0x800505A4: addiu       $a0, $a0, -0x59FC
    ctx->r4 = ADD32(ctx->r4, -0X59FC);
    func_8004BD98(rdram, ctx);
        goto after_43;
    // 0x800505A4: addiu       $a0, $a0, -0x59FC
    ctx->r4 = ADD32(ctx->r4, -0X59FC);
    after_43:
    // 0x800505A8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x800505AC: lw          $t9, -0x5A74($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X5A74);
    // 0x800505B0: lw          $t7, 0x1C($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X1C);
    // 0x800505B4: multu       $t9, $s5
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800505B8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800505BC: lwc1        $f0, -0x5A6C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5A6C);
    // 0x800505C0: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x800505C4: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x800505C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800505CC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800505D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800505D4: mflo        $t6
    ctx->r14 = lo;
    // 0x800505D8: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x800505DC: lw          $v1, 0x10($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X10);
    // 0x800505E0: addiu       $t7, $s4, 0xC
    ctx->r15 = ADD32(ctx->r20, 0XC);
    // 0x800505E4: sw          $t7, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r15;
    // 0x800505E8: sw          $s2, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r18;
    // 0x800505EC: sw          $t9, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r25;
    // 0x800505F0: swc1        $f0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f0.u32l;
    // 0x800505F4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x800505F8: swc1        $f6, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f6.u32l;
    // 0x800505FC: jal         0x8004AF68
    // 0x80050600: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    func_8004AF68(rdram, ctx);
        goto after_44;
    // 0x80050600: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    after_44:
L_80050604:
    // 0x80050604: lw          $t6, 0x340($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X340);
L_80050608:
    // 0x80050608: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8005060C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80050610: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80050614: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80050618: addiu       $s3, $s3, -0x5A18
    ctx->r19 = ADD32(ctx->r19, -0X5A18);
    // 0x8005061C: addiu       $t0, $t0, -0x5A78
    ctx->r8 = ADD32(ctx->r8, -0X5A78);
    // 0x80050620: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x80050624: bne         $t6, $t1, L_80050680
    if (ctx->r14 != ctx->r9) {
        // 0x80050628: addiu       $a3, $s4, 0xC
        ctx->r7 = ADD32(ctx->r20, 0XC);
            goto L_80050680;
    }
    // 0x80050628: addiu       $a3, $s4, 0xC
    ctx->r7 = ADD32(ctx->r20, 0XC);
    // 0x8005062C: lw          $t9, 0x4($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X4);
    // 0x80050630: lw          $t8, 0x1C($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X1C);
    // 0x80050634: multu       $t9, $s5
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80050638: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x8005063C: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80050640: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80050644: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80050648: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8005064C: mflo        $t7
    ctx->r15 = lo;
    // 0x80050650: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x80050654: lw          $v0, 0x10($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X10);
    // 0x80050658: swc1        $f2, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f2.u32l;
    // 0x8005065C: sw          $a3, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r7;
    // 0x80050660: sw          $t9, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r25;
    // 0x80050664: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
    // 0x80050668: swc1        $f10, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f10.u32l;
    // 0x8005066C: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x80050670: jal         0x8004AF68
    // 0x80050674: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    func_8004AF68(rdram, ctx);
        goto after_45;
    // 0x80050674: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    after_45:
    // 0x80050678: b           L_800506D0
    // 0x8005067C: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
        goto L_800506D0;
    // 0x8005067C: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
L_80050680:
    // 0x80050680: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x80050684: lw          $t8, 0x1C($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X1C);
    // 0x80050688: multu       $t7, $s5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005068C: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x80050690: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x80050694: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80050698: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8005069C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800506A0: mflo        $t6
    ctx->r14 = lo;
    // 0x800506A4: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x800506A8: lw          $v0, 0x10($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X10);
    // 0x800506AC: swc1        $f2, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f2.u32l;
    // 0x800506B0: sw          $a3, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r7;
    // 0x800506B4: sw          $t7, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r15;
    // 0x800506B8: sw          $v1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r3;
    // 0x800506BC: swc1        $f4, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->f4.u32l;
    // 0x800506C0: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x800506C4: jal         0x8004AF68
    // 0x800506C8: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    func_8004AF68(rdram, ctx);
        goto after_46;
    // 0x800506C8: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    after_46:
    // 0x800506CC: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
L_800506D0:
    // 0x800506D0: nop

    // 0x800506D4: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x800506D8: bne         $t8, $zero, L_80050770
    if (ctx->r24 != 0) {
        // 0x800506DC: andi        $t6, $v0, 0x4000
        ctx->r14 = ctx->r2 & 0X4000;
            goto L_80050770;
    }
    // 0x800506DC: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x800506E0: bne         $t6, $zero, L_80050770
    if (ctx->r14 != 0) {
        // 0x800506E4: andi        $t9, $v0, 0x10
        ctx->r25 = ctx->r2 & 0X10;
            goto L_80050770;
    }
    // 0x800506E4: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
    // 0x800506E8: bne         $t9, $zero, L_80050770
    if (ctx->r25 != 0) {
        // 0x800506EC: lui         $a2, 0x8009
        ctx->r6 = S32(0X8009 << 16);
            goto L_80050770;
    }
    // 0x800506EC: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800506F0: addiu       $a2, $a2, 0x1B00
    ctx->r6 = ADD32(ctx->r6, 0X1B00);
    // 0x800506F4: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x800506F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800506FC: blez        $a1, L_80050734
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80050700: lui         $v1, 0x800D
        ctx->r3 = S32(0X800D << 16);
            goto L_80050734;
    }
    // 0x80050700: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80050704: lw          $a0, 0x4($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X4);
    // 0x80050708: addiu       $v1, $v1, -0x61E8
    ctx->r3 = ADD32(ctx->r3, -0X61E8);
L_8005070C:
    // 0x8005070C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80050710: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80050714: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80050718: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8005071C: bne         $a0, $t8, L_8005072C
    if (ctx->r4 != ctx->r24) {
        // 0x80050720: nop
    
            goto L_8005072C;
    }
    // 0x80050720: nop

    // 0x80050724: b           L_80050770
    // 0x80050728: nop

        goto L_80050770;
    // 0x80050728: nop

L_8005072C:
    // 0x8005072C: bne         $at, $zero, L_8005070C
    if (ctx->r1 != 0) {
        // 0x80050730: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8005070C;
    }
    // 0x80050730: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_80050734:
    // 0x80050734: slti        $at, $a1, 0x80
    ctx->r1 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x80050738: beq         $at, $zero, L_80050770
    if (ctx->r1 == 0) {
        // 0x8005073C: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_80050770;
    }
    // 0x8005073C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80050740: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050744: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80050748: sw          $s4, -0x61E8($at)
    MEM_W(-0X61E8, ctx->r1) = ctx->r20;
    // 0x8005074C: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x80050750: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80050754: lw          $t7, 0x8($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X8);
    // 0x80050758: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x8005075C: ori         $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 | 0X8000;
    // 0x80050760: sw          $t8, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r24;
    // 0x80050764: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80050768: b           L_80050770
    // 0x8005076C: sw          $t9, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r25;
        goto L_80050770;
    // 0x8005076C: sw          $t9, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r25;
L_80050770:
    // 0x80050770: jal         0x800072B0
    // 0x80050774: nop

    func_800072B0(rdram, ctx);
        goto after_47;
    // 0x80050774: nop

    after_47:
    // 0x80050778: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
L_8005077C:
    // 0x8005077C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80050780: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80050784: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80050788: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8005078C: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80050790: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80050794: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80050798: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8005079C: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800507A0: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800507A4: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x800507A8: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800507AC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x800507B0: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x800507B4: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x800507B8: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x800507BC: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x800507C0: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x800507C4: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x800507C8: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x800507CC: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x800507D0: jr          $ra
    // 0x800507D4: addiu       $sp, $sp, 0x3F0
    ctx->r29 = ADD32(ctx->r29, 0X3F0);
    return;
    // 0x800507D4: addiu       $sp, $sp, 0x3F0
    ctx->r29 = ADD32(ctx->r29, 0X3F0);
;}
RECOMP_FUNC void func_800507D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800507D8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800507DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800507E0: lw          $t6, 0x20($fp)
    ctx->r14 = MEM_W(ctx->r30, 0X20);
    // 0x800507E4: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800507E8: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x800507EC: nop

    // 0x800507F0: blez        $t7, L_80050930
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800507F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80050930;
    }
    // 0x800507F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800507F8: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800507FC: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80050800: or          $t2, $fp, $zero
    ctx->r10 = ctx->r30 | 0;
L_80050804:
    // 0x80050804: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80050808: jal         0x8004C020
    // 0x8005080C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8004C020(rdram, ctx);
        goto after_0;
    // 0x8005080C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x80050810: lw          $t8, 0x20($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X20);
    // 0x80050814: nop

    // 0x80050818: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8005081C: nop

    // 0x80050820: addu        $t6, $t9, $s6
    ctx->r14 = ADD32(ctx->r25, ctx->r22);
    // 0x80050824: lw          $s5, 0x0($t6)
    ctx->r21 = MEM_W(ctx->r14, 0X0);
    // 0x80050828: nop

    // 0x8005082C: lwc1        $f4, 0x4($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X4);
    // 0x80050830: nop

    // 0x80050834: c.lt.s      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.fl < ctx->f4.fl;
    // 0x80050838: nop

    // 0x8005083C: bc1f        L_80050910
    if (!c1cs) {
        // 0x80050840: nop
    
            goto L_80050910;
    }
    // 0x80050840: nop

    // 0x80050844: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x80050848: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x8005084C: jal         0x8004D57C
    // 0x80050850: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    func_8004D57C(rdram, ctx);
        goto after_1;
    // 0x80050850: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    after_1:
    // 0x80050854: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x80050858: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8005085C: blez        $v0, L_80050910
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80050860: nop
    
            goto L_80050910;
    }
    // 0x80050860: nop

    // 0x80050864: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80050868: lwc1        $f8, 0x8($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X8);
    // 0x8005086C: lwc1        $f4, 0x8($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X8);
    // 0x80050870: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80050874: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80050878: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8005087C: lwc1        $f10, 0x0($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80050880: lwc1        $f0, 0x4($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X4);
    // 0x80050884: lwc1        $f2, 0x4($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X4);
    // 0x80050888: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8005088C: lwc1        $f8, 0x0($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80050890: nop

    // 0x80050894: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80050898: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8005089C: nop

    // 0x800508A0: sub.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x800508A4: mul.s       $f8, $f2, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x800508A8: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800508AC: add.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x800508B0: nop

    // 0x800508B4: div.s       $f14, $f12, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f12.fl, ctx->f2.fl);
    // 0x800508B8: add.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f14.fl;
    // 0x800508BC: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x800508C0: nop

    // 0x800508C4: bc1f        L_80050910
    if (!c1cs) {
        // 0x800508C8: nop
    
            goto L_80050910;
    }
    // 0x800508C8: nop

    // 0x800508CC: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800508D0: nop

    // 0x800508D4: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x800508D8: nop

    // 0x800508DC: bc1f        L_80050910
    if (!c1cs) {
        // 0x800508E0: nop
    
            goto L_80050910;
    }
    // 0x800508E0: nop

    // 0x800508E4: swc1        $f16, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f16.u32l;
    // 0x800508E8: lw          $t7, 0x20($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X20);
    // 0x800508EC: nop

    // 0x800508F0: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x800508F4: nop

    // 0x800508F8: addu        $t9, $t8, $s6
    ctx->r25 = ADD32(ctx->r24, ctx->r22);
    // 0x800508FC: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x80050900: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x80050904: lw          $t7, 0x30($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X30);
    // 0x80050908: nop

    // 0x8005090C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_80050910:
    // 0x80050910: lw          $t9, 0x20($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X20);
    // 0x80050914: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80050918: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x8005091C: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x80050920: slt         $at, $s7, $t6
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80050924: bne         $at, $zero, L_80050804
    if (ctx->r1 != 0) {
        // 0x80050928: or          $t2, $fp, $zero
        ctx->r10 = ctx->r30 | 0;
            goto L_80050804;
    }
    // 0x80050928: or          $t2, $fp, $zero
    ctx->r10 = ctx->r30 | 0;
    // 0x8005092C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80050930:
    // 0x80050930: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80050934: jr          $ra
    // 0x80050938: nop

    return;
    // 0x80050938: nop

;}
RECOMP_FUNC void func_8005093C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005093C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80050940: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80050944: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80050948: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8005094C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x80050950: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80050954: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80050958: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8005095C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80050960: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80050964: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80050968: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8005096C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80050970: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80050974: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x80050978: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8005097C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x80050980: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80050984: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80050988: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x8005098C: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x80050990: addiu       $t6, $t6, 0x1B14
    ctx->r14 = ADD32(ctx->r14, 0X1B14);
    // 0x80050994: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    // 0x80050998: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8005099C: addiu       $t1, $sp, 0x94
    ctx->r9 = ADD32(ctx->r29, 0X94);
    // 0x800509A0: sw          $at, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r1;
    // 0x800509A4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800509A8: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x800509AC: sw          $t9, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r25;
    // 0x800509B0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800509B4: addiu       $t2, $t2, -0x2E38
    ctx->r10 = ADD32(ctx->r10, -0X2E38);
    // 0x800509B8: sw          $at, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r1;
    // 0x800509BC: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x800509C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800509C4: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x800509C8: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x800509CC: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x800509D0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800509D4: jal         0x8004DD00
    // 0x800509D8: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
    func_8004DD00(rdram, ctx);
        goto after_0;
    // 0x800509D8: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
    after_0:
    // 0x800509DC: jal         0x8004DCB8
    // 0x800509E0: nop

    func_8004DCB8(rdram, ctx);
        goto after_1;
    // 0x800509E0: nop

    after_1:
    // 0x800509E4: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x800509E8: addiu       $a3, $sp, 0xA4
    ctx->r7 = ADD32(ctx->r29, 0XA4);
    // 0x800509EC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800509F0: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x800509F4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800509F8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x800509FC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80050A00: jal         0x8004DA58
    // 0x80050A04: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    func_8004DA58(rdram, ctx);
        goto after_2;
    // 0x80050A04: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    after_2:
    // 0x80050A08: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x80050A0C: bltz        $v0, L_80050A38
    if (SIGNED(ctx->r2) < 0) {
        // 0x80050A10: or          $s4, $t0, $zero
        ctx->r20 = ctx->r8 | 0;
            goto L_80050A38;
    }
    // 0x80050A10: or          $s4, $t0, $zero
    ctx->r20 = ctx->r8 | 0;
    // 0x80050A14: lui         $fp, 0x800D
    ctx->r30 = S32(0X800D << 16);
    // 0x80050A18: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x80050A1C: addiu       $t7, $sp, 0x90
    ctx->r15 = ADD32(ctx->r29, 0X90);
    // 0x80050A20: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x80050A24: addiu       $fp, $fp, -0x5AA8
    ctx->r30 = ADD32(ctx->r30, -0X5AA8);
    // 0x80050A28: jal         0x800507D8
    // 0x80050A2C: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    func_800507D8(rdram, ctx);
        goto after_3;
    // 0x80050A2C: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    after_3:
    // 0x80050A30: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x80050A34: nop

L_80050A38:
    // 0x80050A38: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80050A3C: lw          $a1, 0x1B00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1B00);
    // 0x80050A40: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x80050A44: blez        $a1, L_80050B88
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80050A48: lw          $ra, 0x5C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X5C);
            goto L_80050B88;
    }
    // 0x80050A48: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_80050A4C:
    // 0x80050A4C: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80050A50: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80050A54: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80050A58: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x80050A5C: lw          $a0, -0x61E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X61E8);
    // 0x80050A60: nop

    // 0x80050A64: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80050A68: nop

    // 0x80050A6C: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x80050A70: bne         $t8, $zero, L_80050B6C
    if (ctx->r24 != 0) {
        // 0x80050A74: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_80050B6C;
    }
    // 0x80050A74: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x80050A78: bne         $t7, $zero, L_80050B6C
    if (ctx->r15 != 0) {
        // 0x80050A7C: andi        $t6, $v0, 0x2
        ctx->r14 = ctx->r2 & 0X2;
            goto L_80050B6C;
    }
    // 0x80050A7C: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80050A80: beq         $t6, $zero, L_80050B70
    if (ctx->r14 == 0) {
        // 0x80050A84: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_80050B70;
    }
    // 0x80050A84: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x80050A88: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80050A8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80050A90: bne         $v1, $at, L_80050AA0
    if (ctx->r3 != ctx->r1) {
        // 0x80050A94: or          $s4, $t0, $zero
        ctx->r20 = ctx->r8 | 0;
            goto L_80050AA0;
    }
    // 0x80050A94: or          $s4, $t0, $zero
    ctx->r20 = ctx->r8 | 0;
    // 0x80050A98: b           L_80050B40
    // 0x80050A9C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80050B40;
    // 0x80050A9C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80050AA0:
    // 0x80050AA0: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80050AA4: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80050AA8: lwc1        $f0, 0x0($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80050AAC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80050AB0: lwc1        $f8, 0xA0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80050AB4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80050AB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80050ABC: bc1f        L_80050ACC
    if (!c1cs) {
        // 0x80050AC0: nop
    
            goto L_80050ACC;
    }
    // 0x80050AC0: nop

    // 0x80050AC4: b           L_80050B40
    // 0x80050AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80050B40;
    // 0x80050AC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80050ACC:
    // 0x80050ACC: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80050AD0: nop

    // 0x80050AD4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80050AD8: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80050ADC: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80050AE0: nop

    // 0x80050AE4: bc1f        L_80050AF4
    if (!c1cs) {
        // 0x80050AE8: nop
    
            goto L_80050AF4;
    }
    // 0x80050AE8: nop

    // 0x80050AEC: b           L_80050B40
    // 0x80050AF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80050B40;
    // 0x80050AF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80050AF4:
    // 0x80050AF4: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80050AF8: lwc1        $f0, 0x8($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80050AFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80050B00: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80050B04: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80050B08: nop

    // 0x80050B0C: bc1f        L_80050B1C
    if (!c1cs) {
        // 0x80050B10: nop
    
            goto L_80050B1C;
    }
    // 0x80050B10: nop

    // 0x80050B14: b           L_80050B40
    // 0x80050B18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80050B40;
    // 0x80050B18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80050B1C:
    // 0x80050B1C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80050B20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80050B24: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80050B28: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80050B2C: nop

    // 0x80050B30: bc1f        L_80050B40
    if (!c1cs) {
        // 0x80050B34: nop
    
            goto L_80050B40;
    }
    // 0x80050B34: nop

    // 0x80050B38: b           L_80050B40
    // 0x80050B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80050B40;
    // 0x80050B3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80050B40:
    // 0x80050B40: bgtz        $v0, L_80050B6C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80050B44: or          $fp, $a0, $zero
        ctx->r30 = ctx->r4 | 0;
            goto L_80050B6C;
    }
    // 0x80050B44: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x80050B48: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x80050B4C: addiu       $t9, $sp, 0x90
    ctx->r25 = ADD32(ctx->r29, 0X90);
    // 0x80050B50: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x80050B54: jal         0x800507D8
    // 0x80050B58: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    func_800507D8(rdram, ctx);
        goto after_4;
    // 0x80050B58: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    after_4:
    // 0x80050B5C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80050B60: lw          $a1, 0x1B00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1B00);
    // 0x80050B64: lw          $t0, 0xA8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA8);
    // 0x80050B68: nop

L_80050B6C:
    // 0x80050B6C: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
L_80050B70:
    // 0x80050B70: nop

    // 0x80050B74: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80050B78: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80050B7C: bne         $at, $zero, L_80050A4C
    if (ctx->r1 != 0) {
        // 0x80050B80: sw          $t7, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->r15;
            goto L_80050A4C;
    }
    // 0x80050B80: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
    // 0x80050B84: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_80050B88:
    // 0x80050B88: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x80050B8C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80050B90: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80050B94: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80050B98: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80050B9C: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80050BA0: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80050BA4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80050BA8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80050BAC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80050BB0: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80050BB4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80050BB8: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80050BBC: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80050BC0: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80050BC4: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80050BC8: jr          $ra
    // 0x80050BCC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80050BCC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_80050BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050BD0: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80050BD4: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80050BD8: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80050BDC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80050BE0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80050BE4: swc1        $f16, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f16.u32l;
    // 0x80050BE8: lwc1        $f18, 0x0($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80050BEC: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80050BF0: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80050BF4: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80050BF8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80050BFC: swc1        $f10, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f10.u32l;
    // 0x80050C00: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80050C04: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80050C08: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80050C0C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80050C10: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80050C14: jr          $ra
    // 0x80050C18: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    return;
    // 0x80050C18: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80050C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050C1C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80050C20: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80050C24: ori         $at, $at, 0x3FEF
    ctx->r1 = ctx->r1 | 0X3FEF;
    // 0x80050C28: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80050C2C: jr          $ra
    // 0x80050C30: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    return;
    // 0x80050C30: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80050C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050C34: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80050C38: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80050C3C: ori         $t7, $t6, 0x8010
    ctx->r15 = ctx->r14 | 0X8010;
    // 0x80050C40: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x80050C44: lw          $v1, 0x1B00($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1B00);
    // 0x80050C48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80050C4C: blez        $v1, L_80050C90
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80050C50: lui         $a2, 0x800D
        ctx->r6 = S32(0X800D << 16);
            goto L_80050C90;
    }
    // 0x80050C50: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80050C54: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x80050C58: addiu       $a2, $a2, -0x61E8
    ctx->r6 = ADD32(ctx->r6, -0X61E8);
L_80050C5C:
    // 0x80050C5C: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80050C60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80050C64: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x80050C68: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80050C6C: bne         $a1, $t8, L_80050C88
    if (ctx->r5 != ctx->r24) {
        // 0x80050C70: nop
    
            goto L_80050C88;
    }
    // 0x80050C70: nop

    // 0x80050C74: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80050C78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80050C7C: ori         $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 | 0X4000;
    // 0x80050C80: jr          $ra
    // 0x80050C84: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    return;
    // 0x80050C84: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
L_80050C88:
    // 0x80050C88: bne         $at, $zero, L_80050C5C
    if (ctx->r1 != 0) {
        // 0x80050C8C: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80050C5C;
    }
    // 0x80050C8C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_80050C90:
    // 0x80050C90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80050C94: jr          $ra
    // 0x80050C98: nop

    return;
    // 0x80050C98: nop

;}
RECOMP_FUNC void func_80050C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050C9C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80050CA0: lw          $v1, 0x1B00($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1B00);
    // 0x80050CA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80050CA8: blez        $v1, L_80050D04
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80050CAC: lui         $a1, 0x800D
        ctx->r5 = S32(0X800D << 16);
            goto L_80050D04;
    }
    // 0x80050CAC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80050CB0: addiu       $a1, $a1, -0x61E8
    ctx->r5 = ADD32(ctx->r5, -0X61E8);
L_80050CB4:
    // 0x80050CB4: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x80050CB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80050CBC: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
    // 0x80050CC0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80050CC4: bne         $a0, $t6, L_80050CFC
    if (ctx->r4 != ctx->r14) {
        // 0x80050CC8: nop
    
            goto L_80050CFC;
    }
    // 0x80050CC8: nop

    // 0x80050CCC: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x80050CD0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80050CD4: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x80050CD8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80050CDC: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80050CE0: lw          $a2, 0x0($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X0);
    // 0x80050CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80050CE8: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x80050CEC: nop

    // 0x80050CF0: ori         $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 | 0X4000;
    // 0x80050CF4: jr          $ra
    // 0x80050CF8: sw          $t0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r8;
    return;
    // 0x80050CF8: sw          $t0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r8;
L_80050CFC:
    // 0x80050CFC: bne         $at, $zero, L_80050CB4
    if (ctx->r1 != 0) {
        // 0x80050D00: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_80050CB4;
    }
    // 0x80050D00: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_80050D04:
    // 0x80050D04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80050D08: jr          $ra
    // 0x80050D0C: nop

    return;
    // 0x80050D0C: nop

;}
RECOMP_FUNC void func_80050D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050D10: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80050D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80050D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80050D1C: swc1        $f14, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f14.u32l;
    // 0x80050D20: swc1        $f14, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f14.u32l;
    // 0x80050D24: swc1        $f14, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f14.u32l;
    // 0x80050D28: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80050D2C: nop

    // 0x80050D30: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x80050D34: nop

    // 0x80050D38: bc1f        L_80050D4C
    if (!c1cs) {
        // 0x80050D3C: nop
    
            goto L_80050D4C;
    }
    // 0x80050D3C: nop

    // 0x80050D40: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80050D44: b           L_80050DAC
    // 0x80050D48: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
        goto L_80050DAC;
    // 0x80050D48: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80050D4C:
    // 0x80050D4C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80050D50: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80050D54: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80050D58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80050D5C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80050D60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80050D64: jal         0x8007A500
    // 0x80050D68: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x80050D68: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x80050D6C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80050D70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80050D74: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80050D78: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80050D7C: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80050D80: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80050D84: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80050D88: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80050D8C: lwc1        $f18, 0x4($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80050D90: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x80050D94: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80050D98: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80050D9C: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80050DA0: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80050DA4: sub.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80050DA8: swc1        $f4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f4.u32l;
L_80050DAC:
    // 0x80050DAC: lwc1        $f2, 0x8($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80050DB0: nop

    // 0x80050DB4: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x80050DB8: nop

    // 0x80050DBC: bc1f        L_80050DD0
    if (!c1cs) {
        // 0x80050DC0: nop
    
            goto L_80050DD0;
    }
    // 0x80050DC0: nop

    // 0x80050DC4: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80050DC8: b           L_80050E2C
    // 0x80050DCC: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
        goto L_80050E2C;
    // 0x80050DCC: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
L_80050DD0:
    // 0x80050DD0: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80050DD4: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80050DD8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80050DDC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80050DE0: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80050DE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80050DE8: jal         0x8007A500
    // 0x80050DEC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x80050DEC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_1:
    // 0x80050DF0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80050DF4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80050DF8: lwc1        $f18, 0x4($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80050DFC: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80050E00: div.s       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80050E04: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80050E08: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80050E0C: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80050E10: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    // 0x80050E14: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80050E18: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80050E1C: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80050E20: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80050E24: sub.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80050E28: swc1        $f6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f6.u32l;
L_80050E2C:
    // 0x80050E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80050E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80050E34: jr          $ra
    // 0x80050E38: nop

    return;
    // 0x80050E38: nop

    // 0x80050E3C: jr          $ra
    // 0x80050E40: nop

    return;
    // 0x80050E40: nop

    // 0x80050E44: jr          $ra
    // 0x80050E48: nop

    return;
    // 0x80050E48: nop

    // 0x80050E4C: jr          $ra
    // 0x80050E50: nop

    return;
    // 0x80050E50: nop

    // 0x80050E54: jr          $ra
    // 0x80050E58: nop

    return;
    // 0x80050E58: nop

;}
RECOMP_FUNC void func_80050E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80050E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80050E68: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80050E6C: addiu       $a1, $a1, 0x1B50
    ctx->r5 = ADD32(ctx->r5, 0X1B50);
    // 0x80050E70: jal         0x80073EF0
    // 0x80050E74: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80050E74: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x80050E78: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80050E7C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80050E80: addiu       $a0, $a0, -0x5998
    ctx->r4 = ADD32(ctx->r4, -0X5998);
    // 0x80050E84: addiu       $v0, $v0, -0x59F0
    ctx->r2 = ADD32(ctx->r2, -0X59F0);
    // 0x80050E88: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80050E8C:
    // 0x80050E8C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80050E90: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80050E94: bne         $at, $zero, L_80050E8C
    if (ctx->r1 != 0) {
        // 0x80050E98: sw          $v1, -0x8($v0)
        MEM_W(-0X8, ctx->r2) = ctx->r3;
            goto L_80050E8C;
    }
    // 0x80050E98: sw          $v1, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r3;
    // 0x80050E9C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80050EA0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80050EA4: addiu       $a0, $a0, -0x2D90
    ctx->r4 = ADD32(ctx->r4, -0X2D90);
    // 0x80050EA8: addiu       $v0, $v0, -0x2E10
    ctx->r2 = ADD32(ctx->r2, -0X2E10);
L_80050EAC:
    // 0x80050EAC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80050EB0: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80050EB4: bne         $at, $zero, L_80050EAC
    if (ctx->r1 != 0) {
        // 0x80050EB8: sw          $v1, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r3;
            goto L_80050EAC;
    }
    // 0x80050EB8: sw          $v1, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r3;
    // 0x80050EBC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80050EC0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80050EC4: addiu       $a0, $a0, -0x5598
    ctx->r4 = ADD32(ctx->r4, -0X5598);
    // 0x80050EC8: addiu       $v0, $v0, -0x5998
    ctx->r2 = ADD32(ctx->r2, -0X5998);
L_80050ECC:
    // 0x80050ECC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80050ED0: sltu        $at, $v0, $a0
    ctx->r1 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80050ED4: bne         $at, $zero, L_80050ECC
    if (ctx->r1 != 0) {
        // 0x80050ED8: sw          $v1, -0x10($v0)
        MEM_W(-0X10, ctx->r2) = ctx->r3;
            goto L_80050ECC;
    }
    // 0x80050ED8: sw          $v1, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r3;
    // 0x80050EDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80050EE0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80050EE4: addiu       $a0, $a0, -0x2C90
    ctx->r4 = ADD32(ctx->r4, -0X2C90);
    // 0x80050EE8: addiu       $v0, $v0, -0x2D90
    ctx->r2 = ADD32(ctx->r2, -0X2D90);
L_80050EEC:
    // 0x80050EEC: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80050EF0: sw          $v1, -0x18($v0)
    MEM_W(-0X18, ctx->r2) = ctx->r3;
    // 0x80050EF4: sw          $v1, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->r3;
    // 0x80050EF8: sw          $v1, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r3;
    // 0x80050EFC: bne         $v0, $a0, L_80050EEC
    if (ctx->r2 != ctx->r4) {
        // 0x80050F00: sw          $v1, -0x20($v0)
        MEM_W(-0X20, ctx->r2) = ctx->r3;
            goto L_80050EEC;
    }
    // 0x80050F00: sw          $v1, -0x20($v0)
    MEM_W(-0X20, ctx->r2) = ctx->r3;
    // 0x80050F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80050F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80050F0C: jr          $ra
    // 0x80050F10: nop

    return;
    // 0x80050F10: nop

;}
RECOMP_FUNC void func_80050F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050F14: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80050F18: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80050F1C: addiu       $a1, $a1, -0x5598
    ctx->r5 = ADD32(ctx->r5, -0X5598);
    // 0x80050F20: addiu       $v1, $v1, -0x5998
    ctx->r3 = ADD32(ctx->r3, -0X5998);
    // 0x80050F24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80050F28:
    // 0x80050F28: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80050F2C: nop

    // 0x80050F30: bne         $a0, $t6, L_80050F3C
    if (ctx->r4 != ctx->r14) {
        // 0x80050F34: nop
    
            goto L_80050F3C;
    }
    // 0x80050F34: nop

    // 0x80050F38: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80050F3C:
    // 0x80050F3C: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x80050F40: nop

    // 0x80050F44: bne         $a0, $t7, L_80050F50
    if (ctx->r4 != ctx->r15) {
        // 0x80050F48: nop
    
            goto L_80050F50;
    }
    // 0x80050F48: nop

    // 0x80050F4C: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
L_80050F50:
    // 0x80050F50: lw          $t8, 0x20($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X20);
    // 0x80050F54: nop

    // 0x80050F58: bne         $a0, $t8, L_80050F64
    if (ctx->r4 != ctx->r24) {
        // 0x80050F5C: nop
    
            goto L_80050F64;
    }
    // 0x80050F5C: nop

    // 0x80050F60: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
L_80050F64:
    // 0x80050F64: lw          $t9, 0x30($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X30);
    // 0x80050F68: nop

    // 0x80050F6C: bne         $a0, $t9, L_80050F78
    if (ctx->r4 != ctx->r25) {
        // 0x80050F70: nop
    
            goto L_80050F78;
    }
    // 0x80050F70: nop

    // 0x80050F74: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
L_80050F78:
    // 0x80050F78: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x80050F7C: bne         $v1, $a1, L_80050F28
    if (ctx->r3 != ctx->r5) {
        // 0x80050F80: nop
    
            goto L_80050F28;
    }
    // 0x80050F80: nop

    // 0x80050F84: jr          $ra
    // 0x80050F88: nop

    return;
    // 0x80050F88: nop

;}
RECOMP_FUNC void func_80050F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050F8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80050F90: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80050F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80050F98: addiu       $s1, $s1, -0x2E0C
    ctx->r17 = ADD32(ctx->r17, -0X2E0C);
    // 0x80050F9C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80050FA0: addiu       $s4, $zero, 0x1F
    ctx->r20 = ADD32(0, 0X1F);
    // 0x80050FA4: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_80050FA8:
    // 0x80050FA8: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80050FAC: nop

    // 0x80050FB0: bne         $s2, $t6, L_80050FC4
    if (ctx->r18 != ctx->r14) {
        // 0x80050FB4: nop
    
            goto L_80050FC4;
    }
    // 0x80050FB4: nop

    // 0x80050FB8: jal         0x8007E950
    // 0x80050FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osUnmapTLB_recomp(rdram, ctx);
        goto after_0;
    // 0x80050FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80050FC0: sw          $s3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r19;
L_80050FC4:
    // 0x80050FC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80050FC8: bne         $s0, $s4, L_80050FA8
    if (ctx->r16 != ctx->r20) {
        // 0x80050FCC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80050FA8;
    }
    // 0x80050FCC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80050FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80050FD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80050FD8: jr          $ra
    // 0x80050FDC: nop

    return;
    // 0x80050FDC: nop

    // 0x80050FE0: jr          $ra
    // 0x80050FE4: nop

    return;
    // 0x80050FE4: nop

;}
RECOMP_FUNC void func_80050FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80050FE8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80050FEC: slti        $at, $a0, 0x7
    ctx->r1 = SIGNED(ctx->r4) < 0X7 ? 1 : 0;
    // 0x80050FF0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80050FF4: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80050FF8: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80050FFC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80051000: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80051004: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80051008: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8005100C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80051010: beq         $at, $zero, L_80051054
    if (ctx->r1 == 0) {
        // 0x80051014: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80051054;
    }
    // 0x80051014: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80051018: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8005101C: addiu       $t7, $t7, -0x59F0
    ctx->r15 = ADD32(ctx->r15, -0X59F0);
    // 0x80051020: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80051024: addu        $s5, $t6, $t7
    ctx->r21 = ADD32(ctx->r14, ctx->r15);
    // 0x80051028: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x8005102C: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x80051030: beq         $s7, $t8, L_800510D0
    if (ctx->r23 == ctx->r24) {
        // 0x80051034: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_800510D0;
    }
    // 0x80051034: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80051038: jal         0x80050F8C
    // 0x8005103C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80050F8C(rdram, ctx);
        goto after_0;
    // 0x8005103C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80051040: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80051044: jal         0x80050F14
    // 0x80051048: nop

    func_80050F14(rdram, ctx);
        goto after_1;
    // 0x80051048: nop

    after_1:
    // 0x8005104C: b           L_800510D0
    // 0x80051050: sw          $s7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r23;
        goto L_800510D0;
    // 0x80051050: sw          $s7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r23;
L_80051054:
    // 0x80051054: lui         $s6, 0x800D
    ctx->r22 = S32(0X800D << 16);
    // 0x80051058: addiu       $s6, $s6, -0x59B8
    ctx->r22 = ADD32(ctx->r22, -0X59B8);
    // 0x8005105C: addiu       $s5, $zero, 0x7
    ctx->r21 = ADD32(0, 0X7);
    // 0x80051060: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80051064:
    // 0x80051064: lw          $t9, 0x0($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X0);
    // 0x80051068: nop

    // 0x8005106C: bne         $a0, $t9, L_800510C4
    if (ctx->r4 != ctx->r25) {
        // 0x80051070: lui         $s0, 0x800B
        ctx->r16 = S32(0X800B << 16);
            goto L_800510C4;
    }
    // 0x80051070: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80051074: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80051078: addiu       $s1, $s1, -0x2C90
    ctx->r17 = ADD32(ctx->r17, -0X2C90);
    // 0x8005107C: addiu       $s0, $s0, -0x2D90
    ctx->r16 = ADD32(ctx->r16, -0X2D90);
    // 0x80051080: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
L_80051084:
    // 0x80051084: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80051088: nop

    // 0x8005108C: bne         $s5, $t6, L_800510A0
    if (ctx->r21 != ctx->r14) {
        // 0x80051090: nop
    
            goto L_800510A0;
    }
    // 0x80051090: nop

    // 0x80051094: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80051098: jal         0x800075A0
    // 0x8005109C: sw          $s7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r23;
    func_800075A0(rdram, ctx);
        goto after_2;
    // 0x8005109C: sw          $s7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r23;
    after_2:
L_800510A0:
    // 0x800510A0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800510A4: bne         $s0, $s1, L_80051084
    if (ctx->r16 != ctx->r17) {
        // 0x800510A8: nop
    
            goto L_80051084;
    }
    // 0x800510A8: nop

    // 0x800510AC: jal         0x80050F8C
    // 0x800510B0: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    func_80050F8C(rdram, ctx);
        goto after_3;
    // 0x800510B0: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    after_3:
    // 0x800510B4: jal         0x80050F14
    // 0x800510B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80050F14(rdram, ctx);
        goto after_4;
    // 0x800510B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x800510BC: b           L_800510D0
    // 0x800510C0: sw          $s7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r23;
        goto L_800510D0;
    // 0x800510C0: sw          $s7, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r23;
L_800510C4:
    // 0x800510C4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800510C8: bne         $s5, $v0, L_80051064
    if (ctx->r21 != ctx->r2) {
        // 0x800510CC: addiu       $s6, $s6, 0x8
        ctx->r22 = ADD32(ctx->r22, 0X8);
            goto L_80051064;
    }
    // 0x800510CC: addiu       $s6, $s6, 0x8
    ctx->r22 = ADD32(ctx->r22, 0X8);
L_800510D0:
    // 0x800510D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800510D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800510D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800510DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800510E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800510E4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800510E8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800510EC: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800510F0: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800510F4: jr          $ra
    // 0x800510F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800510F8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800510FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800510FC: jr          $ra
    // 0x80051100: nop

    return;
    // 0x80051100: nop

;}
RECOMP_FUNC void func_80051104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80051108: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005110C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051110: addiu       $a0, $a0, -0x2E0C
    ctx->r4 = ADD32(ctx->r4, -0X2E0C);
    // 0x80051114: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80051118: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x8005111C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80051120:
    // 0x80051120: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80051124: nop

    // 0x80051128: bne         $v0, $t6, L_8005113C
    if (ctx->r2 != ctx->r14) {
        // 0x8005112C: nop
    
            goto L_8005113C;
    }
    // 0x8005112C: nop

    // 0x80051130: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x80051134: b           L_80051158
    // 0x80051138: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80051158;
    // 0x80051138: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8005113C:
    // 0x8005113C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80051140: bne         $v1, $a1, L_80051120
    if (ctx->r3 != ctx->r5) {
        // 0x80051144: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_80051120;
    }
    // 0x80051144: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80051148: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005114C: jal         0x80000FBC
    // 0x80051150: addiu       $a0, $a0, 0x5E10
    ctx->r4 = ADD32(ctx->r4, 0X5E10);
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80051150: addiu       $a0, $a0, 0x5E10
    ctx->r4 = ADD32(ctx->r4, 0X5E10);
    after_0:
    // 0x80051154: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80051158:
    // 0x80051158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005115C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80051160: jr          $ra
    // 0x80051164: nop

    return;
    // 0x80051164: nop

;}
RECOMP_FUNC void func_80051168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051168: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005116C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80051170: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80051174: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80051178: addiu       $s3, $s3, -0x5598
    ctx->r19 = ADD32(ctx->r19, -0X5598);
    // 0x8005117C: addiu       $s0, $s0, -0x5998
    ctx->r16 = ADD32(ctx->r16, -0X5998);
    // 0x80051180: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80051184: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_80051188:
    // 0x80051188: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8005118C: nop

    // 0x80051190: bne         $s1, $t6, L_80051218
    if (ctx->r17 != ctx->r14) {
        // 0x80051194: nop
    
            goto L_80051218;
    }
    // 0x80051194: nop

    // 0x80051198: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8005119C: nop

    // 0x800511A0: bne         $s2, $v0, L_800511E0
    if (ctx->r18 != ctx->r2) {
        // 0x800511A4: nop
    
            goto L_800511E0;
    }
    // 0x800511A4: nop

    // 0x800511A8: jal         0x80051104
    // 0x800511AC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80051104(rdram, ctx);
        goto after_0;
    // 0x800511AC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x800511B0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x800511B4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800511B8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800511BC: addiu       $t7, $v1, 0x4000
    ctx->r15 = ADD32(ctx->r3, 0X4000);
    // 0x800511C0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800511C4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800511C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800511CC: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    // 0x800511D0: jal         0x800750D0
    // 0x800511D4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    osMapTLB_recomp(rdram, ctx);
        goto after_1;
    // 0x800511D4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_1:
    // 0x800511D8: b           L_8005121C
    // 0x800511DC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
        goto L_8005121C;
    // 0x800511DC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_800511E0:
    // 0x800511E0: bne         $s4, $v0, L_80051218
    if (ctx->r20 != ctx->r2) {
        // 0x800511E4: nop
    
            goto L_80051218;
    }
    // 0x800511E4: nop

    // 0x800511E8: jal         0x80051104
    // 0x800511EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80051104(rdram, ctx);
        goto after_2;
    // 0x800511EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x800511F0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x800511F4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800511F8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800511FC: addiu       $t9, $v1, 0x1000
    ctx->r25 = ADD32(ctx->r3, 0X1000);
    // 0x80051200: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80051204: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x80051208: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005120C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80051210: jal         0x800750D0
    // 0x80051214: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    osMapTLB_recomp(rdram, ctx);
        goto after_3;
    // 0x80051214: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_3:
L_80051218:
    // 0x80051218: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_8005121C:
    // 0x8005121C: bne         $s0, $s3, L_80051188
    if (ctx->r16 != ctx->r19) {
        // 0x80051220: nop
    
            goto L_80051188;
    }
    // 0x80051220: nop

    // 0x80051224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80051228: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8005122C: jr          $ra
    // 0x80051230: nop

    return;
    // 0x80051230: nop

    // 0x80051234: jr          $ra
    // 0x80051238: nop

    return;
    // 0x80051238: nop

    // 0x8005123C: jr          $ra
    // 0x80051240: nop

    return;
    // 0x80051240: nop

    // 0x80051244: jr          $ra
    // 0x80051248: nop

    return;
    // 0x80051248: nop

;}
RECOMP_FUNC void func_8005124C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005124C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80051250: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80051254: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80051258: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8005125C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80051260: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80051264: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80051268: jal         0x80007774
    // 0x8005126C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005126C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80051270: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x80051274: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80051278: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8005127C: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80051280: addiu       $s1, $s1, -0x2E0C
    ctx->r17 = ADD32(ctx->r17, -0X2E0C);
    // 0x80051284: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80051288: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x8005128C: addiu       $s2, $zero, 0x1F
    ctx->r18 = ADD32(0, 0X1F);
    // 0x80051290: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_80051294:
    // 0x80051294: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80051298: nop

    // 0x8005129C: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x800512A0: bne         $at, $zero, L_800512B4
    if (ctx->r1 != 0) {
        // 0x800512A4: nop
    
            goto L_800512B4;
    }
    // 0x800512A4: nop

    // 0x800512A8: jal         0x8007E950
    // 0x800512AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osUnmapTLB_recomp(rdram, ctx);
        goto after_1;
    // 0x800512AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800512B0: sw          $s5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r21;
L_800512B4:
    // 0x800512B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800512B8: bne         $s0, $s2, L_80051294
    if (ctx->r16 != ctx->r18) {
        // 0x800512BC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80051294;
    }
    // 0x800512BC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800512C0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800512C4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800512C8: jal         0x80051168
    // 0x800512CC: sw          $s1, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r17;
    func_80051168(rdram, ctx);
        goto after_2;
    // 0x800512CC: sw          $s1, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r17;
    after_2:
    // 0x800512D0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800512D4: nop

    // 0x800512D8: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x800512DC: nop

    // 0x800512E0: beq         $v0, $zero, L_800512F0
    if (ctx->r2 == 0) {
        // 0x800512E4: nop
    
            goto L_800512F0;
    }
    // 0x800512E4: nop

    // 0x800512E8: jalr        $v0
    // 0x800512EC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x800512EC: nop

    after_3:
L_800512F0:
    // 0x800512F0: jal         0x80007774
    // 0x800512F4: nop

    func_80007774(rdram, ctx);
        goto after_4;
    // 0x800512F4: nop

    after_4:
    // 0x800512F8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800512FC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80051300: addiu       $a0, $a0, -0x2C90
    ctx->r4 = ADD32(ctx->r4, -0X2C90);
    // 0x80051304: addiu       $v1, $v1, -0x2D90
    ctx->r3 = ADD32(ctx->r3, -0X2D90);
L_80051308:
    // 0x80051308: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8005130C: nop

    // 0x80051310: beq         $s5, $t8, L_80051330
    if (ctx->r21 == ctx->r24) {
        // 0x80051314: nop
    
            goto L_80051330;
    }
    // 0x80051314: nop

    // 0x80051318: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x8005131C: nop

    // 0x80051320: bne         $v0, $t9, L_80051330
    if (ctx->r2 != ctx->r25) {
        // 0x80051324: nop
    
            goto L_80051330;
    }
    // 0x80051324: nop

    // 0x80051328: b           L_8005133C
    // 0x8005132C: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
        goto L_8005133C;
    // 0x8005132C: sw          $s5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r21;
L_80051330:
    // 0x80051330: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80051334: bne         $v1, $a0, L_80051308
    if (ctx->r3 != ctx->r4) {
        // 0x80051338: nop
    
            goto L_80051308;
    }
    // 0x80051338: nop

L_8005133C:
    // 0x8005133C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80051340: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80051344: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80051348: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8005134C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80051350: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80051354: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80051358: jr          $ra
    // 0x8005135C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8005135C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80051360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051360: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80051364: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80051368: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005136C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80051370: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80051374: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80051378: jal         0x80007774
    // 0x8005137C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005137C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80051380: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x80051384: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80051388: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x8005138C: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80051390: addiu       $s1, $s1, -0x2E0C
    ctx->r17 = ADD32(ctx->r17, -0X2E0C);
    // 0x80051394: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80051398: addiu       $s3, $zero, 0x1F
    ctx->r19 = ADD32(0, 0X1F);
    // 0x8005139C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x800513A0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_800513A4:
    // 0x800513A4: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800513A8: nop

    // 0x800513AC: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x800513B0: bne         $at, $zero, L_800513C4
    if (ctx->r1 != 0) {
        // 0x800513B4: nop
    
            goto L_800513C4;
    }
    // 0x800513B4: nop

    // 0x800513B8: jal         0x8007E950
    // 0x800513BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osUnmapTLB_recomp(rdram, ctx);
        goto after_1;
    // 0x800513BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800513C0: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
L_800513C4:
    // 0x800513C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800513C8: bne         $s0, $s3, L_800513A4
    if (ctx->r16 != ctx->r19) {
        // 0x800513CC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800513A4;
    }
    // 0x800513CC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800513D0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800513D4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800513D8: jal         0x80051168
    // 0x800513DC: sw          $s1, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r17;
    func_80051168(rdram, ctx);
        goto after_2;
    // 0x800513DC: sw          $s1, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r17;
    after_2:
    // 0x800513E0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800513E4: nop

    // 0x800513E8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x800513EC: nop

    // 0x800513F0: jalr        $v0
    // 0x800513F4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x800513F4: nop

    after_3:
    // 0x800513F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800513FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051400: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80051404: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80051408: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005140C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80051410: jr          $ra
    // 0x80051414: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80051414: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80051418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051418: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005141C: slti        $at, $a0, 0x7
    ctx->r1 = SIGNED(ctx->r4) < 0X7 ? 1 : 0;
    // 0x80051420: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80051424: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80051428: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8005142C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80051430: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80051434: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80051438: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8005143C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80051440: beq         $at, $zero, L_8005146C
    if (ctx->r1 == 0) {
        // 0x80051444: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8005146C;
    }
    // 0x80051444: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80051448: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x8005144C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80051450: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80051454: lw          $t9, -0x59EC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X59EC);
    // 0x80051458: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8005145C: jalr        $t9
    // 0x80051460: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80051460: nop

    after_0:
    // 0x80051464: b           L_80051504
    // 0x80051468: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80051504;
    // 0x80051468: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8005146C:
    // 0x8005146C: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x80051470: addiu       $s5, $s5, -0x59B8
    ctx->r21 = ADD32(ctx->r21, -0X59B8);
    // 0x80051474: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
    // 0x80051478: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8005147C:
    // 0x8005147C: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80051480: nop

    // 0x80051484: bne         $a2, $t7, L_800514F0
    if (ctx->r6 != ctx->r15) {
        // 0x80051488: lui         $s1, 0x800B
        ctx->r17 = S32(0X800B << 16);
            goto L_800514F0;
    }
    // 0x80051488: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8005148C: addiu       $s1, $s1, -0x2E0C
    ctx->r17 = ADD32(ctx->r17, -0X2E0C);
    // 0x80051490: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80051494: addiu       $s4, $zero, 0x1F
    ctx->r20 = ADD32(0, 0X1F);
    // 0x80051498: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_8005149C:
    // 0x8005149C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x800514A0: nop

    // 0x800514A4: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x800514A8: bne         $at, $zero, L_800514BC
    if (ctx->r1 != 0) {
        // 0x800514AC: nop
    
            goto L_800514BC;
    }
    // 0x800514AC: nop

    // 0x800514B0: jal         0x8007E950
    // 0x800514B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osUnmapTLB_recomp(rdram, ctx);
        goto after_1;
    // 0x800514B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800514B8: sw          $s3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r19;
L_800514BC:
    // 0x800514BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800514C0: bne         $s0, $s4, L_8005149C
    if (ctx->r16 != ctx->r20) {
        // 0x800514C4: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8005149C;
    }
    // 0x800514C4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800514C8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800514CC: sw          $s2, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r18;
    // 0x800514D0: jal         0x80051168
    // 0x800514D4: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    func_80051168(rdram, ctx);
        goto after_2;
    // 0x800514D4: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    after_2:
    // 0x800514D8: lw          $t9, 0x4($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X4);
    // 0x800514DC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800514E0: jalr        $t9
    // 0x800514E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x800514E4: nop

    after_3:
    // 0x800514E8: b           L_80051504
    // 0x800514EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80051504;
    // 0x800514EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800514F0:
    // 0x800514F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800514F4: bne         $s2, $v0, L_8005147C
    if (ctx->r18 != ctx->r2) {
        // 0x800514F8: addiu       $s5, $s5, 0x8
        ctx->r21 = ADD32(ctx->r21, 0X8);
            goto L_8005147C;
    }
    // 0x800514F8: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800514FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80051500: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80051504:
    // 0x80051504: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80051508: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005150C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80051510: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80051514: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80051518: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8005151C: jr          $ra
    // 0x80051520: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80051520: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80051524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051524: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80051528: addiu       $t1, $t1, -0x5998
    ctx->r9 = ADD32(ctx->r9, -0X5998);
    // 0x8005152C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80051530: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80051534: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80051538: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8005153C:
    // 0x8005153C: bne         $a0, $v0, L_800515D0
    if (ctx->r4 != ctx->r2) {
        // 0x80051540: sll         $t6, $v1, 4
        ctx->r14 = S32(ctx->r3 << 4);
            goto L_800515D0;
    }
    // 0x80051540: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x80051544: addu        $a1, $t1, $t6
    ctx->r5 = ADD32(ctx->r9, ctx->r14);
    // 0x80051548: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x8005154C: nop

    // 0x80051550: bne         $t0, $t7, L_800515D0
    if (ctx->r8 != ctx->r15) {
        // 0x80051554: nop
    
            goto L_800515D0;
    }
    // 0x80051554: nop

    // 0x80051558: lw          $t8, 0x10($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X10);
    // 0x8005155C: nop

    // 0x80051560: bne         $t0, $t8, L_800515D0
    if (ctx->r8 != ctx->r24) {
        // 0x80051564: nop
    
            goto L_800515D0;
    }
    // 0x80051564: nop

    // 0x80051568: lw          $t9, 0x20($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X20);
    // 0x8005156C: nop

    // 0x80051570: bne         $t0, $t9, L_800515D0
    if (ctx->r8 != ctx->r25) {
        // 0x80051574: nop
    
            goto L_800515D0;
    }
    // 0x80051574: nop

    // 0x80051578: lw          $t6, 0x30($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X30);
    // 0x8005157C: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x80051580: bne         $t0, $t6, L_800515D0
    if (ctx->r8 != ctx->r14) {
        // 0x80051584: sll         $t8, $v1, 13
        ctx->r24 = S32(ctx->r3 << 13);
            goto L_800515D0;
    }
    // 0x80051584: sll         $t8, $v1, 13
    ctx->r24 = S32(ctx->r3 << 13);
    // 0x80051588: addu        $v0, $t1, $t7
    ctx->r2 = ADD32(ctx->r9, ctx->r15);
    // 0x8005158C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80051590: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x80051594: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80051598: sw          $a2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r6;
    // 0x8005159C: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x800515A0: sw          $a2, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r6;
    // 0x800515A4: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x800515A8: sw          $a2, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r6;
    // 0x800515AC: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x800515B0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x800515B4: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x800515B8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800515BC: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x800515C0: sw          $a3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r7;
    // 0x800515C4: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x800515C8: jr          $ra
    // 0x800515CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800515CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800515D0:
    // 0x800515D0: bne         $a0, $t2, L_80051614
    if (ctx->r4 != ctx->r10) {
        // 0x800515D4: sll         $t7, $v1, 4
        ctx->r15 = S32(ctx->r3 << 4);
            goto L_80051614;
    }
    // 0x800515D4: sll         $t7, $v1, 4
    ctx->r15 = S32(ctx->r3 << 4);
    // 0x800515D8: addu        $a1, $t1, $t7
    ctx->r5 = ADD32(ctx->r9, ctx->r15);
    // 0x800515DC: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x800515E0: sll         $t9, $v1, 13
    ctx->r25 = S32(ctx->r3 << 13);
    // 0x800515E4: bne         $t0, $t8, L_80051614
    if (ctx->r8 != ctx->r24) {
        // 0x800515E8: lui         $at, 0x8025
        ctx->r1 = S32(0X8025 << 16);
            goto L_80051614;
    }
    // 0x800515E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x800515EC: addu        $t6, $t9, $at
    ctx->r14 = ADD32(ctx->r25, ctx->r1);
    // 0x800515F0: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x800515F4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800515F8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800515FC: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x80051600: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x80051604: sw          $a3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r7;
    // 0x80051608: sw          $t7, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r15;
    // 0x8005160C: jr          $ra
    // 0x80051610: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80051610: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80051614:
    // 0x80051614: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80051618: slti        $at, $v1, 0x40
    ctx->r1 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x8005161C: bne         $at, $zero, L_8005153C
    if (ctx->r1 != 0) {
        // 0x80051620: nop
    
            goto L_8005153C;
    }
    // 0x80051620: nop

    // 0x80051624: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80051628: jr          $ra
    // 0x8005162C: nop

    return;
    // 0x8005162C: nop

;}
RECOMP_FUNC void func_80051630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80051634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051638: beq         $a0, $zero, L_800516AC
    if (ctx->r4 == 0) {
        // 0x8005163C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_800516AC;
    }
    // 0x8005163C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80051640: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x80051644: addiu       $s4, $s4, 0x5E2C
    ctx->r20 = ADD32(ctx->r20, 0X5E2C);
    // 0x80051648: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8005164C: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x80051650: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
L_80051654:
    // 0x80051654: bne         $at, $zero, L_8005167C
    if (ctx->r1 != 0) {
        // 0x80051658: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8005167C;
    }
    // 0x80051658: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8005165C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80051660: jal         0x80051524
    // 0x80051664: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80051524(rdram, ctx);
        goto after_0;
    // 0x80051664: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_0:
    // 0x80051668: beq         $v0, $s3, L_8005167C
    if (ctx->r2 == ctx->r19) {
        // 0x8005166C: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_8005167C;
    }
    // 0x8005166C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x80051670: addiu       $s0, $s0, -0x4
    ctx->r16 = ADD32(ctx->r16, -0X4);
    // 0x80051674: b           L_800516A4
    // 0x80051678: addu        $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
        goto L_800516A4;
    // 0x80051678: addu        $s1, $s1, $at
    ctx->r17 = ADD32(ctx->r17, ctx->r1);
L_8005167C:
    // 0x8005167C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80051680: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80051684: jal         0x80051524
    // 0x80051688: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80051524(rdram, ctx);
        goto after_1;
    // 0x80051688: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
    // 0x8005168C: bne         $v0, $s3, L_8005169C
    if (ctx->r2 != ctx->r19) {
        // 0x80051690: nop
    
            goto L_8005169C;
    }
    // 0x80051690: nop

    // 0x80051694: jal         0x80000FBC
    // 0x80051698: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80000FBC(rdram, ctx);
        goto after_2;
    // 0x80051698: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
L_8005169C:
    // 0x8005169C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800516A0: addiu       $s1, $s1, 0x2000
    ctx->r17 = ADD32(ctx->r17, 0X2000);
L_800516A4:
    // 0x800516A4: bne         $s0, $zero, L_80051654
    if (ctx->r16 != 0) {
        // 0x800516A8: slti        $at, $s0, 0x4
        ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
            goto L_80051654;
    }
    // 0x800516A8: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
L_800516AC:
    // 0x800516AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800516B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800516B4: jr          $ra
    // 0x800516B8: nop

    return;
    // 0x800516B8: nop

;}
RECOMP_FUNC void func_800516BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800516BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800516C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800516C4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800516C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800516CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800516D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800516D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800516D8: beq         $a1, $zero, L_80051700
    if (ctx->r5 == 0) {
        // 0x800516DC: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80051700;
    }
    // 0x800516DC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800516E0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800516E4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800516E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800516EC: lw          $t7, 0x1B34($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1B34);
    // 0x800516F0: nop

    // 0x800516F4: addu        $a3, $t7, $a1
    ctx->r7 = ADD32(ctx->r15, ctx->r5);
    // 0x800516F8: b           L_80051704
    // 0x800516FC: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
        goto L_80051704;
    // 0x800516FC: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
L_80051700:
    // 0x80051700: addiu       $a3, $a2, 0xA
    ctx->r7 = ADD32(ctx->r6, 0XA);
L_80051704:
    // 0x80051704: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80051708: addiu       $t9, $t9, -0x59F0
    ctx->r25 = ADD32(ctx->r25, -0X59F0);
    // 0x8005170C: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x80051710: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80051714: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80051718: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005171C: bne         $t6, $at, L_80051784
    if (ctx->r14 != ctx->r1) {
        // 0x80051720: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80051784;
    }
    // 0x80051720: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80051724: sw          $a3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r7;
    // 0x80051728: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8005172C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80051730: jal         0x800022E4
    // 0x80051734: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_800022E4(rdram, ctx);
        goto after_0;
    // 0x80051734: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x80051738: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8005173C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80051740: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x80051744: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x80051748: addu        $a1, $a1, $at
    ctx->r5 = ADD32(ctx->r5, ctx->r1);
    // 0x8005174C: srl         $t7, $a0, 13
    ctx->r15 = S32(U32(ctx->r4) >> 13);
    // 0x80051750: addiu       $a0, $t7, 0x1
    ctx->r4 = ADD32(ctx->r15, 0X1);
    // 0x80051754: jal         0x80051630
    // 0x80051758: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    func_80051630(rdram, ctx);
        goto after_1;
    // 0x80051758: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_1:
    // 0x8005175C: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x80051760: jal         0x80051168
    // 0x80051764: nop

    func_80051168(rdram, ctx);
        goto after_2;
    // 0x80051764: nop

    after_2:
    // 0x80051768: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8005176C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80051770: jal         0x800024C0
    // 0x80051774: nop

    func_800024C0(rdram, ctx);
        goto after_3;
    // 0x80051774: nop

    after_3:
    // 0x80051778: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8005177C: nop

    // 0x80051780: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
L_80051784:
    // 0x80051784: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80051788: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005178C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80051790: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80051794: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80051798: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005179C: jr          $ra
    // 0x800517A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800517A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800517A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800517A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800517A8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800517AC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800517B0: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x800517B4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800517B8: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x800517BC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800517C0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800517C4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800517C8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800517CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800517D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800517D4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800517D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800517DC: addiu       $v0, $v0, -0x5998
    ctx->r2 = ADD32(ctx->r2, -0X5998);
    // 0x800517E0: addiu       $s5, $s5, -0x59B8
    ctx->r21 = ADD32(ctx->r21, -0X59B8);
L_800517E4:
    // 0x800517E4: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x800517E8: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800517EC: beq         $fp, $t6, L_800518BC
    if (ctx->r30 == ctx->r14) {
        // 0x800517F0: sltu        $at, $s5, $v0
        ctx->r1 = ctx->r21 < ctx->r2 ? 1 : 0;
            goto L_800518BC;
    }
    // 0x800517F0: sltu        $at, $s5, $v0
    ctx->r1 = ctx->r21 < ctx->r2 ? 1 : 0;
    // 0x800517F4: bne         $at, $zero, L_800517E4
    if (ctx->r1 != 0) {
        // 0x800517F8: nop
    
            goto L_800517E4;
    }
    // 0x800517F8: nop

    // 0x800517FC: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x80051800: addiu       $s5, $s5, -0x59B8
    ctx->r21 = ADD32(ctx->r21, -0X59B8);
    // 0x80051804: addiu       $s6, $zero, 0x7
    ctx->r22 = ADD32(0, 0X7);
    // 0x80051808: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x8005180C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_80051810:
    // 0x80051810: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80051814: nop

    // 0x80051818: bne         $s7, $t7, L_800518A4
    if (ctx->r23 != ctx->r15) {
        // 0x8005181C: nop
    
            goto L_800518A4;
    }
    // 0x8005181C: nop

    // 0x80051820: sw          $fp, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r30;
    // 0x80051824: jal         0x800022E4
    // 0x80051828: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_800022E4(rdram, ctx);
        goto after_0;
    // 0x80051828: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_0:
    // 0x8005182C: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x80051830: srl         $t8, $a0, 13
    ctx->r24 = S32(U32(ctx->r4) >> 13);
    // 0x80051834: addiu       $a0, $t8, 0x1
    ctx->r4 = ADD32(ctx->r24, 0X1);
    // 0x80051838: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x8005183C: jal         0x80051630
    // 0x80051840: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    func_80051630(rdram, ctx);
        goto after_1;
    // 0x80051840: or          $s2, $s6, $zero
    ctx->r18 = ctx->r22 | 0;
    after_1:
    // 0x80051844: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80051848: addiu       $s1, $s1, -0x2E0C
    ctx->r17 = ADD32(ctx->r17, -0X2E0C);
    // 0x8005184C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80051850: addiu       $s2, $zero, 0x1F
    ctx->r18 = ADD32(0, 0X1F);
L_80051854:
    // 0x80051854: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80051858: nop

    // 0x8005185C: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x80051860: bne         $at, $zero, L_80051874
    if (ctx->r1 != 0) {
        // 0x80051864: nop
    
            goto L_80051874;
    }
    // 0x80051864: nop

    // 0x80051868: jal         0x8007E950
    // 0x8005186C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osUnmapTLB_recomp(rdram, ctx);
        goto after_2;
    // 0x8005186C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80051870: sw          $s7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r23;
L_80051874:
    // 0x80051874: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80051878: bne         $s0, $s2, L_80051854
    if (ctx->r16 != ctx->r18) {
        // 0x8005187C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80051854;
    }
    // 0x8005187C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80051880: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80051884: sw          $s6, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r22;
    // 0x80051888: jal         0x80051168
    // 0x8005188C: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
    func_80051168(rdram, ctx);
        goto after_3;
    // 0x8005188C: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
    after_3:
    // 0x80051890: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80051894: jal         0x800024C0
    // 0x80051898: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    func_800024C0(rdram, ctx);
        goto after_4;
    // 0x80051898: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    after_4:
    // 0x8005189C: b           L_800518BC
    // 0x800518A0: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
        goto L_800518BC;
    // 0x800518A0: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
L_800518A4:
    // 0x800518A4: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x800518A8: bne         $s6, $v0, L_80051810
    if (ctx->r22 != ctx->r2) {
        // 0x800518AC: addiu       $s5, $s5, 0x8
        ctx->r21 = ADD32(ctx->r21, 0X8);
            goto L_80051810;
    }
    // 0x800518AC: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800518B0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800518B4: jal         0x80000FBC
    // 0x800518B8: addiu       $a0, $a0, 0x5E44
    ctx->r4 = ADD32(ctx->r4, 0X5E44);
    func_80000FBC(rdram, ctx);
        goto after_5;
    // 0x800518B8: addiu       $a0, $a0, 0x5E44
    ctx->r4 = ADD32(ctx->r4, 0X5E44);
    after_5:
L_800518BC:
    // 0x800518BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800518C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800518C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800518C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800518CC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800518D0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800518D4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800518D8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800518DC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800518E0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800518E4: jr          $ra
    // 0x800518E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800518E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800518EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800518EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800518F0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800518F4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800518F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800518FC: addiu       $a0, $a0, -0x2C90
    ctx->r4 = ADD32(ctx->r4, -0X2C90);
    // 0x80051900: addiu       $v0, $v0, -0x2D90
    ctx->r2 = ADD32(ctx->r2, -0X2D90);
    // 0x80051904: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80051908:
    // 0x80051908: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8005190C: nop

    // 0x80051910: bne         $v1, $t6, L_80051928
    if (ctx->r3 != ctx->r14) {
        // 0x80051914: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_80051928;
    }
    // 0x80051914: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80051918: lw          $t7, 0x1B30($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1B30);
    // 0x8005191C: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x80051920: b           L_80051934
    // 0x80051924: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_80051934;
    // 0x80051924: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80051928:
    // 0x80051928: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8005192C: bne         $v0, $a0, L_80051908
    if (ctx->r2 != ctx->r4) {
        // 0x80051930: nop
    
            goto L_80051908;
    }
    // 0x80051930: nop

L_80051934:
    // 0x80051934: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80051938: addiu       $t8, $t8, -0x2C90
    ctx->r24 = ADD32(ctx->r24, -0X2C90);
    // 0x8005193C: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x80051940: bne         $at, $zero, L_80051950
    if (ctx->r1 != 0) {
        // 0x80051944: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_80051950;
    }
    // 0x80051944: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80051948: jal         0x80000FBC
    // 0x8005194C: addiu       $a0, $a0, 0x5E5C
    ctx->r4 = ADD32(ctx->r4, 0X5E5C);
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x8005194C: addiu       $a0, $a0, 0x5E5C
    ctx->r4 = ADD32(ctx->r4, 0X5E5C);
    after_0:
L_80051950:
    // 0x80051950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80051954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80051958: jr          $ra
    // 0x8005195C: nop

    return;
    // 0x8005195C: nop

;}
RECOMP_FUNC void func_80051960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051960: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80051964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051968: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8005196C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80051970: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80051974: jal         0x80006EC0
    // 0x80051978: addiu       $a0, $a3, 0x10
    ctx->r4 = ADD32(ctx->r7, 0X10);
    func_80006EC0(rdram, ctx);
        goto after_0;
    // 0x80051978: addiu       $a0, $a3, 0x10
    ctx->r4 = ADD32(ctx->r7, 0X10);
    after_0:
    // 0x8005197C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80051980: lhu         $a1, 0x26($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X26);
    // 0x80051984: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80051988: addiu       $a0, $a0, 0x1360
    ctx->r4 = ADD32(ctx->r4, 0X1360);
    // 0x8005198C: jal         0x80007C3C
    // 0x80051990: addiu       $a3, $v0, 0x400
    ctx->r7 = ADD32(ctx->r2, 0X400);
    func_80007C3C(rdram, ctx);
        goto after_1;
    // 0x80051990: addiu       $a3, $v0, 0x400
    ctx->r7 = ADD32(ctx->r2, 0X400);
    after_1:
    // 0x80051994: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x80051998: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8005199C: jal         0x8000701C
    // 0x800519A0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8000701C(rdram, ctx);
        goto after_2;
    // 0x800519A0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x800519A4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800519A8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800519AC: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800519B0: addiu       $v1, $v1, 0x1B30
    ctx->r3 = ADD32(ctx->r3, 0X1B30);
    // 0x800519B4: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x800519B8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800519BC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800519C0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800519C4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800519C8: addiu       $t8, $t8, 0x124C
    ctx->r24 = ADD32(ctx->r24, 0X124C);
    // 0x800519CC: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x800519D0: sw          $t8, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->r24;
    // 0x800519D4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800519D8: jal         0x800518EC
    // 0x800519DC: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    func_800518EC(rdram, ctx);
        goto after_3;
    // 0x800519DC: sw          $t9, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r25;
    after_3:
    // 0x800519E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800519E4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800519E8: jr          $ra
    // 0x800519EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800519EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800519F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800519F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800519F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800519F8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800519FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80051A00: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80051A04: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80051A08: jal         0x8000797C
    // 0x80051A0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8000797C(rdram, ctx);
        goto after_0;
    // 0x80051A0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80051A10: jal         0x80007774
    // 0x80051A14: nop

    func_80007774(rdram, ctx);
        goto after_1;
    // 0x80051A14: nop

    after_1:
    // 0x80051A18: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x80051A1C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80051A20: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80051A24: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80051A28: addiu       $s1, $s1, -0x2E0C
    ctx->r17 = ADD32(ctx->r17, -0X2E0C);
    // 0x80051A2C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80051A30: addiu       $s3, $zero, 0x1F
    ctx->r19 = ADD32(0, 0X1F);
    // 0x80051A34: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80051A38: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_80051A3C:
    // 0x80051A3C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80051A40: nop

    // 0x80051A44: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x80051A48: bne         $at, $zero, L_80051A5C
    if (ctx->r1 != 0) {
        // 0x80051A4C: nop
    
            goto L_80051A5C;
    }
    // 0x80051A4C: nop

    // 0x80051A50: jal         0x8007E950
    // 0x80051A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osUnmapTLB_recomp(rdram, ctx);
        goto after_2;
    // 0x80051A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80051A58: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
L_80051A5C:
    // 0x80051A5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80051A60: bne         $s0, $s3, L_80051A3C
    if (ctx->r16 != ctx->r19) {
        // 0x80051A64: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80051A3C;
    }
    // 0x80051A64: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80051A68: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80051A6C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80051A70: jal         0x80051168
    // 0x80051A74: sw          $s1, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r17;
    func_80051168(rdram, ctx);
        goto after_3;
    // 0x80051A74: sw          $s1, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r17;
    after_3:
    // 0x80051A78: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80051A7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051A80: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80051A84: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80051A88: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80051A8C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80051A90: jr          $ra
    // 0x80051A94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80051A94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80051A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051A98: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80051A9C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80051AA0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80051AA4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80051AA8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80051AAC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80051AB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051AB4: jal         0x80007AB0
    // 0x80051AB8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_80007AB0(rdram, ctx);
        goto after_0;
    // 0x80051AB8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_0:
    // 0x80051ABC: jal         0x80007774
    // 0x80051AC0: nop

    func_80007774(rdram, ctx);
        goto after_1;
    // 0x80051AC0: nop

    after_1:
    // 0x80051AC4: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x80051AC8: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80051ACC: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80051AD0: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80051AD4: addiu       $s1, $s1, -0x2E0C
    ctx->r17 = ADD32(ctx->r17, -0X2E0C);
    // 0x80051AD8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80051ADC: addiu       $s3, $zero, 0x1F
    ctx->r19 = ADD32(0, 0X1F);
    // 0x80051AE0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80051AE4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_80051AE8:
    // 0x80051AE8: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80051AEC: nop

    // 0x80051AF0: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x80051AF4: bne         $at, $zero, L_80051B08
    if (ctx->r1 != 0) {
        // 0x80051AF8: nop
    
            goto L_80051B08;
    }
    // 0x80051AF8: nop

    // 0x80051AFC: jal         0x8007E950
    // 0x80051B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osUnmapTLB_recomp(rdram, ctx);
        goto after_2;
    // 0x80051B00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80051B04: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
L_80051B08:
    // 0x80051B08: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80051B0C: bne         $s0, $s3, L_80051AE8
    if (ctx->r16 != ctx->r19) {
        // 0x80051B10: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80051AE8;
    }
    // 0x80051B10: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80051B14: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80051B18: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80051B1C: jal         0x80051168
    // 0x80051B20: sw          $s1, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r17;
    func_80051168(rdram, ctx);
        goto after_3;
    // 0x80051B20: sw          $s1, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r17;
    after_3:
    // 0x80051B24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80051B28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051B2C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80051B30: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80051B34: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80051B38: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80051B3C: jr          $ra
    // 0x80051B40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80051B40: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80051B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051B44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80051B48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80051B4C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80051B50: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80051B54: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80051B58: jal         0x80006EC0
    // 0x80051B5C: addiu       $a0, $a3, 0x10
    ctx->r4 = ADD32(ctx->r7, 0X10);
    func_80006EC0(rdram, ctx);
        goto after_0;
    // 0x80051B5C: addiu       $a0, $a3, 0x10
    ctx->r4 = ADD32(ctx->r7, 0X10);
    after_0:
    // 0x80051B60: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80051B64: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80051B68: lhu         $a1, 0x2E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2E);
    // 0x80051B6C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80051B70: addiu       $a3, $v0, 0x400
    ctx->r7 = ADD32(ctx->r2, 0X400);
    // 0x80051B74: jal         0x80007E18
    // 0x80051B78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80007E18(rdram, ctx);
        goto after_1;
    // 0x80051B78: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x80051B7C: lw          $a0, 0x18($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X18);
    // 0x80051B80: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80051B84: jal         0x8000701C
    // 0x80051B88: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8000701C(rdram, ctx);
        goto after_2;
    // 0x80051B88: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x80051B8C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80051B90: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80051B94: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80051B98: addiu       $v1, $v1, 0x1B30
    ctx->r3 = ADD32(ctx->r3, 0X1B30);
    // 0x80051B9C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80051BA0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80051BA4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80051BA8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80051BAC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80051BB0: addiu       $t9, $t9, 0x124C
    ctx->r25 = ADD32(ctx->r25, 0X124C);
    // 0x80051BB4: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80051BB8: sw          $t9, 0x90($a1)
    MEM_W(0X90, ctx->r5) = ctx->r25;
    // 0x80051BBC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80051BC0: jal         0x800518EC
    // 0x80051BC4: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    func_800518EC(rdram, ctx);
        goto after_3;
    // 0x80051BC4: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    after_3:
    // 0x80051BC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80051BCC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80051BD0: jr          $ra
    // 0x80051BD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80051BD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80051BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051BD8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80051BDC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80051BE0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80051BE4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80051BE8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80051BEC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80051BF0: jal         0x80007B88
    // 0x80051BF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007B88(rdram, ctx);
        goto after_0;
    // 0x80051BF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80051BF8: jal         0x80007774
    // 0x80051BFC: nop

    func_80007774(rdram, ctx);
        goto after_1;
    // 0x80051BFC: nop

    after_1:
    // 0x80051C00: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x80051C04: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80051C08: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80051C0C: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80051C10: addiu       $s1, $s1, -0x2E0C
    ctx->r17 = ADD32(ctx->r17, -0X2E0C);
    // 0x80051C14: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80051C18: addiu       $s3, $zero, 0x1F
    ctx->r19 = ADD32(0, 0X1F);
    // 0x80051C1C: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80051C20: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_80051C24:
    // 0x80051C24: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80051C28: nop

    // 0x80051C2C: slti        $at, $t9, 0x7
    ctx->r1 = SIGNED(ctx->r25) < 0X7 ? 1 : 0;
    // 0x80051C30: bne         $at, $zero, L_80051C44
    if (ctx->r1 != 0) {
        // 0x80051C34: nop
    
            goto L_80051C44;
    }
    // 0x80051C34: nop

    // 0x80051C38: jal         0x8007E950
    // 0x80051C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    osUnmapTLB_recomp(rdram, ctx);
        goto after_2;
    // 0x80051C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80051C40: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
L_80051C44:
    // 0x80051C44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80051C48: bne         $s0, $s3, L_80051C24
    if (ctx->r16 != ctx->r19) {
        // 0x80051C4C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80051C24;
    }
    // 0x80051C4C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80051C50: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80051C54: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80051C58: jal         0x80051168
    // 0x80051C5C: sw          $s1, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r17;
    func_80051168(rdram, ctx);
        goto after_3;
    // 0x80051C5C: sw          $s1, 0x1B30($at)
    MEM_W(0X1B30, ctx->r1) = ctx->r17;
    after_3:
    // 0x80051C60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80051C64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051C68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80051C6C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80051C70: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80051C74: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80051C78: jr          $ra
    // 0x80051C7C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80051C7C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80051C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051C80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80051C84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051C88: jal         0x80007774
    // 0x80051C8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80051C8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80051C90: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80051C94: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80051C98: nop

    // 0x80051C9C: sw          $t6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r14;
    // 0x80051CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80051CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80051CA8: jr          $ra
    // 0x80051CAC: nop

    return;
    // 0x80051CAC: nop

;}
RECOMP_FUNC void func_80051CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80051CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051CB8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80051CBC: addiu       $a1, $a1, 0x1C28
    ctx->r5 = ADD32(ctx->r5, 0X1C28);
    // 0x80051CC0: jal         0x80073EF0
    // 0x80051CC4: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80051CC4: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_0:
    // 0x80051CC8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80051CCC: addiu       $a1, $a1, 0x1C3C
    ctx->r5 = ADD32(ctx->r5, 0X1C3C);
    // 0x80051CD0: jal         0x80073EF0
    // 0x80051CD4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80073EF0(rdram, ctx);
        goto after_1;
    // 0x80051CD4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
    // 0x80051CD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80051CDC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80051CE0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80051CE4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80051CE8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80051CEC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80051CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80051CF4: addiu       $a3, $a3, -0x2BF0
    ctx->r7 = ADD32(ctx->r7, -0X2BF0);
    // 0x80051CF8: addiu       $a2, $a2, -0x2C18
    ctx->r6 = ADD32(ctx->r6, -0X2C18);
    // 0x80051CFC: addiu       $a1, $a1, -0x2C40
    ctx->r5 = ADD32(ctx->r5, -0X2C40);
    // 0x80051D00: addiu       $a0, $a0, -0x2C68
    ctx->r4 = ADD32(ctx->r4, -0X2C68);
    // 0x80051D04: addiu       $v1, $v1, -0x2C90
    ctx->r3 = ADD32(ctx->r3, -0X2C90);
    // 0x80051D08: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80051D0C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80051D10: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80051D14: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x80051D18: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80051D1C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80051D20: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x80051D24: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80051D28: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80051D2C: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x80051D30: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80051D34: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80051D38: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
    // 0x80051D3C: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x80051D40: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x80051D44: jr          $ra
    // 0x80051D48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80051D48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80051D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051D4C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80051D50: lw          $a0, 0x1BC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BC0);
    // 0x80051D54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80051D58: beq         $a0, $zero, L_80051D70
    if (ctx->r4 == 0) {
        // 0x80051D5C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80051D70;
    }
    // 0x80051D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051D60: jal         0x800075A0
    // 0x80051D64: nop

    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x80051D64: nop

    after_0:
    // 0x80051D68: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80051D6C: sw          $zero, 0x1BC0($at)
    MEM_W(0X1BC0, ctx->r1) = 0;
L_80051D70:
    // 0x80051D70: jal         0x8002A364
    // 0x80051D74: nop

    func_8002A364(rdram, ctx);
        goto after_1;
    // 0x80051D74: nop

    after_1:
    // 0x80051D78: ori         $a0, $zero, 0xFED0
    ctx->r4 = 0 | 0XFED0;
    // 0x80051D7C: jal         0x800075E4
    // 0x80051D80: ori         $a1, $zero, 0xFED0
    ctx->r5 = 0 | 0XFED0;
    func_800075E4(rdram, ctx);
        goto after_2;
    // 0x80051D80: ori         $a1, $zero, 0xFED0
    ctx->r5 = 0 | 0XFED0;
    after_2:
    // 0x80051D84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80051D88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80051D8C: jr          $ra
    // 0x80051D90: nop

    return;
    // 0x80051D90: nop

;}
RECOMP_FUNC void func_80051D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051D94: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80051D98: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80051D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80051DA0: andi        $t7, $t6, 0x103
    ctx->r15 = ctx->r14 & 0X103;
    // 0x80051DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80051DA8: bne         $t7, $zero, L_80051DD4
    if (ctx->r15 != 0) {
        // 0x80051DAC: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80051DD4;
    }
    // 0x80051DAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80051DB0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80051DB4: addiu       $a0, $a0, 0x213C
    ctx->r4 = ADD32(ctx->r4, 0X213C);
    // 0x80051DB8: ori         $a1, $zero, 0xFED0
    ctx->r5 = 0 | 0XFED0;
    // 0x80051DBC: addiu       $a2, $zero, 0x3000
    ctx->r6 = ADD32(0, 0X3000);
    // 0x80051DC0: jal         0x80007C3C
    // 0x80051DC4: addiu       $a3, $zero, 0xB20
    ctx->r7 = ADD32(0, 0XB20);
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x80051DC4: addiu       $a3, $zero, 0xB20
    ctx->r7 = ADD32(0, 0XB20);
    after_0:
    // 0x80051DC8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80051DCC: nop

    // 0x80051DD0: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
L_80051DD4:
    // 0x80051DD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80051DD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80051DDC: jr          $ra
    // 0x80051DE0: nop

    return;
    // 0x80051DE0: nop

;}
RECOMP_FUNC void func_80051DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051DE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80051DE8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80051DEC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80051DF0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80051DF4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80051DF8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80051DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051E00: jal         0x8005A3DC
    // 0x80051E04: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8005A3DC(rdram, ctx);
        goto after_0;
    // 0x80051E04: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80051E08: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80051E0C: addiu       $s1, $s1, -0x29F0
    ctx->r17 = ADD32(ctx->r17, -0X29F0);
    // 0x80051E10: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80051E14: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x80051E18: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x80051E1C: lui         $s2, 0x80
    ctx->r18 = S32(0X80 << 16);
    // 0x80051E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80051E24:
    // 0x80051E24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80051E28: jal         0x80056C2C
    // 0x80051E2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80056C2C(rdram, ctx);
        goto after_1;
    // 0x80051E2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x80051E30: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80051E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80051E38: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x80051E3C: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x80051E40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80051E44: jal         0x80056C2C
    // 0x80051E48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80056C2C(rdram, ctx);
        goto after_2;
    // 0x80051E48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x80051E4C: jal         0x8005C3A8
    // 0x80051E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_3;
    // 0x80051E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80051E54: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x80051E58: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x80051E5C: or          $t9, $t8, $s2
    ctx->r25 = ctx->r24 | ctx->r18;
    // 0x80051E60: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    // 0x80051E64: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80051E68: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80051E6C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80051E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80051E74: jal         0x8005BE2C
    // 0x80051E78: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_4;
    // 0x80051E78: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x80051E7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80051E80: bne         $s0, $s4, L_80051E24
    if (ctx->r16 != ctx->r20) {
        // 0x80051E84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80051E24;
    }
    // 0x80051E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80051E88: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80051E8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051E90: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80051E94: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80051E98: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80051E9C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80051EA0: jr          $ra
    // 0x80051EA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80051EA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80051EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051EA8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80051EAC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80051EB0: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80051EB4: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80051EB8: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80051EBC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80051EC0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80051EC4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80051EC8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80051ECC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80051ED0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80051ED4: jal         0x8005AB50
    // 0x80051ED8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005AB50(rdram, ctx);
        goto after_0;
    // 0x80051ED8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80051EDC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80051EE0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80051EE4: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x80051EE8: addiu       $s4, $sp, 0x40
    ctx->r20 = ADD32(ctx->r29, 0X40);
    // 0x80051EEC: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x80051EF0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_80051EF4:
    // 0x80051EF4: jal         0x8002D000
    // 0x80051EF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002D000(rdram, ctx);
        goto after_1;
    // 0x80051EF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80051EFC: beq         $v0, $s2, L_80051F40
    if (ctx->r2 == ctx->r18) {
        // 0x80051F00: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80051F40;
    }
    // 0x80051F00: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80051F04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80051F08: jal         0x8005BA48
    // 0x80051F0C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8005BA48(rdram, ctx);
        goto after_2;
    // 0x80051F0C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x80051F10: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80051F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80051F18: swc1        $f20, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f20.u32l;
    // 0x80051F1C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80051F20: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80051F24: swc1        $f20, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f20.u32l;
    // 0x80051F28: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80051F2C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80051F30: swc1        $f20, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f20.u32l;
    // 0x80051F34: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80051F38: jal         0x8004A0A0
    // 0x80051F3C: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x80051F3C: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    after_3:
L_80051F40:
    // 0x80051F40: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80051F44: bne         $s1, $s5, L_80051EF4
    if (ctx->r17 != ctx->r21) {
        // 0x80051F48: nop
    
            goto L_80051EF4;
    }
    // 0x80051F48: nop

    // 0x80051F4C: jal         0x8005C3A8
    // 0x80051F50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_4;
    // 0x80051F50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80051F54: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80051F58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80051F5C: beq         $t0, $zero, L_80051F8C
    if (ctx->r8 == 0) {
        // 0x80051F60: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80051F8C;
    }
    // 0x80051F60: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80051F64: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x80051F68: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80051F6C: sw          $t1, -0x29E8($at)
    MEM_W(-0X29E8, ctx->r1) = ctx->r9;
    // 0x80051F70: lw          $t2, 0x10($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X10);
    // 0x80051F74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80051F78: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x80051F7C: sw          $t3, -0x29DC($at)
    MEM_W(-0X29DC, ctx->r1) = ctx->r11;
    // 0x80051F80: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80051F84: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80051F88: sw          $t4, -0x29E0($at)
    MEM_W(-0X29E0, ctx->r1) = ctx->r12;
L_80051F8C:
    // 0x80051F8C: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x80051F90: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80051F94: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x80051F98: sw          $s1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r17;
    // 0x80051F9C: sw          $t6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r14;
    // 0x80051FA0: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80051FA4: jal         0x8005C3A8
    // 0x80051FA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_5;
    // 0x80051FA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80051FAC: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x80051FB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80051FB4: beq         $t7, $zero, L_80051FC8
    if (ctx->r15 == 0) {
        // 0x80051FB8: nop
    
            goto L_80051FC8;
    }
    // 0x80051FB8: nop

    // 0x80051FBC: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x80051FC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80051FC4: sw          $t8, -0x29E4($at)
    MEM_W(-0X29E4, ctx->r1) = ctx->r24;
L_80051FC8:
    // 0x80051FC8: jal         0x80051DE4
    // 0x80051FCC: sw          $s1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r17;
    func_80051DE4(rdram, ctx);
        goto after_6;
    // 0x80051FCC: sw          $s1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r17;
    after_6:
    // 0x80051FD0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80051FD4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80051FD8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80051FDC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80051FE0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80051FE4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80051FE8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80051FEC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80051FF0: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80051FF4: jr          $ra
    // 0x80051FF8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80051FF8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80051FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80051FFC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80052000: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80052004: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80052008: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8005200C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80052010: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80052014: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80052018: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8005201C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80052020: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80052024: jal         0x8005A3DC
    // 0x80052028: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8005A3DC(rdram, ctx);
        goto after_0;
    // 0x80052028: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x8005202C: lui         $s6, 0xFF7F
    ctx->r22 = S32(0XFF7F << 16);
    // 0x80052030: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80052034: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80052038: addiu       $s1, $s1, -0x29F0
    ctx->r17 = ADD32(ctx->r17, -0X29F0);
    // 0x8005203C: addiu       $s3, $s3, -0x42C0
    ctx->r19 = ADD32(ctx->r19, -0X42C0);
    // 0x80052040: ori         $s6, $s6, 0xFFFF
    ctx->r22 = ctx->r22 | 0XFFFF;
    // 0x80052044: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80052048: addiu       $s7, $sp, 0x40
    ctx->r23 = ADD32(ctx->r29, 0X40);
    // 0x8005204C: addiu       $s5, $zero, -0x101
    ctx->r21 = ADD32(0, -0X101);
    // 0x80052050: addiu       $s4, $zero, 0x4
    ctx->r20 = ADD32(0, 0X4);
    // 0x80052054: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80052058:
    // 0x80052058: bne         $s0, $s2, L_80052070
    if (ctx->r16 != ctx->r18) {
        // 0x8005205C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80052070;
    }
    // 0x8005205C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80052060: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x80052064: nop

    // 0x80052068: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x8005206C: bne         $t7, $zero, L_800520C4
    if (ctx->r15 != 0) {
        // 0x80052070: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_800520C4;
    }
L_80052070:
    // 0x80052070: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80052074: jal         0x80056C2C
    // 0x80052078: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80056C2C(rdram, ctx);
        goto after_1;
    // 0x80052078: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x8005207C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80052080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80052084: and         $t9, $t8, $s5
    ctx->r25 = ctx->r24 & ctx->r21;
    // 0x80052088: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x8005208C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80052090: jal         0x80056C2C
    // 0x80052094: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80056C2C(rdram, ctx);
        goto after_2;
    // 0x80052094: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x80052098: jal         0x8005C3A8
    // 0x8005209C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_3;
    // 0x8005209C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x800520A0: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x800520A4: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x800520A8: and         $t1, $t0, $s6
    ctx->r9 = ctx->r8 & ctx->r22;
    // 0x800520AC: sw          $t1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r9;
    // 0x800520B0: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x800520B4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x800520B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800520BC: jal         0x8005BE2C
    // 0x800520C0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_8005BE2C(rdram, ctx);
        goto after_4;
    // 0x800520C0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
L_800520C4:
    // 0x800520C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800520C8: bne         $s0, $s4, L_80052058
    if (ctx->r16 != ctx->r20) {
        // 0x800520CC: nop
    
            goto L_80052058;
    }
    // 0x800520CC: nop

    // 0x800520D0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800520D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800520D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800520DC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800520E0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800520E4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800520E8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800520EC: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800520F0: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800520F4: jr          $ra
    // 0x800520F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800520F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800520FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800520FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052104: jal         0x80059870
    // 0x80052108: nop

    func_80059870(rdram, ctx);
        goto after_0;
    // 0x80052108: nop

    after_0:
    // 0x8005210C: jal         0x80059820
    // 0x80052110: nop

    func_80059820(rdram, ctx);
        goto after_1;
    // 0x80052110: nop

    after_1:
    // 0x80052114: jal         0x80059610
    // 0x80052118: nop

    func_80059610(rdram, ctx);
        goto after_2;
    // 0x80052118: nop

    after_2:
    // 0x8005211C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80052124: jr          $ra
    // 0x80052128: nop

    return;
    // 0x80052128: nop

;}
RECOMP_FUNC void func_8005213C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005213C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80052140: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80052144: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80052148: addiu       $s0, $s0, 0x1BC4
    ctx->r16 = ADD32(ctx->r16, 0X1BC4);
    // 0x8005214C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80052150: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80052154: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80052158: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8005215C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80052160: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80052164: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80052168: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8005216C: bne         $t6, $zero, L_80052190
    if (ctx->r14 != 0) {
        // 0x80052170: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_80052190;
    }
    // 0x80052170: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80052174: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80052178: addiu       $a0, $a0, 0x2E9C
    ctx->r4 = ADD32(ctx->r4, 0X2E9C);
    // 0x8005217C: ori         $a1, $zero, 0xFED0
    ctx->r5 = 0 | 0XFED0;
    // 0x80052180: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80052184: jal         0x80007C3C
    // 0x80052188: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x80052188: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8005218C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80052190:
    // 0x80052190: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80052194: addiu       $s1, $s1, -0x42C0
    ctx->r17 = ADD32(ctx->r17, -0X42C0);
    // 0x80052198: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x8005219C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800521A0: andi        $t8, $t7, 0x103
    ctx->r24 = ctx->r15 & 0X103;
    // 0x800521A4: bne         $t8, $zero, L_80052658
    if (ctx->r24 != 0) {
        // 0x800521A8: nop
    
            goto L_80052658;
    }
    // 0x800521A8: nop

    // 0x800521AC: jal         0x80059870
    // 0x800521B0: sw          $zero, -0x2AF8($at)
    MEM_W(-0X2AF8, ctx->r1) = 0;
    func_80059870(rdram, ctx);
        goto after_1;
    // 0x800521B0: sw          $zero, -0x2AF8($at)
    MEM_W(-0X2AF8, ctx->r1) = 0;
    after_1:
    // 0x800521B4: jal         0x80059820
    // 0x800521B8: nop

    func_80059820(rdram, ctx);
        goto after_2;
    // 0x800521B8: nop

    after_2:
    // 0x800521BC: jal         0x80059610
    // 0x800521C0: nop

    func_80059610(rdram, ctx);
        goto after_3;
    // 0x800521C0: nop

    after_3:
    // 0x800521C4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800521C8: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
L_800521CC:
    // 0x800521CC: jal         0x8002D000
    // 0x800521D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002D000(rdram, ctx);
        goto after_4;
    // 0x800521D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800521D4: beq         $v0, $s7, L_800521E4
    if (ctx->r2 == ctx->r23) {
        // 0x800521D8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_800521E4;
    }
    // 0x800521D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800521DC: jal         0x8005B930
    // 0x800521E0: nop

    func_8005B930(rdram, ctx);
        goto after_5;
    // 0x800521E0: nop

    after_5:
L_800521E4:
    // 0x800521E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800521E8: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x800521EC: bne         $at, $zero, L_800521CC
    if (ctx->r1 != 0) {
        // 0x800521F0: nop
    
            goto L_800521CC;
    }
    // 0x800521F0: nop

    // 0x800521F4: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x800521F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800521FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80052200: jal         0x8002F22C
    // 0x80052204: sw          $t9, -0x29C4($at)
    MEM_W(-0X29C4, ctx->r1) = ctx->r25;
    func_8002F22C(rdram, ctx);
        goto after_6;
    // 0x80052204: sw          $t9, -0x29C4($at)
    MEM_W(-0X29C4, ctx->r1) = ctx->r25;
    after_6:
    // 0x80052208: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005220C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80052210: addiu       $a0, $a0, -0x2BA0
    ctx->r4 = ADD32(ctx->r4, -0X2BA0);
    // 0x80052214: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80052218: jal         0x80076BF8
    // 0x8005221C: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8005221C: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    after_7:
    // 0x80052220: jal         0x8002F20C
    // 0x80052224: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002F20C(rdram, ctx);
        goto after_8;
    // 0x80052224: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x80052228: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005222C: sw          $v0, -0x2B10($at)
    MEM_W(-0X2B10, ctx->r1) = ctx->r2;
    // 0x80052230: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80052234: jal         0x8002B4A8
    // 0x80052238: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_8002B4A8(rdram, ctx);
        goto after_9;
    // 0x80052238: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_9:
    // 0x8005223C: lw          $t0, 0x44($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X44);
    // 0x80052240: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80052244: ori         $t1, $t0, 0x3
    ctx->r9 = ctx->r8 | 0X3;
    // 0x80052248: jal         0x80051EA8
    // 0x8005224C: sw          $t1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r9;
    func_80051EA8(rdram, ctx);
        goto after_10;
    // 0x8005224C: sw          $t1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r9;
    after_10:
    // 0x80052250: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052254: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80052258: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8005225C: sw          $zero, 0x1BD0($at)
    MEM_W(0X1BD0, ctx->r1) = 0;
    // 0x80052260: addiu       $v1, $v1, -0x29F0
    ctx->r3 = ADD32(ctx->r3, -0X29F0);
    // 0x80052264: addiu       $v0, $v0, -0x2AF0
    ctx->r2 = ADD32(ctx->r2, -0X2AF0);
L_80052268:
    // 0x80052268: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8005226C: sw          $zero, -0x44($v0)
    MEM_W(-0X44, ctx->r2) = 0;
    // 0x80052270: sw          $zero, -0x24($v0)
    MEM_W(-0X24, ctx->r2) = 0;
    // 0x80052274: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x80052278: bne         $v0, $v1, L_80052268
    if (ctx->r2 != ctx->r3) {
        // 0x8005227C: sw          $zero, -0x64($v0)
        MEM_W(-0X64, ctx->r2) = 0;
            goto L_80052268;
    }
    // 0x8005227C: sw          $zero, -0x64($v0)
    MEM_W(-0X64, ctx->r2) = 0;
    // 0x80052280: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80052284: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80052288: ori         $t3, $t2, 0x800
    ctx->r11 = ctx->r10 | 0X800;
    // 0x8005228C: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x80052290: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80052294: sw          $zero, -0x2B0C($at)
    MEM_W(-0X2B0C, ctx->r1) = 0;
    // 0x80052298: addiu       $s6, $s6, -0x2B08
    ctx->r22 = ADD32(ctx->r22, -0X2B08);
    // 0x8005229C: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x800522A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800522A4: jal         0x80007774
    // 0x800522A8: sw          $zero, -0x2B04($at)
    MEM_W(-0X2B04, ctx->r1) = 0;
    func_80007774(rdram, ctx);
        goto after_11;
    // 0x800522A8: sw          $zero, -0x2B04($at)
    MEM_W(-0X2B04, ctx->r1) = 0;
    after_11:
    // 0x800522AC: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x800522B0: jal         0x80002F88
    // 0x800522B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_80002F88(rdram, ctx);
        goto after_12;
    // 0x800522B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_12:
    // 0x800522B8: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x800522BC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x800522C0: jal         0x8000701C
    // 0x800522C4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    func_8000701C(rdram, ctx);
        goto after_13;
    // 0x800522C4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_13:
    // 0x800522C8: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x800522CC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x800522D0: jal         0x8000701C
    // 0x800522D4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    func_8000701C(rdram, ctx);
        goto after_14;
    // 0x800522D4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_14:
    // 0x800522D8: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    // 0x800522DC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x800522E0: jal         0x8000701C
    // 0x800522E4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    func_8000701C(rdram, ctx);
        goto after_15;
    // 0x800522E4: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_15:
    // 0x800522E8: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x800522EC: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x800522F0: jal         0x8000701C
    // 0x800522F4: addiu       $a1, $zero, 0x258
    ctx->r5 = ADD32(0, 0X258);
    func_8000701C(rdram, ctx);
        goto after_16;
    // 0x800522F4: addiu       $a1, $zero, 0x258
    ctx->r5 = ADD32(0, 0X258);
    after_16:
    // 0x800522F8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800522FC: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    // 0x80052300: jal         0x8000796C
    // 0x80052304: addiu       $a0, $a0, 0x27FC
    ctx->r4 = ADD32(ctx->r4, 0X27FC);
    func_8000796C(rdram, ctx);
        goto after_17;
    // 0x80052304: addiu       $a0, $a0, 0x27FC
    ctx->r4 = ADD32(ctx->r4, 0X27FC);
    after_17:
    // 0x80052308: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x8005230C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x80052310: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x80052314: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x80052318: beq         $s7, $v0, L_80052658
    if (ctx->r23 == ctx->r2) {
        // 0x8005231C: lui         $s3, 0x8009
        ctx->r19 = S32(0X8009 << 16);
            goto L_80052658;
    }
    // 0x8005231C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80052320: addiu       $s3, $s3, 0x1BDC
    ctx->r19 = ADD32(ctx->r19, 0X1BDC);
    // 0x80052324: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
    // 0x80052328: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
L_8005232C:
    // 0x8005232C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80052330: lw          $t7, -0x2B0C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2B0C);
    // 0x80052334: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x80052338: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x8005233C: beq         $t7, $zero, L_80052348
    if (ctx->r15 == 0) {
        // 0x80052340: sw          $v0, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r2;
            goto L_80052348;
    }
    // 0x80052340: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x80052344: sw          $s5, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r21;
L_80052348:
    // 0x80052348: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    // 0x8005234C: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x80052350: beq         $t8, $zero, L_8005257C
    if (ctx->r24 == 0) {
        // 0x80052354: nop
    
            goto L_8005257C;
    }
    // 0x80052354: nop

    // 0x80052358: beq         $v0, $s5, L_80052394
    if (ctx->r2 == ctx->r21) {
        // 0x8005235C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80052394;
    }
    // 0x8005235C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80052360: beq         $v0, $at, L_80052394
    if (ctx->r2 == ctx->r1) {
        // 0x80052364: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80052394;
    }
    // 0x80052364: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80052368: beq         $v0, $at, L_80052394
    if (ctx->r2 == ctx->r1) {
        // 0x8005236C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_80052394;
    }
    // 0x8005236C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80052370: beq         $v0, $at, L_80052394
    if (ctx->r2 == ctx->r1) {
        // 0x80052374: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80052394;
    }
    // 0x80052374: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80052378: beq         $v0, $at, L_80052394
    if (ctx->r2 == ctx->r1) {
        // 0x8005237C: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_80052394;
    }
    // 0x8005237C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80052380: beq         $v0, $at, L_80052398
    if (ctx->r2 == ctx->r1) {
        // 0x80052384: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_80052398;
    }
    // 0x80052384: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80052388: beq         $v0, $s4, L_80052394
    if (ctx->r2 == ctx->r20) {
        // 0x8005238C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80052394;
    }
    // 0x8005238C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80052390: bne         $v0, $at, L_800523B4
    if (ctx->r2 != ctx->r1) {
        // 0x80052394: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_800523B4;
    }
L_80052394:
    // 0x80052394: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
L_80052398:
    // 0x80052398: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x8005239C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x800523A0: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x800523A4: jalr        $t9
    // 0x800523A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x800523A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_18:
    // 0x800523AC: b           L_80052644
    // 0x800523B0: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
        goto L_80052644;
    // 0x800523B0: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
L_800523B4:
    // 0x800523B4: bne         $v0, $zero, L_80052464
    if (ctx->r2 != 0) {
        // 0x800523B8: addiu       $t2, $v0, -0x4
        ctx->r10 = ADD32(ctx->r2, -0X4);
            goto L_80052464;
    }
    // 0x800523B8: addiu       $t2, $v0, -0x4
    ctx->r10 = ADD32(ctx->r2, -0X4);
    // 0x800523BC: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x800523C0: lw          $t3, 0x98($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X98);
    // 0x800523C4: lw          $s0, 0x0($t1)
    ctx->r16 = MEM_W(ctx->r9, 0X0);
    // 0x800523C8: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x800523CC: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800523D0: sll         $s1, $s0, 2
    ctx->r17 = S32(ctx->r16 << 2);
    // 0x800523D4: addu        $t4, $t3, $s1
    ctx->r12 = ADD32(ctx->r11, ctx->r17);
    // 0x800523D8: sw          $t2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r10;
    // 0x800523DC: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x800523E0: lw          $t7, 0x9C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X9C);
    // 0x800523E4: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x800523E8: addu        $t8, $t7, $s1
    ctx->r24 = ADD32(ctx->r15, ctx->r17);
    // 0x800523EC: sw          $t6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r14;
    // 0x800523F0: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x800523F4: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x800523F8: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x800523FC: mflo        $v0
    ctx->r2 = lo;
    // 0x80052400: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x80052404: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
    // 0x80052408: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x8005240C: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
    // 0x80052410: lwc1        $f6, 0x10($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X10);
    // 0x80052414: addu        $t4, $t2, $v0
    ctx->r12 = ADD32(ctx->r10, ctx->r2);
    // 0x80052418: swc1        $f6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f6.u32l;
    // 0x8005241C: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x80052420: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x80052424: lwc1        $f8, 0x14($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X14);
    // 0x80052428: addu        $t6, $t7, $v0
    ctx->r14 = ADD32(ctx->r15, ctx->r2);
    // 0x8005242C: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x80052430: lw          $t8, 0x88($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X88);
    // 0x80052434: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80052438: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8005243C: addu        $t9, $s3, $t0
    ctx->r25 = ADD32(ctx->r19, ctx->r8);
    // 0x80052440: lw          $t9, 0x0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X0);
    // 0x80052444: nop

    // 0x80052448: jalr        $t9
    // 0x8005244C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x8005244C: nop

    after_19:
    // 0x80052450: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x80052454: nop

    // 0x80052458: addu        $t3, $t1, $s1
    ctx->r11 = ADD32(ctx->r9, ctx->r17);
    // 0x8005245C: b           L_80052640
    // 0x80052460: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
        goto L_80052640;
    // 0x80052460: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
L_80052464:
    // 0x80052464: sltiu       $at, $t2, 0xF
    ctx->r1 = ctx->r10 < 0XF ? 1 : 0;
    // 0x80052468: beq         $at, $zero, L_80052640
    if (ctx->r1 == 0) {
        // 0x8005246C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_80052640;
    }
    // 0x8005246C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80052470: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052474: addu        $at, $at, $t2
    gpr jr_addend_80052480 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80052478: lw          $t2, 0x5E98($at)
    ctx->r10 = ADD32(ctx->r1, 0X5E98);
    // 0x8005247C: nop

    // 0x80052480: jr          $t2
    // 0x80052484: nop

    switch (jr_addend_80052480 >> 2) {
        case 0: goto L_8005249C; break;
        case 1: goto L_800524B0; break;
        case 2: goto L_800524C4; break;
        case 3: goto L_800524D8; break;
        case 4: goto L_80052640; break;
        case 5: goto L_8005251C; break;
        case 6: goto L_80052640; break;
        case 7: goto L_80052640; break;
        case 8: goto L_80052640; break;
        case 9: goto L_80052530; break;
        case 10: goto L_80052544; break;
        case 11: goto L_80052558; break;
        case 12: goto L_80052640; break;
        case 13: goto L_80052640; break;
        case 14: goto L_80052488; break;
        default: switch_error(__func__, 0x80052480, 0x80095E98);
    }
    // 0x80052484: nop

L_80052488:
    // 0x80052488: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x8005248C: nop

    // 0x80052490: addiu       $t5, $t4, 0x18
    ctx->r13 = ADD32(ctx->r12, 0X18);
    // 0x80052494: b           L_80052640
    // 0x80052498: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
        goto L_80052640;
    // 0x80052498: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
L_8005249C:
    // 0x8005249C: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x800524A0: nop

    // 0x800524A4: addiu       $t6, $t7, 0x18
    ctx->r14 = ADD32(ctx->r15, 0X18);
    // 0x800524A8: b           L_80052640
    // 0x800524AC: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
        goto L_80052640;
    // 0x800524AC: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
L_800524B0:
    // 0x800524B0: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x800524B4: nop

    // 0x800524B8: addiu       $t0, $t8, 0x8
    ctx->r8 = ADD32(ctx->r24, 0X8);
    // 0x800524BC: b           L_80052640
    // 0x800524C0: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
        goto L_80052640;
    // 0x800524C0: sw          $t0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r8;
L_800524C4:
    // 0x800524C4: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x800524C8: nop

    // 0x800524CC: addiu       $t1, $t9, 0x2C
    ctx->r9 = ADD32(ctx->r25, 0X2C);
    // 0x800524D0: b           L_80052640
    // 0x800524D4: sw          $t1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r9;
        goto L_80052640;
    // 0x800524D4: sw          $t1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r9;
L_800524D8:
    // 0x800524D8: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x800524DC: nop

    // 0x800524E0: addiu       $s0, $v0, 0xC
    ctx->r16 = ADD32(ctx->r2, 0XC);
    // 0x800524E4: jal         0x80076BD0
    // 0x800524E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    strlen_recomp(rdram, ctx);
        goto after_20;
    // 0x800524E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x800524EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800524F0: jal         0x80076BD0
    // 0x800524F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    strlen_recomp(rdram, ctx);
        goto after_21;
    // 0x800524F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x800524F8: andi        $t2, $v0, 0x3
    ctx->r10 = ctx->r2 & 0X3;
    // 0x800524FC: subu        $t4, $s1, $t2
    ctx->r12 = SUB32(ctx->r17, ctx->r10);
    // 0x80052500: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x80052504: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x80052508: srl         $t7, $t5, 2
    ctx->r15 = S32(U32(ctx->r13) >> 2);
    // 0x8005250C: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80052510: addu        $t8, $t3, $t6
    ctx->r24 = ADD32(ctx->r11, ctx->r14);
    // 0x80052514: b           L_80052640
    // 0x80052518: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
        goto L_80052640;
    // 0x80052518: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
L_8005251C:
    // 0x8005251C: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x80052520: nop

    // 0x80052524: addiu       $t9, $t0, 0x4
    ctx->r25 = ADD32(ctx->r8, 0X4);
    // 0x80052528: b           L_80052640
    // 0x8005252C: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
        goto L_80052640;
    // 0x8005252C: sw          $t9, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r25;
L_80052530:
    // 0x80052530: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x80052534: nop

    // 0x80052538: addiu       $t2, $t1, 0xC
    ctx->r10 = ADD32(ctx->r9, 0XC);
    // 0x8005253C: b           L_80052640
    // 0x80052540: sw          $t2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r10;
        goto L_80052640;
    // 0x80052540: sw          $t2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r10;
L_80052544:
    // 0x80052544: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x80052548: nop

    // 0x8005254C: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x80052550: b           L_80052640
    // 0x80052554: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
        goto L_80052640;
    // 0x80052554: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
L_80052558:
    // 0x80052558: jal         0x8002B118
    // 0x8005255C: nop

    func_8002B118(rdram, ctx);
        goto after_22;
    // 0x8005255C: nop

    after_22:
    // 0x80052560: jal         0x80056924
    // 0x80052564: nop

    func_80056924(rdram, ctx);
        goto after_23;
    // 0x80052564: nop

    after_23:
    // 0x80052568: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x8005256C: nop

    // 0x80052570: addiu       $t3, $t7, 0xC
    ctx->r11 = ADD32(ctx->r15, 0XC);
    // 0x80052574: b           L_80052640
    // 0x80052578: sw          $t3, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r11;
        goto L_80052640;
    // 0x80052578: sw          $t3, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r11;
L_8005257C:
    // 0x8005257C: bne         $v0, $zero, L_8005262C
    if (ctx->r2 != 0) {
        // 0x80052580: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_8005262C;
    }
    // 0x80052580: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80052584: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x80052588: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x8005258C: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
    // 0x80052590: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x80052594: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052598: sll         $s1, $s0, 2
    ctx->r17 = S32(ctx->r16 << 2);
    // 0x8005259C: addu        $t9, $t0, $s1
    ctx->r25 = ADD32(ctx->r8, ctx->r17);
    // 0x800525A0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800525A4: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x800525A8: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x800525AC: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x800525B0: addu        $t5, $t4, $s1
    ctx->r13 = ADD32(ctx->r12, ctx->r17);
    // 0x800525B4: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x800525B8: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x800525BC: lw          $t3, 0xA0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA0);
    // 0x800525C0: lwc1        $f10, 0xC($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0XC);
    // 0x800525C4: mflo        $v0
    ctx->r2 = lo;
    // 0x800525C8: addu        $t6, $t3, $v0
    ctx->r14 = ADD32(ctx->r11, ctx->r2);
    // 0x800525CC: swc1        $f10, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f10.u32l;
    // 0x800525D0: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x800525D4: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x800525D8: lwc1        $f16, 0x10($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X10);
    // 0x800525DC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x800525E0: swc1        $f16, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f16.u32l;
    // 0x800525E4: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x800525E8: lw          $t4, 0xA0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XA0);
    // 0x800525EC: lwc1        $f18, 0x14($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X14);
    // 0x800525F0: addu        $t2, $t4, $v0
    ctx->r10 = ADD32(ctx->r12, ctx->r2);
    // 0x800525F4: swc1        $f18, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f18.u32l;
    // 0x800525F8: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x800525FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80052600: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80052604: addu        $t3, $s3, $t7
    ctx->r11 = ADD32(ctx->r19, ctx->r15);
    // 0x80052608: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x8005260C: nop

    // 0x80052610: jalr        $t9
    // 0x80052614: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x80052614: nop

    after_24:
    // 0x80052618: lw          $t6, 0x94($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X94);
    // 0x8005261C: nop

    // 0x80052620: addu        $t0, $t6, $s1
    ctx->r8 = ADD32(ctx->r14, ctx->r17);
    // 0x80052624: b           L_80052640
    // 0x80052628: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
        goto L_80052640;
    // 0x80052628: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
L_8005262C:
    // 0x8005262C: addu        $t1, $s3, $t8
    ctx->r9 = ADD32(ctx->r19, ctx->r24);
    // 0x80052630: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x80052634: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x80052638: jalr        $t9
    // 0x8005263C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x8005263C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_25:
L_80052640:
    // 0x80052640: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
L_80052644:
    // 0x80052644: nop

    // 0x80052648: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x8005264C: nop

    // 0x80052650: bne         $s7, $v0, L_8005232C
    if (ctx->r23 != ctx->r2) {
        // 0x80052654: lw          $t5, 0x90($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X90);
            goto L_8005232C;
    }
    // 0x80052654: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
L_80052658:
    // 0x80052658: jal         0x80007AE0
    // 0x8005265C: nop

    func_80007AE0(rdram, ctx);
        goto after_26;
    // 0x8005265C: nop

    after_26:
    // 0x80052660: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80052664: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80052668: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8005266C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80052670: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80052674: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80052678: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8005267C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80052680: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80052684: jr          $ra
    // 0x80052688: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80052688: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8005268C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005268C: jr          $ra
    // 0x80052690: nop

    return;
    // 0x80052690: nop

;}
RECOMP_FUNC void func_800526A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800526A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800526A8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800526AC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800526B0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800526B4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800526B8: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x800526BC: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x800526C0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800526C4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800526C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800526CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800526D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800526D4: lw          $s2, 0x0($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X0);
L_800526D8:
    // 0x800526D8: or          $s4, $s6, $zero
    ctx->r20 = ctx->r22 | 0;
    // 0x800526DC: beq         $s2, $zero, L_80052760
    if (ctx->r18 == 0) {
        // 0x800526E0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80052760;
    }
    // 0x800526E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800526E4:
    // 0x800526E4: beq         $s3, $s5, L_800526FC
    if (ctx->r19 == ctx->r21) {
        // 0x800526E8: nop
    
            goto L_800526FC;
    }
    // 0x800526E8: nop

    // 0x800526EC: lw          $t6, 0x10($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X10);
    // 0x800526F0: nop

    // 0x800526F4: bne         $s3, $t6, L_80052748
    if (ctx->r19 != ctx->r14) {
        // 0x800526F8: nop
    
            goto L_80052748;
    }
    // 0x800526F8: nop

L_800526FC:
    // 0x800526FC: lw          $s0, 0x4($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X4);
    // 0x80052700: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x80052704: beq         $s0, $zero, L_80052720
    if (ctx->r16 == 0) {
        // 0x80052708: nop
    
            goto L_80052720;
    }
    // 0x80052708: nop

L_8005270C:
    // 0x8005270C: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x80052710: jal         0x80006DC0
    // 0x80052714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80006DC0(rdram, ctx);
        goto after_0;
    // 0x80052714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80052718: bne         $s1, $zero, L_8005270C
    if (ctx->r17 != 0) {
        // 0x8005271C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8005270C;
    }
    // 0x8005271C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80052720:
    // 0x80052720: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x80052724: nop

    // 0x80052728: sw          $t7, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r15;
    // 0x8005272C: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x80052730: jal         0x800075A0
    // 0x80052734: nop

    func_800075A0(rdram, ctx);
        goto after_1;
    // 0x80052734: nop

    after_1:
    // 0x80052738: jal         0x80006DC0
    // 0x8005273C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80006DC0(rdram, ctx);
        goto after_2;
    // 0x8005273C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x80052740: b           L_800526D8
    // 0x80052744: lw          $s2, 0x0($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X0);
        goto L_800526D8;
    // 0x80052744: lw          $s2, 0x0($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X0);
L_80052748:
    // 0x80052748: or          $s4, $s2, $zero
    ctx->r20 = ctx->r18 | 0;
    // 0x8005274C: lw          $s2, 0x0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X0);
    // 0x80052750: nop

    // 0x80052754: bne         $s2, $zero, L_800526E4
    if (ctx->r18 != 0) {
        // 0x80052758: nop
    
            goto L_800526E4;
    }
    // 0x80052758: nop

    // 0x8005275C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80052760:
    // 0x80052760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80052764: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80052768: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005276C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80052770: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80052774: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80052778: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8005277C: jr          $ra
    // 0x80052780: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80052780: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80052784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80052788: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005278C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052790: lw          $a0, 0x1BA0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BA0);
    // 0x80052794: jal         0x800526A4
    // 0x80052798: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800526A4(rdram, ctx);
        goto after_0;
    // 0x80052798: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_0:
    // 0x8005279C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800527A0: lw          $a0, 0x1BA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BA4);
    // 0x800527A4: jal         0x800526A4
    // 0x800527A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800526A4(rdram, ctx);
        goto after_1;
    // 0x800527A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_1:
    // 0x800527AC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800527B0: lw          $a0, 0x1BB4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB4);
    // 0x800527B4: jal         0x800526A4
    // 0x800527B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800526A4(rdram, ctx);
        goto after_2;
    // 0x800527B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_2:
    // 0x800527BC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800527C0: lw          $a0, 0x1BA8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BA8);
    // 0x800527C4: jal         0x800526A4
    // 0x800527C8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800526A4(rdram, ctx);
        goto after_3;
    // 0x800527C8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_3:
    // 0x800527CC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800527D0: lw          $a0, 0x1BAC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BAC);
    // 0x800527D4: jal         0x800526A4
    // 0x800527D8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800526A4(rdram, ctx);
        goto after_4;
    // 0x800527D8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_4:
    // 0x800527DC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800527E0: lw          $a0, 0x1BB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1BB0);
    // 0x800527E4: jal         0x800526A4
    // 0x800527E8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800526A4(rdram, ctx);
        goto after_5;
    // 0x800527E8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_5:
    // 0x800527EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800527F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800527F4: jr          $ra
    // 0x800527F8: nop

    return;
    // 0x800527F8: nop

;}
RECOMP_FUNC void func_800527FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800527FC: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80052800: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80052804: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80052808: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005280C: addiu       $s0, $s0, 0x1BC4
    ctx->r16 = ADD32(ctx->r16, 0X1BC4);
    // 0x80052810: sw          $zero, -0x29B8($at)
    MEM_W(-0X29B8, ctx->r1) = 0;
    // 0x80052814: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80052818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005281C: beq         $a0, $zero, L_80052830
    if (ctx->r4 == 0) {
        // 0x80052820: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_80052830;
    }
    // 0x80052820: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80052824: jal         0x800075A0
    // 0x80052828: nop

    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x80052828: nop

    after_0:
    // 0x8005282C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80052830:
    // 0x80052830: jal         0x80007774
    // 0x80052834: nop

    func_80007774(rdram, ctx);
        goto after_1;
    // 0x80052834: nop

    after_1:
    // 0x80052838: jal         0x80052784
    // 0x8005283C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    func_80052784(rdram, ctx);
        goto after_2;
    // 0x8005283C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_2:
    // 0x80052840: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80052844: jal         0x80002D08
    // 0x80052848: nop

    func_80002D08(rdram, ctx);
        goto after_3;
    // 0x80052848: nop

    after_3:
    // 0x8005284C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80052850: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
    // 0x80052854: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80052858: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8005285C: ori         $at, $at, 0x103
    ctx->r1 = ctx->r1 | 0X103;
    // 0x80052860: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80052864: bne         $t7, $zero, L_800529A8
    if (ctx->r15 != 0) {
        // 0x80052868: nop
    
            goto L_800529A8;
    }
    // 0x80052868: nop

    // 0x8005286C: jal         0x8002F22C
    // 0x80052870: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002F22C(rdram, ctx);
        goto after_4;
    // 0x80052870: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80052874: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80052878: sw          $t8, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r24;
    // 0x8005287C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80052880: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80052884: lw          $t6, -0x29C4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X29C4);
    // 0x80052888: lw          $t9, -0x42B8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X42B8);
    // 0x8005288C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80052890: bne         $t9, $t6, L_800528A4
    if (ctx->r25 != ctx->r14) {
        // 0x80052894: lui         $s0, 0x800B
        ctx->r16 = S32(0X800B << 16);
            goto L_800528A4;
    }
    // 0x80052894: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80052898: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8005289C: b           L_800528A8
    // 0x800528A0: addiu       $s0, $s0, -0x2BA0
    ctx->r16 = ADD32(ctx->r16, -0X2BA0);
        goto L_800528A8;
    // 0x800528A0: addiu       $s0, $s0, -0x2BA0
    ctx->r16 = ADD32(ctx->r16, -0X2BA0);
L_800528A4:
    // 0x800528A4: addiu       $s0, $s0, -0x2B58
    ctx->r16 = ADD32(ctx->r16, -0X2B58);
L_800528A8:
    // 0x800528A8: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x800528AC: jal         0x80009F20
    // 0x800528B0: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    func_80009F20(rdram, ctx);
        goto after_5;
    // 0x800528B0: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    after_5:
    // 0x800528B4: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x800528B8: jal         0x80009FD8
    // 0x800528BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80009FD8(rdram, ctx);
        goto after_6;
    // 0x800528BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x800528C0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800528C4: lw          $a1, -0x2B10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2B10);
    // 0x800528C8: jal         0x8002B4A8
    // 0x800528CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002B4A8(rdram, ctx);
        goto after_7;
    // 0x800528CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x800528D0: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x800528D4: jal         0x80009DFC
    // 0x800528D8: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    func_80009DFC(rdram, ctx);
        goto after_8;
    // 0x800528D8: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    after_8:
    // 0x800528DC: lw          $t7, 0x44($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X44);
    // 0x800528E0: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x800528E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800528E8: sw          $t7, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->r15;
L_800528EC:
    // 0x800528EC: jal         0x8002D000
    // 0x800528F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002D000(rdram, ctx);
        goto after_9;
    // 0x800528F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x800528F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800528F8: beq         $v0, $at, L_80052934
    if (ctx->r2 == ctx->r1) {
        // 0x800528FC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80052934;
    }
    // 0x800528FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80052900: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80052904: jal         0x8005BA48
    // 0x80052908: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8005BA48(rdram, ctx);
        goto after_10;
    // 0x80052908: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_10:
    // 0x8005290C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052910: lwc1        $f4, 0x5ED4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5ED4);
    // 0x80052914: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80052918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005291C: swc1        $f4, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f4.u32l;
    // 0x80052920: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80052924: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80052928: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x8005292C: jal         0x8004A0A0
    // 0x80052930: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    func_8004A0A0(rdram, ctx);
        goto after_11;
    // 0x80052930: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    after_11:
L_80052934:
    // 0x80052934: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80052938: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005293C: bne         $s1, $at, L_800528EC
    if (ctx->r17 != ctx->r1) {
        // 0x80052940: nop
    
            goto L_800528EC;
    }
    // 0x80052940: nop

    // 0x80052944: jal         0x8005AB50
    // 0x80052948: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005AB50(rdram, ctx);
        goto after_12;
    // 0x80052948: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x8005294C: jal         0x8005C3A8
    // 0x80052950: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_13;
    // 0x80052950: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x80052954: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80052958: lw          $t7, -0x29E8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X29E8);
    // 0x8005295C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80052960: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    // 0x80052964: lw          $t8, -0x29DC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X29DC);
    // 0x80052968: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8005296C: beq         $t8, $zero, L_80052984
    if (ctx->r24 == 0) {
        // 0x80052970: lui         $t7, 0x800B
        ctx->r15 = S32(0X800B << 16);
            goto L_80052984;
    }
    // 0x80052970: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80052974: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80052978: nop

    // 0x8005297C: ori         $t6, $t9, 0x4
    ctx->r14 = ctx->r25 | 0X4;
    // 0x80052980: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
L_80052984:
    // 0x80052984: lw          $t7, -0x29E0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X29E0);
    // 0x80052988: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005298C: jal         0x8005C3A8
    // 0x80052990: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    func_8005C3A8(rdram, ctx);
        goto after_14;
    // 0x80052990: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    after_14:
    // 0x80052994: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80052998: lw          $t8, -0x29E4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X29E4);
    // 0x8005299C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800529A0: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
    // 0x800529A4: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
L_800529A8:
    // 0x800529A8: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x800529AC: addiu       $s1, $s1, 0x1BC8
    ctx->r17 = ADD32(ctx->r17, 0X1BC8);
    // 0x800529B0: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x800529B4: nop

    // 0x800529B8: beq         $s0, $zero, L_80052A24
    if (ctx->r16 == 0) {
        // 0x800529BC: nop
    
            goto L_80052A24;
    }
    // 0x800529BC: nop

    // 0x800529C0: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x800529C4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800529C8: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x800529CC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800529D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800529D4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800529D8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800529DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800529E0: div.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800529E4: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800529E8: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800529EC: sra         $a2, $v0, 8
    ctx->r6 = S32(SIGNED(ctx->r2) >> 8);
    // 0x800529F0: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x800529F4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800529F8: andi        $t9, $a0, 0xFF
    ctx->r25 = ctx->r4 & 0XFF;
    // 0x800529FC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80052A00: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80052A04: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80052A08: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80052A0C: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80052A10: jal         0x80009A84
    // 0x80052A14: nop

    func_80009A84(rdram, ctx);
        goto after_15;
    // 0x80052A14: nop

    after_15:
    // 0x80052A18: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80052A1C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80052A20: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
L_80052A24:
    // 0x80052A24: beq         $s0, $zero, L_80052A40
    if (ctx->r16 == 0) {
        // 0x80052A28: nop
    
            goto L_80052A40;
    }
    // 0x80052A28: nop

    // 0x80052A2C: jal         0x80014BF4
    // 0x80052A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80014BF4(rdram, ctx);
        goto after_16;
    // 0x80052A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80052A34: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80052A38: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
    // 0x80052A3C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80052A40:
    // 0x80052A40: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80052A44: addiu       $s0, $s0, 0x1BCC
    ctx->r16 = ADD32(ctx->r16, 0X1BCC);
    // 0x80052A48: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80052A4C: nop

    // 0x80052A50: beq         $a0, $zero, L_80052A6C
    if (ctx->r4 == 0) {
        // 0x80052A54: nop
    
            goto L_80052A6C;
    }
    // 0x80052A54: nop

    // 0x80052A58: jal         0x800075A0
    // 0x80052A5C: nop

    func_800075A0(rdram, ctx);
        goto after_17;
    // 0x80052A5C: nop

    after_17:
    // 0x80052A60: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80052A64: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
    // 0x80052A68: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_80052A6C:
    // 0x80052A6C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80052A70: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x80052A74: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x80052A78: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x80052A7C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80052A80: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80052A84: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80052A88: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80052A8C: lw          $t9, -0x2B0C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2B0C);
    // 0x80052A90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80052A94: beq         $t9, $zero, L_80052ADC
    if (ctx->r25 == 0) {
        // 0x80052A98: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80052ADC;
    }
    // 0x80052A98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80052A9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80052AA0: jal         0x80009A84
    // 0x80052AA4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    func_80009A84(rdram, ctx);
        goto after_18;
    // 0x80052AA4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_18:
    // 0x80052AA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80052AAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80052AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80052AB4: jal         0x8000960C
    // 0x80052AB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8000960C(rdram, ctx);
        goto after_19;
    // 0x80052AB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x80052ABC: jal         0x80059870
    // 0x80052AC0: nop

    func_80059870(rdram, ctx);
        goto after_20;
    // 0x80052AC0: nop

    after_20:
    // 0x80052AC4: jal         0x80059820
    // 0x80052AC8: nop

    func_80059820(rdram, ctx);
        goto after_21;
    // 0x80052AC8: nop

    after_21:
    // 0x80052ACC: jal         0x80059610
    // 0x80052AD0: nop

    func_80059610(rdram, ctx);
        goto after_22;
    // 0x80052AD0: nop

    after_22:
    // 0x80052AD4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80052AD8: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
L_80052ADC:
    // 0x80052ADC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80052AE0: lw          $t6, -0x2AF8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2AF8);
    // 0x80052AE4: addiu       $s0, $zero, 0x3C
    ctx->r16 = ADD32(0, 0X3C);
    // 0x80052AE8: beq         $t6, $zero, L_80052B4C
    if (ctx->r14 == 0) {
        // 0x80052AEC: nop
    
            goto L_80052B4C;
    }
    // 0x80052AEC: nop

L_80052AF0:
    // 0x80052AF0: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x80052AF4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052AF8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80052AFC: lwc1        $f6, 0x5ED8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5ED8);
    // 0x80052B00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80052B04: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80052B08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80052B0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80052B10: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80052B14: jal         0x80009A84
    // 0x80052B18: nop

    func_80009A84(rdram, ctx);
        goto after_23;
    // 0x80052B18: nop

    after_23:
    // 0x80052B1C: jal         0x80007AB0
    // 0x80052B20: nop

    func_80007AB0(rdram, ctx);
        goto after_24;
    // 0x80052B20: nop

    after_24:
    // 0x80052B24: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80052B28: bgez        $s0, L_80052AF0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80052B2C: nop
    
            goto L_80052AF0;
    }
    // 0x80052B2C: nop

    // 0x80052B30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80052B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80052B38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80052B3C: jal         0x80009A84
    // 0x80052B40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80009A84(rdram, ctx);
        goto after_25;
    // 0x80052B40: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_25:
    // 0x80052B44: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80052B48: addiu       $v1, $v1, -0x42C0
    ctx->r3 = ADD32(ctx->r3, -0X42C0);
L_80052B4C:
    // 0x80052B4C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80052B50: lui         $at, 0xFFBF
    ctx->r1 = S32(0XFFBF << 16);
    // 0x80052B54: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80052B58: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80052B5C: sll         $t6, $t8, 15
    ctx->r14 = S32(ctx->r24 << 15);
    // 0x80052B60: bltz        $t6, L_80052B70
    if (SIGNED(ctx->r14) < 0) {
        // 0x80052B64: sw          $t8, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r24;
            goto L_80052B70;
    }
    // 0x80052B64: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80052B68: jal         0x80051FFC
    // 0x80052B6C: nop

    func_80051FFC(rdram, ctx);
        goto after_26;
    // 0x80052B6C: nop

    after_26:
L_80052B70:
    // 0x80052B70: lui         $s1, 0xFFEF
    ctx->r17 = S32(0XFFEF << 16);
    // 0x80052B74: ori         $s1, $s1, 0xFFFF
    ctx->r17 = ctx->r17 | 0XFFFF;
    // 0x80052B78: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80052B7C:
    // 0x80052B7C: jal         0x8005C3A8
    // 0x80052B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005C3A8(rdram, ctx);
        goto after_27;
    // 0x80052B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80052B84: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x80052B88: lui         $at, 0xFFBF
    ctx->r1 = S32(0XFFBF << 16);
    // 0x80052B8C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80052B90: and         $t8, $t7, $s1
    ctx->r24 = ctx->r15 & ctx->r17;
    // 0x80052B94: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80052B98: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x80052B9C: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x80052BA0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80052BA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80052BA8: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x80052BAC: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80052BB0: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x80052BB4: bne         $at, $zero, L_80052B7C
    if (ctx->r1 != 0) {
        // 0x80052BB8: sw          $t8, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->r24;
            goto L_80052B7C;
    }
    // 0x80052BB8: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x80052BBC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80052BC0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80052BC4: addiu       $s0, $s0, -0x29F0
    ctx->r16 = ADD32(ctx->r16, -0X29F0);
    // 0x80052BC8: addiu       $v0, $v0, -0x2AF0
    ctx->r2 = ADD32(ctx->r2, -0X2AF0);
L_80052BCC:
    // 0x80052BCC: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x80052BD0: nop

    // 0x80052BD4: beq         $a0, $zero, L_80052BF0
    if (ctx->r4 == 0) {
        // 0x80052BD8: nop
    
            goto L_80052BF0;
    }
    // 0x80052BD8: nop

    // 0x80052BDC: jal         0x80006DC0
    // 0x80052BE0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80006DC0(rdram, ctx);
        goto after_28;
    // 0x80052BE0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_28:
    // 0x80052BE4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80052BE8: nop

    // 0x80052BEC: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
L_80052BF0:
    // 0x80052BF0: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80052BF4: bne         $v0, $s0, L_80052BCC
    if (ctx->r2 != ctx->r16) {
        // 0x80052BF8: nop
    
            goto L_80052BCC;
    }
    // 0x80052BF8: nop

    // 0x80052BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80052C00: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80052C04: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80052C08: jr          $ra
    // 0x80052C0C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80052C0C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80052C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052C10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80052C14: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80052C18: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80052C1C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80052C20: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80052C24: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80052C28: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80052C2C: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80052C30: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80052C34: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80052C38: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80052C3C: jal         0x80007774
    // 0x80052C40: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80052C40: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80052C44: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80052C48: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80052C4C: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x80052C50: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x80052C54: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80052C58: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x80052C5C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80052C60: subu        $t7, $a1, $a0
    ctx->r15 = SUB32(ctx->r5, ctx->r4);
    // 0x80052C64: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80052C68: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x80052C6C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80052C70: mtc1        $a0, $f16
    ctx->f16.u32l = ctx->r4;
    // 0x80052C74: addiu       $s3, $s3, -0x3D60
    ctx->r19 = ADD32(ctx->r19, -0X3D60);
    // 0x80052C78: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80052C7C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80052C80: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052C84: div.s       $f22, $f6, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80052C88: blez        $t6, L_80052D2C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80052C8C: cvt.s.w     $f20, $f16
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80052D2C;
    }
    // 0x80052C8C: cvt.s.w     $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    ctx->f20.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80052C90: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80052C94: lwc1        $f24, 0x5EDC($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5EDC);
    // 0x80052C98: addiu       $s2, $s2, -0x2B08
    ctx->r18 = ADD32(ctx->r18, -0X2B08);
L_80052C9C:
    // 0x80052C9C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x80052CA0: mul.s       $f18, $f20, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80052CA4: beq         $t8, $zero, L_80052CB0
    if (ctx->r24 == 0) {
        // 0x80052CA8: lui         $at, 0x4F80
        ctx->r1 = S32(0X4F80 << 16);
            goto L_80052CB0;
    }
    // 0x80052CA8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80052CAC: addiu       $s0, $v1, -0x1
    ctx->r16 = ADD32(ctx->r3, -0X1);
L_80052CB0:
    // 0x80052CB0: lbu         $t9, 0x1($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X1);
    // 0x80052CB4: nop

    // 0x80052CB8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80052CBC: bgez        $t9, L_80052CD0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80052CC0: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80052CD0;
    }
    // 0x80052CC0: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80052CC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80052CC8: nop

    // 0x80052CCC: add.s       $f8, $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f6.fl;
L_80052CD0:
    // 0x80052CD0: mul.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f8.fl);
    // 0x80052CD4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80052CD8: nop

    // 0x80052CDC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80052CE0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80052CE4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80052CE8: nop

    // 0x80052CEC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80052CF0: mfc1        $a0, $f16
    ctx->r4 = (int32_t)ctx->f16.u32l;
    // 0x80052CF4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80052CF8: sll         $t1, $a0, 24
    ctx->r9 = S32(ctx->r4 << 24);
    // 0x80052CFC: jal         0x80027140
    // 0x80052D00: sra         $a0, $t1, 24
    ctx->r4 = S32(SIGNED(ctx->r9) >> 24);
    func_80027140(rdram, ctx);
        goto after_1;
    // 0x80052D00: sra         $a0, $t1, 24
    ctx->r4 = S32(SIGNED(ctx->r9) >> 24);
    after_1:
    // 0x80052D04: jal         0x80007AB0
    // 0x80052D08: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    func_80007AB0(rdram, ctx);
        goto after_2;
    // 0x80052D08: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    after_2:
    // 0x80052D0C: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x80052D10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80052D14: andi        $t3, $v1, 0xFFFF
    ctx->r11 = ctx->r3 & 0XFFFF;
    // 0x80052D18: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80052D1C: bne         $at, $zero, L_80052C9C
    if (ctx->r1 != 0) {
        // 0x80052D20: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_80052C9C;
    }
    // 0x80052D20: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x80052D24: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x80052D28: nop

L_80052D2C:
    // 0x80052D2C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052D30: lwc1        $f24, 0x5EE0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X5EE0);
    // 0x80052D34: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80052D38: bne         $a1, $zero, L_80052D50
    if (ctx->r5 != 0) {
        // 0x80052D3C: addiu       $s3, $s3, -0x3D60
        ctx->r19 = ADD32(ctx->r19, -0X3D60);
            goto L_80052D50;
    }
    // 0x80052D3C: addiu       $s3, $s3, -0x3D60
    ctx->r19 = ADD32(ctx->r19, -0X3D60);
    // 0x80052D40: jal         0x80027140
    // 0x80052D44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80027140(rdram, ctx);
        goto after_3;
    // 0x80052D44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80052D48: b           L_80052DB0
    // 0x80052D4C: nop

        goto L_80052DB0;
    // 0x80052D4C: nop

L_80052D50:
    // 0x80052D50: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80052D54: lbu         $t4, 0x1($s3)
    ctx->r12 = MEM_BU(ctx->r19, 0X1);
    // 0x80052D58: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80052D5C: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80052D60: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80052D64: mul.s       $f18, $f6, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80052D68: bgez        $t4, L_80052D7C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80052D6C: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80052D7C;
    }
    // 0x80052D6C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80052D70: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80052D74: nop

    // 0x80052D78: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80052D7C:
    // 0x80052D7C: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80052D80: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80052D84: nop

    // 0x80052D88: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80052D8C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80052D90: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80052D94: nop

    // 0x80052D98: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80052D9C: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80052DA0: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80052DA4: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80052DA8: jal         0x80027140
    // 0x80052DAC: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    func_80027140(rdram, ctx);
        goto after_4;
    // 0x80052DAC: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    after_4:
L_80052DB0:
    // 0x80052DB0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052DB4: jal         0x80007AE0
    // 0x80052DB8: sw          $zero, 0x1BD4($at)
    MEM_W(0X1BD4, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_5;
    // 0x80052DB8: sw          $zero, 0x1BD4($at)
    MEM_W(0X1BD4, ctx->r1) = 0;
    after_5:
    // 0x80052DBC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80052DC0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80052DC4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80052DC8: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80052DCC: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80052DD0: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80052DD4: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80052DD8: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80052DDC: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80052DE0: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80052DE4: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80052DE8: jr          $ra
    // 0x80052DEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80052DEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80052DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80052DF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80052DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80052DF8: jal         0x80007774
    // 0x80052DFC: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80052DFC: nop

    after_0:
    // 0x80052E00: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x80052E04: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80052E08: addiu       $a0, $a0, 0x2E3C
    ctx->r4 = ADD32(ctx->r4, 0X2E3C);
    // 0x80052E0C: jal         0x8000796C
    // 0x80052E10: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    func_8000796C(rdram, ctx);
        goto after_1;
    // 0x80052E10: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_1:
    // 0x80052E14: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80052E18: jal         0x80029250
    // 0x80052E1C: nop

    func_80029250(rdram, ctx);
        goto after_2;
    // 0x80052E1C: nop

    after_2:
    // 0x80052E20: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80052E24: jal         0x80007AE0
    // 0x80052E28: sw          $zero, 0x1BC0($at)
    MEM_W(0X1BC0, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_3;
    // 0x80052E28: sw          $zero, 0x1BC0($at)
    MEM_W(0X1BC0, ctx->r1) = 0;
    after_3:
    // 0x80052E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80052E30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80052E34: jr          $ra
    // 0x80052E38: nop

    return;
    // 0x80052E38: nop

;}
