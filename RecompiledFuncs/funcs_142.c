#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_devil_4834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004838: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x4300483C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004840: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x43004844: lw          $a3, 0x3C($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X3C);
    // 0x43004848: nop

    // 0x4300484C: beq         $a3, $zero, L_43004868
    if (ctx->r7 == 0) {
        // 0x43004850: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004868;
    }
    // 0x43004850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004854: lw          $t9, 0x4C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4C);
    // 0x43004858: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4300485C: jalr        $t9
    // 0x43004860: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004860: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x43004864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004868:
    // 0x43004868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300486C: jr          $ra
    // 0x43004870: nop

    return;
    // 0x43004870: nop

;}
RECOMP_FUNC void ovl_boss_devil_4874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300487C: sw          $a1, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r5;
    // 0x43004880: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004884: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x43004888: nop

    // 0x4300488C: jalr        $t9
    // 0x43004890: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004890: nop

    after_0:
    // 0x43004894: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004898: nop

    // 0x4300489C: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x430048A0: nop

    // 0x430048A4: jalr        $t9
    // 0x430048A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430048A8: nop

    after_1:
    // 0x430048AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430048B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430048B4: jr          $ra
    // 0x430048B8: nop

    return;
    // 0x430048B8: nop

;}
RECOMP_FUNC void ovl_boss_devil_48BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430048BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430048C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430048C4: lw          $a1, 0x58($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X58);
    // 0x430048C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x430048CC: beq         $a1, $zero, L_430048F8
    if (ctx->r5 == 0) {
        // 0x430048D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430048F8;
    }
    // 0x430048D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430048D4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x430048D8: lw          $t9, 0xC0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XC0);
    // 0x430048DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x430048E0: jalr        $t9
    // 0x430048E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430048E4: nop

    after_0:
    // 0x430048E8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x430048EC: nop

    // 0x430048F0: sw          $zero, 0x58($a2)
    MEM_W(0X58, ctx->r6) = 0;
    // 0x430048F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430048F8:
    // 0x430048F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430048FC: jr          $ra
    // 0x43004900: nop

    return;
    // 0x43004900: nop

;}
RECOMP_FUNC void ovl_boss_devil_4904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004904: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300490C: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x43004910: lw          $a2, 0x30($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X30);
    // 0x43004914: lwc1        $f12, 0xC($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XC);
    // 0x43004918: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x4300491C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43004920: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x43004924: jal         0x4300A238
    // 0x43004928: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_boss_devil_A238(rdram, ctx);
        goto after_0;
    // 0x43004928: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4300492C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43004930: nop

    // 0x43004934: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x43004938: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x4300493C: jalr        $t9
    // 0x43004940: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004940: nop

    after_1:
    // 0x43004944: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004948: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300494C: jr          $ra
    // 0x43004950: nop

    return;
    // 0x43004950: nop

;}
RECOMP_FUNC void ovl_boss_devil_4954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004958: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4300495C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004960: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43004964: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43004968: jal         0x4300ADE0
    // 0x4300496C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_0;
    // 0x4300496C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004970: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43004974: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004978: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x4300497C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43004980: nop

    // 0x43004984: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x43004988: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x4300498C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43004990: jal         0x4300AFA0
    // 0x43004994: nop

    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_1;
    // 0x43004994: nop

    after_1:
    // 0x43004998: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4300499C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430049A0: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x430049A4: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x430049A8: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x430049AC: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x430049B0: jalr        $t9
    // 0x430049B4: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x430049B4: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x430049B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430049BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430049C0: jr          $ra
    // 0x430049C4: nop

    return;
    // 0x430049C4: nop

;}
RECOMP_FUNC void ovl_boss_devil_49C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430049C8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x430049CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430049D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430049D4: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x430049D8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x430049DC: jal         0x43004954
    // 0x430049E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_devil_4954(rdram, ctx);
        goto after_0;
    // 0x430049E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x430049E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430049E8: nop

    // 0x430049EC: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x430049F0: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x430049F4: lwc1        $f2, 0x28($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X28);
    // 0x430049F8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x430049FC: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    // 0x43004A00: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x43004A04: nop

    // 0x43004A08: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x43004A0C: nop

    // 0x43004A10: bc1f        L_43004A24
    if (!c1cs) {
        // 0x43004A14: nop
    
            goto L_43004A24;
    }
    // 0x43004A14: nop

    // 0x43004A18: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x43004A1C: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x43004A20: nop

L_43004A24:
    // 0x43004A24: lwc1        $f2, 0x2C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x43004A28: nop

    // 0x43004A2C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x43004A30: nop

    // 0x43004A34: bc1f        L_43004A44
    if (!c1cs) {
        // 0x43004A38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004A44;
    }
    // 0x43004A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004A3C: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x43004A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004A44:
    // 0x43004A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004A48: jr          $ra
    // 0x43004A4C: nop

    return;
    // 0x43004A4C: nop

;}
RECOMP_FUNC void ovl_boss_devil_4A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004A58: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x43004A5C: jal         0x430049C8
    // 0x43004A60: nop

    ovl_boss_devil_49C8(rdram, ctx);
        goto after_0;
    // 0x43004A60: nop

    after_0:
    // 0x43004A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004A6C: jr          $ra
    // 0x43004A70: nop

    return;
    // 0x43004A70: nop

;}
RECOMP_FUNC void ovl_boss_devil_4A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004A7C: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x43004A80: nop

    // 0x43004A84: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x43004A88: beq         $t7, $zero, L_43004AA4
    if (ctx->r15 == 0) {
        // 0x43004A8C: nop
    
            goto L_43004AA4;
    }
    // 0x43004A8C: nop

    // 0x43004A90: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004A94: nop

    // 0x43004A98: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x43004A9C: b           L_43004AB8
    // 0x43004AA0: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
        goto L_43004AB8;
    // 0x43004AA0: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
L_43004AA4:
    // 0x43004AA4: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43004AA8: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43004AAC: nop

    // 0x43004AB0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43004AB4: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
L_43004AB8:
    // 0x43004AB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004ABC: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x43004AC0: nop

    // 0x43004AC4: jalr        $t9
    // 0x43004AC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004AC8: nop

    after_0:
    // 0x43004ACC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004AD0: nop

    // 0x43004AD4: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43004AD8: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x43004ADC: lwc1        $f2, 0x38($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X38);
    // 0x43004AE0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x43004AE4: swc1        $f18, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f18.u32l;
    // 0x43004AE8: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43004AEC: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x43004AF0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x43004AF4: nop

    // 0x43004AF8: bc1f        L_43004B0C
    if (!c1cs) {
        // 0x43004AFC: nop
    
            goto L_43004B0C;
    }
    // 0x43004AFC: nop

    // 0x43004B00: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x43004B04: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43004B08: nop

L_43004B0C:
    // 0x43004B0C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x43004B10: nop

    // 0x43004B14: bc1f        L_43004B24
    if (!c1cs) {
        // 0x43004B18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004B24;
    }
    // 0x43004B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004B1C: swc1        $f12, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f12.u32l;
    // 0x43004B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004B24:
    // 0x43004B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004B28: jr          $ra
    // 0x43004B2C: nop

    return;
    // 0x43004B2C: nop

;}
RECOMP_FUNC void ovl_boss_devil_4B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004B38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43004B3C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43004B40: jal         0x43007190
    // 0x43004B44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_devil_7190(rdram, ctx);
        goto after_0;
    // 0x43004B44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004B48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004B4C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x43004B50: ori         $t7, $zero, 0x8001
    ctx->r15 = 0 | 0X8001;
    // 0x43004B54: sw          $v0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r2;
    // 0x43004B58: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x43004B5C: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    // 0x43004B60: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x43004B64: nop

    // 0x43004B68: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
    // 0x43004B6C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x43004B70: nop

    // 0x43004B74: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x43004B78: nop

    // 0x43004B7C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43004B80: swc1        $f6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f6.u32l;
    // 0x43004B84: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x43004B88: nop

    // 0x43004B8C: jalr        $t9
    // 0x43004B90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004B90: nop

    after_1:
    // 0x43004B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004B9C: jr          $ra
    // 0x43004BA0: nop

    return;
    // 0x43004BA0: nop

