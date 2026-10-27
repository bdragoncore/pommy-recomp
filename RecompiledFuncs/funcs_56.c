#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_1A66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A66C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A674: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x4001A678: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4001A67C: addiu       $t7, $t6, -0x23
    ctx->r15 = ADD32(ctx->r14, -0X23);
    // 0x4001A680: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x4001A684: beq         $at, $zero, L_4001A6E8
    if (ctx->r1 == 0) {
        // 0x4001A688: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_4001A6E8;
    }
    // 0x4001A688: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4001A68C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001A690: addu        $at, $at, $t7
    gpr jr_addend_4001A69C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4001A694: lw          $t7, -0x410($at)
    ctx->r15 = ADD32(ctx->r1, -0X410);
    // 0x4001A698: nop

    // 0x4001A69C: jr          $t7
    // 0x4001A6A0: nop

    switch (jr_addend_4001A69C >> 2) {
        case 0: goto L_4001A6A4; break;
        case 1: goto L_4001A6A4; break;
        case 2: goto L_4001A6E8; break;
        case 3: goto L_4001A6E8; break;
        case 4: goto L_4001A6A4; break;
        case 5: goto L_4001A6E8; break;
        case 6: goto L_4001A6A4; break;
        case 7: goto L_4001A6E8; break;
        case 8: goto L_4001A6E8; break;
        case 9: goto L_4001A6A4; break;
        case 10: goto L_4001A6A4; break;
        default: switch_error(__func__, 0x4001A69C, 0x4001FBF0);
    }
    // 0x4001A6A0: nop

L_4001A6A4:
    // 0x4001A6A4: beq         $a1, $zero, L_4001A6B8
    if (ctx->r5 == 0) {
        // 0x4001A6A8: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_4001A6B8;
    }
    // 0x4001A6A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4001A6AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4001A6B0: b           L_4001A6D0
    // 0x4001A6B4: swc1        $f4, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f4.u32l;
        goto L_4001A6D0;
    // 0x4001A6B4: swc1        $f4, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f4.u32l;
L_4001A6B8:
    // 0x4001A6B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4001A6BC: jal         0x4001A5CC
    // 0x4001A6C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_1A5CC(rdram, ctx);
        goto after_0;
    // 0x4001A6C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001A6C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001A6C8: nop

    // 0x4001A6CC: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
L_4001A6D0:
    // 0x4001A6D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001A6D4: jal         0x4001A5CC
    // 0x4001A6D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_1A5CC(rdram, ctx);
        goto after_1;
    // 0x4001A6D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x4001A6DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001A6E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x4001A6E4: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
L_4001A6E8:
    // 0x4001A6E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A6EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A6F0: jr          $ra
    // 0x4001A6F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4001A6F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_1A6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A6F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A6FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A700: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4001A704: jal         0x4001A5CC
    // 0x4001A708: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_actor_main_1A5CC(rdram, ctx);
        goto after_0;
    // 0x4001A708: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x4001A70C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001A710: lwc1        $f4, -0x3E4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3E4);
    // 0x4001A714: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001A718: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x4001A71C: nop

    // 0x4001A720: bc1t        L_4001A750
    if (c1cs) {
        // 0x4001A724: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001A750;
    }
    // 0x4001A724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A728: lwc1        $f6, 0x48($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X48);
    // 0x4001A72C: nop

    // 0x4001A730: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x4001A734: nop

    // 0x4001A738: bc1f        L_4001A750
    if (!c1cs) {
        // 0x4001A73C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001A750;
    }
    // 0x4001A73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A740: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4001A744: nop

    // 0x4001A748: swc1        $f8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f8.u32l;
    // 0x4001A74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001A750:
    // 0x4001A750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A754: jr          $ra
    // 0x4001A758: nop

    return;
    // 0x4001A758: nop

;}
RECOMP_FUNC void ovl_actor_main_1A75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A75C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4001A760: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001A764: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4001A768: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4001A76C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001A770: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4001A774: jal         0x4001A5CC
    // 0x4001A778: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_actor_main_1A5CC(rdram, ctx);
        goto after_0;
    // 0x4001A778: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x4001A77C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001A780: lwc1        $f4, -0x3E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3E0);
    // 0x4001A784: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x4001A788: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x4001A78C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001A790: bc1f        L_4001A7A0
    if (!c1cs) {
        // 0x4001A794: nop
    
            goto L_4001A7A0;
    }
    // 0x4001A794: nop

    // 0x4001A798: b           L_4001A874
    // 0x4001A79C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4001A874;
    // 0x4001A79C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4001A7A0:
    // 0x4001A7A0: jal         0x4001A5CC
    // 0x4001A7A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_actor_main_1A5CC(rdram, ctx);
        goto after_1;
    // 0x4001A7A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x4001A7A8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x4001A7AC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4001A7B0: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x4001A7B4: jal         0x400006C4
    // 0x4001A7B8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x4001A7B8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x4001A7BC: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x4001A7C0: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4001A7C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001A7C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4001A7CC: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x4001A7D0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x4001A7D4: bc1f        L_4001A7E4
    if (!c1cs) {
        // 0x4001A7D8: nop
    
            goto L_4001A7E4;
    }
    // 0x4001A7D8: nop

    // 0x4001A7DC: b           L_4001A874
    // 0x4001A7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4001A874;
    // 0x4001A7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4001A7E4:
    // 0x4001A7E4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4001A7E8: jal         0x400006C4
    // 0x4001A7EC: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4001A7EC: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x4001A7F0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x4001A7F4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x4001A7F8: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4001A7FC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4001A800: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4001A804: add.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f14.fl;
    // 0x4001A808: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4001A80C: add.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x4001A810: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001A814: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x4001A818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001A81C: bc1f        L_4001A838
    if (!c1cs) {
        // 0x4001A820: nop
    
            goto L_4001A838;
    }
    // 0x4001A820: nop

    // 0x4001A824: lwc1        $f16, 0x50($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X50);
    // 0x4001A828: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x4001A82C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x4001A830: b           L_4001A860
    // 0x4001A834: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
        goto L_4001A860;
    // 0x4001A834: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
L_4001A838:
    // 0x4001A838: sub.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x4001A83C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4001A840: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x4001A844: nop

    // 0x4001A848: bc1f        L_4001A860
    if (!c1cs) {
        // 0x4001A84C: nop
    
            goto L_4001A860;
    }
    // 0x4001A84C: nop

    // 0x4001A850: lwc1        $f8, 0x50($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X50);
    // 0x4001A854: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x4001A858: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x4001A85C: swc1        $f16, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f16.u32l;
L_4001A860:
    // 0x4001A860: bne         $s1, $at, L_4001A874
    if (ctx->r17 != ctx->r1) {
        // 0x4001A864: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_4001A874;
    }
    // 0x4001A864: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x4001A868: jal         0x4001A66C
    // 0x4001A86C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A66C(rdram, ctx);
        goto after_4;
    // 0x4001A86C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x4001A870: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_4001A874:
    // 0x4001A874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A878: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x4001A87C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4001A880: jr          $ra
    // 0x4001A884: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4001A884: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_1A888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A888: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001A88C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001A890: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4001A894: jal         0x400050C8
    // 0x4001A898: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_actor_main_50C8(rdram, ctx);
        goto after_0;
    // 0x4001A898: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x4001A89C: beq         $v0, $zero, L_4001A8E4
    if (ctx->r2 == 0) {
        // 0x4001A8A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4001A8E4;
    }
    // 0x4001A8A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A8A4: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x4001A8A8: nop

    // 0x4001A8AC: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x4001A8B0: nop

    // 0x4001A8B4: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x4001A8B8: bltz        $t8, L_4001A8E4
    if (SIGNED(ctx->r24) < 0) {
        // 0x4001A8BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4001A8E4;
    }
    // 0x4001A8BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A8C0: jal         0x4001A75C
    // 0x4001A8C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A75C(rdram, ctx);
        goto after_1;
    // 0x4001A8C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4001A8C8: bne         $v0, $zero, L_4001A8D8
    if (ctx->r2 != 0) {
        // 0x4001A8CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001A8D8;
    }
    // 0x4001A8CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001A8D0: jal         0x4001A66C
    // 0x4001A8D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_1A66C(rdram, ctx);
        goto after_2;
    // 0x4001A8D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_4001A8D8:
    // 0x4001A8D8: jal         0x4001A6F8
    // 0x4001A8DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A6F8(rdram, ctx);
        goto after_3;
    // 0x4001A8DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4001A8E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001A8E4:
    // 0x4001A8E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4001A8E8: jr          $ra
    // 0x4001A8EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4001A8EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_1A8F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A8F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001A8F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001A8F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001A8FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001A900: bne         $a1, $at, L_4001A918
    if (ctx->r5 != ctx->r1) {
        // 0x4001A904: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001A918;
    }
    // 0x4001A904: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001A908: jal         0x400093E4
    // 0x4001A90C: nop

    ovl_actor_main_93E4(rdram, ctx);
        goto after_0;
    // 0x4001A90C: nop

    after_0:
    // 0x4001A910: b           L_4001A93C
    // 0x4001A914: nop

        goto L_4001A93C;
    // 0x4001A914: nop

L_4001A918:
    // 0x4001A918: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4001A91C: bne         $a1, $at, L_4001A93C
    if (ctx->r5 != ctx->r1) {
        // 0x4001A920: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001A93C;
    }
    // 0x4001A920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001A924: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001A928: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4001A92C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4001A930: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001A934: jal         0x40008D20
    // 0x4001A938: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_1;
    // 0x4001A938: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
L_4001A93C:
    // 0x4001A93C: jal         0x4001A888
    // 0x4001A940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A888(rdram, ctx);
        goto after_2;
    // 0x4001A940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4001A944: jal         0x40009B00
    // 0x4001A948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B00(rdram, ctx);
        goto after_3;
    // 0x4001A948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4001A94C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001A950: bne         $v0, $at, L_4001A960
    if (ctx->r2 != ctx->r1) {
        // 0x4001A954: nop
    
            goto L_4001A960;
    }
    // 0x4001A954: nop

    // 0x4001A958: b           L_4001A968
    // 0x4001A95C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
        goto L_4001A968;
    // 0x4001A95C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
L_4001A960:
    // 0x4001A960: jal         0x40009BB0
    // 0x4001A964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9BB0(rdram, ctx);
        goto after_4;
    // 0x4001A964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_4001A968:
    // 0x4001A968: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001A96C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001A970: jr          $ra
    // 0x4001A974: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001A974: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1A978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A97C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A980: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4001A984: jal         0x40011944
    // 0x4001A988: nop

    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4001A988: nop

    after_0:
    // 0x4001A98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A994: jr          $ra
    // 0x4001A998: nop

    return;
    // 0x4001A998: nop

;}
RECOMP_FUNC void ovl_actor_main_1A99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A99C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x4001A9A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4001A9A4: addiu       $t6, $a0, 0x18C
    ctx->r14 = ADD32(ctx->r4, 0X18C);
    // 0x4001A9A8: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x4001A9AC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x4001A9B0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x4001A9B4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x4001A9B8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x4001A9BC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x4001A9C0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x4001A9C4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x4001A9C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x4001A9CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x4001A9D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4001A9D4: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x4001A9D8: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x4001A9DC: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x4001A9E0: beq         $a1, $at, L_4001AA08
    if (ctx->r5 == ctx->r1) {
        // 0x4001A9E4: sw          $zero, 0x68($sp)
        MEM_W(0X68, ctx->r29) = 0;
            goto L_4001AA08;
    }
    // 0x4001A9E4: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x4001A9E8: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x4001A9EC: beq         $a1, $at, L_4001AA08
    if (ctx->r5 == ctx->r1) {
        // 0x4001A9F0: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_4001AA08;
    }
    // 0x4001A9F0: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x4001A9F4: beq         $a1, $at, L_4001AA08
    if (ctx->r5 == ctx->r1) {
        // 0x4001A9F8: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_4001AA08;
    }
    // 0x4001A9F8: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x4001A9FC: beq         $a1, $at, L_4001AA08
    if (ctx->r5 == ctx->r1) {
        // 0x4001AA00: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_4001AA08;
    }
    // 0x4001AA00: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x4001AA04: bne         $a1, $at, L_4001AA18
    if (ctx->r5 != ctx->r1) {
        // 0x4001AA08: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_4001AA18;
    }
L_4001AA08:
    // 0x4001AA08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x4001AA0C: sw          $t8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r24;
    // 0x4001AA10: b           L_4001AA20
    // 0x4001AA14: sw          $a1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r5;
        goto L_4001AA20;
    // 0x4001AA14: sw          $a1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r5;
L_4001AA18:
    // 0x4001AA18: sw          $a1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r5;
    // 0x4001AA1C: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_4001AA20:
    // 0x4001AA20: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x4001AA24: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4001AA28: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x4001AA2C: addiu       $fp, $zero, 0x8
    ctx->r30 = ADD32(0, 0X8);
    // 0x4001AA30: blez        $t0, L_4001AB74
    if (SIGNED(ctx->r8) <= 0) {
        // 0x4001AA34: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_4001AB74;
    }
    // 0x4001AA34: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x4001AA38: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x4001AA3C: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x4001AA40: addiu       $s5, $sp, 0x50
    ctx->r21 = ADD32(ctx->r29, 0X50);
    // 0x4001AA44: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x4001AA48: addiu       $s3, $sp, 0x70
    ctx->r19 = ADD32(ctx->r29, 0X70);
L_4001AA4C:
    // 0x4001AA4C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x4001AA50: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4001AA54: beq         $s4, $a0, L_4001AB5C
    if (ctx->r20 == ctx->r4) {
        // 0x4001AA58: lw          $t1, 0x6C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X6C);
            goto L_4001AB5C;
    }
    // 0x4001AA58: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x4001AA5C: jal         0x400006C4
    // 0x4001AA60: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4001AA60: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_0:
    // 0x4001AA64: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x4001AA68: nop

    // 0x4001AA6C: bne         $t1, $s6, L_4001AB5C
    if (ctx->r9 != ctx->r22) {
        // 0x4001AA70: lw          $t1, 0x6C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X6C);
            goto L_4001AB5C;
    }
    // 0x4001AA70: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x4001AA74: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x4001AA78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x4001AA7C: beq         $t3, $zero, L_4001AAEC
    if (ctx->r11 == 0) {
        // 0x4001AA80: sw          $t2, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r10;
            goto L_4001AAEC;
    }
    // 0x4001AA80: sw          $t2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r10;
    // 0x4001AA84: multu       $s1, $s7
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x4001AA88: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x4001AA8C: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x4001AA90: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x4001AA94: mflo        $t5
    ctx->r13 = lo;
    // 0x4001AA98: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x4001AA9C: lwc1        $f4, 0x44($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X44);
    // 0x4001AAA0: nop

    // 0x4001AAA4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x4001AAA8: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x4001AAAC: lwc1        $f8, 0x48($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X48);
    // 0x4001AAB0: nop

    // 0x4001AAB4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x4001AAB8: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x4001AABC: lwc1        $f16, 0x4C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4C);
    // 0x4001AAC0: nop

    // 0x4001AAC4: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x4001AAC8: swc1        $f18, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f18.u32l;
    // 0x4001AACC: lw          $t6, 0x24($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X24);
    // 0x4001AAD0: sw          $s6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r22;
    // 0x4001AAD4: sw          $t6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r14;
    // 0x4001AAD8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x4001AADC: jal         0x400006C4
    // 0x4001AAE0: nop

    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4001AAE0: nop

    after_1:
    // 0x4001AAE4: b           L_4001AB0C
    // 0x4001AAE8: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
        goto L_4001AB0C;
    // 0x4001AAE8: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
L_4001AAEC:
    // 0x4001AAEC: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x4001AAF0: sw          $s6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r22;
    // 0x4001AAF4: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x4001AAF8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x4001AAFC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x4001AB00: jal         0x400006C4
    // 0x4001AB04: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x4001AB04: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x4001AB08: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
L_4001AB0C:
    // 0x4001AB0C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x4001AB10: bne         $v0, $at, L_4001AB38
    if (ctx->r2 != ctx->r1) {
        // 0x4001AB14: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_4001AB38;
    }
    // 0x4001AB14: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x4001AB18: lw          $t8, 0xCC($s2)
    ctx->r24 = MEM_W(ctx->r18, 0XCC);
    // 0x4001AB1C: nop

    // 0x4001AB20: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x4001AB24: beq         $at, $zero, L_4001AB5C
    if (ctx->r1 == 0) {
        // 0x4001AB28: lw          $t1, 0x6C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X6C);
            goto L_4001AB5C;
    }
    // 0x4001AB28: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x4001AB2C: b           L_4001AB58
    // 0x4001AB30: sw          $fp, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = ctx->r30;
        goto L_4001AB58;
    // 0x4001AB30: sw          $fp, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = ctx->r30;
    // 0x4001AB34: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
L_4001AB38:
    // 0x4001AB38: bne         $v0, $at, L_4001AB5C
    if (ctx->r2 != ctx->r1) {
        // 0x4001AB3C: lw          $t1, 0x6C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X6C);
            goto L_4001AB5C;
    }
    // 0x4001AB3C: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x4001AB40: lw          $t0, 0xCC($s2)
    ctx->r8 = MEM_W(ctx->r18, 0XCC);
    // 0x4001AB44: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x4001AB48: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x4001AB4C: beq         $at, $zero, L_4001AB5C
    if (ctx->r1 == 0) {
        // 0x4001AB50: lw          $t1, 0x6C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X6C);
            goto L_4001AB5C;
    }
    // 0x4001AB50: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x4001AB54: sw          $t9, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = ctx->r25;
L_4001AB58:
    // 0x4001AB58: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
L_4001AB5C:
    // 0x4001AB5C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x4001AB60: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x4001AB64: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x4001AB68: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x4001AB6C: bne         $at, $zero, L_4001AA4C
    if (ctx->r1 != 0) {
        // 0x4001AB70: nop
    
            goto L_4001AA4C;
    }
    // 0x4001AB70: nop

L_4001AB74:
    // 0x4001AB74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x4001AB78: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x4001AB7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4001AB80: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4001AB84: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4001AB88: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x4001AB8C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x4001AB90: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x4001AB94: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x4001AB98: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x4001AB9C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x4001ABA0: jr          $ra
    // 0x4001ABA4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x4001ABA4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void ovl_actor_main_1ABA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001ABA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001ABAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001ABB0: jal         0x4000115C
    // 0x4001ABB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_0;
    // 0x4001ABB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x4001ABB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001ABBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001ABC0: jr          $ra
    // 0x4001ABC4: nop

    return;
    // 0x4001ABC4: nop

