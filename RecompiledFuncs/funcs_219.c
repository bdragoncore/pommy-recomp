#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world6_8804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008804: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43008808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300880C: lw          $t6, 0x180($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X180);
    // 0x43008810: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43008814: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x43008818: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x4300881C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x43008820: lwc1        $f4, 0x220($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X220);
    // 0x43008824: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x43008828: addiu       $t9, $t9, -0x5B00
    ctx->r25 = ADD32(ctx->r25, -0X5B00);
    // 0x4300882C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x43008830: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x43008834: lwc1        $f8, 0x220($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X220);
    // 0x43008838: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4300883C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43008840: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x43008844: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43008848: bc1t        L_430088A0
    if (c1cs) {
        // 0x4300884C: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_430088A0;
    }
    // 0x4300884C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008850: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43008854: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x43008858: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x4300885C: jal         0x430006C4
    // 0x43008860: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_enemy_world6_6C4(rdram, ctx);
        goto after_0;
    // 0x43008860: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x43008864: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43008868: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x4300886C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x43008870: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x43008874: lwc1        $f16, 0x228($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X228);
    // 0x43008878: addiu       $t0, $v0, 0x4
    ctx->r8 = ADD32(ctx->r2, 0X4);
    // 0x4300887C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x43008880: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x43008884: lwc1        $f18, 0x224($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X224);
    // 0x43008888: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x4300888C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43008890: jal         0x43005218
    // 0x43008894: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    ovl_enemy_world6_5218(rdram, ctx);
        goto after_1;
    // 0x43008894: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    after_1:
    // 0x43008898: b           L_430088B0
    // 0x4300889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430088B0;
    // 0x4300889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430088A0:
    // 0x430088A0: lwc1        $f4, -0x5E0C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5E0C);
    // 0x430088A4: nop

    // 0x430088A8: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x430088AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430088B0:
    // 0x430088B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x430088B4: jr          $ra
    // 0x430088B8: nop

    return;
    // 0x430088B8: nop

;}
RECOMP_FUNC void ovl_enemy_world6_88BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430088BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430088C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430088C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430088C8: lw          $t6, 0x180($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X180);
    // 0x430088CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430088D0: beq         $v0, $t6, L_43008974
    if (ctx->r2 == ctx->r14) {
        // 0x430088D4: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43008974;
    }
    // 0x430088D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430088D8: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x430088DC: nop

    // 0x430088E0: beq         $v0, $t7, L_43008978
    if (ctx->r2 == ctx->r15) {
        // 0x430088E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008978;
    }
    // 0x430088E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430088E8: jal         0x43008804
    // 0x430088EC: nop

    ovl_enemy_world6_8804(rdram, ctx);
        goto after_0;
    // 0x430088EC: nop

    after_0:
    // 0x430088F0: jal         0x43003A60
    // 0x430088F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_3A60(rdram, ctx);
        goto after_1;
    // 0x430088F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430088F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430088FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43008900: jal         0x43009B50
    // 0x43008904: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world6_9B50(rdram, ctx);
        goto after_2;
    // 0x43008904: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x43008908: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x4300890C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008910: beq         $v0, $at, L_4300892C
    if (ctx->r2 == ctx->r1) {
        // 0x43008914: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4300892C;
    }
    // 0x43008914: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008918: jal         0x43003880
    // 0x4300891C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_3880(rdram, ctx);
        goto after_3;
    // 0x4300891C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008920: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43008924: nop

    // 0x43008928: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300892C:
    // 0x4300892C: beq         $v0, $at, L_43008948
    if (ctx->r2 == ctx->r1) {
        // 0x43008930: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_43008948;
    }
    // 0x43008930: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008934: jal         0x43008600
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_8600(rdram, ctx);
        goto after_4;
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4300893C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43008940: nop

    // 0x43008944: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43008948:
    // 0x43008948: beq         $v0, $at, L_43008958
    if (ctx->r2 == ctx->r1) {
        // 0x4300894C: nop
    
            goto L_43008958;
    }
    // 0x4300894C: nop

    // 0x43008950: jal         0x43002E4C
    // 0x43008954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_2E4C(rdram, ctx);
        goto after_5;
    // 0x43008954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_43008958:
    // 0x43008958: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x4300895C: nop

    // 0x43008960: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x43008964: beq         $t9, $zero, L_43008978
    if (ctx->r25 == 0) {
        // 0x43008968: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008978;
    }
    // 0x43008968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300896C: jal         0x43002D7C
    // 0x43008970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_2D7C(rdram, ctx);
        goto after_6;
    // 0x43008970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_43008974:
    // 0x43008974: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008978:
    // 0x43008978: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300897C: jr          $ra
    // 0x43008980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world6_8984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008984: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43008988: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x4300898C: lw          $v1, -0x5B0C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5B0C);
    // 0x43008990: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008994: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x43008998: beq         $at, $zero, L_430089DC
    if (ctx->r1 == 0) {
        // 0x4300899C: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_430089DC;
    }
    // 0x4300899C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_430089A0:
    // 0x430089A0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x430089A4: nop

    // 0x430089A8: beq         $a1, $t6, L_430089C8
    if (ctx->r5 == ctx->r14) {
        // 0x430089AC: nop
    
            goto L_430089C8;
    }
    // 0x430089AC: nop

    // 0x430089B0: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x430089B4: nop

    // 0x430089B8: beq         $a1, $t7, L_430089C8
    if (ctx->r5 == ctx->r15) {
        // 0x430089BC: nop
    
            goto L_430089C8;
    }
    // 0x430089BC: nop

    // 0x430089C0: jr          $ra
    // 0x430089C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x430089C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_430089C8:
    // 0x430089C8: addiu       $v0, $v0, 0x268
    ctx->r2 = ADD32(ctx->r2, 0X268);
    // 0x430089CC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x430089D0: bne         $at, $zero, L_430089A0
    if (ctx->r1 != 0) {
        // 0x430089D4: nop
    
            goto L_430089A0;
    }
    // 0x430089D4: nop

    // 0x430089D8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_430089DC:
    // 0x430089DC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x430089E0: jr          $ra
    // 0x430089E4: nop

    return;
    // 0x430089E4: nop

;}
RECOMP_FUNC void ovl_enemy_world6_89E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430089E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430089EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430089F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430089F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430089F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430089FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43008A00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008A04: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43008A08: jal         0x43005250
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world6_5250(rdram, ctx);
        goto after_0;
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43008A10: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43008A14: lw          $s4, -0x5B20($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X5B20);
    // 0x43008A18: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x43008A1C: blez        $s4, L_43008AE0
    if (SIGNED(ctx->r20) <= 0) {
        // 0x43008A20: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43008AE0;
    }
    // 0x43008A20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43008A24: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x43008A28: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x43008A2C: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
L_43008A30:
    // 0x43008A30: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x43008A34: jal         0x43008984
    // 0x43008A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_enemy_world6_8984(rdram, ctx);
        goto after_1;
    // 0x43008A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x43008A3C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008A40: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x43008A44: beq         $t6, $s2, L_43008AE0
    if (ctx->r14 == ctx->r18) {
        // 0x43008A48: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_43008AE0;
    }
    // 0x43008A48: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x43008A4C: jal         0x43005218
    // 0x43008A50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_enemy_world6_5218(rdram, ctx);
        goto after_2;
    // 0x43008A50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x43008A54: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x43008A58: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x43008A5C: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x43008A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43008A64: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x43008A68: beq         $t8, $zero, L_43008A80
    if (ctx->r24 == 0) {
        // 0x43008A6C: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_43008A80;
    }
    // 0x43008A6C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x43008A70: jal         0x43005218
    // 0x43008A74: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_enemy_world6_5218(rdram, ctx);
        goto after_3;
    // 0x43008A74: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_3:
    // 0x43008A78: b           L_43008AD8
    // 0x43008A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_43008AD8;
    // 0x43008A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_43008A80:
    // 0x43008A80: beq         $t9, $zero, L_43008AC8
    if (ctx->r25 == 0) {
        // 0x43008A84: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_43008AC8;
    }
    // 0x43008A84: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008A88: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x43008A8C: nop

    // 0x43008A90: lw          $t1, 0x60($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X60);
    // 0x43008A94: nop

    // 0x43008A98: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x43008A9C: sw          $t2, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r10;
    // 0x43008AA0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x43008AA4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x43008AA8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x43008AAC: nop

    // 0x43008AB0: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x43008AB4: bne         $t5, $zero, L_43008AC8
    if (ctx->r13 != 0) {
        // 0x43008AB8: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_43008AC8;
    }
    // 0x43008AB8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008ABC: jal         0x430088BC
    // 0x43008AC0: nop

    ovl_enemy_world6_88BC(rdram, ctx);
        goto after_4;
    // 0x43008AC0: nop

    after_4:
    // 0x43008AC4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
L_43008AC8:
    // 0x43008AC8: nop

    // 0x43008ACC: addiu       $t7, $t6, 0x268
    ctx->r15 = ADD32(ctx->r14, 0X268);
    // 0x43008AD0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x43008AD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_43008AD8:
    // 0x43008AD8: bne         $s0, $s4, L_43008A30
    if (ctx->r16 != ctx->r20) {
        // 0x43008ADC: nop
    
            goto L_43008A30;
    }
    // 0x43008ADC: nop

L_43008AE0:
    // 0x43008AE0: bne         $s4, $zero, L_43008AF4
    if (ctx->r20 != 0) {
        // 0x43008AE4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_43008AF4;
    }
    // 0x43008AE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43008AE8: jal         0x43002C70
    // 0x43008AEC: nop

    ovl_enemy_world6_2C70(rdram, ctx);
        goto after_5;
    // 0x43008AEC: nop

    after_5:
    // 0x43008AF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_43008AF4:
    // 0x43008AF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008AF8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43008AFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43008B00: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43008B04: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43008B08: jr          $ra
    // 0x43008B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43008B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_enemy_world6_8B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_43008B18:
    // 0x43008B18: jal         0x430089E8
    // 0x43008B1C: nop

    ovl_enemy_world6_89E8(rdram, ctx);
        goto after_0;
    // 0x43008B1C: nop

    after_0:
    // 0x43008B20: jal         0x4300085C
    // 0x43008B24: nop

    ovl_enemy_world6_85C(rdram, ctx);
        goto after_1;
    // 0x43008B24: nop

    after_1:
    // 0x43008B28: b           L_43008B18
    // 0x43008B2C: nop

        goto L_43008B18;
    // 0x43008B2C: nop

    // 0x43008B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008B38: jr          $ra
    // 0x43008B3C: nop

    return;
    // 0x43008B3C: nop