;}
RECOMP_FUNC void ovl_boss_devil_4BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004BA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004BAC: lw          $a2, 0x5C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X5C);
    // 0x43004BB0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43004BB4: beq         $a2, $zero, L_43004BD4
    if (ctx->r6 == 0) {
        // 0x43004BB8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_43004BD4;
    }
    // 0x43004BB8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43004BBC: jal         0x430071D0
    // 0x43004BC0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_boss_devil_71D0(rdram, ctx);
        goto after_0;
    // 0x43004BC0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x43004BC4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43004BC8: nop

    // 0x43004BCC: sw          $zero, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = 0;
    // 0x43004BD0: sw          $zero, 0x60($a1)
    MEM_W(0X60, ctx->r5) = 0;
L_43004BD4:
    // 0x43004BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004BDC: jr          $ra
    // 0x43004BE0: nop

    return;
    // 0x43004BE0: nop

;}
RECOMP_FUNC void ovl_boss_devil_4BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004BE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43004BE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43004BEC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43004BF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43004BF4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43004BF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004BFC: lw          $t9, 0x90($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X90);
    // 0x43004C00: nop

    // 0x43004C04: jalr        $t9
    // 0x43004C08: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004C08: nop

    after_0:
    // 0x43004C0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43004C10: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_43004C14:
    // 0x43004C14: lw          $t9, 0x70($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X70);
    // 0x43004C18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43004C1C: jalr        $t9
    // 0x43004C20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004C20: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x43004C24: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43004C28: bne         $s0, $s2, L_43004C14
    if (ctx->r16 != ctx->r18) {
        // 0x43004C2C: nop
    
            goto L_43004C14;
    }
    // 0x43004C2C: nop

    // 0x43004C30: lw          $t9, 0x88($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X88);
    // 0x43004C34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43004C38: jalr        $t9
    // 0x43004C3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43004C3C: nop

    after_2:
    // 0x43004C40: jal         0x430000F4
    // 0x43004C44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_devil_F4(rdram, ctx);
        goto after_3;
    // 0x43004C44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x43004C48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43004C4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004C50: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43004C54: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43004C58: jr          $ra
    // 0x43004C5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43004C5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_4C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004C60: jr          $ra
    // 0x43004C64: nop

    return;
    // 0x43004C64: nop

;}
RECOMP_FUNC void ovl_boss_devil_4C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004C6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004C70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004C74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43004C78: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43004C7C: jal         0x430000E8
    // 0x43004C80: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    ovl_boss_devil_E8(rdram, ctx);
        goto after_0;
    // 0x43004C80: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    after_0:
    // 0x43004C84: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43004C88: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x43004C8C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x43004C90: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43004C94: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004C98: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x43004C9C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43004CA0: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43004CA4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x43004CA8: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x43004CAC: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x43004CB0: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x43004CB4: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x43004CB8: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x43004CBC: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43004CC0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004CC4: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    // 0x43004CC8: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x43004CCC: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x43004CD0: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x43004CD4: swc1        $f0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f0.u32l;
    // 0x43004CD8: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x43004CDC: lwc1        $f6, -0x49E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X49E0);
    // 0x43004CE0: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43004CE4: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
    // 0x43004CE8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43004CEC: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43004CF0: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43004CF4: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43004CF8: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43004CFC: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43004D00: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43004D04: addiu       $t0, $t0, 0x469C
    ctx->r8 = ADD32(ctx->r8, 0X469C);
    // 0x43004D08: addiu       $t1, $t1, 0x470C
    ctx->r9 = ADD32(ctx->r9, 0X470C);
    // 0x43004D0C: addiu       $t2, $t2, 0x475C
    ctx->r10 = ADD32(ctx->r10, 0X475C);
    // 0x43004D10: addiu       $t3, $t3, 0x47A0
    ctx->r11 = ADD32(ctx->r11, 0X47A0);
    // 0x43004D14: addiu       $t4, $t4, 0x4834
    ctx->r12 = ADD32(ctx->r12, 0X4834);
    // 0x43004D18: addiu       $t5, $t5, 0x47E4
    ctx->r13 = ADD32(ctx->r13, 0X47E4);
    // 0x43004D1C: addiu       $t8, $t8, 0x4B30
    ctx->r24 = ADD32(ctx->r24, 0X4B30);
    // 0x43004D20: addiu       $t7, $t7, 0x4BA4
    ctx->r15 = ADD32(ctx->r15, 0X4BA4);
    // 0x43004D24: sw          $t0, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r8;
    // 0x43004D28: sw          $t1, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r9;
    // 0x43004D2C: sw          $t2, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r10;
    // 0x43004D30: sw          $t3, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r11;
    // 0x43004D34: sw          $t4, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r12;
    // 0x43004D38: sw          $t5, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r13;
    // 0x43004D3C: sw          $t8, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r24;
    // 0x43004D40: sw          $t7, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r15;
    // 0x43004D44: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43004D48: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x43004D4C: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43004D50: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43004D54: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43004D58: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43004D5C: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43004D60: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43004D64: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43004D68: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43004D6C: addiu       $t6, $t6, 0x4874
    ctx->r14 = ADD32(ctx->r14, 0X4874);
    // 0x43004D70: addiu       $t9, $t9, 0x48BC
    ctx->r25 = ADD32(ctx->r25, 0X48BC);
    // 0x43004D74: addiu       $t0, $t0, 0x4598
    ctx->r8 = ADD32(ctx->r8, 0X4598);
    // 0x43004D78: addiu       $t1, $t1, 0x45F8
    ctx->r9 = ADD32(ctx->r9, 0X45F8);
    // 0x43004D7C: addiu       $t2, $t2, 0x4904
    ctx->r10 = ADD32(ctx->r10, 0X4904);
    // 0x43004D80: addiu       $t3, $t3, 0x4954
    ctx->r11 = ADD32(ctx->r11, 0X4954);
    // 0x43004D84: addiu       $t4, $t4, 0x49C8
    ctx->r12 = ADD32(ctx->r12, 0X49C8);
    // 0x43004D88: addiu       $t5, $t5, 0x4A50
    ctx->r13 = ADD32(ctx->r13, 0X4A50);
    // 0x43004D8C: addiu       $t8, $t8, 0x4A74
    ctx->r24 = ADD32(ctx->r24, 0X4A74);
    // 0x43004D90: addiu       $t7, $t7, 0x4BE4
    ctx->r15 = ADD32(ctx->r15, 0X4BE4);
    // 0x43004D94: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x43004D98: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x43004D9C: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x43004DA0: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x43004DA4: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
    // 0x43004DA8: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x43004DAC: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x43004DB0: sw          $zero, 0x64($v0)
    MEM_W(0X64, ctx->r2) = 0;
    // 0x43004DB4: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    // 0x43004DB8: sw          $t6, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r14;
    // 0x43004DBC: sw          $t9, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r25;
    // 0x43004DC0: sw          $t0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r8;
    // 0x43004DC4: sw          $t1, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r9;
    // 0x43004DC8: sw          $t2, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r10;
    // 0x43004DCC: sw          $t3, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r11;
    // 0x43004DD0: sw          $t4, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r12;
    // 0x43004DD4: sw          $t5, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r13;
    // 0x43004DD8: sw          $t8, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r24;
    // 0x43004DDC: sw          $t7, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r15;
    // 0x43004DE0: swc1        $f2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f2.u32l;
    // 0x43004DE4: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    // 0x43004DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004DF0: jr          $ra
    // 0x43004DF4: nop

    return;
    // 0x43004DF4: nop

    // 0x43004DF8: nop

    // 0x43004DFC: nop

