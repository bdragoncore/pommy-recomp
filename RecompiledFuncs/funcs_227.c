#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world7_3880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003880: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43003884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003888: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x4300388C: nop

    // 0x43003890: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x43003894: beq         $t6, $zero, L_43003A54
    if (ctx->r14 == 0) {
        // 0x43003898: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43003A54;
    }
    // 0x43003898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300389C: lw          $v1, 0x58($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X58);
    // 0x430038A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x430038A4: addiu       $t7, $v1, -0x17
    ctx->r15 = ADD32(ctx->r3, -0X17);
    // 0x430038A8: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x430038AC: beq         $at, $zero, L_43003A04
    if (ctx->r1 == 0) {
        // 0x430038B0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_43003A04;
    }
    // 0x430038B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430038B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430038B8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430038BC: addu        $at, $at, $t7
    gpr jr_addend_430038C8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x430038C0: lw          $t7, -0x6340($at)
    ctx->r15 = ADD32(ctx->r1, -0X6340);
    // 0x430038C4: nop

    // 0x430038C8: jr          $t7
    // 0x430038CC: nop

    switch (jr_addend_430038C8 >> 2) {
        case 0: goto L_43003950; break;
        case 1: goto L_43003978; break;
        case 2: goto L_43003A04; break;
        case 3: goto L_43003A04; break;
        case 4: goto L_43003A04; break;
        case 5: goto L_43003A04; break;
        case 6: goto L_43003A04; break;
        case 7: goto L_43003A04; break;
        case 8: goto L_43003A04; break;
        case 9: goto L_43003A04; break;
        case 10: goto L_43003A04; break;
        case 11: goto L_43003A04; break;
        case 12: goto L_43003A04; break;
        case 13: goto L_43003A04; break;
        case 14: goto L_430038D0; break;
        case 15: goto L_4300390C; break;
        case 16: goto L_43003A04; break;
        case 17: goto L_43003A04; break;
        case 18: goto L_43003A04; break;
        case 19: goto L_430039A0; break;
        case 20: goto L_430039A0; break;
        case 21: goto L_430039A0; break;
        case 22: goto L_430039A0; break;
        case 23: goto L_430039A0; break;
        default: switch_error(__func__, 0x430038C8, 0x43009CC0);
    }
    // 0x430038CC: nop

L_430038D0:
    // 0x430038D0: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x430038D4: bne         $t8, $zero, L_43003904
    if (ctx->r24 != 0) {
        // 0x430038D8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_43003904;
    }
    // 0x430038D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430038DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430038E0: jal         0x430037B0
    // 0x430038E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_enemy_world7_37B0(rdram, ctx);
        goto after_0;
    // 0x430038E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x430038E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430038EC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x430038F0: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x430038F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430038F8: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x430038FC: b           L_43003A04
    // 0x43003900: sw          $t0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r8;
        goto L_43003A04;
    // 0x43003900: sw          $t0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r8;
L_43003904:
    // 0x43003904: b           L_43003A04
    // 0x43003908: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_43003A04;
    // 0x43003908: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_4300390C:
    // 0x4300390C: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x43003910: sll         $t3, $v0, 6
    ctx->r11 = S32(ctx->r2 << 6);
    // 0x43003914: bne         $v1, $t1, L_43003938
    if (ctx->r3 != ctx->r9) {
        // 0x43003918: nop
    
            goto L_43003938;
    }
    // 0x43003918: nop

    // 0x4300391C: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x43003920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43003924: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x43003928: bne         $at, $zero, L_43003A04
    if (ctx->r1 != 0) {
        // 0x4300392C: nop
    
            goto L_43003A04;
    }
    // 0x4300392C: nop

    // 0x43003930: b           L_43003A04
    // 0x43003934: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
        goto L_43003A04;
    // 0x43003934: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
L_43003938:
    // 0x43003938: bgez        $t3, L_43003948
    if (SIGNED(ctx->r11) >= 0) {
        // 0x4300393C: nop
    
            goto L_43003948;
    }
    // 0x4300393C: nop

    // 0x43003940: b           L_43003A04
    // 0x43003944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_43003A04;
    // 0x43003944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_43003948:
    // 0x43003948: b           L_43003A04
    // 0x4300394C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_43003A04;
    // 0x4300394C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_43003950:
    // 0x43003950: sll         $t4, $v0, 13
    ctx->r12 = S32(ctx->r2 << 13);
    // 0x43003954: bltz        $t4, L_43003970
    if (SIGNED(ctx->r12) < 0) {
        // 0x43003958: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_43003970;
    }
    // 0x43003958: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x4300395C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x43003960: lw          $t6, 0x1DC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1DC);
    // 0x43003964: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x43003968: b           L_43003A04
    // 0x4300396C: sw          $t6, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r14;
        goto L_43003A04;
    // 0x4300396C: sw          $t6, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r14;
L_43003970:
    // 0x43003970: b           L_43003A04
    // 0x43003974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_43003A04;
    // 0x43003974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_43003978:
    // 0x43003978: sll         $t7, $v0, 13
    ctx->r15 = S32(ctx->r2 << 13);
    // 0x4300397C: bltz        $t7, L_43003998
    if (SIGNED(ctx->r15) < 0) {
        // 0x43003980: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_43003998;
    }
    // 0x43003980: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x43003984: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x43003988: lw          $t9, 0x1DC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1DC);
    // 0x4300398C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x43003990: b           L_43003A04
    // 0x43003994: sw          $t9, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r25;
        goto L_43003A04;
    // 0x43003994: sw          $t9, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r25;
L_43003998:
    // 0x43003998: b           L_43003A04
    // 0x4300399C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_43003A04;
    // 0x4300399C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_430039A0:
    // 0x430039A0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430039A4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x430039A8: jal         0x43003844
    // 0x430039AC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_enemy_world7_3844(rdram, ctx);
        goto after_1;
    // 0x430039AC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x430039B0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430039B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x430039B8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x430039BC: beq         $v0, $zero, L_43003A00
    if (ctx->r2 == 0) {
        // 0x430039C0: nop
    
            goto L_43003A00;
    }
    // 0x430039C0: nop

    // 0x430039C4: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x430039C8: nop

    // 0x430039CC: sll         $t0, $v0, 7
    ctx->r8 = S32(ctx->r2 << 7);
    // 0x430039D0: bltz        $t0, L_43003A00
    if (SIGNED(ctx->r8) < 0) {
        // 0x430039D4: sll         $t1, $v0, 13
        ctx->r9 = S32(ctx->r2 << 13);
            goto L_43003A00;
    }
    // 0x430039D4: sll         $t1, $v0, 13
    ctx->r9 = S32(ctx->r2 << 13);
    // 0x430039D8: bgez        $t1, L_430039F8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x430039DC: nop
    
            goto L_430039F8;
    }
    // 0x430039DC: nop

    // 0x430039E0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430039E4: jal         0x43004D80
    // 0x430039E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    ovl_enemy_world7_4D80(rdram, ctx);
        goto after_2;
    // 0x430039E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_2:
    // 0x430039EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430039F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x430039F4: nop

L_430039F8:
    // 0x430039F8: b           L_43003A04
    // 0x430039FC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
        goto L_43003A04;
    // 0x430039FC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
L_43003A00:
    // 0x43003A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_43003A04:
    // 0x43003A04: beq         $a1, $zero, L_43003A34
    if (ctx->r5 == 0) {
        // 0x43003A08: nop
    
            goto L_43003A34;
    }
    // 0x43003A08: nop

    // 0x43003A0C: lw          $t2, 0x58($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X58);
    // 0x43003A10: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x43003A14: beq         $a3, $zero, L_43003A34
    if (ctx->r7 == 0) {
        // 0x43003A18: sw          $t2, 0x5C($a0)
        MEM_W(0X5C, ctx->r4) = ctx->r10;
            goto L_43003A34;
    }
    // 0x43003A18: sw          $t2, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r10;
    // 0x43003A1C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x43003A20: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43003A24: jal         0x43009954
    // 0x43003A28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_3;
    // 0x43003A28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_3:
    // 0x43003A2C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43003A30: nop

L_43003A34:
    // 0x43003A34: lw          $t4, 0x54($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X54);
    // 0x43003A38: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x43003A3C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x43003A40: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x43003A44: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x43003A48: sw          $t3, 0x1DC($a0)
    MEM_W(0X1DC, ctx->r4) = ctx->r11;
    // 0x43003A4C: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
    // 0x43003A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003A54:
    // 0x43003A54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43003A58: jr          $ra
    // 0x43003A5C: nop

    return;
    // 0x43003A5C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_3A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003A60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43003A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003A68: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43003A6C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43003A70: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43003A74: jal         0x430006C4
    // 0x43003A78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x43003A78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x43003A7C: lui         $at, 0xC5FA
    ctx->r1 = S32(0XC5FA << 16);
    // 0x43003A80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43003A84: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43003A88: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x43003A8C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x43003A90: nop

    // 0x43003A94: bc1f        L_43003AA8
    if (!c1cs) {
        // 0x43003A98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43003AA8;
    }
    // 0x43003A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003A9C: jal         0x43005078
    // 0x43003AA0: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_world7_5078(rdram, ctx);
        goto after_1;
    // 0x43003AA0: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_1:
    // 0x43003AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003AA8:
    // 0x43003AA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43003AAC: jr          $ra
    // 0x43003AB0: nop

    return;
    // 0x43003AB0: nop

;}
RECOMP_FUNC void ovl_enemy_world7_3AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003AB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003ABC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43003AC0: lui         $a1, 0x4300
    ctx->r5 = S32(0X4300 << 16);
    // 0x43003AC4: addiu       $a1, $a1, 0x2FB8
    ctx->r5 = ADD32(ctx->r5, 0X2FB8);
    // 0x43003AC8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43003ACC: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x43003AD0: jal         0x43000544
    // 0x43003AD4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    ovl_enemy_world7_544(rdram, ctx);
        goto after_0;
    // 0x43003AD4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x43003AD8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x43003ADC: bne         $v0, $zero, L_43003AEC
    if (ctx->r2 != 0) {
        // 0x43003AE0: sw          $v0, 0x190($v1)
        MEM_W(0X190, ctx->r3) = ctx->r2;
            goto L_43003AEC;
    }
    // 0x43003AE0: sw          $v0, 0x190($v1)
    MEM_W(0X190, ctx->r3) = ctx->r2;
    // 0x43003AE4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43003AE8: sw          $t6, 0x190($v1)
    MEM_W(0X190, ctx->r3) = ctx->r14;
L_43003AEC:
    // 0x43003AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003AF4: jr          $ra
    // 0x43003AF8: nop

    return;
    // 0x43003AF8: nop

