#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world2_8984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008984: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43008988: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x4300898C: lw          $v1, -0x56CC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X56CC);
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
RECOMP_FUNC void ovl_enemy_world2_89E8(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_enemy_world2_5250(rdram, ctx);
        goto after_0;
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43008A10: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43008A14: lw          $s4, -0x56E0($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X56E0);
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
    ovl_enemy_world2_8984(rdram, ctx);
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
    ovl_enemy_world2_5218(rdram, ctx);
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
    ovl_enemy_world2_5218(rdram, ctx);
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

    ovl_enemy_world2_88BC(rdram, ctx);
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

    ovl_enemy_world2_2C70(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world2_8B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_43008B18:
    // 0x43008B18: jal         0x430089E8
    // 0x43008B1C: nop

    ovl_enemy_world2_89E8(rdram, ctx);
        goto after_0;
    // 0x43008B1C: nop

    after_0:
    // 0x43008B20: jal         0x4300085C
    // 0x43008B24: nop

    ovl_enemy_world2_85C(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world2_8B40(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x43008B68: lw          $t7, -0x5A18($at)
    ctx->r15 = ADD32(ctx->r1, -0X5A18);
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
        default: switch_error(__func__, 0x43008B70, 0x4300A5E8);
    }
    // 0x43008B74: nop

L_43008B78:
    // 0x43008B78: jal         0x4300528C
    // 0x43008B7C: nop

    ovl_enemy_world2_528C(rdram, ctx);
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

    ovl_enemy_world2_5348(rdram, ctx);
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

    ovl_enemy_world2_53BC(rdram, ctx);
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

    ovl_enemy_world2_5400(rdram, ctx);
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

    ovl_enemy_world2_5424(rdram, ctx);
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

    ovl_enemy_world2_547C(rdram, ctx);
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

    ovl_enemy_world2_5924(rdram, ctx);
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

    ovl_enemy_world2_62D8(rdram, ctx);
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

    ovl_enemy_world2_6368(rdram, ctx);
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

    ovl_enemy_world2_63CC(rdram, ctx);
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

    ovl_enemy_world2_6448(rdram, ctx);
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

    ovl_enemy_world2_6488(rdram, ctx);
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

    ovl_enemy_world2_64EC(rdram, ctx);
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

    ovl_enemy_world2_66D0(rdram, ctx);
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
RECOMP_FUNC void ovl_enemy_world2_8C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008C60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008C64: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43008C68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008C6C: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x43008C70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008C74: beq         $at, $zero, L_43008E34
    if (ctx->r1 == 0) {
        // 0x43008C78: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_43008E34;
    }
    // 0x43008C78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008C7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008C80: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008C84: addu        $at, $at, $t6
    gpr jr_addend_43008C90 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008C88: lw          $t6, -0x59B0($at)
    ctx->r14 = ADD32(ctx->r1, -0X59B0);
    // 0x43008C8C: nop

    // 0x43008C90: jr          $t6
    // 0x43008C94: nop

    switch (jr_addend_43008C90 >> 2) {
        case 0: goto L_43008D04; break;
        case 1: goto L_43008D1C; break;
        case 2: goto L_43008E34; break;
        case 3: goto L_43008E34; break;
        case 4: goto L_43008E34; break;
        case 5: goto L_43008E34; break;
        case 6: goto L_43008E34; break;
        case 7: goto L_43008E34; break;
        case 8: goto L_43008E34; break;
        case 9: goto L_43008E34; break;
        case 10: goto L_43008E34; break;
        case 11: goto L_43008E34; break;
        case 12: goto L_43008E34; break;
        case 13: goto L_43008C98; break;
        case 14: goto L_43008DF8; break;
        case 15: goto L_43008E34; break;
        case 16: goto L_43008E34; break;
        case 17: goto L_43008E34; break;
        case 18: goto L_43008CCC; break;
        case 19: goto L_43008E34; break;
        case 20: goto L_43008E34; break;
        case 21: goto L_43008E34; break;
        case 22: goto L_43008E34; break;
        case 23: goto L_43008DC4; break;
        default: switch_error(__func__, 0x43008C90, 0x4300A650);
    }
    // 0x43008C94: nop

L_43008C98:
    // 0x43008C98: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43008C9C: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x43008CA0: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43008CA4: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43008CA8: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x43008CAC: addiu       $t8, $t8, -0x5E50
    ctx->r24 = ADD32(ctx->r24, -0X5E50);
    // 0x43008CB0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x43008CB4: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x43008CB8: or          $t2, $t0, $at
    ctx->r10 = ctx->r8 | ctx->r1;
    // 0x43008CBC: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43008CC0: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x43008CC4: b           L_43008E34
    // 0x43008CC8: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
        goto L_43008E34;
    // 0x43008CC8: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
L_43008CCC:
    // 0x43008CCC: jal         0x43001F1C
    // 0x43008CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_1F1C(rdram, ctx);
        goto after_0;
    // 0x43008CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43008CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CD8: jal         0x43002238
    // 0x43008CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_1;
    // 0x43008CDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x43008CE0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CE8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43008CEC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43008CF0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008CF4: jal         0x430010F0
    // 0x43008CF8: nop

    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_2;
    // 0x43008CF8: nop

    after_2:
    // 0x43008CFC: b           L_43008E38
    // 0x43008D00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008E38;
    // 0x43008D00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008D04:
    // 0x43008D04: jal         0x430014D8
    // 0x43008D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_14D8(rdram, ctx);
        goto after_3;
    // 0x43008D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008D0C: jal         0x43004E48
    // 0x43008D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4E48(rdram, ctx);
        goto after_4;
    // 0x43008D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43008D14: b           L_43008E38
    // 0x43008D18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008E38;
    // 0x43008D18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008D1C:
    // 0x43008D1C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008D20: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x43008D24: beq         $v0, $zero, L_43008D40
    if (ctx->r2 == 0) {
        // 0x43008D28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008D40;
    }
    // 0x43008D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D2C: beq         $v0, $at, L_43008D58
    if (ctx->r2 == ctx->r1) {
        // 0x43008D30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008D58;
    }
    // 0x43008D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008D38: b           L_43008D8C
    // 0x43008D3C: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
        goto L_43008D8C;
    // 0x43008D3C: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_43008D40:
    // 0x43008D40: jal         0x43002238
    // 0x43008D44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_5;
    // 0x43008D44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x43008D48: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008D4C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008D50: b           L_43008D8C
    // 0x43008D54: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
        goto L_43008D8C;
    // 0x43008D54: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_43008D58:
    // 0x43008D58: addiu       $a1, $zero, 0x203
    ctx->r5 = ADD32(0, 0X203);
    // 0x43008D5C: jal         0x43001630
    // 0x43008D60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world2_1630(rdram, ctx);
        goto after_6;
    // 0x43008D60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x43008D64: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D6C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008D70: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x43008D74: jal         0x430010F0
    // 0x43008D78: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_7;
    // 0x43008D78: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_7:
    // 0x43008D7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008D80: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008D84: nop

    // 0x43008D88: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_43008D8C:
    // 0x43008D8C: bne         $at, $zero, L_43008E38
    if (ctx->r1 != 0) {
        // 0x43008D90: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008E38;
    }
    // 0x43008D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008D94: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43008D98: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43008D9C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008DA0: jal         0x430010F0
    // 0x43008DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_8;
    // 0x43008DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x43008DA8: jal         0x43004D80
    // 0x43008DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4D80(rdram, ctx);
        goto after_9;
    // 0x43008DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x43008DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DB4: jal         0x43005078
    // 0x43008DB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_10;
    // 0x43008DB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x43008DBC: b           L_43008E38
    // 0x43008DC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008E38;
    // 0x43008DC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008DC4:
    // 0x43008DC4: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x43008DC8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43008DCC: bne         $t3, $at, L_43008E38
    if (ctx->r11 != ctx->r1) {
        // 0x43008DD0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008E38;
    }
    // 0x43008DD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008DD4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008DD8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x43008DDC: slti        $at, $v0, 0x1D
    ctx->r1 = SIGNED(ctx->r2) < 0X1D ? 1 : 0;
    // 0x43008DE0: bne         $at, $zero, L_43008DF0
    if (ctx->r1 != 0) {
        // 0x43008DE4: slti        $at, $v0, 0x3D
        ctx->r1 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
            goto L_43008DF0;
    }
    // 0x43008DE4: slti        $at, $v0, 0x3D
    ctx->r1 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x43008DE8: bne         $at, $zero, L_43008E38
    if (ctx->r1 != 0) {
        // 0x43008DEC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008E38;
    }
    // 0x43008DEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008DF0:
    // 0x43008DF0: b           L_43008E34
    // 0x43008DF4: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
        goto L_43008E34;
    // 0x43008DF4: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
L_43008DF8:
    // 0x43008DF8: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008DFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008E00: bne         $v0, $at, L_43008E20
    if (ctx->r2 != ctx->r1) {
        // 0x43008E04: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008E20;
    }
    // 0x43008E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43008E0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43008E10: jal         0x43001DE0
    // 0x43008E14: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world2_1DE0(rdram, ctx);
        goto after_11;
    // 0x43008E14: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x43008E18: b           L_43008E38
    // 0x43008E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43008E38;
    // 0x43008E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008E20:
    // 0x43008E20: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43008E24: bne         $at, $zero, L_43008E34
    if (ctx->r1 != 0) {
        // 0x43008E28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43008E34;
    }
    // 0x43008E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E2C: jal         0x43005078
    // 0x43008E30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_12;
    // 0x43008E30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_43008E34:
    // 0x43008E34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008E38:
    // 0x43008E38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008E3C: jr          $ra
    // 0x43008E40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008E40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world2_8E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008E44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008E48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008E4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43008E50: lw          $t6, 0x24C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24C);
    // 0x43008E54: addiu       $a1, $zero, 0x46F
    ctx->r5 = ADD32(0, 0X46F);
    // 0x43008E58: bne         $t6, $zero, L_43008E8C
    if (ctx->r14 != 0) {
        // 0x43008E5C: nop
    
            goto L_43008E8C;
    }
    // 0x43008E5C: nop

    // 0x43008E60: addiu       $a1, $zero, 0x46D
    ctx->r5 = ADD32(0, 0X46D);
    // 0x43008E64: jal         0x43004AD8
    // 0x43008E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world2_4AD8(rdram, ctx);
        goto after_0;
    // 0x43008E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43008E6C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x43008E70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008E74: beq         $t7, $zero, L_43008EB0
    if (ctx->r15 == 0) {
        // 0x43008E78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008EB0;
    }
    // 0x43008E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008E7C: jal         0x43004AD8
    // 0x43008E80: addiu       $a1, $zero, 0x46E
    ctx->r5 = ADD32(0, 0X46E);
    ovl_enemy_world2_4AD8(rdram, ctx);
        goto after_1;
    // 0x43008E80: addiu       $a1, $zero, 0x46E
    ctx->r5 = ADD32(0, 0X46E);
    after_1:
    // 0x43008E84: b           L_43008EB0
    // 0x43008E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008EB0;
    // 0x43008E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008E8C:
    // 0x43008E8C: jal         0x43004AD8
    // 0x43008E90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world2_4AD8(rdram, ctx);
        goto after_2;
    // 0x43008E90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x43008E94: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x43008E98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008E9C: beq         $t8, $zero, L_43008EB0
    if (ctx->r24 == 0) {
        // 0x43008EA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008EB0;
    }
    // 0x43008EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008EA4: jal         0x43004AD8
    // 0x43008EA8: addiu       $a1, $zero, 0x470
    ctx->r5 = ADD32(0, 0X470);
    ovl_enemy_world2_4AD8(rdram, ctx);
        goto after_3;
    // 0x43008EA8: addiu       $a1, $zero, 0x470
    ctx->r5 = ADD32(0, 0X470);
    after_3:
    // 0x43008EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008EB0:
    // 0x43008EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008EB4: jr          $ra
    // 0x43008EB8: nop

    return;
    // 0x43008EB8: nop

;}
RECOMP_FUNC void ovl_enemy_world2_8EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008EBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008EC0: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43008EC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43008EC8: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x43008ECC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008ED0: beq         $at, $zero, L_43009134
    if (ctx->r1 == 0) {
        // 0x43008ED4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_43009134;
    }
    // 0x43008ED4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43008ED8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008EDC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008EE0: addu        $at, $at, $t6
    gpr jr_addend_43008EEC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008EE4: lw          $t6, -0x5950($at)
    ctx->r14 = ADD32(ctx->r1, -0X5950);
    // 0x43008EE8: nop

    // 0x43008EEC: jr          $t6
    // 0x43008EF0: nop

    switch (jr_addend_43008EEC >> 2) {
        case 0: goto L_43008F80; break;
        case 1: goto L_43008F98; break;
        case 2: goto L_43009134; break;
        case 3: goto L_43009134; break;
        case 4: goto L_43009134; break;
        case 5: goto L_43009134; break;
        case 6: goto L_43009134; break;
        case 7: goto L_43009134; break;
        case 8: goto L_43009134; break;
        case 9: goto L_43009134; break;
        case 10: goto L_43009134; break;
        case 11: goto L_43009134; break;
        case 12: goto L_43009134; break;
        case 13: goto L_43008EF4; break;
        case 14: goto L_430090C8; break;
        case 15: goto L_43009134; break;
        case 16: goto L_43009134; break;
        case 17: goto L_43009134; break;
        case 18: goto L_43008F28; break;
        case 19: goto L_43009134; break;
        case 20: goto L_43009134; break;
        case 21: goto L_43009134; break;
        case 22: goto L_43009134; break;
        case 23: goto L_43009094; break;
        default: switch_error(__func__, 0x43008EEC, 0x4300A6B0);
    }
    // 0x43008EF0: nop

L_43008EF4:
    // 0x43008EF4: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x43008EF8: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x43008EFC: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x43008F00: sw          $t8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r24;
    // 0x43008F04: sw          $zero, 0x24C($s0)
    MEM_W(0X24C, ctx->r16) = 0;
    // 0x43008F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F0C: jal         0x43008E44
    // 0x43008F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_8E44(rdram, ctx);
        goto after_0;
    // 0x43008F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x43008F14: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43008F18: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x43008F1C: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43008F20: b           L_43009134
    // 0x43008F24: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
        goto L_43009134;
    // 0x43008F24: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
L_43008F28:
    // 0x43008F28: jal         0x43001F1C
    // 0x43008F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_1F1C(rdram, ctx);
        goto after_1;
    // 0x43008F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x43008F30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008F34: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43008F38: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43008F3C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x43008F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F44: addiu       $a1, $zero, 0x46C
    ctx->r5 = ADD32(0, 0X46C);
    // 0x43008F48: jal         0x43002200
    // 0x43008F4C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_enemy_world2_2200(rdram, ctx);
        goto after_2;
    // 0x43008F4C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x43008F50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F54: jal         0x43008E44
    // 0x43008F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_8E44(rdram, ctx);
        goto after_3;
    // 0x43008F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x43008F5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F64: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43008F68: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43008F6C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008F70: jal         0x430010F0
    // 0x43008F74: nop

    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_4;
    // 0x43008F74: nop

    after_4:
    // 0x43008F78: b           L_43009138
    // 0x43008F7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009138;
    // 0x43008F7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008F80:
    // 0x43008F80: jal         0x430014D8
    // 0x43008F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_14D8(rdram, ctx);
        goto after_5;
    // 0x43008F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x43008F88: jal         0x43004E48
    // 0x43008F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4E48(rdram, ctx);
        goto after_6;
    // 0x43008F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43008F90: b           L_43009138
    // 0x43008F94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009138;
    // 0x43008F94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008F98:
    // 0x43008F98: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43008F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FA0: beq         $v0, $zero, L_43008FD4
    if (ctx->r2 == 0) {
        // 0x43008FA4: addiu       $a1, $zero, 0x52F
        ctx->r5 = ADD32(0, 0X52F);
            goto L_43008FD4;
    }
    // 0x43008FA4: addiu       $a1, $zero, 0x52F
    ctx->r5 = ADD32(0, 0X52F);
    // 0x43008FA8: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x43008FAC: beq         $v0, $at, L_43009010
    if (ctx->r2 == ctx->r1) {
        // 0x43008FB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009010;
    }
    // 0x43008FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FB4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x43008FB8: beq         $v0, $at, L_43009028
    if (ctx->r2 == ctx->r1) {
        // 0x43008FBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009028;
    }
    // 0x43008FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FC0: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x43008FC4: beq         $v0, $at, L_43009048
    if (ctx->r2 == ctx->r1) {
        // 0x43008FC8: nop
    
            goto L_43009048;
    }
    // 0x43008FC8: nop

    // 0x43008FCC: b           L_43009070
    // 0x43008FD0: slti        $at, $v0, 0x4E
    ctx->r1 = SIGNED(ctx->r2) < 0X4E ? 1 : 0;
        goto L_43009070;
    // 0x43008FD0: slti        $at, $v0, 0x4E
    ctx->r1 = SIGNED(ctx->r2) < 0X4E ? 1 : 0;
L_43008FD4:
    // 0x43008FD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008FD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43008FDC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43008FE0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x43008FE4: jal         0x43002200
    // 0x43008FE8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_enemy_world2_2200(rdram, ctx);
        goto after_7;
    // 0x43008FE8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_7:
    // 0x43008FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FF0: jal         0x43004AD8
    // 0x43008FF4: addiu       $a1, $zero, 0x471
    ctx->r5 = ADD32(0, 0X471);
    ovl_enemy_world2_4AD8(rdram, ctx);
        goto after_8;
    // 0x43008FF4: addiu       $a1, $zero, 0x471
    ctx->r5 = ADD32(0, 0X471);
    after_8:
    // 0x43008FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008FFC: jal         0x43008E44
    // 0x43009000: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_8E44(rdram, ctx);
        goto after_9;
    // 0x43009000: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x43009004: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009008: b           L_43009070
    // 0x4300900C: slti        $at, $v0, 0x4E
    ctx->r1 = SIGNED(ctx->r2) < 0X4E ? 1 : 0;
        goto L_43009070;
    // 0x4300900C: slti        $at, $v0, 0x4E
    ctx->r1 = SIGNED(ctx->r2) < 0X4E ? 1 : 0;
L_43009010:
    // 0x43009010: addiu       $a1, $zero, 0x1FC
    ctx->r5 = ADD32(0, 0X1FC);
    // 0x43009014: jal         0x43001630
    // 0x43009018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world2_1630(rdram, ctx);
        goto after_10;
    // 0x43009018: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x4300901C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009020: b           L_43009070
    // 0x43009024: slti        $at, $v0, 0x4E
    ctx->r1 = SIGNED(ctx->r2) < 0X4E ? 1 : 0;
        goto L_43009070;
    // 0x43009024: slti        $at, $v0, 0x4E
    ctx->r1 = SIGNED(ctx->r2) < 0X4E ? 1 : 0;
L_43009028:
    // 0x43009028: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300902C: lui         $a1, 0x42BE
    ctx->r5 = S32(0X42BE << 16);
    // 0x43009030: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009034: jal         0x430010F0
    // 0x43009038: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_11;
    // 0x43009038: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_11:
    // 0x4300903C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009040: b           L_43009070
    // 0x43009044: slti        $at, $v0, 0x4E
    ctx->r1 = SIGNED(ctx->r2) < 0X4E ? 1 : 0;
        goto L_43009070;
    // 0x43009044: slti        $at, $v0, 0x4E
    ctx->r1 = SIGNED(ctx->r2) < 0X4E ? 1 : 0;
L_43009048:
    // 0x43009048: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300904C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009050: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009054: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009058: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4300905C: jal         0x430010F0
    // 0x43009060: nop

    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_12;
    // 0x43009060: nop

    after_12:
    // 0x43009064: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009068: nop

    // 0x4300906C: slti        $at, $v0, 0x4E
    ctx->r1 = SIGNED(ctx->r2) < 0X4E ? 1 : 0;
L_43009070:
    // 0x43009070: bne         $at, $zero, L_43009138
    if (ctx->r1 != 0) {
        // 0x43009074: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009138;
    }
    // 0x43009074: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009078: jal         0x43004D80
    // 0x4300907C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4D80(rdram, ctx);
        goto after_13;
    // 0x4300907C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x43009080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009084: jal         0x43005078
    // 0x43009088: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_14;
    // 0x43009088: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x4300908C: b           L_43009138
    // 0x43009090: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009138;
    // 0x43009090: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009094:
    // 0x43009094: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x43009098: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4300909C: bne         $t3, $at, L_43009138
    if (ctx->r11 != ctx->r1) {
        // 0x430090A0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009138;
    }
    // 0x430090A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430090A4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430090A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x430090AC: slti        $at, $v0, 0x1E
    ctx->r1 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x430090B0: bne         $at, $zero, L_430090C0
    if (ctx->r1 != 0) {
        // 0x430090B4: slti        $at, $v0, 0x3D
        ctx->r1 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
            goto L_430090C0;
    }
    // 0x430090B4: slti        $at, $v0, 0x3D
    ctx->r1 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x430090B8: bne         $at, $zero, L_43009138
    if (ctx->r1 != 0) {
        // 0x430090BC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009138;
    }
    // 0x430090BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430090C0:
    // 0x430090C0: b           L_43009134
    // 0x430090C4: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
        goto L_43009134;
    // 0x430090C4: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
L_430090C8:
    // 0x430090C8: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430090CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x430090D0: bne         $v1, $v0, L_43009124
    if (ctx->r3 != ctx->r2) {
        // 0x430090D4: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_43009124;
    }
    // 0x430090D4: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x430090D8: sw          $v1, 0x24C($s0)
    MEM_W(0X24C, ctx->r16) = ctx->r3;
    // 0x430090DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430090E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430090E4: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    // 0x430090E8: jal         0x43001DE0
    // 0x430090EC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    ovl_enemy_world2_1DE0(rdram, ctx);
        goto after_15;
    // 0x430090EC: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    after_15:
    // 0x430090F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430090F4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x430090F8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x430090FC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x43009100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009104: addiu       $a1, $zero, 0x46C
    ctx->r5 = ADD32(0, 0X46C);
    // 0x43009108: jal         0x43002200
    // 0x4300910C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_enemy_world2_2200(rdram, ctx);
        goto after_16;
    // 0x4300910C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_16:
    // 0x43009110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009114: jal         0x43008E44
    // 0x43009118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_8E44(rdram, ctx);
        goto after_17;
    // 0x43009118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x4300911C: b           L_43009138
    // 0x43009120: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009138;
    // 0x43009120: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009124:
    // 0x43009124: bne         $at, $zero, L_43009134
    if (ctx->r1 != 0) {
        // 0x43009128: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009134;
    }
    // 0x43009128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300912C: jal         0x43005078
    // 0x43009130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_18;
    // 0x43009130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
L_43009134:
    // 0x43009134: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009138:
    // 0x43009138: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4300913C: jr          $ra
    // 0x43009140: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43009140: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world2_9144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300914C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43009150: jal         0x43000F50
    // 0x43009154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_F50(rdram, ctx);
        goto after_0;
    // 0x43009154: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x43009158: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4300915C: addiu       $a1, $zero, 0x213
    ctx->r5 = ADD32(0, 0X213);
    // 0x43009160: lw          $t6, 0x25C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X25C);
    // 0x43009164: nop

    // 0x43009168: beq         $t6, $zero, L_4300917C
    if (ctx->r14 == 0) {
        // 0x4300916C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300917C;
    }
    // 0x4300916C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009170: jal         0x43001630
    // 0x43009174: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world2_1630(rdram, ctx);
        goto after_1;
    // 0x43009174: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x43009178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300917C:
    // 0x4300917C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009180: jr          $ra
    // 0x43009184: nop

    return;
    // 0x43009184: nop

;}
RECOMP_FUNC void ovl_enemy_world2_9188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009188: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4300918C: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43009190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43009194: sltiu       $at, $t6, 0x1A
    ctx->r1 = ctx->r14 < 0X1A ? 1 : 0;
    // 0x43009198: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300919C: beq         $at, $zero, L_430094B8
    if (ctx->r1 == 0) {
        // 0x430091A0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_430094B8;
    }
    // 0x430091A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430091A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x430091A8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430091AC: addu        $at, $at, $t6
    gpr jr_addend_430091B8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x430091B0: lw          $t6, -0x58F0($at)
    ctx->r14 = ADD32(ctx->r1, -0X58F0);
    // 0x430091B4: nop

    // 0x430091B8: jr          $t6
    // 0x430091BC: nop

    switch (jr_addend_430091B8 >> 2) {
        case 0: goto L_43009274; break;
        case 1: goto L_430092CC; break;
        case 2: goto L_430094B8; break;
        case 3: goto L_430093DC; break;
        case 4: goto L_430093F8; break;
        case 5: goto L_4300942C; break;
        case 6: goto L_430094B8; break;
        case 7: goto L_430094B8; break;
        case 8: goto L_430094B8; break;
        case 9: goto L_430094B8; break;
        case 10: goto L_430094B8; break;
        case 11: goto L_430094B8; break;
        case 12: goto L_430094B8; break;
        case 13: goto L_430091C0; break;
        case 14: goto L_43009448; break;
        case 15: goto L_43009224; break;
        case 16: goto L_430094B0; break;
        case 17: goto L_430094B8; break;
        case 18: goto L_430091E4; break;
        case 19: goto L_430094B8; break;
        case 20: goto L_430094B8; break;
        case 21: goto L_430094B8; break;
        case 22: goto L_430094B8; break;
        case 23: goto L_430094B8; break;
        case 24: goto L_430094B8; break;
        case 25: goto L_43009238; break;
        default: switch_error(__func__, 0x430091B8, 0x4300A710);
    }
    // 0x430091BC: nop

L_430091C0:
    // 0x430091C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430091C4: jal         0x43001428
    // 0x430091C8: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    ovl_enemy_world2_1428(rdram, ctx);
        goto after_0;
    // 0x430091C8: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    after_0:
    // 0x430091CC: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430091D0: addiu       $t8, $t8, -0x5E4C
    ctx->r24 = ADD32(ctx->r24, -0X5E4C);
    // 0x430091D4: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x430091D8: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x430091DC: b           L_430094B8
    // 0x430091E0: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
        goto L_430094B8;
    // 0x430091E0: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
L_430091E4:
    // 0x430091E4: jal         0x43001F1C
    // 0x430091E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_1F1C(rdram, ctx);
        goto after_1;
    // 0x430091E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430091EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430091F0: jal         0x43002238
    // 0x430091F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_2;
    // 0x430091F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x430091F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430091FC: jal         0x43000F50
    // 0x43009200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_F50(rdram, ctx);
        goto after_3;
    // 0x43009200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x43009204: lw          $t9, 0x25C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X25C);
    // 0x43009208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300920C: beq         $t9, $zero, L_430094B8
    if (ctx->r25 == 0) {
        // 0x43009210: addiu       $a1, $zero, 0x213
        ctx->r5 = ADD32(0, 0X213);
            goto L_430094B8;
    }
    // 0x43009210: addiu       $a1, $zero, 0x213
    ctx->r5 = ADD32(0, 0X213);
    // 0x43009214: jal         0x43001630
    // 0x43009218: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world2_1630(rdram, ctx);
        goto after_4;
    // 0x43009218: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x4300921C: b           L_430094BC
    // 0x43009220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094BC;
    // 0x43009220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009224:
    // 0x43009224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009228: jal         0x43000F50
    // 0x4300922C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world2_F50(rdram, ctx);
        goto after_5;
    // 0x4300922C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x43009230: b           L_430094BC
    // 0x43009234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094BC;
    // 0x43009234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009238:
    // 0x43009238: lw          $t0, 0x54($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X54);
    // 0x4300923C: nop

    // 0x43009240: sll         $t1, $t0, 13
    ctx->r9 = S32(ctx->r8 << 13);
    // 0x43009244: bgez        $t1, L_430094BC
    if (SIGNED(ctx->r9) >= 0) {
        // 0x43009248: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430094BC;
    }
    // 0x43009248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300924C: lw          $t2, 0x8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X8);
    // 0x43009250: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009254: bne         $t2, $at, L_430094BC
    if (ctx->r10 != ctx->r1) {
        // 0x43009258: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430094BC;
    }
    // 0x43009258: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300925C: lw          $t3, 0xC($a2)
    ctx->r11 = MEM_W(ctx->r6, 0XC);
    // 0x43009260: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43009264: bne         $t3, $at, L_430094BC
    if (ctx->r11 != ctx->r1) {
        // 0x43009268: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430094BC;
    }
    // 0x43009268: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300926C: b           L_430094B8
    // 0x43009270: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
        goto L_430094B8;
    // 0x43009270: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
L_43009274:
    // 0x43009274: jal         0x43004E48
    // 0x43009278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4E48(rdram, ctx);
        goto after_6;
    // 0x43009278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x4300927C: jal         0x430014D8
    // 0x43009280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_14D8(rdram, ctx);
        goto after_7;
    // 0x43009280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x43009284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009288: jal         0x43000F50
    // 0x4300928C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world2_F50(rdram, ctx);
        goto after_8;
    // 0x4300928C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x43009290: lw          $t4, 0x25C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X25C);
    // 0x43009294: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x43009298: beq         $t4, $zero, L_430092BC
    if (ctx->r12 == 0) {
        // 0x4300929C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430092BC;
    }
    // 0x4300929C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430092A0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430092A4: lwc1        $f4, -0x5888($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5888);
    // 0x430092A8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430092AC: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x430092B0: lwc1        $f6, -0x5884($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5884);
    // 0x430092B4: b           L_430094B8
    // 0x430092B8: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
        goto L_430094B8;
    // 0x430092B8: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_430092BC:
    // 0x430092BC: jal         0x43005078
    // 0x430092C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_9;
    // 0x430092C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x430092C4: b           L_430094BC
    // 0x430092C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094BC;
    // 0x430092C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430092CC:
    // 0x430092CC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430092D0: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x430092D4: beq         $v1, $zero, L_430092EC
    if (ctx->r3 == 0) {
        // 0x430092D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430092EC;
    }
    // 0x430092D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430092DC: beq         $v1, $at, L_43009300
    if (ctx->r3 == ctx->r1) {
        // 0x430092E0: nop
    
            goto L_43009300;
    }
    // 0x430092E0: nop

    // 0x430092E4: b           L_43009314
    // 0x430092E8: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43009314;
    // 0x430092E8: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_430092EC:
    // 0x430092EC: jal         0x43002238
    // 0x430092F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_10;
    // 0x430092F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x430092F4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430092F8: b           L_43009314
    // 0x430092FC: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43009314;
    // 0x430092FC: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43009300:
    // 0x43009300: jal         0x43009144
    // 0x43009304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_9144(rdram, ctx);
        goto after_11;
    // 0x43009304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x43009308: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300930C: nop

    // 0x43009310: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43009314:
    // 0x43009314: bne         $at, $zero, L_4300933C
    if (ctx->r1 != 0) {
        // 0x43009318: slti        $at, $v1, 0x6
        ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_4300933C;
    }
    // 0x43009318: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x4300931C: jal         0x43004D80
    // 0x43009320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4D80(rdram, ctx);
        goto after_12;
    // 0x43009320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x43009324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009328: jal         0x43005078
    // 0x4300932C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_13;
    // 0x4300932C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x43009330: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009334: nop

    // 0x43009338: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
L_4300933C:
    // 0x4300933C: bne         $at, $zero, L_430094B8
    if (ctx->r1 != 0) {
        // 0x43009340: addiu       $v1, $s0, 0x24C
        ctx->r3 = ADD32(ctx->r16, 0X24C);
            goto L_430094B8;
    }
    // 0x43009340: addiu       $v1, $s0, 0x24C
    ctx->r3 = ADD32(ctx->r16, 0X24C);
    // 0x43009344: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x43009348: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4300934C: beq         $a1, $at, L_430094B8
    if (ctx->r5 == ctx->r1) {
        // 0x43009350: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430094B8;
    }
    // 0x43009350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009354: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x43009358: lw          $a3, 0x8($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X8);
    // 0x4300935C: jal         0x4300114C
    // 0x43009360: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    ovl_enemy_world2_114C(rdram, ctx);
        goto after_14;
    // 0x43009360: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_14:
    // 0x43009364: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43009368: bne         $v0, $zero, L_4300937C
    if (ctx->r2 != 0) {
        // 0x4300936C: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_4300937C;
    }
    // 0x4300936C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009370: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x43009374: b           L_430094B8
    // 0x43009378: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_430094B8;
    // 0x43009378: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_4300937C:
    // 0x4300937C: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x43009380: lwc1        $f8, -0x5880($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5880);
    // 0x43009384: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009388: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x4300938C: nop

    // 0x43009390: bc1f        L_430093A8
    if (!c1cs) {
        // 0x43009394: nop
    
            goto L_430093A8;
    }
    // 0x43009394: nop

    // 0x43009398: lwc1        $f10, -0x587C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X587C);
    // 0x4300939C: nop

    // 0x430093A0: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x430093A4: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
L_430093A8:
    // 0x430093A8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430093AC: lwc1        $f18, -0x5878($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5878);
    // 0x430093B0: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x430093B4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430093B8: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x430093BC: nop

    // 0x430093C0: bc1f        L_430094BC
    if (!c1cs) {
        // 0x430093C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430094BC;
    }
    // 0x430093C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430093C8: lwc1        $f4, -0x5874($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5874);
    // 0x430093CC: nop

    // 0x430093D0: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x430093D4: b           L_430094B8
    // 0x430093D8: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
        goto L_430094B8;
    // 0x430093D8: swc1        $f6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f6.u32l;
L_430093DC:
    // 0x430093DC: jal         0x43009144
    // 0x430093E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_9144(rdram, ctx);
        goto after_15;
    // 0x430093E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x430093E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430093E8: jal         0x43004CE0
    // 0x430093EC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    ovl_enemy_world2_4CE0(rdram, ctx);
        goto after_16;
    // 0x430093EC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_16:
    // 0x430093F0: b           L_430094BC
    // 0x430093F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094BC;
    // 0x430093F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430093F8:
    // 0x430093F8: lw          $t6, 0x60($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X60);
    // 0x430093FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009400: bne         $t6, $zero, L_4300941C
    if (ctx->r14 != 0) {
        // 0x43009404: nop
    
            goto L_4300941C;
    }
    // 0x43009404: nop

    // 0x43009408: jal         0x43002238
    // 0x4300940C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_17;
    // 0x4300940C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_17:
    // 0x43009410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009414: jal         0x43004AD8
    // 0x43009418: addiu       $a1, $zero, 0x467
    ctx->r5 = ADD32(0, 0X467);
    ovl_enemy_world2_4AD8(rdram, ctx);
        goto after_18;
    // 0x43009418: addiu       $a1, $zero, 0x467
    ctx->r5 = ADD32(0, 0X467);
    after_18:
L_4300941C:
    // 0x4300941C: jal         0x43004BF0
    // 0x43009420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4BF0(rdram, ctx);
        goto after_19;
    // 0x43009420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x43009424: b           L_430094BC
    // 0x43009428: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094BC;
    // 0x43009428: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300942C:
    // 0x4300942C: jal         0x43004C74
    // 0x43009430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4C74(rdram, ctx);
        goto after_20;
    // 0x43009430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x43009434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009438: jal         0x43005078
    // 0x4300943C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_21;
    // 0x4300943C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x43009440: b           L_430094BC
    // 0x43009444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094BC;
    // 0x43009444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009448:
    // 0x43009448: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300944C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009450: bne         $v1, $at, L_43009498
    if (ctx->r3 != ctx->r1) {
        // 0x43009454: slti        $at, $v1, 0x32
        ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
            goto L_43009498;
    }
    // 0x43009454: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x43009458: jal         0x43009144
    // 0x4300945C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_9144(rdram, ctx);
        goto after_22;
    // 0x4300945C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x43009460: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009464: jal         0x43002238
    // 0x43009468: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_23;
    // 0x43009468: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_23:
    // 0x4300946C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009470: jal         0x43004AD8
    // 0x43009474: addiu       $a1, $zero, 0x465
    ctx->r5 = ADD32(0, 0X465);
    ovl_enemy_world2_4AD8(rdram, ctx);
        goto after_24;
    // 0x43009474: addiu       $a1, $zero, 0x465
    ctx->r5 = ADD32(0, 0X465);
    after_24:
    // 0x43009478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300947C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009484: jal         0x43001DE0
    // 0x43009488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world2_1DE0(rdram, ctx);
        goto after_25;
    // 0x43009488: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_25:
    // 0x4300948C: b           L_430094BC
    // 0x43009490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094BC;
    // 0x43009490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009494: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
L_43009498:
    // 0x43009498: bne         $at, $zero, L_430094B8
    if (ctx->r1 != 0) {
        // 0x4300949C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430094B8;
    }
    // 0x4300949C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430094A0: jal         0x43005078
    // 0x430094A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_26;
    // 0x430094A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x430094A8: b           L_430094BC
    // 0x430094AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430094BC;
    // 0x430094AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430094B0:
    // 0x430094B0: jal         0x43009144
    // 0x430094B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_9144(rdram, ctx);
        goto after_27;
    // 0x430094B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
L_430094B8:
    // 0x430094B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430094BC:
    // 0x430094BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430094C0: jr          $ra
    // 0x430094C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430094C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_enemy_world2_94C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430094C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430094CC: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x430094D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430094D4: sltiu       $at, $t6, 0x16
    ctx->r1 = ctx->r14 < 0X16 ? 1 : 0;
    // 0x430094D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430094DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430094E0: beq         $at, $zero, L_43009668
    if (ctx->r1 == 0) {
        // 0x430094E4: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_43009668;
    }
    // 0x430094E4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x430094E8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x430094EC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430094F0: addu        $at, $at, $t6
    gpr jr_addend_430094FC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x430094F4: lw          $t6, -0x5870($at)
    ctx->r14 = ADD32(ctx->r1, -0X5870);
    // 0x430094F8: nop

    // 0x430094FC: jr          $t6
    // 0x43009500: nop

    switch (jr_addend_430094FC >> 2) {
        case 0: goto L_43009594; break;
        case 1: goto L_430095AC; break;
        case 2: goto L_43009668; break;
        case 3: goto L_43009668; break;
        case 4: goto L_43009668; break;
        case 5: goto L_43009668; break;
        case 6: goto L_43009668; break;
        case 7: goto L_43009668; break;
        case 8: goto L_43009668; break;
        case 9: goto L_43009668; break;
        case 10: goto L_43009668; break;
        case 11: goto L_43009668; break;
        case 12: goto L_43009668; break;
        case 13: goto L_43009504; break;
        case 14: goto L_43009614; break;
        case 15: goto L_43009668; break;
        case 16: goto L_43009668; break;
        case 17: goto L_43009668; break;
        case 18: goto L_4300955C; break;
        case 19: goto L_43009668; break;
        case 20: goto L_43009668; break;
        case 21: goto L_43009668; break;
        default: switch_error(__func__, 0x430094FC, 0x4300A790);
    }
    // 0x43009500: nop

L_43009504:
    // 0x43009504: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x43009508: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4300950C: addiu       $v0, $s0, 0x24C
    ctx->r2 = ADD32(ctx->r16, 0X24C);
    // 0x43009510: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x43009514: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43009518: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x4300951C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x43009520: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x43009524: addiu       $t9, $t9, -0x5E3C
    ctx->r25 = ADD32(ctx->r25, -0X5E3C);
    // 0x43009528: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x4300952C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009530: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009534: sb          $t8, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r24;
    // 0x43009538: sw          $t9, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r25;
    // 0x4300953C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009540: jal         0x430010F0
    // 0x43009544: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_0;
    // 0x43009544: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_0:
    // 0x43009548: lw          $t0, 0x54($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X54);
    // 0x4300954C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x43009550: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x43009554: b           L_43009668
    // 0x43009558: sw          $t1, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r9;
        goto L_43009668;
    // 0x43009558: sw          $t1, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r9;
L_4300955C:
    // 0x4300955C: jal         0x43001F1C
    // 0x43009560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_1F1C(rdram, ctx);
        goto after_1;
    // 0x43009560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x43009564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009568: jal         0x43002238
    // 0x4300956C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_2;
    // 0x4300956C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x43009570: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x43009574: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43009578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300957C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009580: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009584: jal         0x430010F0
    // 0x43009588: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_3;
    // 0x43009588: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_3:
    // 0x4300958C: b           L_4300966C
    // 0x43009590: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4300966C;
    // 0x43009590: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009594:
    // 0x43009594: jal         0x430014D8
    // 0x43009598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_14D8(rdram, ctx);
        goto after_4;
    // 0x43009598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4300959C: jal         0x43004E48
    // 0x430095A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4E48(rdram, ctx);
        goto after_5;
    // 0x430095A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x430095A4: b           L_4300966C
    // 0x430095A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4300966C;
    // 0x430095A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430095AC:
    // 0x430095AC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430095B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095B4: bne         $v0, $zero, L_430095F0
    if (ctx->r2 != 0) {
        // 0x430095B8: slti        $at, $v0, 0x28
        ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
            goto L_430095F0;
    }
    // 0x430095B8: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
    // 0x430095BC: jal         0x43002238
    // 0x430095C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_6;
    // 0x430095C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x430095C4: beq         $v0, $zero, L_430095E4
    if (ctx->r2 == 0) {
        // 0x430095C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430095E4;
    }
    // 0x430095C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095CC: jal         0x43004AD8
    // 0x430095D0: addiu       $a1, $zero, 0x45F
    ctx->r5 = ADD32(0, 0X45F);
    ovl_enemy_world2_4AD8(rdram, ctx);
        goto after_7;
    // 0x430095D0: addiu       $a1, $zero, 0x45F
    ctx->r5 = ADD32(0, 0X45F);
    after_7:
    // 0x430095D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430095D8: addiu       $a1, $zero, 0x204
    ctx->r5 = ADD32(0, 0X204);
    // 0x430095DC: jal         0x43001630
    // 0x430095E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world2_1630(rdram, ctx);
        goto after_8;
    // 0x430095E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
L_430095E4:
    // 0x430095E4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430095E8: nop

    // 0x430095EC: slti        $at, $v0, 0x28
    ctx->r1 = SIGNED(ctx->r2) < 0X28 ? 1 : 0;
L_430095F0:
    // 0x430095F0: bne         $at, $zero, L_4300966C
    if (ctx->r1 != 0) {
        // 0x430095F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4300966C;
    }
    // 0x430095F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430095F8: jal         0x43004D80
    // 0x430095FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4D80(rdram, ctx);
        goto after_9;
    // 0x430095FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x43009600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009604: jal         0x43005078
    // 0x43009608: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_10;
    // 0x43009608: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x4300960C: b           L_4300966C
    // 0x43009610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4300966C;
    // 0x43009610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009614:
    // 0x43009614: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300961C: bne         $v0, $zero, L_43009658
    if (ctx->r2 != 0) {
        // 0x43009620: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_43009658;
    }
    // 0x43009620: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43009624: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009628: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4300962C: jal         0x43001DE0
    // 0x43009630: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world2_1DE0(rdram, ctx);
        goto after_11;
    // 0x43009630: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x43009634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009638: jal         0x43002238
    // 0x4300963C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_12;
    // 0x4300963C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x43009640: beq         $v0, $zero, L_43009668
    if (ctx->r2 == 0) {
        // 0x43009644: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009668;
    }
    // 0x43009644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009648: jal         0x43004AD8
    // 0x4300964C: addiu       $a1, $zero, 0x45F
    ctx->r5 = ADD32(0, 0X45F);
    ovl_enemy_world2_4AD8(rdram, ctx);
        goto after_13;
    // 0x4300964C: addiu       $a1, $zero, 0x45F
    ctx->r5 = ADD32(0, 0X45F);
    after_13:
    // 0x43009650: b           L_4300966C
    // 0x43009654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4300966C;
    // 0x43009654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009658:
    // 0x43009658: bne         $at, $zero, L_43009668
    if (ctx->r1 != 0) {
        // 0x4300965C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009668;
    }
    // 0x4300965C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009660: jal         0x43005078
    // 0x43009664: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_14;
    // 0x43009664: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
L_43009668:
    // 0x43009668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300966C:
    // 0x4300966C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43009670: jr          $ra
    // 0x43009674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43009674: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world2_9678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009678: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300967C: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43009680: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43009684: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x43009688: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300968C: beq         $at, $zero, L_430099FC
    if (ctx->r1 == 0) {
        // 0x43009690: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_430099FC;
    }
    // 0x43009690: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43009694: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009698: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300969C: addu        $at, $at, $t6
    gpr jr_addend_430096A8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x430096A0: lw          $t6, -0x5818($at)
    ctx->r14 = ADD32(ctx->r1, -0X5818);
    // 0x430096A4: nop

    // 0x430096A8: jr          $t6
    // 0x430096AC: nop

    switch (jr_addend_430096A8 >> 2) {
        case 0: goto L_43009770; break;
        case 1: goto L_43009788; break;
        case 2: goto L_430099FC; break;
        case 3: goto L_430098E8; break;
        case 4: goto L_430098FC; break;
        case 5: goto L_4300993C; break;
        case 6: goto L_430099FC; break;
        case 7: goto L_430099FC; break;
        case 8: goto L_430099FC; break;
        case 9: goto L_430099FC; break;
        case 10: goto L_430099FC; break;
        case 11: goto L_430099FC; break;
        case 12: goto L_430099FC; break;
        case 13: goto L_430096B0; break;
        case 14: goto L_43009958; break;
        case 15: goto L_430099FC; break;
        case 16: goto L_430099FC; break;
        case 17: goto L_430099FC; break;
        case 18: goto L_430096D0; break;
        case 19: goto L_4300971C; break;
        case 20: goto L_4300973C; break;
        case 21: goto L_430099FC; break;
        case 22: goto L_430099FC; break;
        case 23: goto L_4300989C; break;
        default: switch_error(__func__, 0x430096A8, 0x4300A7E8);
    }
    // 0x430096AC: nop

L_430096B0:
    // 0x430096B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096B4: jal         0x43004AD8
    // 0x430096B8: addiu       $a1, $zero, 0x450
    ctx->r5 = ADD32(0, 0X450);
    ovl_enemy_world2_4AD8(rdram, ctx);
        goto after_0;
    // 0x430096B8: addiu       $a1, $zero, 0x450
    ctx->r5 = ADD32(0, 0X450);
    after_0:
    // 0x430096BC: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x430096C0: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x430096C4: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x430096C8: b           L_430099FC
    // 0x430096CC: sw          $t8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r24;
        goto L_430099FC;
    // 0x430096CC: sw          $t8, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r24;
L_430096D0:
    // 0x430096D0: jal         0x43001F1C
    // 0x430096D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_1F1C(rdram, ctx);
        goto after_1;
    // 0x430096D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430096D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430096DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096E0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430096E4: addiu       $a1, $zero, 0x44F
    ctx->r5 = ADD32(0, 0X44F);
    // 0x430096E8: addiu       $a2, $zero, 0x450
    ctx->r6 = ADD32(0, 0X450);
    // 0x430096EC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x430096F0: jal         0x43002174
    // 0x430096F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_enemy_world2_2174(rdram, ctx);
        goto after_2;
    // 0x430096F4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x430096F8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430096FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009700: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009704: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009708: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4300970C: jal         0x430010F0
    // 0x43009710: nop

    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_3;
    // 0x43009710: nop

    after_3:
    // 0x43009714: b           L_43009A00
    // 0x43009718: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009A00;
    // 0x43009718: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300971C:
    // 0x4300971C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009724: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009728: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x4300972C: jal         0x43002134
    // 0x43009730: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_enemy_world2_2134(rdram, ctx);
        goto after_4;
    // 0x43009730: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x43009734: b           L_43009A00
    // 0x43009738: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009A00;
    // 0x43009738: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300973C:
    // 0x4300973C: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43009740: nop

    // 0x43009744: sll         $t0, $t9, 13
    ctx->r8 = S32(ctx->r25 << 13);
    // 0x43009748: bltz        $t0, L_43009A00
    if (SIGNED(ctx->r8) < 0) {
        // 0x4300974C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009A00;
    }
    // 0x4300974C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009750: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009758: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x4300975C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009760: jal         0x43002134
    // 0x43009764: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_enemy_world2_2134(rdram, ctx);
        goto after_5;
    // 0x43009764: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x43009768: b           L_43009A00
    // 0x4300976C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009A00;
    // 0x4300976C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009770:
    // 0x43009770: jal         0x430014D8
    // 0x43009774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_14D8(rdram, ctx);
        goto after_6;
    // 0x43009774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43009778: jal         0x43004E48
    // 0x4300977C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4E48(rdram, ctx);
        goto after_7;
    // 0x4300977C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x43009780: b           L_43009A00
    // 0x43009784: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009A00;
    // 0x43009784: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009788:
    // 0x43009788: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x4300978C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009790: beq         $v0, $zero, L_430097C8
    if (ctx->r2 == 0) {
        // 0x43009794: addiu       $a1, $zero, 0x451
        ctx->r5 = ADD32(0, 0X451);
            goto L_430097C8;
    }
    // 0x43009794: addiu       $a1, $zero, 0x451
    ctx->r5 = ADD32(0, 0X451);
    // 0x43009798: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x4300979C: beq         $v0, $at, L_430097FC
    if (ctx->r2 == ctx->r1) {
        // 0x430097A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430097FC;
    }
    // 0x430097A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097A4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x430097A8: beq         $v0, $at, L_43009818
    if (ctx->r2 == ctx->r1) {
        // 0x430097AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009818;
    }
    // 0x430097AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097B0: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x430097B4: beq         $v0, $at, L_43009838
    if (ctx->r2 == ctx->r1) {
        // 0x430097B8: nop
    
            goto L_43009838;
    }
    // 0x430097B8: nop

    // 0x430097BC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430097C0: b           L_43009864
    // 0x430097C4: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
        goto L_43009864;
    // 0x430097C4: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
L_430097C8:
    // 0x430097C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430097CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430097D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430097D4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430097D8: addiu       $a2, $zero, 0x452
    ctx->r6 = ADD32(0, 0X452);
    // 0x430097DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x430097E0: jal         0x43002174
    // 0x430097E4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world2_2174(rdram, ctx);
        goto after_8;
    // 0x430097E4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x430097E8: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x430097EC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430097F0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430097F4: b           L_43009860
    // 0x430097F8: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
        goto L_43009860;
    // 0x430097F8: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
L_430097FC:
    // 0x430097FC: addiu       $a1, $zero, 0x201
    ctx->r5 = ADD32(0, 0X201);
    // 0x43009800: jal         0x43001630
    // 0x43009804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world2_1630(rdram, ctx);
        goto after_9;
    // 0x43009804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x43009808: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x4300980C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009810: b           L_43009864
    // 0x43009814: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
        goto L_43009864;
    // 0x43009814: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
L_43009818:
    // 0x43009818: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x4300981C: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x43009820: jal         0x430010F0
    // 0x43009824: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_10;
    // 0x43009824: lui         $a3, 0x4316
    ctx->r7 = S32(0X4316 << 16);
    after_10:
    // 0x43009828: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x4300982C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009830: b           L_43009864
    // 0x43009834: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
        goto L_43009864;
    // 0x43009834: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
L_43009838:
    // 0x43009838: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300983C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009840: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009844: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009848: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4300984C: jal         0x430010F0
    // 0x43009850: nop

    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_11;
    // 0x43009850: nop

    after_11:
    // 0x43009854: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009858: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x4300985C: nop

L_43009860:
    // 0x43009860: slti        $at, $v0, 0x30
    ctx->r1 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
L_43009864:
    // 0x43009864: bne         $at, $zero, L_43009A00
    if (ctx->r1 != 0) {
        // 0x43009868: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009A00;
    }
    // 0x43009868: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4300986C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009870: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009874: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009878: jal         0x430010F0
    // 0x4300987C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_12;
    // 0x4300987C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x43009880: jal         0x43004D80
    // 0x43009884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4D80(rdram, ctx);
        goto after_13;
    // 0x43009884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x43009888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300988C: jal         0x43005078
    // 0x43009890: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_14;
    // 0x43009890: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x43009894: b           L_43009A00
    // 0x43009898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009A00;
    // 0x43009898: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300989C:
    // 0x4300989C: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x430098A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x430098A4: bne         $t1, $at, L_43009A00
    if (ctx->r9 != ctx->r1) {
        // 0x430098A8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009A00;
    }
    // 0x430098A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430098AC: lw          $t2, 0x4($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X4);
    // 0x430098B0: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x430098B4: beq         $t2, $at, L_430098C4
    if (ctx->r10 == ctx->r1) {
        // 0x430098B8: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_430098C4;
    }
    // 0x430098B8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x430098BC: b           L_430099FC
    // 0x430098C0: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_430099FC;
    // 0x430098C0: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
L_430098C4:
    // 0x430098C4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x430098C8: nop

    // 0x430098CC: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x430098D0: bne         $at, $zero, L_430098E0
    if (ctx->r1 != 0) {
        // 0x430098D4: slti        $at, $v0, 0x21
        ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_430098E0;
    }
    // 0x430098D4: slti        $at, $v0, 0x21
    ctx->r1 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x430098D8: bne         $at, $zero, L_43009A00
    if (ctx->r1 != 0) {
        // 0x430098DC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009A00;
    }
    // 0x430098DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430098E0:
    // 0x430098E0: b           L_430099FC
    // 0x430098E4: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_430099FC;
    // 0x430098E4: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_430098E8:
    // 0x430098E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430098EC: jal         0x43004CE0
    // 0x430098F0: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    ovl_enemy_world2_4CE0(rdram, ctx);
        goto after_15;
    // 0x430098F0: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_15:
    // 0x430098F4: b           L_43009A00
    // 0x430098F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009A00;
    // 0x430098F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430098FC:
    // 0x430098FC: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
    // 0x43009900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009904: bne         $t4, $zero, L_4300992C
    if (ctx->r12 != 0) {
        // 0x43009908: addiu       $a1, $zero, 0x455
        ctx->r5 = ADD32(0, 0X455);
            goto L_4300992C;
    }
    // 0x43009908: addiu       $a1, $zero, 0x455
    ctx->r5 = ADD32(0, 0X455);
    // 0x4300990C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009910: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43009914: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43009918: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x4300991C: addiu       $a2, $zero, 0x456
    ctx->r6 = ADD32(0, 0X456);
    // 0x43009920: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43009924: jal         0x43002174
    // 0x43009928: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_enemy_world2_2174(rdram, ctx);
        goto after_16;
    // 0x43009928: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_16:
L_4300992C:
    // 0x4300992C: jal         0x43004BF0
    // 0x43009930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4BF0(rdram, ctx);
        goto after_17;
    // 0x43009930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x43009934: b           L_43009A00
    // 0x43009938: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009A00;
    // 0x43009938: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300993C:
    // 0x4300993C: jal         0x43004C74
    // 0x43009940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4C74(rdram, ctx);
        goto after_18;
    // 0x43009940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x43009944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009948: jal         0x43005078
    // 0x4300994C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_19;
    // 0x4300994C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x43009950: b           L_43009A00
    // 0x43009954: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009A00;
    // 0x43009954: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009958:
    // 0x43009958: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x4300995C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009960: bne         $v0, $at, L_430099EC
    if (ctx->r2 != ctx->r1) {
        // 0x43009964: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_430099EC;
    }
    // 0x43009964: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43009968: lw          $t5, 0x1E4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1E4);
    // 0x4300996C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43009970: bne         $t5, $at, L_430099A8
    if (ctx->r13 != ctx->r1) {
        // 0x43009974: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430099A8;
    }
    // 0x43009974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009978: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300997C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43009980: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43009984: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300998C: addiu       $a1, $zero, 0x455
    ctx->r5 = ADD32(0, 0X455);
    // 0x43009990: addiu       $a2, $zero, 0x456
    ctx->r6 = ADD32(0, 0X456);
    // 0x43009994: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43009998: jal         0x43002174
    // 0x4300999C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_enemy_world2_2174(rdram, ctx);
        goto after_20;
    // 0x4300999C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_20:
    // 0x430099A0: b           L_430099D0
    // 0x430099A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_430099D0;
    // 0x430099A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430099A8:
    // 0x430099A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430099AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430099B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x430099B4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430099B8: addiu       $a1, $zero, 0x453
    ctx->r5 = ADD32(0, 0X453);
    // 0x430099BC: addiu       $a2, $zero, 0x454
    ctx->r6 = ADD32(0, 0X454);
    // 0x430099C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x430099C4: jal         0x43002174
    // 0x430099C8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_enemy_world2_2174(rdram, ctx);
        goto after_21;
    // 0x430099C8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_21:
    // 0x430099CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430099D0:
    // 0x430099D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430099D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430099D8: jal         0x43001DE0
    // 0x430099DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world2_1DE0(rdram, ctx);
        goto after_22;
    // 0x430099DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_22:
    // 0x430099E0: b           L_43009A00
    // 0x430099E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009A00;
    // 0x430099E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430099E8: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_430099EC:
    // 0x430099EC: bne         $at, $zero, L_430099FC
    if (ctx->r1 != 0) {
        // 0x430099F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430099FC;
    }
    // 0x430099F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430099F4: jal         0x43005078
    // 0x430099F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_23;
    // 0x430099F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
L_430099FC:
    // 0x430099FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009A00:
    // 0x43009A00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43009A04: jr          $ra
    // 0x43009A08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43009A08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world2_9A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009A0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43009A10: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43009A14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43009A18: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x43009A1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009A20: beq         $at, $zero, L_43009C80
    if (ctx->r1 == 0) {
        // 0x43009A24: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_43009C80;
    }
    // 0x43009A24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43009A28: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009A2C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009A30: addu        $at, $at, $t6
    gpr jr_addend_43009A3C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009A34: lw          $t6, -0x57B8($at)
    ctx->r14 = ADD32(ctx->r1, -0X57B8);
    // 0x43009A38: nop

    // 0x43009A3C: jr          $t6
    // 0x43009A40: nop

    switch (jr_addend_43009A3C >> 2) {
        case 0: goto L_43009A94; break;
        case 1: goto L_43009AAC; break;
        case 2: goto L_43009C80; break;
        case 3: goto L_43009BC4; break;
        case 4: goto L_43009BD8; break;
        case 5: goto L_43009C00; break;
        case 6: goto L_43009C80; break;
        case 7: goto L_43009C80; break;
        case 8: goto L_43009C80; break;
        case 9: goto L_43009C80; break;
        case 10: goto L_43009C80; break;
        case 11: goto L_43009C80; break;
        case 12: goto L_43009C80; break;
        case 13: goto L_43009A44; break;
        case 14: goto L_43009C1C; break;
        case 15: goto L_43009C80; break;
        case 16: goto L_43009C80; break;
        case 17: goto L_43009C80; break;
        case 18: goto L_43009A5C; break;
        case 19: goto L_43009C80; break;
        case 20: goto L_43009C80; break;
        case 21: goto L_43009C80; break;
        case 22: goto L_43009C80; break;
        case 23: goto L_43009B78; break;
        default: switch_error(__func__, 0x43009A3C, 0x4300A848);
    }
    // 0x43009A40: nop

L_43009A44:
    // 0x43009A44: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43009A48: addiu       $t8, $t8, -0x5E2C
    ctx->r24 = ADD32(ctx->r24, -0X5E2C);
    // 0x43009A4C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x43009A50: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43009A54: b           L_43009C80
    // 0x43009A58: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
        goto L_43009C80;
    // 0x43009A58: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
L_43009A5C:
    // 0x43009A5C: jal         0x43001F1C
    // 0x43009A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_1F1C(rdram, ctx);
        goto after_0;
    // 0x43009A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43009A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009A68: jal         0x43002238
    // 0x43009A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_1;
    // 0x43009A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x43009A70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009A78: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009A7C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009A80: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009A84: jal         0x430010F0
    // 0x43009A88: nop

    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_2;
    // 0x43009A88: nop

    after_2:
    // 0x43009A8C: b           L_43009C84
    // 0x43009A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C84;
    // 0x43009A90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009A94:
    // 0x43009A94: jal         0x430014D8
    // 0x43009A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_14D8(rdram, ctx);
        goto after_3;
    // 0x43009A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43009A9C: jal         0x43004E48
    // 0x43009AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4E48(rdram, ctx);
        goto after_4;
    // 0x43009AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43009AA4: b           L_43009C84
    // 0x43009AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C84;
    // 0x43009AA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009AAC:
    // 0x43009AAC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009AB0: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x43009AB4: beq         $v0, $zero, L_43009AE4
    if (ctx->r2 == 0) {
        // 0x43009AB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009AE4;
    }
    // 0x43009AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009ABC: beq         $v0, $at, L_43009AF8
    if (ctx->r2 == ctx->r1) {
        // 0x43009AC0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009AF8;
    }
    // 0x43009AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009AC4: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x43009AC8: beq         $v0, $at, L_43009B10
    if (ctx->r2 == ctx->r1) {
        // 0x43009ACC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009B10;
    }
    // 0x43009ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009AD0: addiu       $at, $zero, 0x36
    ctx->r1 = ADD32(0, 0X36);
    // 0x43009AD4: beq         $v0, $at, L_43009B2C
    if (ctx->r2 == ctx->r1) {
        // 0x43009AD8: nop
    
            goto L_43009B2C;
    }
    // 0x43009AD8: nop

    // 0x43009ADC: b           L_43009B54
    // 0x43009AE0: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
        goto L_43009B54;
    // 0x43009AE0: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_43009AE4:
    // 0x43009AE4: jal         0x43002238
    // 0x43009AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_5;
    // 0x43009AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x43009AEC: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009AF0: b           L_43009B54
    // 0x43009AF4: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
        goto L_43009B54;
    // 0x43009AF4: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_43009AF8:
    // 0x43009AF8: addiu       $a1, $zero, 0x1F8
    ctx->r5 = ADD32(0, 0X1F8);
    // 0x43009AFC: jal         0x43001630
    // 0x43009B00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world2_1630(rdram, ctx);
        goto after_6;
    // 0x43009B00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x43009B04: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009B08: b           L_43009B54
    // 0x43009B0C: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
        goto L_43009B54;
    // 0x43009B0C: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_43009B10:
    // 0x43009B10: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x43009B14: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x43009B18: jal         0x430010F0
    // 0x43009B1C: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_7;
    // 0x43009B1C: lui         $a3, 0x4320
    ctx->r7 = S32(0X4320 << 16);
    after_7:
    // 0x43009B20: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009B24: b           L_43009B54
    // 0x43009B28: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
        goto L_43009B54;
    // 0x43009B28: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_43009B2C:
    // 0x43009B2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009B30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009B34: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43009B38: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43009B3C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43009B40: jal         0x430010F0
    // 0x43009B44: nop

    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_8;
    // 0x43009B44: nop

    after_8:
    // 0x43009B48: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009B4C: nop

    // 0x43009B50: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
L_43009B54:
    // 0x43009B54: bne         $at, $zero, L_43009C84
    if (ctx->r1 != 0) {
        // 0x43009B58: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009C84;
    }
    // 0x43009B58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009B5C: jal         0x43004D80
    // 0x43009B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4D80(rdram, ctx);
        goto after_9;
    // 0x43009B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x43009B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009B68: jal         0x43005078
    // 0x43009B6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_10;
    // 0x43009B6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x43009B70: b           L_43009C84
    // 0x43009B74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C84;
    // 0x43009B74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009B78:
    // 0x43009B78: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x43009B7C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43009B80: bne         $t9, $at, L_43009C84
    if (ctx->r25 != ctx->r1) {
        // 0x43009B84: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009C84;
    }
    // 0x43009B84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009B88: lw          $t0, 0x4($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X4);
    // 0x43009B8C: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x43009B90: beq         $t0, $at, L_43009BA0
    if (ctx->r8 == ctx->r1) {
        // 0x43009B94: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_43009BA0;
    }
    // 0x43009B94: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43009B98: b           L_43009C80
    // 0x43009B9C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
        goto L_43009C80;
    // 0x43009B9C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
L_43009BA0:
    // 0x43009BA0: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009BA4: nop

    // 0x43009BA8: slti        $at, $v0, 0x17
    ctx->r1 = SIGNED(ctx->r2) < 0X17 ? 1 : 0;
    // 0x43009BAC: bne         $at, $zero, L_43009BBC
    if (ctx->r1 != 0) {
        // 0x43009BB0: slti        $at, $v0, 0x37
        ctx->r1 = SIGNED(ctx->r2) < 0X37 ? 1 : 0;
            goto L_43009BBC;
    }
    // 0x43009BB0: slti        $at, $v0, 0x37
    ctx->r1 = SIGNED(ctx->r2) < 0X37 ? 1 : 0;
    // 0x43009BB4: bne         $at, $zero, L_43009C84
    if (ctx->r1 != 0) {
        // 0x43009BB8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43009C84;
    }
    // 0x43009BB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009BBC:
    // 0x43009BBC: b           L_43009C80
    // 0x43009BC0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_43009C80;
    // 0x43009BC0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_43009BC4:
    // 0x43009BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009BC8: jal         0x43004CE0
    // 0x43009BCC: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    ovl_enemy_world2_4CE0(rdram, ctx);
        goto after_11;
    // 0x43009BCC: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_11:
    // 0x43009BD0: b           L_43009C84
    // 0x43009BD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C84;
    // 0x43009BD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009BD8:
    // 0x43009BD8: lw          $t2, 0x60($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X60);
    // 0x43009BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009BE0: bne         $t2, $zero, L_43009BF0
    if (ctx->r10 != 0) {
        // 0x43009BE4: nop
    
            goto L_43009BF0;
    }
    // 0x43009BE4: nop

    // 0x43009BE8: jal         0x43002238
    // 0x43009BEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_12;
    // 0x43009BEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
L_43009BF0:
    // 0x43009BF0: jal         0x43004BF0
    // 0x43009BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4BF0(rdram, ctx);
        goto after_13;
    // 0x43009BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x43009BF8: b           L_43009C84
    // 0x43009BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C84;
    // 0x43009BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009C00:
    // 0x43009C00: jal         0x43004C74
    // 0x43009C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4C74(rdram, ctx);
        goto after_14;
    // 0x43009C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x43009C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009C0C: jal         0x43005078
    // 0x43009C10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_15;
    // 0x43009C10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x43009C14: b           L_43009C84
    // 0x43009C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C84;
    // 0x43009C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009C1C:
    // 0x43009C1C: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009C20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009C24: bne         $v0, $at, L_43009C50
    if (ctx->r2 != ctx->r1) {
        // 0x43009C28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009C50;
    }
    // 0x43009C28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009C2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009C30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009C34: jal         0x43001DE0
    // 0x43009C38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world2_1DE0(rdram, ctx);
        goto after_16;
    // 0x43009C38: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x43009C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009C40: jal         0x43002238
    // 0x43009C44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_17;
    // 0x43009C44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_17:
    // 0x43009C48: b           L_43009C84
    // 0x43009C4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C84;
    // 0x43009C4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009C50:
    // 0x43009C50: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x43009C54: bne         $v0, $at, L_43009C6C
    if (ctx->r2 != ctx->r1) {
        // 0x43009C58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009C6C;
    }
    // 0x43009C58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009C5C: jal         0x43002238
    // 0x43009C60: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_18;
    // 0x43009C60: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_18:
    // 0x43009C64: b           L_43009C84
    // 0x43009C68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43009C84;
    // 0x43009C68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009C6C:
    // 0x43009C6C: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x43009C70: bne         $at, $zero, L_43009C80
    if (ctx->r1 != 0) {
        // 0x43009C74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009C80;
    }
    // 0x43009C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009C78: jal         0x43005078
    // 0x43009C7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_19;
    // 0x43009C7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
L_43009C80:
    // 0x43009C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43009C84:
    // 0x43009C84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43009C88: jr          $ra
    // 0x43009C8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43009C8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world2_9C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009C90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43009C94: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43009C98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43009C9C: sltiu       $at, $t6, 0x15
    ctx->r1 = ctx->r14 < 0X15 ? 1 : 0;
    // 0x43009CA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009CA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43009CA8: beq         $at, $zero, L_43009EBC
    if (ctx->r1 == 0) {
        // 0x43009CAC: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_43009EBC;
    }
    // 0x43009CAC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43009CB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009CB4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009CB8: addu        $at, $at, $t6
    gpr jr_addend_43009CC4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009CBC: lw          $t6, -0x5758($at)
    ctx->r14 = ADD32(ctx->r1, -0X5758);
    // 0x43009CC0: nop

    // 0x43009CC4: jr          $t6
    // 0x43009CC8: nop

    switch (jr_addend_43009CC4 >> 2) {
        case 0: goto L_43009D24; break;
        case 1: goto L_43009D3C; break;
        case 2: goto L_43009EBC; break;
        case 3: goto L_43009DE0; break;
        case 4: goto L_43009DF4; break;
        case 5: goto L_43009E3C; break;
        case 6: goto L_43009EBC; break;
        case 7: goto L_43009EBC; break;
        case 8: goto L_43009EBC; break;
        case 9: goto L_43009EBC; break;
        case 10: goto L_43009EBC; break;
        case 11: goto L_43009EBC; break;
        case 12: goto L_43009EBC; break;
        case 13: goto L_43009CCC; break;
        case 14: goto L_43009E58; break;
        case 15: goto L_43009EBC; break;
        case 16: goto L_43009EBC; break;
        case 17: goto L_43009EBC; break;
        case 18: goto L_43009CF4; break;
        case 19: goto L_43009D10; break;
        case 20: goto L_43009CF4; break;
        default: switch_error(__func__, 0x43009CC4, 0x4300A8A8);
    }
    // 0x43009CC8: nop

L_43009CCC:
    // 0x43009CCC: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43009CD0: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43009CD4: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x43009CD8: addiu       $t8, $t8, -0x5E20
    ctx->r24 = ADD32(ctx->r24, -0X5E20);
    // 0x43009CDC: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x43009CE0: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43009CE4: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x43009CE8: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
    // 0x43009CEC: b           L_43009EBC
    // 0x43009CF0: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
        goto L_43009EBC;
    // 0x43009CF0: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
L_43009CF4:
    // 0x43009CF4: jal         0x43001F1C
    // 0x43009CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_1F1C(rdram, ctx);
        goto after_0;
    // 0x43009CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43009CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009D00: jal         0x43002238
    // 0x43009D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_1;
    // 0x43009D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x43009D08: b           L_43009EC0
    // 0x43009D0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009EC0;
    // 0x43009D0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009D10:
    // 0x43009D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009D14: jal         0x43002238
    // 0x43009D18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_2;
    // 0x43009D18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x43009D1C: b           L_43009EC0
    // 0x43009D20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009EC0;
    // 0x43009D20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009D24:
    // 0x43009D24: jal         0x430014D8
    // 0x43009D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_14D8(rdram, ctx);
        goto after_3;
    // 0x43009D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43009D2C: jal         0x43004E48
    // 0x43009D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4E48(rdram, ctx);
        goto after_4;
    // 0x43009D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43009D34: b           L_43009EC0
    // 0x43009D38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009EC0;
    // 0x43009D38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009D3C:
    // 0x43009D3C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009D40: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x43009D44: beq         $v1, $zero, L_43009D68
    if (ctx->r3 == 0) {
        // 0x43009D48: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009D68;
    }
    // 0x43009D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009D4C: beq         $v1, $at, L_43009D7C
    if (ctx->r3 == ctx->r1) {
        // 0x43009D50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009D7C;
    }
    // 0x43009D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009D54: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x43009D58: beq         $v1, $at, L_43009DA4
    if (ctx->r3 == ctx->r1) {
        // 0x43009D5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009DA4;
    }
    // 0x43009D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009D60: b           L_43009DBC
    // 0x43009D64: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43009DBC;
    // 0x43009D64: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43009D68:
    // 0x43009D68: jal         0x43002238
    // 0x43009D6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_5;
    // 0x43009D6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x43009D70: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009D74: b           L_43009DBC
    // 0x43009D78: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43009DBC;
    // 0x43009D78: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43009D7C:
    // 0x43009D7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43009D80: lui         $a3, 0x42A2
    ctx->r7 = S32(0X42A2 << 16);
    // 0x43009D84: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x43009D88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43009D8C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x43009D90: jal         0x43004610
    // 0x43009D94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world2_4610(rdram, ctx);
        goto after_6;
    // 0x43009D94: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x43009D98: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009D9C: b           L_43009DBC
    // 0x43009DA0: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43009DBC;
    // 0x43009DA0: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43009DA4:
    // 0x43009DA4: addiu       $a1, $zero, 0x20C
    ctx->r5 = ADD32(0, 0X20C);
    // 0x43009DA8: jal         0x43001630
    // 0x43009DAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world2_1630(rdram, ctx);
        goto after_7;
    // 0x43009DAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x43009DB0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009DB4: nop

    // 0x43009DB8: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43009DBC:
    // 0x43009DBC: bne         $at, $zero, L_43009EC0
    if (ctx->r1 != 0) {
        // 0x43009DC0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43009EC0;
    }
    // 0x43009DC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009DC4: jal         0x43004D80
    // 0x43009DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4D80(rdram, ctx);
        goto after_8;
    // 0x43009DC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x43009DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009DD0: jal         0x43005078
    // 0x43009DD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_9;
    // 0x43009DD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43009DD8: b           L_43009EC0
    // 0x43009DDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009EC0;
    // 0x43009DDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009DE0:
    // 0x43009DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009DE4: jal         0x43004CE0
    // 0x43009DE8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    ovl_enemy_world2_4CE0(rdram, ctx);
        goto after_10;
    // 0x43009DE8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_10:
    // 0x43009DEC: b           L_43009EC0
    // 0x43009DF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009EC0;
    // 0x43009DF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009DF4:
    // 0x43009DF4: lw          $v0, 0x60($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X60);
    // 0x43009DF8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x43009DFC: beq         $v0, $zero, L_43009E14
    if (ctx->r2 == 0) {
        // 0x43009E00: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009E14;
    }
    // 0x43009E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009E04: beq         $v0, $at, L_43009E24
    if (ctx->r2 == ctx->r1) {
        // 0x43009E08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009E24;
    }
    // 0x43009E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009E0C: b           L_43009E2C
    // 0x43009E10: nop

        goto L_43009E2C;
    // 0x43009E10: nop

L_43009E14:
    // 0x43009E14: jal         0x43002238
    // 0x43009E18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_11;
    // 0x43009E18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x43009E1C: b           L_43009E2C
    // 0x43009E20: nop

        goto L_43009E2C;
    // 0x43009E20: nop

L_43009E24:
    // 0x43009E24: jal         0x43002238
    // 0x43009E28: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_12;
    // 0x43009E28: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
L_43009E2C:
    // 0x43009E2C: jal         0x43004BF0
    // 0x43009E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4BF0(rdram, ctx);
        goto after_13;
    // 0x43009E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x43009E34: b           L_43009EC0
    // 0x43009E38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009EC0;
    // 0x43009E38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009E3C:
    // 0x43009E3C: jal         0x43004C74
    // 0x43009E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4C74(rdram, ctx);
        goto after_14;
    // 0x43009E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x43009E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009E48: jal         0x43005078
    // 0x43009E4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_15;
    // 0x43009E4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x43009E50: b           L_43009EC0
    // 0x43009E54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009EC0;
    // 0x43009E54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009E58:
    // 0x43009E58: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009E5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43009E60: bne         $v1, $at, L_43009E8C
    if (ctx->r3 != ctx->r1) {
        // 0x43009E64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009E8C;
    }
    // 0x43009E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009E68: jal         0x43002238
    // 0x43009E6C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_16;
    // 0x43009E6C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_16:
    // 0x43009E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009E78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43009E7C: jal         0x43001DE0
    // 0x43009E80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world2_1DE0(rdram, ctx);
        goto after_17;
    // 0x43009E80: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_17:
    // 0x43009E84: b           L_43009EC0
    // 0x43009E88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009EC0;
    // 0x43009E88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009E8C:
    // 0x43009E8C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x43009E90: bne         $v1, $at, L_43009EA8
    if (ctx->r3 != ctx->r1) {
        // 0x43009E94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009EA8;
    }
    // 0x43009E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009E98: jal         0x43002238
    // 0x43009E9C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world2_2238(rdram, ctx);
        goto after_18;
    // 0x43009E9C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_18:
    // 0x43009EA0: b           L_43009EC0
    // 0x43009EA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43009EC0;
    // 0x43009EA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009EA8:
    // 0x43009EA8: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x43009EAC: bne         $at, $zero, L_43009EBC
    if (ctx->r1 != 0) {
        // 0x43009EB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009EBC;
    }
    // 0x43009EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009EB4: jal         0x43005078
    // 0x43009EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_19;
    // 0x43009EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
L_43009EBC:
    // 0x43009EBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009EC0:
    // 0x43009EC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43009EC4: jr          $ra
    // 0x43009EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43009EC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world2_9ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009ECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009ED4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x43009ED8: nop

    // 0x43009EDC: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x43009EE0: bne         $at, $zero, L_43009F00
    if (ctx->r1 != 0) {
        // 0x43009EE4: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_43009F00;
    }
    // 0x43009EE4: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x43009EE8: beq         $v0, $at, L_43009F78
    if (ctx->r2 == ctx->r1) {
        // 0x43009EEC: addiu       $at, $zero, 0x46
        ctx->r1 = ADD32(0, 0X46);
            goto L_43009F78;
    }
    // 0x43009EEC: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x43009EF0: beq         $v0, $at, L_43009F60
    if (ctx->r2 == ctx->r1) {
        // 0x43009EF4: nop
    
            goto L_43009F60;
    }
    // 0x43009EF4: nop

    // 0x43009EF8: b           L_43009FBC
    // 0x43009EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43009FBC;
    // 0x43009EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009F00:
    // 0x43009F00: slti        $at, $v0, 0x3B
    ctx->r1 = SIGNED(ctx->r2) < 0X3B ? 1 : 0;
    // 0x43009F04: bne         $at, $zero, L_43009F1C
    if (ctx->r1 != 0) {
        // 0x43009F08: addiu       $at, $zero, 0x3B
        ctx->r1 = ADD32(0, 0X3B);
            goto L_43009F1C;
    }
    // 0x43009F08: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x43009F0C: beq         $v0, $at, L_43009F9C
    if (ctx->r2 == ctx->r1) {
        // 0x43009F10: nop
    
            goto L_43009F9C;
    }
    // 0x43009F10: nop

    // 0x43009F14: b           L_43009FBC
    // 0x43009F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43009FBC;
    // 0x43009F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009F1C:
    // 0x43009F1C: slti        $at, $v0, 0xD
    ctx->r1 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x43009F20: bne         $at, $zero, L_43009F3C
    if (ctx->r1 != 0) {
        // 0x43009F24: addiu       $t6, $v0, -0x5
        ctx->r14 = ADD32(ctx->r2, -0X5);
            goto L_43009F3C;
    }
    // 0x43009F24: addiu       $t6, $v0, -0x5
    ctx->r14 = ADD32(ctx->r2, -0X5);
    // 0x43009F28: addiu       $at, $zero, 0x3A
    ctx->r1 = ADD32(0, 0X3A);
    // 0x43009F2C: beq         $v0, $at, L_43009F6C
    if (ctx->r2 == ctx->r1) {
        // 0x43009F30: nop
    
            goto L_43009F6C;
    }
    // 0x43009F30: nop

    // 0x43009F34: b           L_43009FBC
    // 0x43009F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43009FBC;
    // 0x43009F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009F3C:
    // 0x43009F3C: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x43009F40: beq         $at, $zero, L_43009FB8
    if (ctx->r1 == 0) {
        // 0x43009F44: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_43009FB8;
    }
    // 0x43009F44: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009F48: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009F4C: addu        $at, $at, $t6
    gpr jr_addend_43009F58 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009F50: lw          $t6, -0x5704($at)
    ctx->r14 = ADD32(ctx->r1, -0X5704);
    // 0x43009F54: nop

    // 0x43009F58: jr          $t6
    // 0x43009F5C: nop

    switch (jr_addend_43009F58 >> 2) {
        case 0: goto L_43009F6C; break;
        case 1: goto L_43009FB8; break;
        case 2: goto L_43009F9C; break;
        case 3: goto L_43009F60; break;
        case 4: goto L_43009F90; break;
        case 5: goto L_43009F84; break;
        case 6: goto L_43009FA8; break;
        case 7: goto L_43009F78; break;
        default: switch_error(__func__, 0x43009F58, 0x4300A8FC);
    }
    // 0x43009F5C: nop

L_43009F60:
    // 0x43009F60: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009F64: b           L_43009FB0
    // 0x43009F68: addiu       $v0, $v0, -0x6370
    ctx->r2 = ADD32(ctx->r2, -0X6370);
        goto L_43009FB0;
    // 0x43009F68: addiu       $v0, $v0, -0x6370
    ctx->r2 = ADD32(ctx->r2, -0X6370);
L_43009F6C:
    // 0x43009F6C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009F70: b           L_43009FB0
    // 0x43009F74: addiu       $v0, $v0, -0x65F4
    ctx->r2 = ADD32(ctx->r2, -0X65F4);
        goto L_43009FB0;
    // 0x43009F74: addiu       $v0, $v0, -0x65F4
    ctx->r2 = ADD32(ctx->r2, -0X65F4);
L_43009F78:
    // 0x43009F78: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009F7C: b           L_43009FB0
    // 0x43009F80: addiu       $v0, $v0, -0x6988
    ctx->r2 = ADD32(ctx->r2, -0X6988);
        goto L_43009FB0;
    // 0x43009F80: addiu       $v0, $v0, -0x6988
    ctx->r2 = ADD32(ctx->r2, -0X6988);
L_43009F84:
    // 0x43009F84: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009F88: b           L_43009FB0
    // 0x43009F8C: addiu       $v0, $v0, -0x6B38
    ctx->r2 = ADD32(ctx->r2, -0X6B38);
        goto L_43009FB0;
    // 0x43009F8C: addiu       $v0, $v0, -0x6B38
    ctx->r2 = ADD32(ctx->r2, -0X6B38);
L_43009F90:
    // 0x43009F90: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009F94: b           L_43009FB0
    // 0x43009F98: addiu       $v0, $v0, -0x6E78
    ctx->r2 = ADD32(ctx->r2, -0X6E78);
        goto L_43009FB0;
    // 0x43009F98: addiu       $v0, $v0, -0x6E78
    ctx->r2 = ADD32(ctx->r2, -0X6E78);
L_43009F9C:
    // 0x43009F9C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009FA0: b           L_43009FB0
    // 0x43009FA4: addiu       $v0, $v0, -0x7144
    ctx->r2 = ADD32(ctx->r2, -0X7144);
        goto L_43009FB0;
    // 0x43009FA4: addiu       $v0, $v0, -0x7144
    ctx->r2 = ADD32(ctx->r2, -0X7144);
L_43009FA8:
    // 0x43009FA8: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009FAC: addiu       $v0, $v0, -0x73A0
    ctx->r2 = ADD32(ctx->r2, -0X73A0);
L_43009FB0:
    // 0x43009FB0: jalr        $v0
    // 0x43009FB4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x43009FB4: nop

    after_0:
L_43009FB8:
    // 0x43009FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009FBC:
    // 0x43009FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009FC0: jr          $ra
    // 0x43009FC4: nop

    return;
    // 0x43009FC4: nop

;}
RECOMP_FUNC void ovl_enemy_world3_0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_F4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_100(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_10C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_118(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_124(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_130(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_13C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_148(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_154(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_160(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_16C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_178(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_184(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_190(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_19C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world3_1A8(uint8_t* rdram, recomp_context* ctx) {
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