;}
RECOMP_FUNC void ovl_boss_devil_4E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004E08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004E0C: jal         0x4300A370
    // 0x43004E10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_boss_devil_A370(rdram, ctx);
        goto after_0;
    // 0x43004E10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x43004E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004E1C: jr          $ra
    // 0x43004E20: nop

    return;
    // 0x43004E20: nop

;}
RECOMP_FUNC void ovl_boss_devil_4E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004E2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004E30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43004E34: jal         0x4300A2F8
    // 0x43004E38: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_devil_A2F8(rdram, ctx);
        goto after_0;
    // 0x43004E38: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43004E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004E44: jr          $ra
    // 0x43004E48: nop

    return;
    // 0x43004E48: nop

;}
RECOMP_FUNC void ovl_boss_devil_4E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004E54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004E58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43004E5C: jal         0x4300A2F8
    // 0x43004E60: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_devil_A2F8(rdram, ctx);
        goto after_0;
    // 0x43004E60: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43004E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004E6C: jr          $ra
    // 0x43004E70: nop

    return;
    // 0x43004E70: nop

;}
RECOMP_FUNC void ovl_boss_devil_4E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E74: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43004E78: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x43004E7C: jr          $ra
    // 0x43004E80: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x43004E80: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void ovl_boss_devil_4E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43004E88: jr          $ra
    // 0x43004E8C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x43004E8C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_devil_4E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E90: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43004E94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004E98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004E9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004EA0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43004EA4: jal         0x43001320
    // 0x43004EA8: nop

    ovl_boss_devil_1320(rdram, ctx);
        goto after_0;
    // 0x43004EA8: nop

    after_0:
    // 0x43004EAC: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43004EB0: lw          $t6, -0x4860($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4860);
    // 0x43004EB4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x43004EB8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x43004EBC: bne         $t6, $a0, L_43004EDC
    if (ctx->r14 != ctx->r4) {
        // 0x43004EC0: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_43004EDC;
    }
    // 0x43004EC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43004EC4: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x43004EC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43004ECC: jalr        $t9
    // 0x43004ED0: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004ED0: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_1:
    // 0x43004ED4: b           L_43004FC8
    // 0x43004ED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43004FC8;
    // 0x43004ED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004EDC:
    // 0x43004EDC: bne         $a0, $at, L_43004EFC
    if (ctx->r4 != ctx->r1) {
        // 0x43004EE0: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_43004EFC;
    }
    // 0x43004EE0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43004EE4: lw          $t9, 0x3C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X3C);
    // 0x43004EE8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43004EEC: jalr        $t9
    // 0x43004EF0: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43004EF0: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_2:
    // 0x43004EF4: b           L_43004FC8
    // 0x43004EF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43004FC8;
    // 0x43004EF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004EFC:
    // 0x43004EFC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43004F00: jal         0x430006C4
    // 0x43004F04: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_3;
    // 0x43004F04: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_3:
    // 0x43004F08: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x43004F0C: bne         $v0, $zero, L_43004FC8
    if (ctx->r2 != 0) {
        // 0x43004F10: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43004FC8;
    }
    // 0x43004F10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004F14: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x43004F18: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43004F1C: bne         $v0, $at, L_43004F3C
    if (ctx->r2 != ctx->r1) {
        // 0x43004F20: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_43004F3C;
    }
    // 0x43004F20: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43004F24: lw          $t9, 0x30($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X30);
    // 0x43004F28: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x43004F2C: jalr        $t9
    // 0x43004F30: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43004F30: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_4:
    // 0x43004F34: b           L_43004FC8
    // 0x43004F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43004FC8;
    // 0x43004F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004F3C:
    // 0x43004F3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43004F40: bne         $v0, $at, L_43004F74
    if (ctx->r2 != ctx->r1) {
        // 0x43004F44: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_43004F74;
    }
    // 0x43004F44: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x43004F48: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x43004F4C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43004F50: bne         $a0, $at, L_43004F70
    if (ctx->r4 != ctx->r1) {
        // 0x43004F54: addiu       $a1, $s0, 0x10
        ctx->r5 = ADD32(ctx->r16, 0X10);
            goto L_43004F70;
    }
    // 0x43004F54: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x43004F58: lw          $t9, 0x34($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X34);
    // 0x43004F5C: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x43004F60: jalr        $t9
    // 0x43004F64: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43004F64: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_5:
    // 0x43004F68: b           L_43004FC8
    // 0x43004F6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43004FC8;
    // 0x43004F6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004F70:
    // 0x43004F70: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_43004F74:
    // 0x43004F74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43004F78: bne         $v0, $at, L_43004FC4
    if (ctx->r2 != ctx->r1) {
        // 0x43004F7C: lui         $v1, 0x4301
        ctx->r3 = S32(0X4301 << 16);
            goto L_43004FC4;
    }
    // 0x43004F7C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43004F80: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43004F84: addiu       $v0, $v0, -0x4CD0
    ctx->r2 = ADD32(ctx->r2, -0X4CD0);
    // 0x43004F88: addiu       $v1, $v1, -0x4C98
    ctx->r3 = ADD32(ctx->r3, -0X4C98);
L_43004F8C:
    // 0x43004F8C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x43004F90: nop

    // 0x43004F94: bne         $a0, $t7, L_43004FB8
    if (ctx->r4 != ctx->r15) {
        // 0x43004F98: nop
    
            goto L_43004FB8;
    }
    // 0x43004F98: nop

    // 0x43004F9C: lw          $t9, 0x38($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X38);
    // 0x43004FA0: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x43004FA4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43004FA8: jalr        $t9
    // 0x43004FAC: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43004FAC: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    after_6:
    // 0x43004FB0: b           L_43004FC8
    // 0x43004FB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43004FC8;
    // 0x43004FB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004FB8:
    // 0x43004FB8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x43004FBC: bne         $v0, $v1, L_43004F8C
    if (ctx->r2 != ctx->r3) {
        // 0x43004FC0: nop
    
            goto L_43004F8C;
    }
    // 0x43004FC0: nop

L_43004FC4:
    // 0x43004FC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43004FC8:
    // 0x43004FC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004FCC: jr          $ra
    // 0x43004FD0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43004FD0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_boss_devil_4FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004FD4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004FD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004FDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004FE0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43004FE4: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x43004FE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43004FEC: beq         $t6, $at, L_43005158
    if (ctx->r14 == ctx->r1) {
        // 0x43004FF0: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43005158;
    }
    // 0x43004FF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004FF4: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x43004FF8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43004FFC: bne         $v0, $zero, L_43005068
    if (ctx->r2 != 0) {
        // 0x43005000: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43005068;
    }
    // 0x43005000: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005004: jal         0x4300ADE0
    // 0x43005008: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_0;
    // 0x43005008: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x4300500C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43005010: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43005014: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43005018: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x4300501C: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x43005020: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43005024: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
    // 0x43005028: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x4300502C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x43005030: nop

    // 0x43005034: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43005038: swc1        $f4, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f4.u32l;
    // 0x4300503C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43005040: jal         0x4300AFA0
    // 0x43005044: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_1;
    // 0x43005044: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x43005048: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x4300504C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43005050: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x43005054: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43005058: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x4300505C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x43005060: b           L_43005148
    // 0x43005064: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
        goto L_43005148;
    // 0x43005064: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