;}
RECOMP_FUNC void ovl_enemy_world6_8B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008B48: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x43008B4C: nop

    // 0x43008B50: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43008B54: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x43008B58: beq         $at, $zero, L_43008C50
    if (ctx->r1 == 0) {
        // 0x43008B5C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43008C50;
    }
    // 0x43008B5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43008B60: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008B64: addu        $at, $at, $t7
    gpr jr_addend_43008B70 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43008B68: lw          $t7, -0x5E08($at)
    ctx->r15 = ADD32(ctx->r1, -0X5E08);
    // 0x43008B6C: nop

    // 0x43008B70: jr          $t7
    // 0x43008B74: nop

    switch (jr_addend_43008B70 >> 2) {
        case 0: goto L_43008B78; break;
        case 1: goto L_43008C50; break;
        case 2: goto L_43008C50; break;
        case 3: goto L_43008BC8; break;
        case 4: goto L_43008C50; break;
        case 5: goto L_43008B98; break;
        case 6: goto L_43008B88; break;
        case 7: goto L_43008BA8; break;
        case 8: goto L_43008C50; break;
        case 9: goto L_43008C50; break;
        case 10: goto L_43008BD8; break;
        case 11: goto L_43008C48; break;
        case 12: goto L_43008C50; break;
        case 13: goto L_43008C50; break;
        case 14: goto L_43008C50; break;
        case 15: goto L_43008C50; break;
        case 16: goto L_43008C18; break;
        case 17: goto L_43008C08; break;
        case 18: goto L_43008C50; break;
        case 19: goto L_43008C38; break;
        case 20: goto L_43008BB8; break;
        case 21: goto L_43008C28; break;
        case 22: goto L_43008BF8; break;
        case 23: goto L_43008BE8; break;
        default: switch_error(__func__, 0x43008B70, 0x4300A1F8);
    }
    // 0x43008B74: nop

L_43008B78:
    // 0x43008B78: jal         0x4300528C
    // 0x43008B7C: nop

    ovl_enemy_world6_528C(rdram, ctx);
        goto after_0;
    // 0x43008B7C: nop

    after_0:
    // 0x43008B80: b           L_43008C54
    // 0x43008B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008B88:
    // 0x43008B88: jal         0x43005348
    // 0x43008B8C: nop

    ovl_enemy_world6_5348(rdram, ctx);
        goto after_1;
    // 0x43008B8C: nop

    after_1:
    // 0x43008B90: b           L_43008C54
    // 0x43008B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008B98:
    // 0x43008B98: jal         0x430053BC
    // 0x43008B9C: nop

    ovl_enemy_world6_53BC(rdram, ctx);
        goto after_2;
    // 0x43008B9C: nop

    after_2:
    // 0x43008BA0: b           L_43008C54
    // 0x43008BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BA8:
    // 0x43008BA8: jal         0x43005400
    // 0x43008BAC: nop

    ovl_enemy_world6_5400(rdram, ctx);
        goto after_3;
    // 0x43008BAC: nop

    after_3:
    // 0x43008BB0: b           L_43008C54
    // 0x43008BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BB8:
    // 0x43008BB8: jal         0x43005424
    // 0x43008BBC: nop

    ovl_enemy_world6_5424(rdram, ctx);
        goto after_4;
    // 0x43008BBC: nop

    after_4:
    // 0x43008BC0: b           L_43008C54
    // 0x43008BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BC8:
    // 0x43008BC8: jal         0x4300547C
    // 0x43008BCC: nop

    ovl_enemy_world6_547C(rdram, ctx);
        goto after_5;
    // 0x43008BCC: nop

    after_5:
    // 0x43008BD0: b           L_43008C54
    // 0x43008BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BD8:
    // 0x43008BD8: jal         0x43005924
    // 0x43008BDC: nop

    ovl_enemy_world6_5924(rdram, ctx);
        goto after_6;
    // 0x43008BDC: nop

    after_6:
    // 0x43008BE0: b           L_43008C54
    // 0x43008BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BE8:
    // 0x43008BE8: jal         0x430062D8
    // 0x43008BEC: nop

    ovl_enemy_world6_62D8(rdram, ctx);
        goto after_7;
    // 0x43008BEC: nop

    after_7:
    // 0x43008BF0: b           L_43008C54
    // 0x43008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BF8:
    // 0x43008BF8: jal         0x43006368
    // 0x43008BFC: nop

    ovl_enemy_world6_6368(rdram, ctx);
        goto after_8;
    // 0x43008BFC: nop

    after_8:
    // 0x43008C00: b           L_43008C54
    // 0x43008C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C08:
    // 0x43008C08: jal         0x430063CC
    // 0x43008C0C: nop

    ovl_enemy_world6_63CC(rdram, ctx);
        goto after_9;
    // 0x43008C0C: nop

    after_9:
    // 0x43008C10: b           L_43008C54
    // 0x43008C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C18:
    // 0x43008C18: jal         0x43006448
    // 0x43008C1C: nop

    ovl_enemy_world6_6448(rdram, ctx);
        goto after_10;
    // 0x43008C1C: nop

    after_10:
    // 0x43008C20: b           L_43008C54
    // 0x43008C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C28:
    // 0x43008C28: jal         0x43006488
    // 0x43008C2C: nop

    ovl_enemy_world6_6488(rdram, ctx);
        goto after_11;
    // 0x43008C2C: nop

    after_11:
    // 0x43008C30: b           L_43008C54
    // 0x43008C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C38:
    // 0x43008C38: jal         0x430064EC
    // 0x43008C3C: nop

    ovl_enemy_world6_64EC(rdram, ctx);
        goto after_12;
    // 0x43008C3C: nop

    after_12:
    // 0x43008C40: b           L_43008C54
    // 0x43008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C48:
    // 0x43008C48: jal         0x430066D0
    // 0x43008C4C: nop

    ovl_enemy_world6_66D0(rdram, ctx);
        goto after_13;
    // 0x43008C4C: nop

    after_13:
L_43008C50:
    // 0x43008C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C54:
    // 0x43008C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008C58: jr          $ra
    // 0x43008C5C: nop

    return;
    // 0x43008C5C: nop

;}
RECOMP_FUNC void ovl_enemy_world6_8C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008C60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008C64: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43008C68: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43008C6C: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x43008C70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008C74: beq         $at, $zero, L_43008EC4
    if (ctx->r1 == 0) {
        // 0x43008C78: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_43008EC4;
    }
    // 0x43008C78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43008C7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008C80: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008C84: addu        $at, $at, $t6
    gpr jr_addend_43008C90 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008C88: lw          $t6, -0x5DA0($at)
    ctx->r14 = ADD32(ctx->r1, -0X5DA0);
    // 0x43008C8C: nop

    // 0x43008C90: jr          $t6
    // 0x43008C94: nop

    switch (jr_addend_43008C90 >> 2) {
        case 0: goto L_43008CDC; break;
        case 1: goto L_43008CF4; break;
        case 2: goto L_43008EC4; break;
        case 3: goto L_43008EC4; break;
        case 4: goto L_43008EC4; break;
        case 5: goto L_43008EC4; break;
        case 6: goto L_43008EC4; break;
        case 7: goto L_43008EC4; break;
        case 8: goto L_43008EC4; break;
        case 9: goto L_43008EC4; break;
        case 10: goto L_43008EC4; break;
        case 11: goto L_43008EC4; break;
        case 12: goto L_43008EC4; break;
        case 13: goto L_43008C98; break;
        case 14: goto L_43008E58; break;
        case 15: goto L_43008EC4; break;
        case 16: goto L_43008EC4; break;
        case 17: goto L_43008EC4; break;
        case 18: goto L_43008CC0; break;
        default: switch_error(__func__, 0x43008C90, 0x4300A260);
    }
    // 0x43008C94: nop

L_43008C98:
    // 0x43008C98: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43008C9C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43008CA0: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x43008CA4: addiu       $t8, $t8, -0x6240
    ctx->r24 = ADD32(ctx->r24, -0X6240);
    // 0x43008CA8: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x43008CAC: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43008CB0: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43008CB4: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x43008CB8: b           L_43008EC4
    // 0x43008CBC: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
        goto L_43008EC4;
    // 0x43008CBC: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
L_43008CC0:
    // 0x43008CC0: jal         0x43001F1C
    // 0x43008CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_1F1C(rdram, ctx);
        goto after_0;
    // 0x43008CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43008CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CCC: jal         0x43002238
    // 0x43008CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_1;
    // 0x43008CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x43008CD4: b           L_43008EC8
    // 0x43008CD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008EC8;
    // 0x43008CD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008CDC:
    // 0x43008CDC: jal         0x430014D8
    // 0x43008CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_14D8(rdram, ctx);
        goto after_2;
    // 0x43008CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43008CE4: jal         0x43004E48
    // 0x43008CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4E48(rdram, ctx);
        goto after_3;
    // 0x43008CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008CEC: b           L_43008EC8
    // 0x43008CF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008EC8;
    // 0x43008CF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008CF4:
    // 0x43008CF4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x43008CF8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43008CFC: beq         $v0, $at, L_43008D14
    if (ctx->r2 == ctx->r1) {
        // 0x43008D00: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_43008D14;
    }
    // 0x43008D00: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43008D04: beq         $v0, $at, L_43008DB4
    if (ctx->r2 == ctx->r1) {
        // 0x43008D08: nop
    
            goto L_43008DB4;
    }
    // 0x43008D08: nop

    // 0x43008D0C: b           L_43008EC8
    // 0x43008D10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008EC8;
    // 0x43008D10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008D14:
    // 0x43008D14: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008D18: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x43008D1C: beq         $v1, $zero, L_43008D40
    if (ctx->r3 == 0) {
        // 0x43008D20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008D40;
    }
    // 0x43008D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D24: beq         $v1, $at, L_43008D54
    if (ctx->r3 == ctx->r1) {
        // 0x43008D28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008D54;
    }
    // 0x43008D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D2C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x43008D30: beq         $v1, $at, L_43008D78
    if (ctx->r3 == ctx->r1) {
        // 0x43008D34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008D78;
    }
    // 0x43008D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D38: b           L_43008D90
    // 0x43008D3C: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
        goto L_43008D90;
    // 0x43008D3C: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
L_43008D40:
    // 0x43008D40: jal         0x43002238
    // 0x43008D44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_4;
    // 0x43008D44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x43008D48: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008D4C: b           L_43008D90
    // 0x43008D50: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
        goto L_43008D90;
    // 0x43008D50: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
L_43008D54:
    // 0x43008D54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43008D58: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43008D5C: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x43008D60: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x43008D64: jal         0x43004610
    // 0x43008D68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world6_4610(rdram, ctx);
        goto after_5;
    // 0x43008D68: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x43008D6C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008D70: b           L_43008D90
    // 0x43008D74: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
        goto L_43008D90;
    // 0x43008D74: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