;}
RECOMP_FUNC void ovl_enemy_world7_3AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003AFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003B04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43003B08: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x43003B0C: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x43003B10: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B14: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_43003B88;
    }
    // 0x43003B14: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x43003B18: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B1C: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_43003B88;
    }
    // 0x43003B1C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x43003B20: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B24: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_43003B88;
    }
    // 0x43003B24: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x43003B28: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B2C: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_43003B88;
    }
    // 0x43003B2C: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x43003B30: beq         $v0, $at, L_43003B8C
    if (ctx->r2 == ctx->r1) {
        // 0x43003B34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43003B8C;
    }
    // 0x43003B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003B38: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43003B3C: nop

    // 0x43003B40: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x43003B44: bne         $t6, $zero, L_43003B80
    if (ctx->r14 != 0) {
        // 0x43003B48: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_43003B80;
    }
    // 0x43003B48: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x43003B4C: lw          $t7, 0x190($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X190);
    // 0x43003B50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43003B54: bne         $t7, $at, L_43003B78
    if (ctx->r15 != ctx->r1) {
        // 0x43003B58: ori         $t8, $v0, 0x10
        ctx->r24 = ctx->r2 | 0X10;
            goto L_43003B78;
    }
    // 0x43003B58: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
    // 0x43003B5C: jal         0x43003AB4
    // 0x43003B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_3AB4(rdram, ctx);
        goto after_0;
    // 0x43003B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43003B64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43003B68: nop

    // 0x43003B6C: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43003B70: nop

    // 0x43003B74: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
L_43003B78:
    // 0x43003B78: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    // 0x43003B7C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_43003B80:
    // 0x43003B80: nop

    // 0x43003B84: sw          $t9, 0x194($a0)
    MEM_W(0X194, ctx->r4) = ctx->r25;
L_43003B88:
    // 0x43003B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003B8C:
    // 0x43003B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003B90: jr          $ra
    // 0x43003B94: nop

    return;
    // 0x43003B94: nop

;}
RECOMP_FUNC void ovl_enemy_world7_3B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003BA0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43003BA4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43003BA8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43003BAC: jal         0x43005250
    // 0x43003BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_5250(rdram, ctx);
        goto after_0;
    // 0x43003BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43003BB4: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x43003BB8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43003BBC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43003BC0: beq         $a0, $t6, L_43003BE0
    if (ctx->r4 == ctx->r14) {
        // 0x43003BC4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43003BE0;
    }
    // 0x43003BC4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x43003BC8: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x43003BCC: nop

    // 0x43003BD0: bne         $a2, $t7, L_43003BE0
    if (ctx->r6 != ctx->r15) {
        // 0x43003BD4: nop
    
            goto L_43003BE0;
    }
    // 0x43003BD4: nop

    // 0x43003BD8: b           L_43003CBC
    // 0x43003BDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003BDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003BE0:
    // 0x43003BE0: addiu       $v1, $v0, 0x268
    ctx->r3 = ADD32(ctx->r2, 0X268);
    // 0x43003BE4: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x43003BE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x43003BEC: beq         $a0, $t8, L_43003C0C
    if (ctx->r4 == ctx->r24) {
        // 0x43003BF0: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_43003C0C;
    }
    // 0x43003BF0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43003BF4: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x43003BF8: nop

    // 0x43003BFC: bne         $a2, $t9, L_43003C0C
    if (ctx->r6 != ctx->r25) {
        // 0x43003C00: nop
    
            goto L_43003C0C;
    }
    // 0x43003C00: nop

    // 0x43003C04: b           L_43003CBC
    // 0x43003C08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C0C:
    // 0x43003C0C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
L_43003C10:
    // 0x43003C10: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x43003C14: nop

    // 0x43003C18: beq         $a0, $t0, L_43003C38
    if (ctx->r4 == ctx->r8) {
        // 0x43003C1C: nop
    
            goto L_43003C38;
    }
    // 0x43003C1C: nop

    // 0x43003C20: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x43003C24: nop

    // 0x43003C28: bne         $a2, $t1, L_43003C38
    if (ctx->r6 != ctx->r9) {
        // 0x43003C2C: nop
    
            goto L_43003C38;
    }
    // 0x43003C2C: nop

    // 0x43003C30: b           L_43003CBC
    // 0x43003C34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C38:
    // 0x43003C38: lw          $t2, 0x26C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X26C);
    // 0x43003C3C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003C40: beq         $a0, $t2, L_43003C60
    if (ctx->r4 == ctx->r10) {
        // 0x43003C44: nop
    
            goto L_43003C60;
    }
    // 0x43003C44: nop

    // 0x43003C48: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x43003C4C: nop

    // 0x43003C50: bne         $a2, $t3, L_43003C60
    if (ctx->r6 != ctx->r11) {
        // 0x43003C54: nop
    
            goto L_43003C60;
    }
    // 0x43003C54: nop

    // 0x43003C58: b           L_43003CBC
    // 0x43003C5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C60:
    // 0x43003C60: lw          $t4, 0x26C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X26C);
    // 0x43003C64: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003C68: beq         $a0, $t4, L_43003C88
    if (ctx->r4 == ctx->r12) {
        // 0x43003C6C: nop
    
            goto L_43003C88;
    }
    // 0x43003C6C: nop

    // 0x43003C70: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x43003C74: nop

    // 0x43003C78: bne         $a2, $t5, L_43003C88
    if (ctx->r6 != ctx->r13) {
        // 0x43003C7C: nop
    
            goto L_43003C88;
    }
    // 0x43003C7C: nop

    // 0x43003C80: b           L_43003CBC
    // 0x43003C84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C88:
    // 0x43003C88: lw          $t6, 0x26C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X26C);
    // 0x43003C8C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003C90: beq         $a0, $t6, L_43003CB0
    if (ctx->r4 == ctx->r14) {
        // 0x43003C94: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_43003CB0;
    }
    // 0x43003C94: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43003C98: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x43003C9C: nop

    // 0x43003CA0: bne         $a2, $t7, L_43003CB0
    if (ctx->r6 != ctx->r15) {
        // 0x43003CA4: nop
    
            goto L_43003CB0;
    }
    // 0x43003CA4: nop

    // 0x43003CA8: b           L_43003CBC
    // 0x43003CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003CB0:
    // 0x43003CB0: bne         $v0, $a1, L_43003C10
    if (ctx->r2 != ctx->r5) {
        // 0x43003CB4: addiu       $v1, $v1, 0x268
        ctx->r3 = ADD32(ctx->r3, 0X268);
            goto L_43003C10;
    }
    // 0x43003CB4: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003CB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43003CBC:
    // 0x43003CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003CC4: jr          $ra
    // 0x43003CC8: nop

    return;
    // 0x43003CC8: nop

;}
RECOMP_FUNC void ovl_enemy_world7_3CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003CCC: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    // 0x43003CD0: jr          $ra
    // 0x43003CD4: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    return;
    // 0x43003CD4: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_enemy_world7_3CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003CD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43003CDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43003CE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43003CE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43003CE8: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43003CEC: jal         0x43004880
    // 0x43003CF0: nop

    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x43003CF0: nop

    after_0:
    // 0x43003CF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x43003CF8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43003CFC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x43003D00: jal         0x430006C4
    // 0x43003D04: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x43003D04: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x43003D08: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43003D0C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x43003D10: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x43003D14: ori         $t0, $t7, 0x1
    ctx->r8 = ctx->r15 | 0X1;
    // 0x43003D18: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x43003D1C: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x43003D20: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x43003D24: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x43003D28: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x43003D2C: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x43003D30: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x43003D34: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x43003D38: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43003D3C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43003D40: jal         0x430006C4
    // 0x43003D44: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_2;
    // 0x43003D44: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x43003D48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43003D4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43003D50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43003D54: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x43003D58: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x43003D5C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x43003D60: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x43003D64: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43003D68: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x43003D6C: jal         0x430006C4
    // 0x43003D70: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_3;
    // 0x43003D70: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x43003D74: jal         0x430016D8
    // 0x43003D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_16D8(rdram, ctx);
        goto after_4;
    // 0x43003D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43003D7C: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x43003D80: sw          $zero, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = 0;
    // 0x43003D84: sw          $zero, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = 0;
    // 0x43003D88: sw          $zero, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = 0;
    // 0x43003D8C: sw          $t4, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r12;
    // 0x43003D90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x43003D94: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43003D98: lw          $v0, 0x4($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X4);
    // 0x43003D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003DA0: beq         $v0, $at, L_43003DC0
    if (ctx->r2 == ctx->r1) {
        // 0x43003DA4: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_43003DC0;
    }
    // 0x43003DA4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43003DA8: beq         $v0, $at, L_43003DC0
    if (ctx->r2 == ctx->r1) {
        // 0x43003DAC: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_43003DC0;
    }
    // 0x43003DAC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x43003DB0: beq         $v0, $at, L_43003DD4
    if (ctx->r2 == ctx->r1) {
        // 0x43003DB4: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_43003DD4;
    }
    // 0x43003DB4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x43003DB8: b           L_43003DE4
    // 0x43003DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43003DE4;
    // 0x43003DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43003DC0:
    // 0x43003DC0: jal         0x430015C0
    // 0x43003DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_15C0(rdram, ctx);
        goto after_5;
    // 0x43003DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x43003DC8: b           L_43003DE4
    // 0x43003DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43003DE4;
    // 0x43003DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43003DD0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_43003DD4:
    // 0x43003DD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43003DD8: nop

    // 0x43003DDC: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x43003DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43003DE4:
    // 0x43003DE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43003DE8: jr          $ra
    // 0x43003DEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43003DEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_world7_3DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003DF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43003DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003DF8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43003DFC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43003E00: jal         0x43004880
    // 0x43003E04: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x43003E04: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x43003E08: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x43003E0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43003E10: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x43003E14: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x43003E18: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43003E1C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x43003E20: jal         0x43001D10
    // 0x43003E24: nop

    ovl_enemy_world7_1D10(rdram, ctx);
        goto after_1;
    // 0x43003E24: nop

    after_1:
    // 0x43003E28: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43003E2C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x43003E30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43003E34: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x43003E38: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x43003E3C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43003E40: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x43003E44: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43003E48: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003E4C: swc1        $f10, 0x1AC($a2)
    MEM_W(0X1AC, ctx->r6) = ctx->f10.u32l;
    // 0x43003E50: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x43003E54: lwc1        $f8, 0x1AC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X1AC);
    // 0x43003E58: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x43003E5C: swc1        $f8, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f8.u32l;
    // 0x43003E60: swc1        $f4, 0x1D0($a2)
    MEM_W(0X1D0, ctx->r6) = ctx->f4.u32l;
    // 0x43003E64: lwc1        $f6, 0x1D0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X1D0);
    // 0x43003E68: nop

    // 0x43003E6C: swc1        $f6, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f6.u32l;
    // 0x43003E70: lwc1        $f10, -0x62E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X62E0);
    // 0x43003E74: nop

    // 0x43003E78: swc1        $f10, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f10.u32l;
    // 0x43003E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003E80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43003E84: jr          $ra
    // 0x43003E88: nop

    return;
    // 0x43003E88: nop