L_43005068:
    // 0x43005068: bne         $v0, $at, L_4300508C
    if (ctx->r2 != ctx->r1) {
        // 0x4300506C: addiu       $a3, $s0, 0x10
        ctx->r7 = ADD32(ctx->r16, 0X10);
            goto L_4300508C;
    }
    // 0x4300506C: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x43005070: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43005074: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x43005078: jal         0x43009A30
    // 0x4300507C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_2;
    // 0x4300507C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_2:
    // 0x43005080: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x43005084: b           L_4300514C
    // 0x43005088: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
        goto L_4300514C;
    // 0x43005088: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_4300508C:
    // 0x4300508C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x43005090: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43005094: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43005098: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x4300509C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x430050A0: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x430050A4: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x430050A8: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x430050AC: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x430050B0: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x430050B4: nop

    // 0x430050B8: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x430050BC: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x430050C0: lwc1        $f16, 0x30($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X30);
    // 0x430050C4: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x430050C8: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x430050CC: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x430050D0: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x430050D4: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x430050D8: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x430050DC: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x430050E0: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x430050E4: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x430050E8: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x430050EC: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x430050F0: nop

    // 0x430050F4: mul.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x430050F8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x430050FC: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x43005100: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x43005104: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x43005108: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
    // 0x4300510C: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43005110: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43005114: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43005118: mul.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x4300511C: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x43005120: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x43005124: mul.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x43005128: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x4300512C: nop

    // 0x43005130: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x43005134: add.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x43005138: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x4300513C: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x43005140: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x43005144: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
L_43005148:
    // 0x43005148: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_4300514C:
    // 0x4300514C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43005150: jal         0x430006C4
    // 0x43005154: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_3;
    // 0x43005154: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_3:
L_43005158:
    // 0x43005158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300515C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005160: jr          $ra
    // 0x43005164: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43005164: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_devil_5168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005168: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4300516C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43005170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005174: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x43005178: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x4300517C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x43005180: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43005184: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43005188: jal         0x430006C4
    // 0x4300518C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_0;
    // 0x4300518C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x43005190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005194: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43005198: jr          $ra
    // 0x4300519C: nop

    return;
    // 0x4300519C: nop

;}
RECOMP_FUNC void ovl_boss_devil_51A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430051A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430051A4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x430051A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430051AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430051B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430051B4: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x430051B8: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x430051BC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x430051C0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x430051C4: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x430051C8: jal         0x430006C4
    // 0x430051CC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_0;
    // 0x430051CC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x430051D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430051D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430051D8: jr          $ra
    // 0x430051DC: nop

    return;
    // 0x430051DC: nop

;}
RECOMP_FUNC void ovl_boss_devil_51E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430051E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x430051E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430051E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430051EC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x430051F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x430051F4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x430051F8: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    // 0x430051FC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x43005200: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x43005204: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005208: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x4300520C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x43005210: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x43005214: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43005218: jal         0x43000DC0
    // 0x4300521C: sllv        $a3, $t8, $t7
    ctx->r7 = S32(ctx->r24 << (ctx->r15 & 31));
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x4300521C: sllv        $a3, $t8, $t7
    ctx->r7 = S32(ctx->r24 << (ctx->r15 & 31));
    after_0:
    // 0x43005220: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x43005224: nop

    // 0x43005228: beq         $t9, $zero, L_430052A4
    if (ctx->r25 == 0) {
        // 0x4300522C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_430052A4;
    }
    // 0x4300522C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005230: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x43005234: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x43005238: sw          $t0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r8;
    // 0x4300523C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x43005240: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43005244: lw          $v0, 0x8($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X8);
    // 0x43005248: nop

    // 0x4300524C: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x43005250: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43005254: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x43005258: nop

    // 0x4300525C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43005260: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x43005264: lh          $t3, -0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, -0X2);
    // 0x43005268: nop

    // 0x4300526C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x43005270: nop

    // 0x43005274: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43005278: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x4300527C: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x43005280: nop

    // 0x43005284: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x43005288: nop

    // 0x4300528C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43005290: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x43005294: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43005298: jal         0x43000DC0
    // 0x4300529C: nop

    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x4300529C: nop

    after_1:
    // 0x430052A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430052A4:
    // 0x430052A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x430052A8: jr          $ra
    // 0x430052AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x430052AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_devil_52B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430052B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x430052B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430052B8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x430052BC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430052C0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x430052C4: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x430052C8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x430052CC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x430052D0: jal         0x430006C4
    // 0x430052D4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_0;
    // 0x430052D4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x430052D8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x430052DC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x430052E0: beq         $t6, $zero, L_4300530C
    if (ctx->r14 == 0) {
        // 0x430052E4: addiu       $at, $zero, -0x5
        ctx->r1 = ADD32(0, -0X5);
            goto L_4300530C;
    }
    // 0x430052E4: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x430052E8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x430052EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430052F0: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x430052F4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x430052F8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x430052FC: jal         0x430006C4
    // 0x43005300: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_1;
    // 0x43005300: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    after_1:
    // 0x43005304: b           L_43005330
    // 0x43005308: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
        goto L_43005330;
    // 0x43005308: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_4300530C:
    // 0x4300530C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x43005310: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43005314: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x43005318: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x4300531C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x43005320: addiu       $a2, $a2, -0x4C98
    ctx->r6 = ADD32(ctx->r6, -0X4C98);
    // 0x43005324: jal         0x430006C4
    // 0x43005328: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_2;
    // 0x43005328: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x4300532C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_43005330:
    // 0x43005330: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x43005334: jal         0x430006C4
    // 0x43005338: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_3;
    // 0x43005338: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x4300533C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005340: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43005344: jr          $ra
    // 0x43005348: nop

    return;
    // 0x43005348: nop

;}
RECOMP_FUNC void ovl_boss_devil_534C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300534C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005354: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43005358: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x4300535C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005360: beq         $a3, $at, L_43005390
    if (ctx->r7 == ctx->r1) {
        // 0x43005364: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_43005390;
    }
    // 0x43005364: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43005368: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4300536C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43005370: jal         0x430006C4
    // 0x43005374: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_0;
    // 0x43005374: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x43005378: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x4300537C: jal         0x430012B0
    // 0x43005380: nop

    ovl_boss_devil_12B0(rdram, ctx);
        goto after_1;
    // 0x43005380: nop

    after_1:
    // 0x43005384: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x43005388: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x4300538C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_43005390:
    // 0x43005390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43005394: jal         0x430000F4
    // 0x43005398: nop

    ovl_boss_devil_F4(rdram, ctx);
        goto after_2;
    // 0x43005398: nop

    after_2:
    // 0x4300539C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430053A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430053A4: jr          $ra
    // 0x430053A8: nop

    return;
    // 0x430053A8: nop

;}
RECOMP_FUNC void ovl_boss_devil_53AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430053AC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x430053B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x430053B4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x430053B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430053BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x430053C0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x430053C4: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x430053C8: jal         0x430000E8
    // 0x430053CC: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    ovl_boss_devil_E8(rdram, ctx);
        goto after_0;
    // 0x430053CC: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_0:
    // 0x430053D0: lui         $a1, 0x4300
    ctx->r5 = S32(0X4300 << 16);
    // 0x430053D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x430053D8: addiu       $a1, $a1, 0x4E90
    ctx->r5 = ADD32(ctx->r5, 0X4E90);
    // 0x430053DC: jal         0x4300070C
    // 0x430053E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_devil_70C(rdram, ctx);
        goto after_1;
    // 0x430053E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x430053E4: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x430053E8: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x430053EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x430053F0: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x430053F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430053F8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x430053FC: jal         0x43000718
    // 0x43005400: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    ovl_boss_devil_718(rdram, ctx);
        goto after_2;
    // 0x43005400: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x43005404: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43005408: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x4300540C: jal         0x43001260
    // 0x43005410: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_1260(rdram, ctx);
        goto after_3;
    // 0x43005410: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x43005414: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43005418: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x4300541C: jal         0x430006C4
    // 0x43005420: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_4;
    // 0x43005420: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x43005424: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x43005428: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4300542C: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x43005430: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x43005434: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x43005438: jal         0x430006C4
    // 0x4300543C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_5;
    // 0x4300543C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x43005440: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x43005444: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x43005448: beq         $a0, $zero, L_43005458
    if (ctx->r4 == 0) {
        // 0x4300544C: sw          $s1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r17;
            goto L_43005458;
    }
    // 0x4300544C: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x43005450: b           L_43005460
    // 0x43005454: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_43005460;
    // 0x43005454: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_43005458:
    // 0x43005458: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300545C: addiu       $v1, $v1, -0x4980
    ctx->r3 = ADD32(ctx->r3, -0X4980);