L_43008D78:
    // 0x43008D78: addiu       $a1, $zero, 0x211
    ctx->r5 = ADD32(0, 0X211);
    // 0x43008D7C: jal         0x43001630
    // 0x43008D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world6_1630(rdram, ctx);
        goto after_6;
    // 0x43008D80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x43008D84: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008D88: nop

    // 0x43008D8C: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
L_43008D90:
    // 0x43008D90: bne         $at, $zero, L_43008EC8
    if (ctx->r1 != 0) {
        // 0x43008D94: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43008EC8;
    }
    // 0x43008D94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008D98: jal         0x43004D80
    // 0x43008D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4D80(rdram, ctx);
        goto after_7;
    // 0x43008D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x43008DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DA4: jal         0x43005078
    // 0x43008DA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_8;
    // 0x43008DA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x43008DAC: b           L_43008EC8
    // 0x43008DB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008EC8;
    // 0x43008DB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008DB4:
    // 0x43008DB4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008DB8: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x43008DBC: beq         $v1, $zero, L_43008DD4
    if (ctx->r3 == 0) {
        // 0x43008DC0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008DD4;
    }
    // 0x43008DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DC4: beq         $v1, $at, L_43008DF8
    if (ctx->r3 == ctx->r1) {
        // 0x43008DC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008DF8;
    }
    // 0x43008DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DCC: b           L_43008E34
    // 0x43008DD0: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
        goto L_43008E34;
    // 0x43008DD0: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
L_43008DD4:
    // 0x43008DD4: jal         0x43002238
    // 0x43008DD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_9;
    // 0x43008DD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x43008DDC: beq         $v0, $zero, L_43008DEC
    if (ctx->r2 == 0) {
        // 0x43008DE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008DEC;
    }
    // 0x43008DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DE4: jal         0x43004AD8
    // 0x43008DE8: addiu       $a1, $zero, 0x4F5
    ctx->r5 = ADD32(0, 0X4F5);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_10;
    // 0x43008DE8: addiu       $a1, $zero, 0x4F5
    ctx->r5 = ADD32(0, 0X4F5);
    after_10:
L_43008DEC:
    // 0x43008DEC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008DF0: b           L_43008E34
    // 0x43008DF4: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
        goto L_43008E34;
    // 0x43008DF4: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
L_43008DF8:
    // 0x43008DF8: addiu       $a1, $zero, 0x1FA
    ctx->r5 = ADD32(0, 0X1FA);
    // 0x43008DFC: jal         0x43001630
    // 0x43008E00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world6_1630(rdram, ctx);
        goto after_11;
    // 0x43008E00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x43008E04: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x43008E08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43008E0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43008E10: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43008E14: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E1C: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x43008E20: jal         0x43004610
    // 0x43008E24: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_enemy_world6_4610(rdram, ctx);
        goto after_12;
    // 0x43008E24: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x43008E28: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008E2C: nop

    // 0x43008E30: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
L_43008E34:
    // 0x43008E34: bne         $at, $zero, L_43008EC8
    if (ctx->r1 != 0) {
        // 0x43008E38: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43008EC8;
    }
    // 0x43008E38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008E3C: jal         0x43004D80
    // 0x43008E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4D80(rdram, ctx);
        goto after_13;
    // 0x43008E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x43008E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E48: jal         0x43005078
    // 0x43008E4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_14;
    // 0x43008E4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x43008E50: b           L_43008EC8
    // 0x43008E54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008EC8;
    // 0x43008E54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008E58:
    // 0x43008E58: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008E5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008E60: bne         $v1, $at, L_43008EB4
    if (ctx->r3 != ctx->r1) {
        // 0x43008E64: slti        $at, $v1, 0x32
        ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
            goto L_43008EB4;
    }
    // 0x43008E64: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x43008E68: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x43008E6C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43008E70: bne         $t1, $at, L_43008E8C
    if (ctx->r9 != ctx->r1) {
        // 0x43008E74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008E8C;
    }
    // 0x43008E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E7C: jal         0x43002238
    // 0x43008E80: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_15;
    // 0x43008E80: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_15:
    // 0x43008E84: b           L_43008E98
    // 0x43008E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43008E98;
    // 0x43008E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43008E8C:
    // 0x43008E8C: jal         0x43002238
    // 0x43008E90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_16;
    // 0x43008E90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_16:
    // 0x43008E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43008E98:
    // 0x43008E98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43008E9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43008EA0: jal         0x43001DE0
    // 0x43008EA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world6_1DE0(rdram, ctx);
        goto after_17;
    // 0x43008EA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x43008EA8: b           L_43008EC8
    // 0x43008EAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008EC8;
    // 0x43008EAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008EB0: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
L_43008EB4:
    // 0x43008EB4: bne         $at, $zero, L_43008EC4
    if (ctx->r1 != 0) {
        // 0x43008EB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008EC4;
    }
    // 0x43008EB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008EBC: jal         0x43005078
    // 0x43008EC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_18;
    // 0x43008EC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
L_43008EC4:
    // 0x43008EC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008EC8:
    // 0x43008EC8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43008ECC: jr          $ra
    // 0x43008ED0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43008ED0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world6_8ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008ED4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008ED8: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43008EDC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43008EE0: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x43008EE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008EE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43008EEC: beq         $at, $zero, L_43009128
    if (ctx->r1 == 0) {
        // 0x43008EF0: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_43009128;
    }
    // 0x43008EF0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43008EF4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008EF8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008EFC: addu        $at, $at, $t6
    gpr jr_addend_43008F08 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008F00: lw          $t6, -0x5D54($at)
    ctx->r14 = ADD32(ctx->r1, -0X5D54);
    // 0x43008F04: nop

    // 0x43008F08: jr          $t6
    // 0x43008F0C: nop

    switch (jr_addend_43008F08 >> 2) {
        case 0: goto L_43008F7C; break;
        case 1: goto L_43008F94; break;
        case 2: goto L_43009128; break;
        case 3: goto L_430090A8; break;
        case 4: goto L_43009128; break;
        case 5: goto L_43009128; break;
        case 6: goto L_43009128; break;
        case 7: goto L_43009128; break;
        case 8: goto L_43009128; break;
        case 9: goto L_43009128; break;
        case 10: goto L_43009128; break;
        case 11: goto L_43009128; break;
        case 12: goto L_43009128; break;
        case 13: goto L_43008F10; break;
        case 14: goto L_430090BC; break;
        case 15: goto L_43009128; break;
        case 16: goto L_43009128; break;
        case 17: goto L_43009128; break;
        case 18: goto L_43008F50; break;
        default: switch_error(__func__, 0x43008F08, 0x4300A2AC);
    }
    // 0x43008F0C: nop

L_43008F10:
    // 0x43008F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F14: jal         0x43004AD8
    // 0x43008F18: addiu       $a1, $zero, 0x4EE
    ctx->r5 = ADD32(0, 0X4EE);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_0;
    // 0x43008F18: addiu       $a1, $zero, 0x4EE
    ctx->r5 = ADD32(0, 0X4EE);
    after_0:
    // 0x43008F1C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43008F20: addiu       $t8, $t8, -0x6234
    ctx->r24 = ADD32(ctx->r24, -0X6234);
    // 0x43008F24: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x43008F28: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43008F2C: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x43008F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F34: jal         0x43001428
    // 0x43008F38: lui         $a1, 0x4020
    ctx->r5 = S32(0X4020 << 16);
    ovl_enemy_world6_1428(rdram, ctx);
        goto after_1;
    // 0x43008F38: lui         $a1, 0x4020
    ctx->r5 = S32(0X4020 << 16);
    after_1:
    // 0x43008F3C: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43008F40: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x43008F44: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43008F48: b           L_43009128
    // 0x43008F4C: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
        goto L_43009128;
    // 0x43008F4C: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
L_43008F50:
    // 0x43008F50: jal         0x43001F1C
    // 0x43008F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_1F1C(rdram, ctx);
        goto after_2;
    // 0x43008F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43008F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F5C: jal         0x43002238
    // 0x43008F60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_3;
    // 0x43008F60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x43008F64: beq         $v0, $zero, L_43009128
    if (ctx->r2 == 0) {
        // 0x43008F68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009128;
    }
    // 0x43008F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F6C: jal         0x43004AD8
    // 0x43008F70: addiu       $a1, $zero, 0x4EE
    ctx->r5 = ADD32(0, 0X4EE);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_4;
    // 0x43008F70: addiu       $a1, $zero, 0x4EE
    ctx->r5 = ADD32(0, 0X4EE);
    after_4:
    // 0x43008F74: b           L_4300912C
    // 0x43008F78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4300912C;
    // 0x43008F78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008F7C:
    // 0x43008F7C: jal         0x430014D8
    // 0x43008F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_14D8(rdram, ctx);
        goto after_5;
    // 0x43008F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x43008F84: jal         0x43004E48
    // 0x43008F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4E48(rdram, ctx);
        goto after_6;
    // 0x43008F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43008F8C: b           L_4300912C
    // 0x43008F90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4300912C;
    // 0x43008F90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008F94:
    // 0x43008F94: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008F98: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x43008F9C: beq         $v1, $zero, L_43008FB4
    if (ctx->r3 == 0) {
        // 0x43008FA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008FB4;
    }
    // 0x43008FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FA4: beq         $v1, $at, L_43008FD8
    if (ctx->r3 == ctx->r1) {
        // 0x43008FA8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008FD8;
    }
    // 0x43008FA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FAC: b           L_4300900C
    // 0x43008FB0: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
        goto L_4300900C;
    // 0x43008FB0: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_43008FB4:
    // 0x43008FB4: jal         0x43002238
    // 0x43008FB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_7;
    // 0x43008FB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x43008FBC: beq         $v0, $zero, L_43008FCC
    if (ctx->r2 == 0) {
        // 0x43008FC0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008FCC;
    }
    // 0x43008FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FC4: jal         0x43004AD8
    // 0x43008FC8: addiu       $a1, $zero, 0x4EF
    ctx->r5 = ADD32(0, 0X4EF);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_8;
    // 0x43008FC8: addiu       $a1, $zero, 0x4EF
    ctx->r5 = ADD32(0, 0X4EF);
    after_8:
L_43008FCC:
    // 0x43008FCC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43008FD0: b           L_4300900C
    // 0x43008FD4: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
        goto L_4300900C;
    // 0x43008FD4: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_43008FD8:
    // 0x43008FD8: addiu       $a1, $zero, 0x202
    ctx->r5 = ADD32(0, 0X202);
    // 0x43008FDC: jal         0x43001630
    // 0x43008FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world6_1630(rdram, ctx);
        goto after_9;
    // 0x43008FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x43008FE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FEC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43008FF0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008FF4: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x43008FF8: jal         0x43004610
    // 0x43008FFC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_enemy_world6_4610(rdram, ctx);
        goto after_10;
    // 0x43008FFC: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x43009000: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009004: nop

    // 0x43009008: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_4300900C:
    // 0x4300900C: bne         $at, $zero, L_43009030
    if (ctx->r1 != 0) {
        // 0x43009010: nop
    
            goto L_43009030;
    }
    // 0x43009010: nop

    // 0x43009014: jal         0x43004D80
    // 0x43009018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4D80(rdram, ctx);
        goto after_11;
    // 0x43009018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x4300901C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009020: jal         0x43005078
    // 0x43009024: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_12;
    // 0x43009024: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x43009028: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300902C: nop