;}
RECOMP_FUNC void ovl_enemy_world7_3E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003E8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003E90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003E94: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43003E98: jal         0x43005250
    // 0x43003E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_5250(rdram, ctx);
        goto after_0;
    // 0x43003E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43003EA0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x43003EA4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43003EA8: bne         $a1, $t6, L_43003EC8
    if (ctx->r5 != ctx->r14) {
        // 0x43003EAC: lui         $v1, 0x4301
        ctx->r3 = S32(0X4301 << 16);
            goto L_43003EC8;
    }
    // 0x43003EAC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003EB0: addiu       $v1, $v1, -0x5D70
    ctx->r3 = ADD32(ctx->r3, -0X5D70);
    // 0x43003EB4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x43003EB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43003EBC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x43003EC0: b           L_43003FC4
    // 0x43003EC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_43003FC4;
    // 0x43003EC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_43003EC8:
    // 0x43003EC8: addiu       $v1, $v0, 0x268
    ctx->r3 = ADD32(ctx->r2, 0X268);
    // 0x43003ECC: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x43003ED0: nop

    // 0x43003ED4: bne         $a1, $t9, L_43003EFC
    if (ctx->r5 != ctx->r25) {
        // 0x43003ED8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_43003EFC;
    }
    // 0x43003ED8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x43003EDC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003EE0: addiu       $v1, $v1, -0x5D70
    ctx->r3 = ADD32(ctx->r3, -0X5D70);
    // 0x43003EE4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x43003EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43003EEC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x43003EF0: b           L_43003FC4
    // 0x43003EF4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_43003FC4;
    // 0x43003EF4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x43003EF8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_43003EFC:
    // 0x43003EFC: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F00: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_43003F04:
    // 0x43003F04: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x43003F08: nop

    // 0x43003F0C: bne         $a1, $t2, L_43003F30
    if (ctx->r5 != ctx->r10) {
        // 0x43003F10: nop
    
            goto L_43003F30;
    }
    // 0x43003F10: nop

    // 0x43003F14: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F18: addiu       $v1, $v1, -0x5D70
    ctx->r3 = ADD32(ctx->r3, -0X5D70);
    // 0x43003F1C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x43003F20: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x43003F24: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x43003F28: b           L_43003FC4
    // 0x43003F2C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_43003FC4;
    // 0x43003F2C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_43003F30:
    // 0x43003F30: lw          $t5, 0x26C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X26C);
    // 0x43003F34: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F38: bne         $a1, $t5, L_43003F5C
    if (ctx->r5 != ctx->r13) {
        // 0x43003F3C: nop
    
            goto L_43003F5C;
    }
    // 0x43003F3C: nop

    // 0x43003F40: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F44: addiu       $v1, $v1, -0x5D70
    ctx->r3 = ADD32(ctx->r3, -0X5D70);
    // 0x43003F48: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x43003F4C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x43003F50: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x43003F54: b           L_43003FC4
    // 0x43003F58: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_43003FC4;
    // 0x43003F58: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_43003F5C:
    // 0x43003F5C: lw          $t8, 0x26C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X26C);
    // 0x43003F60: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F64: bne         $a1, $t8, L_43003F88
    if (ctx->r5 != ctx->r24) {
        // 0x43003F68: nop
    
            goto L_43003F88;
    }
    // 0x43003F68: nop

    // 0x43003F6C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F70: addiu       $v1, $v1, -0x5D70
    ctx->r3 = ADD32(ctx->r3, -0X5D70);
    // 0x43003F74: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x43003F78: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x43003F7C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x43003F80: b           L_43003FC4
    // 0x43003F84: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_43003FC4;
    // 0x43003F84: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_43003F88:
    // 0x43003F88: lw          $t1, 0x26C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X26C);
    // 0x43003F8C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F90: bne         $a1, $t1, L_43003FB4
    if (ctx->r5 != ctx->r9) {
        // 0x43003F94: nop
    
            goto L_43003FB4;
    }
    // 0x43003F94: nop

    // 0x43003F98: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F9C: addiu       $v1, $v1, -0x5D70
    ctx->r3 = ADD32(ctx->r3, -0X5D70);
    // 0x43003FA0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x43003FA4: addiu       $v0, $a0, 0x3
    ctx->r2 = ADD32(ctx->r4, 0X3);
    // 0x43003FA8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x43003FAC: b           L_43003FC4
    // 0x43003FB0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_43003FC4;
    // 0x43003FB0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_43003FB4:
    // 0x43003FB4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x43003FB8: bne         $a0, $v0, L_43003F04
    if (ctx->r4 != ctx->r2) {
        // 0x43003FBC: addiu       $v1, $v1, 0x268
        ctx->r3 = ADD32(ctx->r3, 0X268);
            goto L_43003F04;
    }
    // 0x43003FBC: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003FC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43003FC4:
    // 0x43003FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003FCC: jr          $ra
    // 0x43003FD0: nop

    return;
    // 0x43003FD0: nop

;}
RECOMP_FUNC void ovl_enemy_world7_3FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003FDC: jal         0x43004880
    // 0x43003FE0: nop

    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x43003FE0: nop

    after_0:
    // 0x43003FE4: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x43003FE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43003FEC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43003FF0: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x43003FF4: beq         $at, $zero, L_43004048
    if (ctx->r1 == 0) {
        // 0x43003FF8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43004048;
    }
    // 0x43003FF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43003FFC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004000: addu        $at, $at, $t7
    gpr jr_addend_4300400C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43004004: lw          $t7, -0x62DC($at)
    ctx->r15 = ADD32(ctx->r1, -0X62DC);
    // 0x43004008: nop

    // 0x4300400C: jr          $t7
    // 0x43004010: nop

    switch (jr_addend_4300400C >> 2) {
        case 0: goto L_43004014; break;
        case 1: goto L_4300401C; break;
        case 2: goto L_43004048; break;
        case 3: goto L_43004048; break;
        case 4: goto L_43004048; break;
        case 5: goto L_43004024; break;
        case 6: goto L_4300402C; break;
        case 7: goto L_43004034; break;
        case 8: goto L_4300403C; break;
        case 9: goto L_43004044; break;
        default: switch_error(__func__, 0x4300400C, 0x43009D24);
    }
    // 0x43004010: nop

L_43004014:
    // 0x43004014: b           L_43004048
    // 0x43004018: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
        goto L_43004048;
    // 0x43004018: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
L_4300401C:
    // 0x4300401C: b           L_43004048
    // 0x43004020: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
        goto L_43004048;
    // 0x43004020: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
L_43004024:
    // 0x43004024: b           L_43004048
    // 0x43004028: addiu       $v1, $zero, 0x3000
    ctx->r3 = ADD32(0, 0X3000);
        goto L_43004048;
    // 0x43004028: addiu       $v1, $zero, 0x3000
    ctx->r3 = ADD32(0, 0X3000);
L_4300402C:
    // 0x4300402C: b           L_43004048
    // 0x43004030: addiu       $v1, $zero, 0x4000
    ctx->r3 = ADD32(0, 0X4000);
        goto L_43004048;
    // 0x43004030: addiu       $v1, $zero, 0x4000
    ctx->r3 = ADD32(0, 0X4000);
L_43004034:
    // 0x43004034: b           L_43004048
    // 0x43004038: addiu       $v1, $zero, 0x5000
    ctx->r3 = ADD32(0, 0X5000);
        goto L_43004048;
    // 0x43004038: addiu       $v1, $zero, 0x5000
    ctx->r3 = ADD32(0, 0X5000);
L_4300403C:
    // 0x4300403C: b           L_43004048
    // 0x43004040: addiu       $v1, $zero, 0x6000
    ctx->r3 = ADD32(0, 0X6000);
        goto L_43004048;
    // 0x43004040: addiu       $v1, $zero, 0x6000
    ctx->r3 = ADD32(0, 0X6000);
L_43004044:
    // 0x43004044: addiu       $v1, $zero, 0x7000
    ctx->r3 = ADD32(0, 0X7000);