L_43005460:
    // 0x43005460: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x43005464: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43005468: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x4300546C: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x43005470: addiu       $t1, $t1, 0x4E00
    ctx->r9 = ADD32(ctx->r9, 0X4E00);
    // 0x43005474: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x43005478: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x4300547C: sw          $t1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r9;
    // 0x43005480: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43005484: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43005488: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x4300548C: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43005490: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43005494: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43005498: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x4300549C: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x430054A0: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x430054A4: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x430054A8: addiu       $t2, $t2, 0x4E24
    ctx->r10 = ADD32(ctx->r10, 0X4E24);
    // 0x430054AC: addiu       $t3, $t3, 0x4E4C
    ctx->r11 = ADD32(ctx->r11, 0X4E4C);
    // 0x430054B0: addiu       $t4, $t4, 0x4E74
    ctx->r12 = ADD32(ctx->r12, 0X4E74);
    // 0x430054B4: addiu       $t5, $t5, 0x4E84
    ctx->r13 = ADD32(ctx->r13, 0X4E84);
    // 0x430054B8: addiu       $t6, $t6, 0x4FD4
    ctx->r14 = ADD32(ctx->r14, 0X4FD4);
    // 0x430054BC: addiu       $t7, $t7, 0x5168
    ctx->r15 = ADD32(ctx->r15, 0X5168);
    // 0x430054C0: addiu       $t8, $t8, 0x51A0
    ctx->r24 = ADD32(ctx->r24, 0X51A0);
    // 0x430054C4: addiu       $t9, $t9, 0x52B0
    ctx->r25 = ADD32(ctx->r25, 0X52B0);
    // 0x430054C8: addiu       $t0, $t0, 0x51E0
    ctx->r8 = ADD32(ctx->r8, 0X51E0);
    // 0x430054CC: addiu       $t1, $t1, 0x534C
    ctx->r9 = ADD32(ctx->r9, 0X534C);
    // 0x430054D0: sw          $t2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r10;
    // 0x430054D4: sw          $t3, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r11;
    // 0x430054D8: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x430054DC: sw          $t5, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r13;
    // 0x430054E0: sw          $t6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r14;
    // 0x430054E4: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x430054E8: sw          $t8, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r24;
    // 0x430054EC: sw          $t9, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r25;
    // 0x430054F0: sw          $t0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r8;
    // 0x430054F4: sw          $t1, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r9;
    // 0x430054F8: sw          $at, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r1;
    // 0x430054FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005500: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43005504: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43005508: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4300550C: jr          $ra
    // 0x43005510: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43005510: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x43005514: nop

    // 0x43005518: nop

    // 0x4300551C: nop

;}
RECOMP_FUNC void ovl_boss_devil_5520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005520: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43005524: jr          $ra
    // 0x43005528: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x43005528: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_devil_552C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300552C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005530: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43005534: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43005538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300553C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x43005540: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x43005544: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x43005548: jal         0x43000DC0
    // 0x4300554C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x4300554C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43005550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005558: jr          $ra
    // 0x4300555C: nop

    return;
    // 0x4300555C: nop

;}
RECOMP_FUNC void ovl_boss_devil_5560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005560: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43005564: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43005568: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x4300556C: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x43005570: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43005574: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x43005578: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4300557C: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x43005580: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43005584: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x43005588: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x4300558C: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x43005590: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x43005594: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43005598: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x4300559C: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x430055A0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x430055A4: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x430055A8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x430055AC: jal         0x43000DC0
    // 0x430055B0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x430055B0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x430055B4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x430055B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430055BC: jr          $ra
    // 0x430055C0: nop

    return;
    // 0x430055C0: nop

;}
RECOMP_FUNC void ovl_boss_devil_55C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430055C4: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x430055C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430055CC: bne         $t6, $at, L_43005620
    if (ctx->r14 != ctx->r1) {
        // 0x430055D0: lui         $t8, 0x4301
        ctx->r24 = S32(0X4301 << 16);
            goto L_43005620;
    }
    // 0x430055D0: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430055D4: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430055D8: lw          $v1, -0x483C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X483C);
    // 0x430055DC: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x430055E0: nop

    // 0x430055E4: beq         $v0, $v1, L_43005620
    if (ctx->r2 == ctx->r3) {
        // 0x430055E8: subu        $t7, $v1, $v0
        ctx->r15 = SUB32(ctx->r3, ctx->r2);
            goto L_43005620;
    }
    // 0x430055E8: subu        $t7, $v1, $v0
    ctx->r15 = SUB32(ctx->r3, ctx->r2);
    // 0x430055EC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x430055F0: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x430055F4: bgez        $t7, L_4300560C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x430055F8: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_4300560C;
    }
    // 0x430055F8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x430055FC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x43005600: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43005604: nop

    // 0x43005608: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_4300560C:
    // 0x4300560C: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x43005610: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43005614: nop

    // 0x43005618: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x4300561C: swc1        $f6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f6.u32l;
L_43005620:
    // 0x43005620: lw          $t8, -0x483C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X483C);
    // 0x43005624: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43005628: jr          $ra
    // 0x4300562C: sw          $t8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r24;
    return;
    // 0x4300562C: sw          $t8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void ovl_boss_devil_5630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005630: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005634: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005638: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4300563C: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005640: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43005644: beq         $t6, $zero, L_43005680
    if (ctx->r14 == 0) {
        // 0x43005648: swc1        $f12, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
            goto L_43005680;
    }
    // 0x43005648: swc1        $f12, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
    // 0x4300564C: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43005650: lw          $t7, -0x483C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X483C);
    // 0x43005654: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x43005658: sw          $t7, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r15;
    // 0x4300565C: bltz        $t8, L_43005680
    if (SIGNED(ctx->r24) < 0) {
        // 0x43005660: addiu       $a0, $zero, 0x1A
        ctx->r4 = ADD32(0, 0X1A);
            goto L_43005680;
    }
    // 0x43005660: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x43005664: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x43005668: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x4300566C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x43005670: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x43005674: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x43005678: jal         0x43000DC0
    // 0x4300567C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x4300567C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
L_43005680:
    // 0x43005680: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005684: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43005688: jr          $ra
    // 0x4300568C: nop

    return;
    // 0x4300568C: nop

;}
RECOMP_FUNC void ovl_boss_devil_5690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005690: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005694: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005698: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4300569C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x430056A0: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x430056A4: nop

    // 0x430056A8: jalr        $t9
    // 0x430056AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430056AC: nop

    after_0:
    // 0x430056B0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x430056B4: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430056B8: lw          $t6, 0x20($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X20);
    // 0x430056BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430056C0: bne         $t6, $at, L_430056F4
    if (ctx->r14 != ctx->r1) {
        // 0x430056C4: swc1        $f0, 0x2C($a3)
        MEM_W(0X2C, ctx->r7) = ctx->f0.u32l;
            goto L_430056F4;
    }
    // 0x430056C4: swc1        $f0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f0.u32l;
    // 0x430056C8: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x430056CC: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x430056D0: bltz        $t7, L_430056F8
    if (SIGNED(ctx->r15) < 0) {
        // 0x430056D4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_430056F8;
    }
    // 0x430056D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430056D8: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x430056DC: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x430056E0: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x430056E4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x430056E8: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x430056EC: jal         0x43000DC0
    // 0x430056F0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x430056F0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