L_43009030:
    // 0x43009030: bltz        $v1, L_43009054
    if (SIGNED(ctx->r3) < 0) {
        // 0x43009034: slti        $at, $v1, 0x8
        ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_43009054;
    }
    // 0x43009034: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x43009038: beq         $at, $zero, L_43009054
    if (ctx->r1 == 0) {
        // 0x4300903C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_43009054;
    }
    // 0x4300903C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43009040: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43009044: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43009048: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x4300904C: b           L_43009128
    // 0x43009050: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
        goto L_43009128;
    // 0x43009050: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
L_43009054:
    // 0x43009054: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x43009058: bne         $at, $zero, L_43009080
    if (ctx->r1 != 0) {
        // 0x4300905C: slti        $at, $v1, 0x25
        ctx->r1 = SIGNED(ctx->r3) < 0X25 ? 1 : 0;
            goto L_43009080;
    }
    // 0x4300905C: slti        $at, $v1, 0x25
    ctx->r1 = SIGNED(ctx->r3) < 0X25 ? 1 : 0;
    // 0x43009060: beq         $at, $zero, L_43009080
    if (ctx->r1 == 0) {
        // 0x43009064: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_43009080;
    }
    // 0x43009064: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43009068: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4300906C: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x43009070: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x43009074: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x43009078: b           L_43009128
    // 0x4300907C: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
        goto L_43009128;
    // 0x4300907C: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
L_43009080:
    // 0x43009080: slti        $at, $v1, 0x25
    ctx->r1 = SIGNED(ctx->r3) < 0X25 ? 1 : 0;
    // 0x43009084: bne         $at, $zero, L_43009128
    if (ctx->r1 != 0) {
        // 0x43009088: slti        $at, $v1, 0x2D
        ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
            goto L_43009128;
    }
    // 0x43009088: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
    // 0x4300908C: beq         $at, $zero, L_43009128
    if (ctx->r1 == 0) {
        // 0x43009090: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_43009128;
    }
    // 0x43009090: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43009094: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43009098: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4300909C: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x430090A0: b           L_43009128
    // 0x430090A4: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
        goto L_43009128;
    // 0x430090A4: swc1        $f10, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f10.u32l;
L_430090A8:
    // 0x430090A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090AC: jal         0x43005078
    // 0x430090B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_13;
    // 0x430090B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x430090B4: b           L_4300912C
    // 0x430090B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4300912C;
    // 0x430090B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430090BC:
    // 0x430090BC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430090C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430090C4: bne         $v1, $at, L_43009114
    if (ctx->r3 != ctx->r1) {
        // 0x430090C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009114;
    }
    // 0x430090C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090CC: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x430090D0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x430090D4: bne         $t1, $at, L_430090E0
    if (ctx->r9 != ctx->r1) {
        // 0x430090D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_430090E0;
    }
    // 0x430090D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x430090DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_430090E0:
    // 0x430090E0: jal         0x43002238
    // 0x430090E4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_14;
    // 0x430090E4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_14:
    // 0x430090E8: beq         $v0, $zero, L_430090F8
    if (ctx->r2 == 0) {
        // 0x430090EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430090F8;
    }
    // 0x430090EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090F0: jal         0x43004AD8
    // 0x430090F4: addiu       $a1, $zero, 0x4EF
    ctx->r5 = ADD32(0, 0X4EF);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_15;
    // 0x430090F4: addiu       $a1, $zero, 0x4EF
    ctx->r5 = ADD32(0, 0X4EF);
    after_15:
L_430090F8:
    // 0x430090F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009100: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009104: jal         0x43001DE0
    // 0x43009108: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world6_1DE0(rdram, ctx);
        goto after_16;
    // 0x43009108: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x4300910C: b           L_4300912C
    // 0x43009110: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4300912C;
    // 0x43009110: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009114:
    // 0x43009114: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x43009118: bne         $at, $zero, L_43009128
    if (ctx->r1 != 0) {
        // 0x4300911C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009128;
    }
    // 0x4300911C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009120: jal         0x43005078
    // 0x43009124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_17;
    // 0x43009124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
L_43009128:
    // 0x43009128: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300912C:
    // 0x4300912C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43009130: jr          $ra
    // 0x43009134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43009134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world6_9138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009138: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300913C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43009140: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x43009144: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x43009148: bne         $a2, $v1, L_430091F8
    if (ctx->r6 != ctx->r3) {
        // 0x4300914C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_430091F8;
    }
    // 0x4300914C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43009150: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x43009154: nop

    // 0x43009158: beq         $v1, $v0, L_4300925C
    if (ctx->r3 == ctx->r2) {
        // 0x4300915C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4300925C;
    }
    // 0x4300915C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009160: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x43009164: nop

    // 0x43009168: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x4300916C: bne         $v0, $zero, L_430091CC
    if (ctx->r2 != 0) {
        // 0x43009170: sw          $t7, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r15;
            goto L_430091CC;
    }
    // 0x43009170: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x43009174: slti        $at, $t7, 0xF
    ctx->r1 = SIGNED(ctx->r15) < 0XF ? 1 : 0;
    // 0x43009178: bne         $at, $zero, L_43009258
    if (ctx->r1 != 0) {
        // 0x4300917C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_43009258;
    }
    // 0x4300917C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43009180: jal         0x43002238
    // 0x43009184: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_0;
    // 0x43009184: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x43009188: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4300918C: beq         $v0, $zero, L_430091B4
    if (ctx->r2 == 0) {
        // 0x43009190: addiu       $a1, $zero, 0x4E8
        ctx->r5 = ADD32(0, 0X4E8);
            goto L_430091B4;
    }
    // 0x43009190: addiu       $a1, $zero, 0x4E8
    ctx->r5 = ADD32(0, 0X4E8);
    // 0x43009194: jal         0x43004AD8
    // 0x43009198: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_1;
    // 0x43009198: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x4300919C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430091A0: addiu       $a1, $zero, 0x21B
    ctx->r5 = ADD32(0, 0X21B);
    // 0x430091A4: jal         0x43001630
    // 0x430091A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world6_1630(rdram, ctx);
        goto after_2;
    // 0x430091A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x430091AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430091B0: nop

L_430091B4:
    // 0x430091B4: jal         0x43001F1C
    // 0x430091B8: nop

    ovl_enemy_world6_1F1C(rdram, ctx);
        goto after_3;
    // 0x430091B8: nop

    after_3:
    // 0x430091BC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x430091C0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x430091C4: b           L_43009258
    // 0x430091C8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
        goto L_43009258;
    // 0x430091C8: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_430091CC:
    // 0x430091CC: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x430091D0: nop

    // 0x430091D4: slti        $at, $t0, 0xF
    ctx->r1 = SIGNED(ctx->r8) < 0XF ? 1 : 0;
    // 0x430091D8: bne         $at, $zero, L_4300925C
    if (ctx->r1 != 0) {
        // 0x430091DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4300925C;
    }
    // 0x430091DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430091E0: jal         0x43002238
    // 0x430091E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_4;
    // 0x430091E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x430091E8: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x430091EC: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x430091F0: b           L_43009258
    // 0x430091F4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
        goto L_43009258;
    // 0x430091F4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_430091F8:
    // 0x430091F8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x430091FC: nop

    // 0x43009200: bne         $v1, $t2, L_4300925C
    if (ctx->r3 != ctx->r10) {
        // 0x43009204: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4300925C;
    }
    // 0x43009204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009208: bne         $a2, $zero, L_43009234
    if (ctx->r6 != 0) {
        // 0x4300920C: nop
    
            goto L_43009234;
    }
    // 0x4300920C: nop

    // 0x43009210: lbu         $t3, 0x261($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X261);
    // 0x43009214: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009218: beq         $t3, $at, L_4300925C
    if (ctx->r11 == ctx->r1) {
        // 0x4300921C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4300925C;
    }
    // 0x4300921C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009220: jal         0x43002238
    // 0x43009224: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_5;
    // 0x43009224: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x43009228: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x4300922C: b           L_43009258
    // 0x43009230: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
        goto L_43009258;
    // 0x43009230: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_43009234:
    // 0x43009234: lbu         $t4, 0x261($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X261);
    // 0x43009238: nop

    // 0x4300923C: beq         $t4, $zero, L_4300925C
    if (ctx->r12 == 0) {
        // 0x43009240: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4300925C;
    }
    // 0x43009240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009244: jal         0x43002238
    // 0x43009248: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_6;
    // 0x43009248: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x4300924C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43009250: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x43009254: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_43009258:
    // 0x43009258: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300925C:
    // 0x4300925C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43009260: jr          $ra
    // 0x43009264: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43009264: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world6_9268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009268: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300926C: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43009270: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43009274: sltiu       $at, $t6, 0x16
    ctx->r1 = ctx->r14 < 0X16 ? 1 : 0;
    // 0x43009278: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300927C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43009280: beq         $at, $zero, L_43009450
    if (ctx->r1 == 0) {
        // 0x43009284: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_43009450;
    }
    // 0x43009284: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43009288: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4300928C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009290: addu        $at, $at, $t6
    gpr jr_addend_4300929C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009294: lw          $t6, -0x5D08($at)
    ctx->r14 = ADD32(ctx->r1, -0X5D08);
    // 0x43009298: nop

    // 0x4300929C: jr          $t6
    // 0x430092A0: nop

    switch (jr_addend_4300929C >> 2) {
        case 0: goto L_43009350; break;
        case 1: goto L_43009450; break;
        case 2: goto L_43009450; break;
        case 3: goto L_43009364; break;
        case 4: goto L_43009378; break;
        case 5: goto L_430093B0; break;
        case 6: goto L_43009450; break;
        case 7: goto L_43009450; break;
        case 8: goto L_43009450; break;
        case 9: goto L_43009450; break;
        case 10: goto L_43009450; break;
        case 11: goto L_43009450; break;
        case 12: goto L_43009450; break;
        case 13: goto L_430092A4; break;
        case 14: goto L_430093CC; break;
        case 15: goto L_43009440; break;
        case 16: goto L_43009450; break;
        case 17: goto L_43009450; break;
        case 18: goto L_430092DC; break;
        case 19: goto L_43009450; break;
        case 20: goto L_43009450; break;
        case 21: goto L_430092F8; break;
        default: switch_error(__func__, 0x4300929C, 0x4300A2F8);
    }
    // 0x430092A0: nop