L_43004048:
    // 0x43004048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300404C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004050: jr          $ra
    // 0x43004054: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43004054: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_4058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004058: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4300405C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x43004060: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43004064: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43004068: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x4300406C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x43004070: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x43004074: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x43004078: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x4300407C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x43004080: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x43004084: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43004088: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x4300408C: jal         0x43004880
    // 0x43004090: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x43004090: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43004094: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x43004098: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x4300409C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x430040A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x430040A4: lw          $t8, -0x6514($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X6514);
    // 0x430040A8: sll         $t1, $s5, 2
    ctx->r9 = S32(ctx->r21 << 2);
    // 0x430040AC: addu        $t1, $t1, $s5
    ctx->r9 = ADD32(ctx->r9, ctx->r21);
    // 0x430040B0: lui         $t2, 0x4301
    ctx->r10 = S32(0X4301 << 16);
    // 0x430040B4: addiu       $t2, $t2, -0x5D50
    ctx->r10 = ADD32(ctx->r10, -0X5D50);
    // 0x430040B8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x430040BC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x430040C0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x430040C4: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x430040C8: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x430040CC: sw          $t9, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r25;
    // 0x430040D0: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
    // 0x430040D4: sw          $v1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r3;
    // 0x430040D8: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x430040DC: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x430040E0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x430040E4: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x430040E8: lw          $t3, 0x10($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X10);
    // 0x430040EC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x430040F0: swc1        $f20, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f20.u32l;
    // 0x430040F4: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x430040F8: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x430040FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43004100: swc1        $f6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f6.u32l;
    // 0x43004104: lw          $t5, 0x10($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X10);
    // 0x43004108: jal         0x43003FD4
    // 0x4300410C: swc1        $f20, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f20.u32l;
    ovl_enemy_world7_3FD4(rdram, ctx);
        goto after_1;
    // 0x4300410C: swc1        $f20, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f20.u32l;
    after_1:
    // 0x43004110: lw          $t8, 0x10($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X10);
    // 0x43004114: andi        $s4, $s3, 0xFF
    ctx->r20 = ctx->r19 & 0XFF;
    // 0x43004118: ori         $t6, $v0, 0x8300
    ctx->r14 = ctx->r2 | 0X8300;
    // 0x4300411C: or          $t7, $t6, $s4
    ctx->r15 = ctx->r14 | ctx->r20;
    // 0x43004120: sw          $t7, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r15;
    // 0x43004124: lw          $t9, 0x10($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X10);
    // 0x43004128: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300412C: swc1        $f20, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f20.u32l;
    // 0x43004130: lw          $t0, 0x10($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X10);
    // 0x43004134: sll         $t7, $s5, 2
    ctx->r15 = S32(ctx->r21 << 2);
    // 0x43004138: swc1        $f20, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f20.u32l;
    // 0x4300413C: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    // 0x43004140: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x43004144: swc1        $f20, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f20.u32l;
    // 0x43004148: lw          $t2, 0x10($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X10);
    // 0x4300414C: addiu       $t6, $t6, -0x5AF8
    ctx->r14 = ADD32(ctx->r14, -0X5AF8);
    // 0x43004150: swc1        $f20, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f20.u32l;
    // 0x43004154: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x43004158: sll         $t5, $s5, 3
    ctx->r13 = S32(ctx->r21 << 3);
    // 0x4300415C: addu        $t7, $t7, $s5
    ctx->r15 = ADD32(ctx->r15, ctx->r21);
    // 0x43004160: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43004164: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
    // 0x43004168: addiu       $t8, $t8, -0x5BC0
    ctx->r24 = ADD32(ctx->r24, -0X5BC0);
    // 0x4300416C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43004170: sw          $t3, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->r11;
    // 0x43004174: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    // 0x43004178: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x4300417C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x43004180: lw          $t1, 0x14($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X14);
    // 0x43004184: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x43004188: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x4300418C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43004190: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_43004194:
    // 0x43004194: lw          $t2, 0x14($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X14);
    // 0x43004198: lwc1        $f8, 0x20($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X20);
    // 0x4300419C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x430041A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430041A4: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x430041A8: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x430041AC: lw          $t5, 0x14($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X14);
    // 0x430041B0: nop

    // 0x430041B4: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x430041B8: nop

    // 0x430041BC: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x430041C0: swc1        $f20, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f20.u32l;
    // 0x430041C4: lw          $t8, 0x14($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X14);
    // 0x430041C8: lwc1        $f10, 0x1C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x430041CC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x430041D0: nop

    // 0x430041D4: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x430041D8: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x430041DC: lw          $t1, 0x14($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X14);
    // 0x430041E0: nop

    // 0x430041E4: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x430041E8: nop

    // 0x430041EC: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x430041F0: jal         0x43003FD4
    // 0x430041F4: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    ovl_enemy_world7_3FD4(rdram, ctx);
        goto after_2;
    // 0x430041F4: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    after_2:
    // 0x430041F8: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x430041FC: ori         $t4, $v0, 0x8A00
    ctx->r12 = ctx->r2 | 0X8A00;
    // 0x43004200: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x43004204: or          $t5, $t4, $s4
    ctx->r13 = ctx->r12 | ctx->r20;
    // 0x43004208: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x4300420C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x43004210: bne         $s0, $s5, L_43004194
    if (ctx->r16 != ctx->r21) {
        // 0x43004214: sw          $t5, 0x10($t8)
        MEM_W(0X10, ctx->r24) = ctx->r13;
            goto L_43004194;
    }
    // 0x43004214: sw          $t5, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r13;
    // 0x43004218: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4300421C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43004220: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43004224: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x43004228: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4300422C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x43004230: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x43004234: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x43004238: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x4300423C: jr          $ra
    // 0x43004240: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43004240: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_enemy_world7_4244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004244: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004248: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4300424C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43004250: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43004254: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x43004258: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x4300425C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x43004260: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x43004264: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
    // 0x43004268: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x4300426C: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x43004270: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x43004274: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x43004278: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x4300427C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x43004280: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x43004284: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x43004288: jr          $ra
    // 0x4300428C: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x4300428C: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_enemy_world7_4290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004290: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004294: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43004298: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x4300429C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x430042A0: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x430042A4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x430042A8: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x430042AC: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x430042B0: jr          $ra
    // 0x430042B4: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x430042B4: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_enemy_world7_42B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430042B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430042BC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x430042C0: sw          $zero, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = 0;
    // 0x430042C4: sw          $t6, 0x190($a0)
    MEM_W(0X190, ctx->r4) = ctx->r14;
    // 0x430042C8: sw          $zero, 0x194($a0)
    MEM_W(0X194, ctx->r4) = 0;
    // 0x430042CC: sw          $zero, 0x198($a0)
    MEM_W(0X198, ctx->r4) = 0;
    // 0x430042D0: sw          $zero, 0x19C($a0)
    MEM_W(0X19C, ctx->r4) = 0;
    // 0x430042D4: swc1        $f0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->f0.u32l;
    // 0x430042D8: jr          $ra
    // 0x430042DC: swc1        $f0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x430042DC: swc1        $f0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_enemy_world7_42E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430042E0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x430042E4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x430042E8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x430042EC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x430042F0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x430042F4: sw          $t1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r9;
    // 0x430042F8: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x430042FC: sw          $t0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r8;
    // 0x43004300: sw          $t0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r8;
    // 0x43004304: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    // 0x43004308: sw          $a3, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r7;
    // 0x4300430C: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
    // 0x43004310: sw          $a2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r6;
    // 0x43004314: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x43004318: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x4300431C: addiu       $v1, $a0, 0x38
    ctx->r3 = ADD32(ctx->r4, 0X38);
    // 0x43004320: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x43004324: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_43004328:
    // 0x43004328: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x4300432C: sw          $a2, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r6;
    // 0x43004330: sw          $a3, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r7;
    // 0x43004334: sw          $t0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r8;
    // 0x43004338: sw          $t1, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r9;
    // 0x4300433C: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x43004340: sw          $a2, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r6;
    // 0x43004344: sw          $a3, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r7;
    // 0x43004348: sw          $t0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r8;
    // 0x4300434C: sw          $t1, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r9;
    // 0x43004350: sw          $zero, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = 0;
    // 0x43004354: sw          $a2, 0x58($v1)
    MEM_W(0X58, ctx->r3) = ctx->r6;
    // 0x43004358: sw          $a3, 0x5C($v1)
    MEM_W(0X5C, ctx->r3) = ctx->r7;
    // 0x4300435C: sw          $t0, 0x60($v1)
    MEM_W(0X60, ctx->r3) = ctx->r8;
    // 0x43004360: sw          $t1, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r9;
    // 0x43004364: sw          $zero, 0x68($v1)
    MEM_W(0X68, ctx->r3) = 0;
    // 0x43004368: addiu       $v1, $v1, 0x70
    ctx->r3 = ADD32(ctx->r3, 0X70);
    // 0x4300436C: sw          $a2, -0x6C($v1)
    MEM_W(-0X6C, ctx->r3) = ctx->r6;
    // 0x43004370: sw          $a3, -0x68($v1)
    MEM_W(-0X68, ctx->r3) = ctx->r7;
    // 0x43004374: sw          $t0, -0x64($v1)
    MEM_W(-0X64, ctx->r3) = ctx->r8;
    // 0x43004378: sw          $t1, -0x60($v1)
    MEM_W(-0X60, ctx->r3) = ctx->r9;
    // 0x4300437C: bne         $v0, $a0, L_43004328
    if (ctx->r2 != ctx->r4) {
        // 0x43004380: sw          $zero, -0x5C($v1)
        MEM_W(-0X5C, ctx->r3) = 0;
            goto L_43004328;
    }
    // 0x43004380: sw          $zero, -0x5C($v1)
    MEM_W(-0X5C, ctx->r3) = 0;
    // 0x43004384: jr          $ra
    // 0x43004388: nop

    return;
    // 0x43004388: nop

;}
RECOMP_FUNC void ovl_enemy_world7_438C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300438C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43004390: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43004394: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x43004398: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x4300439C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x430043A0: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x430043A4: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x430043A8: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x430043AC: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    // 0x430043B0: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    // 0x430043B4: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x430043B8: jr          $ra
    // 0x430043BC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    return;
    // 0x430043BC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_enemy_world7_43C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430043C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430043C4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x430043C8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x430043CC: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x430043D0: jr          $ra
    // 0x430043D4: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    return;
    // 0x430043D4: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void ovl_enemy_world7_43D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430043D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430043DC: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x430043E0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x430043E4: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x430043E8: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x430043EC: jr          $ra
    // 0x430043F0: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x430043F0: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_enemy_world7_43F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430043F4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430043F8: nop

    // 0x430043FC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x43004400: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x43004404: jr          $ra
    // 0x43004408: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x43004408: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_enemy_world7_440C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300440C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x43004410: sb          $zero, 0x1($a0)
    MEM_B(0X1, ctx->r4) = 0;
    // 0x43004414: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x43004418: jr          $ra
    // 0x4300441C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    return;
    // 0x4300441C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_enemy_world7_4420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004420: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43004424: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x43004428: jr          $ra
    // 0x4300442C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    return;
    // 0x4300442C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_enemy_world7_4430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004430: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004434: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004438: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300443C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004440: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43004444: jal         0x43005218
    // 0x43004448: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_0;
    // 0x43004448: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x4300444C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43004450: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43004454: jal         0x43005218
    // 0x43004458: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_1;
    // 0x43004458: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x4300445C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x43004460: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x43004464: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x43004468: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x4300446C: sw          $zero, 0x60($s0)
    MEM_W(0X60, ctx->r16) = 0;
    // 0x43004470: sw          $v0, 0x180($s0)
    MEM_W(0X180, ctx->r16) = ctx->r2;
    // 0x43004474: sw          $v0, 0x21C($s0)
    MEM_W(0X21C, ctx->r16) = ctx->r2;
    // 0x43004478: jal         0x430042E0
    // 0x4300447C: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    ovl_enemy_world7_42E0(rdram, ctx);
        goto after_2;
    // 0x4300447C: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    after_2:
    // 0x43004480: jal         0x430042B8
    // 0x43004484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_42B8(rdram, ctx);
        goto after_3;
    // 0x43004484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43004488: jal         0x43004290
    // 0x4300448C: addiu       $a0, $s0, 0x1F8
    ctx->r4 = ADD32(ctx->r16, 0X1F8);
    ovl_enemy_world7_4290(rdram, ctx);
        goto after_4;
    // 0x4300448C: addiu       $a0, $s0, 0x1F8
    ctx->r4 = ADD32(ctx->r16, 0X1F8);
    after_4:
    // 0x43004490: jal         0x43004244
    // 0x43004494: addiu       $a0, $s0, 0x1A0
    ctx->r4 = ADD32(ctx->r16, 0X1A0);
    ovl_enemy_world7_4244(rdram, ctx);
        goto after_5;
    // 0x43004494: addiu       $a0, $s0, 0x1A0
    ctx->r4 = ADD32(ctx->r16, 0X1A0);
    after_5:
    // 0x43004498: jal         0x4300438C
    // 0x4300449C: addiu       $a0, $s0, 0x22C
    ctx->r4 = ADD32(ctx->r16, 0X22C);
    ovl_enemy_world7_438C(rdram, ctx);
        goto after_6;
    // 0x4300449C: addiu       $a0, $s0, 0x22C
    ctx->r4 = ADD32(ctx->r16, 0X22C);
    after_6:
    // 0x430044A0: jal         0x430043F4
    // 0x430044A4: addiu       $a0, $s0, 0x220
    ctx->r4 = ADD32(ctx->r16, 0X220);
    ovl_enemy_world7_43F4(rdram, ctx);
        goto after_7;
    // 0x430044A4: addiu       $a0, $s0, 0x220
    ctx->r4 = ADD32(ctx->r16, 0X220);
    after_7:
    // 0x430044A8: jal         0x430043C0
    // 0x430044AC: addiu       $a0, $s0, 0x1D4
    ctx->r4 = ADD32(ctx->r16, 0X1D4);
    ovl_enemy_world7_43C0(rdram, ctx);
        goto after_8;
    // 0x430044AC: addiu       $a0, $s0, 0x1D4
    ctx->r4 = ADD32(ctx->r16, 0X1D4);
    after_8:
    // 0x430044B0: jal         0x430043D8
    // 0x430044B4: addiu       $a0, $s0, 0x1E4
    ctx->r4 = ADD32(ctx->r16, 0X1E4);
    ovl_enemy_world7_43D8(rdram, ctx);
        goto after_9;
    // 0x430044B4: addiu       $a0, $s0, 0x1E4
    ctx->r4 = ADD32(ctx->r16, 0X1E4);
    after_9:
    // 0x430044B8: jal         0x4300440C
    // 0x430044BC: addiu       $a0, $s0, 0x260
    ctx->r4 = ADD32(ctx->r16, 0X260);
    ovl_enemy_world7_440C(rdram, ctx);
        goto after_10;
    // 0x430044BC: addiu       $a0, $s0, 0x260
    ctx->r4 = ADD32(ctx->r16, 0X260);
    after_10:
    // 0x430044C0: jal         0x43004420
    // 0x430044C4: addiu       $a0, $s0, 0x214
    ctx->r4 = ADD32(ctx->r16, 0X214);
    ovl_enemy_world7_4420(rdram, ctx);
        goto after_11;
    // 0x430044C4: addiu       $a0, $s0, 0x214
    ctx->r4 = ADD32(ctx->r16, 0X214);
    after_11:
    // 0x430044C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430044CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430044D0: jr          $ra
    // 0x430044D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430044D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world7_44D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430044D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430044DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430044E0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x430044E4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430044E8: jal         0x43004880
    // 0x430044EC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x430044EC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x430044F0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x430044F4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x430044F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430044FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43004500: swc1        $f4, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->f4.u32l;
    // 0x43004504: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
    // 0x43004508: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x4300450C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x43004510: bne         $t6, $at, L_43004524
    if (ctx->r14 != ctx->r1) {
        // 0x43004514: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_43004524;
    }
    // 0x43004514: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x43004518: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4300451C: b           L_43004534
    // 0x43004520: swc1        $f8, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f8.u32l;
        goto L_43004534;
    // 0x43004520: swc1        $f8, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f8.u32l;