L_430056F4:
    // 0x430056F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430056F8:
    // 0x430056F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x430056FC: jr          $ra
    // 0x43005700: nop

    return;
    // 0x43005700: nop

;}
RECOMP_FUNC void ovl_boss_devil_5704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300570C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x43005710: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43005714: bne         $v0, $at, L_43005728
    if (ctx->r2 != ctx->r1) {
        // 0x43005718: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43005728;
    }
    // 0x43005718: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300571C: b           L_43005780
    // 0x43005720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43005780;
    // 0x43005720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43005724: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_43005728:
    // 0x43005728: bne         $v0, $at, L_43005780
    if (ctx->r2 != ctx->r1) {
        // 0x4300572C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_43005780;
    }
    // 0x4300572C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43005730: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43005734: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x43005738: nop

    // 0x4300573C: jalr        $t9
    // 0x43005740: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005740: nop

    after_0:
    // 0x43005744: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005748: nop

    // 0x4300574C: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x43005750: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x43005754: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x43005758: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x4300575C: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x43005760: nop

    // 0x43005764: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x43005768: nop

    // 0x4300576C: bc1f        L_43005780
    if (!c1cs) {
        // 0x43005770: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_43005780;
    }
    // 0x43005770: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43005774: b           L_43005780
    // 0x43005778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43005780;
    // 0x43005778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4300577C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43005780:
    // 0x43005780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005788: jr          $ra
    // 0x4300578C: nop

    return;
    // 0x4300578C: nop

;}
RECOMP_FUNC void ovl_boss_devil_5790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005794: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43005798: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x4300579C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430057A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430057A4: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x430057A8: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    // 0x430057AC: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x430057B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430057B4: jal         0x43000DC0
    // 0x430057B8: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x430057B8: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_0:
    // 0x430057BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430057C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430057C4: jr          $ra
    // 0x430057C8: nop

    return;
    // 0x430057C8: nop

;}
RECOMP_FUNC void ovl_boss_devil_57CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430057CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430057D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430057D4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430057D8: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x430057DC: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x430057E0: jal         0x43000DC0
    // 0x430057E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x430057E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x430057E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430057EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430057F0: jr          $ra
    // 0x430057F4: nop

    return;
    // 0x430057F4: nop

;}
RECOMP_FUNC void ovl_boss_devil_57F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430057F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430057FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43005800: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x43005804: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x43005808: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4300580C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005810: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43005814: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x43005818: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4300581C: jal         0x43000DC0
    // 0x43005820: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x43005820: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_0:
    // 0x43005824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005828: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300582C: jr          $ra
    // 0x43005830: nop

    return;
    // 0x43005830: nop

;}
RECOMP_FUNC void ovl_boss_devil_5834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300583C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43005840: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x43005844: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x43005848: jal         0x43000DC0
    // 0x4300584C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x4300584C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x43005850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005854: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005858: jr          $ra
    // 0x4300585C: nop

    return;
    // 0x4300585C: nop

;}
RECOMP_FUNC void ovl_boss_devil_5860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005860: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005864: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005868: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300586C: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x43005870: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005874: bne         $t6, $zero, L_430058AC
    if (ctx->r14 != 0) {
        // 0x43005878: lui         $a0, 0x4300
        ctx->r4 = S32(0X4300 << 16);
            goto L_430058AC;
    }
    // 0x43005878: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x4300587C: addiu       $a0, $a0, 0x5C28
    ctx->r4 = ADD32(ctx->r4, 0X5C28);
    // 0x43005880: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43005884: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43005888: jal         0x43000820
    // 0x4300588C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_820(rdram, ctx);
        goto after_0;
    // 0x4300588C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43005890: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x43005894: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43005898: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x4300589C: addiu       $a0, $a0, 0x5D0C
    ctx->r4 = ADD32(ctx->r4, 0X5D0C);
    // 0x430058A0: jal         0x4300AC30
    // 0x430058A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_devil_AC30(rdram, ctx);
        goto after_1;
    // 0x430058A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x430058A8: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_430058AC:
    // 0x430058AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430058B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430058B4: jr          $ra
    // 0x430058B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430058B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_devil_58BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430058BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430058C0: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x430058C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430058C8: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x430058CC: sw          $a2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r6;
    // 0x430058D0: sw          $a3, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r7;
    // 0x430058D4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x430058D8: nop

    // 0x430058DC: sw          $t7, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r15;
    // 0x430058E0: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x430058E4: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x430058E8: jal         0x43005860
    // 0x430058EC: sh          $t8, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r24;
    ovl_boss_devil_5860(rdram, ctx);
        goto after_0;
    // 0x430058EC: sh          $t8, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r24;
    after_0:
    // 0x430058F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430058F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430058F8: jr          $ra
    // 0x430058FC: nop

    return;
    // 0x430058FC: nop

;}
RECOMP_FUNC void ovl_boss_devil_5900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005900: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43005904: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x43005908: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300590C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x43005910: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x43005914: lh          $v0, 0x40($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X40);
    // 0x43005918: lw          $t0, 0x44($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X44);
    // 0x4300591C: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x43005920: sra         $t8, $v0, 4
    ctx->r24 = S32(SIGNED(ctx->r2) >> 4);
    // 0x43005924: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x43005928: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x4300592C: or          $t2, $t1, $t9
    ctx->r10 = ctx->r9 | ctx->r25;
    // 0x43005930: sw          $t2, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r10;
    // 0x43005934: lhu         $t3, 0x4A($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X4A);
    // 0x43005938: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4300593C: bne         $t3, $zero, L_430059DC
    if (ctx->r11 != 0) {
        // 0x43005940: nop
    
            goto L_430059DC;
    }
    // 0x43005940: nop

    // 0x43005944: lw          $t4, 0x40($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X40);
    // 0x43005948: addiu       $v0, $sp, 0x2C
    ctx->r2 = ADD32(ctx->r29, 0X2C);
    // 0x4300594C: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x43005950: lh          $t5, 0x0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X0);
    // 0x43005954: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x43005958: addiu       $t9, $zero, 0xFF0
    ctx->r25 = ADD32(0, 0XFF0);
    // 0x4300595C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x43005960: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x43005964: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x43005968: nop

    // 0x4300596C: slti        $at, $a0, -0xFF0
    ctx->r1 = SIGNED(ctx->r4) < -0XFF0 ? 1 : 0;
    // 0x43005970: beq         $at, $zero, L_43005988
    if (ctx->r1 == 0) {
        // 0x43005974: slti        $at, $a0, 0xFF1
        ctx->r1 = SIGNED(ctx->r4) < 0XFF1 ? 1 : 0;
            goto L_43005988;
    }
    // 0x43005974: slti        $at, $a0, 0xFF1
    ctx->r1 = SIGNED(ctx->r4) < 0XFF1 ? 1 : 0;
    // 0x43005978: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x4300597C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x43005980: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x43005984: slti        $at, $a0, 0xFF1
    ctx->r1 = SIGNED(ctx->r4) < 0XFF1 ? 1 : 0;
L_43005988:
    // 0x43005988: bne         $at, $zero, L_43005998
    if (ctx->r1 != 0) {
        // 0x4300598C: nop
    
            goto L_43005998;
    }
    // 0x4300598C: nop

    // 0x43005990: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x43005994: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
L_43005998:
    // 0x43005998: lh          $t1, 0x48($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X48);
    // 0x4300599C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x430059A0: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x430059A4: sh          $t2, 0x48($v1)
    MEM_H(0X48, ctx->r3) = ctx->r10;
    // 0x430059A8: lh          $t6, 0x48($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X48);
    // 0x430059AC: sw          $t0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r8;
    // 0x430059B0: bne         $t6, $zero, L_430059D4
    if (ctx->r14 != 0) {
        // 0x430059B4: nop
    
            goto L_430059D4;
    }
    // 0x430059B4: nop

    // 0x430059B8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430059BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430059C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x430059C4: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x430059C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430059CC: jalr        $t9
    // 0x430059D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430059D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