L_430092A4:
    // 0x430092A4: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x430092A8: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430092AC: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x430092B0: addiu       $t8, $t8, -0x622C
    ctx->r24 = ADD32(ctx->r24, -0X622C);
    // 0x430092B4: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x430092B8: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x430092BC: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x430092C0: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x430092C4: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x430092C8: addiu       $v0, $s0, 0x24C
    ctx->r2 = ADD32(ctx->r16, 0X24C);
    // 0x430092CC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x430092D0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x430092D4: b           L_43009450
    // 0x430092D8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
        goto L_43009450;
    // 0x430092D8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_430092DC:
    // 0x430092DC: jal         0x43001F1C
    // 0x430092E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_1F1C(rdram, ctx);
        goto after_0;
    // 0x430092E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x430092E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430092E8: jal         0x43002238
    // 0x430092EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_1;
    // 0x430092EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x430092F0: b           L_43009454
    // 0x430092F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009454;
    // 0x430092F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430092F8:
    // 0x430092F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430092FC: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x43009300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009304: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x43009308: addiu       $a1, $s0, 0x24C
    ctx->r5 = ADD32(ctx->r16, 0X24C);
    // 0x4300930C: bc1f        L_43009324
    if (!c1cs) {
        // 0x43009310: nop
    
            goto L_43009324;
    }
    // 0x43009310: nop

    // 0x43009314: jal         0x43009138
    // 0x43009318: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world6_9138(rdram, ctx);
        goto after_2;
    // 0x43009318: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x4300931C: b           L_43009454
    // 0x43009320: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009454;
    // 0x43009320: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009324:
    // 0x43009324: lbu         $t2, 0x261($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X261);
    // 0x43009328: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300932C: beq         $t2, $at, L_43009450
    if (ctx->r10 == ctx->r1) {
        // 0x43009330: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009450;
    }
    // 0x43009330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009334: addiu       $a1, $s0, 0x24C
    ctx->r5 = ADD32(ctx->r16, 0X24C);
    // 0x43009338: jal         0x43009138
    // 0x4300933C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_enemy_world6_9138(rdram, ctx);
        goto after_3;
    // 0x4300933C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x43009340: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009344: lwc1        $f8, -0x5CB0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5CB0);
    // 0x43009348: b           L_43009450
    // 0x4300934C: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
        goto L_43009450;
    // 0x4300934C: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
L_43009350:
    // 0x43009350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009354: jal         0x43005078
    // 0x43009358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_4;
    // 0x43009358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x4300935C: b           L_43009454
    // 0x43009360: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009454;
    // 0x43009360: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009364:
    // 0x43009364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009368: jal         0x43004CE0
    // 0x4300936C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    ovl_enemy_world6_4CE0(rdram, ctx);
        goto after_5;
    // 0x4300936C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_5:
    // 0x43009370: b           L_43009454
    // 0x43009374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009454;
    // 0x43009374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009378:
    // 0x43009378: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x4300937C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009380: bne         $t3, $zero, L_430093A0
    if (ctx->r11 != 0) {
        // 0x43009384: nop
    
            goto L_430093A0;
    }
    // 0x43009384: nop

    // 0x43009388: jal         0x43002238
    // 0x4300938C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_6;
    // 0x4300938C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_6:
    // 0x43009390: beq         $v0, $zero, L_430093A0
    if (ctx->r2 == 0) {
        // 0x43009394: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430093A0;
    }
    // 0x43009394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009398: jal         0x43004AD8
    // 0x4300939C: addiu       $a1, $zero, 0x4E9
    ctx->r5 = ADD32(0, 0X4E9);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_7;
    // 0x4300939C: addiu       $a1, $zero, 0x4E9
    ctx->r5 = ADD32(0, 0X4E9);
    after_7:
L_430093A0:
    // 0x430093A0: jal         0x43004BF0
    // 0x430093A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4BF0(rdram, ctx);
        goto after_8;
    // 0x430093A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x430093A8: b           L_43009454
    // 0x430093AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009454;
    // 0x430093AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430093B0:
    // 0x430093B0: jal         0x43004C74
    // 0x430093B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4C74(rdram, ctx);
        goto after_9;
    // 0x430093B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x430093B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430093BC: jal         0x43005078
    // 0x430093C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_10;
    // 0x430093C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x430093C4: b           L_43009454
    // 0x430093C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009454;
    // 0x430093C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430093CC:
    // 0x430093CC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430093D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430093D4: bne         $v0, $at, L_43009424
    if (ctx->r2 != ctx->r1) {
        // 0x430093D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009424;
    }
    // 0x430093D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430093DC: lw          $t4, 0x1E4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1E4);
    // 0x430093E0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x430093E4: bne         $t4, $at, L_430093F0
    if (ctx->r12 != ctx->r1) {
        // 0x430093E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_430093F0;
    }
    // 0x430093E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x430093EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_430093F0:
    // 0x430093F0: jal         0x43002238
    // 0x430093F4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_11;
    // 0x430093F4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_11:
    // 0x430093F8: beq         $v0, $zero, L_43009408
    if (ctx->r2 == 0) {
        // 0x430093FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009408;
    }
    // 0x430093FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009400: jal         0x43004AD8
    // 0x43009404: addiu       $a1, $zero, 0x4E8
    ctx->r5 = ADD32(0, 0X4E8);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_12;
    // 0x43009404: addiu       $a1, $zero, 0x4E8
    ctx->r5 = ADD32(0, 0X4E8);
    after_12:
L_43009408:
    // 0x43009408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300940C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009410: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009414: jal         0x43001DE0
    // 0x43009418: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world6_1DE0(rdram, ctx);
        goto after_13;
    // 0x43009418: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x4300941C: b           L_43009454
    // 0x43009420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009454;
    // 0x43009420: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009424:
    // 0x43009424: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43009428: bne         $at, $zero, L_43009450
    if (ctx->r1 != 0) {
        // 0x4300942C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009450;
    }
    // 0x4300942C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009430: jal         0x43005078
    // 0x43009434: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_14;
    // 0x43009434: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x43009438: b           L_43009454
    // 0x4300943C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009454;
    // 0x4300943C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009440:
    // 0x43009440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009444: addiu       $a1, $s0, 0x24C
    ctx->r5 = ADD32(ctx->r16, 0X24C);
    // 0x43009448: jal         0x43009138
    // 0x4300944C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world6_9138(rdram, ctx);
        goto after_15;
    // 0x4300944C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_15:
L_43009450:
    // 0x43009450: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009454:
    // 0x43009454: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43009458: jr          $ra
    // 0x4300945C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4300945C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world6_9460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009460: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x43009464: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43009468: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300946C: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x43009470: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009474: beq         $at, $zero, L_43009744
    if (ctx->r1 == 0) {
        // 0x43009478: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_43009744;
    }
    // 0x43009478: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300947C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009480: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009484: addu        $at, $at, $t6
    gpr jr_addend_43009490 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009488: lw          $t6, -0x5CAC($at)
    ctx->r14 = ADD32(ctx->r1, -0X5CAC);
    // 0x4300948C: nop

    // 0x43009490: jr          $t6
    // 0x43009494: nop

    switch (jr_addend_43009490 >> 2) {
        case 0: goto L_430094E8; break;
        case 1: goto L_43009500; break;
        case 2: goto L_43009744; break;
        case 3: goto L_43009744; break;
        case 4: goto L_43009744; break;
        case 5: goto L_43009744; break;
        case 6: goto L_43009744; break;
        case 7: goto L_43009744; break;
        case 8: goto L_43009744; break;
        case 9: goto L_43009744; break;
        case 10: goto L_43009744; break;
        case 11: goto L_43009744; break;
        case 12: goto L_43009744; break;
        case 13: goto L_43009498; break;
        case 14: goto L_430096D8; break;
        case 15: goto L_43009744; break;
        case 16: goto L_43009744; break;
        case 17: goto L_43009744; break;
        case 18: goto L_430094CC; break;
        default: switch_error(__func__, 0x43009490, 0x4300A354);
    }
    // 0x43009494: nop

L_43009498:
    // 0x43009498: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x4300949C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x430094A0: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x430094A4: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430094A8: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x430094AC: addiu       $t8, $t8, -0x621C
    ctx->r24 = ADD32(ctx->r24, -0X621C);
    // 0x430094B0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x430094B4: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x430094B8: or          $t2, $t0, $at
    ctx->r10 = ctx->r8 | ctx->r1;
    // 0x430094BC: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x430094C0: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x430094C4: b           L_43009744
    // 0x430094C8: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
        goto L_43009744;
    // 0x430094C8: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
L_430094CC:
    // 0x430094CC: jal         0x43001F1C
    // 0x430094D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_1F1C(rdram, ctx);
        goto after_0;
    // 0x430094D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x430094D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430094D8: jal         0x43002238
    // 0x430094DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_1;
    // 0x430094DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x430094E0: b           L_43009748
    // 0x430094E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009748;
    // 0x430094E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430094E8:
    // 0x430094E8: jal         0x430014D8
    // 0x430094EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_14D8(rdram, ctx);
        goto after_2;
    // 0x430094EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x430094F0: jal         0x43004E48
    // 0x430094F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4E48(rdram, ctx);
        goto after_3;
    // 0x430094F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x430094F8: b           L_43009748
    // 0x430094FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009748;
    // 0x430094FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009500:
    // 0x43009500: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x43009504: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43009508: beq         $v0, $at, L_43009520
    if (ctx->r2 == ctx->r1) {
        // 0x4300950C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_43009520;
    }
    // 0x4300950C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43009510: beq         $v0, $at, L_43009654
    if (ctx->r2 == ctx->r1) {
        // 0x43009514: nop
    
            goto L_43009654;
    }
    // 0x43009514: nop

    // 0x43009518: b           L_43009748
    // 0x4300951C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009748;
    // 0x4300951C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009520:
    // 0x43009520: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009524: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43009528: beq         $v1, $zero, L_43009540
    if (ctx->r3 == 0) {
        // 0x4300952C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009540;
    }
    // 0x4300952C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009530: beq         $v1, $at, L_43009554
    if (ctx->r3 == ctx->r1) {
        // 0x43009534: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_43009554;
    }
    // 0x43009534: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43009538: b           L_43009628
    // 0x4300953C: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
        goto L_43009628;
    // 0x4300953C: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
L_43009540:
    // 0x43009540: jal         0x430014E4
    // 0x43009544: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_14E4(rdram, ctx);
        goto after_4;
    // 0x43009544: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x43009548: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300954C: b           L_43009628
    // 0x43009550: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
        goto L_43009628;
    // 0x43009550: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