;}
RECOMP_FUNC void ovl_actor_main_1ABC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001ABC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001ABCC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4001ABD0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4001ABD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001ABD8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001ABDC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4001ABE0: beq         $a1, $at, L_4001AC20
    if (ctx->r5 == ctx->r1) {
        // 0x4001ABE4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001AC20;
    }
    // 0x4001ABE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001ABE8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x4001ABEC: beq         $a1, $at, L_4001AC40
    if (ctx->r5 == ctx->r1) {
        // 0x4001ABF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001AC40;
    }
    // 0x4001ABF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001ABF4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x4001ABF8: beq         $a1, $at, L_4001AC64
    if (ctx->r5 == ctx->r1) {
        // 0x4001ABFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001AC64;
    }
    // 0x4001ABFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AC00: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x4001AC04: beq         $a1, $at, L_4001AC94
    if (ctx->r5 == ctx->r1) {
        // 0x4001AC08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001AC94;
    }
    // 0x4001AC08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AC0C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x4001AC10: beq         $a1, $at, L_4001ACC0
    if (ctx->r5 == ctx->r1) {
        // 0x4001AC14: nop
    
            goto L_4001ACC0;
    }
    // 0x4001AC14: nop

    // 0x4001AC18: b           L_4001ACCC
    // 0x4001AC1C: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
        goto L_4001ACCC;
    // 0x4001AC1C: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001AC20:
    // 0x4001AC20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AC24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001AC28: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001AC2C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001AC30: jal         0x40008D20
    // 0x4001AC34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001AC34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001AC38: b           L_4001ACCC
    // 0x4001AC3C: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
        goto L_4001ACCC;
    // 0x4001AC3C: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001AC40:
    // 0x4001AC40: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001AC44: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001AC48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001AC4C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001AC50: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x4001AC54: jal         0x40006EB8
    // 0x4001AC58: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4001AC58: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x4001AC5C: b           L_4001ACCC
    // 0x4001AC60: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
        goto L_4001ACCC;
    // 0x4001AC60: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001AC64:
    // 0x4001AC64: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4001AC68: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001AC6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001AC70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001AC74: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x4001AC78: jal         0x40001A8C
    // 0x4001AC7C: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4001AC7C: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_2:
    // 0x4001AC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AC84: jal         0x4001ABA8
    // 0x4001AC88: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_3;
    // 0x4001AC88: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    after_3:
    // 0x4001AC8C: b           L_4001ACCC
    // 0x4001AC90: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
        goto L_4001ACCC;
    // 0x4001AC90: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001AC94:
    // 0x4001AC94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4001AC98: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001AC9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001ACA0: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
    // 0x4001ACA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001ACA8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001ACAC: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001ACB0: jal         0x40006EB8
    // 0x4001ACB4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_4;
    // 0x4001ACB4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x4001ACB8: b           L_4001ACCC
    // 0x4001ACBC: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
        goto L_4001ACCC;
    // 0x4001ACBC: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001ACC0:
    // 0x4001ACC0: jal         0x4001A978
    // 0x4001ACC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_5;
    // 0x4001ACC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4001ACC8: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001ACCC:
    // 0x4001ACCC: bne         $at, $zero, L_4001ACF8
    if (ctx->r1 != 0) {
        // 0x4001ACD0: slti        $at, $s1, 0xA
        ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
            goto L_4001ACF8;
    }
    // 0x4001ACD0: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x4001ACD4: beq         $at, $zero, L_4001ACF8
    if (ctx->r1 == 0) {
        // 0x4001ACD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001ACF8;
    }
    // 0x4001ACD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001ACDC: jal         0x4001A99C
    // 0x4001ACE0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_6;
    // 0x4001ACE0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_6:
    // 0x4001ACE4: beq         $v0, $zero, L_4001ACF8
    if (ctx->r2 == 0) {
        // 0x4001ACE8: addiu       $a1, $zero, 0x12
        ctx->r5 = ADD32(0, 0X12);
            goto L_4001ACF8;
    }
    // 0x4001ACE8: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x4001ACEC: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001ACF0: jal         0x40000CA0
    // 0x4001ACF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_7;
    // 0x4001ACF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_4001ACF8:
    // 0x4001ACF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001ACFC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4001AD00: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4001AD04: jr          $ra
    // 0x4001AD08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001AD08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1AD0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001AD0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4001AD10: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x4001AD14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001AD18: sltiu       $at, $t7, 0x1E
    ctx->r1 = ctx->r15 < 0X1E ? 1 : 0;
    // 0x4001AD1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001AD20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001AD24: beq         $at, $zero, L_4001AE00
    if (ctx->r1 == 0) {
        // 0x4001AD28: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_4001AE00;
    }
    // 0x4001AD28: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4001AD2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4001AD30: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001AD34: addu        $at, $at, $t7
    gpr jr_addend_4001AD40 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4001AD38: lw          $t7, -0x3DC($at)
    ctx->r15 = ADD32(ctx->r1, -0X3DC);
    // 0x4001AD3C: nop

    // 0x4001AD40: jr          $t7
    // 0x4001AD44: nop

    switch (jr_addend_4001AD40 >> 2) {
        case 0: goto L_4001AD48; break;
        case 1: goto L_4001AE00; break;
        case 2: goto L_4001AE00; break;
        case 3: goto L_4001AE00; break;
        case 4: goto L_4001AD68; break;
        case 5: goto L_4001AD90; break;
        case 6: goto L_4001AE00; break;
        case 7: goto L_4001AE00; break;
        case 8: goto L_4001ADC4; break;
        case 9: goto L_4001AE00; break;
        case 10: goto L_4001AE00; break;
        case 11: goto L_4001AE00; break;
        case 12: goto L_4001AE00; break;
        case 13: goto L_4001AE00; break;
        case 14: goto L_4001ADD0; break;
        case 15: goto L_4001AE00; break;
        case 16: goto L_4001AE00; break;
        case 17: goto L_4001AE00; break;
        case 18: goto L_4001AE00; break;
        case 19: goto L_4001AE00; break;
        case 20: goto L_4001AE00; break;
        case 21: goto L_4001AE00; break;
        case 22: goto L_4001AE00; break;
        case 23: goto L_4001AE00; break;
        case 24: goto L_4001AE00; break;
        case 25: goto L_4001AE00; break;
        case 26: goto L_4001AE00; break;
        case 27: goto L_4001AE00; break;
        case 28: goto L_4001AE00; break;
        case 29: goto L_4001ADF8; break;
        default: switch_error(__func__, 0x4001AD40, 0x4001FC24);
    }
    // 0x4001AD44: nop

L_4001AD48:
    // 0x4001AD48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AD4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001AD50: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001AD54: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001AD58: jal         0x40008D20
    // 0x4001AD5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001AD5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001AD60: b           L_4001AE04
    // 0x4001AD64: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001AE04;
    // 0x4001AD64: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001AD68:
    // 0x4001AD68: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001AD6C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001AD70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AD74: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001AD78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001AD7C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x4001AD80: jal         0x40006EB8
    // 0x4001AD84: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4001AD84: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x4001AD88: b           L_4001AE04
    // 0x4001AD8C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001AE04;
    // 0x4001AD8C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001AD90:
    // 0x4001AD90: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4001AD94: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001AD98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001AD9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001ADA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001ADA4: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x4001ADA8: jal         0x40001A8C
    // 0x4001ADAC: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4001ADAC: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_2:
    // 0x4001ADB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001ADB4: jal         0x4001ABA8
    // 0x4001ADB8: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_3;
    // 0x4001ADB8: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    after_3:
    // 0x4001ADBC: b           L_4001AE04
    // 0x4001ADC0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001AE04;
    // 0x4001ADC0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001ADC4:
    // 0x4001ADC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4001ADC8: b           L_4001AE00
    // 0x4001ADCC: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
        goto L_4001AE00;
    // 0x4001ADCC: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
L_4001ADD0:
    // 0x4001ADD0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001ADD4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001ADD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001ADDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001ADE0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001ADE4: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001ADE8: jal         0x40006EB8
    // 0x4001ADEC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_4;
    // 0x4001ADEC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x4001ADF0: b           L_4001AE04
    // 0x4001ADF4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001AE04;
    // 0x4001ADF4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001ADF8:
    // 0x4001ADF8: jal         0x4001A978
    // 0x4001ADFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_5;
    // 0x4001ADFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_4001AE00:
    // 0x4001AE00: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001AE04:
    // 0x4001AE04: nop

    // 0x4001AE08: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x4001AE0C: bne         $at, $zero, L_4001AE38
    if (ctx->r1 != 0) {
        // 0x4001AE10: slti        $at, $t8, 0x10
        ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
            goto L_4001AE38;
    }
    // 0x4001AE10: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x4001AE14: beq         $at, $zero, L_4001AE38
    if (ctx->r1 == 0) {
        // 0x4001AE18: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001AE38;
    }
    // 0x4001AE18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AE1C: jal         0x4001A99C
    // 0x4001AE20: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_6;
    // 0x4001AE20: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_6:
    // 0x4001AE24: beq         $v0, $zero, L_4001AE38
    if (ctx->r2 == 0) {
        // 0x4001AE28: addiu       $a1, $zero, 0x13
        ctx->r5 = ADD32(0, 0X13);
            goto L_4001AE38;
    }
    // 0x4001AE28: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x4001AE2C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001AE30: jal         0x40000CA0
    // 0x4001AE34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_7;
    // 0x4001AE34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_4001AE38:
    // 0x4001AE38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001AE3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001AE40: jr          $ra
    // 0x4001AE44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4001AE44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_1AE48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001AE48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001AE4C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001AE50: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x4001AE54: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001AE58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001AE5C: bne         $at, $zero, L_4001AE78
    if (ctx->r1 != 0) {
        // 0x4001AE60: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_4001AE78;
    }
    // 0x4001AE60: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4001AE64: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x4001AE68: beq         $a1, $at, L_4001AF58
    if (ctx->r5 == ctx->r1) {
        // 0x4001AE6C: nop
    
            goto L_4001AF58;
    }
    // 0x4001AE6C: nop

    // 0x4001AE70: b           L_4001AF64
    // 0x4001AE74: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
        goto L_4001AF64;
    // 0x4001AE74: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_4001AE78:
    // 0x4001AE78: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x4001AE7C: nop

    // 0x4001AE80: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x4001AE84: sltiu       $at, $t8, 0xF
    ctx->r1 = ctx->r24 < 0XF ? 1 : 0;
    // 0x4001AE88: beq         $at, $zero, L_4001AF60
    if (ctx->r1 == 0) {
        // 0x4001AE8C: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_4001AF60;
    }
    // 0x4001AE8C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x4001AE90: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001AE94: addu        $at, $at, $t8
    gpr jr_addend_4001AEA0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x4001AE98: lw          $t8, -0x364($at)
    ctx->r24 = ADD32(ctx->r1, -0X364);
    // 0x4001AE9C: nop

    // 0x4001AEA0: jr          $t8
    // 0x4001AEA4: nop

    switch (jr_addend_4001AEA0 >> 2) {
        case 0: goto L_4001AEA8; break;
        case 1: goto L_4001AF60; break;
        case 2: goto L_4001AF60; break;
        case 3: goto L_4001AF60; break;
        case 4: goto L_4001AEC8; break;
        case 5: goto L_4001AEF0; break;
        case 6: goto L_4001AF60; break;
        case 7: goto L_4001AF60; break;
        case 8: goto L_4001AF24; break;
        case 9: goto L_4001AF60; break;
        case 10: goto L_4001AF60; break;
        case 11: goto L_4001AF60; break;
        case 12: goto L_4001AF60; break;
        case 13: goto L_4001AF60; break;
        case 14: goto L_4001AF30; break;
        default: switch_error(__func__, 0x4001AEA0, 0x4001FC9C);
    }
    // 0x4001AEA4: nop

L_4001AEA8:
    // 0x4001AEA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AEAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001AEB0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001AEB4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001AEB8: jal         0x40008D20
    // 0x4001AEBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001AEBC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001AEC0: b           L_4001AF64
    // 0x4001AEC4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
        goto L_4001AF64;
    // 0x4001AEC4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_4001AEC8:
    // 0x4001AEC8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001AECC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001AED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AED4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001AED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001AEDC: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x4001AEE0: jal         0x40006EB8
    // 0x4001AEE4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4001AEE4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x4001AEE8: b           L_4001AF64
    // 0x4001AEEC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
        goto L_4001AF64;
    // 0x4001AEEC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_4001AEF0:
    // 0x4001AEF0: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x4001AEF4: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001AEF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001AEFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AF00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001AF04: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x4001AF08: jal         0x40001A8C
    // 0x4001AF0C: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4001AF0C: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_2:
    // 0x4001AF10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AF14: jal         0x4001ABA8
    // 0x4001AF18: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_3;
    // 0x4001AF18: addiu       $a1, $zero, 0xB9
    ctx->r5 = ADD32(0, 0XB9);
    after_3:
    // 0x4001AF1C: b           L_4001AF64
    // 0x4001AF20: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
        goto L_4001AF64;
    // 0x4001AF20: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_4001AF24:
    // 0x4001AF24: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4001AF28: b           L_4001AF60
    // 0x4001AF2C: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
        goto L_4001AF60;
    // 0x4001AF2C: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
L_4001AF30:
    // 0x4001AF30: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001AF34: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001AF38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AF3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001AF40: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001AF44: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001AF48: jal         0x40006EB8
    // 0x4001AF4C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_4;
    // 0x4001AF4C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x4001AF50: b           L_4001AF64
    // 0x4001AF54: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
        goto L_4001AF64;
    // 0x4001AF54: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_4001AF58:
    // 0x4001AF58: jal         0x4001A978
    // 0x4001AF5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_5;
    // 0x4001AF5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_4001AF60:
    // 0x4001AF60: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_4001AF64:
    // 0x4001AF64: nop

    // 0x4001AF68: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x4001AF6C: bne         $at, $zero, L_4001AF98
    if (ctx->r1 != 0) {
        // 0x4001AF70: slti        $at, $t9, 0x10
        ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
            goto L_4001AF98;
    }
    // 0x4001AF70: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x4001AF74: beq         $at, $zero, L_4001AF98
    if (ctx->r1 == 0) {
        // 0x4001AF78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001AF98;
    }
    // 0x4001AF78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AF7C: jal         0x4001A99C
    // 0x4001AF80: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_6;
    // 0x4001AF80: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_6:
    // 0x4001AF84: beq         $v0, $zero, L_4001AF98
    if (ctx->r2 == 0) {
        // 0x4001AF88: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_4001AF98;
    }
    // 0x4001AF88: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x4001AF8C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001AF90: jal         0x40000CA0
    // 0x4001AF94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_7;
    // 0x4001AF94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_4001AF98:
    // 0x4001AF98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001AF9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001AFA0: jr          $ra
    // 0x4001AFA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001AFA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1AFA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001AFA8: lwc1        $f4, 0x50($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X50);
    // 0x4001AFAC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4001AFB0: swc1        $f4, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f4.u32l;
    // 0x4001AFB4: jr          $ra
    // 0x4001AFB8: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x4001AFB8: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_actor_main_1AFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001AFBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4001AFC0: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x4001AFC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001AFC8: sltiu       $at, $t7, 0x1E
    ctx->r1 = ctx->r15 < 0X1E ? 1 : 0;
    // 0x4001AFCC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001AFD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001AFD4: beq         $at, $zero, L_4001B0C8
    if (ctx->r1 == 0) {
        // 0x4001AFD8: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_4001B0C8;
    }
    // 0x4001AFD8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4001AFDC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4001AFE0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001AFE4: addu        $at, $at, $t7
    gpr jr_addend_4001AFF0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4001AFE8: lw          $t7, -0x328($at)
    ctx->r15 = ADD32(ctx->r1, -0X328);
    // 0x4001AFEC: nop

    // 0x4001AFF0: jr          $t7
    // 0x4001AFF4: nop

    switch (jr_addend_4001AFF0 >> 2) {
        case 0: goto L_4001AFF8; break;
        case 1: goto L_4001B030; break;
        case 2: goto L_4001B0C8; break;
        case 3: goto L_4001B0C8; break;
        case 4: goto L_4001B0C8; break;
        case 5: goto L_4001B054; break;
        case 6: goto L_4001B0C8; break;
        case 7: goto L_4001B0C8; break;
        case 8: goto L_4001B0C8; break;
        case 9: goto L_4001B0C8; break;
        case 10: goto L_4001B064; break;
        case 11: goto L_4001B0C8; break;
        case 12: goto L_4001B0C8; break;
        case 13: goto L_4001B088; break;
        case 14: goto L_4001B0C8; break;
        case 15: goto L_4001B0C8; break;
        case 16: goto L_4001B0B0; break;
        case 17: goto L_4001B0C8; break;
        case 18: goto L_4001B0C8; break;
        case 19: goto L_4001B0C8; break;
        case 20: goto L_4001B0C8; break;
        case 21: goto L_4001B0C8; break;
        case 22: goto L_4001B0C8; break;
        case 23: goto L_4001B0C8; break;
        case 24: goto L_4001B0C8; break;
        case 25: goto L_4001B0C8; break;
        case 26: goto L_4001B0C8; break;
        case 27: goto L_4001B0C8; break;
        case 28: goto L_4001B0C8; break;
        case 29: goto L_4001B0C0; break;
        default: switch_error(__func__, 0x4001AFF0, 0x4001FCD8);
    }
    // 0x4001AFF4: nop

L_4001AFF8:
    // 0x4001AFF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001AFFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001B000: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001B004: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001B008: jal         0x40008D20
    // 0x4001B00C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001B00C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001B010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B014: jal         0x40001A8C
    // 0x4001B018: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4001B018: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x4001B01C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B020: jal         0x4001ABA8
    // 0x4001B024: addiu       $a1, $zero, 0xBA
    ctx->r5 = ADD32(0, 0XBA);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_2;
    // 0x4001B024: addiu       $a1, $zero, 0xBA
    ctx->r5 = ADD32(0, 0XBA);
    after_2:
    // 0x4001B028: b           L_4001B0CC
    // 0x4001B02C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001B0CC;
    // 0x4001B02C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001B030:
    // 0x4001B030: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4001B034: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4001B038: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001B03C: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    // 0x4001B040: lwc1        $f6, -0x2B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2B0);
    // 0x4001B044: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4001B048: swc1        $f6, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f6.u32l;
    // 0x4001B04C: b           L_4001B0C8
    // 0x4001B050: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
        goto L_4001B0C8;
    // 0x4001B050: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