L_43004524:
    // 0x43004524: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004528: lwc1        $f10, -0x62B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X62B4);
    // 0x4300452C: nop

    // 0x43004530: swc1        $f10, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f10.u32l;
L_43004534:
    // 0x43004534: lw          $t7, 0x54($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X54);
    // 0x43004538: nop

    // 0x4300453C: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x43004540: sw          $t8, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->r24;
    // 0x43004544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004548: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300454C: jr          $ra
    // 0x43004550: nop

    return;
    // 0x43004550: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004554: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43004558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300455C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004560: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43004564: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x43004568: bne         $t7, $zero, L_43004604
    if (ctx->r15 != 0) {
        // 0x4300456C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004604;
    }
    // 0x4300456C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004570: lw          $v0, 0x1E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1E4);
    // 0x43004574: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43004578: beq         $v0, $at, L_43004588
    if (ctx->r2 == ctx->r1) {
        // 0x4300457C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_43004588;
    }
    // 0x4300457C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43004580: bne         $v0, $at, L_43004604
    if (ctx->r2 != ctx->r1) {
        // 0x43004584: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004604;
    }
    // 0x43004584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004588:
    // 0x43004588: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x4300458C: jal         0x43004880
    // 0x43004590: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x43004590: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x43004594: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x43004598: lw          $a1, 0x70($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X70);
    // 0x4300459C: lw          $t8, 0x54($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X54);
    // 0x430045A0: lw          $t0, 0x1E4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X1E4);
    // 0x430045A4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x430045A8: ori         $t9, $t8, 0x400
    ctx->r25 = ctx->r24 | 0X400;
    // 0x430045AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x430045B0: beq         $t0, $at, L_430045E0
    if (ctx->r8 == ctx->r1) {
        // 0x430045B4: sw          $t9, 0x54($a3)
        MEM_W(0X54, ctx->r7) = ctx->r25;
            goto L_430045E0;
    }
    // 0x430045B4: sw          $t9, 0x54($a3)
    MEM_W(0X54, ctx->r7) = ctx->r25;
    // 0x430045B8: addiu       $a0, $a1, -0x1
    ctx->r4 = ADD32(ctx->r5, -0X1);
    // 0x430045BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430045C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x430045C4: jal         0x4300034C
    // 0x430045C8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    ovl_enemy_world7_34C(rdram, ctx);
        goto after_1;
    // 0x430045C8: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x430045CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430045D0: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x430045D4: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x430045D8: bne         $v0, $a0, L_430045EC
    if (ctx->r2 != ctx->r4) {
        // 0x430045DC: nop
    
            goto L_430045EC;
    }
    // 0x430045DC: nop

L_430045E0:
    // 0x430045E0: lw          $a1, 0x6C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X6C);
    // 0x430045E4: b           L_430045F8
    // 0x430045E8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
        goto L_430045F8;
    // 0x430045E8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_430045EC:
    // 0x430045EC: lw          $a1, 0x68($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X68);
    // 0x430045F0: nop

    // 0x430045F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_430045F8:
    // 0x430045F8: jal         0x43004FFC
    // 0x430045FC: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    ovl_enemy_world7_4FFC(rdram, ctx);
        goto after_2;
    // 0x430045FC: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_2:
    // 0x43004600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004604:
    // 0x43004604: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43004608: jr          $ra
    // 0x4300460C: nop

    return;
    // 0x4300460C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004610: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x43004614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004618: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300461C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004620: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x43004624: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x43004628: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x4300462C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43004630: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x43004634: jal         0x430006C4
    // 0x43004638: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x43004638: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x4300463C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004640: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x43004644: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43004648: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x4300464C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x43004650: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x43004654: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x43004658: bc1f        L_43004678
    if (!c1cs) {
        // 0x4300465C: swc1        $f4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
            goto L_43004678;
    }
    // 0x4300465C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x43004660: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x43004664: nop

    // 0x43004668: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x4300466C: nop

    // 0x43004670: bc1t        L_4300470C
    if (c1cs) {
        // 0x43004674: lw          $t6, 0x74($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X74);
            goto L_4300470C;
    }
    // 0x43004674: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_43004678:
    // 0x43004678: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x4300467C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x43004680: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x43004684: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x43004688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300468C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43004690: jal         0x43005218
    // 0x43004694: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_1;
    // 0x43004694: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x43004698: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300469C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430046A0: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x430046A4: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x430046A8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x430046AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430046B0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x430046B4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x430046B8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x430046BC: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x430046C0: jal         0x43005218
    // 0x430046C4: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_2;
    // 0x430046C4: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x430046C8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430046CC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430046D0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x430046D4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x430046D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430046DC: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x430046E0: jal         0x43005218
    // 0x430046E4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_3;
    // 0x430046E4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_3:
    // 0x430046E8: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430046EC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x430046F0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x430046F4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x430046F8: nop

    // 0x430046FC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x43004700: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x43004704: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x43004708: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_4300470C:
    // 0x4300470C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x43004710: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x43004714: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43004718: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4300471C: jal         0x430006C4
    // 0x43004720: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_4;
    // 0x43004720: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x43004724: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43004728: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4300472C: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43004730: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43004734: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x43004738: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4300473C: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43004740: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43004744: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43004748: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x4300474C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43004750: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x43004754: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x43004758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300475C: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x43004760: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x43004764: jal         0x43005218
    // 0x43004768: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_5;
    // 0x43004768: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x4300476C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004770: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004774: jr          $ra
    // 0x43004778: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x43004778: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_enemy_world7_477C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300477C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43004780: beq         $a0, $at, L_43004798
    if (ctx->r4 == ctx->r1) {
        // 0x43004784: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_43004798;
    }
    // 0x43004784: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x43004788: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300478C: lw          $v1, -0x5D60($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D60);
    // 0x43004790: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x43004794: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
L_43004798:
    // 0x43004798: jr          $ra
    // 0x4300479C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300479C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_47A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430047A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430047A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430047A8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430047AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x430047B0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430047B4: jal         0x43004880
    // 0x430047B8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_enemy_world7_4880(rdram, ctx);
        goto after_0;
    // 0x430047B8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x430047BC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x430047C0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x430047C4: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x430047C8: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x430047CC: beq         $at, $zero, L_43004858
    if (ctx->r1 == 0) {
        // 0x430047D0: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_43004858;
    }
    // 0x430047D0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x430047D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430047D8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430047DC: addu        $at, $at, $t7
    gpr jr_addend_430047E8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x430047E0: lw          $t7, -0x62B0($at)
    ctx->r15 = ADD32(ctx->r1, -0X62B0);
    // 0x430047E4: nop

    // 0x430047E8: jr          $t7
    // 0x430047EC: nop

    switch (jr_addend_430047E8 >> 2) {
        case 0: goto L_430047F0; break;
        case 1: goto L_430047FC; break;
        case 2: goto L_43004808; break;
        case 3: goto L_43004814; break;
        case 4: goto L_43004820; break;
        case 5: goto L_4300482C; break;
        case 6: goto L_43004838; break;
        case 7: goto L_43004844; break;
        case 8: goto L_43004850; break;
        default: switch_error(__func__, 0x430047E8, 0x43009D50);
    }
    // 0x430047EC: nop

L_430047F0:
    // 0x430047F0: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x430047F4: b           L_4300485C
    // 0x430047F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x430047F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_430047FC:
    // 0x430047FC: lw          $v1, 0x28($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X28);
    // 0x43004800: b           L_4300485C
    // 0x43004804: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004804: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004808:
    // 0x43004808: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x4300480C: b           L_4300485C
    // 0x43004810: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004810: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004814:
    // 0x43004814: lw          $v1, 0x38($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X38);
    // 0x43004818: b           L_4300485C
    // 0x4300481C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x4300481C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004820:
    // 0x43004820: lw          $v1, 0x40($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X40);
    // 0x43004824: b           L_4300485C
    // 0x43004828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300482C:
    // 0x4300482C: lw          $v1, 0x48($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X48);
    // 0x43004830: b           L_4300485C
    // 0x43004834: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004834: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004838:
    // 0x43004838: lw          $v1, 0x50($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X50);
    // 0x4300483C: b           L_4300485C
    // 0x43004840: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004840: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004844:
    // 0x43004844: lw          $v1, 0x58($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X58);
    // 0x43004848: b           L_4300485C
    // 0x4300484C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x4300484C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004850:
    // 0x43004850: lw          $v1, 0x60($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X60);
    // 0x43004854: nop

L_43004858:
    // 0x43004858: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300485C:
    // 0x4300485C: beq         $v1, $at, L_43004874
    if (ctx->r3 == ctx->r1) {
        // 0x43004860: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004874;
    }
    // 0x43004860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004864: jal         0x4300477C
    // 0x43004868: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    ovl_enemy_world7_477C(rdram, ctx);
        goto after_1;
    // 0x43004868: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    after_1:
    // 0x4300486C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x43004870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004874:
    // 0x43004874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004878: jr          $ra
    // 0x4300487C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x4300487C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
;}
RECOMP_FUNC void ovl_enemy_world7_4880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004880: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x43004884: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x43004888: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300488C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43004890: lw          $v1, -0x5D64($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D64);
    // 0x43004894: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x43004898: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4300489C: jr          $ra
    // 0x430048A0: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    return;
    // 0x430048A0: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
