#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world5_96FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430096FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43009700: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x43009704: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43009708: sltiu       $at, $t6, 0x13
    ctx->r1 = ctx->r14 < 0X13 ? 1 : 0;
    // 0x4300970C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009710: beq         $at, $zero, L_430099D0
    if (ctx->r1 == 0) {
        // 0x43009714: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_430099D0;
    }
    // 0x43009714: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43009718: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4300971C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009720: addu        $at, $at, $t6
    gpr jr_addend_4300972C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009724: lw          $t6, -0x5DEC($at)
    ctx->r14 = ADD32(ctx->r1, -0X5DEC);
    // 0x43009728: nop

    // 0x4300972C: jr          $t6
    // 0x43009730: nop

    switch (jr_addend_4300972C >> 2) {
        case 0: goto L_43009780; break;
        case 1: goto L_43009798; break;
        case 2: goto L_430099D0; break;
        case 3: goto L_4300992C; break;
        case 4: goto L_43009940; break;
        case 5: goto L_43009978; break;
        case 6: goto L_430099D0; break;
        case 7: goto L_430099D0; break;
        case 8: goto L_430099D0; break;
        case 9: goto L_430099D0; break;
        case 10: goto L_430099D0; break;
        case 11: goto L_430099D0; break;
        case 12: goto L_430099D0; break;
        case 13: goto L_43009734; break;
        case 14: goto L_43009994; break;
        case 15: goto L_430099D0; break;
        case 16: goto L_430099D0; break;
        case 17: goto L_430099D0; break;
        case 18: goto L_43009754; break;
        default: switch_error(__func__, 0x4300972C, 0x4300A214);
    }
    // 0x43009730: nop

L_43009734:
    // 0x43009734: jal         0x430096CC
    // 0x43009738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_96CC(rdram, ctx);
        goto after_0;
    // 0x43009738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x4300973C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43009740: addiu       $t8, $t8, -0x6354
    ctx->r24 = ADD32(ctx->r24, -0X6354);
    // 0x43009744: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x43009748: sb          $t7, 0x260($s0)
    MEM_B(0X260, ctx->r16) = ctx->r15;
    // 0x4300974C: b           L_430099D0
    // 0x43009750: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
        goto L_430099D0;
    // 0x43009750: sw          $t8, 0x264($s0)
    MEM_W(0X264, ctx->r16) = ctx->r24;