L_4001B054:
    // 0x4001B054: jal         0x4001AFA8
    // 0x4001B058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1AFA8(rdram, ctx);
        goto after_3;
    // 0x4001B058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4001B05C: b           L_4001B0CC
    // 0x4001B060: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001B0CC;
    // 0x4001B060: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001B064:
    // 0x4001B064: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4001B068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B06C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B070: lui         $a2, 0x4307
    ctx->r6 = S32(0X4307 << 16);
    // 0x4001B074: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    // 0x4001B078: jal         0x40006EB8
    // 0x4001B07C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_4;
    // 0x4001B07C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x4001B080: b           L_4001B0CC
    // 0x4001B084: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001B0CC;
    // 0x4001B084: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001B088:
    // 0x4001B088: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001B08C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4001B090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B094: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B098: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001B09C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001B0A0: jal         0x40006EB8
    // 0x4001B0A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_5;
    // 0x4001B0A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x4001B0A8: b           L_4001B0CC
    // 0x4001B0AC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001B0CC;
    // 0x4001B0AC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001B0B0:
    // 0x4001B0B0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001B0B4: lwc1        $f18, -0x2AC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X2AC);
    // 0x4001B0B8: b           L_4001B0C8
    // 0x4001B0BC: swc1        $f18, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f18.u32l;
        goto L_4001B0C8;
    // 0x4001B0BC: swc1        $f18, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f18.u32l;
L_4001B0C0:
    // 0x4001B0C0: jal         0x4001A978
    // 0x4001B0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_6;
    // 0x4001B0C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_4001B0C8:
    // 0x4001B0C8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001B0CC:
    // 0x4001B0CC: nop

    // 0x4001B0D0: slti        $at, $t8, 0xC
    ctx->r1 = SIGNED(ctx->r24) < 0XC ? 1 : 0;
    // 0x4001B0D4: bne         $at, $zero, L_4001B11C
    if (ctx->r1 != 0) {
        // 0x4001B0D8: slti        $at, $t8, 0xF
        ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
            goto L_4001B11C;
    }
    // 0x4001B0D8: slti        $at, $t8, 0xF
    ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
    // 0x4001B0DC: beq         $at, $zero, L_4001B11C
    if (ctx->r1 == 0) {
        // 0x4001B0E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001B11C;
    }
    // 0x4001B0E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B0E4: jal         0x4001A99C
    // 0x4001B0E8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_7;
    // 0x4001B0E8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_7:
    // 0x4001B0EC: beq         $v0, $zero, L_4001B11C
    if (ctx->r2 == 0) {
        // 0x4001B0F0: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_4001B11C;
    }
    // 0x4001B0F0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x4001B0F4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001B0F8: jal         0x40000CA0
    // 0x4001B0FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_8;
    // 0x4001B0FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x4001B100: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4001B104: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4001B108: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001B10C: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    // 0x4001B110: lwc1        $f6, -0x2A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X2A8);
    // 0x4001B114: nop

    // 0x4001B118: swc1        $f6, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f6.u32l;
L_4001B11C:
    // 0x4001B11C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001B120: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001B124: jr          $ra
    // 0x4001B128: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4001B128: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_1B12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001B12C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001B130: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4001B134: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4001B138: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001B13C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001B140: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4001B144: beq         $a1, $at, L_4001B17C
    if (ctx->r5 == ctx->r1) {
        // 0x4001B148: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001B17C;
    }
    // 0x4001B148: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001B14C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x4001B150: beq         $a1, $at, L_4001B1F8
    if (ctx->r5 == ctx->r1) {
        // 0x4001B154: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001B1F8;
    }
    // 0x4001B154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B158: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x4001B15C: beq         $a1, $at, L_4001B21C
    if (ctx->r5 == ctx->r1) {
        // 0x4001B160: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_4001B21C;
    }
    // 0x4001B160: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4001B164: beq         $a1, $at, L_4001B22C
    if (ctx->r5 == ctx->r1) {
        // 0x4001B168: addiu       $at, $zero, 0x32
        ctx->r1 = ADD32(0, 0X32);
            goto L_4001B22C;
    }
    // 0x4001B168: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x4001B16C: beq         $a1, $at, L_4001B238
    if (ctx->r5 == ctx->r1) {
        // 0x4001B170: nop
    
            goto L_4001B238;
    }
    // 0x4001B170: nop

    // 0x4001B174: b           L_4001B240
    // 0x4001B178: nop

        goto L_4001B240;
    // 0x4001B178: nop

L_4001B17C:
    // 0x4001B17C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001B180: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001B184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B188: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001B18C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B190: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x4001B194: jal         0x40006EB8
    // 0x4001B198: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_0;
    // 0x4001B198: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x4001B19C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001B1A0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x4001B1A4: jal         0x40000CA0
    // 0x4001B1A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4001B1A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4001B1AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B1B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001B1B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001B1B8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001B1BC: jal         0x40008D20
    // 0x4001B1C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_2;
    // 0x4001B1C0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x4001B1C4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4001B1C8: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001B1CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001B1D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B1D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001B1D8: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x4001B1DC: jal         0x40001A8C
    // 0x4001B1E0: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_3;
    // 0x4001B1E0: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x4001B1E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B1E8: jal         0x4001ABA8
    // 0x4001B1EC: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_4;
    // 0x4001B1EC: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    after_4:
    // 0x4001B1F0: b           L_4001B240
    // 0x4001B1F4: nop

        goto L_4001B240;
    // 0x4001B1F4: nop

L_4001B1F8:
    // 0x4001B1F8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001B1FC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001B200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B204: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001B208: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001B20C: jal         0x40006EB8
    // 0x4001B210: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_5;
    // 0x4001B210: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x4001B214: b           L_4001B240
    // 0x4001B218: nop

        goto L_4001B240;
    // 0x4001B218: nop

L_4001B21C:
    // 0x4001B21C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4001B220: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4001B224: b           L_4001B240
    // 0x4001B228: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
        goto L_4001B240;
    // 0x4001B228: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
L_4001B22C:
    // 0x4001B22C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4001B230: b           L_4001B240
    // 0x4001B234: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
        goto L_4001B240;
    // 0x4001B234: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
L_4001B238:
    // 0x4001B238: jal         0x4001A978
    // 0x4001B23C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_6;
    // 0x4001B23C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_4001B240:
    // 0x4001B240: blez        $s1, L_4001B258
    if (SIGNED(ctx->r17) <= 0) {
        // 0x4001B244: slti        $at, $s1, 0xD
        ctx->r1 = SIGNED(ctx->r17) < 0XD ? 1 : 0;
            goto L_4001B258;
    }
    // 0x4001B244: slti        $at, $s1, 0xD
    ctx->r1 = SIGNED(ctx->r17) < 0XD ? 1 : 0;
    // 0x4001B248: beq         $at, $zero, L_4001B258
    if (ctx->r1 == 0) {
        // 0x4001B24C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001B258;
    }
    // 0x4001B24C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B250: jal         0x4001A99C
    // 0x4001B254: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_7;
    // 0x4001B254: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_7:
L_4001B258:
    // 0x4001B258: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001B25C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4001B260: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4001B264: jr          $ra
    // 0x4001B268: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001B268: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1B26C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001B26C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4001B270: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x4001B274: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001B278: sltiu       $at, $t7, 0x12
    ctx->r1 = ctx->r15 < 0X12 ? 1 : 0;
    // 0x4001B27C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001B280: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001B284: beq         $at, $zero, L_4001B334
    if (ctx->r1 == 0) {
        // 0x4001B288: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_4001B334;
    }
    // 0x4001B288: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4001B28C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4001B290: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001B294: addu        $at, $at, $t7
    gpr jr_addend_4001B2A0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4001B298: lw          $t7, -0x2A4($at)
    ctx->r15 = ADD32(ctx->r1, -0X2A4);
    // 0x4001B29C: nop

    // 0x4001B2A0: jr          $t7
    // 0x4001B2A4: nop

    switch (jr_addend_4001B2A0 >> 2) {
        case 0: goto L_4001B2A8; break;
        case 1: goto L_4001B334; break;
        case 2: goto L_4001B334; break;
        case 3: goto L_4001B2C8; break;
        case 4: goto L_4001B2F0; break;
        case 5: goto L_4001B304; break;
        case 6: goto L_4001B334; break;
        case 7: goto L_4001B334; break;
        case 8: goto L_4001B334; break;
        case 9: goto L_4001B334; break;
        case 10: goto L_4001B334; break;
        case 11: goto L_4001B334; break;
        case 12: goto L_4001B334; break;
        case 13: goto L_4001B334; break;
        case 14: goto L_4001B334; break;
        case 15: goto L_4001B334; break;
        case 16: goto L_4001B334; break;
        case 17: goto L_4001B32C; break;
        default: switch_error(__func__, 0x4001B2A0, 0x4001FD5C);
    }
    // 0x4001B2A4: nop

L_4001B2A8:
    // 0x4001B2A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B2AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001B2B0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001B2B4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001B2B8: jal         0x40008D20
    // 0x4001B2BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001B2BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001B2C0: b           L_4001B338
    // 0x4001B2C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001B338;
    // 0x4001B2C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001B2C8:
    // 0x4001B2C8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001B2CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001B2D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B2D4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001B2D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B2DC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x4001B2E0: jal         0x40006EB8
    // 0x4001B2E4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4001B2E4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x4001B2E8: b           L_4001B338
    // 0x4001B2EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001B338;
    // 0x4001B2EC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001B2F0:
    // 0x4001B2F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B2F4: jal         0x4001ABA8
    // 0x4001B2F8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_2;
    // 0x4001B2F8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    after_2:
    // 0x4001B2FC: b           L_4001B338
    // 0x4001B300: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001B338;
    // 0x4001B300: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001B304:
    // 0x4001B304: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001B308: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001B30C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B310: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B314: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001B318: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001B31C: jal         0x40006EB8
    // 0x4001B320: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_3;
    // 0x4001B320: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x4001B324: b           L_4001B338
    // 0x4001B328: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001B338;
    // 0x4001B328: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001B32C:
    // 0x4001B32C: jal         0x4001A978
    // 0x4001B330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_4;
    // 0x4001B330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_4001B334:
    // 0x4001B334: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001B338:
    // 0x4001B338: nop

    // 0x4001B33C: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x4001B340: bne         $at, $zero, L_4001B36C
    if (ctx->r1 != 0) {
        // 0x4001B344: slti        $at, $t8, 0x7
        ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
            goto L_4001B36C;
    }
    // 0x4001B344: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x4001B348: beq         $at, $zero, L_4001B36C
    if (ctx->r1 == 0) {
        // 0x4001B34C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001B36C;
    }
    // 0x4001B34C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B350: jal         0x4001A99C
    // 0x4001B354: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_5;
    // 0x4001B354: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_5:
    // 0x4001B358: beq         $v0, $zero, L_4001B36C
    if (ctx->r2 == 0) {
        // 0x4001B35C: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_4001B36C;
    }
    // 0x4001B35C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x4001B360: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001B364: jal         0x40000CA0
    // 0x4001B368: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_6;
    // 0x4001B368: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_4001B36C:
    // 0x4001B36C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001B370: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001B374: jr          $ra
    // 0x4001B378: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4001B378: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_1B37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001B37C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001B380: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4001B384: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4001B388: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001B38C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x4001B390: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4001B394: beq         $a1, $at, L_4001B3C8
    if (ctx->r5 == ctx->r1) {
        // 0x4001B398: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001B3C8;
    }
    // 0x4001B398: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001B39C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x4001B3A0: beq         $a1, $at, L_4001B3F4
    if (ctx->r5 == ctx->r1) {
        // 0x4001B3A4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001B3F4;
    }
    // 0x4001B3A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001B3A8: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x4001B3AC: beq         $a1, $at, L_4001B418
    if (ctx->r5 == ctx->r1) {
        // 0x4001B3B0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001B418;
    }
    // 0x4001B3B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001B3B4: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x4001B3B8: beq         $a1, $at, L_4001B43C
    if (ctx->r5 == ctx->r1) {
        // 0x4001B3BC: nop
    
            goto L_4001B43C;
    }
    // 0x4001B3BC: nop

    // 0x4001B3C0: b           L_4001B448
    // 0x4001B3C4: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
        goto L_4001B448;
    // 0x4001B3C4: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
L_4001B3C8:
    // 0x4001B3C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001B3CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001B3D0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001B3D4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001B3D8: jal         0x40008D20
    // 0x4001B3DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001B3DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001B3E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001B3E4: jal         0x4001ABA8
    // 0x4001B3E8: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_1;
    // 0x4001B3E8: addiu       $a1, $zero, 0xBC
    ctx->r5 = ADD32(0, 0XBC);
    after_1:
    // 0x4001B3EC: b           L_4001B448
    // 0x4001B3F0: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
        goto L_4001B448;
    // 0x4001B3F0: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
L_4001B3F4:
    // 0x4001B3F4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4001B3F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4001B3FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B400: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x4001B404: lui         $a3, 0x427E
    ctx->r7 = S32(0X427E << 16);
    // 0x4001B408: jal         0x40006EB8
    // 0x4001B40C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_2;
    // 0x4001B40C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x4001B410: b           L_4001B448
    // 0x4001B414: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
        goto L_4001B448;
    // 0x4001B414: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
L_4001B418:
    // 0x4001B418: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001B41C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001B420: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B424: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001B428: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001B42C: jal         0x40006EB8
    // 0x4001B430: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_3;
    // 0x4001B430: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x4001B434: b           L_4001B448
    // 0x4001B438: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
        goto L_4001B448;
    // 0x4001B438: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
L_4001B43C:
    // 0x4001B43C: jal         0x4001A978
    // 0x4001B440: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_4;
    // 0x4001B440: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x4001B444: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
L_4001B448:
    // 0x4001B448: bne         $at, $zero, L_4001B474
    if (ctx->r1 != 0) {
        // 0x4001B44C: slti        $at, $s0, 0x17
        ctx->r1 = SIGNED(ctx->r16) < 0X17 ? 1 : 0;
            goto L_4001B474;
    }
    // 0x4001B44C: slti        $at, $s0, 0x17
    ctx->r1 = SIGNED(ctx->r16) < 0X17 ? 1 : 0;
    // 0x4001B450: beq         $at, $zero, L_4001B474
    if (ctx->r1 == 0) {
        // 0x4001B454: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_4001B474;
    }
    // 0x4001B454: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001B458: jal         0x4001A99C
    // 0x4001B45C: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_5;
    // 0x4001B45C: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    after_5:
    // 0x4001B460: beq         $v0, $zero, L_4001B474
    if (ctx->r2 == 0) {
        // 0x4001B464: addiu       $a1, $zero, 0x1A
        ctx->r5 = ADD32(0, 0X1A);
            goto L_4001B474;
    }
    // 0x4001B464: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x4001B468: lw          $a0, 0x1C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X1C);
    // 0x4001B46C: jal         0x40000CA0
    // 0x4001B470: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_6;
    // 0x4001B470: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_4001B474:
    // 0x4001B474: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001B478: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4001B47C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4001B480: jr          $ra
    // 0x4001B484: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001B484: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1B488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001B488: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001B48C: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4001B490: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4001B494: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4001B498: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x4001B49C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001B4A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001B4A4: beq         $at, $zero, L_4001B580
    if (ctx->r1 == 0) {
        // 0x4001B4A8: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_4001B580;
    }
    // 0x4001B4A8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4001B4AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4001B4B0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001B4B4: addu        $at, $at, $t6
    gpr jr_addend_4001B4C0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4001B4B8: lw          $t6, -0x25C($at)
    ctx->r14 = ADD32(ctx->r1, -0X25C);
    // 0x4001B4BC: nop

    // 0x4001B4C0: jr          $t6
    // 0x4001B4C4: nop

    switch (jr_addend_4001B4C0 >> 2) {
        case 0: goto L_4001B4C8; break;
        case 1: goto L_4001B580; break;
        case 2: goto L_4001B580; break;
        case 3: goto L_4001B580; break;
        case 4: goto L_4001B504; break;
        case 5: goto L_4001B528; break;
        case 6: goto L_4001B580; break;
        case 7: goto L_4001B580; break;
        case 8: goto L_4001B580; break;
        case 9: goto L_4001B580; break;
        case 10: goto L_4001B548; break;
        case 11: goto L_4001B580; break;
        case 12: goto L_4001B580; break;
        case 13: goto L_4001B580; break;
        case 14: goto L_4001B580; break;
        case 15: goto L_4001B580; break;
        case 16: goto L_4001B580; break;
        case 17: goto L_4001B580; break;
        case 18: goto L_4001B580; break;
        case 19: goto L_4001B580; break;
        case 20: goto L_4001B580; break;
        case 21: goto L_4001B580; break;
        case 22: goto L_4001B580; break;
        case 23: goto L_4001B578; break;
        default: switch_error(__func__, 0x4001B4C0, 0x4001FDA4);
    }
    // 0x4001B4C4: nop

L_4001B4C8:
    // 0x4001B4C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B4CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001B4D0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001B4D4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001B4D8: jal         0x40008D20
    // 0x4001B4DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001B4DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001B4E0: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001B4E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B4E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001B4EC: jal         0x40001A8C
    // 0x4001B4F0: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4001B4F0: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x4001B4F4: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x4001B4F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001B4FC: b           L_4001B580
    // 0x4001B500: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
        goto L_4001B580;
    // 0x4001B500: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
L_4001B504:
    // 0x4001B504: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4001B508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B50C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B510: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x4001B514: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001B518: jal         0x40006EB8
    // 0x4001B51C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_2;
    // 0x4001B51C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x4001B520: b           L_4001B584
    // 0x4001B524: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
        goto L_4001B584;
    // 0x4001B524: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001B528:
    // 0x4001B528: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x4001B52C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4001B530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B534: addiu       $a1, $zero, 0xBE
    ctx->r5 = ADD32(0, 0XBE);
    // 0x4001B538: jal         0x4001ABA8
    // 0x4001B53C: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_3;
    // 0x4001B53C: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    after_3:
    // 0x4001B540: b           L_4001B584
    // 0x4001B544: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
        goto L_4001B584;
    // 0x4001B544: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001B548:
    // 0x4001B548: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001B54C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4001B550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B558: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001B55C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001B560: jal         0x40006EB8
    // 0x4001B564: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_4;
    // 0x4001B564: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x4001B568: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x4001B56C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4001B570: b           L_4001B580
    // 0x4001B574: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
        goto L_4001B580;
    // 0x4001B574: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