;}
RECOMP_FUNC void ovl_enemy_world7_48A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430048A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430048A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430048AC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x430048B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430048B4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x430048B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x430048BC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x430048C0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x430048C4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x430048C8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x430048CC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x430048D0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x430048D4: jal         0x43005218
    // 0x430048D8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_0;
    // 0x430048D8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x430048DC: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x430048E0: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430048E4: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430048E8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x430048EC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x430048F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430048F4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x430048F8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x430048FC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x43004900: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x43004904: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x43004908: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x4300490C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x43004910: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43004914: jal         0x43005218
    // 0x43004918: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_1;
    // 0x43004918: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x4300491C: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x43004920: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43004924: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004928: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x4300492C: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x43004930: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x43004934: bc1t        L_4300499C
    if (c1cs) {
        // 0x43004938: andi        $t9, $t8, 0x7000
        ctx->r25 = ctx->r24 & 0X7000;
            goto L_4300499C;
    }
    // 0x43004938: andi        $t9, $t8, 0x7000
    ctx->r25 = ctx->r24 & 0X7000;
    // 0x4300493C: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x43004940: beq         $t9, $at, L_4300499C
    if (ctx->r25 == ctx->r1) {
        // 0x43004944: nop
    
            goto L_4300499C;
    }
    // 0x43004944: nop

    // 0x43004948: lw          $t0, 0x1C8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X1C8);
    // 0x4300494C: nop

    // 0x43004950: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x43004954: beq         $t1, $zero, L_430049A4
    if (ctx->r9 == 0) {
        // 0x43004958: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430049A4;
    }
    // 0x43004958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300495C: lwc1        $f0, 0x1BC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1BC);
    // 0x43004960: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004964: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x43004968: nop

    // 0x4300496C: bc1f        L_43004980
    if (!c1cs) {
        // 0x43004970: nop
    
            goto L_43004980;
    }
    // 0x43004970: nop

    // 0x43004974: sub.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x43004978: b           L_43004984
    // 0x4300497C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_43004984;
    // 0x4300497C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_43004980:
    // 0x43004980: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_43004984:
    // 0x43004984: lwc1        $f8, 0x1C4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C4);
    // 0x43004988: nop

    // 0x4300498C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x43004990: nop

    // 0x43004994: bc1f        L_430049A4
    if (!c1cs) {
        // 0x43004998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430049A4;
    }
    // 0x43004998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300499C:
    // 0x4300499C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x430049A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430049A4:
    // 0x430049A4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x430049A8: jr          $ra
    // 0x430049AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x430049AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_enemy_world7_49B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430049B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430049B4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x430049B8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430049BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430049C0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x430049C4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x430049C8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x430049CC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430049D0: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x430049D4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x430049D8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x430049DC: jal         0x430006C4
    // 0x430049E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x430049E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x430049E4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x430049E8: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x430049EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430049F0: lwc1        $f2, 0x1BC($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X1BC);
    // 0x430049F4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x430049F8: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x430049FC: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43004A00: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x43004A04: bc1f        L_43004A14
    if (!c1cs) {
        // 0x43004A08: nop
    
            goto L_43004A14;
    }
    // 0x43004A08: nop

    // 0x43004A0C: b           L_43004A98
    // 0x43004A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_43004A98;
    // 0x43004A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43004A14:
    // 0x43004A14: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43004A18: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004A1C: add.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x43004A20: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004A24: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x43004A28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43004A2C: bc1f        L_43004A58
    if (!c1cs) {
        // 0x43004A30: addiu       $a2, $sp, 0x24
        ctx->r6 = ADD32(ctx->r29, 0X24);
            goto L_43004A58;
    }
    // 0x43004A30: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x43004A34: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x43004A38: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x43004A3C: nop

    // 0x43004A40: bc1f        L_43004A78
    if (!c1cs) {
        // 0x43004A44: nop
    
            goto L_43004A78;
    }
    // 0x43004A44: nop

    // 0x43004A48: add.s       $f16, $f8, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x43004A4C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43004A50: b           L_43004A78
    // 0x43004A54: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
        goto L_43004A78;
    // 0x43004A54: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
L_43004A58:
    // 0x43004A58: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x43004A5C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x43004A60: nop

    // 0x43004A64: bc1f        L_43004A78
    if (!c1cs) {
        // 0x43004A68: nop
    
            goto L_43004A78;
    }
    // 0x43004A68: nop

    // 0x43004A6C: sub.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x43004A70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43004A74: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_43004A78:
    // 0x43004A78: beq         $v1, $zero, L_43004A98
    if (ctx->r3 == 0) {
        // 0x43004A7C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_43004A98;
    }
    // 0x43004A7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x43004A80: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x43004A84: jal         0x430006C4
    // 0x43004A88: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x43004A88: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_1:
    // 0x43004A8C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x43004A90: nop

    // 0x43004A94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43004A98:
    // 0x43004A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004A9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43004AA0: jr          $ra
    // 0x43004AA4: nop

    return;
    // 0x43004AA4: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004AA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004AAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004AB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43004AB4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43004AB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43004ABC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43004AC0: jal         0x43000F34
    // 0x43004AC4: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    ovl_enemy_world7_F34(rdram, ctx);
        goto after_0;
    // 0x43004AC4: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x43004AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004ACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004AD0: jr          $ra
    // 0x43004AD4: nop

    return;
    // 0x43004AD4: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004AD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004AE0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43004AE4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43004AE8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43004AEC: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x43004AF0: jal         0x430006C4
    // 0x43004AF4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x43004AF4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43004AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004AFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43004B00: jr          $ra
    // 0x43004B04: nop

    return;
    // 0x43004B04: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004B10: lw          $v0, 0x18C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18C);
    // 0x43004B14: nop

    // 0x43004B18: blez        $v0, L_43004B78
    if (SIGNED(ctx->r2) <= 0) {
        // 0x43004B1C: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_43004B78;
    }
    // 0x43004B1C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x43004B20: sw          $t6, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->r14;
    // 0x43004B24: bne         $t6, $zero, L_43004B64
    if (ctx->r14 != 0) {
        // 0x43004B28: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_43004B64;
    }
    // 0x43004B28: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x43004B2C: sw          $zero, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = 0;
    // 0x43004B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004B34: jal         0x43001468
    // 0x43004B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_1468(rdram, ctx);
        goto after_0;
    // 0x43004B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43004B3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004B40: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x43004B44: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43004B48: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x43004B4C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x43004B50: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43004B54: jal         0x43009954
    // 0x43004B58: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_1;
    // 0x43004B58: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    after_1:
    // 0x43004B5C: b           L_43004B7C
    // 0x43004B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43004B7C;
    // 0x43004B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004B64:
    // 0x43004B64: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x43004B68: bne         $v0, $at, L_43004B7C
    if (ctx->r2 != ctx->r1) {
        // 0x43004B6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004B7C;
    }
    // 0x43004B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004B70: jal         0x43001468
    // 0x43004B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world7_1468(rdram, ctx);
        goto after_2;
    // 0x43004B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_43004B78:
    // 0x43004B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004B7C:
    // 0x43004B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004B80: jr          $ra
    // 0x43004B84: nop

    return;
    // 0x43004B84: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004B88: lw          $t6, 0x19C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X19C);
    // 0x43004B8C: nop

    // 0x43004B90: beq         $t6, $zero, L_43004BC4
    if (ctx->r14 == 0) {
        // 0x43004B94: nop
    
            goto L_43004BC4;
    }
    // 0x43004B94: nop

    // 0x43004B98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004B9C: lwc1        $f4, 0x188($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X188);
    // 0x43004BA0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x43004BA4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x43004BA8: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x43004BAC: bc1f        L_43004BC4
    if (!c1cs) {
        // 0x43004BB0: nop
    
            goto L_43004BC4;
    }
    // 0x43004BB0: nop

    // 0x43004BB4: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43004BB8: swc1        $f0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->f0.u32l;
    // 0x43004BBC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x43004BC0: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
L_43004BC4:
    // 0x43004BC4: jr          $ra
    // 0x43004BC8: nop

    return;
    // 0x43004BC8: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004BD4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43004BD8: jal         0x43009954
    // 0x43004BDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_0;
    // 0x43004BDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x43004BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004BE8: jr          $ra
    // 0x43004BEC: nop

    return;
    // 0x43004BEC: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004BF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004BF8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x43004BFC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43004C00: jal         0x43003844
    // 0x43004C04: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    ovl_enemy_world7_3844(rdram, ctx);
        goto after_0;
    // 0x43004C04: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x43004C08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43004C0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43004C10: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43004C14: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x43004C18: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x43004C1C: bne         $t8, $zero, L_43004C30
    if (ctx->r24 != 0) {
        // 0x43004C20: lui         $t1, 0x4301
        ctx->r9 = S32(0X4301 << 16);
            goto L_43004C30;
    }
    // 0x43004C20: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43004C24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43004C28: nop

    // 0x43004C2C: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
L_43004C30:
    // 0x43004C30: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43004C34: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x43004C38: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x43004C3C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x43004C40: bc1f        L_43004C68
    if (!c1cs) {
        // 0x43004C44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004C68;
    }
    // 0x43004C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004C48: lw          $t1, -0x65E4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X65E4);
    // 0x43004C4C: nop

    // 0x43004C50: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x43004C54: bne         $at, $zero, L_43004C68
    if (ctx->r1 != 0) {
        // 0x43004C58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004C68;
    }
    // 0x43004C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004C5C: jal         0x43004BCC
    // 0x43004C60: nop

    ovl_enemy_world7_4BCC(rdram, ctx);
        goto after_1;
    // 0x43004C60: nop

    after_1:
    // 0x43004C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004C68:
    // 0x43004C68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004C6C: jr          $ra
    // 0x43004C70: nop

    return;
    // 0x43004C70: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004C7C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004C80: nop

    // 0x43004C84: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x43004C88: bne         $t7, $zero, L_43004CA4
    if (ctx->r15 != 0) {
        // 0x43004C8C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_43004CA4;
    }
    // 0x43004C8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43004C90: jal         0x43001F1C
    // 0x43004C94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_0;
    // 0x43004C94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004C98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004C9C: nop

    // 0x43004CA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_43004CA4:
    // 0x43004CA4: jal         0x43001EC8
    // 0x43004CA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_1EC8(rdram, ctx);
        goto after_1;
    // 0x43004CA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x43004CAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004CB0: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x43004CB4: lw          $t8, 0x54($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X54);
    // 0x43004CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43004CBC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x43004CC0: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x43004CC4: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x43004CC8: sw          $t9, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r25;
    // 0x43004CCC: sw          $t1, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r9;
    // 0x43004CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004CD8: jr          $ra
    // 0x43004CDC: nop

    return;
    // 0x43004CDC: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004CE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43004CE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43004CE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43004CEC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43004CF0: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004CF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004CF8: ori         $t7, $t6, 0x2800
    ctx->r15 = ctx->r14 | 0X2800;
    // 0x43004CFC: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x43004D00: jal         0x430022E4
    // 0x43004D04: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    ovl_enemy_world7_22E4(rdram, ctx);
        goto after_0;
    // 0x43004D04: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    after_0:
    // 0x43004D08: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x43004D0C: nop

    // 0x43004D10: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x43004D14: bne         $t9, $zero, L_43004D24
    if (ctx->r25 != 0) {
        // 0x43004D18: nop
    
            goto L_43004D24;
    }
    // 0x43004D18: nop

    // 0x43004D1C: jal         0x430044D8
    // 0x43004D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_44D8(rdram, ctx);
        goto after_1;
    // 0x43004D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_43004D24:
    // 0x43004D24: jal         0x43002040
    // 0x43004D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_2040(rdram, ctx);
        goto after_2;
    // 0x43004D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43004D2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x43004D30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004D34: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x43004D38: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43004D3C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43004D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43004D44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43004D48: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x43004D4C: jal         0x43001F94
    // 0x43004D50: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_enemy_world7_1F94(rdram, ctx);
        goto after_3;
    // 0x43004D50: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x43004D54: jal         0x43004554
    // 0x43004D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world7_4554(rdram, ctx);
        goto after_4;
    // 0x43004D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43004D5C: lw          $t1, 0x54($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X54);
    // 0x43004D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43004D64: ori         $t2, $t1, 0x40
    ctx->r10 = ctx->r9 | 0X40;
    // 0x43004D68: jal         0x43001DB0
    // 0x43004D6C: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    ovl_enemy_world7_1DB0(rdram, ctx);
        goto after_5;
    // 0x43004D6C: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    after_5:
    // 0x43004D70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43004D74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43004D78: jr          $ra
    // 0x43004D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43004D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world7_4D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004D88: jal         0x43001F1C
    // 0x43004D8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_1F1C(rdram, ctx);
        goto after_0;
    // 0x43004D8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004D90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004D94: lui         $at, 0xF9FB
    ctx->r1 = S32(0XF9FB << 16);
    // 0x43004D98: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004D9C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43004DA0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43004DA4: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x43004DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004DB0: jr          $ra
    // 0x43004DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x43004DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_enemy_world7_4DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004DB8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43004DBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004DC0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x43004DC4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x43004DC8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43004DCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43004DD0: jal         0x430006C4
    // 0x43004DD4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x43004DD4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x43004DD8: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x43004DDC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43004DE0: jal         0x430006C4
    // 0x43004DE4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x43004DE4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x43004DE8: bne         $v0, $zero, L_43004E38
    if (ctx->r2 != 0) {
        // 0x43004DEC: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_43004E38;
    }
    // 0x43004DEC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43004DF0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43004DF4: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004DF8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43004DFC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43004E00: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43004E04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43004E08: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x43004E0C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x43004E10: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x43004E14: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x43004E18: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x43004E1C: jal         0x43005218
    // 0x43004E20: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_2;
    // 0x43004E20: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x43004E24: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43004E28: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x43004E2C: nop

    // 0x43004E30: swc1        $f6, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f6.u32l;
    // 0x43004E34: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