L_430059D4:
    // 0x430059D4: b           L_430059DC
    // 0x430059D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_430059DC;
    // 0x430059D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_430059DC:
    // 0x430059DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430059E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x430059E4: jr          $ra
    // 0x430059E8: nop

    return;
    // 0x430059E8: nop

;}
RECOMP_FUNC void ovl_boss_devil_59EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430059EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430059F0: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x430059F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430059F8: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x430059FC: lw          $t7, 0x40($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X40);
    // 0x43005A00: nop

    // 0x43005A04: sw          $t7, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r15;
    // 0x43005A08: lh          $t8, 0x48($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X48);
    // 0x43005A0C: nop

    // 0x43005A10: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x43005A14: sh          $t9, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r25;
    // 0x43005A18: lh          $t0, 0x48($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X48);
    // 0x43005A1C: nop

    // 0x43005A20: bne         $t0, $zero, L_43005A44
    if (ctx->r8 != 0) {
        // 0x43005A24: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005A44;
    }
    // 0x43005A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005A28: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43005A2C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43005A30: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43005A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43005A38: jalr        $t9
    // 0x43005A3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005A3C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43005A40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005A44:
    // 0x43005A44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43005A48: jr          $ra
    // 0x43005A4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x43005A4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_devil_5A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005A50: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x43005A54: subu        $v0, $t6, $a3
    ctx->r2 = SUB32(ctx->r14, ctx->r7);
    // 0x43005A58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43005A5C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x43005A60: or          $t1, $a2, $zero
    ctx->r9 = ctx->r6 | 0;
    // 0x43005A64: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x43005A68: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
L_43005A6C:
    // 0x43005A6C: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x43005A70: lbu         $t9, 0x0($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X0);
    // 0x43005A74: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43005A78: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x43005A7C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x43005A80: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x43005A84: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x43005A88: mflo        $t8
    ctx->r24 = lo;
    // 0x43005A8C: nop

    // 0x43005A90: nop

    // 0x43005A94: multu       $t9, $a3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43005A98: mflo        $t4
    ctx->r12 = lo;
    // 0x43005A9C: addu        $t5, $t8, $t4
    ctx->r13 = ADD32(ctx->r24, ctx->r12);
    // 0x43005AA0: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x43005AA4: bne         $v1, $t3, L_43005A6C
    if (ctx->r3 != ctx->r11) {
        // 0x43005AA8: sb          $t6, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r14;
            goto L_43005A6C;
    }
    // 0x43005AA8: sb          $t6, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r14;
    // 0x43005AAC: jr          $ra
    // 0x43005AB0: nop

    return;
    // 0x43005AB0: nop

;}
RECOMP_FUNC void ovl_boss_devil_5AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005AB4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43005AB8: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x43005ABC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005AC0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x43005AC4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43005AC8: addu        $t0, $a0, $t8
    ctx->r8 = ADD32(ctx->r4, ctx->r24);
    // 0x43005ACC: lw          $v0, 0x40($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X40);
    // 0x43005AD0: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43005AD4: sra         $v1, $v0, 8
    ctx->r3 = S32(SIGNED(ctx->r2) >> 8);
    // 0x43005AD8: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x43005ADC: addiu       $t1, $t1, -0x4C54
    ctx->r9 = ADD32(ctx->r9, -0X4C54);
    // 0x43005AE0: addu        $a2, $t9, $t1
    ctx->r6 = ADD32(ctx->r25, ctx->r9);
    // 0x43005AE4: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    // 0x43005AE8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x43005AEC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x43005AF0: jal         0x43005A50
    // 0x43005AF4: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    ovl_boss_devil_5A50(rdram, ctx);
        goto after_0;
    // 0x43005AF4: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_0:
    // 0x43005AF8: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x43005AFC: sb          $t2, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r10;
    // 0x43005B00: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43005B04: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x43005B08: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x43005B0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43005B10: sw          $t3, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r11;
    // 0x43005B14: lhu         $t4, 0x4A($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X4A);
    // 0x43005B18: addiu       $v1, $t0, 0x40
    ctx->r3 = ADD32(ctx->r8, 0X40);
    // 0x43005B1C: bne         $t4, $zero, L_43005B94
    if (ctx->r12 != 0) {
        // 0x43005B20: nop
    
            goto L_43005B94;
    }
    // 0x43005B20: nop

    // 0x43005B24: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x43005B28: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x43005B2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43005B30: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
    // 0x43005B34: slti        $at, $v0, 0x601
    ctx->r1 = SIGNED(ctx->r2) < 0X601 ? 1 : 0;
    // 0x43005B38: bne         $at, $zero, L_43005B54
    if (ctx->r1 != 0) {
        // 0x43005B3C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_43005B54;
    }
    // 0x43005B3C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_43005B40:
    // 0x43005B40: addiu       $t8, $v0, -0x600
    ctx->r24 = ADD32(ctx->r2, -0X600);
    // 0x43005B44: slti        $at, $t8, 0x601
    ctx->r1 = SIGNED(ctx->r24) < 0X601 ? 1 : 0;
    // 0x43005B48: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x43005B4C: beq         $at, $zero, L_43005B40
    if (ctx->r1 == 0) {
        // 0x43005B50: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_43005B40;
    }
    // 0x43005B50: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_43005B54:
    // 0x43005B54: lh          $t9, 0x48($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X48);
    // 0x43005B58: nop

    // 0x43005B5C: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x43005B60: sh          $t1, 0x48($t0)
    MEM_H(0X48, ctx->r8) = ctx->r9;
    // 0x43005B64: lh          $t2, 0x48($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X48);
    // 0x43005B68: nop

    // 0x43005B6C: bne         $t2, $zero, L_43005B8C
    if (ctx->r10 != 0) {
        // 0x43005B70: nop
    
            goto L_43005B8C;
    }
    // 0x43005B70: nop

    // 0x43005B74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43005B78: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43005B7C: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43005B80: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x43005B84: jalr        $t9
    // 0x43005B88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43005B88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_43005B8C:
    // 0x43005B8C: b           L_43005B94
    // 0x43005B90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43005B94;
    // 0x43005B90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43005B94:
    // 0x43005B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005B98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43005B9C: jr          $ra
    // 0x43005BA0: nop

    return;
    // 0x43005BA0: nop

;}
RECOMP_FUNC void ovl_boss_devil_5BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005BA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005BA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005BAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43005BB0: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x43005BB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005BB8: beq         $t6, $zero, L_43005C1C
    if (ctx->r14 == 0) {
        // 0x43005BBC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43005C1C;
    }
    // 0x43005BBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005BC0: jal         0x43000868
    // 0x43005BC4: nop

    ovl_boss_devil_868(rdram, ctx);
        goto after_0;
    // 0x43005BC4: nop

    after_0:
    // 0x43005BC8: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x43005BCC: nop

    // 0x43005BD0: beq         $v0, $t7, L_43005BF0
    if (ctx->r2 == ctx->r15) {
        // 0x43005BD4: nop
    
            goto L_43005BF0;
    }
    // 0x43005BD4: nop

    // 0x43005BD8: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x43005BDC: jal         0x4300AC88
    // 0x43005BE0: nop

    ovl_boss_devil_AC88(rdram, ctx);
        goto after_1;
    // 0x43005BE0: nop

    after_1:
    // 0x43005BE4: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x43005BE8: jal         0x4300082C
    // 0x43005BEC: nop

    ovl_boss_devil_82C(rdram, ctx);
        goto after_2;
    // 0x43005BEC: nop

    after_2:
L_43005BF0:
    // 0x43005BF0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43005BF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43005BF8: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x43005BFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43005C00: jal         0x43000DC0
    // 0x43005C04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_3;
    // 0x43005C04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x43005C08: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x43005C0C: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x43005C10: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x43005C14: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x43005C18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43005C1C:
    // 0x43005C1C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43005C20: jr          $ra
    // 0x43005C24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43005C24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_5C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005C28: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43005C2C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x43005C30: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x43005C34: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x43005C38: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x43005C3C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x43005C40: jal         0x43000868
    // 0x43005C44: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    ovl_boss_devil_868(rdram, ctx);
        goto after_0;
    // 0x43005C44: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x43005C48: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x43005C4C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x43005C50: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x43005C54: lw          $a3, 0x6C($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X6C);
    // 0x43005C58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43005C5C: jal         0x43000DC0
    // 0x43005C60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x43005C60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x43005C64: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x43005C68: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x43005C6C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43005C70:
    // 0x43005C70: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_43005C74:
    // 0x43005C74: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x43005C78: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43005C7C: beq         $v0, $zero, L_43005C8C
    if (ctx->r2 == 0) {
        // 0x43005C80: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_43005C8C;
    }
    // 0x43005C80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43005C84: jalr        $v0
    // 0x43005C88: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x43005C88: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_2:
L_43005C8C:
    // 0x43005C8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43005C90: bne         $s0, $s4, L_43005C74
    if (ctx->r16 != ctx->r20) {
        // 0x43005C94: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_43005C74;
    }
    // 0x43005C94: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x43005C98: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x43005C9C: lw          $a2, 0x6C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6C);
    // 0x43005CA0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43005CA4: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x43005CA8: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x43005CAC: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x43005CB0: jal         0x43000DC0
    // 0x43005CB4: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_3;
    // 0x43005CB4: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    after_3:
    // 0x43005CB8: beq         $s2, $zero, L_43005CD0
    if (ctx->r18 == 0) {
        // 0x43005CBC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_43005CD0;
    }
    // 0x43005CBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43005CC0: jal         0x43009B08
    // 0x43005CC4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_4;
    // 0x43005CC4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_4:
    // 0x43005CC8: b           L_43005C70
    // 0x43005CCC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_43005C70;
    // 0x43005CCC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43005CD0:
    // 0x43005CD0: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    // 0x43005CD4: jal         0x4300AC88
    // 0x43005CD8: nop

    ovl_boss_devil_AC88(rdram, ctx);
        goto after_5;
    // 0x43005CD8: nop

    after_5:
    // 0x43005CDC: jal         0x43005BA4
    // 0x43005CE0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_devil_5BA4(rdram, ctx);
        goto after_6;
    // 0x43005CE0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_6:
    // 0x43005CE4: jal         0x43000838
    // 0x43005CE8: nop

    ovl_boss_devil_838(rdram, ctx);
        goto after_7;
    // 0x43005CE8: nop

    after_7:
    // 0x43005CEC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x43005CF0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x43005CF4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x43005CF8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x43005CFC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x43005D00: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x43005D04: jr          $ra
    // 0x43005D08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43005D08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_boss_devil_5D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005D10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005D14: jal         0x43005BA4
    // 0x43005D18: nop

    ovl_boss_devil_5BA4(rdram, ctx);
        goto after_0;
    // 0x43005D18: nop

    after_0:
    // 0x43005D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005D24: jr          $ra
    // 0x43005D28: nop

    return;
    // 0x43005D28: nop

;}
RECOMP_FUNC void ovl_boss_devil_5D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005D2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005D30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43005D34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005D38: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43005D3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005D40: sw          $a1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r5;
    // 0x43005D44: lw          $t9, 0x74($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X74);
    // 0x43005D48: nop

    // 0x43005D4C: jalr        $t9
    // 0x43005D50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005D50: nop

    after_0:
    // 0x43005D54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43005D58: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43005D5C: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
    // 0x43005D60: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43005D64: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x43005D68: lw          $t7, -0x483C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X483C);
    // 0x43005D6C: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x43005D70: sw          $t7, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r15;
    // 0x43005D74: bltz        $t8, L_43005DA0
    if (SIGNED(ctx->r24) < 0) {
        // 0x43005D78: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43005DA0;
    }
    // 0x43005D78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005D7C: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x43005D80: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x43005D84: bltz        $t0, L_43005D9C
    if (SIGNED(ctx->r8) < 0) {
        // 0x43005D88: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_43005D9C;
    }
    // 0x43005D88: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x43005D8C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43005D90: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43005D94: jal         0x43000DC0
    // 0x43005D98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x43005D98: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_43005D9C:
    // 0x43005D9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43005DA0:
    // 0x43005DA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43005DA4: jr          $ra
    // 0x43005DA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43005DA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_5DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005DB4: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005DB8: nop

    // 0x43005DBC: beq         $t6, $zero, L_43005E00
    if (ctx->r14 == 0) {
        // 0x43005DC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43005E00;
    }
    // 0x43005DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005DC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43005DC8: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x43005DCC: nop

    // 0x43005DD0: jalr        $t9
    // 0x43005DD4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005DD4: nop

    after_0:
    // 0x43005DD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005DDC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43005DE0: lw          $t9, 0x74($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X74);
    // 0x43005DE4: nop

    // 0x43005DE8: jalr        $t9
    // 0x43005DEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43005DEC: nop

    after_1:
    // 0x43005DF0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005DF4: nop

    // 0x43005DF8: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x43005DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005E00:
    // 0x43005E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005E04: jr          $ra
    // 0x43005E08: nop

    return;
    // 0x43005E08: nop

;}
RECOMP_FUNC void ovl_boss_devil_5E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005E0C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005E10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005E14: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005E18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005E1C: bne         $t6, $at, L_43005E70
    if (ctx->r14 != ctx->r1) {
        // 0x43005E20: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43005E70;
    }
    // 0x43005E20: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43005E24: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x43005E28: lw          $t9, 0x80($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X80);
    // 0x43005E2C: nop

    // 0x43005E30: jalr        $t9
    // 0x43005E34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005E34: nop

    after_0:
    // 0x43005E38: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x43005E3C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x43005E40: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x43005E44: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x43005E48: bltz        $t8, L_43005E70
    if (SIGNED(ctx->r24) < 0) {
        // 0x43005E4C: sw          $t7, 0x20($a3)
        MEM_W(0X20, ctx->r7) = ctx->r15;
            goto L_43005E70;
    }
    // 0x43005E4C: sw          $t7, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r15;
    // 0x43005E50: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x43005E54: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x43005E58: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x43005E5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43005E60: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43005E64: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x43005E68: jal         0x43000DC0
    // 0x43005E6C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x43005E6C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
L_43005E70:
    // 0x43005E70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005E74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43005E78: jr          $ra
    // 0x43005E7C: nop

    return;
    // 0x43005E7C: nop

;}
RECOMP_FUNC void ovl_boss_devil_5E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005E80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005E84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005E88: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005E8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43005E90: bne         $t6, $at, L_43005ED8
    if (ctx->r14 != ctx->r1) {
        // 0x43005E94: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43005ED8;
    }
    // 0x43005E94: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43005E98: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43005E9C: lw          $t7, -0x483C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X483C);
    // 0x43005EA0: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x43005EA4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43005EA8: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x43005EAC: bltz        $t9, L_43005ED8
    if (SIGNED(ctx->r25) < 0) {
        // 0x43005EB0: sw          $t7, 0x70($a0)
        MEM_W(0X70, ctx->r4) = ctx->r15;
            goto L_43005ED8;
    }
    // 0x43005EB0: sw          $t7, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r15;
    // 0x43005EB4: lwc1        $f4, 0x2C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x43005EB8: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x43005EBC: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x43005EC0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43005EC4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x43005EC8: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43005ECC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43005ED0: jal         0x43000DC0
    // 0x43005ED4: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x43005ED4: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_0:
L_43005ED8:
    // 0x43005ED8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005EDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43005EE0: jr          $ra
    // 0x43005EE4: nop

    return;
    // 0x43005EE4: nop

;}