L_4001B578:
    // 0x4001B578: jal         0x4001A978
    // 0x4001B57C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_5;
    // 0x4001B57C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_4001B580:
    // 0x4001B580: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001B584:
    // 0x4001B584: bne         $at, $zero, L_4001B5B0
    if (ctx->r1 != 0) {
        // 0x4001B588: slti        $at, $s1, 0xB
        ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
            goto L_4001B5B0;
    }
    // 0x4001B588: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x4001B58C: beq         $at, $zero, L_4001B5B0
    if (ctx->r1 == 0) {
        // 0x4001B590: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001B5B0;
    }
    // 0x4001B590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B594: jal         0x4001A99C
    // 0x4001B598: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_6;
    // 0x4001B598: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_6:
    // 0x4001B59C: beq         $v0, $zero, L_4001B5B0
    if (ctx->r2 == 0) {
        // 0x4001B5A0: addiu       $a1, $zero, 0x1B
        ctx->r5 = ADD32(0, 0X1B);
            goto L_4001B5B0;
    }
    // 0x4001B5A0: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x4001B5A4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001B5A8: jal         0x40000CA0
    // 0x4001B5AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_7;
    // 0x4001B5AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_4001B5B0:
    // 0x4001B5B0: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x4001B5B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4001B5B8: bne         $at, $zero, L_4001B5E0
    if (ctx->r1 != 0) {
        // 0x4001B5BC: slti        $at, $s1, 0xA
        ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
            goto L_4001B5E0;
    }
    // 0x4001B5BC: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x4001B5C0: beq         $at, $zero, L_4001B5E0
    if (ctx->r1 == 0) {
        // 0x4001B5C4: lui         $at, 0x41C8
        ctx->r1 = S32(0X41C8 << 16);
            goto L_4001B5E0;
    }
    // 0x4001B5C4: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x4001B5C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001B5CC: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4001B5D0: nop

    // 0x4001B5D4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4001B5D8: b           L_4001B600
    // 0x4001B5DC: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
        goto L_4001B600;
    // 0x4001B5DC: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
L_4001B5E0:
    // 0x4001B5E0: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x4001B5E4: bne         $at, $zero, L_4001B600
    if (ctx->r1 != 0) {
        // 0x4001B5E8: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_4001B600;
    }
    // 0x4001B5E8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001B5EC: lwc1        $f16, -0x1FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1FC);
    // 0x4001B5F0: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4001B5F4: nop

    // 0x4001B5F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4001B5FC: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
L_4001B600:
    // 0x4001B600: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x4001B604: swc1        $f0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f0.u32l;
    // 0x4001B608: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001B60C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4001B610: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4001B614: jr          $ra
    // 0x4001B618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001B618: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1B61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001B61C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4001B620: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4001B624: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001B628: sltiu       $at, $t6, 0x24
    ctx->r1 = ctx->r14 < 0X24 ? 1 : 0;
    // 0x4001B62C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001B630: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001B634: beq         $at, $zero, L_4001B76C
    if (ctx->r1 == 0) {
        // 0x4001B638: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_4001B76C;
    }
    // 0x4001B638: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x4001B63C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4001B640: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001B644: addu        $at, $at, $t6
    gpr jr_addend_4001B650 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4001B648: lw          $t6, -0x1F8($at)
    ctx->r14 = ADD32(ctx->r1, -0X1F8);
    // 0x4001B64C: nop

    // 0x4001B650: jr          $t6
    // 0x4001B654: nop

    switch (jr_addend_4001B650 >> 2) {
        case 0: goto L_4001B658; break;
        case 1: goto L_4001B694; break;
        case 2: goto L_4001B6B0; break;
        case 3: goto L_4001B700; break;
        case 4: goto L_4001B76C; break;
        case 5: goto L_4001B76C; break;
        case 6: goto L_4001B76C; break;
        case 7: goto L_4001B71C; break;
        case 8: goto L_4001B76C; break;
        case 9: goto L_4001B76C; break;
        case 10: goto L_4001B76C; break;
        case 11: goto L_4001B76C; break;
        case 12: goto L_4001B76C; break;
        case 13: goto L_4001B76C; break;
        case 14: goto L_4001B76C; break;
        case 15: goto L_4001B76C; break;
        case 16: goto L_4001B76C; break;
        case 17: goto L_4001B76C; break;
        case 18: goto L_4001B76C; break;
        case 19: goto L_4001B76C; break;
        case 20: goto L_4001B76C; break;
        case 21: goto L_4001B76C; break;
        case 22: goto L_4001B76C; break;
        case 23: goto L_4001B76C; break;
        case 24: goto L_4001B76C; break;
        case 25: goto L_4001B76C; break;
        case 26: goto L_4001B76C; break;
        case 27: goto L_4001B76C; break;
        case 28: goto L_4001B76C; break;
        case 29: goto L_4001B76C; break;
        case 30: goto L_4001B74C; break;
        case 31: goto L_4001B76C; break;
        case 32: goto L_4001B76C; break;
        case 33: goto L_4001B76C; break;
        case 34: goto L_4001B76C; break;
        case 35: goto L_4001B758; break;
        default: switch_error(__func__, 0x4001B650, 0x4001FE08);
    }
    // 0x4001B654: nop

L_4001B658:
    // 0x4001B658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B65C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001B660: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001B664: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001B668: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4001B66C: jal         0x40008D20
    // 0x4001B670: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001B670: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x4001B674: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4001B678: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4001B67C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B680: jal         0x4001AFA8
    // 0x4001B684: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_1AFA8(rdram, ctx);
        goto after_1;
    // 0x4001B684: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x4001B688: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x4001B68C: b           L_4001B770
    // 0x4001B690: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
        goto L_4001B770;
    // 0x4001B690: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
L_4001B694:
    // 0x4001B694: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4001B698: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4001B69C: lwc1        $f6, 0x64($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4001B6A0: nop

    // 0x4001B6A4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4001B6A8: b           L_4001B76C
    // 0x4001B6AC: swc1        $f10, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f10.u32l;
        goto L_4001B76C;
    // 0x4001B6AC: swc1        $f10, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f10.u32l;
L_4001B6B0:
    // 0x4001B6B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4001B6B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4001B6B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B6BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B6C0: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x4001B6C4: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001B6C8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x4001B6CC: jal         0x40006EB8
    // 0x4001B6D0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_2;
    // 0x4001B6D0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x4001B6D4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x4001B6D8: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001B6DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4001B6E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B6E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001B6E8: swc1        $f18, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f18.u32l;
    // 0x4001B6EC: jal         0x40001A8C
    // 0x4001B6F0: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_3;
    // 0x4001B6F0: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x4001B6F4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x4001B6F8: b           L_4001B770
    // 0x4001B6FC: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
        goto L_4001B770;
    // 0x4001B6FC: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
L_4001B700:
    // 0x4001B700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B704: addiu       $a1, $zero, 0xBF
    ctx->r5 = ADD32(0, 0XBF);
    // 0x4001B708: jal         0x4001ABA8
    // 0x4001B70C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_4;
    // 0x4001B70C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_4:
    // 0x4001B710: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x4001B714: b           L_4001B770
    // 0x4001B718: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
        goto L_4001B770;
    // 0x4001B718: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
L_4001B71C:
    // 0x4001B71C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001B720: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001B724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B728: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B72C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001B730: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001B734: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x4001B738: jal         0x40006EB8
    // 0x4001B73C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_5;
    // 0x4001B73C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x4001B740: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x4001B744: b           L_4001B770
    // 0x4001B748: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
        goto L_4001B770;
    // 0x4001B748: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
L_4001B74C:
    // 0x4001B74C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4001B750: b           L_4001B76C
    // 0x4001B754: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
        goto L_4001B76C;
    // 0x4001B754: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
L_4001B758:
    // 0x4001B758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B75C: jal         0x4001A978
    // 0x4001B760: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_6;
    // 0x4001B760: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_6:
    // 0x4001B764: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x4001B768: nop

L_4001B76C:
    // 0x4001B76C: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
L_4001B770:
    // 0x4001B770: bne         $at, $zero, L_4001B798
    if (ctx->r1 != 0) {
        // 0x4001B774: slti        $at, $v0, 0x14
        ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
            goto L_4001B798;
    }
    // 0x4001B774: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x4001B778: beq         $at, $zero, L_4001B798
    if (ctx->r1 == 0) {
        // 0x4001B77C: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_4001B798;
    }
    // 0x4001B77C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001B780: lwc1        $f16, -0x168($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X168);
    // 0x4001B784: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4001B788: nop

    // 0x4001B78C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4001B790: b           L_4001B7C0
    // 0x4001B794: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
        goto L_4001B7C0;
    // 0x4001B794: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
L_4001B798:
    // 0x4001B798: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x4001B79C: bne         $at, $zero, L_4001B7C0
    if (ctx->r1 != 0) {
        // 0x4001B7A0: slti        $at, $v0, 0x20
        ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
            goto L_4001B7C0;
    }
    // 0x4001B7A0: slti        $at, $v0, 0x20
    ctx->r1 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x4001B7A4: beq         $at, $zero, L_4001B7C0
    if (ctx->r1 == 0) {
        // 0x4001B7A8: lui         $at, 0x4148
        ctx->r1 = S32(0X4148 << 16);
            goto L_4001B7C0;
    }
    // 0x4001B7A8: lui         $at, 0x4148
    ctx->r1 = S32(0X4148 << 16);
    // 0x4001B7AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001B7B0: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4001B7B4: nop

    // 0x4001B7B8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4001B7BC: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
L_4001B7C0:
    // 0x4001B7C0: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x4001B7C4: bne         $at, $zero, L_4001B7E0
    if (ctx->r1 != 0) {
        // 0x4001B7C8: slti        $at, $v0, 0x1F
        ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
            goto L_4001B7E0;
    }
    // 0x4001B7C8: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x4001B7CC: beq         $at, $zero, L_4001B7E0
    if (ctx->r1 == 0) {
        // 0x4001B7D0: lui         $at, 0xC0E0
        ctx->r1 = S32(0XC0E0 << 16);
            goto L_4001B7E0;
    }
    // 0x4001B7D0: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x4001B7D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4001B7D8: nop

    // 0x4001B7DC: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
L_4001B7E0:
    // 0x4001B7E0: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x4001B7E4: bne         $at, $zero, L_4001B810
    if (ctx->r1 != 0) {
        // 0x4001B7E8: slti        $at, $v0, 0x9
        ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
            goto L_4001B810;
    }
    // 0x4001B7E8: slti        $at, $v0, 0x9
    ctx->r1 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x4001B7EC: beq         $at, $zero, L_4001B810
    if (ctx->r1 == 0) {
        // 0x4001B7F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001B810;
    }
    // 0x4001B7F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B7F4: jal         0x4001A99C
    // 0x4001B7F8: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_7;
    // 0x4001B7F8: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_7:
    // 0x4001B7FC: beq         $v0, $zero, L_4001B810
    if (ctx->r2 == 0) {
        // 0x4001B800: addiu       $a1, $zero, 0x1C
        ctx->r5 = ADD32(0, 0X1C);
            goto L_4001B810;
    }
    // 0x4001B800: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x4001B804: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001B808: jal         0x40000CA0
    // 0x4001B80C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_8;
    // 0x4001B80C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_4001B810:
    // 0x4001B810: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001B814: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001B818: jr          $ra
    // 0x4001B81C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4001B81C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_1B820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001B820: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001B824: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4001B828: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4001B82C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4001B830: sltiu       $at, $t6, 0x1E
    ctx->r1 = ctx->r14 < 0X1E ? 1 : 0;
    // 0x4001B834: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001B838: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001B83C: beq         $at, $zero, L_4001B94C
    if (ctx->r1 == 0) {
        // 0x4001B840: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_4001B94C;
    }
    // 0x4001B840: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4001B844: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4001B848: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001B84C: addu        $at, $at, $t6
    gpr jr_addend_4001B858 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4001B850: lw          $t6, -0x164($at)
    ctx->r14 = ADD32(ctx->r1, -0X164);
    // 0x4001B854: nop

    // 0x4001B858: jr          $t6
    // 0x4001B85C: nop

    switch (jr_addend_4001B858 >> 2) {
        case 0: goto L_4001B860; break;
        case 1: goto L_4001B94C; break;
        case 2: goto L_4001B8A8; break;
        case 3: goto L_4001B8D0; break;
        case 4: goto L_4001B94C; break;
        case 5: goto L_4001B94C; break;
        case 6: goto L_4001B910; break;
        case 7: goto L_4001B94C; break;
        case 8: goto L_4001B94C; break;
        case 9: goto L_4001B94C; break;
        case 10: goto L_4001B8F0; break;
        case 11: goto L_4001B94C; break;
        case 12: goto L_4001B94C; break;
        case 13: goto L_4001B910; break;
        case 14: goto L_4001B94C; break;
        case 15: goto L_4001B94C; break;
        case 16: goto L_4001B94C; break;
        case 17: goto L_4001B8F0; break;
        case 18: goto L_4001B94C; break;
        case 19: goto L_4001B94C; break;
        case 20: goto L_4001B910; break;
        case 21: goto L_4001B91C; break;
        case 22: goto L_4001B94C; break;
        case 23: goto L_4001B94C; break;
        case 24: goto L_4001B94C; break;
        case 25: goto L_4001B94C; break;
        case 26: goto L_4001B94C; break;
        case 27: goto L_4001B94C; break;
        case 28: goto L_4001B94C; break;
        case 29: goto L_4001B944; break;
        default: switch_error(__func__, 0x4001B858, 0x4001FE9C);
    }
    // 0x4001B85C: nop

L_4001B860:
    // 0x4001B860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B864: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001B868: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001B86C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001B870: jal         0x40008D20
    // 0x4001B874: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001B874: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001B878: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001B87C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x4001B880: jal         0x40000CA0
    // 0x4001B884: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4001B884: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4001B888: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001B88C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B890: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001B894: jal         0x40001A8C
    // 0x4001B898: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_2;
    // 0x4001B898: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x4001B89C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4001B8A0: b           L_4001B94C
    // 0x4001B8A4: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
        goto L_4001B94C;
    // 0x4001B8A4: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
L_4001B8A8:
    // 0x4001B8A8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001B8AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4001B8B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B8B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B8B8: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x4001B8BC: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001B8C0: jal         0x40006EB8
    // 0x4001B8C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_3;
    // 0x4001B8C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x4001B8C8: b           L_4001B950
    // 0x4001B8CC: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
        goto L_4001B950;
    // 0x4001B8CC: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
L_4001B8D0:
    // 0x4001B8D0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4001B8D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4001B8D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B8DC: addiu       $a1, $zero, 0xC2
    ctx->r5 = ADD32(0, 0XC2);
    // 0x4001B8E0: jal         0x4001ABA8
    // 0x4001B8E4: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_4;
    // 0x4001B8E4: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
    after_4:
    // 0x4001B8E8: b           L_4001B950
    // 0x4001B8EC: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
        goto L_4001B950;
    // 0x4001B8EC: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
L_4001B8F0:
    // 0x4001B8F0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4001B8F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4001B8F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B8FC: addiu       $a1, $zero, 0xC3
    ctx->r5 = ADD32(0, 0XC3);
    // 0x4001B900: jal         0x4001ABA8
    // 0x4001B904: swc1        $f16, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f16.u32l;
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_5;
    // 0x4001B904: swc1        $f16, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f16.u32l;
    after_5:
    // 0x4001B908: b           L_4001B950
    // 0x4001B90C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
        goto L_4001B950;
    // 0x4001B90C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
L_4001B910:
    // 0x4001B910: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x4001B914: b           L_4001B94C
    // 0x4001B918: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
        goto L_4001B94C;
    // 0x4001B918: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
L_4001B91C:
    // 0x4001B91C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001B920: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4001B924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B928: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001B92C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001B930: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001B934: jal         0x40006EB8
    // 0x4001B938: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_6;
    // 0x4001B938: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x4001B93C: b           L_4001B950
    // 0x4001B940: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
        goto L_4001B950;
    // 0x4001B940: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
L_4001B944:
    // 0x4001B944: jal         0x4001A978
    // 0x4001B948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_7;
    // 0x4001B948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_4001B94C:
    // 0x4001B94C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
L_4001B950:
    // 0x4001B950: bne         $at, $zero, L_4001B95C
    if (ctx->r1 != 0) {
        // 0x4001B954: slti        $at, $s1, 0x8
        ctx->r1 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
            goto L_4001B95C;
    }
    // 0x4001B954: slti        $at, $s1, 0x8
    ctx->r1 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x4001B958: bne         $at, $zero, L_4001B97C
    if (ctx->r1 != 0) {
        // 0x4001B95C: slti        $at, $s1, 0xB
        ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
            goto L_4001B97C;
    }
L_4001B95C:
    // 0x4001B95C: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x4001B960: bne         $at, $zero, L_4001B96C
    if (ctx->r1 != 0) {
        // 0x4001B964: slti        $at, $s1, 0xF
        ctx->r1 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
            goto L_4001B96C;
    }
    // 0x4001B964: slti        $at, $s1, 0xF
    ctx->r1 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
    // 0x4001B968: bne         $at, $zero, L_4001B97C
    if (ctx->r1 != 0) {
        // 0x4001B96C: slti        $at, $s1, 0x12
        ctx->r1 = SIGNED(ctx->r17) < 0X12 ? 1 : 0;
            goto L_4001B97C;
    }
L_4001B96C:
    // 0x4001B96C: slti        $at, $s1, 0x12
    ctx->r1 = SIGNED(ctx->r17) < 0X12 ? 1 : 0;
    // 0x4001B970: bne         $at, $zero, L_4001B988
    if (ctx->r1 != 0) {
        // 0x4001B974: slti        $at, $s1, 0x16
        ctx->r1 = SIGNED(ctx->r17) < 0X16 ? 1 : 0;
            goto L_4001B988;
    }
    // 0x4001B974: slti        $at, $s1, 0x16
    ctx->r1 = SIGNED(ctx->r17) < 0X16 ? 1 : 0;
    // 0x4001B978: beq         $at, $zero, L_4001B988
    if (ctx->r1 == 0) {
        // 0x4001B97C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001B988;
    }
L_4001B97C:
    // 0x4001B97C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B980: jal         0x4001A99C
    // 0x4001B984: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_8;
    // 0x4001B984: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_8:
L_4001B988:
    // 0x4001B988: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001B98C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4001B990: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4001B994: jr          $ra
    // 0x4001B998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001B998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1B99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001B99C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4001B9A0: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x4001B9A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001B9A8: sltiu       $at, $t7, 0x24
    ctx->r1 = ctx->r15 < 0X24 ? 1 : 0;
    // 0x4001B9AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001B9B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001B9B4: beq         $at, $zero, L_4001BAB4
    if (ctx->r1 == 0) {
        // 0x4001B9B8: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_4001BAB4;
    }
    // 0x4001B9B8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4001B9BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4001B9C0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001B9C4: addu        $at, $at, $t7
    gpr jr_addend_4001B9D0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4001B9C8: lw          $t7, -0xEC($at)
    ctx->r15 = ADD32(ctx->r1, -0XEC);
    // 0x4001B9CC: nop

    // 0x4001B9D0: jr          $t7
    // 0x4001B9D4: nop

    switch (jr_addend_4001B9D0 >> 2) {
        case 0: goto L_4001B9D8; break;
        case 1: goto L_4001BA08; break;
        case 2: goto L_4001BA30; break;
        case 3: goto L_4001BAB4; break;
        case 4: goto L_4001BAB4; break;
        case 5: goto L_4001BA64; break;
        case 6: goto L_4001BAB4; break;
        case 7: goto L_4001BAB4; break;
        case 8: goto L_4001BA70; break;
        case 9: goto L_4001BAB4; break;
        case 10: goto L_4001BAB4; break;
        case 11: goto L_4001BA64; break;
        case 12: goto L_4001BAB4; break;
        case 13: goto L_4001BAB4; break;
        case 14: goto L_4001BA70; break;
        case 15: goto L_4001BAB4; break;
        case 16: goto L_4001BAB4; break;
        case 17: goto L_4001BA64; break;
        case 18: goto L_4001BAB4; break;
        case 19: goto L_4001BAB4; break;
        case 20: goto L_4001BA70; break;
        case 21: goto L_4001BAB4; break;
        case 22: goto L_4001BAB4; break;
        case 23: goto L_4001BA80; break;
        case 24: goto L_4001BAB4; break;
        case 25: goto L_4001BAB4; break;
        case 26: goto L_4001BAB4; break;
        case 27: goto L_4001BAB4; break;
        case 28: goto L_4001BAB4; break;
        case 29: goto L_4001BAB4; break;
        case 30: goto L_4001BAB4; break;
        case 31: goto L_4001BAB4; break;
        case 32: goto L_4001BAB4; break;
        case 33: goto L_4001BAB4; break;
        case 34: goto L_4001BAB4; break;
        case 35: goto L_4001BAAC; break;
        default: switch_error(__func__, 0x4001B9D0, 0x4001FF14);
    }
    // 0x4001B9D4: nop

L_4001B9D8:
    // 0x4001B9D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001B9DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001B9E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001B9E4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001B9E8: jal         0x40008D20
    // 0x4001B9EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001B9EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001B9F0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001B9F4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x4001B9F8: jal         0x40000CA0
    // 0x4001B9FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4001B9FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4001BA00: b           L_4001BAB8
    // 0x4001BA04: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001BAB8;
    // 0x4001BA04: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001BA08:
    // 0x4001BA08: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001BA0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001BA10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BA14: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4001BA18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001BA1C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x4001BA20: jal         0x40006EB8
    // 0x4001BA24: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_2;
    // 0x4001BA24: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x4001BA28: b           L_4001BAB8
    // 0x4001BA2C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001BAB8;
    // 0x4001BA2C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001BA30:
    // 0x4001BA30: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4001BA34: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001BA38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001BA3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BA40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001BA44: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    // 0x4001BA48: jal         0x40001A8C
    // 0x4001BA4C: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_3;
    // 0x4001BA4C: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x4001BA50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BA54: jal         0x4001ABA8
    // 0x4001BA58: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_4;
    // 0x4001BA58: addiu       $a1, $zero, 0xBD
    ctx->r5 = ADD32(0, 0XBD);
    after_4:
    // 0x4001BA5C: b           L_4001BAB8
    // 0x4001BA60: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001BAB8;
    // 0x4001BA60: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001BA64:
    // 0x4001BA64: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4001BA68: b           L_4001BAB4
    // 0x4001BA6C: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
        goto L_4001BAB4;
    // 0x4001BA6C: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
L_4001BA70:
    // 0x4001BA70: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4001BA74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4001BA78: b           L_4001BAB4
    // 0x4001BA7C: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
        goto L_4001BAB4;
    // 0x4001BA7C: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
L_4001BA80:
    // 0x4001BA80: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001BA84: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001BA88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BA8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001BA90: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001BA94: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001BA98: jal         0x40006EB8
    // 0x4001BA9C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_5;
    // 0x4001BA9C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x4001BAA0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4001BAA4: b           L_4001BAB4
    // 0x4001BAA8: swc1        $f16, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f16.u32l;
        goto L_4001BAB4;
    // 0x4001BAA8: swc1        $f16, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f16.u32l;
L_4001BAAC:
    // 0x4001BAAC: jal         0x4001A978
    // 0x4001BAB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_6;
    // 0x4001BAB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_4001BAB4:
    // 0x4001BAB4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001BAB8:
    // 0x4001BAB8: nop

    // 0x4001BABC: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x4001BAC0: bne         $at, $zero, L_4001BAD8
    if (ctx->r1 != 0) {
        // 0x4001BAC4: slti        $at, $t8, 0x19
        ctx->r1 = SIGNED(ctx->r24) < 0X19 ? 1 : 0;
            goto L_4001BAD8;
    }
    // 0x4001BAC4: slti        $at, $t8, 0x19
    ctx->r1 = SIGNED(ctx->r24) < 0X19 ? 1 : 0;
    // 0x4001BAC8: beq         $at, $zero, L_4001BAD8
    if (ctx->r1 == 0) {
        // 0x4001BACC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BAD8;
    }
    // 0x4001BACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BAD0: jal         0x4001A99C
    // 0x4001BAD4: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_7;
    // 0x4001BAD4: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_7:
L_4001BAD8:
    // 0x4001BAD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001BADC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001BAE0: jr          $ra
    // 0x4001BAE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4001BAE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_actor_main_1BAE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001BAE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001BAEC: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4001BAF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001BAF4: sltiu       $at, $t6, 0x2A
    ctx->r1 = ctx->r14 < 0X2A ? 1 : 0;
    // 0x4001BAF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001BAFC: beq         $at, $zero, L_4001BCE8
    if (ctx->r1 == 0) {
        // 0x4001BB00: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001BCE8;
    }
    // 0x4001BB00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001BB04: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4001BB08: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001BB0C: addu        $at, $at, $t6
    gpr jr_addend_4001BB18 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4001BB10: lw          $t6, -0x5C($at)
    ctx->r14 = ADD32(ctx->r1, -0X5C);
    // 0x4001BB14: nop

    // 0x4001BB18: jr          $t6
    // 0x4001BB1C: nop

    switch (jr_addend_4001BB18 >> 2) {
        case 0: goto L_4001BB20; break;
        case 1: goto L_4001BCE8; break;
        case 2: goto L_4001BCE8; break;
        case 3: goto L_4001BCE8; break;
        case 4: goto L_4001BCE8; break;
        case 5: goto L_4001BCE8; break;
        case 6: goto L_4001BCE8; break;
        case 7: goto L_4001BCE8; break;
        case 8: goto L_4001BCE8; break;
        case 9: goto L_4001BCE8; break;
        case 10: goto L_4001BCE8; break;
        case 11: goto L_4001BBB4; break;
        case 12: goto L_4001BCE8; break;
        case 13: goto L_4001BCE8; break;
        case 14: goto L_4001BCE8; break;
        case 15: goto L_4001BCE8; break;
        case 16: goto L_4001BCE8; break;
        case 17: goto L_4001BCE8; break;
        case 18: goto L_4001BCE8; break;
        case 19: goto L_4001BC28; break;
        case 20: goto L_4001BCE8; break;
        case 21: goto L_4001BCE8; break;
        case 22: goto L_4001BCE8; break;
        case 23: goto L_4001BC60; break;
        case 24: goto L_4001BCE8; break;
        case 25: goto L_4001BCE8; break;
        case 26: goto L_4001BCE8; break;
        case 27: goto L_4001BCE8; break;
        case 28: goto L_4001BCE8; break;
        case 29: goto L_4001BC98; break;
        case 30: goto L_4001BCE8; break;
        case 31: goto L_4001BCE8; break;
        case 32: goto L_4001BCE8; break;
        case 33: goto L_4001BCE8; break;
        case 34: goto L_4001BCE8; break;
        case 35: goto L_4001BCB8; break;
        case 36: goto L_4001BCE8; break;
        case 37: goto L_4001BCE8; break;
        case 38: goto L_4001BCE8; break;
        case 39: goto L_4001BCE8; break;
        case 40: goto L_4001BCE8; break;
        case 41: goto L_4001BCE0; break;
        default: switch_error(__func__, 0x4001BB18, 0x4001FFA4);
    }
    // 0x4001BB1C: nop

L_4001BB20:
    // 0x4001BB20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BB24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001BB28: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001BB2C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001BB30: jal         0x40008D20
    // 0x4001BB34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001BB34: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001BB38: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x4001BB3C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x4001BB40: beq         $v0, $at, L_4001BB74
    if (ctx->r2 == ctx->r1) {
        // 0x4001BB44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BB74;
    }
    // 0x4001BB44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BB48: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x4001BB4C: beq         $v0, $at, L_4001BBA4
    if (ctx->r2 == ctx->r1) {
        // 0x4001BB50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BBA4;
    }
    // 0x4001BB50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BB54: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x4001BB58: beq         $v0, $at, L_4001BB84
    if (ctx->r2 == ctx->r1) {
        // 0x4001BB5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BB84;
    }
    // 0x4001BB5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BB60: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x4001BB64: beq         $v0, $at, L_4001BB94
    if (ctx->r2 == ctx->r1) {
        // 0x4001BB68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BB94;
    }
    // 0x4001BB68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BB6C: b           L_4001BCEC
    // 0x4001BB70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BB70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BB74:
    // 0x4001BB74: jal         0x4001ABA8
    // 0x4001BB78: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_1;
    // 0x4001BB78: addiu       $a1, $zero, 0xBB
    ctx->r5 = ADD32(0, 0XBB);
    after_1:
    // 0x4001BB7C: b           L_4001BCEC
    // 0x4001BB80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BB80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BB84:
    // 0x4001BB84: jal         0x4001ABA8
    // 0x4001BB88: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_2;
    // 0x4001BB88: addiu       $a1, $zero, 0xC1
    ctx->r5 = ADD32(0, 0XC1);
    after_2:
    // 0x4001BB8C: b           L_4001BCEC
    // 0x4001BB90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BB90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BB94:
    // 0x4001BB94: jal         0x4001ABA8
    // 0x4001BB98: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_3;
    // 0x4001BB98: addiu       $a1, $zero, 0xC6
    ctx->r5 = ADD32(0, 0XC6);
    after_3:
    // 0x4001BB9C: b           L_4001BCEC
    // 0x4001BBA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BBA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BBA4:
    // 0x4001BBA4: jal         0x4001ABA8
    // 0x4001BBA8: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_4;
    // 0x4001BBA8: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_4:
    // 0x4001BBAC: b           L_4001BCEC
    // 0x4001BBB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BBB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BBB4:
    // 0x4001BBB4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x4001BBB8: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x4001BBBC: beq         $v0, $at, L_4001BBD8
    if (ctx->r2 == ctx->r1) {
        // 0x4001BBC0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BBD8;
    }
    // 0x4001BBC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BBC4: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x4001BBC8: beq         $v0, $at, L_4001BC00
    if (ctx->r2 == ctx->r1) {
        // 0x4001BBCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BC00;
    }
    // 0x4001BBCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BBD0: b           L_4001BCEC
    // 0x4001BBD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BBD4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BBD8:
    // 0x4001BBD8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x4001BBDC: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x4001BBE0: jal         0x4001A598
    // 0x4001BBE4: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_5;
    // 0x4001BBE4: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    after_5:
    // 0x4001BBE8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001BBEC: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x4001BBF0: jal         0x40000CA0
    // 0x4001BBF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_6;
    // 0x4001BBF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x4001BBF8: b           L_4001BCEC
    // 0x4001BBFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BBFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BC00:
    // 0x4001BC00: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x4001BC04: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x4001BC08: jal         0x4001A598
    // 0x4001BC0C: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_7;
    // 0x4001BC0C: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_7:
    // 0x4001BC10: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001BC14: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x4001BC18: jal         0x40000CA0
    // 0x4001BC1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_8;
    // 0x4001BC1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x4001BC20: b           L_4001BCEC
    // 0x4001BC24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BC24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BC28:
    // 0x4001BC28: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x4001BC2C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x4001BC30: bne         $t7, $at, L_4001BCE8
    if (ctx->r15 != ctx->r1) {
        // 0x4001BC34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BCE8;
    }
    // 0x4001BC34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BC38: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x4001BC3C: lui         $a2, 0xC270
    ctx->r6 = S32(0XC270 << 16);
    // 0x4001BC40: jal         0x4001A598
    // 0x4001BC44: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_9;
    // 0x4001BC44: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_9:
    // 0x4001BC48: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001BC4C: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x4001BC50: jal         0x40000CA0
    // 0x4001BC54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_10;
    // 0x4001BC54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x4001BC58: b           L_4001BCEC
    // 0x4001BC5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BC5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BC60:
    // 0x4001BC60: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x4001BC64: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x4001BC68: bne         $t8, $at, L_4001BCE8
    if (ctx->r24 != ctx->r1) {
        // 0x4001BC6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BCE8;
    }
    // 0x4001BC6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BC70: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x4001BC74: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x4001BC78: jal         0x4001A598
    // 0x4001BC7C: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_11;
    // 0x4001BC7C: lui         $a3, 0x42DC
    ctx->r7 = S32(0X42DC << 16);
    after_11:
    // 0x4001BC80: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001BC84: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x4001BC88: jal         0x40000CA0
    // 0x4001BC8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_12;
    // 0x4001BC8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x4001BC90: b           L_4001BCEC
    // 0x4001BC94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BC94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BC98:
    // 0x4001BC98: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x4001BC9C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x4001BCA0: bne         $t9, $at, L_4001BCEC
    if (ctx->r25 != ctx->r1) {
        // 0x4001BCA4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4001BCEC;
    }
    // 0x4001BCA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001BCA8: jal         0x4001A978
    // 0x4001BCAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_13;
    // 0x4001BCAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x4001BCB0: b           L_4001BCEC
    // 0x4001BCB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BCB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BCB8:
    // 0x4001BCB8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x4001BCBC: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x4001BCC0: beq         $v0, $at, L_4001BCD0
    if (ctx->r2 == ctx->r1) {
        // 0x4001BCC4: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_4001BCD0;
    }
    // 0x4001BCC4: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x4001BCC8: bne         $v0, $at, L_4001BCEC
    if (ctx->r2 != ctx->r1) {
        // 0x4001BCCC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4001BCEC;
    }
    // 0x4001BCCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BCD0:
    // 0x4001BCD0: jal         0x4001A978
    // 0x4001BCD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_14;
    // 0x4001BCD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x4001BCD8: b           L_4001BCEC
    // 0x4001BCDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BCEC;
    // 0x4001BCDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BCE0:
    // 0x4001BCE0: jal         0x4001A978
    // 0x4001BCE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_15;
    // 0x4001BCE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