L_43004E38:
    // 0x43004E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004E3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x43004E40: jr          $ra
    // 0x43004E44: nop

    return;
    // 0x43004E44: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004E50: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004E54: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x43004E58: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x43004E5C: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x43004E60: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x43004E64: jal         0x43001DB0
    // 0x43004E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_1DB0(rdram, ctx);
        goto after_0;
    // 0x43004E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004E6C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43004E70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43004E74: lw          $t8, 0x54($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X54);
    // 0x43004E78: nop

    // 0x43004E7C: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x43004E80: bltz        $t9, L_43004EA0
    if (SIGNED(ctx->r25) < 0) {
        // 0x43004E84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004EA0;
    }
    // 0x43004E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004E88: jal         0x43000DE4
    // 0x43004E8C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world7_DE4(rdram, ctx);
        goto after_1;
    // 0x43004E8C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x43004E90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004E94: jal         0x43004DB8
    // 0x43004E98: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_enemy_world7_4DB8(rdram, ctx);
        goto after_2;
    // 0x43004E98: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x43004E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004EA0:
    // 0x43004EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004EA4: jr          $ra
    // 0x43004EA8: nop

    return;
    // 0x43004EA8: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004EAC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004EB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004EB4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43004EB8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43004EBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43004EC0: jal         0x430006C4
    // 0x43004EC4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x43004EC4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43004EC8: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43004ECC: addiu       $v0, $v0, -0x6530
    ctx->r2 = ADD32(ctx->r2, -0X6530);
    // 0x43004ED0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x43004ED4: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43004ED8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43004EDC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x43004EE0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x43004EE4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43004EE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43004EEC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43004EF0: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x43004EF4: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x43004EF8: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x43004EFC: jal         0x430006C4
    // 0x43004F00: sw          $t6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r14;
    ovl_enemy_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x43004F00: sw          $t6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r14;
    after_1:
    // 0x43004F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004F08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43004F0C: jr          $ra
    // 0x43004F10: nop

    return;
    // 0x43004F10: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004F14: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004F1C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43004F20: jal         0x43000340
    // 0x43004F24: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_enemy_world7_340(rdram, ctx);
        goto after_0;
    // 0x43004F24: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x43004F28: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x43004F2C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43004F30: addiu       $t8, $t8, -0x6580
    ctx->r24 = ADD32(ctx->r24, -0X6580);
    // 0x43004F34: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x43004F38: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x43004F3C: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x43004F40: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x43004F44: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43004F48: blez        $a1, L_43004FD8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x43004F4C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_43004FD8;
    }
    // 0x43004F4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43004F50: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x43004F54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43004F58: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x43004F5C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43004F60: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x43004F64: nop

    // 0x43004F68: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x43004F6C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43004F70: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43004F74: nop

    // 0x43004F78: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43004F7C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x43004F80: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x43004F84: nop

L_43004F88:
    // 0x43004F88: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x43004F8C: nop

    // 0x43004F90: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x43004F94: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43004F98: beq         $at, $zero, L_43004FC8
    if (ctx->r1 == 0) {
        // 0x43004F9C: nop
    
            goto L_43004FC8;
    }
    // 0x43004F9C: nop

    // 0x43004FA0: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x43004FA4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x43004FA8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x43004FAC: jal         0x43004EAC
    // 0x43004FB0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    ovl_enemy_world7_4EAC(rdram, ctx);
        goto after_1;
    // 0x43004FB0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x43004FB4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x43004FB8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x43004FBC: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x43004FC0: b           L_43004FD8
    // 0x43004FC4: nop

        goto L_43004FD8;
    // 0x43004FC4: nop

L_43004FC8:
    // 0x43004FC8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x43004FCC: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x43004FD0: bne         $at, $zero, L_43004F88
    if (ctx->r1 != 0) {
        // 0x43004FD4: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_43004F88;
    }
    // 0x43004FD4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_43004FD8:
    // 0x43004FD8: bne         $a2, $a1, L_43004FF0
    if (ctx->r6 != ctx->r5) {
        // 0x43004FDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004FF0;
    }
    // 0x43004FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004FE0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x43004FE4: jal         0x43004EAC
    // 0x43004FE8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    ovl_enemy_world7_4EAC(rdram, ctx);
        goto after_2;
    // 0x43004FE8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x43004FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004FF0:
    // 0x43004FF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43004FF4: jr          $ra
    // 0x43004FF8: nop

    return;
    // 0x43004FF8: nop

;}
RECOMP_FUNC void ovl_enemy_world7_4FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005000: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43005004: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x43005008: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4300500C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005010: bne         $a1, $at, L_43005028
    if (ctx->r5 != ctx->r1) {
        // 0x43005014: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_43005028;
    }
    // 0x43005014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43005018: jal         0x43001660
    // 0x4300501C: nop

    ovl_enemy_world7_1660(rdram, ctx);
        goto after_0;
    // 0x4300501C: nop

    after_0:
    // 0x43005020: b           L_43005058
    // 0x43005024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005058;
    // 0x43005024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005028:
    // 0x43005028: slti        $at, $a2, 0xF6
    ctx->r1 = SIGNED(ctx->r6) < 0XF6 ? 1 : 0;
    // 0x4300502C: bne         $at, $zero, L_4300504C
    if (ctx->r1 != 0) {
        // 0x43005030: slti        $at, $a2, 0xFF
        ctx->r1 = SIGNED(ctx->r6) < 0XFF ? 1 : 0;
            goto L_4300504C;
    }
    // 0x43005030: slti        $at, $a2, 0xFF
    ctx->r1 = SIGNED(ctx->r6) < 0XFF ? 1 : 0;
    // 0x43005034: beq         $at, $zero, L_4300504C
    if (ctx->r1 == 0) {
        // 0x43005038: nop
    
            goto L_4300504C;
    }
    // 0x43005038: nop

    // 0x4300503C: jal         0x43004F14
    // 0x43005040: addiu       $a1, $a2, -0xF6
    ctx->r5 = ADD32(ctx->r6, -0XF6);
    ovl_enemy_world7_4F14(rdram, ctx);
        goto after_1;
    // 0x43005040: addiu       $a1, $a2, -0xF6
    ctx->r5 = ADD32(ctx->r6, -0XF6);
    after_1:
    // 0x43005044: b           L_43005058
    // 0x43005048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005058;
    // 0x43005048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300504C:
    // 0x4300504C: jal         0x43004EAC
    // 0x43005050: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_enemy_world7_4EAC(rdram, ctx);
        goto after_2;
    // 0x43005050: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x43005054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005058:
    // 0x43005058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300505C: jr          $ra
    // 0x43005060: nop

    return;
    // 0x43005060: nop

;}
RECOMP_FUNC void ovl_enemy_world7_5064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005064: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43005068: lwc1        $f6, 0x2C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x4300506C: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x43005070: jr          $ra
    // 0x43005074: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x43005074: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_enemy_world7_5078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300507C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005080: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43005084: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43005088: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x4300508C: beq         $t6, $zero, L_430050CC
    if (ctx->r14 == 0) {
        // 0x43005090: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_430050CC;
    }
    // 0x43005090: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x43005094: beq         $a1, $at, L_430050C4
    if (ctx->r5 == ctx->r1) {
        // 0x43005098: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_430050C4;
    }
    // 0x43005098: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x4300509C: beq         $a1, $at, L_430050C4
    if (ctx->r5 == ctx->r1) {
        // 0x430050A0: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_430050C4;
    }
    // 0x430050A0: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x430050A4: beq         $a1, $at, L_430050C4
    if (ctx->r5 == ctx->r1) {
        // 0x430050A8: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_430050C4;
    }
    // 0x430050A8: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x430050AC: beq         $a1, $at, L_430050C4
    if (ctx->r5 == ctx->r1) {
        // 0x430050B0: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_430050C4;
    }
    // 0x430050B0: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x430050B4: beq         $a1, $at, L_430050C4
    if (ctx->r5 == ctx->r1) {
        // 0x430050B8: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_430050C4;
    }
    // 0x430050B8: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x430050BC: bne         $a1, $at, L_430050D0
    if (ctx->r5 != ctx->r1) {
        // 0x430050C0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_430050D0;
    }
    // 0x430050C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_430050C4:
    // 0x430050C4: b           L_43005208
    // 0x430050C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_43005208;
    // 0x430050C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_430050CC:
    // 0x430050CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_430050D0:
    // 0x430050D0: bne         $a1, $at, L_43005114
    if (ctx->r5 != ctx->r1) {
        // 0x430050D4: sll         $t7, $v0, 1
        ctx->r15 = S32(ctx->r2 << 1);
            goto L_43005114;
    }
    // 0x430050D4: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x430050D8: bgez        $t7, L_430050E8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x430050DC: nop
    
            goto L_430050E8;
    }
    // 0x430050DC: nop

    // 0x430050E0: b           L_43005208
    // 0x430050E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_43005208;
    // 0x430050E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_430050E8:
    // 0x430050E8: jal         0x43003868
    // 0x430050EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_3868(rdram, ctx);
        goto after_0;
    // 0x430050EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x430050F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430050F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x430050F8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x430050FC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43005100: sw          $t8, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r24;
    // 0x43005104: jal         0x43009954
    // 0x43005108: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_1;
    // 0x43005108: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    after_1:
    // 0x4300510C: b           L_43005208
    // 0x43005110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43005208;
    // 0x43005110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43005114:
    // 0x43005114: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43005118: bne         $a1, $at, L_4300514C
    if (ctx->r5 != ctx->r1) {
        // 0x4300511C: andi        $t9, $v0, 0x8
        ctx->r25 = ctx->r2 & 0X8;
            goto L_4300514C;
    }
    // 0x4300511C: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x43005120: bne         $t9, $zero, L_43005144
    if (ctx->r25 != 0) {
        // 0x43005124: nop
    
            goto L_43005144;
    }
    // 0x43005124: nop

    // 0x43005128: jal         0x430044D8
    // 0x4300512C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world7_44D8(rdram, ctx);
        goto after_2;
    // 0x4300512C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x43005130: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005134: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x43005138: jal         0x43009954
    // 0x4300513C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world7_9954(rdram, ctx);
        goto after_3;
    // 0x4300513C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
    // 0x43005140: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43005144:
    // 0x43005144: b           L_43005208
    // 0x43005148: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43005208;
    // 0x43005148: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4300514C:
    // 0x4300514C: lw          $t0, 0x58($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X58);
    // 0x43005150: nop

    // 0x43005154: sltiu       $at, $t0, 0x27
    ctx->r1 = ctx->r8 < 0X27 ? 1 : 0;
    // 0x43005158: beq         $at, $zero, L_430051F0
    if (ctx->r1 == 0) {
        // 0x4300515C: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_430051F0;
    }
    // 0x4300515C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x43005160: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005164: addu        $at, $at, $t0
    gpr jr_addend_43005170 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x43005168: lw          $t0, -0x628C($at)
    ctx->r8 = ADD32(ctx->r1, -0X628C);
    // 0x4300516C: nop

    // 0x43005170: jr          $t0
    // 0x43005174: nop

    switch (jr_addend_43005170 >> 2) {
        case 0: goto L_43005178; break;
        case 1: goto L_43005178; break;
        case 2: goto L_430051F0; break;
        case 3: goto L_430051F0; break;
        case 4: goto L_430051F0; break;
        case 5: goto L_430051F0; break;
        case 6: goto L_430051F0; break;
        case 7: goto L_430051F0; break;
        case 8: goto L_430051F0; break;
        case 9: goto L_430051F0; break;
        case 10: goto L_430051F0; break;
        case 11: goto L_430051F0; break;
        case 12: goto L_430051F0; break;
        case 13: goto L_430051F0; break;
        case 14: goto L_430051F0; break;
        case 15: goto L_430051F0; break;
        case 16: goto L_430051F0; break;
        case 17: goto L_430051F0; break;
        case 18: goto L_430051F4; break;
        case 19: goto L_430051F0; break;
        case 20: goto L_430051F0; break;
        case 21: goto L_430051F0; break;
        case 22: goto L_430051F0; break;
        case 23: goto L_43005180; break;
        case 24: goto L_43005180; break;
        case 25: goto L_430051F0; break;
        case 26: goto L_430051F0; break;
        case 27: goto L_430051F0; break;
        case 28: goto L_430051F0; break;
        case 29: goto L_430051F0; break;
        case 30: goto L_430051F0; break;
        case 31: goto L_430051F0; break;
        case 32: goto L_430051F0; break;
        case 33: goto L_430051F0; break;
        case 34: goto L_430051F0; break;
        case 35: goto L_430051F0; break;
        case 36: goto L_430051F0; break;
        case 37: goto L_430051F4; break;
        case 38: goto L_430051AC; break;
        default: switch_error(__func__, 0x43005170, 0x43009D74);
    }
    // 0x43005174: nop