L_43009754:
    // 0x43009754: jal         0x43001F1C
    // 0x43009758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_1F1C(rdram, ctx);
        goto after_1;
    // 0x43009758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4300975C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009760: jal         0x43002238
    // 0x43009764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world5_2238(rdram, ctx);
        goto after_2;
    // 0x43009764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x43009768: beq         $v0, $zero, L_430099D4
    if (ctx->r2 == 0) {
        // 0x4300976C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_430099D4;
    }
    // 0x4300976C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009770: jal         0x430096CC
    // 0x43009774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_96CC(rdram, ctx);
        goto after_3;
    // 0x43009774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43009778: b           L_430099D4
    // 0x4300977C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430099D4;
    // 0x4300977C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009780:
    // 0x43009780: jal         0x430014D8
    // 0x43009784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_14D8(rdram, ctx);
        goto after_4;
    // 0x43009784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43009788: jal         0x43004E48
    // 0x4300978C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_4E48(rdram, ctx);
        goto after_5;
    // 0x4300978C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x43009790: b           L_430099D4
    // 0x43009794: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430099D4;
    // 0x43009794: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009798:
    // 0x43009798: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x4300979C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x430097A0: beq         $v0, $at, L_430097B8
    if (ctx->r2 == ctx->r1) {
        // 0x430097A4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_430097B8;
    }
    // 0x430097A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x430097A8: beq         $v0, $at, L_43009878
    if (ctx->r2 == ctx->r1) {
        // 0x430097AC: nop
    
            goto L_43009878;
    }
    // 0x430097AC: nop

    // 0x430097B0: b           L_430099D4
    // 0x430097B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430099D4;
    // 0x430097B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430097B8:
    // 0x430097B8: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430097BC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x430097C0: beq         $v1, $zero, L_430097F0
    if (ctx->r3 == 0) {
        // 0x430097C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430097F0;
    }
    // 0x430097C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097C8: beq         $v1, $at, L_43009814
    if (ctx->r3 == ctx->r1) {
        // 0x430097CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009814;
    }
    // 0x430097CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430097D0: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x430097D4: beq         $v1, $at, L_4300983C
    if (ctx->r3 == ctx->r1) {
        // 0x430097D8: addiu       $a1, $zero, 0x211
        ctx->r5 = ADD32(0, 0X211);
            goto L_4300983C;
    }
    // 0x430097D8: addiu       $a1, $zero, 0x211
    ctx->r5 = ADD32(0, 0X211);
    // 0x430097DC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x430097E0: beq         $v1, $at, L_43009814
    if (ctx->r3 == ctx->r1) {
        // 0x430097E4: nop
    
            goto L_43009814;
    }
    // 0x430097E4: nop

    // 0x430097E8: b           L_43009854
    // 0x430097EC: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
        goto L_43009854;
    // 0x430097EC: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_430097F0:
    // 0x430097F0: jal         0x43002238
    // 0x430097F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world5_2238(rdram, ctx);
        goto after_6;
    // 0x430097F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x430097F8: beq         $v0, $zero, L_43009808
    if (ctx->r2 == 0) {
        // 0x430097FC: nop
    
            goto L_43009808;
    }
    // 0x430097FC: nop

    // 0x43009800: jal         0x430096CC
    // 0x43009804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_96CC(rdram, ctx);
        goto after_7;
    // 0x43009804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_43009808:
    // 0x43009808: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300980C: b           L_43009854
    // 0x43009810: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
        goto L_43009854;
    // 0x43009810: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_43009814:
    // 0x43009814: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43009818: lui         $a3, 0x42A2
    ctx->r7 = S32(0X42A2 << 16);
    // 0x4300981C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x43009820: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43009824: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x43009828: jal         0x43004610
    // 0x4300982C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world5_4610(rdram, ctx);
        goto after_8;
    // 0x4300982C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x43009830: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009834: b           L_43009854
    // 0x43009838: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
        goto L_43009854;
    // 0x43009838: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_4300983C:
    // 0x4300983C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009840: jal         0x43001630
    // 0x43009844: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world5_1630(rdram, ctx);
        goto after_9;
    // 0x43009844: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x43009848: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300984C: nop

    // 0x43009850: slti        $at, $v1, 0x2D
    ctx->r1 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
L_43009854:
    // 0x43009854: bne         $at, $zero, L_430099D4
    if (ctx->r1 != 0) {
        // 0x43009858: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_430099D4;
    }
    // 0x43009858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4300985C: jal         0x43004D80
    // 0x43009860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_4D80(rdram, ctx);
        goto after_10;
    // 0x43009860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x43009864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009868: jal         0x43005078
    // 0x4300986C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world5_5078(rdram, ctx);
        goto after_11;
    // 0x4300986C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x43009870: b           L_430099D4
    // 0x43009874: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430099D4;
    // 0x43009874: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009878:
    // 0x43009878: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x4300987C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x43009880: beq         $v1, $zero, L_430098A4
    if (ctx->r3 == 0) {
        // 0x43009884: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430098A4;
    }
    // 0x43009884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009888: beq         $v1, $at, L_430098C8
    if (ctx->r3 == ctx->r1) {
        // 0x4300988C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430098C8;
    }
    // 0x4300988C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009890: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x43009894: beq         $v1, $at, L_430098F0
    if (ctx->r3 == ctx->r1) {
        // 0x43009898: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430098F0;
    }
    // 0x43009898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300989C: b           L_43009908
    // 0x430098A0: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43009908;
    // 0x430098A0: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_430098A4:
    // 0x430098A4: jal         0x43002238
    // 0x430098A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_enemy_world5_2238(rdram, ctx);
        goto after_12;
    // 0x430098A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x430098AC: beq         $v0, $zero, L_430098BC
    if (ctx->r2 == 0) {
        // 0x430098B0: nop
    
            goto L_430098BC;
    }
    // 0x430098B0: nop

    // 0x430098B4: jal         0x430096CC
    // 0x430098B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_96CC(rdram, ctx);
        goto after_13;
    // 0x430098B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