L_4001BCE8:
    // 0x4001BCE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BCEC:
    // 0x4001BCEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001BCF0: jr          $ra
    // 0x4001BCF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001BCF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1BCF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001BCF8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x4001BCFC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001BD00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001BD04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001BD08: beq         $a1, $at, L_4001BD2C
    if (ctx->r5 == ctx->r1) {
        // 0x4001BD0C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001BD2C;
    }
    // 0x4001BD0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001BD10: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x4001BD14: beq         $a1, $at, L_4001BD60
    if (ctx->r5 == ctx->r1) {
        // 0x4001BD18: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_4001BD60;
    }
    // 0x4001BD18: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x4001BD1C: beq         $a1, $at, L_4001BDF0
    if (ctx->r5 == ctx->r1) {
        // 0x4001BD20: nop
    
            goto L_4001BDF0;
    }
    // 0x4001BD20: nop

    // 0x4001BD24: b           L_4001BDFC
    // 0x4001BD28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BDFC;
    // 0x4001BD28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BD2C:
    // 0x4001BD2C: jal         0x40000814
    // 0x4001BD30: nop

    ovl_actor_main_814(rdram, ctx);
        goto after_0;
    // 0x4001BD30: nop

    after_0:
    // 0x4001BD34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BD38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001BD3C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001BD40: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001BD44: jal         0x40008D20
    // 0x4001BD48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_1;
    // 0x4001BD48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x4001BD4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BD50: jal         0x4001ABA8
    // 0x4001BD54: addiu       $a1, $zero, 0xD1
    ctx->r5 = ADD32(0, 0XD1);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_2;
    // 0x4001BD54: addiu       $a1, $zero, 0xD1
    ctx->r5 = ADD32(0, 0XD1);
    after_2:
    // 0x4001BD58: b           L_4001BDFC
    // 0x4001BD5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BDFC;
    // 0x4001BD5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BD60:
    // 0x4001BD60: lw          $v0, 0x324($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X324);
    // 0x4001BD64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BD68: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x4001BD6C: bne         $t6, $zero, L_4001BDF8
    if (ctx->r14 != 0) {
        // 0x4001BD70: ori         $t7, $v0, 0x1
        ctx->r15 = ctx->r2 | 0X1;
            goto L_4001BDF8;
    }
    // 0x4001BD70: ori         $t7, $v0, 0x1
    ctx->r15 = ctx->r2 | 0X1;
    // 0x4001BD74: sw          $t7, 0x324($s0)
    MEM_W(0X324, ctx->r16) = ctx->r15;
    // 0x4001BD78: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001BD7C: lwc1        $f4, 0x4C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4C);
    // 0x4001BD80: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    // 0x4001BD84: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x4001BD88: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x4001BD8C: jal         0x4000120C
    // 0x4001BD90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_3;
    // 0x4001BD90: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x4001BD94: lwc1        $f6, 0x44($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001BD98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BD9C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x4001BDA0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001BDA4: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x4001BDA8: jal         0x4001A4A0
    // 0x4001BDAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_1A4A0(rdram, ctx);
        goto after_4;
    // 0x4001BDAC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x4001BDB0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x4001BDB4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x4001BDB8: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x4001BDBC: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x4001BDC0: addiu       $t2, $sp, 0x34
    ctx->r10 = ADD32(ctx->r29, 0X34);
    // 0x4001BDC4: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x4001BDC8: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x4001BDCC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x4001BDD0: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x4001BDD4: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x4001BDD8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x4001BDDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001BDE0: jal         0x400006C4
    // 0x4001BDE4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_5;
    // 0x4001BDE4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_5:
    // 0x4001BDE8: b           L_4001BDFC
    // 0x4001BDEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001BDFC;
    // 0x4001BDEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BDF0:
    // 0x4001BDF0: jal         0x4001A978
    // 0x4001BDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_6;
    // 0x4001BDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_4001BDF8:
    // 0x4001BDF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001BDFC:
    // 0x4001BDFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001BE00: jr          $ra
    // 0x4001BE04: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x4001BE04: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_actor_main_1BE08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001BE08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001BE0C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4001BE10: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4001BE14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001BE18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001BE1C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4001BE20: beq         $a1, $at, L_4001BE48
    if (ctx->r5 == ctx->r1) {
        // 0x4001BE24: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001BE48;
    }
    // 0x4001BE24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001BE28: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x4001BE2C: beq         $a1, $at, L_4001BEB0
    if (ctx->r5 == ctx->r1) {
        // 0x4001BE30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BEB0;
    }
    // 0x4001BE30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BE34: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4001BE38: beq         $a1, $at, L_4001BED4
    if (ctx->r5 == ctx->r1) {
        // 0x4001BE3C: nop
    
            goto L_4001BED4;
    }
    // 0x4001BE3C: nop

    // 0x4001BE40: b           L_4001BEEC
    // 0x4001BE44: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
        goto L_4001BEEC;
    // 0x4001BE44: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001BE48:
    // 0x4001BE48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BE4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001BE50: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001BE54: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001BE58: jal         0x40008D20
    // 0x4001BE5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001BE5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001BE60: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001BE64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BE68: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001BE6C: jal         0x40001A8C
    // 0x4001BE70: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4001BE70: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x4001BE74: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x4001BE78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001BE7C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4001BE80: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    // 0x4001BE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BE88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001BE8C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x4001BE90: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001BE94: jal         0x40006EB8
    // 0x4001BE98: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_2;
    // 0x4001BE98: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x4001BE9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BEA0: jal         0x4001ABA8
    // 0x4001BEA4: addiu       $a1, $zero, 0xC9
    ctx->r5 = ADD32(0, 0XC9);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_3;
    // 0x4001BEA4: addiu       $a1, $zero, 0xC9
    ctx->r5 = ADD32(0, 0XC9);
    after_3:
    // 0x4001BEA8: b           L_4001BEEC
    // 0x4001BEAC: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
        goto L_4001BEEC;
    // 0x4001BEAC: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001BEB0:
    // 0x4001BEB0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001BEB4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4001BEB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001BEBC: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001BEC0: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001BEC4: jal         0x40006EB8
    // 0x4001BEC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_4;
    // 0x4001BEC8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x4001BECC: b           L_4001BEEC
    // 0x4001BED0: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
        goto L_4001BEEC;
    // 0x4001BED0: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001BED4:
    // 0x4001BED4: jal         0x4001A978
    // 0x4001BED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_5;
    // 0x4001BED8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4001BEDC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4001BEE0: nop

    // 0x4001BEE4: swc1        $f16, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f16.u32l;
    // 0x4001BEE8: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
L_4001BEEC:
    // 0x4001BEEC: bne         $at, $zero, L_4001BF08
    if (ctx->r1 != 0) {
        // 0x4001BEF0: slti        $at, $s1, 0x12
        ctx->r1 = SIGNED(ctx->r17) < 0X12 ? 1 : 0;
            goto L_4001BF08;
    }
    // 0x4001BEF0: slti        $at, $s1, 0x12
    ctx->r1 = SIGNED(ctx->r17) < 0X12 ? 1 : 0;
    // 0x4001BEF4: beq         $at, $zero, L_4001BF08
    if (ctx->r1 == 0) {
        // 0x4001BEF8: lui         $at, 0xC0E0
        ctx->r1 = S32(0XC0E0 << 16);
            goto L_4001BF08;
    }
    // 0x4001BEF8: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x4001BEFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4001BF00: nop

    // 0x4001BF04: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
L_4001BF08:
    // 0x4001BF08: bltz        $s1, L_4001BF34
    if (SIGNED(ctx->r17) < 0) {
        // 0x4001BF0C: slti        $at, $s1, 0x6
        ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
            goto L_4001BF34;
    }
    // 0x4001BF0C: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x4001BF10: beq         $at, $zero, L_4001BF34
    if (ctx->r1 == 0) {
        // 0x4001BF14: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001BF34;
    }
    // 0x4001BF14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BF18: jal         0x4001A99C
    // 0x4001BF1C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    ovl_actor_main_1A99C(rdram, ctx);
        goto after_6;
    // 0x4001BF1C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_6:
    // 0x4001BF20: beq         $v0, $zero, L_4001BF34
    if (ctx->r2 == 0) {
        // 0x4001BF24: addiu       $a1, $zero, 0x22
        ctx->r5 = ADD32(0, 0X22);
            goto L_4001BF34;
    }
    // 0x4001BF24: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x4001BF28: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001BF2C: jal         0x40000CA0
    // 0x4001BF30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_7;
    // 0x4001BF30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_4001BF34:
    // 0x4001BF34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4001BF38: bltz        $s1, L_4001BF60
    if (SIGNED(ctx->r17) < 0) {
        // 0x4001BF3C: slti        $at, $s1, 0x5
        ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
            goto L_4001BF60;
    }
    // 0x4001BF3C: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x4001BF40: beq         $at, $zero, L_4001BF60
    if (ctx->r1 == 0) {
        // 0x4001BF44: lui         $at, 0x4220
        ctx->r1 = S32(0X4220 << 16);
            goto L_4001BF60;
    }
    // 0x4001BF44: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4001BF48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001BF4C: lwc1        $f4, 0x64($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4001BF50: nop

    // 0x4001BF54: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4001BF58: b           L_4001BF80
    // 0x4001BF5C: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
        goto L_4001BF80;
    // 0x4001BF5C: swc1        $f8, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f8.u32l;
L_4001BF60:
    // 0x4001BF60: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x4001BF64: bne         $at, $zero, L_4001BF80
    if (ctx->r1 != 0) {
        // 0x4001BF68: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_4001BF80;
    }
    // 0x4001BF68: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001BF6C: lwc1        $f16, 0x50($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X50);
    // 0x4001BF70: lwc1        $f10, 0x64($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X64);
    // 0x4001BF74: nop

    // 0x4001BF78: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4001BF7C: swc1        $f18, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->f18.u32l;
L_4001BF80:
    // 0x4001BF80: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x4001BF84: swc1        $f0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f0.u32l;
    // 0x4001BF88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001BF8C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4001BF90: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4001BF94: jr          $ra
    // 0x4001BF98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001BF98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1BF9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001BF9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001BFA0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4001BFA4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4001BFA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001BFAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001BFB0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4001BFB4: beq         $a1, $at, L_4001BFE4
    if (ctx->r5 == ctx->r1) {
        // 0x4001BFB8: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001BFE4;
    }
    // 0x4001BFB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001BFBC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x4001BFC0: beq         $a1, $at, L_4001C01C
    if (ctx->r5 == ctx->r1) {
        // 0x4001BFC4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C01C;
    }
    // 0x4001BFC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BFC8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4001BFCC: beq         $a1, $at, L_4001C050
    if (ctx->r5 == ctx->r1) {
        // 0x4001BFD0: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_4001C050;
    }
    // 0x4001BFD0: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x4001BFD4: beq         $a1, $at, L_4001C05C
    if (ctx->r5 == ctx->r1) {
        // 0x4001BFD8: nop
    
            goto L_4001C05C;
    }
    // 0x4001BFD8: nop

    // 0x4001BFDC: b           L_4001C068
    // 0x4001BFE0: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
        goto L_4001C068;
    // 0x4001BFE0: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
L_4001BFE4:
    // 0x4001BFE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001BFE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001BFEC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001BFF0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001BFF4: jal         0x40008D20
    // 0x4001BFF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001BFF8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001BFFC: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x4001C000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C004: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001C008: jal         0x40001A8C
    // 0x4001C00C: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4001C00C: swc1        $f4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x4001C010: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4001C014: b           L_4001C064
    // 0x4001C018: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
        goto L_4001C064;
    // 0x4001C018: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
L_4001C01C:
    // 0x4001C01C: jal         0x4001ABA8
    // 0x4001C020: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_2;
    // 0x4001C020: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    after_2:
    // 0x4001C024: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001C028: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x4001C02C: jal         0x40000CA0
    // 0x4001C030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_3;
    // 0x4001C030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x4001C034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C038: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x4001C03C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x4001C040: jal         0x4001A598
    // 0x4001C044: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_4;
    // 0x4001C044: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_4:
    // 0x4001C048: b           L_4001C068
    // 0x4001C04C: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
        goto L_4001C068;
    // 0x4001C04C: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
L_4001C050:
    // 0x4001C050: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4001C054: b           L_4001C064
    // 0x4001C058: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
        goto L_4001C064;
    // 0x4001C058: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
L_4001C05C:
    // 0x4001C05C: jal         0x4001A978
    // 0x4001C060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_5;
    // 0x4001C060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_4001C064:
    // 0x4001C064: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
L_4001C068:
    // 0x4001C068: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4001C06C: bne         $at, $zero, L_4001C088
    if (ctx->r1 != 0) {
        // 0x4001C070: slti        $at, $s1, 0x14
        ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
            goto L_4001C088;
    }
    // 0x4001C070: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x4001C074: beq         $at, $zero, L_4001C088
    if (ctx->r1 == 0) {
        // 0x4001C078: lui         $at, 0xC1A0
        ctx->r1 = S32(0XC1A0 << 16);
            goto L_4001C088;
    }
    // 0x4001C078: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x4001C07C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4001C080: b           L_4001C0C8
    // 0x4001C084: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
        goto L_4001C0C8;
    // 0x4001C084: swc1        $f10, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f10.u32l;
L_4001C088:
    // 0x4001C088: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x4001C08C: bne         $at, $zero, L_4001C0A8
    if (ctx->r1 != 0) {
        // 0x4001C090: slti        $at, $s1, 0x16
        ctx->r1 = SIGNED(ctx->r17) < 0X16 ? 1 : 0;
            goto L_4001C0A8;
    }
    // 0x4001C090: slti        $at, $s1, 0x16
    ctx->r1 = SIGNED(ctx->r17) < 0X16 ? 1 : 0;
    // 0x4001C094: beq         $at, $zero, L_4001C0A8
    if (ctx->r1 == 0) {
        // 0x4001C098: lui         $at, 0xC0A0
        ctx->r1 = S32(0XC0A0 << 16);
            goto L_4001C0A8;
    }
    // 0x4001C098: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x4001C09C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4001C0A0: b           L_4001C0C8
    // 0x4001C0A4: swc1        $f16, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f16.u32l;
        goto L_4001C0C8;
    // 0x4001C0A4: swc1        $f16, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f16.u32l;
L_4001C0A8:
    // 0x4001C0A8: slti        $at, $s1, 0x16
    ctx->r1 = SIGNED(ctx->r17) < 0X16 ? 1 : 0;
    // 0x4001C0AC: bne         $at, $zero, L_4001C0C8
    if (ctx->r1 != 0) {
        // 0x4001C0B0: slti        $at, $s1, 0x1E
        ctx->r1 = SIGNED(ctx->r17) < 0X1E ? 1 : 0;
            goto L_4001C0C8;
    }
    // 0x4001C0B0: slti        $at, $s1, 0x1E
    ctx->r1 = SIGNED(ctx->r17) < 0X1E ? 1 : 0;
    // 0x4001C0B4: beq         $at, $zero, L_4001C0C8
    if (ctx->r1 == 0) {
        // 0x4001C0B8: lui         $at, 0x4134
        ctx->r1 = S32(0X4134 << 16);
            goto L_4001C0C8;
    }
    // 0x4001C0B8: lui         $at, 0x4134
    ctx->r1 = S32(0X4134 << 16);
    // 0x4001C0BC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4001C0C0: nop

    // 0x4001C0C4: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
L_4001C0C8:
    // 0x4001C0C8: swc1        $f0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f0.u32l;
    // 0x4001C0CC: swc1        $f0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f0.u32l;
    // 0x4001C0D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001C0D4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4001C0D8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4001C0DC: jr          $ra
    // 0x4001C0E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001C0E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1C0E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C0E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001C0E8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4001C0EC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4001C0F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001C0F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001C0F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x4001C0FC: beq         $a1, $at, L_4001C124
    if (ctx->r5 == ctx->r1) {
        // 0x4001C100: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001C124;
    }
    // 0x4001C100: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001C104: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4001C108: beq         $a1, $at, L_4001C148
    if (ctx->r5 == ctx->r1) {
        // 0x4001C10C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_4001C148;
    }
    // 0x4001C10C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4001C110: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x4001C114: beq         $a1, $at, L_4001C17C
    if (ctx->r5 == ctx->r1) {
        // 0x4001C118: nop
    
            goto L_4001C17C;
    }
    // 0x4001C118: nop

    // 0x4001C11C: b           L_4001C188
    // 0x4001C120: slti        $at, $s1, 0x5E
    ctx->r1 = SIGNED(ctx->r17) < 0X5E ? 1 : 0;
        goto L_4001C188;
    // 0x4001C120: slti        $at, $s1, 0x5E
    ctx->r1 = SIGNED(ctx->r17) < 0X5E ? 1 : 0;
L_4001C124:
    // 0x4001C124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C128: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001C12C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001C130: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001C134: jal         0x40008D20
    // 0x4001C138: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001C138: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001C13C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001C140: b           L_4001C184
    // 0x4001C144: sw          $t6, 0x324($s0)
    MEM_W(0X324, ctx->r16) = ctx->r14;
        goto L_4001C184;
    // 0x4001C144: sw          $t6, 0x324($s0)
    MEM_W(0X324, ctx->r16) = ctx->r14;
L_4001C148:
    // 0x4001C148: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001C14C: jal         0x40000CA0
    // 0x4001C150: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4001C150: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_1:
    // 0x4001C154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C158: jal         0x4001ABA8
    // 0x4001C15C: addiu       $a1, $zero, 0xC5
    ctx->r5 = ADD32(0, 0XC5);
    ovl_actor_main_1ABA8(rdram, ctx);
        goto after_2;
    // 0x4001C15C: addiu       $a1, $zero, 0xC5
    ctx->r5 = ADD32(0, 0XC5);
    after_2:
    // 0x4001C160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C164: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x4001C168: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x4001C16C: jal         0x4001A598
    // 0x4001C170: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_3;
    // 0x4001C170: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_3:
    // 0x4001C174: b           L_4001C188
    // 0x4001C178: slti        $at, $s1, 0x5E
    ctx->r1 = SIGNED(ctx->r17) < 0X5E ? 1 : 0;
        goto L_4001C188;
    // 0x4001C178: slti        $at, $s1, 0x5E
    ctx->r1 = SIGNED(ctx->r17) < 0X5E ? 1 : 0;
L_4001C17C:
    // 0x4001C17C: jal         0x4001A978
    // 0x4001C180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A978(rdram, ctx);
        goto after_4;
    // 0x4001C180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_4001C184:
    // 0x4001C184: slti        $at, $s1, 0x5E
    ctx->r1 = SIGNED(ctx->r17) < 0X5E ? 1 : 0;
L_4001C188:
    // 0x4001C188: beq         $at, $zero, L_4001C1C0
    if (ctx->r1 == 0) {
        // 0x4001C18C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4001C1C0;
    }
    // 0x4001C18C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001C190: lw          $v0, 0x324($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X324);
    // 0x4001C194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C198: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x4001C19C: addiu       $t8, $t7, 0x12
    ctx->r24 = ADD32(ctx->r15, 0X12);
    // 0x4001C1A0: bne         $s1, $t8, L_4001C1BC
    if (ctx->r17 != ctx->r24) {
        // 0x4001C1A4: addiu       $t9, $v0, 0x1
        ctx->r25 = ADD32(ctx->r2, 0X1);
            goto L_4001C1BC;
    }
    // 0x4001C1A4: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x4001C1A8: sw          $t9, 0x324($s0)
    MEM_W(0X324, ctx->r16) = ctx->r25;
    // 0x4001C1AC: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x4001C1B0: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    // 0x4001C1B4: jal         0x4001A598
    // 0x4001C1B8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_5;
    // 0x4001C1B8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_5:
L_4001C1BC:
    // 0x4001C1BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001C1C0:
    // 0x4001C1C0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4001C1C4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4001C1C8: jr          $ra
    // 0x4001C1CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001C1CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1C1D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C1D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C1D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C1D8: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x4001C1DC: nop

    // 0x4001C1E0: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x4001C1E4: sltiu       $at, $t7, 0x2C
    ctx->r1 = ctx->r15 < 0X2C ? 1 : 0;
    // 0x4001C1E8: beq         $at, $zero, L_4001C2E8
    if (ctx->r1 == 0) {
        // 0x4001C1EC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_4001C2E8;
    }
    // 0x4001C1EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4001C1F0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001C1F4: addu        $at, $at, $t7
    gpr jr_addend_4001C200 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4001C1F8: lw          $t7, 0x54($at)
    ctx->r15 = ADD32(ctx->r1, 0X54);
    // 0x4001C1FC: nop

    // 0x4001C200: jr          $t7
    // 0x4001C204: nop

    switch (jr_addend_4001C200 >> 2) {
        case 0: goto L_4001C238; break;
        case 1: goto L_4001C208; break;
        case 2: goto L_4001C2E8; break;
        case 3: goto L_4001C2E8; break;
        case 4: goto L_4001C2E8; break;
        case 5: goto L_4001C2E8; break;
        case 6: goto L_4001C2E8; break;
        case 7: goto L_4001C2E8; break;
        case 8: goto L_4001C218; break;
        case 9: goto L_4001C2E8; break;
        case 10: goto L_4001C228; break;
        case 11: goto L_4001C2E8; break;
        case 12: goto L_4001C2E8; break;
        case 13: goto L_4001C2E8; break;
        case 14: goto L_4001C2E8; break;
        case 15: goto L_4001C2E8; break;
        case 16: goto L_4001C2E8; break;
        case 17: goto L_4001C2E8; break;
        case 18: goto L_4001C2E8; break;
        case 19: goto L_4001C2E8; break;
        case 20: goto L_4001C2E8; break;
        case 21: goto L_4001C2E8; break;
        case 22: goto L_4001C2E8; break;
        case 23: goto L_4001C2E8; break;
        case 24: goto L_4001C2E8; break;
        case 25: goto L_4001C2E8; break;
        case 26: goto L_4001C248; break;
        case 27: goto L_4001C2E8; break;
        case 28: goto L_4001C2E8; break;
        case 29: goto L_4001C258; break;
        case 30: goto L_4001C2E8; break;
        case 31: goto L_4001C268; break;
        case 32: goto L_4001C278; break;
        case 33: goto L_4001C278; break;
        case 34: goto L_4001C2E8; break;
        case 35: goto L_4001C288; break;
        case 36: goto L_4001C298; break;
        case 37: goto L_4001C2A8; break;
        case 38: goto L_4001C278; break;
        case 39: goto L_4001C2E8; break;
        case 40: goto L_4001C2B8; break;
        case 41: goto L_4001C2C8; break;
        case 42: goto L_4001C2D8; break;
        case 43: goto L_4001C278; break;
        default: switch_error(__func__, 0x4001C200, 0x40020054);
    }
    // 0x4001C204: nop