L_43005178:
    // 0x43005178: b           L_430051F4
    // 0x4300517C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_430051F4;
    // 0x4300517C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43005180:
    // 0x43005180: sll         $t1, $v0, 6
    ctx->r9 = S32(ctx->r2 << 6);
    // 0x43005184: bltz        $t1, L_43005190
    if (SIGNED(ctx->r9) < 0) {
        // 0x43005188: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_43005190;
    }
    // 0x43005188: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x4300518C: beq         $a1, $at, L_430051A4
    if (ctx->r5 == ctx->r1) {
        // 0x43005190: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_430051A4;
    }
L_43005190:
    // 0x43005190: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x43005194: beq         $a1, $at, L_430051A4
    if (ctx->r5 == ctx->r1) {
        // 0x43005198: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_430051A4;
    }
    // 0x43005198: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4300519C: bne         $a1, $at, L_430051F4
    if (ctx->r5 != ctx->r1) {
        // 0x430051A0: nop
    
            goto L_430051F4;
    }
    // 0x430051A0: nop

L_430051A4:
    // 0x430051A4: b           L_430051F4
    // 0x430051A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_430051F4;
    // 0x430051A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430051AC:
    // 0x430051AC: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x430051B0: beq         $a1, $at, L_430051C0
    if (ctx->r5 == ctx->r1) {
        // 0x430051B4: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_430051C0;
    }
    // 0x430051B4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x430051B8: bne         $a1, $at, L_430051CC
    if (ctx->r5 != ctx->r1) {
        // 0x430051BC: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_430051CC;
    }
    // 0x430051BC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
L_430051C0:
    // 0x430051C0: b           L_430051F4
    // 0x430051C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_430051F4;
    // 0x430051C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x430051C8: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
L_430051CC:
    // 0x430051CC: beq         $a1, $at, L_430051E0
    if (ctx->r5 == ctx->r1) {
        // 0x430051D0: sll         $t2, $v0, 6
        ctx->r10 = S32(ctx->r2 << 6);
            goto L_430051E0;
    }
    // 0x430051D0: sll         $t2, $v0, 6
    ctx->r10 = S32(ctx->r2 << 6);
    // 0x430051D4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x430051D8: bne         $a1, $at, L_430051F4
    if (ctx->r5 != ctx->r1) {
        // 0x430051DC: nop
    
            goto L_430051F4;
    }
    // 0x430051DC: nop

L_430051E0:
    // 0x430051E0: bgez        $t2, L_430051F4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x430051E4: nop
    
            goto L_430051F4;
    }
    // 0x430051E4: nop

    // 0x430051E8: b           L_430051F4
    // 0x430051EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_430051F4;
    // 0x430051EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430051F0:
    // 0x430051F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430051F4:
    // 0x430051F4: beq         $v1, $zero, L_43005204
    if (ctx->r3 == 0) {
        // 0x430051F8: ori         $t3, $v0, 0x1
        ctx->r11 = ctx->r2 | 0X1;
            goto L_43005204;
    }
    // 0x430051F8: ori         $t3, $v0, 0x1
    ctx->r11 = ctx->r2 | 0X1;
    // 0x430051FC: sw          $a1, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r5;
    // 0x43005200: sw          $t3, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r11;
L_43005204:
    // 0x43005204: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43005208:
    // 0x43005208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300520C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005210: jr          $ra
    // 0x43005214: nop

    return;
    // 0x43005214: nop

;}
RECOMP_FUNC void ovl_enemy_world7_5218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300521C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005220: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43005224: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43005228: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4300522C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43005230: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x43005234: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x43005238: jal         0x430007FC
    // 0x4300523C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world7_7FC(rdram, ctx);
        goto after_0;
    // 0x4300523C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43005240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005244: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43005248: jr          $ra
    // 0x4300524C: nop

    return;
    // 0x4300524C: nop

;}
RECOMP_FUNC void ovl_enemy_world7_5250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005250: addiu       $sp, $sp, -0x290
    ctx->r29 = ADD32(ctx->r29, -0X290);
    // 0x43005254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005258: sw          $a1, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r5;
    // 0x4300525C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43005260: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x43005264: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x43005268: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x4300526C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x43005270: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x43005274: jal         0x43005218
    // 0x43005278: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_enemy_world7_5218(rdram, ctx);
        goto after_0;
    // 0x43005278: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x4300527C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005280: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43005284: jr          $ra
    // 0x43005288: addiu       $sp, $sp, 0x290
    ctx->r29 = ADD32(ctx->r29, 0X290);
    return;
    // 0x43005288: addiu       $sp, $sp, 0x290
    ctx->r29 = ADD32(ctx->r29, 0X290);
;}
RECOMP_FUNC void ovl_enemy_world7_528C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300528C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005290: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005294: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43005298: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4300529C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430052A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430052A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x430052A8: jal         0x43005250
    // 0x430052AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world7_5250(rdram, ctx);
        goto after_0;
    // 0x430052AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x430052B0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430052B4: sw          $zero, -0x5D70($at)
    MEM_W(-0X5D70, ctx->r1) = 0;
    // 0x430052B8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430052BC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x430052C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x430052C4: sw          $t6, -0x5D6C($at)
    MEM_W(-0X5D6C, ctx->r1) = ctx->r14;
    // 0x430052C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x430052CC: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x430052D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430052D4:
    // 0x430052D4: jal         0x43004430
    // 0x430052D8: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
    ovl_enemy_world7_4430(rdram, ctx);
        goto after_1;
    // 0x430052D8: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
    after_1:
    // 0x430052DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x430052E0: bne         $s1, $s2, L_430052D4
    if (ctx->r17 != ctx->r18) {
        // 0x430052E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430052D4;
    }
    // 0x430052E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430052E8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430052EC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430052F0: sw          $s0, -0x5D5C($at)
    MEM_W(-0X5D5C, ctx->r1) = ctx->r16;
    // 0x430052F4: addiu       $a0, $a0, -0x74F0
    ctx->r4 = ADD32(ctx->r4, -0X74F0);
    // 0x430052F8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x430052FC: addiu       $a2, $zero, 0x1800
    ctx->r6 = ADD32(0, 0X1800);
    // 0x43005300: jal         0x43000820
    // 0x43005304: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_enemy_world7_820(rdram, ctx);
        goto after_2;
    // 0x43005304: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x43005308: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300530C: sw          $v0, -0x5D68($at)
    MEM_W(-0X5D68, ctx->r1) = ctx->r2;
    // 0x43005310: jal         0x43000118
    // 0x43005314: addiu       $a0, $zero, 0xBAE
    ctx->r4 = ADD32(0, 0XBAE);
    ovl_enemy_world7_118(rdram, ctx);
        goto after_3;
    // 0x43005314: addiu       $a0, $zero, 0xBAE
    ctx->r4 = ADD32(0, 0XBAE);
    after_3:
    // 0x43005318: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300531C: sw          $v0, -0x5D64($at)
    MEM_W(-0X5D64, ctx->r1) = ctx->r2;
    // 0x43005320: jal         0x43000118
    // 0x43005324: addiu       $a0, $zero, 0xBAD
    ctx->r4 = ADD32(0, 0XBAD);
    ovl_enemy_world7_118(rdram, ctx);
        goto after_4;
    // 0x43005324: addiu       $a0, $zero, 0xBAD
    ctx->r4 = ADD32(0, 0XBAD);
    after_4:
    // 0x43005328: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4300532C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005330: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005334: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43005338: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4300533C: sw          $v0, -0x5D60($at)
    MEM_W(-0X5D60, ctx->r1) = ctx->r2;
    // 0x43005340: jr          $ra
    // 0x43005344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43005344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world7_5348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005348: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300534C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005350: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x43005354: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x43005358: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4300535C: jal         0x43003E8C
    // 0x43005360: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    ovl_enemy_world7_3E8C(rdram, ctx);
        goto after_0;
    // 0x43005360: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x43005364: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43005368: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x4300536C: jal         0x43005250
    // 0x43005370: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_enemy_world7_5250(rdram, ctx);
        goto after_1;
    // 0x43005370: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x43005374: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x43005378: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300537C: addiu       $v1, $v1, -0x5D6C
    ctx->r3 = ADD32(ctx->r3, -0X5D6C);
    // 0x43005380: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x43005384: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005388: bne         $a2, $at, L_43005394
    if (ctx->r6 != ctx->r1) {
        // 0x4300538C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_43005394;
    }
    // 0x4300538C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43005390: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_43005394:
    // 0x43005394: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x43005398: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x4300539C: sw          $a3, 0x180($t7)
    MEM_W(0X180, ctx->r15) = ctx->r7;
    // 0x430053A0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430053A4: jal         0x43004058
    // 0x430053A8: nop

    ovl_enemy_world7_4058(rdram, ctx);
        goto after_2;
    // 0x430053A8: nop

    after_2:
    // 0x430053AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430053B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x430053B4: jr          $ra
    // 0x430053B8: nop

    return;
    // 0x430053B8: nop

;}