L_43009554:
    // 0x43009554: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43009558: jal         0x430006C4
    // 0x4300955C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_enemy_world6_6C4(rdram, ctx);
        goto after_5;
    // 0x4300955C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_5:
    // 0x43009560: jal         0x43000340
    // 0x43009564: nop

    ovl_enemy_world6_340(rdram, ctx);
        goto after_6;
    // 0x43009564: nop

    after_6:
    // 0x43009568: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x4300956C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43009570: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x43009574: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x43009578: mul.s       $f2, $f12, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x4300957C: add.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x43009580: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x43009584: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x43009588: jal         0x43000340
    // 0x4300958C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    ovl_enemy_world6_340(rdram, ctx);
        goto after_7;
    // 0x4300958C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    after_7:
    // 0x43009590: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x43009594: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43009598: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
    // 0x4300959C: lwc1        $f14, 0x58($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X58);
    // 0x430095A0: mul.s       $f2, $f12, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x430095A4: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x430095A8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x430095AC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x430095B0: add.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x430095B4: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x430095B8: sub.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x430095BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095C0: add.s       $f14, $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x430095C4: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x430095C8: swc1        $f14, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f14.u32l;
    // 0x430095CC: swc1        $f14, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f14.u32l;
    // 0x430095D0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x430095D4: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x430095D8: jal         0x43005218
    // 0x430095DC: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    ovl_enemy_world6_5218(rdram, ctx);
        goto after_8;
    // 0x430095DC: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x430095E0: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x430095E4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x430095E8: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x430095EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430095F0: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x430095F4: nop

    // 0x430095F8: bc1t        L_4300961C
    if (c1cs) {
        // 0x430095FC: nop
    
            goto L_4300961C;
    }
    // 0x430095FC: nop

    // 0x43009600: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43009604: jal         0x430006C4
    // 0x43009608: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_enemy_world6_6C4(rdram, ctx);
        goto after_9;
    // 0x43009608: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_9:
    // 0x4300960C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009610: addiu       $a1, $zero, 0x21A
    ctx->r5 = ADD32(0, 0X21A);
    // 0x43009614: jal         0x43001630
    // 0x43009618: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world6_1630(rdram, ctx);
        goto after_10;
    // 0x43009618: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
L_4300961C:
    // 0x4300961C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009620: nop

    // 0x43009624: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
L_43009628:
    // 0x43009628: bne         $at, $zero, L_43009744
    if (ctx->r1 != 0) {
        // 0x4300962C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009744;
    }
    // 0x4300962C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009630: jal         0x430014E4
    // 0x43009634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world6_14E4(rdram, ctx);
        goto after_11;
    // 0x43009634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x43009638: jal         0x43004D80
    // 0x4300963C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4D80(rdram, ctx);
        goto after_12;
    // 0x4300963C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x43009640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009644: jal         0x43005078
    // 0x43009648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_13;
    // 0x43009648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x4300964C: b           L_43009748
    // 0x43009650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009748;
    // 0x43009650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009654:
    // 0x43009654: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300965C: bne         $v1, $zero, L_430096B4
    if (ctx->r3 != 0) {
        // 0x43009660: slti        $at, $v1, 0x2D
        ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
            goto L_430096B4;
    }
    // 0x43009660: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
    // 0x43009664: jal         0x43002238
    // 0x43009668: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_14;
    // 0x43009668: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x4300966C: beq         $v0, $zero, L_4300967C
    if (ctx->r2 == 0) {
        // 0x43009670: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300967C;
    }
    // 0x43009670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009674: jal         0x43004AD8
    // 0x43009678: addiu       $a1, $zero, 0x4DF
    ctx->r5 = ADD32(0, 0X4DF);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_15;
    // 0x43009678: addiu       $a1, $zero, 0x4DF
    ctx->r5 = ADD32(0, 0X4DF);
    after_15:
L_4300967C:
    // 0x4300967C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x43009680: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43009684: lwc1        $f8, 0x1AC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1AC);
    // 0x43009688: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x4300968C: mul.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x43009690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009694: addiu       $a1, $zero, 0x21A
    ctx->r5 = ADD32(0, 0X21A);
    // 0x43009698: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4300969C: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x430096A0: jal         0x43001630
    // 0x430096A4: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    ovl_enemy_world6_1630(rdram, ctx);
        goto after_16;
    // 0x430096A4: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    after_16:
    // 0x430096A8: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430096AC: nop

    // 0x430096B0: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_430096B4:
    // 0x430096B4: bne         $at, $zero, L_43009748
    if (ctx->r1 != 0) {
        // 0x430096B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009748;
    }
    // 0x430096B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430096BC: jal         0x43004D80
    // 0x430096C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4D80(rdram, ctx);
        goto after_17;
    // 0x430096C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x430096C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096C8: jal         0x43005078
    // 0x430096CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_18;
    // 0x430096CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x430096D0: b           L_43009748
    // 0x430096D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009748;
    // 0x430096D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430096D8:
    // 0x430096D8: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430096DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430096E0: bne         $v1, $at, L_43009730
    if (ctx->r3 != ctx->r1) {
        // 0x430096E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009730;
    }
    // 0x430096E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096E8: lw          $t4, 0x1E4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1E4);
    // 0x430096EC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x430096F0: bne         $t4, $at, L_430096FC
    if (ctx->r12 != ctx->r1) {
        // 0x430096F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_430096FC;
    }
    // 0x430096F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x430096F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_430096FC:
    // 0x430096FC: jal         0x43002238
    // 0x43009700: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_19;
    // 0x43009700: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_19:
    // 0x43009704: beq         $v0, $zero, L_43009714
    if (ctx->r2 == 0) {
        // 0x43009708: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009714;
    }
    // 0x43009708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300970C: jal         0x43004AD8
    // 0x43009710: addiu       $a1, $zero, 0x4E0
    ctx->r5 = ADD32(0, 0X4E0);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_20;
    // 0x43009710: addiu       $a1, $zero, 0x4E0
    ctx->r5 = ADD32(0, 0X4E0);
    after_20:
L_43009714:
    // 0x43009714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009718: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4300971C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009720: jal         0x43001DE0
    // 0x43009724: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world6_1DE0(rdram, ctx);
        goto after_21;
    // 0x43009724: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_21:
    // 0x43009728: b           L_43009748
    // 0x4300972C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009748;
    // 0x4300972C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009730:
    // 0x43009730: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x43009734: bne         $at, $zero, L_43009744
    if (ctx->r1 != 0) {
        // 0x43009738: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009744;
    }
    // 0x43009738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300973C: jal         0x43005078
    // 0x43009740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_22;
    // 0x43009740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
L_43009744:
    // 0x43009744: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009748:
    // 0x43009748: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300974C: jr          $ra
    // 0x43009750: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x43009750: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_enemy_world6_9754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43009758: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x4300975C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43009760: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x43009764: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009768: beq         $at, $zero, L_43009B40
    if (ctx->r1 == 0) {
        // 0x4300976C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_43009B40;
    }
    // 0x4300976C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43009770: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009774: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009778: addu        $at, $at, $t6
    gpr jr_addend_43009784 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4300977C: lw          $t6, -0x5C60($at)
    ctx->r14 = ADD32(ctx->r1, -0X5C60);
    // 0x43009780: nop

    // 0x43009784: jr          $t6
    // 0x43009788: nop

    switch (jr_addend_43009784 >> 2) {
        case 0: goto L_430097F0; break;
        case 1: goto L_43009808; break;
        case 2: goto L_43009B40; break;
        case 3: goto L_43009A6C; break;
        case 4: goto L_43009A80; break;
        case 5: goto L_43009AB8; break;
        case 6: goto L_43009B40; break;
        case 7: goto L_43009B40; break;
        case 8: goto L_43009B40; break;
        case 9: goto L_43009B40; break;
        case 10: goto L_43009B40; break;
        case 11: goto L_43009B40; break;
        case 12: goto L_43009B40; break;
        case 13: goto L_4300978C; break;
        case 14: goto L_43009AD4; break;
        case 15: goto L_43009B40; break;
        case 16: goto L_43009B40; break;
        case 17: goto L_43009B40; break;
        case 18: goto L_430097A4; break;
        case 19: goto L_43009B40; break;
        case 20: goto L_43009B40; break;
        case 21: goto L_43009B40; break;
        case 22: goto L_43009B40; break;
        case 23: goto L_43009A20; break;
        default: switch_error(__func__, 0x43009784, 0x4300A3A0);
    }
    // 0x43009788: nop

L_4300978C:
    // 0x4300978C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43009790: addiu       $t8, $t8, -0x6214
    ctx->r24 = ADD32(ctx->r24, -0X6214);
    // 0x43009794: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x43009798: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x4300979C: b           L_43009B40
    // 0x430097A0: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
        goto L_43009B40;
    // 0x430097A0: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
L_430097A4:
    // 0x430097A4: jal         0x43001F1C
    // 0x430097A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_1F1C(rdram, ctx);
        goto after_0;
    // 0x430097A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x430097AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097B0: jal         0x43002238
    // 0x430097B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_1;
    // 0x430097B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x430097B8: beq         $v0, $zero, L_430097C8
    if (ctx->r2 == 0) {
        // 0x430097BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430097C8;
    }
    // 0x430097BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097C0: jal         0x43004AD8
    // 0x430097C4: addiu       $a1, $zero, 0x4D7
    ctx->r5 = ADD32(0, 0X4D7);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_2;
    // 0x430097C4: addiu       $a1, $zero, 0x4D7
    ctx->r5 = ADD32(0, 0X4D7);
    after_2:
L_430097C8:
    // 0x430097C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430097CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097D0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x430097D4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x430097D8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430097DC: jal         0x430010F0
    // 0x430097E0: nop

    ovl_enemy_world6_10F0(rdram, ctx);
        goto after_3;
    // 0x430097E0: nop

    after_3:
    // 0x430097E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430097E8: b           L_43009B40
    // 0x430097EC: swc1        $f0, 0x24C($s0)
    MEM_W(0X24C, ctx->r16) = ctx->f0.u32l;
        goto L_43009B40;
    // 0x430097EC: swc1        $f0, 0x24C($s0)
    MEM_W(0X24C, ctx->r16) = ctx->f0.u32l;