L_4001C208:
    // 0x4001C208: jal         0x4001ABC8
    // 0x4001C20C: nop

    ovl_actor_main_1ABC8(rdram, ctx);
        goto after_0;
    // 0x4001C20C: nop

    after_0:
    // 0x4001C210: b           L_4001C2F4
    // 0x4001C214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C218:
    // 0x4001C218: jal         0x4001AD0C
    // 0x4001C21C: nop

    ovl_actor_main_1AD0C(rdram, ctx);
        goto after_1;
    // 0x4001C21C: nop

    after_1:
    // 0x4001C220: b           L_4001C2F4
    // 0x4001C224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C228:
    // 0x4001C228: jal         0x4001AE48
    // 0x4001C22C: nop

    ovl_actor_main_1AE48(rdram, ctx);
        goto after_2;
    // 0x4001C22C: nop

    after_2:
    // 0x4001C230: b           L_4001C2F4
    // 0x4001C234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C238:
    // 0x4001C238: jal         0x4001AFBC
    // 0x4001C23C: nop

    ovl_actor_main_1AFBC(rdram, ctx);
        goto after_3;
    // 0x4001C23C: nop

    after_3:
    // 0x4001C240: b           L_4001C2F4
    // 0x4001C244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C248:
    // 0x4001C248: jal         0x4001B12C
    // 0x4001C24C: nop

    ovl_actor_main_1B12C(rdram, ctx);
        goto after_4;
    // 0x4001C24C: nop

    after_4:
    // 0x4001C250: b           L_4001C2F4
    // 0x4001C254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C258:
    // 0x4001C258: jal         0x4001B26C
    // 0x4001C25C: nop

    ovl_actor_main_1B26C(rdram, ctx);
        goto after_5;
    // 0x4001C25C: nop

    after_5:
    // 0x4001C260: b           L_4001C2F4
    // 0x4001C264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C268:
    // 0x4001C268: jal         0x4001B99C
    // 0x4001C26C: nop

    ovl_actor_main_1B99C(rdram, ctx);
        goto after_6;
    // 0x4001C26C: nop

    after_6:
    // 0x4001C270: b           L_4001C2F4
    // 0x4001C274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C278:
    // 0x4001C278: jal         0x4001BAE8
    // 0x4001C27C: nop

    ovl_actor_main_1BAE8(rdram, ctx);
        goto after_7;
    // 0x4001C27C: nop

    after_7:
    // 0x4001C280: b           L_4001C2F4
    // 0x4001C284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C288:
    // 0x4001C288: jal         0x4001B37C
    // 0x4001C28C: nop

    ovl_actor_main_1B37C(rdram, ctx);
        goto after_8;
    // 0x4001C28C: nop

    after_8:
    // 0x4001C290: b           L_4001C2F4
    // 0x4001C294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C298:
    // 0x4001C298: jal         0x4001B488
    // 0x4001C29C: nop

    ovl_actor_main_1B488(rdram, ctx);
        goto after_9;
    // 0x4001C29C: nop

    after_9:
    // 0x4001C2A0: b           L_4001C2F4
    // 0x4001C2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C2A8:
    // 0x4001C2A8: jal         0x4001B61C
    // 0x4001C2AC: nop

    ovl_actor_main_1B61C(rdram, ctx);
        goto after_10;
    // 0x4001C2AC: nop

    after_10:
    // 0x4001C2B0: b           L_4001C2F4
    // 0x4001C2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C2B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C2B8:
    // 0x4001C2B8: jal         0x4001B820
    // 0x4001C2BC: nop

    ovl_actor_main_1B820(rdram, ctx);
        goto after_11;
    // 0x4001C2BC: nop

    after_11:
    // 0x4001C2C0: b           L_4001C2F4
    // 0x4001C2C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C2C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C2C8:
    // 0x4001C2C8: jal         0x4001BE08
    // 0x4001C2CC: nop

    ovl_actor_main_1BE08(rdram, ctx);
        goto after_12;
    // 0x4001C2CC: nop

    after_12:
    // 0x4001C2D0: b           L_4001C2F4
    // 0x4001C2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C2D8:
    // 0x4001C2D8: jal         0x4001C0E4
    // 0x4001C2DC: nop

    ovl_actor_main_1C0E4(rdram, ctx);
        goto after_13;
    // 0x4001C2DC: nop

    after_13:
    // 0x4001C2E0: b           L_4001C2F4
    // 0x4001C2E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001C2F4;
    // 0x4001C2E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C2E8:
    // 0x4001C2E8: jal         0x4001A978
    // 0x4001C2EC: nop

    ovl_actor_main_1A978(rdram, ctx);
        goto after_14;
    // 0x4001C2EC: nop

    after_14:
    // 0x4001C2F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C2F4:
    // 0x4001C2F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C2F8: jr          $ra
    // 0x4001C2FC: nop

    return;
    // 0x4001C2FC: nop

;}
RECOMP_FUNC void ovl_actor_main_1C300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C300: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x4001C304: beq         $a1, $v0, L_4001C330
    if (ctx->r5 == ctx->r2) {
        // 0x4001C308: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_4001C330;
    }
    // 0x4001C308: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x4001C30C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x4001C310: bne         $a1, $at, L_4001C334
    if (ctx->r5 != ctx->r1) {
        // 0x4001C314: nop
    
            goto L_4001C334;
    }
    // 0x4001C314: nop

    // 0x4001C318: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x4001C31C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001C320: bne         $v0, $t6, L_4001C334
    if (ctx->r2 != ctx->r14) {
        // 0x4001C324: nop
    
            goto L_4001C334;
    }
    // 0x4001C324: nop

    // 0x4001C328: bne         $a2, $at, L_4001C334
    if (ctx->r6 != ctx->r1) {
        // 0x4001C32C: nop
    
            goto L_4001C334;
    }
    // 0x4001C32C: nop

L_4001C330:
    // 0x4001C330: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_4001C334:
    // 0x4001C334: jr          $ra
    // 0x4001C338: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4001C338: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_1C33C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C33C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C344: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4001C348: jal         0x40009684
    // 0x4001C34C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_9684(rdram, ctx);
        goto after_0;
    // 0x4001C34C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x4001C350: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001C354: jal         0x40009B20
    // 0x4001C358: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    ovl_actor_main_9B20(rdram, ctx);
        goto after_1;
    // 0x4001C358: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    after_1:
    // 0x4001C35C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001C360: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x4001C364: jal         0x40009000
    // 0x4001C368: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_2;
    // 0x4001C368: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x4001C36C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C374: jr          $ra
    // 0x4001C378: nop

    return;
    // 0x4001C378: nop

;}
RECOMP_FUNC void ovl_actor_main_1C37C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C37C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001C380: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001C384: lw          $a1, 0xC0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC0);
    // 0x4001C388: jal         0x40011944
    // 0x4001C38C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4001C38C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001C390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001C394: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x4001C398: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4001C39C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001C3A0: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x4001C3A4: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x4001C3A8: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
    // 0x4001C3AC: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x4001C3B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4001C3B4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4001C3B8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x4001C3BC: jal         0x40006EB8
    // 0x4001C3C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_1;
    // 0x4001C3C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x4001C3C4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001C3C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001C3CC: lwc1        $f6, 0x104($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X104);
    // 0x4001C3D0: jal         0x40008F98
    // 0x4001C3D4: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_2;
    // 0x4001C3D4: swc1        $f6, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f6.u32l;
    after_2:
    // 0x4001C3D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001C3DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001C3E0: jr          $ra
    // 0x4001C3E4: nop

    return;
    // 0x4001C3E4: nop

;}
RECOMP_FUNC void ovl_actor_main_1C3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C3E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4001C3EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C3F0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4001C3F4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4001C3F8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x4001C3FC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x4001C400: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x4001C404: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4001C408: jal         0x400006C4
    // 0x4001C40C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4001C40C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x4001C410: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4001C414: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4001C418: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4001C41C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4001C420: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4001C424: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4001C428: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4001C42C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x4001C430: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4001C434: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x4001C438: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4001C43C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x4001C440: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x4001C444: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x4001C448: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x4001C44C: jal         0x400006C4
    // 0x4001C450: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4001C450: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x4001C454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C458: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4001C45C: jr          $ra
    // 0x4001C460: nop

    return;
    // 0x4001C460: nop

;}
RECOMP_FUNC void ovl_actor_main_1C464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C464: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001C468: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4001C46C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001C470: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001C474: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001C478: beq         $a1, $at, L_4001C494
    if (ctx->r5 == ctx->r1) {
        // 0x4001C47C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_4001C494;
    }
    // 0x4001C47C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x4001C480: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x4001C484: beq         $a1, $at, L_4001C4B4
    if (ctx->r5 == ctx->r1) {
        // 0x4001C488: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C4B4;
    }
    // 0x4001C488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C48C: b           L_4001C4D0
    // 0x4001C490: nop

        goto L_4001C4D0;
    // 0x4001C490: nop

L_4001C494:
    // 0x4001C494: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001C498: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x4001C49C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x4001C4A0: jal         0x40000CA0
    // 0x4001C4A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_0;
    // 0x4001C4A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x4001C4A8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x4001C4AC: b           L_4001C4D0
    // 0x4001C4B0: nop

        goto L_4001C4D0;
    // 0x4001C4B0: nop

L_4001C4B4:
    // 0x4001C4B4: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x4001C4B8: jal         0x40011944
    // 0x4001C4BC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_actor_main_11944(rdram, ctx);
        goto after_1;
    // 0x4001C4BC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x4001C4C0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x4001C4C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001C4C8: sw          $t6, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r14;
    // 0x4001C4CC: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
L_4001C4D0:
    // 0x4001C4D0: blez        $a3, L_4001C504
    if (SIGNED(ctx->r7) <= 0) {
        // 0x4001C4D4: slti        $at, $a3, 0x3
        ctx->r1 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
            goto L_4001C504;
    }
    // 0x4001C4D4: slti        $at, $a3, 0x3
    ctx->r1 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x4001C4D8: beq         $at, $zero, L_4001C504
    if (ctx->r1 == 0) {
        // 0x4001C4DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C504;
    }
    // 0x4001C4DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C4E0: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x4001C4E4: lui         $a2, 0xBE75
    ctx->r6 = S32(0XBE75 << 16);
    // 0x4001C4E8: lui         $a3, 0x3DA3
    ctx->r7 = S32(0X3DA3 << 16);
    // 0x4001C4EC: ori         $a3, $a3, 0xD70A
    ctx->r7 = ctx->r7 | 0XD70A;
    // 0x4001C4F0: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x4001C4F4: jal         0x4001C3E8
    // 0x4001C4F8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    ovl_actor_main_1C3E8(rdram, ctx);
        goto after_2;
    // 0x4001C4F8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_2:
    // 0x4001C4FC: b           L_4001C680
    // 0x4001C500: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001C680;
    // 0x4001C500: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001C504:
    // 0x4001C504: slti        $at, $a3, 0x3
    ctx->r1 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x4001C508: bne         $at, $zero, L_4001C53C
    if (ctx->r1 != 0) {
        // 0x4001C50C: slti        $at, $a3, 0x5
        ctx->r1 = SIGNED(ctx->r7) < 0X5 ? 1 : 0;
            goto L_4001C53C;
    }
    // 0x4001C50C: slti        $at, $a3, 0x5
    ctx->r1 = SIGNED(ctx->r7) < 0X5 ? 1 : 0;
    // 0x4001C510: beq         $at, $zero, L_4001C53C
    if (ctx->r1 == 0) {
        // 0x4001C514: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C53C;
    }
    // 0x4001C514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C518: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x4001C51C: lui         $a2, 0x3E75
    ctx->r6 = S32(0X3E75 << 16);
    // 0x4001C520: lui         $a3, 0xBDA3
    ctx->r7 = S32(0XBDA3 << 16);
    // 0x4001C524: ori         $a3, $a3, 0xD70A
    ctx->r7 = ctx->r7 | 0XD70A;
    // 0x4001C528: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x4001C52C: jal         0x4001C3E8
    // 0x4001C530: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    ovl_actor_main_1C3E8(rdram, ctx);
        goto after_3;
    // 0x4001C530: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_3:
    // 0x4001C534: b           L_4001C680
    // 0x4001C538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001C680;
    // 0x4001C538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001C53C:
    // 0x4001C53C: slti        $at, $a3, 0x5
    ctx->r1 = SIGNED(ctx->r7) < 0X5 ? 1 : 0;
    // 0x4001C540: bne         $at, $zero, L_4001C574
    if (ctx->r1 != 0) {
        // 0x4001C544: slti        $at, $a3, 0x7
        ctx->r1 = SIGNED(ctx->r7) < 0X7 ? 1 : 0;
            goto L_4001C574;
    }
    // 0x4001C544: slti        $at, $a3, 0x7
    ctx->r1 = SIGNED(ctx->r7) < 0X7 ? 1 : 0;
    // 0x4001C548: beq         $at, $zero, L_4001C574
    if (ctx->r1 == 0) {
        // 0x4001C54C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C574;
    }
    // 0x4001C54C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C550: lui         $a1, 0xBE4C
    ctx->r5 = S32(0XBE4C << 16);
    // 0x4001C554: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x4001C558: lui         $a3, 0xBDA3
    ctx->r7 = S32(0XBDA3 << 16);
    // 0x4001C55C: ori         $a3, $a3, 0xD70A
    ctx->r7 = ctx->r7 | 0XD70A;
    // 0x4001C560: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x4001C564: jal         0x4001C3E8
    // 0x4001C568: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    ovl_actor_main_1C3E8(rdram, ctx);
        goto after_4;
    // 0x4001C568: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_4:
    // 0x4001C56C: b           L_4001C680
    // 0x4001C570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001C680;
    // 0x4001C570: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001C574:
    // 0x4001C574: slti        $at, $a3, 0x7
    ctx->r1 = SIGNED(ctx->r7) < 0X7 ? 1 : 0;
    // 0x4001C578: bne         $at, $zero, L_4001C5AC
    if (ctx->r1 != 0) {
        // 0x4001C57C: slti        $at, $a3, 0x9
        ctx->r1 = SIGNED(ctx->r7) < 0X9 ? 1 : 0;
            goto L_4001C5AC;
    }
    // 0x4001C57C: slti        $at, $a3, 0x9
    ctx->r1 = SIGNED(ctx->r7) < 0X9 ? 1 : 0;
    // 0x4001C580: beq         $at, $zero, L_4001C5AC
    if (ctx->r1 == 0) {
        // 0x4001C584: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C5AC;
    }
    // 0x4001C584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C588: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x4001C58C: lui         $a2, 0xBE4C
    ctx->r6 = S32(0XBE4C << 16);
    // 0x4001C590: lui         $a3, 0x3DA3
    ctx->r7 = S32(0X3DA3 << 16);
    // 0x4001C594: ori         $a3, $a3, 0xD70A
    ctx->r7 = ctx->r7 | 0XD70A;
    // 0x4001C598: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x4001C59C: jal         0x4001C3E8
    // 0x4001C5A0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    ovl_actor_main_1C3E8(rdram, ctx);
        goto after_5;
    // 0x4001C5A0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_5:
    // 0x4001C5A4: b           L_4001C680
    // 0x4001C5A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001C680;
    // 0x4001C5A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001C5AC:
    // 0x4001C5AC: slti        $at, $a3, 0x9
    ctx->r1 = SIGNED(ctx->r7) < 0X9 ? 1 : 0;
    // 0x4001C5B0: bne         $at, $zero, L_4001C5E4
    if (ctx->r1 != 0) {
        // 0x4001C5B4: slti        $at, $a3, 0xB
        ctx->r1 = SIGNED(ctx->r7) < 0XB ? 1 : 0;
            goto L_4001C5E4;
    }
    // 0x4001C5B4: slti        $at, $a3, 0xB
    ctx->r1 = SIGNED(ctx->r7) < 0XB ? 1 : 0;
    // 0x4001C5B8: beq         $at, $zero, L_4001C5E4
    if (ctx->r1 == 0) {
        // 0x4001C5BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C5E4;
    }
    // 0x4001C5BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C5C0: lui         $a1, 0x3E05
    ctx->r5 = S32(0X3E05 << 16);
    // 0x4001C5C4: lui         $a2, 0xBE38
    ctx->r6 = S32(0XBE38 << 16);
    // 0x4001C5C8: lui         $a3, 0x3CF5
    ctx->r7 = S32(0X3CF5 << 16);
    // 0x4001C5CC: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x4001C5D0: ori         $a2, $a2, 0x51EC
    ctx->r6 = ctx->r6 | 0X51EC;
    // 0x4001C5D4: jal         0x4001C3E8
    // 0x4001C5D8: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    ovl_actor_main_1C3E8(rdram, ctx);
        goto after_6;
    // 0x4001C5D8: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    after_6:
    // 0x4001C5DC: b           L_4001C680
    // 0x4001C5E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001C680;
    // 0x4001C5E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001C5E4:
    // 0x4001C5E4: slti        $at, $a3, 0xB
    ctx->r1 = SIGNED(ctx->r7) < 0XB ? 1 : 0;
    // 0x4001C5E8: bne         $at, $zero, L_4001C61C
    if (ctx->r1 != 0) {
        // 0x4001C5EC: slti        $at, $a3, 0xD
        ctx->r1 = SIGNED(ctx->r7) < 0XD ? 1 : 0;
            goto L_4001C61C;
    }
    // 0x4001C5EC: slti        $at, $a3, 0xD
    ctx->r1 = SIGNED(ctx->r7) < 0XD ? 1 : 0;
    // 0x4001C5F0: beq         $at, $zero, L_4001C61C
    if (ctx->r1 == 0) {
        // 0x4001C5F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C61C;
    }
    // 0x4001C5F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C5F8: lui         $a1, 0xBE05
    ctx->r5 = S32(0XBE05 << 16);
    // 0x4001C5FC: lui         $a2, 0x3E38
    ctx->r6 = S32(0X3E38 << 16);
    // 0x4001C600: lui         $a3, 0xBCF5
    ctx->r7 = S32(0XBCF5 << 16);
    // 0x4001C604: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x4001C608: ori         $a2, $a2, 0x51EC
    ctx->r6 = ctx->r6 | 0X51EC;
    // 0x4001C60C: jal         0x4001C3E8
    // 0x4001C610: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    ovl_actor_main_1C3E8(rdram, ctx);
        goto after_7;
    // 0x4001C610: ori         $a1, $a1, 0x1EB8
    ctx->r5 = ctx->r5 | 0X1EB8;
    after_7:
    // 0x4001C614: b           L_4001C680
    // 0x4001C618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001C680;
    // 0x4001C618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001C61C:
    // 0x4001C61C: slti        $at, $a3, 0xD
    ctx->r1 = SIGNED(ctx->r7) < 0XD ? 1 : 0;
    // 0x4001C620: bne         $at, $zero, L_4001C650
    if (ctx->r1 != 0) {
        // 0x4001C624: slti        $at, $a3, 0xF
        ctx->r1 = SIGNED(ctx->r7) < 0XF ? 1 : 0;
            goto L_4001C650;
    }
    // 0x4001C624: slti        $at, $a3, 0xF
    ctx->r1 = SIGNED(ctx->r7) < 0XF ? 1 : 0;
    // 0x4001C628: beq         $at, $zero, L_4001C650
    if (ctx->r1 == 0) {
        // 0x4001C62C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C650;
    }
    // 0x4001C62C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C630: lui         $a1, 0xBD4C
    ctx->r5 = S32(0XBD4C << 16);
    // 0x4001C634: lui         $a2, 0x3DA3
    ctx->r6 = S32(0X3DA3 << 16);
    // 0x4001C638: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x4001C63C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x4001C640: jal         0x4001C3E8
    // 0x4001C644: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_actor_main_1C3E8(rdram, ctx);
        goto after_8;
    // 0x4001C644: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_8:
    // 0x4001C648: b           L_4001C680
    // 0x4001C64C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001C680;
    // 0x4001C64C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001C650:
    // 0x4001C650: slti        $at, $a3, 0xF
    ctx->r1 = SIGNED(ctx->r7) < 0XF ? 1 : 0;
    // 0x4001C654: bne         $at, $zero, L_4001C67C
    if (ctx->r1 != 0) {
        // 0x4001C658: slti        $at, $a3, 0x11
        ctx->r1 = SIGNED(ctx->r7) < 0X11 ? 1 : 0;
            goto L_4001C67C;
    }
    // 0x4001C658: slti        $at, $a3, 0x11
    ctx->r1 = SIGNED(ctx->r7) < 0X11 ? 1 : 0;
    // 0x4001C65C: beq         $at, $zero, L_4001C67C
    if (ctx->r1 == 0) {
        // 0x4001C660: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C67C;
    }
    // 0x4001C660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C664: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x4001C668: lui         $a2, 0xBDA3
    ctx->r6 = S32(0XBDA3 << 16);
    // 0x4001C66C: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x4001C670: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x4001C674: jal         0x4001C3E8
    // 0x4001C678: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_actor_main_1C3E8(rdram, ctx);
        goto after_9;
    // 0x4001C678: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_9:
L_4001C67C:
    // 0x4001C67C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001C680:
    // 0x4001C680: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4001C684: jr          $ra
    // 0x4001C688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4001C688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_1C68C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C68C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4001C690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C694: jal         0x4000B850
    // 0x4001C698: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    ovl_actor_main_B850(rdram, ctx);
        goto after_0;
    // 0x4001C698: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001C69C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4001C6A0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001C6A4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x4001C6A8: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x4001C6AC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x4001C6B0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x4001C6B4: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    // 0x4001C6B8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x4001C6BC: jal         0x400006C4
    // 0x4001C6C0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4001C6C0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x4001C6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C6C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4001C6CC: jr          $ra
    // 0x4001C6D0: nop

    return;
    // 0x4001C6D0: nop

;}
RECOMP_FUNC void ovl_actor_main_1C6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C6D4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001C6D8: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x4001C6DC: jr          $ra
    // 0x4001C6E0: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    return;
    // 0x4001C6E0: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_actor_main_1C6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C6E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x4001C6E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001C6EC: sw          $t6, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->r14;
    // 0x4001C6F0: jr          $ra
    // 0x4001C6F4: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    return;
    // 0x4001C6F4: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_actor_main_1C6F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C6F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001C6FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001C700: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001C704: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001C708: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001C70C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4001C710: beq         $a1, $at, L_4001C738
    if (ctx->r5 == ctx->r1) {
        // 0x4001C714: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_4001C738;
    }
    // 0x4001C714: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x4001C718: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x4001C71C: beq         $a1, $at, L_4001C764
    if (ctx->r5 == ctx->r1) {
        // 0x4001C720: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_4001C764;
    }
    // 0x4001C720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4001C724: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x4001C728: beq         $a1, $at, L_4001C778
    if (ctx->r5 == ctx->r1) {
        // 0x4001C72C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001C778;
    }
    // 0x4001C72C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C730: b           L_4001C794
    // 0x4001C734: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001C794;
    // 0x4001C734: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001C738:
    // 0x4001C738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C73C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4001C740: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001C744: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001C748: jal         0x40008D20
    // 0x4001C74C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001C74C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x4001C750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001C754: jal         0x40001A8C
    // 0x4001C758: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_1;
    // 0x4001C758: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x4001C75C: b           L_4001C794
    // 0x4001C760: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001C794;
    // 0x4001C760: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001C764:
    // 0x4001C764: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x4001C768: jal         0x40000CA0
    // 0x4001C76C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    ovl_actor_main_CA0(rdram, ctx);
        goto after_2;
    // 0x4001C76C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x4001C770: b           L_4001C794
    // 0x4001C774: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_4001C794;
    // 0x4001C774: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001C778:
    // 0x4001C778: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x4001C77C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x4001C780: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4001C784: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001C788: jal         0x40008D20
    // 0x4001C78C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_3;
    // 0x4001C78C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_3:
    // 0x4001C790: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_4001C794:
    // 0x4001C794: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x4001C798: slti        $at, $t8, 0xF
    ctx->r1 = SIGNED(ctx->r24) < 0XF ? 1 : 0;
    // 0x4001C79C: bne         $at, $zero, L_4001C7B0
    if (ctx->r1 != 0) {
        // 0x4001C7A0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4001C7B0;
    }
    // 0x4001C7A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4001C7A4: jal         0x40010A44
    // 0x4001C7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_10A44(rdram, ctx);
        goto after_4;
    // 0x4001C7A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4001C7AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001C7B0:
    // 0x4001C7B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001C7B4: jr          $ra
    // 0x4001C7B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001C7B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1C7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C7BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4001C7C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001C7C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001C7C8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x4001C7CC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4001C7D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4001C7D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001C7D8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x4001C7DC: jal         0x40009044
    // 0x4001C7E0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_9044(rdram, ctx);
        goto after_0;
    // 0x4001C7E0: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x4001C7E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001C7E8: jal         0x4001CBCC
    // 0x4001C7EC: nop

    ovl_actor_main_1CBCC(rdram, ctx);
        goto after_1;
    // 0x4001C7EC: nop

    after_1:
    // 0x4001C7F0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001C7F4: jal         0x40010C2C
    // 0x4001C7F8: nop

    ovl_actor_main_10C2C(rdram, ctx);
        goto after_2;
    // 0x4001C7F8: nop

    after_2:
    // 0x4001C7FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001C800: jal         0x40010C90
    // 0x4001C804: nop

    ovl_actor_main_10C90(rdram, ctx);
        goto after_3;
    // 0x4001C804: nop

    after_3:
    // 0x4001C808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001C80C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001C810: jr          $ra
    // 0x4001C814: nop

    return;
    // 0x4001C814: nop

;}
RECOMP_FUNC void ovl_actor_main_1C818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C81C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C820: jal         0x40010F30
    // 0x4001C824: nop

    ovl_actor_main_10F30(rdram, ctx);
        goto after_0;
    // 0x4001C824: nop

    after_0:
    // 0x4001C828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C82C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C830: jr          $ra
    // 0x4001C834: nop

    return;
    // 0x4001C834: nop

;}
RECOMP_FUNC void ovl_actor_main_1C838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C83C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C840: jal         0x4001C6F8
    // 0x4001C844: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    ovl_actor_main_1C6F8(rdram, ctx);
        goto after_0;
    // 0x4001C844: addiu       $a2, $zero, 0xF0
    ctx->r6 = ADD32(0, 0XF0);
    after_0:
    // 0x4001C848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C84C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C850: jr          $ra
    // 0x4001C854: nop

    return;
    // 0x4001C854: nop

;}
RECOMP_FUNC void ovl_actor_main_1C858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C85C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C860: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4001C864: jal         0x4001C7BC
    // 0x4001C868: addiu       $a1, $zero, 0x3000
    ctx->r5 = ADD32(0, 0X3000);
    ovl_actor_main_1C7BC(rdram, ctx);
        goto after_0;
    // 0x4001C868: addiu       $a1, $zero, 0x3000
    ctx->r5 = ADD32(0, 0X3000);
    after_0:
    // 0x4001C86C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x4001C870: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4001C874: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x4001C878: jal         0x40000CA0
    // 0x4001C87C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4001C87C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4001C880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C888: jr          $ra
    // 0x4001C88C: nop

    return;
    // 0x4001C88C: nop

;}
RECOMP_FUNC void ovl_actor_main_1C890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C898: jal         0x4001C6F8
    // 0x4001C89C: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    ovl_actor_main_1C6F8(rdram, ctx);
        goto after_0;
    // 0x4001C89C: addiu       $a2, $zero, 0xB4
    ctx->r6 = ADD32(0, 0XB4);
    after_0:
    // 0x4001C8A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C8A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C8A8: jr          $ra
    // 0x4001C8AC: nop

    return;
    // 0x4001C8AC: nop

;}
RECOMP_FUNC void ovl_actor_main_1C8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C8B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C8B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C8B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4001C8BC: jal         0x4001C7BC
    // 0x4001C8C0: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    ovl_actor_main_1C7BC(rdram, ctx);
        goto after_0;
    // 0x4001C8C0: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_0:
    // 0x4001C8C4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x4001C8C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4001C8CC: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x4001C8D0: jal         0x40000CA0
    // 0x4001C8D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4001C8D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4001C8D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C8DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C8E0: jr          $ra
    // 0x4001C8E4: nop

    return;
    // 0x4001C8E4: nop

;}
RECOMP_FUNC void ovl_actor_main_1C8E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C8E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C8EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C8F0: jal         0x4001C6F8
    // 0x4001C8F4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    ovl_actor_main_1C6F8(rdram, ctx);
        goto after_0;
    // 0x4001C8F4: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_0:
    // 0x4001C8F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C8FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C900: jr          $ra
    // 0x4001C904: nop

    return;
    // 0x4001C904: nop

;}
RECOMP_FUNC void ovl_actor_main_1C908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C90C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C910: lw          $t6, 0x318($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X318);
    // 0x4001C914: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x4001C918: bne         $t6, $at, L_4001C93C
    if (ctx->r14 != ctx->r1) {
        // 0x4001C91C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_4001C93C;
    }
    // 0x4001C91C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4001C920: jal         0x40000814
    // 0x4001C924: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_814(rdram, ctx);
        goto after_0;
    // 0x4001C924: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001C928: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x4001C92C: nop

    // 0x4001C930: sw          $zero, 0xC8($a3)
    MEM_W(0XC8, ctx->r7) = 0;
    // 0x4001C934: b           L_4001C960
    // 0x4001C938: sw          $zero, 0xCC($a3)
    MEM_W(0XCC, ctx->r7) = 0;
        goto L_4001C960;
    // 0x4001C938: sw          $zero, 0xCC($a3)
    MEM_W(0XCC, ctx->r7) = 0;
L_4001C93C:
    // 0x4001C93C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4001C940: addiu       $a1, $zero, 0x5000
    ctx->r5 = ADD32(0, 0X5000);
    // 0x4001C944: jal         0x4001C7BC
    // 0x4001C948: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    ovl_actor_main_1C7BC(rdram, ctx);
        goto after_1;
    // 0x4001C948: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_1:
    // 0x4001C94C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x4001C950: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4001C954: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x4001C958: jal         0x40000CA0
    // 0x4001C95C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_2;
    // 0x4001C95C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_4001C960:
    // 0x4001C960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C968: jr          $ra
    // 0x4001C96C: nop

    return;
    // 0x4001C96C: nop

;}
RECOMP_FUNC void ovl_actor_main_1C970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C978: jal         0x4001C6F8
    // 0x4001C97C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_actor_main_1C6F8(rdram, ctx);
        goto after_0;
    // 0x4001C97C: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_0:
    // 0x4001C980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C988: jr          $ra
    // 0x4001C98C: nop

    return;
    // 0x4001C98C: nop

;}
RECOMP_FUNC void ovl_actor_main_1C990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C998: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4001C99C: jal         0x4001C7BC
    // 0x4001C9A0: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    ovl_actor_main_1C7BC(rdram, ctx);
        goto after_0;
    // 0x4001C9A0: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    after_0:
    // 0x4001C9A4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x4001C9A8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4001C9AC: lw          $a0, 0x1C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X1C);
    // 0x4001C9B0: jal         0x40000CA0
    // 0x4001C9B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4001C9B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4001C9B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001C9BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001C9C0: jr          $ra
    // 0x4001C9C4: nop

    return;
    // 0x4001C9C4: nop

;}
RECOMP_FUNC void ovl_actor_main_1C9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001C9C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001C9CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001C9D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001C9D4: beq         $a1, $at, L_4001C9F0
    if (ctx->r5 == ctx->r1) {
        // 0x4001C9D8: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_4001C9F0;
    }
    // 0x4001C9D8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4001C9DC: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x4001C9E0: beq         $a1, $at, L_4001CA1C
    if (ctx->r5 == ctx->r1) {
        // 0x4001C9E4: nop
    
            goto L_4001CA1C;
    }
    // 0x4001C9E4: nop

    // 0x4001C9E8: b           L_4001CA28
    // 0x4001C9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001CA28;
    // 0x4001C9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001C9F0:
    // 0x4001C9F0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4001C9F4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x4001C9F8: jal         0x40001A8C
    // 0x4001C9FC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_0;
    // 0x4001C9FC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x4001CA00: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x4001CA04: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4001CA08: lw          $a0, 0x1C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1C);
    // 0x4001CA0C: jal         0x40000CA0
    // 0x4001CA10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_CA0(rdram, ctx);
        goto after_1;
    // 0x4001CA10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x4001CA14: b           L_4001CA28
    // 0x4001CA18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001CA28;
    // 0x4001CA18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CA1C:
    // 0x4001CA1C: jal         0x40010A10
    // 0x4001CA20: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_actor_main_10A10(rdram, ctx);
        goto after_2;
    // 0x4001CA20: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x4001CA24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CA28:
    // 0x4001CA28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001CA2C: jr          $ra
    // 0x4001CA30: nop

    return;
    // 0x4001CA30: nop

;}
RECOMP_FUNC void ovl_actor_main_1CA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CA34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001CA38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001CA3C: jal         0x4001C7BC
    // 0x4001CA40: addiu       $a1, $zero, 0x7000
    ctx->r5 = ADD32(0, 0X7000);
    ovl_actor_main_1C7BC(rdram, ctx);
        goto after_0;
    // 0x4001CA40: addiu       $a1, $zero, 0x7000
    ctx->r5 = ADD32(0, 0X7000);
    after_0:
    // 0x4001CA44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001CA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001CA4C: jr          $ra
    // 0x4001CA50: nop

    return;
    // 0x4001CA50: nop

;}
RECOMP_FUNC void ovl_actor_main_1CA54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CA54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001CA58: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4001CA5C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4001CA60: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4001CA64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001CA68: beq         $a1, $at, L_4001CA9C
    if (ctx->r5 == ctx->r1) {
        // 0x4001CA6C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_4001CA9C;
    }
    // 0x4001CA6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4001CA70: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001CA74: beq         $a1, $at, L_4001CAA0
    if (ctx->r5 == ctx->r1) {
        // 0x4001CA78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001CAA0;
    }
    // 0x4001CA78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001CA7C: lw          $a1, 0xC8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC8);
    // 0x4001CA80: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x4001CA84: jal         0x40011944
    // 0x4001CA88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_11944(rdram, ctx);
        goto after_0;
    // 0x4001CA88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001CA8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001CA90: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4001CA94: sw          $zero, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = 0;
    // 0x4001CA98: sw          $zero, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = 0;
L_4001CA9C:
    // 0x4001CA9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001CAA0:
    // 0x4001CAA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001CAA4: jr          $ra
    // 0x4001CAA8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x4001CAA8: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void ovl_actor_main_1CAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CAAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001CAB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001CAB4: bne         $a1, $at, L_4001CAD0
    if (ctx->r5 != ctx->r1) {
        // 0x4001CAB8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4001CAD0;
    }
    // 0x4001CAB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001CABC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4001CAC0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001CAC4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001CAC8: jal         0x40008D20
    // 0x4001CACC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001CACC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_4001CAD0:
    // 0x4001CAD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001CAD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001CAD8: jr          $ra
    // 0x4001CADC: nop

    return;
    // 0x4001CADC: nop

;}
RECOMP_FUNC void ovl_actor_main_1CAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001CAE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001CAE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001CAE8: bne         $a1, $at, L_4001CB04
    if (ctx->r5 != ctx->r1) {
        // 0x4001CAEC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_4001CB04;
    }
    // 0x4001CAEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001CAF0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4001CAF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001CAF8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001CAFC: jal         0x40008D20
    // 0x4001CB00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_0;
    // 0x4001CB00: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_4001CB04:
    // 0x4001CB04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001CB08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001CB0C: jr          $ra
    // 0x4001CB10: nop

    return;
    // 0x4001CB10: nop

;}