L_430098BC:
    // 0x430098BC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430098C0: b           L_43009908
    // 0x430098C4: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43009908;
    // 0x430098C4: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_430098C8:
    // 0x430098C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x430098CC: lui         $a3, 0x42A2
    ctx->r7 = S32(0X42A2 << 16);
    // 0x430098D0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x430098D4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430098D8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x430098DC: jal         0x43004610
    // 0x430098E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_enemy_world5_4610(rdram, ctx);
        goto after_14;
    // 0x430098E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x430098E4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x430098E8: b           L_43009908
    // 0x430098EC: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
        goto L_43009908;
    // 0x430098EC: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_430098F0:
    // 0x430098F0: addiu       $a1, $zero, 0x1FF
    ctx->r5 = ADD32(0, 0X1FF);
    // 0x430098F4: jal         0x43001630
    // 0x430098F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_world5_1630(rdram, ctx);
        goto after_15;
    // 0x430098F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x430098FC: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009900: nop

    // 0x43009904: slti        $at, $v1, 0x1E
    ctx->r1 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
L_43009908:
    // 0x43009908: bne         $at, $zero, L_430099D4
    if (ctx->r1 != 0) {
        // 0x4300990C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_430099D4;
    }
    // 0x4300990C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009910: jal         0x43004D80
    // 0x43009914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_4D80(rdram, ctx);
        goto after_16;
    // 0x43009914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x43009918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300991C: jal         0x43005078
    // 0x43009920: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world5_5078(rdram, ctx);
        goto after_17;
    // 0x43009920: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x43009924: b           L_430099D4
    // 0x43009928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430099D4;
    // 0x43009928: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300992C:
    // 0x4300992C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009930: jal         0x43004CE0
    // 0x43009934: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    ovl_enemy_world5_4CE0(rdram, ctx);
        goto after_18;
    // 0x43009934: addiu       $a1, $zero, 0xAA
    ctx->r5 = ADD32(0, 0XAA);
    after_18:
    // 0x43009938: b           L_430099D4
    // 0x4300993C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430099D4;
    // 0x4300993C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009940:
    // 0x43009940: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x43009944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009948: bne         $t9, $zero, L_43009968
    if (ctx->r25 != 0) {
        // 0x4300994C: nop
    
            goto L_43009968;
    }
    // 0x4300994C: nop

    // 0x43009950: jal         0x43002238
    // 0x43009954: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world5_2238(rdram, ctx);
        goto after_19;
    // 0x43009954: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_19:
    // 0x43009958: beq         $v0, $zero, L_43009968
    if (ctx->r2 == 0) {
        // 0x4300995C: nop
    
            goto L_43009968;
    }
    // 0x4300995C: nop

    // 0x43009960: jal         0x430096CC
    // 0x43009964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_96CC(rdram, ctx);
        goto after_20;
    // 0x43009964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
L_43009968:
    // 0x43009968: jal         0x43004BF0
    // 0x4300996C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_4BF0(rdram, ctx);
        goto after_21;
    // 0x4300996C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x43009970: b           L_430099D4
    // 0x43009974: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430099D4;
    // 0x43009974: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009978:
    // 0x43009978: jal         0x43004C74
    // 0x4300997C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_4C74(rdram, ctx);
        goto after_22;
    // 0x4300997C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x43009980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009984: jal         0x43005078
    // 0x43009988: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world5_5078(rdram, ctx);
        goto after_23;
    // 0x43009988: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x4300998C: b           L_430099D4
    // 0x43009990: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430099D4;
    // 0x43009990: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43009994:
    // 0x43009994: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x43009998: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300999C: bne         $v1, $at, L_430099BC
    if (ctx->r3 != ctx->r1) {
        // 0x430099A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430099BC;
    }
    // 0x430099A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430099A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430099A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430099AC: jal         0x43001DE0
    // 0x430099B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_enemy_world5_1DE0(rdram, ctx);
        goto after_24;
    // 0x430099B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_24:
    // 0x430099B4: b           L_430099D4
    // 0x430099B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430099D4;
    // 0x430099B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430099BC:
    // 0x430099BC: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x430099C0: bne         $at, $zero, L_430099D0
    if (ctx->r1 != 0) {
        // 0x430099C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430099D0;
    }
    // 0x430099C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430099C8: jal         0x43005078
    // 0x430099CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world5_5078(rdram, ctx);
        goto after_25;
    // 0x430099CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