L_430097F0:
    // 0x430097F0: jal         0x430014D8
    // 0x430097F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_14D8(rdram, ctx);
        goto after_4;
    // 0x430097F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x430097F8: jal         0x43004E48
    // 0x430097FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4E48(rdram, ctx);
        goto after_5;
    // 0x430097FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x43009800: b           L_43009B44
    // 0x43009804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009B44;
    // 0x43009804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009808:
    // 0x43009808: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x4300980C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43009810: beq         $v0, $at, L_43009828
    if (ctx->r2 == ctx->r1) {
        // 0x43009814: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_43009828;
    }
    // 0x43009814: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43009818: beq         $v0, $at, L_43009944
    if (ctx->r2 == ctx->r1) {
        // 0x4300981C: nop
    
            goto L_43009944;
    }
    // 0x4300981C: nop

    // 0x43009820: b           L_43009B44
    // 0x43009824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009B44;
    // 0x43009824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009828:
    // 0x43009828: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300982C: nop

    // 0x43009830: sltiu       $at, $v1, 0x1B
    ctx->r1 = ctx->r3 < 0X1B ? 1 : 0;
    // 0x43009834: beq         $at, $zero, L_4300991C
    if (ctx->r1 == 0) {
        // 0x43009838: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_4300991C;
    }
    // 0x43009838: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x4300983C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009840: addu        $at, $at, $t9
    gpr jr_addend_4300984C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x43009844: lw          $t9, -0x5C00($at)
    ctx->r25 = ADD32(ctx->r1, -0X5C00);
    // 0x43009848: nop

    // 0x4300984C: jr          $t9
    // 0x43009850: nop

    switch (jr_addend_4300984C >> 2) {
        case 0: goto L_43009854; break;
        case 1: goto L_4300991C; break;
        case 2: goto L_4300991C; break;
        case 3: goto L_4300991C; break;
        case 4: goto L_4300991C; break;
        case 5: goto L_4300991C; break;
        case 6: goto L_4300991C; break;
        case 7: goto L_4300991C; break;
        case 8: goto L_4300991C; break;
        case 9: goto L_4300991C; break;
        case 10: goto L_4300991C; break;
        case 11: goto L_4300991C; break;
        case 12: goto L_4300991C; break;
        case 13: goto L_43009888; break;
        case 14: goto L_430098B4; break;
        case 15: goto L_430098D0; break;
        case 16: goto L_4300991C; break;
        case 17: goto L_4300991C; break;
        case 18: goto L_4300991C; break;
        case 19: goto L_4300991C; break;
        case 20: goto L_4300991C; break;
        case 21: goto L_4300991C; break;
        case 22: goto L_4300991C; break;
        case 23: goto L_4300991C; break;
        case 24: goto L_430098E0; break;
        case 25: goto L_4300991C; break;
        case 26: goto L_430098F4; break;
        default: switch_error(__func__, 0x4300984C, 0x4300A400);
    }
    // 0x43009850: nop

L_43009854:
    // 0x43009854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009858: jal         0x43002238
    // 0x4300985C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_6;
    // 0x4300985C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x43009860: beq         $v0, $zero, L_43009870
    if (ctx->r2 == 0) {
        // 0x43009864: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009870;
    }
    // 0x43009864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009868: jal         0x43004AD8
    // 0x4300986C: addiu       $a1, $zero, 0x4D8
    ctx->r5 = ADD32(0, 0X4D8);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_7;
    // 0x4300986C: addiu       $a1, $zero, 0x4D8
    ctx->r5 = ADD32(0, 0X4D8);
    after_7:
L_43009870:
    // 0x43009870: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009874: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x43009878: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300987C: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x43009880: b           L_4300991C
    // 0x43009884: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
        goto L_4300991C;
    // 0x43009884: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
L_43009888:
    // 0x43009888: lui         $at, 0x4216
    ctx->r1 = S32(0X4216 << 16);
    // 0x4300988C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43009890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009894: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x43009898: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x4300989C: lui         $a3, 0x42D2
    ctx->r7 = S32(0X42D2 << 16);
    // 0x430098A0: jal         0x430010F0
    // 0x430098A4: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    ovl_enemy_world6_10F0(rdram, ctx);
        goto after_8;
    // 0x430098A4: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    after_8:
    // 0x430098A8: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430098AC: b           L_43009920
    // 0x430098B0: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
        goto L_43009920;
    // 0x430098B0: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_430098B4:
    // 0x430098B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430098B8: addiu       $a1, $zero, 0x20D
    ctx->r5 = ADD32(0, 0X20D);
    // 0x430098BC: jal         0x43001630
    // 0x430098C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world6_1630(rdram, ctx);
        goto after_9;
    // 0x430098C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x430098C4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430098C8: b           L_43009920
    // 0x430098CC: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
        goto L_43009920;
    // 0x430098CC: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_430098D0:
    // 0x430098D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430098D4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430098D8: b           L_4300991C
    // 0x430098DC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
        goto L_4300991C;
    // 0x430098DC: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_430098E0:
    // 0x430098E0: lui         $at, 0xC216
    ctx->r1 = S32(0XC216 << 16);
    // 0x430098E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430098E8: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430098EC: b           L_4300991C
    // 0x430098F0: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
        goto L_4300991C;
    // 0x430098F0: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
L_430098F4:
    // 0x430098F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430098F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430098FC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009900: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009904: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009908: jal         0x430010F0
    // 0x4300990C: nop

    ovl_enemy_world6_10F0(rdram, ctx);
        goto after_10;
    // 0x4300990C: nop

    after_10:
    // 0x43009910: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009914: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009918: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
L_4300991C:
    // 0x4300991C: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_43009920:
    // 0x43009920: bne         $at, $zero, L_43009B44
    if (ctx->r1 != 0) {
        // 0x43009924: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009B44;
    }
    // 0x43009924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009928: jal         0x43004D80
    // 0x4300992C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4D80(rdram, ctx);
        goto after_11;
    // 0x4300992C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x43009930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009934: jal         0x43005078
    // 0x43009938: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_12;
    // 0x43009938: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x4300993C: b           L_43009B44
    // 0x43009940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009B44;
    // 0x43009940: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009944:
    // 0x43009944: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x43009948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300994C: bne         $t0, $zero, L_430099AC
    if (ctx->r8 != 0) {
        // 0x43009950: addiu       $v0, $s0, 0x24C
        ctx->r2 = ADD32(ctx->r16, 0X24C);
            goto L_430099AC;
    }
    // 0x43009950: addiu       $v0, $s0, 0x24C
    ctx->r2 = ADD32(ctx->r16, 0X24C);
    // 0x43009954: jal         0x43002238
    // 0x43009958: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_13;
    // 0x43009958: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x4300995C: beq         $v0, $zero, L_4300996C
    if (ctx->r2 == 0) {
        // 0x43009960: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300996C;
    }
    // 0x43009960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009964: jal         0x43004AD8
    // 0x43009968: addiu       $a1, $zero, 0x4D8
    ctx->r5 = ADD32(0, 0X4D8);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_14;
    // 0x43009968: addiu       $a1, $zero, 0x4D8
    ctx->r5 = ADD32(0, 0X4D8);
    after_14:
L_4300996C:
    // 0x4300996C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x43009970: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43009974: lwc1        $f16, 0x1AC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1AC);
    // 0x43009978: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x4300997C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x43009980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009984: addiu       $a1, $zero, 0x217
    ctx->r5 = ADD32(0, 0X217);
    // 0x43009988: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4300998C: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x43009990: jal         0x43001630
    // 0x43009994: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    ovl_enemy_world6_1630(rdram, ctx);
        goto after_15;
    // 0x43009994: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    after_15:
    // 0x43009998: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x4300999C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x430099A0: nop

    // 0x430099A4: swc1        $f6, 0x24C($s0)
    MEM_W(0X24C, ctx->r16) = ctx->f6.u32l;
    // 0x430099A8: addiu       $v0, $s0, 0x24C
    ctx->r2 = ADD32(ctx->r16, 0X24C);
L_430099AC:
    // 0x430099AC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x430099B0: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x430099B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430099B8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x430099BC: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x430099C0: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x430099C4: nop

    // 0x430099C8: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x430099CC: nop

    // 0x430099D0: bc1t        L_43009A04
    if (c1cs) {
        // 0x430099D4: nop
    
            goto L_43009A04;
    }
    // 0x430099D4: nop

    // 0x430099D8: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x430099DC: nop

    // 0x430099E0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x430099E4: nop

    // 0x430099E8: bc1f        L_43009B44
    if (!c1cs) {
        // 0x430099EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009B44;
    }
    // 0x430099EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430099F0: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x430099F4: nop

    // 0x430099F8: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x430099FC: bne         $at, $zero, L_43009B44
    if (ctx->r1 != 0) {
        // 0x43009A00: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009B44;
    }
    // 0x43009A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009A04:
    // 0x43009A04: jal         0x43004D80
    // 0x43009A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4D80(rdram, ctx);
        goto after_16;
    // 0x43009A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x43009A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009A10: jal         0x43005078
    // 0x43009A14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_17;
    // 0x43009A14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x43009A18: b           L_43009B44
    // 0x43009A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009B44;
    // 0x43009A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009A20:
    // 0x43009A20: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x43009A24: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43009A28: bne         $t2, $at, L_43009B44
    if (ctx->r10 != ctx->r1) {
        // 0x43009A2C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009B44;
    }
    // 0x43009A2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009A30: lw          $t3, 0x4($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X4);
    // 0x43009A34: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x43009A38: beq         $t3, $at, L_43009A48
    if (ctx->r11 == ctx->r1) {
        // 0x43009A3C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_43009A48;
    }
    // 0x43009A3C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x43009A40: b           L_43009B40
    // 0x43009A44: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
        goto L_43009B40;
    // 0x43009A44: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
L_43009A48:
    // 0x43009A48: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009A4C: nop

    // 0x43009A50: slti        $at, $v1, 0xD
    ctx->r1 = SIGNED(ctx->r3) < 0XD ? 1 : 0;
    // 0x43009A54: bne         $at, $zero, L_43009A64
    if (ctx->r1 != 0) {
        // 0x43009A58: slti        $at, $v1, 0x1B
        ctx->r1 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
            goto L_43009A64;
    }
    // 0x43009A58: slti        $at, $v1, 0x1B
    ctx->r1 = SIGNED(ctx->r3) < 0X1B ? 1 : 0;
    // 0x43009A5C: bne         $at, $zero, L_43009B44
    if (ctx->r1 != 0) {
        // 0x43009A60: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009B44;
    }
    // 0x43009A60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009A64:
    // 0x43009A64: b           L_43009B40
    // 0x43009A68: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_43009B40;
    // 0x43009A68: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_43009A6C:
    // 0x43009A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009A70: jal         0x43004CE0
    // 0x43009A74: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    ovl_enemy_world6_4CE0(rdram, ctx);
        goto after_18;
    // 0x43009A74: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    after_18:
    // 0x43009A78: b           L_43009B44
    // 0x43009A7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009B44;
    // 0x43009A7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009A80:
    // 0x43009A80: lw          $t5, 0x60($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X60);
    // 0x43009A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009A88: bne         $t5, $zero, L_43009AA8
    if (ctx->r13 != 0) {
        // 0x43009A8C: nop
    
            goto L_43009AA8;
    }
    // 0x43009A8C: nop

    // 0x43009A90: jal         0x43002238
    // 0x43009A94: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_19;
    // 0x43009A94: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_19:
    // 0x43009A98: beq         $v0, $zero, L_43009AA8
    if (ctx->r2 == 0) {
        // 0x43009A9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009AA8;
    }
    // 0x43009A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009AA0: jal         0x43004AD8
    // 0x43009AA4: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_20;
    // 0x43009AA4: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    after_20:
L_43009AA8:
    // 0x43009AA8: jal         0x43004BF0
    // 0x43009AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4BF0(rdram, ctx);
        goto after_21;
    // 0x43009AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x43009AB0: b           L_43009B44
    // 0x43009AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009B44;
    // 0x43009AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009AB8:
    // 0x43009AB8: jal         0x43004C74
    // 0x43009ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world6_4C74(rdram, ctx);
        goto after_22;
    // 0x43009ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x43009AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009AC4: jal         0x43005078
    // 0x43009AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_23;
    // 0x43009AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x43009ACC: b           L_43009B44
    // 0x43009AD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009B44;
    // 0x43009AD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009AD4:
    // 0x43009AD4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009AD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009ADC: bne         $v1, $at, L_43009B2C
    if (ctx->r3 != ctx->r1) {
        // 0x43009AE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009B2C;
    }
    // 0x43009AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009AE4: lw          $t6, 0x1E4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1E4);
    // 0x43009AE8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43009AEC: bne         $t6, $at, L_43009AF8
    if (ctx->r14 != ctx->r1) {
        // 0x43009AF0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_43009AF8;
    }
    // 0x43009AF0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x43009AF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_43009AF8:
    // 0x43009AF8: jal         0x43002238
    // 0x43009AFC: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    ovl_enemy_world6_2238(rdram, ctx);
        goto after_24;
    // 0x43009AFC: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_24:
    // 0x43009B00: beq         $v0, $zero, L_43009B10
    if (ctx->r2 == 0) {
        // 0x43009B04: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009B10;
    }
    // 0x43009B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009B08: jal         0x43004AD8
    // 0x43009B0C: addiu       $a1, $zero, 0x4DA
    ctx->r5 = ADD32(0, 0X4DA);
    ovl_enemy_world6_4AD8(rdram, ctx);
        goto after_25;
    // 0x43009B0C: addiu       $a1, $zero, 0x4DA
    ctx->r5 = ADD32(0, 0X4DA);
    after_25:
L_43009B10:
    // 0x43009B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009B18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009B1C: jal         0x43001DE0
    // 0x43009B20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world6_1DE0(rdram, ctx);
        goto after_26;
    // 0x43009B20: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_26:
    // 0x43009B24: b           L_43009B44
    // 0x43009B28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009B44;
    // 0x43009B28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009B2C:
    // 0x43009B2C: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x43009B30: bne         $at, $zero, L_43009B40
    if (ctx->r1 != 0) {
        // 0x43009B34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009B40;
    }
    // 0x43009B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009B38: jal         0x43005078
    // 0x43009B3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world6_5078(rdram, ctx);
        goto after_27;
    // 0x43009B3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
L_43009B40:
    // 0x43009B40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009B44:
    // 0x43009B44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43009B48: jr          $ra
    // 0x43009B4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43009B4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world6_9B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009B58: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x43009B5C: nop

    // 0x43009B60: addiu       $t7, $t6, -0x24
    ctx->r15 = ADD32(ctx->r14, -0X24);
    // 0x43009B64: sltiu       $at, $t7, 0x1C
    ctx->r1 = ctx->r15 < 0X1C ? 1 : 0;
    // 0x43009B68: beq         $at, $zero, L_43009BC8
    if (ctx->r1 == 0) {
        // 0x43009B6C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43009BC8;
    }
    // 0x43009B6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43009B70: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009B74: addu        $at, $at, $t7
    gpr jr_addend_43009B80 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43009B78: lw          $t7, -0x5B94($at)
    ctx->r15 = ADD32(ctx->r1, -0X5B94);
    // 0x43009B7C: nop

    // 0x43009B80: jr          $t7
    // 0x43009B84: nop

    switch (jr_addend_43009B80 >> 2) {
        case 0: goto L_43009B88; break;
        case 1: goto L_43009B94; break;
        case 2: goto L_43009BA0; break;
        case 3: goto L_43009BAC; break;
        case 4: goto L_43009BB8; break;
        case 5: goto L_43009BC8; break;
        case 6: goto L_43009BC8; break;
        case 7: goto L_43009BC8; break;
        case 8: goto L_43009BC8; break;
        case 9: goto L_43009BC8; break;
        case 10: goto L_43009BC8; break;
        case 11: goto L_43009BC8; break;
        case 12: goto L_43009BC8; break;
        case 13: goto L_43009BC8; break;
        case 14: goto L_43009BC8; break;
        case 15: goto L_43009BC8; break;
        case 16: goto L_43009BC8; break;
        case 17: goto L_43009BC8; break;
        case 18: goto L_43009BC8; break;
        case 19: goto L_43009BC8; break;
        case 20: goto L_43009BC8; break;
        case 21: goto L_43009BC8; break;
        case 22: goto L_43009BC8; break;
        case 23: goto L_43009BC8; break;
        case 24: goto L_43009BC8; break;
        case 25: goto L_43009BC8; break;
        case 26: goto L_43009BC8; break;
        case 27: goto L_43009B94; break;
        default: switch_error(__func__, 0x43009B80, 0x4300A46C);
    }
    // 0x43009B84: nop

L_43009B88:
    // 0x43009B88: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009B8C: b           L_43009BC0
    // 0x43009B90: addiu       $v0, $v0, -0x68AC
    ctx->r2 = ADD32(ctx->r2, -0X68AC);
        goto L_43009BC0;
    // 0x43009B90: addiu       $v0, $v0, -0x68AC
    ctx->r2 = ADD32(ctx->r2, -0X68AC);
L_43009B94:
    // 0x43009B94: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009B98: b           L_43009BC0
    // 0x43009B9C: addiu       $v0, $v0, -0x6BA0
    ctx->r2 = ADD32(ctx->r2, -0X6BA0);
        goto L_43009BC0;
    // 0x43009B9C: addiu       $v0, $v0, -0x6BA0
    ctx->r2 = ADD32(ctx->r2, -0X6BA0);
L_43009BA0:
    // 0x43009BA0: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009BA4: b           L_43009BC0
    // 0x43009BA8: addiu       $v0, $v0, -0x6D98
    ctx->r2 = ADD32(ctx->r2, -0X6D98);
        goto L_43009BC0;
    // 0x43009BA8: addiu       $v0, $v0, -0x6D98
    ctx->r2 = ADD32(ctx->r2, -0X6D98);
L_43009BAC:
    // 0x43009BAC: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009BB0: b           L_43009BC0
    // 0x43009BB4: addiu       $v0, $v0, -0x712C
    ctx->r2 = ADD32(ctx->r2, -0X712C);
        goto L_43009BC0;
    // 0x43009BB4: addiu       $v0, $v0, -0x712C
    ctx->r2 = ADD32(ctx->r2, -0X712C);
L_43009BB8:
    // 0x43009BB8: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009BBC: addiu       $v0, $v0, -0x73A0
    ctx->r2 = ADD32(ctx->r2, -0X73A0);
L_43009BC0:
    // 0x43009BC0: jalr        $v0
    // 0x43009BC4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x43009BC4: nop

    after_0:
L_43009BC8:
    // 0x43009BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009BD0: jr          $ra
    // 0x43009BD4: nop

    return;
    // 0x43009BD4: nop

;}
RECOMP_FUNC void ovl_enemy_world7_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000000: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43000004: jr          $ra
    // 0x43000008: addiu       $v0, $v0, -0x74C0
    ctx->r2 = ADD32(ctx->r2, -0X74C0);
    return;
    // 0x43000008: addiu       $v0, $v0, -0x74C0
    ctx->r2 = ADD32(ctx->r2, -0X74C0);
    // 0x4300000C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000014: jr          $t1
    // 0x43000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000020: jr          $t1
    // 0x43000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_enemy_world7_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300002C: jr          $t1
    // 0x43000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_enemy_world7_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000038: jr          $t1
    // 0x4300003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_enemy_world7_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000044: jr          $t1
    // 0x43000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_enemy_world7_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000050: jr          $t1
    // 0x43000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_enemy_world7_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300005C: jr          $t1
    // 0x43000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_enemy_world7_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000068: jr          $t1
    // 0x4300006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_enemy_world7_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000074: jr          $t1
    // 0x43000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_enemy_world7_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000080: jr          $t1
    // 0x43000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_enemy_world7_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300008C: jr          $t1
    // 0x43000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_enemy_world7_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000098: jr          $t1
    // 0x4300009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_enemy_world7_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000A4: jr          $t1
    // 0x430000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_enemy_world7_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000B0: jr          $t1
    // 0x430000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_enemy_world7_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000BC: jr          $t1
    // 0x430000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_enemy_world7_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000C8: jr          $t1
    // 0x430000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_enemy_world7_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000D4: jr          $t1
    // 0x430000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_enemy_world7_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000E0: jr          $t1
    // 0x430000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_enemy_world7_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000EC: jr          $t1
    // 0x430000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_enemy_world7_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430000F8: jr          $t1
    // 0x430000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_enemy_world7_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000104: jr          $t1
    // 0x43000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_enemy_world7_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000110: jr          $t1
    // 0x43000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_enemy_world7_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300011C: jr          $t1
    // 0x43000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_enemy_world7_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000128: jr          $t1
    // 0x4300012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_enemy_world7_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000134: jr          $t1
    // 0x43000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_enemy_world7_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000140: jr          $t1
    // 0x43000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_enemy_world7_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300014C: jr          $t1
    // 0x43000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_enemy_world7_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000158: jr          $t1
    // 0x4300015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_enemy_world7_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000164: jr          $t1
    // 0x43000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
RECOMP_FUNC void ovl_enemy_world7_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000170: jr          $t1
    // 0x43000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
RECOMP_FUNC void ovl_enemy_world7_178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000178: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300017C: jr          $t1
    // 0x43000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
;}
RECOMP_FUNC void ovl_enemy_world7_184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000184: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000188: jr          $t1
    // 0x4300018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
;}
RECOMP_FUNC void ovl_enemy_world7_190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000190: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000194: jr          $t1
    // 0x43000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
;}
RECOMP_FUNC void ovl_enemy_world7_19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300019C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001A0: jr          $t1
    // 0x430001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
;}
RECOMP_FUNC void ovl_enemy_world7_1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001AC: jr          $t1
    // 0x430001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
;}
RECOMP_FUNC void ovl_enemy_world7_1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001B8: jr          $t1
    // 0x430001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
;}