L_430099D0:
    // 0x430099D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430099D4:
    // 0x430099D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x430099D8: jr          $ra
    // 0x430099DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430099DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world5_99E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430099E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430099E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430099E8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x430099EC: nop

    // 0x430099F0: slti        $at, $v0, 0x3E
    ctx->r1 = SIGNED(ctx->r2) < 0X3E ? 1 : 0;
    // 0x430099F4: bne         $at, $zero, L_43009A14
    if (ctx->r1 != 0) {
        // 0x430099F8: addiu       $at, $zero, 0x3E
        ctx->r1 = ADD32(0, 0X3E);
            goto L_43009A14;
    }
    // 0x430099F8: addiu       $at, $zero, 0x3E
    ctx->r1 = ADD32(0, 0X3E);
    // 0x430099FC: beq         $v0, $at, L_43009A90
    if (ctx->r2 == ctx->r1) {
        // 0x43009A00: addiu       $at, $zero, 0x44
        ctx->r1 = ADD32(0, 0X44);
            goto L_43009A90;
    }
    // 0x43009A00: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x43009A04: beq         $v0, $at, L_43009A6C
    if (ctx->r2 == ctx->r1) {
        // 0x43009A08: nop
    
            goto L_43009A6C;
    }
    // 0x43009A08: nop

    // 0x43009A0C: b           L_43009AA4
    // 0x43009A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43009AA4;
    // 0x43009A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009A14:
    // 0x43009A14: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x43009A18: bne         $at, $zero, L_43009A30
    if (ctx->r1 != 0) {
        // 0x43009A1C: addiu       $at, $zero, 0x3D
        ctx->r1 = ADD32(0, 0X3D);
            goto L_43009A30;
    }
    // 0x43009A1C: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x43009A20: beq         $v0, $at, L_43009A78
    if (ctx->r2 == ctx->r1) {
        // 0x43009A24: nop
    
            goto L_43009A78;
    }
    // 0x43009A24: nop

    // 0x43009A28: b           L_43009AA4
    // 0x43009A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43009AA4;
    // 0x43009A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009A30:
    // 0x43009A30: sltiu       $at, $v0, 0x7
    ctx->r1 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x43009A34: beq         $at, $zero, L_43009AA0
    if (ctx->r1 == 0) {
        // 0x43009A38: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_43009AA0;
    }
    // 0x43009A38: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x43009A3C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009A40: addu        $at, $at, $t6
    gpr jr_addend_43009A4C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009A44: lw          $t6, -0x5DA0($at)
    ctx->r14 = ADD32(ctx->r1, -0X5DA0);
    // 0x43009A48: nop

    // 0x43009A4C: jr          $t6
    // 0x43009A50: nop

    switch (jr_addend_43009A4C >> 2) {
        case 0: goto L_43009A54; break;
        case 1: goto L_43009A60; break;
        case 2: goto L_43009A6C; break;
        case 3: goto L_43009A78; break;
        case 4: goto L_43009A90; break;
        case 5: goto L_43009AA0; break;
        case 6: goto L_43009A84; break;
        default: switch_error(__func__, 0x43009A4C, 0x4300A260);
    }
    // 0x43009A50: nop

L_43009A54:
    // 0x43009A54: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009A58: b           L_43009A98
    // 0x43009A5C: addiu       $v0, $v0, -0x73A0
    ctx->r2 = ADD32(ctx->r2, -0X73A0);
        goto L_43009A98;
    // 0x43009A5C: addiu       $v0, $v0, -0x73A0
    ctx->r2 = ADD32(ctx->r2, -0X73A0);
L_43009A60:
    // 0x43009A60: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009A64: b           L_43009A98
    // 0x43009A68: addiu       $v0, $v0, -0x731C
    ctx->r2 = ADD32(ctx->r2, -0X731C);
        goto L_43009A98;
    // 0x43009A68: addiu       $v0, $v0, -0x731C
    ctx->r2 = ADD32(ctx->r2, -0X731C);
L_43009A6C:
    // 0x43009A6C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009A70: b           L_43009A98
    // 0x43009A74: addiu       $v0, $v0, -0x71F0
    ctx->r2 = ADD32(ctx->r2, -0X71F0);
        goto L_43009A98;
    // 0x43009A74: addiu       $v0, $v0, -0x71F0
    ctx->r2 = ADD32(ctx->r2, -0X71F0);
L_43009A78:
    // 0x43009A78: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009A7C: b           L_43009A98
    // 0x43009A80: addiu       $v0, $v0, -0x70C0
    ctx->r2 = ADD32(ctx->r2, -0X70C0);
        goto L_43009A98;
    // 0x43009A80: addiu       $v0, $v0, -0x70C0
    ctx->r2 = ADD32(ctx->r2, -0X70C0);
L_43009A84:
    // 0x43009A84: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009A88: b           L_43009A98
    // 0x43009A8C: addiu       $v0, $v0, -0x6904
    ctx->r2 = ADD32(ctx->r2, -0X6904);
        goto L_43009A98;
    // 0x43009A8C: addiu       $v0, $v0, -0x6904
    ctx->r2 = ADD32(ctx->r2, -0X6904);
L_43009A90:
    // 0x43009A90: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43009A94: addiu       $v0, $v0, -0x6D18
    ctx->r2 = ADD32(ctx->r2, -0X6D18);
L_43009A98:
    // 0x43009A98: jalr        $v0
    // 0x43009A9C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x43009A9C: nop

    after_0:
L_43009AA0:
    // 0x43009AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009AA4:
    // 0x43009AA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009AA8: jr          $ra
    // 0x43009AAC: nop

    return;
    // 0x43009AAC: nop

;}
RECOMP_FUNC void ovl_enemy_world6_0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_F4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_100(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_10C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_118(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_124(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_130(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_13C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_148(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_154(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_160(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_16C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_178(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_184(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_190(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_19C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_1A8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_1B4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_enemy_world6_1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001C4: jr          $t1
    // 0x430001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
;}
RECOMP_FUNC void ovl_enemy_world6_1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001D0: jr          $t1
    // 0x430001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
;}
RECOMP_FUNC void ovl_enemy_world6_1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001DC: jr          $t1
    // 0x430001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
;}
RECOMP_FUNC void ovl_enemy_world6_1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001E8: jr          $t1
    // 0x430001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
;}
RECOMP_FUNC void ovl_enemy_world6_1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x430001F4: jr          $t1
    // 0x430001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x430001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
;}
RECOMP_FUNC void ovl_enemy_world6_1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430001FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000200: jr          $t1
    // 0x43000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
;}
RECOMP_FUNC void ovl_enemy_world6_208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000208: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300020C: jr          $t1
    // 0x43000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
;}
RECOMP_FUNC void ovl_enemy_world6_214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000214: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000218: jr          $t1
    // 0x4300021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4300021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
;}
RECOMP_FUNC void ovl_enemy_world6_220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000220: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000224: jr          $t1
    // 0x43000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
;}
RECOMP_FUNC void ovl_enemy_world6_22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300022C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000230: jr          $t1
    // 0x43000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
;}
RECOMP_FUNC void ovl_enemy_world6_238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000238: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4300023C: jr          $t1
    // 0x43000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
;}
