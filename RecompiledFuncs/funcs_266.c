#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_mobj_main_2508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45002508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500250C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45002510: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x45002514: lw          $v0, 0x184($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X184);
    // 0x45002518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4500251C: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x45002520: beq         $t6, $zero, L_450025A8
    if (ctx->r14 == 0) {
        // 0x45002524: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_450025A8;
    }
    // 0x45002524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45002528: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x4500252C: bne         $t7, $zero, L_450025B0
    if (ctx->r15 != 0) {
        // 0x45002530: addiu       $a1, $zero, 0xF
        ctx->r5 = ADD32(0, 0XF);
            goto L_450025B0;
    }
    // 0x45002530: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x45002534: jal         0x45001CE0
    // 0x45002538: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_0;
    // 0x45002538: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x4500253C: lw          $t8, 0x184($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X184);
    // 0x45002540: lw          $v0, 0x218($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X218);
    // 0x45002544: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45002548: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x4500254C: beq         $v0, $at, L_45002594
    if (ctx->r2 == ctx->r1) {
        // 0x45002550: sw          $t9, 0x184($s0)
        MEM_W(0X184, ctx->r16) = ctx->r25;
            goto L_45002594;
    }
    // 0x45002550: sw          $t9, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r25;
    // 0x45002554: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x45002558: bgtz        $t0, L_45002574
    if (SIGNED(ctx->r8) > 0) {
        // 0x4500255C: sw          $t0, 0x218($s0)
        MEM_W(0X218, ctx->r16) = ctx->r8;
            goto L_45002574;
    }
    // 0x4500255C: sw          $t0, 0x218($s0)
    MEM_W(0X218, ctx->r16) = ctx->r8;
    // 0x45002560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002564: jal         0x450024BC
    // 0x45002568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_24BC(rdram, ctx);
        goto after_1;
    // 0x45002568: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x4500256C: b           L_45002584
    // 0x45002570: lw          $t2, 0x184($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X184);
        goto L_45002584;
    // 0x45002570: lw          $t2, 0x184($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X184);
L_45002574:
    // 0x45002574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002578: jal         0x450023C8
    // 0x4500257C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_23C8(rdram, ctx);
        goto after_2;
    // 0x4500257C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x45002580: lw          $t2, 0x184($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X184);
L_45002584:
    // 0x45002584: nop

    // 0x45002588: ori         $t3, $t2, 0x100
    ctx->r11 = ctx->r10 | 0X100;
    // 0x4500258C: b           L_450025B0
    // 0x45002590: sw          $t3, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r11;
        goto L_450025B0;
    // 0x45002590: sw          $t3, 0x184($s0)
    MEM_W(0X184, ctx->r16) = ctx->r11;
L_45002594:
    // 0x45002594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002598: jal         0x450023C8
    // 0x4500259C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_23C8(rdram, ctx);
        goto after_3;
    // 0x4500259C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x450025A0: b           L_450025B4
    // 0x450025A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_450025B4;
    // 0x450025A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450025A8:
    // 0x450025A8: jal         0x450024BC
    // 0x450025AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_24BC(rdram, ctx);
        goto after_4;
    // 0x450025AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_450025B0:
    // 0x450025B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450025B4:
    // 0x450025B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x450025B8: jr          $ra
    // 0x450025BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x450025BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_mobj_main_25C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450025C0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x450025C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450025C8: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x450025CC: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x450025D0: sra         $t0, $v0, 6
    ctx->r8 = S32(SIGNED(ctx->r2) >> 6);
    // 0x450025D4: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x450025D8: bne         $t7, $zero, L_4500264C
    if (ctx->r15 != 0) {
        // 0x450025DC: andi        $t6, $t0, 0xF
        ctx->r14 = ctx->r8 & 0XF;
            goto L_4500264C;
    }
    // 0x450025DC: andi        $t6, $t0, 0xF
    ctx->r14 = ctx->r8 & 0XF;
    // 0x450025E0: beq         $t6, $zero, L_4500264C
    if (ctx->r14 == 0) {
        // 0x450025E4: addiu       $t8, $zero, 0x5
        ctx->r24 = ADD32(0, 0X5);
            goto L_4500264C;
    }
    // 0x450025E4: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x450025E8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x450025EC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x450025F0: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x450025F4: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x450025F8: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x450025FC: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x45002600: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x45002604: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x45002608: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x4500260C: lw          $t4, 0x8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X8);
    // 0x45002610: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x45002614: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x45002618: lw          $t5, 0x10($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X10);
    // 0x4500261C: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x45002620: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x45002624: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x45002628: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x4500262C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x45002630: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x45002634: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x45002638: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4500263C: jal         0x4500109C
    // 0x45002640: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_0;
    // 0x45002640: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x45002644: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x45002648: nop

L_4500264C:
    // 0x4500264C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45002650: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x45002654: jr          $ra
    // 0x45002658: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x45002658: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_mobj_main_265C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500265C: lw          $t6, 0x220($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X220);
    // 0x45002660: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x45002664: and         $t7, $t6, $a1
    ctx->r15 = ctx->r14 & ctx->r5;
    // 0x45002668: beq         $t7, $zero, L_450026C4
    if (ctx->r15 == 0) {
        // 0x4500266C: nop
    
            goto L_450026C4;
    }
    // 0x4500266C: nop

    // 0x45002670: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x45002674: lw          $a3, 0x228($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X228);
    // 0x45002678: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x4500267C: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x45002680: beq         $at, $zero, L_450026C4
    if (ctx->r1 == 0) {
        // 0x45002684: subu        $t8, $t8, $v0
        ctx->r24 = SUB32(ctx->r24, ctx->r2);
            goto L_450026C4;
    }
    // 0x45002684: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x45002688: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x4500268C: addu        $t0, $a0, $t8
    ctx->r8 = ADD32(ctx->r4, ctx->r24);
L_45002690:
    // 0x45002690: lw          $t9, 0x230($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X230);
    // 0x45002694: nop

    // 0x45002698: bne         $a1, $t9, L_450026B4
    if (ctx->r5 != ctx->r25) {
        // 0x4500269C: nop
    
            goto L_450026B4;
    }
    // 0x4500269C: nop

    // 0x450026A0: addiu       $v1, $t0, 0x22C
    ctx->r3 = ADD32(ctx->r8, 0X22C);
    // 0x450026A4: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x450026A8: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x450026AC: jr          $ra
    // 0x450026B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x450026B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_450026B4:
    // 0x450026B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x450026B8: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x450026BC: bne         $at, $zero, L_45002690
    if (ctx->r1 != 0) {
        // 0x450026C0: addiu       $t0, $t0, 0x18
        ctx->r8 = ADD32(ctx->r8, 0X18);
            goto L_45002690;
    }
    // 0x450026C0: addiu       $t0, $t0, 0x18
    ctx->r8 = ADD32(ctx->r8, 0X18);
L_450026C4:
    // 0x450026C4: jr          $ra
    // 0x450026C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x450026C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_mobj_main_26CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450026CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x450026D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450026D4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x450026D8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x450026DC: jal         0x4500265C
    // 0x450026E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    ovl_mobj_main_265C(rdram, ctx);
        goto after_0;
    // 0x450026E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x450026E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x450026E8: beq         $v0, $zero, L_450026F8
    if (ctx->r2 == 0) {
        // 0x450026EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450026F8;
    }
    // 0x450026EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450026F0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x450026F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450026F8:
    // 0x450026F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x450026FC: jr          $ra
    // 0x45002700: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x45002700: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_mobj_main_2704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45002704: lw          $t6, 0x220($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X220);
    // 0x45002708: lw          $v0, 0x228($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X228);
    // 0x4500270C: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x45002710: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x45002714: beq         $at, $zero, L_450027B4
    if (ctx->r1 == 0) {
        // 0x45002718: sw          $t7, 0x220($a0)
        MEM_W(0X220, ctx->r4) = ctx->r15;
            goto L_450027B4;
    }
    // 0x45002718: sw          $t7, 0x220($a0)
    MEM_W(0X220, ctx->r4) = ctx->r15;
    // 0x4500271C: blez        $v0, L_45002744
    if (SIGNED(ctx->r2) <= 0) {
        // 0x45002720: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_45002744;
    }
    // 0x45002720: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x45002724: lw          $a3, 0x8($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X8);
    // 0x45002728: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
L_4500272C:
    // 0x4500272C: lw          $t8, 0x22C($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X22C);
    // 0x45002730: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x45002734: beq         $a3, $t8, L_450027B4
    if (ctx->r7 == ctx->r24) {
        // 0x45002738: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_450027B4;
    }
    // 0x45002738: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x4500273C: bne         $at, $zero, L_4500272C
    if (ctx->r1 != 0) {
        // 0x45002740: addiu       $t0, $t0, 0x18
        ctx->r8 = ADD32(ctx->r8, 0X18);
            goto L_4500272C;
    }
    // 0x45002740: addiu       $t0, $t0, 0x18
    ctx->r8 = ADD32(ctx->r8, 0X18);
L_45002744:
    // 0x45002744: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x45002748: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x4500274C: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x45002750: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x45002754: sw          $t9, 0x228($a0)
    MEM_W(0X228, ctx->r4) = ctx->r25;
    // 0x45002758: addu        $t0, $a0, $t1
    ctx->r8 = ADD32(ctx->r4, ctx->r9);
    // 0x4500275C: sw          $a1, 0x230($t0)
    MEM_W(0X230, ctx->r8) = ctx->r5;
    // 0x45002760: lw          $t2, 0x8($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X8);
    // 0x45002764: nop

    // 0x45002768: sw          $t2, 0x22C($t0)
    MEM_W(0X22C, ctx->r8) = ctx->r10;
    // 0x4500276C: lw          $t3, 0xC($a2)
    ctx->r11 = MEM_W(ctx->r6, 0XC);
    // 0x45002770: nop

    // 0x45002774: sw          $t3, 0x234($t0)
    MEM_W(0X234, ctx->r8) = ctx->r11;
    // 0x45002778: lw          $t4, 0x10($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X10);
    // 0x4500277C: nop

    // 0x45002780: lwc1        $f4, 0x0($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X0);
    // 0x45002784: nop

    // 0x45002788: swc1        $f4, 0x238($t0)
    MEM_W(0X238, ctx->r8) = ctx->f4.u32l;
    // 0x4500278C: lw          $t5, 0x10($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X10);
    // 0x45002790: nop

    // 0x45002794: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x45002798: nop

    // 0x4500279C: swc1        $f6, 0x23C($t0)
    MEM_W(0X23C, ctx->r8) = ctx->f6.u32l;
    // 0x450027A0: lw          $t6, 0x10($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X10);
    // 0x450027A4: nop

    // 0x450027A8: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x450027AC: nop

    // 0x450027B0: swc1        $f8, 0x240($t0)
    MEM_W(0X240, ctx->r8) = ctx->f8.u32l;
L_450027B4:
    // 0x450027B4: jr          $ra
    // 0x450027B8: nop

    return;
    // 0x450027B8: nop

;}
RECOMP_FUNC void ovl_mobj_main_27BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450027BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x450027C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x450027C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x450027C8: lw          $v1, 0x224($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X224);
    // 0x450027CC: lw          $a1, 0x220($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X220);
    // 0x450027D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x450027D4: beq         $a1, $v1, L_450029EC
    if (ctx->r5 == ctx->r3) {
        // 0x450027D8: andi        $v0, $a1, 0x1
        ctx->r2 = ctx->r5 & 0X1;
            goto L_450029EC;
    }
    // 0x450027D8: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x450027DC: beq         $v0, $zero, L_45002824
    if (ctx->r2 == 0) {
        // 0x450027E0: andi        $t6, $v1, 0x1
        ctx->r14 = ctx->r3 & 0X1;
            goto L_45002824;
    }
    // 0x450027E0: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x450027E4: bne         $t6, $zero, L_45002824
    if (ctx->r14 != 0) {
        // 0x450027E8: nop
    
            goto L_45002824;
    }
    // 0x450027E8: nop

    // 0x450027EC: jal         0x450026CC
    // 0x450027F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_26CC(rdram, ctx);
        goto after_0;
    // 0x450027F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x450027F4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x450027F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450027FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x45002800: jal         0x45001CE0
    // 0x45002804: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_1;
    // 0x45002804: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_1:
    // 0x45002808: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x4500280C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002810: jal         0x45001CE0
    // 0x45002814: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_2;
    // 0x45002814: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_2:
    // 0x45002818: lw          $a1, 0x220($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X220);
    // 0x4500281C: b           L_4500286C
    // 0x45002820: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
        goto L_4500286C;
    // 0x45002820: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
L_45002824:
    // 0x45002824: bne         $v0, $zero, L_45002868
    if (ctx->r2 != 0) {
        // 0x45002828: andi        $t7, $v1, 0x1
        ctx->r15 = ctx->r3 & 0X1;
            goto L_45002868;
    }
    // 0x45002828: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x4500282C: beq         $t7, $zero, L_45002868
    if (ctx->r15 == 0) {
        // 0x45002830: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45002868;
    }
    // 0x45002830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002834: jal         0x450026CC
    // 0x45002838: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_mobj_main_26CC(rdram, ctx);
        goto after_3;
    // 0x45002838: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x4500283C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x45002840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002844: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x45002848: jal         0x45001CE0
    // 0x4500284C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_4;
    // 0x4500284C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_4:
    // 0x45002850: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x45002854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002858: jal         0x45001CE0
    // 0x4500285C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_5;
    // 0x4500285C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_5:
    // 0x45002860: lw          $a1, 0x220($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X220);
    // 0x45002864: nop

L_45002868:
    // 0x45002868: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
L_4500286C:
    // 0x4500286C: beq         $v0, $zero, L_450028AC
    if (ctx->r2 == 0) {
        // 0x45002870: nop
    
            goto L_450028AC;
    }
    // 0x45002870: nop

    // 0x45002874: lw          $t8, 0x224($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X224);
    // 0x45002878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500287C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x45002880: bne         $t9, $zero, L_450028AC
    if (ctx->r25 != 0) {
        // 0x45002884: nop
    
            goto L_450028AC;
    }
    // 0x45002884: nop

    // 0x45002888: jal         0x450026CC
    // 0x4500288C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_mobj_main_26CC(rdram, ctx);
        goto after_6;
    // 0x4500288C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x45002890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002894: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x45002898: jal         0x45001CE0
    // 0x4500289C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_7;
    // 0x4500289C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_7:
    // 0x450028A0: lw          $a1, 0x220($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X220);
    // 0x450028A4: b           L_450028EC
    // 0x450028A8: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
        goto L_450028EC;
    // 0x450028A8: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
L_450028AC:
    // 0x450028AC: bne         $v0, $zero, L_450028EC
    if (ctx->r2 != 0) {
        // 0x450028B0: andi        $v0, $a1, 0x4
        ctx->r2 = ctx->r5 & 0X4;
            goto L_450028EC;
    }
    // 0x450028B0: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
    // 0x450028B4: lw          $t0, 0x224($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X224);
    // 0x450028B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450028BC: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x450028C0: beq         $t1, $zero, L_450028EC
    if (ctx->r9 == 0) {
        // 0x450028C4: andi        $v0, $a1, 0x4
        ctx->r2 = ctx->r5 & 0X4;
            goto L_450028EC;
    }
    // 0x450028C4: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
    // 0x450028C8: jal         0x450026CC
    // 0x450028CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_mobj_main_26CC(rdram, ctx);
        goto after_8;
    // 0x450028CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x450028D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450028D4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x450028D8: jal         0x45001CE0
    // 0x450028DC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_9;
    // 0x450028DC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_9:
    // 0x450028E0: lw          $a1, 0x220($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X220);
    // 0x450028E4: nop

    // 0x450028E8: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
L_450028EC:
    // 0x450028EC: beq         $v0, $zero, L_450028F0
    if (ctx->r2 == 0) {
        // 0x450028F0: andi        $v0, $a1, 0x8
        ctx->r2 = ctx->r5 & 0X8;
            goto L_450028F0;
    }
L_450028F0:
    // 0x450028F0: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x450028F4: beq         $v0, $zero, L_450028F8
    if (ctx->r2 == 0) {
        // 0x450028F8: andi        $v0, $a1, 0x10
        ctx->r2 = ctx->r5 & 0X10;
            goto L_450028F8;
    }
L_450028F8:
    // 0x450028F8: andi        $v0, $a1, 0x10
    ctx->r2 = ctx->r5 & 0X10;
    // 0x450028FC: beq         $v0, $zero, L_4500293C
    if (ctx->r2 == 0) {
        // 0x45002900: nop
    
            goto L_4500293C;
    }
    // 0x45002900: nop

    // 0x45002904: lw          $t6, 0x224($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X224);
    // 0x45002908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500290C: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x45002910: bne         $t7, $zero, L_4500293C
    if (ctx->r15 != 0) {
        // 0x45002914: nop
    
            goto L_4500293C;
    }
    // 0x45002914: nop

    // 0x45002918: jal         0x450026CC
    // 0x4500291C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_mobj_main_26CC(rdram, ctx);
        goto after_10;
    // 0x4500291C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_10:
    // 0x45002920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002924: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x45002928: jal         0x45001CE0
    // 0x4500292C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_11;
    // 0x4500292C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_11:
    // 0x45002930: lw          $a1, 0x220($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X220);
    // 0x45002934: b           L_4500297C
    // 0x45002938: andi        $v0, $a1, 0x20
    ctx->r2 = ctx->r5 & 0X20;
        goto L_4500297C;
    // 0x45002938: andi        $v0, $a1, 0x20
    ctx->r2 = ctx->r5 & 0X20;
L_4500293C:
    // 0x4500293C: bne         $v0, $zero, L_4500297C
    if (ctx->r2 != 0) {
        // 0x45002940: andi        $v0, $a1, 0x20
        ctx->r2 = ctx->r5 & 0X20;
            goto L_4500297C;
    }
    // 0x45002940: andi        $v0, $a1, 0x20
    ctx->r2 = ctx->r5 & 0X20;
    // 0x45002944: lw          $t8, 0x224($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X224);
    // 0x45002948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500294C: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x45002950: beq         $t9, $zero, L_4500297C
    if (ctx->r25 == 0) {
        // 0x45002954: andi        $v0, $a1, 0x20
        ctx->r2 = ctx->r5 & 0X20;
            goto L_4500297C;
    }
    // 0x45002954: andi        $v0, $a1, 0x20
    ctx->r2 = ctx->r5 & 0X20;
    // 0x45002958: jal         0x450026CC
    // 0x4500295C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_mobj_main_26CC(rdram, ctx);
        goto after_12;
    // 0x4500295C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_12:
    // 0x45002960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002964: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x45002968: jal         0x45001CE0
    // 0x4500296C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_13;
    // 0x4500296C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_13:
    // 0x45002970: lw          $a1, 0x220($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X220);
    // 0x45002974: nop

    // 0x45002978: andi        $v0, $a1, 0x20
    ctx->r2 = ctx->r5 & 0X20;
L_4500297C:
    // 0x4500297C: beq         $v0, $zero, L_450029B8
    if (ctx->r2 == 0) {
        // 0x45002980: nop
    
            goto L_450029B8;
    }
    // 0x45002980: nop

    // 0x45002984: lw          $t0, 0x224($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X224);
    // 0x45002988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4500298C: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x45002990: bne         $t1, $zero, L_450029B8
    if (ctx->r9 != 0) {
        // 0x45002994: nop
    
            goto L_450029B8;
    }
    // 0x45002994: nop

    // 0x45002998: jal         0x450026CC
    // 0x4500299C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_mobj_main_26CC(rdram, ctx);
        goto after_14;
    // 0x4500299C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_14:
    // 0x450029A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450029A4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x450029A8: jal         0x45001CE0
    // 0x450029AC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_15;
    // 0x450029AC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_15:
    // 0x450029B0: b           L_450029F0
    // 0x450029B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_450029F0;
    // 0x450029B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450029B8:
    // 0x450029B8: bne         $v0, $zero, L_450029F0
    if (ctx->r2 != 0) {
        // 0x450029BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_450029F0;
    }
    // 0x450029BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x450029C0: lw          $t2, 0x224($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X224);
    // 0x450029C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450029C8: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x450029CC: beq         $t3, $zero, L_450029F0
    if (ctx->r11 == 0) {
        // 0x450029D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_450029F0;
    }
    // 0x450029D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x450029D4: jal         0x450026CC
    // 0x450029D8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_mobj_main_26CC(rdram, ctx);
        goto after_16;
    // 0x450029D8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_16:
    // 0x450029DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450029E0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x450029E4: jal         0x45001CE0
    // 0x450029E8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_17;
    // 0x450029E8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_17:
L_450029EC:
    // 0x450029EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_450029F0:
    // 0x450029F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x450029F4: jr          $ra
    // 0x450029F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x450029F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_mobj_main_29FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450029FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45002A00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45002A04: lw          $t6, 0x2A4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2A4);
    // 0x45002A08: nop

    // 0x45002A0C: and         $t7, $t6, $a1
    ctx->r15 = ctx->r14 & ctx->r5;
    // 0x45002A10: beq         $t7, $zero, L_45002A20
    if (ctx->r15 == 0) {
        // 0x45002A14: addiu       $a1, $zero, 0xDF
        ctx->r5 = ADD32(0, 0XDF);
            goto L_45002A20;
    }
    // 0x45002A14: addiu       $a1, $zero, 0xDF
    ctx->r5 = ADD32(0, 0XDF);
    // 0x45002A18: jal         0x45000F50
    // 0x45002A1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_mobj_main_F50(rdram, ctx);
        goto after_0;
    // 0x45002A1C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
L_45002A20:
    // 0x45002A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45002A24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45002A28: jr          $ra
    // 0x45002A2C: nop

    return;
    // 0x45002A2C: nop

;}
RECOMP_FUNC void ovl_mobj_main_2A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45002A30: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x45002A34: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x45002A38: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x45002A3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45002A40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45002A44: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x45002A48: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x45002A4C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x45002A50: jal         0x450006C4
    // 0x45002A54: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45002A54: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x45002A58: addiu       $a2, $s1, 0x8
    ctx->r6 = ADD32(ctx->r17, 0X8);
    // 0x45002A5C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x45002A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002A64: jal         0x45001CE0
    // 0x45002A68: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_1;
    // 0x45002A68: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_1:
    // 0x45002A6C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x45002A70: nop

    // 0x45002A74: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x45002A78: beq         $at, $zero, L_45002C20
    if (ctx->r1 == 0) {
        // 0x45002A7C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_45002C20;
    }
    // 0x45002A7C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x45002A80: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45002A84: addu        $at, $at, $t6
    gpr jr_addend_45002A90 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x45002A88: lw          $t6, 0x1C78($at)
    ctx->r14 = ADD32(ctx->r1, 0X1C78);
    // 0x45002A8C: nop

    // 0x45002A90: jr          $t6
    // 0x45002A94: nop

    switch (jr_addend_45002A90 >> 2) {
        case 0: goto L_45002A98; break;
        case 1: goto L_45002B18; break;
        case 2: goto L_45002B54; break;
        case 3: goto L_45002BE8; break;
        case 4: goto L_45002C20; break;
        case 5: goto L_45002C10; break;
        default: switch_error(__func__, 0x45002A90, 0x45011C78);
    }
    // 0x45002A94: nop

L_45002A98:
    // 0x45002A98: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x45002A9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x45002AA0: bne         $v0, $at, L_45002AD4
    if (ctx->r2 != ctx->r1) {
        // 0x45002AA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45002AD4;
    }
    // 0x45002AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002AA8: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x45002AAC: ori         $at, $zero, 0x8040
    ctx->r1 = 0 | 0X8040;
    // 0x45002AB0: slt         $at, $v0, $at
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x45002AB4: beq         $at, $zero, L_45002AE8
    if (ctx->r1 == 0) {
        // 0x45002AB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45002AE8;
    }
    // 0x45002AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002ABC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x45002AC0: jal         0x45002704
    // 0x45002AC4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_mobj_main_2704(rdram, ctx);
        goto after_2;
    // 0x45002AC4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x45002AC8: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x45002ACC: b           L_45002AEC
    // 0x45002AD0: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
        goto L_45002AEC;
    // 0x45002AD0: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
L_45002AD4:
    // 0x45002AD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x45002AD8: jal         0x45002704
    // 0x45002ADC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_mobj_main_2704(rdram, ctx);
        goto after_3;
    // 0x45002ADC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x45002AE0: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x45002AE4: nop

L_45002AE8:
    // 0x45002AE8: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
L_45002AEC:
    // 0x45002AEC: bne         $v0, $at, L_45002C20
    if (ctx->r2 != ctx->r1) {
        // 0x45002AF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45002C20;
    }
    // 0x45002AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002AF4: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x45002AF8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45002AFC: sw          $t7, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->r15;
    // 0x45002B00: lw          $t8, 0xC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC);
    // 0x45002B04: addiu       $a2, $s0, 0x170
    ctx->r6 = ADD32(ctx->r16, 0X170);
    // 0x45002B08: jal         0x45001CE0
    // 0x45002B0C: sw          $t8, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->r24;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_4;
    // 0x45002B0C: sw          $t8, 0x174($s0)
    MEM_W(0X174, ctx->r16) = ctx->r24;
    after_4:
    // 0x45002B10: b           L_45002C24
    // 0x45002B14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45002C24;
    // 0x45002B14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45002B18:
    // 0x45002B18: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x45002B1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x45002B20: bne         $v0, $at, L_45002B40
    if (ctx->r2 != ctx->r1) {
        // 0x45002B24: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45002B40;
    }
    // 0x45002B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002B2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x45002B30: jal         0x45002704
    // 0x45002B34: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_mobj_main_2704(rdram, ctx);
        goto after_5;
    // 0x45002B34: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x45002B38: b           L_45002C24
    // 0x45002B3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45002C24;
    // 0x45002B3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45002B40:
    // 0x45002B40: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45002B44: jal         0x45002704
    // 0x45002B48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_mobj_main_2704(rdram, ctx);
        goto after_6;
    // 0x45002B48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x45002B4C: b           L_45002C24
    // 0x45002B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45002C24;
    // 0x45002B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45002B54:
    // 0x45002B54: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x45002B58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x45002B5C: beq         $v0, $at, L_45002B70
    if (ctx->r2 == ctx->r1) {
        // 0x45002B60: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_45002B70;
    }
    // 0x45002B60: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x45002B64: bne         $at, $zero, L_45002C20
    if (ctx->r1 != 0) {
        // 0x45002B68: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_45002C20;
    }
    // 0x45002B68: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x45002B6C: beq         $at, $zero, L_45002C20
    if (ctx->r1 == 0) {
        // 0x45002B70: slti        $at, $v0, 0x4
        ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
            goto L_45002C20;
    }
L_45002B70:
    // 0x45002B70: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x45002B74: bne         $at, $zero, L_45002BC0
    if (ctx->r1 != 0) {
        // 0x45002B78: slti        $at, $v0, 0xB
        ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
            goto L_45002BC0;
    }
    // 0x45002B78: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x45002B7C: beq         $at, $zero, L_45002BC0
    if (ctx->r1 == 0) {
        // 0x45002B80: addiu       $t9, $v0, -0x4
        ctx->r25 = ADD32(ctx->r2, -0X4);
            goto L_45002BC0;
    }
    // 0x45002B80: addiu       $t9, $v0, -0x4
    ctx->r25 = ADD32(ctx->r2, -0X4);
    // 0x45002B84: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x45002B88: lui         $a1, 0x4501
    ctx->r5 = S32(0X4501 << 16);
    // 0x45002B8C: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x45002B90: lw          $a1, -0x710($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X710);
    // 0x45002B94: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x45002B98: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x45002B9C: jal         0x45001CE0
    // 0x45002BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_7;
    // 0x45002BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x45002BA4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x45002BA8: lui         $a1, 0x4501
    ctx->r5 = S32(0X4501 << 16);
    // 0x45002BAC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x45002BB0: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x45002BB4: lw          $a1, -0x6E4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6E4);
    // 0x45002BB8: jal         0x450029FC
    // 0x45002BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_29FC(rdram, ctx);
        goto after_8;
    // 0x45002BBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_45002BC0:
    // 0x45002BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002BC4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x45002BC8: jal         0x45002704
    // 0x45002BCC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_mobj_main_2704(rdram, ctx);
        goto after_9;
    // 0x45002BCC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x45002BD0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x45002BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002BD8: jal         0x45001CE0
    // 0x45002BDC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_10;
    // 0x45002BDC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_10:
    // 0x45002BE0: b           L_45002C24
    // 0x45002BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45002C24;
    // 0x45002BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45002BE8:
    // 0x45002BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002BEC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x45002BF0: jal         0x45002704
    // 0x45002BF4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_mobj_main_2704(rdram, ctx);
        goto after_11;
    // 0x45002BF4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x45002BF8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x45002BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002C00: jal         0x45001CE0
    // 0x45002C04: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_12;
    // 0x45002C04: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_12:
    // 0x45002C08: b           L_45002C24
    // 0x45002C0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45002C24;
    // 0x45002C0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45002C10:
    // 0x45002C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45002C14: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x45002C18: jal         0x45002704
    // 0x45002C1C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_mobj_main_2704(rdram, ctx);
        goto after_13;
    // 0x45002C1C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_13:
L_45002C20:
    // 0x45002C20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45002C24:
    // 0x45002C24: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x45002C28: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x45002C2C: jr          $ra
    // 0x45002C30: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x45002C30: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_mobj_main_2C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45002C34: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x45002C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45002C3C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x45002C40: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x45002C44: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x45002C48: bne         $t6, $at, L_45002D0C
    if (ctx->r14 != ctx->r1) {
        // 0x45002C4C: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_45002D0C;
    }
    // 0x45002C4C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x45002C50: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x45002C54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45002C58: lwc1        $f0, 0x14($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X14);
    // 0x45002C5C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x45002C60: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x45002C64: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x45002C68: bc1t        L_45002C88
    if (c1cs) {
        // 0x45002C6C: nop
    
            goto L_45002C88;
    }
    // 0x45002C6C: nop

    // 0x45002C70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x45002C74: nop

    // 0x45002C78: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x45002C7C: nop

    // 0x45002C80: bc1f        L_45002D10
    if (!c1cs) {
        // 0x45002C84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45002D10;
    }
    // 0x45002C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45002C88:
    // 0x45002C88: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x45002C8C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x45002C90: jal         0x450006C4
    // 0x45002C94: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45002C94: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x45002C98: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x45002C9C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x45002CA0: bne         $v0, $zero, L_45002D10
    if (ctx->r2 != 0) {
        // 0x45002CA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45002D10;
    }
    // 0x45002CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45002CA8: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x45002CAC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x45002CB0: bne         $t7, $at, L_45002D10
    if (ctx->r15 != ctx->r1) {
        // 0x45002CB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45002D10;
    }
    // 0x45002CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45002CB8: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x45002CBC: jal         0x450013B8
    // 0x45002CC0: nop

    ovl_mobj_main_13B8(rdram, ctx);
        goto after_1;
    // 0x45002CC0: nop

    after_1:
    // 0x45002CC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45002CC8: beq         $v0, $at, L_45002D0C
    if (ctx->r2 == ctx->r1) {
        // 0x45002CCC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_45002D0C;
    }
    // 0x45002CCC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x45002CD0: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x45002CD4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x45002CD8: beq         $v1, $at, L_45002D08
    if (ctx->r3 == ctx->r1) {
        // 0x45002CDC: addiu       $at, $zero, 0x2F
        ctx->r1 = ADD32(0, 0X2F);
            goto L_45002D08;
    }
    // 0x45002CDC: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x45002CE0: beq         $v1, $at, L_45002D08
    if (ctx->r3 == ctx->r1) {
        // 0x45002CE4: addiu       $at, $zero, 0x52
        ctx->r1 = ADD32(0, 0X52);
            goto L_45002D08;
    }
    // 0x45002CE4: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x45002CE8: beq         $v1, $at, L_45002D08
    if (ctx->r3 == ctx->r1) {
        // 0x45002CEC: addiu       $at, $zero, 0x53
        ctx->r1 = ADD32(0, 0X53);
            goto L_45002D08;
    }
    // 0x45002CEC: addiu       $at, $zero, 0x53
    ctx->r1 = ADD32(0, 0X53);
    // 0x45002CF0: beq         $v1, $at, L_45002D08
    if (ctx->r3 == ctx->r1) {
        // 0x45002CF4: addiu       $at, $zero, 0x7A
        ctx->r1 = ADD32(0, 0X7A);
            goto L_45002D08;
    }
    // 0x45002CF4: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x45002CF8: beq         $v1, $at, L_45002D08
    if (ctx->r3 == ctx->r1) {
        // 0x45002CFC: addiu       $at, $zero, 0xCD
        ctx->r1 = ADD32(0, 0XCD);
            goto L_45002D08;
    }
    // 0x45002CFC: addiu       $at, $zero, 0xCD
    ctx->r1 = ADD32(0, 0XCD);
    // 0x45002D00: bne         $v1, $at, L_45002D10
    if (ctx->r3 != ctx->r1) {
        // 0x45002D04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45002D10;
    }
    // 0x45002D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45002D08:
    // 0x45002D08: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_45002D0C:
    // 0x45002D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45002D10:
    // 0x45002D10: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x45002D14: jr          $ra
    // 0x45002D18: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    return;
    // 0x45002D18: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
;}
RECOMP_FUNC void ovl_mobj_main_2D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45002D1C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x45002D20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x45002D24: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x45002D28: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x45002D2C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x45002D30: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x45002D34: lw          $s0, 0xC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XC);
    // 0x45002D38: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x45002D3C: jal         0x450013B8
    // 0x45002D40: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x45002D40: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    after_0:
    // 0x45002D44: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x45002D48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45002D4C: bne         $v0, $at, L_45002D5C
    if (ctx->r2 != ctx->r1) {
        // 0x45002D50: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_45002D5C;
    }
    // 0x45002D50: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x45002D54: b           L_45003154
    // 0x45002D58: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
        goto L_45003154;
    // 0x45002D58: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
L_45002D5C:
    // 0x45002D5C: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x45002D60: nop

    // 0x45002D64: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x45002D68: bne         $t7, $zero, L_45002E04
    if (ctx->r15 != 0) {
        // 0x45002D6C: nop
    
            goto L_45002E04;
    }
    // 0x45002D6C: nop

    // 0x45002D70: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x45002D74: lw          $t1, 0x50($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X50);
    // 0x45002D78: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x45002D7C: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x45002D80: swc1        $f4, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f4.u32l;
    // 0x45002D84: lw          $t9, 0x10($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X10);
    // 0x45002D88: addiu       $t3, $s1, 0x14
    ctx->r11 = ADD32(ctx->r17, 0X14);
    // 0x45002D8C: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x45002D90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x45002D94: swc1        $f6, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f6.u32l;
    // 0x45002D98: lw          $t0, 0x10($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X10);
    // 0x45002D9C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x45002DA0: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x45002DA4: sw          $t2, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r10;
    // 0x45002DA8: swc1        $f8, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f8.u32l;
    // 0x45002DAC: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
    // 0x45002DB0: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x45002DB4: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x45002DB8: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x45002DBC: lw          $t5, 0x10($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X10);
    // 0x45002DC0: nop

    // 0x45002DC4: lwc1        $f10, 0x0($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X0);
    // 0x45002DC8: nop

    // 0x45002DCC: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x45002DD0: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x45002DD4: nop

    // 0x45002DD8: lwc1        $f16, 0x4($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X4);
    // 0x45002DDC: nop

    // 0x45002DE0: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x45002DE4: lw          $t7, 0x10($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X10);
    // 0x45002DE8: nop

    // 0x45002DEC: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x45002DF0: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    // 0x45002DF4: jal         0x4500109C
    // 0x45002DF8: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_1;
    // 0x45002DF8: swc1        $f18, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x45002DFC: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x45002E00: nop

L_45002E04:
    // 0x45002E04: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x45002E08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45002E0C: beq         $t8, $at, L_45002E68
    if (ctx->r24 == ctx->r1) {
        // 0x45002E10: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_45002E68;
    }
    // 0x45002E10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x45002E14: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x45002E18: jal         0x45002A30
    // 0x45002E1C: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    ovl_mobj_main_2A30(rdram, ctx);
        goto after_2;
    // 0x45002E1C: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    after_2:
    // 0x45002E20: lw          $t9, 0x184($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X184);
    // 0x45002E24: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x45002E28: andi        $t0, $t9, 0x400
    ctx->r8 = ctx->r25 & 0X400;
    // 0x45002E2C: beq         $t0, $zero, L_45002E68
    if (ctx->r8 == 0) {
        // 0x45002E30: lui         $at, 0xC000
        ctx->r1 = S32(0XC000 << 16);
            goto L_45002E68;
    }
    // 0x45002E30: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x45002E34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45002E38: lwc1        $f6, 0x14($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14);
    // 0x45002E3C: nop

    // 0x45002E40: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x45002E44: nop

    // 0x45002E48: bc1f        L_45002E6C
    if (!c1cs) {
        // 0x45002E4C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_45002E6C;
    }
    // 0x45002E4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x45002E50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x45002E54: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x45002E58: jal         0x450020E4
    // 0x45002E5C: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    ovl_mobj_main_20E4(rdram, ctx);
        goto after_3;
    // 0x45002E5C: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    after_3:
    // 0x45002E60: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x45002E64: nop

L_45002E68:
    // 0x45002E68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_45002E6C:
    // 0x45002E6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x45002E70: jal         0x450025C0
    // 0x45002E74: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    ovl_mobj_main_25C0(rdram, ctx);
        goto after_4;
    // 0x45002E74: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    after_4:
    // 0x45002E78: lw          $t1, 0x184($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X184);
    // 0x45002E7C: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x45002E80: andi        $t2, $t1, 0x200
    ctx->r10 = ctx->r9 & 0X200;
    // 0x45002E84: beq         $t2, $zero, L_45002E94
    if (ctx->r10 == 0) {
        // 0x45002E88: nop
    
            goto L_45002E94;
    }
    // 0x45002E88: nop

    // 0x45002E8C: b           L_45002EF0
    // 0x45002E90: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
        goto L_45002EF0;
    // 0x45002E90: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
L_45002E94:
    // 0x45002E94: lw          $t3, 0x8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X8);
    // 0x45002E98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45002E9C: bne         $t3, $at, L_45002EC0
    if (ctx->r11 != ctx->r1) {
        // 0x45002EA0: nop
    
            goto L_45002EC0;
    }
    // 0x45002EA0: nop

    // 0x45002EA4: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x45002EA8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x45002EAC: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x45002EB0: bne         $t5, $zero, L_45002EC0
    if (ctx->r13 != 0) {
        // 0x45002EB4: nop
    
            goto L_45002EC0;
    }
    // 0x45002EB4: nop

    // 0x45002EB8: b           L_45002EF0
    // 0x45002EBC: sw          $t6, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r14;
        goto L_45002EF0;
    // 0x45002EBC: sw          $t6, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r14;
L_45002EC0:
    // 0x45002EC0: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x45002EC4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x45002EC8: beq         $t7, $at, L_45002ED8
    if (ctx->r15 == ctx->r1) {
        // 0x45002ECC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_45002ED8;
    }
    // 0x45002ECC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x45002ED0: b           L_45002EF0
    // 0x45002ED4: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
        goto L_45002EF0;
    // 0x45002ED4: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
L_45002ED8:
    // 0x45002ED8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x45002EDC: jal         0x45002C34
    // 0x45002EE0: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    ovl_mobj_main_2C34(rdram, ctx);
        goto after_5;
    // 0x45002EE0: sw          $a3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r7;
    after_5:
    // 0x45002EE4: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x45002EE8: nop

    // 0x45002EEC: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
L_45002EF0:
    // 0x45002EF0: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x45002EF4: ori         $v0, $zero, 0x8B01
    ctx->r2 = 0 | 0X8B01;
    // 0x45002EF8: bne         $v0, $t8, L_45002F04
    if (ctx->r2 != ctx->r24) {
        // 0x45002EFC: lui         $at, 0xC040
        ctx->r1 = S32(0XC040 << 16);
            goto L_45002F04;
    }
    // 0x45002EFC: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x45002F00: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
L_45002F04:
    // 0x45002F04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45002F08: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x45002F0C: nop

    // 0x45002F10: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x45002F14: nop

    // 0x45002F18: bc1f        L_45002F48
    if (!c1cs) {
        // 0x45002F1C: nop
    
            goto L_45002F48;
    }
    // 0x45002F1C: nop

    // 0x45002F20: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x45002F24: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x45002F28: andi        $t9, $v0, 0x800
    ctx->r25 = ctx->r2 & 0X800;
    // 0x45002F2C: beq         $t9, $zero, L_45002F3C
    if (ctx->r25 == 0) {
        // 0x45002F30: and         $t0, $v0, $at
        ctx->r8 = ctx->r2 & ctx->r1;
            goto L_45002F3C;
    }
    // 0x45002F30: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x45002F34: sw          $t0, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r8;
    // 0x45002F38: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_45002F3C:
    // 0x45002F3C: ori         $t1, $v0, 0x800
    ctx->r9 = ctx->r2 | 0X800;
    // 0x45002F40: b           L_45003154
    // 0x45002F44: sw          $t1, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r9;
        goto L_45003154;
    // 0x45002F44: sw          $t1, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r9;
L_45002F48:
    // 0x45002F48: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x45002F4C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x45002F50: bne         $t2, $at, L_45003158
    if (ctx->r10 != ctx->r1) {
        // 0x45002F54: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_45003158;
    }
    // 0x45002F54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45002F58: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x45002F5C: nop

    // 0x45002F60: bne         $v0, $t3, L_45003158
    if (ctx->r2 != ctx->r11) {
        // 0x45002F64: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_45003158;
    }
    // 0x45002F64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45002F68: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45002F6C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45002F70: bne         $a0, $at, L_45002F80
    if (ctx->r4 != ctx->r1) {
        // 0x45002F74: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_45002F80;
    }
    // 0x45002F74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x45002F78: b           L_45003124
    // 0x45002F7C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_45003124;
    // 0x45002F7C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_45002F80:
    // 0x45002F80: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x45002F84: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x45002F88: jal         0x450006C4
    // 0x45002F8C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_6;
    // 0x45002F8C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_6:
    // 0x45002F90: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x45002F94: bne         $v0, $zero, L_45003124
    if (ctx->r2 != 0) {
        // 0x45002F98: nop
    
            goto L_45003124;
    }
    // 0x45002F98: nop

    // 0x45002F9C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x45002FA0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x45002FA4: bne         $t4, $zero, L_45002FB8
    if (ctx->r12 != 0) {
        // 0x45002FA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_45002FB8;
    }
    // 0x45002FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x45002FAC: b           L_45003124
    // 0x45002FB0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_45003124;
    // 0x45002FB0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x45002FB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_45002FB8:
    // 0x45002FB8: bne         $t5, $v0, L_45002FD4
    if (ctx->r13 != ctx->r2) {
        // 0x45002FBC: lw          $t7, 0x3C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X3C);
            goto L_45002FD4;
    }
    // 0x45002FBC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x45002FC0: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x45002FC4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x45002FC8: beq         $t6, $at, L_4500300C
    if (ctx->r14 == ctx->r1) {
        // 0x45002FCC: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_4500300C;
    }
    // 0x45002FCC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x45002FD0: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
L_45002FD4:
    // 0x45002FD4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x45002FD8: bne         $t7, $at, L_45003124
    if (ctx->r15 != ctx->r1) {
        // 0x45002FDC: nop
    
            goto L_45003124;
    }
    // 0x45002FDC: nop

    // 0x45002FE0: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x45002FE4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x45002FE8: beq         $t8, $at, L_45003008
    if (ctx->r24 == ctx->r1) {
        // 0x45002FEC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_45003008;
    }
    // 0x45002FEC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x45002FF0: beq         $t8, $at, L_45003008
    if (ctx->r24 == ctx->r1) {
        // 0x45002FF4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_45003008;
    }
    // 0x45002FF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x45002FF8: beq         $t8, $at, L_45003008
    if (ctx->r24 == ctx->r1) {
        // 0x45002FFC: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_45003008;
    }
    // 0x45002FFC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x45003000: bne         $t8, $at, L_45003124
    if (ctx->r24 != ctx->r1) {
        // 0x45003004: nop
    
            goto L_45003124;
    }
    // 0x45003004: nop

L_45003008:
    // 0x45003008: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
L_4500300C:
    // 0x4500300C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45003010: bne         $t9, $v0, L_45003020
    if (ctx->r25 != ctx->r2) {
        // 0x45003014: addiu       $a2, $sp, 0x3C
        ctx->r6 = ADD32(ctx->r29, 0X3C);
            goto L_45003020;
    }
    // 0x45003014: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x45003018: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x4500301C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
L_45003020:
    // 0x45003020: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45003024: jal         0x450006C4
    // 0x45003028: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_7;
    // 0x45003028: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_7:
    // 0x4500302C: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x45003030: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x45003034: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x45003038: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x4500303C: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x45003040: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x45003044: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x45003048: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4500304C: jal         0x450006C4
    // 0x45003050: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_8;
    // 0x45003050: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_8:
    // 0x45003054: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x45003058: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4500305C: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x45003060: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x45003064: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x45003068: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x4500306C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45003070: sub.s       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x45003074: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x45003078: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4500307C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x45003080: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x45003084: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x45003088: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x4500308C: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x45003090: bc1f        L_45003124
    if (!c1cs) {
        // 0x45003094: swc1        $f0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
            goto L_45003124;
    }
    // 0x45003094: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x45003098: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4500309C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x450030A0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x450030A4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x450030A8: jal         0x4500109C
    // 0x450030AC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_9;
    // 0x450030AC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x450030B0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x450030B4: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x450030B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x450030BC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x450030C0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x450030C4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x450030C8: bc1f        L_45003124
    if (!c1cs) {
        // 0x450030CC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_45003124;
    }
    // 0x450030CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x450030D0: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x450030D4: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x450030D8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x450030DC: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x450030E0: jal         0x450006C4
    // 0x450030E4: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_10;
    // 0x450030E4: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_10:
    // 0x450030E8: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x450030EC: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x450030F0: beq         $t2, $zero, L_45003124
    if (ctx->r10 == 0) {
        // 0x450030F4: nop
    
            goto L_45003124;
    }
    // 0x450030F4: nop

    // 0x450030F8: lw          $t3, 0x204($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X204);
    // 0x450030FC: nop

    // 0x45003100: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x45003104: beq         $t4, $zero, L_45003124
    if (ctx->r12 == 0) {
        // 0x45003108: nop
    
            goto L_45003124;
    }
    // 0x45003108: nop

    // 0x4500310C: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x45003110: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x45003114: jal         0x45008FE0
    // 0x45003118: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_mobj_main_8FE0(rdram, ctx);
        goto after_11;
    // 0x45003118: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x4500311C: b           L_45003124
    // 0x45003120: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_45003124;
    // 0x45003120: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_45003124:
    // 0x45003124: beq         $v1, $zero, L_45003154
    if (ctx->r3 == 0) {
        // 0x45003128: ori         $v0, $zero, 0x8B01
        ctx->r2 = 0 | 0X8B01;
            goto L_45003154;
    }
    // 0x45003128: ori         $v0, $zero, 0x8B01
    ctx->r2 = 0 | 0X8B01;
    // 0x4500312C: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x45003130: nop

    // 0x45003134: bne         $v0, $t5, L_45003158
    if (ctx->r2 != ctx->r13) {
        // 0x45003138: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_45003158;
    }
    // 0x45003138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4500313C: lw          $t6, 0x184($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X184);
    // 0x45003140: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x45003144: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45003148: sw          $t7, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r15;
    // 0x4500314C: ori         $t9, $t7, 0x1000
    ctx->r25 = ctx->r15 | 0X1000;
    // 0x45003150: sw          $t9, 0x184($s1)
    MEM_W(0X184, ctx->r17) = ctx->r25;
L_45003154:
    // 0x45003154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45003158:
    // 0x45003158: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x4500315C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x45003160: jr          $ra
    // 0x45003164: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x45003164: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_mobj_main_3168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003168: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4500316C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45003170: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x45003174: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45003178: jal         0x450013B8
    // 0x4500317C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x4500317C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x45003180: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x45003184: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45003188: beq         $v0, $at, L_450031A0
    if (ctx->r2 == ctx->r1) {
        // 0x4500318C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_450031A0;
    }
    // 0x4500318C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x45003190: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x45003194: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    // 0x45003198: jal         0x4500109C
    // 0x4500319C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_mobj_main_109C(rdram, ctx);
        goto after_1;
    // 0x4500319C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_1:
L_450031A0:
    // 0x450031A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450031A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x450031A8: jr          $ra
    // 0x450031AC: nop

    return;
    // 0x450031AC: nop

;}
RECOMP_FUNC void ovl_mobj_main_31B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450031B0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x450031B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x450031B8: slti        $at, $v0, 0x7B
    ctx->r1 = SIGNED(ctx->r2) < 0X7B ? 1 : 0;
    // 0x450031BC: bne         $at, $zero, L_450031D4
    if (ctx->r1 != 0) {
        // 0x450031C0: addiu       $at, $zero, 0xCD
        ctx->r1 = ADD32(0, 0XCD);
            goto L_450031D4;
    }
    // 0x450031C0: addiu       $at, $zero, 0xCD
    ctx->r1 = ADD32(0, 0XCD);
    // 0x450031C4: beq         $v0, $at, L_45003220
    if (ctx->r2 == ctx->r1) {
        // 0x450031C8: nop
    
            goto L_45003220;
    }
    // 0x450031C8: nop

    // 0x450031CC: b           L_45003234
    // 0x450031D0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
        goto L_45003234;
    // 0x450031D0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
L_450031D4:
    // 0x450031D4: slti        $at, $v0, 0x54
    ctx->r1 = SIGNED(ctx->r2) < 0X54 ? 1 : 0;
    // 0x450031D8: bne         $at, $zero, L_450031F4
    if (ctx->r1 != 0) {
        // 0x450031DC: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_450031F4;
    }
    // 0x450031DC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x450031E0: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x450031E4: beq         $v0, $at, L_45003220
    if (ctx->r2 == ctx->r1) {
        // 0x450031E8: nop
    
            goto L_45003220;
    }
    // 0x450031E8: nop

    // 0x450031EC: b           L_45003234
    // 0x450031F0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
        goto L_45003234;
    // 0x450031F0: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
L_450031F4:
    // 0x450031F4: sltiu       $at, $t6, 0x53
    ctx->r1 = ctx->r14 < 0X53 ? 1 : 0;
    // 0x450031F8: beq         $at, $zero, L_45003230
    if (ctx->r1 == 0) {
        // 0x450031FC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_45003230;
    }
    // 0x450031FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x45003200: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45003204: addu        $at, $at, $t6
    gpr jr_addend_45003210 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x45003208: lw          $t6, 0x1C90($at)
    ctx->r14 = ADD32(ctx->r1, 0X1C90);
    // 0x4500320C: nop

    // 0x45003210: jr          $t6
    // 0x45003214: nop

    switch (jr_addend_45003210 >> 2) {
        case 0: goto L_45003218; break;
        case 1: goto L_45003230; break;
        case 2: goto L_45003230; break;
        case 3: goto L_45003230; break;
        case 4: goto L_45003230; break;
        case 5: goto L_45003230; break;
        case 6: goto L_45003220; break;
        case 7: goto L_45003230; break;
        case 8: goto L_45003230; break;
        case 9: goto L_45003230; break;
        case 10: goto L_45003230; break;
        case 11: goto L_45003218; break;
        case 12: goto L_45003230; break;
        case 13: goto L_45003230; break;
        case 14: goto L_45003230; break;
        case 15: goto L_45003230; break;
        case 16: goto L_45003230; break;
        case 17: goto L_45003230; break;
        case 18: goto L_45003230; break;
        case 19: goto L_45003230; break;
        case 20: goto L_45003230; break;
        case 21: goto L_45003230; break;
        case 22: goto L_45003230; break;
        case 23: goto L_45003230; break;
        case 24: goto L_45003230; break;
        case 25: goto L_45003230; break;
        case 26: goto L_45003230; break;
        case 27: goto L_45003230; break;
        case 28: goto L_4500322C; break;
        case 29: goto L_45003230; break;
        case 30: goto L_45003230; break;
        case 31: goto L_45003230; break;
        case 32: goto L_45003230; break;
        case 33: goto L_45003230; break;
        case 34: goto L_45003230; break;
        case 35: goto L_45003230; break;
        case 36: goto L_45003230; break;
        case 37: goto L_45003230; break;
        case 38: goto L_45003230; break;
        case 39: goto L_45003230; break;
        case 40: goto L_45003230; break;
        case 41: goto L_45003230; break;
        case 42: goto L_45003230; break;
        case 43: goto L_45003230; break;
        case 44: goto L_45003230; break;
        case 45: goto L_45003230; break;
        case 46: goto L_45003220; break;
        case 47: goto L_45003230; break;
        case 48: goto L_45003230; break;
        case 49: goto L_45003230; break;
        case 50: goto L_45003230; break;
        case 51: goto L_45003230; break;
        case 52: goto L_45003230; break;
        case 53: goto L_45003230; break;
        case 54: goto L_45003230; break;
        case 55: goto L_45003230; break;
        case 56: goto L_45003230; break;
        case 57: goto L_45003230; break;
        case 58: goto L_45003230; break;
        case 59: goto L_45003230; break;
        case 60: goto L_45003230; break;
        case 61: goto L_45003230; break;
        case 62: goto L_45003230; break;
        case 63: goto L_4500322C; break;
        case 64: goto L_45003230; break;
        case 65: goto L_45003230; break;
        case 66: goto L_45003230; break;
        case 67: goto L_45003230; break;
        case 68: goto L_45003230; break;
        case 69: goto L_45003230; break;
        case 70: goto L_45003230; break;
        case 71: goto L_45003230; break;
        case 72: goto L_45003230; break;
        case 73: goto L_45003230; break;
        case 74: goto L_45003230; break;
        case 75: goto L_45003230; break;
        case 76: goto L_45003230; break;
        case 77: goto L_45003230; break;
        case 78: goto L_45003230; break;
        case 79: goto L_45003230; break;
        case 80: goto L_45003230; break;
        case 81: goto L_45003220; break;
        case 82: goto L_45003220; break;
        default: switch_error(__func__, 0x45003210, 0x45011C90);
    }
    // 0x45003214: nop

L_45003218:
    // 0x45003218: b           L_45003230
    // 0x4500321C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_45003230;
    // 0x4500321C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_45003220:
    // 0x45003220: lui         $v1, 0x300
    ctx->r3 = S32(0X300 << 16);
    // 0x45003224: b           L_45003230
    // 0x45003228: ori         $v1, $v1, 0x5
    ctx->r3 = ctx->r3 | 0X5;
        goto L_45003230;
    // 0x45003228: ori         $v1, $v1, 0x5
    ctx->r3 = ctx->r3 | 0X5;
L_4500322C:
    // 0x4500322C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_45003230:
    // 0x45003230: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
L_45003234:
    // 0x45003234: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x45003238: bne         $t7, $at, L_45003244
    if (ctx->r15 != ctx->r1) {
        // 0x4500323C: nop
    
            goto L_45003244;
    }
    // 0x4500323C: nop

    // 0x45003240: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_45003244:
    // 0x45003244: jr          $ra
    // 0x45003248: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x45003248: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_mobj_main_324C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500324C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45003250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45003254: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x45003258: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x4500325C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x45003260: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x45003264: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x45003268: bne         $t7, $at, L_45003290
    if (ctx->r15 != ctx->r1) {
        // 0x4500326C: nop
    
            goto L_45003290;
    }
    // 0x4500326C: nop

    // 0x45003270: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45003274: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45003278: jal         0x450031B0
    // 0x4500327C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_mobj_main_31B0(rdram, ctx);
        goto after_0;
    // 0x4500327C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x45003280: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x45003284: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45003288: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x4500328C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_45003290:
    // 0x45003290: lui         $a3, 0x4501
    ctx->r7 = S32(0X4501 << 16);
    // 0x45003294: addiu       $a3, $a3, -0x70C
    ctx->r7 = ADD32(ctx->r7, -0X70C);
    // 0x45003298: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x4500329C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x450032A0: bne         $v1, $v0, L_450032C8
    if (ctx->r3 != ctx->r2) {
        // 0x450032A4: sll         $t2, $a2, 3
        ctx->r10 = S32(ctx->r6 << 3);
            goto L_450032C8;
    }
    // 0x450032A4: sll         $t2, $a2, 3
    ctx->r10 = S32(ctx->r6 << 3);
    // 0x450032A8: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x450032AC: subu        $t8, $t8, $a2
    ctx->r24 = SUB32(ctx->r24, ctx->r6);
    // 0x450032B0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x450032B4: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x450032B8: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x450032BC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x450032C0: b           L_450032FC
    // 0x450032C4: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
        goto L_450032FC;
    // 0x450032C4: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
L_450032C8:
    // 0x450032C8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x450032CC: bne         $v0, $at, L_450032FC
    if (ctx->r2 != ctx->r1) {
        // 0x450032D0: sll         $t9, $a2, 3
        ctx->r25 = S32(ctx->r6 << 3);
            goto L_450032FC;
    }
    // 0x450032D0: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x450032D4: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x450032D8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x450032DC: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x450032E0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x450032E4: sw          $t0, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r8;
    // 0x450032E8: lui         $t1, 0x4501
    ctx->r9 = S32(0X4501 << 16);
    // 0x450032EC: lw          $t1, -0x708($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X708);
    // 0x450032F0: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x450032F4: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x450032F8: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
L_450032FC:
    // 0x450032FC: subu        $t2, $t2, $a2
    ctx->r10 = SUB32(ctx->r10, ctx->r6);
    // 0x45003300: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x45003304: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x45003308: addu        $v0, $a0, $t2
    ctx->r2 = ADD32(ctx->r4, ctx->r10);
    // 0x4500330C: sw          $t3, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->r11;
    // 0x45003310: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x45003314: sw          $zero, 0x68($v0)
    MEM_W(0X68, ctx->r2) = 0;
    // 0x45003318: sw          $t4, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r12;
    // 0x4500331C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45003320: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x45003324: jr          $ra
    // 0x45003328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x45003328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_mobj_main_332C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500332C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45003330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45003334: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x45003338: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4500333C: jal         0x450013B8
    // 0x45003340: nop

    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x45003340: nop

    after_0:
    // 0x45003344: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x45003348: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x4500334C: lw          $a1, 0xC($t7)
    ctx->r5 = MEM_W(ctx->r15, 0XC);
    // 0x45003350: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x45003354: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
    // 0x45003358: lw          $t9, 0x54($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X54);
    // 0x4500335C: nop

    // 0x45003360: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x45003364: beq         $at, $zero, L_450033A4
    if (ctx->r1 == 0) {
        // 0x45003368: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450033A4;
    }
    // 0x45003368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500336C: lw          $a2, 0x54($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X54);
    // 0x45003370: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x45003374: jal         0x4500324C
    // 0x45003378: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_mobj_main_324C(rdram, ctx);
        goto after_1;
    // 0x45003378: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x4500337C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x45003380: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x45003384: lw          $t0, 0x54($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X54);
    // 0x45003388: nop

    // 0x4500338C: sw          $t0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r8;
    // 0x45003390: lw          $t1, 0x54($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X54);
    // 0x45003394: nop

    // 0x45003398: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x4500339C: sw          $t2, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r10;
    // 0x450033A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450033A4:
    // 0x450033A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x450033A8: jr          $ra
    // 0x450033AC: nop

    return;
    // 0x450033AC: nop

;}
RECOMP_FUNC void ovl_mobj_main_33B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450033B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450033B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450033B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x450033BC: jal         0x450013B8
    // 0x450033C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x450033C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x450033C4: lw          $t6, 0x54($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X54);
    // 0x450033C8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x450033CC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x450033D0: blez        $t6, L_45003424
    if (SIGNED(ctx->r14) <= 0) {
        // 0x450033D4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_45003424;
    }
    // 0x450033D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x450033D8: addiu       $a0, $v0, 0x58
    ctx->r4 = ADD32(ctx->r2, 0X58);
L_450033DC:
    // 0x450033DC: bne         $a3, $a0, L_45003410
    if (ctx->r7 != ctx->r4) {
        // 0x450033E0: nop
    
            goto L_45003410;
    }
    // 0x450033E0: nop

    // 0x450033E4: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x450033E8: jal         0x450013B8
    // 0x450033EC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_mobj_main_13B8(rdram, ctx);
        goto after_1;
    // 0x450033EC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x450033F0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x450033F4: lw          $t9, 0x17C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X17C);
    // 0x450033F8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x450033FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x45003400: jalr        $t9
    // 0x45003404: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x45003404: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    after_2:
    // 0x45003408: b           L_45003428
    // 0x4500340C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45003428;
    // 0x4500340C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003410:
    // 0x45003410: lw          $t7, 0x54($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X54);
    // 0x45003414: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x45003418: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x4500341C: bne         $at, $zero, L_450033DC
    if (ctx->r1 != 0) {
        // 0x45003420: addiu       $a0, $a0, 0x1C
        ctx->r4 = ADD32(ctx->r4, 0X1C);
            goto L_450033DC;
    }
    // 0x45003420: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
L_45003424:
    // 0x45003424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003428:
    // 0x45003428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500342C: jr          $ra
    // 0x45003430: nop

    return;
    // 0x45003430: nop

;}
RECOMP_FUNC void ovl_mobj_main_3434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003434: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x45003438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500343C: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x45003440: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x45003444: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x45003448: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4500344C: jal         0x450013B8
    // 0x45003450: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x45003450: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_0:
    // 0x45003454: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x45003458: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x4500345C: slti        $at, $v1, 0xC3
    ctx->r1 = SIGNED(ctx->r3) < 0XC3 ? 1 : 0;
    // 0x45003460: bne         $at, $zero, L_45003488
    if (ctx->r1 != 0) {
        // 0x45003464: addiu       $at, $zero, 0xE3
        ctx->r1 = ADD32(0, 0XE3);
            goto L_45003488;
    }
    // 0x45003464: addiu       $at, $zero, 0xE3
    ctx->r1 = ADD32(0, 0XE3);
    // 0x45003468: beq         $v1, $at, L_450034E8
    if (ctx->r3 == ctx->r1) {
        // 0x4500346C: addiu       $at, $zero, 0xE7
        ctx->r1 = ADD32(0, 0XE7);
            goto L_450034E8;
    }
    // 0x4500346C: addiu       $at, $zero, 0xE7
    ctx->r1 = ADD32(0, 0XE7);
    // 0x45003470: beq         $v1, $at, L_450034E8
    if (ctx->r3 == ctx->r1) {
        // 0x45003474: addiu       $at, $zero, 0xE8
        ctx->r1 = ADD32(0, 0XE8);
            goto L_450034E8;
    }
    // 0x45003474: addiu       $at, $zero, 0xE8
    ctx->r1 = ADD32(0, 0XE8);
    // 0x45003478: beq         $v1, $at, L_450034E8
    if (ctx->r3 == ctx->r1) {
        // 0x4500347C: nop
    
            goto L_450034E8;
    }
    // 0x4500347C: nop

    // 0x45003480: b           L_450034F4
    // 0x45003484: nop

        goto L_450034F4;
    // 0x45003484: nop

L_45003488:
    // 0x45003488: slti        $at, $v1, 0x9D
    ctx->r1 = SIGNED(ctx->r3) < 0X9D ? 1 : 0;
    // 0x4500348C: bne         $at, $zero, L_450034A4
    if (ctx->r1 != 0) {
        // 0x45003490: addiu       $at, $zero, 0xC2
        ctx->r1 = ADD32(0, 0XC2);
            goto L_450034A4;
    }
    // 0x45003490: addiu       $at, $zero, 0xC2
    ctx->r1 = ADD32(0, 0XC2);
    // 0x45003494: beq         $v1, $at, L_450034E8
    if (ctx->r3 == ctx->r1) {
        // 0x45003498: nop
    
            goto L_450034E8;
    }
    // 0x45003498: nop

    // 0x4500349C: b           L_450034F4
    // 0x450034A0: nop

        goto L_450034F4;
    // 0x450034A0: nop

L_450034A4:
    // 0x450034A4: slti        $at, $v1, 0x6F
    ctx->r1 = SIGNED(ctx->r3) < 0X6F ? 1 : 0;
    // 0x450034A8: bne         $at, $zero, L_450034C4
    if (ctx->r1 != 0) {
        // 0x450034AC: addiu       $t7, $v1, -0xB
        ctx->r15 = ADD32(ctx->r3, -0XB);
            goto L_450034C4;
    }
    // 0x450034AC: addiu       $t7, $v1, -0xB
    ctx->r15 = ADD32(ctx->r3, -0XB);
    // 0x450034B0: addiu       $at, $zero, 0x9C
    ctx->r1 = ADD32(0, 0X9C);
    // 0x450034B4: beq         $v1, $at, L_450034E8
    if (ctx->r3 == ctx->r1) {
        // 0x450034B8: nop
    
            goto L_450034E8;
    }
    // 0x450034B8: nop

    // 0x450034BC: b           L_450034F4
    // 0x450034C0: nop

        goto L_450034F4;
    // 0x450034C0: nop

L_450034C4:
    // 0x450034C4: sltiu       $at, $t7, 0x64
    ctx->r1 = ctx->r15 < 0X64 ? 1 : 0;
    // 0x450034C8: beq         $at, $zero, L_450034F4
    if (ctx->r1 == 0) {
        // 0x450034CC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_450034F4;
    }
    // 0x450034CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x450034D0: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450034D4: addu        $at, $at, $t7
    gpr jr_addend_450034E0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x450034D8: lw          $t7, 0x1DDC($at)
    ctx->r15 = ADD32(ctx->r1, 0X1DDC);
    // 0x450034DC: nop

    // 0x450034E0: jr          $t7
    // 0x450034E4: nop

    switch (jr_addend_450034E0 >> 2) {
        case 0: goto L_450034E8; break;
        case 1: goto L_450034F4; break;
        case 2: goto L_450034F4; break;
        case 3: goto L_450034F4; break;
        case 4: goto L_450034F4; break;
        case 5: goto L_450034E8; break;
        case 6: goto L_450034F4; break;
        case 7: goto L_450034F4; break;
        case 8: goto L_450034E8; break;
        case 9: goto L_450034E8; break;
        case 10: goto L_450034E8; break;
        case 11: goto L_450034F4; break;
        case 12: goto L_450034F4; break;
        case 13: goto L_450034F4; break;
        case 14: goto L_450034F4; break;
        case 15: goto L_450034F4; break;
        case 16: goto L_450034F4; break;
        case 17: goto L_450034F4; break;
        case 18: goto L_450034F4; break;
        case 19: goto L_450034F4; break;
        case 20: goto L_450034F4; break;
        case 21: goto L_450034F4; break;
        case 22: goto L_450034F4; break;
        case 23: goto L_450034F4; break;
        case 24: goto L_450034F4; break;
        case 25: goto L_450034F4; break;
        case 26: goto L_450034E8; break;
        case 27: goto L_450034E8; break;
        case 28: goto L_450034E8; break;
        case 29: goto L_450034F4; break;
        case 30: goto L_450034E8; break;
        case 31: goto L_450034E8; break;
        case 32: goto L_450034F4; break;
        case 33: goto L_450034F4; break;
        case 34: goto L_450034E8; break;
        case 35: goto L_450034E8; break;
        case 36: goto L_450034F4; break;
        case 37: goto L_450034F4; break;
        case 38: goto L_450034F4; break;
        case 39: goto L_450034F4; break;
        case 40: goto L_450034F4; break;
        case 41: goto L_450034F4; break;
        case 42: goto L_450034F4; break;
        case 43: goto L_450034E8; break;
        case 44: goto L_450034F4; break;
        case 45: goto L_450034F4; break;
        case 46: goto L_450034F4; break;
        case 47: goto L_450034E8; break;
        case 48: goto L_450034F4; break;
        case 49: goto L_450034F4; break;
        case 50: goto L_450034F4; break;
        case 51: goto L_450034F4; break;
        case 52: goto L_450034F4; break;
        case 53: goto L_450034F4; break;
        case 54: goto L_450034F4; break;
        case 55: goto L_450034F4; break;
        case 56: goto L_450034E8; break;
        case 57: goto L_450034F4; break;
        case 58: goto L_450034F4; break;
        case 59: goto L_450034F4; break;
        case 60: goto L_450034F4; break;
        case 61: goto L_450034F4; break;
        case 62: goto L_450034F4; break;
        case 63: goto L_450034F4; break;
        case 64: goto L_450034F4; break;
        case 65: goto L_450034F4; break;
        case 66: goto L_450034F4; break;
        case 67: goto L_450034F4; break;
        case 68: goto L_450034F4; break;
        case 69: goto L_450034E8; break;
        case 70: goto L_450034E8; break;
        case 71: goto L_450034F4; break;
        case 72: goto L_450034F4; break;
        case 73: goto L_450034F4; break;
        case 74: goto L_450034F4; break;
        case 75: goto L_450034F4; break;
        case 76: goto L_450034F4; break;
        case 77: goto L_450034F4; break;
        case 78: goto L_450034F4; break;
        case 79: goto L_450034F4; break;
        case 80: goto L_450034F4; break;
        case 81: goto L_450034F4; break;
        case 82: goto L_450034E8; break;
        case 83: goto L_450034E8; break;
        case 84: goto L_450034E8; break;
        case 85: goto L_450034F4; break;
        case 86: goto L_450034F4; break;
        case 87: goto L_450034F4; break;
        case 88: goto L_450034F4; break;
        case 89: goto L_450034F4; break;
        case 90: goto L_450034F4; break;
        case 91: goto L_450034F4; break;
        case 92: goto L_450034F4; break;
        case 93: goto L_450034F4; break;
        case 94: goto L_450034F4; break;
        case 95: goto L_450034F4; break;
        case 96: goto L_450034F4; break;
        case 97: goto L_450034F4; break;
        case 98: goto L_450034E8; break;
        case 99: goto L_450034E8; break;
        default: switch_error(__func__, 0x450034E0, 0x45011DDC);
    }
    // 0x450034E4: nop

L_450034E8:
    // 0x450034E8: lui         $t8, 0x4500
    ctx->r24 = S32(0X4500 << 16);
    // 0x450034EC: addiu       $t8, $t8, 0xFC0
    ctx->r24 = ADD32(ctx->r24, 0XFC0);
    // 0x450034F0: sw          $t8, 0x17C($v0)
    MEM_W(0X17C, ctx->r2) = ctx->r24;
L_450034F4:
    // 0x450034F4: lui         $t9, 0x4500
    ctx->r25 = S32(0X4500 << 16);
    // 0x450034F8: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x450034FC: addiu       $t9, $t9, 0x33B0
    ctx->r25 = ADD32(ctx->r25, 0X33B0);
    // 0x45003500: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x45003504: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x45003508: addiu       $t1, $zero, -0x2
    ctx->r9 = ADD32(0, -0X2);
    // 0x4500350C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45003510: sw          $t1, -0x70C($at)
    MEM_W(-0X70C, ctx->r1) = ctx->r9;
    // 0x45003514: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45003518: sw          $a3, -0x708($at)
    MEM_W(-0X708, ctx->r1) = ctx->r7;
    // 0x4500351C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x45003520: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x45003524: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x45003528: jal         0x450006C4
    // 0x4500352C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4500352C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x45003530: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x45003534: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x45003538: nop

    // 0x4500353C: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x45003540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45003544: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x45003548: jr          $ra
    // 0x4500354C: nop

    return;
    // 0x4500354C: nop

;}
RECOMP_FUNC void ovl_mobj_main_3550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45003554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45003558: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4500355C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45003560: jal         0x450013B8
    // 0x45003564: nop

    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x45003564: nop

    after_0:
    // 0x45003568: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x4500356C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45003570: lw          $v1, 0xC($t7)
    ctx->r3 = MEM_W(ctx->r15, 0XC);
    // 0x45003574: beq         $v0, $at, L_45003588
    if (ctx->r2 == ctx->r1) {
        // 0x45003578: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_45003588;
    }
    // 0x45003578: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4500357C: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x45003580: jal         0x450024BC
    // 0x45003584: nop

    ovl_mobj_main_24BC(rdram, ctx);
        goto after_1;
    // 0x45003584: nop

    after_1:
L_45003588:
    // 0x45003588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500358C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45003590: jr          $ra
    // 0x45003594: nop

    return;
    // 0x45003594: nop

;}
RECOMP_FUNC void ovl_mobj_main_3598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500359C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450035A0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450035A4: jal         0x450013B8
    // 0x450035A8: nop

    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x450035A8: nop

    after_0:
    // 0x450035AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x450035B0: beq         $v0, $at, L_450035C0
    if (ctx->r2 == ctx->r1) {
        // 0x450035B4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_450035C0;
    }
    // 0x450035B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x450035B8: jal         0x45002508
    // 0x450035BC: nop

    ovl_mobj_main_2508(rdram, ctx);
        goto after_1;
    // 0x450035BC: nop

    after_1:
L_450035C0:
    // 0x450035C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450035C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450035C8: jr          $ra
    // 0x450035CC: nop

    return;
    // 0x450035CC: nop

;}
RECOMP_FUNC void ovl_mobj_main_35D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450035D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x450035D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x450035D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450035DC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x450035E0: beq         $a0, $at, L_45003674
    if (ctx->r4 == ctx->r1) {
        // 0x450035E4: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_45003674;
    }
    // 0x450035E4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x450035E8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450035EC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x450035F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x450035F4: jal         0x450006C4
    // 0x450035F8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450035F8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x450035FC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x45003600: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x45003604: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x45003608: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x4500360C: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x45003610: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45003614: swc1        $f6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f6.u32l;
    // 0x45003618: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4500361C: nop

    // 0x45003620: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
    // 0x45003624: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x45003628: nop

    // 0x4500362C: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x45003630: jal         0x450006C4
    // 0x45003634: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45003634: nop

    after_1:
    // 0x45003638: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x4500363C: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x45003640: lwc1        $f10, 0x0($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X0);
    // 0x45003644: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x45003648: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x4500364C: lwc1        $f10, 0x8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8);
    // 0x45003650: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x45003654: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x45003658: nop

    // 0x4500365C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x45003660: swc1        $f8, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f8.u32l;
    // 0x45003664: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x45003668: nop

    // 0x4500366C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x45003670: swc1        $f18, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f18.u32l;
L_45003674:
    // 0x45003674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45003678: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4500367C: jr          $ra
    // 0x45003680: nop

    return;
    // 0x45003680: nop

;}
RECOMP_FUNC void ovl_mobj_main_3684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003684: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45003688: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4500368C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x45003690: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x45003694: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x45003698: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4500369C: jal         0x4500128C
    // 0x450036A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_mobj_main_128C(rdram, ctx);
        goto after_0;
    // 0x450036A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x450036A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x450036A8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x450036AC: addiu       $s3, $zero, 0x1C
    ctx->r19 = ADD32(0, 0X1C);
    // 0x450036B0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_450036B4:
    // 0x450036B4: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x450036B8: nop

    // 0x450036BC: beq         $s2, $t6, L_450036DC
    if (ctx->r18 == ctx->r14) {
        // 0x450036C0: nop
    
            goto L_450036DC;
    }
    // 0x450036C0: nop

    // 0x450036C4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x450036C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450036CC: beq         $s2, $t7, L_450036DC
    if (ctx->r18 == ctx->r15) {
        // 0x450036D0: addiu       $a1, $zero, 0xD
        ctx->r5 = ADD32(0, 0XD);
            goto L_450036DC;
    }
    // 0x450036D0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x450036D4: jal         0x45001CE0
    // 0x450036D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_1;
    // 0x450036D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_450036DC:
    // 0x450036DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x450036E0: bne         $s1, $s3, L_450036B4
    if (ctx->r17 != ctx->r19) {
        // 0x450036E4: addiu       $s0, $s0, 0x2A8
        ctx->r16 = ADD32(ctx->r16, 0X2A8);
            goto L_450036B4;
    }
    // 0x450036E4: addiu       $s0, $s0, 0x2A8
    ctx->r16 = ADD32(ctx->r16, 0X2A8);
    // 0x450036E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x450036EC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x450036F0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x450036F4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x450036F8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x450036FC: jr          $ra
    // 0x45003700: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x45003700: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_mobj_main_3704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003704: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x45003708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500370C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x45003710: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x45003714: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x45003718: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4500371C: beq         $a1, $at, L_45003734
    if (ctx->r5 == ctx->r1) {
        // 0x45003720: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_45003734;
    }
    // 0x45003720: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x45003724: jal         0x450013B8
    // 0x45003728: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x45003728: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x4500372C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x45003730: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_45003734:
    // 0x45003734: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x45003738: nop

    // 0x4500373C: bne         $v0, $zero, L_4500376C
    if (ctx->r2 != 0) {
        // 0x45003740: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4500376C;
    }
    // 0x45003740: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x45003744: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x45003748: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x4500374C: bne         $t6, $at, L_4500376C
    if (ctx->r14 != ctx->r1) {
        // 0x45003750: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4500376C;
    }
    // 0x45003750: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x45003754: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x45003758: jal         0x450035D0
    // 0x4500375C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_mobj_main_35D0(rdram, ctx);
        goto after_1;
    // 0x4500375C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x45003760: b           L_45003790
    // 0x45003764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45003790;
    // 0x45003764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45003768: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_4500376C:
    // 0x4500376C: bne         $v0, $at, L_45003790
    if (ctx->r2 != ctx->r1) {
        // 0x45003770: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45003790;
    }
    // 0x45003770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45003774: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x45003778: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x4500377C: bne         $t7, $at, L_45003790
    if (ctx->r15 != ctx->r1) {
        // 0x45003780: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45003790;
    }
    // 0x45003780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45003784: jal         0x45003684
    // 0x45003788: nop

    ovl_mobj_main_3684(rdram, ctx);
        goto after_2;
    // 0x45003788: nop

    after_2:
    // 0x4500378C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003790:
    // 0x45003790: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45003794: jr          $ra
    // 0x45003798: nop

    return;
    // 0x45003798: nop

;}
RECOMP_FUNC void ovl_mobj_main_379C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4500379C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x450037A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450037A4: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x450037A8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x450037AC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x450037B0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x450037B4: bne         $t6, $at, L_450037CC
    if (ctx->r14 != ctx->r1) {
        // 0x450037B8: nop
    
            goto L_450037CC;
    }
    // 0x450037B8: nop

    // 0x450037BC: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x450037C0: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450037C4: b           L_45003A10
    // 0x450037C8: sw          $t7, -0x704($at)
    MEM_W(-0X704, ctx->r1) = ctx->r15;
        goto L_45003A10;
    // 0x450037C8: sw          $t7, -0x704($at)
    MEM_W(-0X704, ctx->r1) = ctx->r15;
L_450037CC:
    // 0x450037CC: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x450037D0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x450037D4: jal         0x450013B8
    // 0x450037D8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    ovl_mobj_main_13B8(rdram, ctx);
        goto after_0;
    // 0x450037D8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x450037DC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x450037E0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x450037E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x450037E8: bne         $v0, $at, L_450037FC
    if (ctx->r2 != ctx->r1) {
        // 0x450037EC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_450037FC;
    }
    // 0x450037EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x450037F0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x450037F4: b           L_45003A10
    // 0x450037F8: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
        goto L_45003A10;
    // 0x450037F8: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
L_450037FC:
    // 0x450037FC: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x45003800: nop

    // 0x45003804: addiu       $t2, $t9, -0x1
    ctx->r10 = ADD32(ctx->r25, -0X1);
    // 0x45003808: sltiu       $at, $t2, 0x25
    ctx->r1 = ctx->r10 < 0X25 ? 1 : 0;
    // 0x4500380C: beq         $at, $zero, L_45003A10
    if (ctx->r1 == 0) {
        // 0x45003810: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_45003A10;
    }
    // 0x45003810: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x45003814: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45003818: addu        $at, $at, $t2
    gpr jr_addend_45003824 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x4500381C: lw          $t2, 0x1F6C($at)
    ctx->r10 = ADD32(ctx->r1, 0X1F6C);
    // 0x45003820: nop

    // 0x45003824: jr          $t2
    // 0x45003828: nop

    switch (jr_addend_45003824 >> 2) {
        case 0: goto L_4500382C; break;
        case 1: goto L_45003A10; break;
        case 2: goto L_45003858; break;
        case 3: goto L_450038E8; break;
        case 4: goto L_45003970; break;
        case 5: goto L_45003A10; break;
        case 6: goto L_45003A10; break;
        case 7: goto L_45003994; break;
        case 8: goto L_45003A10; break;
        case 9: goto L_45003A10; break;
        case 10: goto L_45003A10; break;
        case 11: goto L_45003A10; break;
        case 12: goto L_45003A10; break;
        case 13: goto L_45003A10; break;
        case 14: goto L_45003A10; break;
        case 15: goto L_45003A10; break;
        case 16: goto L_45003A10; break;
        case 17: goto L_45003A10; break;
        case 18: goto L_45003A10; break;
        case 19: goto L_45003A10; break;
        case 20: goto L_45003A10; break;
        case 21: goto L_45003A10; break;
        case 22: goto L_45003A10; break;
        case 23: goto L_45003A10; break;
        case 24: goto L_45003A10; break;
        case 25: goto L_45003A10; break;
        case 26: goto L_45003A10; break;
        case 27: goto L_450039C8; break;
        case 28: goto L_45003A10; break;
        case 29: goto L_45003A10; break;
        case 30: goto L_450039D8; break;
        case 31: goto L_45003A10; break;
        case 32: goto L_45003A10; break;
        case 33: goto L_45003A10; break;
        case 34: goto L_45003A10; break;
        case 35: goto L_45003A10; break;
        case 36: goto L_450039FC; break;
        default: switch_error(__func__, 0x45003824, 0x45011F6C);
    }
    // 0x45003828: nop

L_4500382C:
    // 0x4500382C: lw          $v1, 0x180($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X180);
    // 0x45003830: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x45003834: beq         $v1, $at, L_45003850
    if (ctx->r3 == ctx->r1) {
        // 0x45003838: addiu       $t4, $v0, 0x18C
        ctx->r12 = ADD32(ctx->r2, 0X18C);
            goto L_45003850;
    }
    // 0x45003838: addiu       $t4, $v0, 0x18C
    ctx->r12 = ADD32(ctx->r2, 0X18C);
    // 0x4500383C: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x45003840: beq         $v1, $at, L_45003850
    if (ctx->r3 == ctx->r1) {
        // 0x45003844: addiu       $t3, $zero, -0x1
        ctx->r11 = ADD32(0, -0X1);
            goto L_45003850;
    }
    // 0x45003844: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x45003848: b           L_45003A10
    // 0x4500384C: sw          $t3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r11;
        goto L_45003A10;
    // 0x4500384C: sw          $t3, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r11;
L_45003850:
    // 0x45003850: b           L_45003A10
    // 0x45003854: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
        goto L_45003A10;
    // 0x45003854: sw          $t4, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r12;
L_45003858:
    // 0x45003858: lw          $t5, 0xC($v0)
    ctx->r13 = MEM_W(ctx->r2, 0XC);
    // 0x4500385C: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x45003860: multu       $t5, $t1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x45003864: lui         $a3, 0x4501
    ctx->r7 = S32(0X4501 << 16);
    // 0x45003868: addiu       $a3, $a3, 0x77C
    ctx->r7 = ADD32(ctx->r7, 0X77C);
    // 0x4500386C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x45003870: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x45003874: mflo        $t6
    ctx->r14 = lo;
    // 0x45003878: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x4500387C: lbu         $t8, 0xA($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XA);
    // 0x45003880: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x45003884: bne         $t8, $at, L_45003894
    if (ctx->r24 != ctx->r1) {
        // 0x45003888: nop
    
            goto L_45003894;
    }
    // 0x45003888: nop

    // 0x4500388C: b           L_45003894
    // 0x45003890: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_45003894;
    // 0x45003890: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_45003894:
    // 0x45003894: beq         $v1, $zero, L_450038E0
    if (ctx->r3 == 0) {
        // 0x45003898: nop
    
            goto L_450038E0;
    }
    // 0x45003898: nop

    // 0x4500389C: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x450038A0: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x450038A4: multu       $t9, $t1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x450038A8: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x450038AC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x450038B0: mflo        $t2
    ctx->r10 = lo;
    // 0x450038B4: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x450038B8: lbu         $t4, 0xA($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XA);
    // 0x450038BC: nop

    // 0x450038C0: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x450038C4: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x450038C8: lw          $t9, 0x47C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X47C);
    // 0x450038CC: nop

    // 0x450038D0: jalr        $t9
    // 0x450038D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x450038D4: nop

    after_1:
    // 0x450038D8: b           L_45003A14
    // 0x450038DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45003A14;
    // 0x450038DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450038E0:
    // 0x450038E0: b           L_45003A10
    // 0x450038E4: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
        goto L_45003A10;
    // 0x450038E4: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
L_450038E8:
    // 0x450038E8: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x450038EC: addiu       $t1, $zero, 0xC
    ctx->r9 = ADD32(0, 0XC);
    // 0x450038F0: multu       $t7, $t1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x450038F4: lui         $a3, 0x4501
    ctx->r7 = S32(0X4501 << 16);
    // 0x450038F8: addiu       $a3, $a3, 0x77C
    ctx->r7 = ADD32(ctx->r7, 0X77C);
    // 0x450038FC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x45003900: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x45003904: mflo        $t8
    ctx->r24 = lo;
    // 0x45003908: addu        $t2, $a3, $t8
    ctx->r10 = ADD32(ctx->r7, ctx->r24);
    // 0x4500390C: lbu         $t3, 0xA($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XA);
    // 0x45003910: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x45003914: bne         $t3, $at, L_45003924
    if (ctx->r11 != ctx->r1) {
        // 0x45003918: nop
    
            goto L_45003924;
    }
    // 0x45003918: nop

    // 0x4500391C: b           L_45003924
    // 0x45003920: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_45003924;
    // 0x45003920: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_45003924:
    // 0x45003924: beq         $v1, $zero, L_45003968
    if (ctx->r3 == 0) {
        // 0x45003928: nop
    
            goto L_45003968;
    }
    // 0x45003928: nop

    // 0x4500392C: lw          $t4, 0xC($a0)
    ctx->r12 = MEM_W(ctx->r4, 0XC);
    // 0x45003930: nop

    // 0x45003934: multu       $t4, $t1
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x45003938: mflo        $t5
    ctx->r13 = lo;
    // 0x4500393C: addu        $t9, $a3, $t5
    ctx->r25 = ADD32(ctx->r7, ctx->r13);
    // 0x45003940: lbu         $t6, 0xA($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XA);
    // 0x45003944: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x45003948: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x4500394C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x45003950: lw          $t9, 0x480($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X480);
    // 0x45003954: nop

    // 0x45003958: jalr        $t9
    // 0x4500395C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x4500395C: nop

    after_2:
    // 0x45003960: b           L_45003A14
    // 0x45003964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45003A14;
    // 0x45003964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003968:
    // 0x45003968: b           L_45003A10
    // 0x4500396C: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
        goto L_45003A10;
    // 0x4500396C: sw          $t8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r24;
L_45003970:
    // 0x45003970: lw          $t2, 0x184($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X184);
    // 0x45003974: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x45003978: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x4500397C: bne         $t3, $zero, L_4500398C
    if (ctx->r11 != 0) {
        // 0x45003980: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_4500398C;
    }
    // 0x45003980: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x45003984: b           L_45003A10
    // 0x45003988: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_45003A10;
    // 0x45003988: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_4500398C:
    // 0x4500398C: b           L_45003A10
    // 0x45003990: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_45003A10;
    // 0x45003990: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_45003994:
    // 0x45003994: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x45003998: lw          $t5, 0x54($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X54);
    // 0x4500399C: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x450039A0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x450039A4: slt         $at, $a3, $t5
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x450039A8: beq         $at, $zero, L_450039C0
    if (ctx->r1 == 0) {
        // 0x450039AC: nop
    
            goto L_450039C0;
    }
    // 0x450039AC: nop

    // 0x450039B0: jal         0x4500324C
    // 0x450039B4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    ovl_mobj_main_324C(rdram, ctx);
        goto after_3;
    // 0x450039B4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_3:
    // 0x450039B8: b           L_45003A14
    // 0x450039BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45003A14;
    // 0x450039BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450039C0:
    // 0x450039C0: b           L_45003A10
    // 0x450039C4: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
        goto L_45003A10;
    // 0x450039C4: sw          $t6, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r14;
L_450039C8:
    // 0x450039C8: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x450039CC: addiu       $t7, $v0, 0x14
    ctx->r15 = ADD32(ctx->r2, 0X14);
    // 0x450039D0: b           L_45003A10
    // 0x450039D4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_45003A10;
    // 0x450039D4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_450039D8:
    // 0x450039D8: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x450039DC: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x450039E0: bne         $t9, $at, L_45003A14
    if (ctx->r25 != ctx->r1) {
        // 0x450039E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_45003A14;
    }
    // 0x450039E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450039E8: lw          $t8, 0x4($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X4);
    // 0x450039EC: nop

    // 0x450039F0: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x450039F4: b           L_45003A10
    // 0x450039F8: swc1        $f4, 0x1DC($v0)
    MEM_W(0X1DC, ctx->r2) = ctx->f4.u32l;
        goto L_45003A10;
    // 0x450039F8: swc1        $f4, 0x1DC($v0)
    MEM_W(0X1DC, ctx->r2) = ctx->f4.u32l;
L_450039FC:
    // 0x450039FC: lw          $t2, 0x4($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X4);
    // 0x45003A00: nop

    // 0x45003A04: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x45003A08: nop

    // 0x45003A0C: sw          $t3, 0x2A4($v0)
    MEM_W(0X2A4, ctx->r2) = ctx->r11;
L_45003A10:
    // 0x45003A10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003A14:
    // 0x45003A14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x45003A18: jr          $ra
    // 0x45003A1C: nop

    return;
    // 0x45003A1C: nop

;}
RECOMP_FUNC void ovl_mobj_main_3A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003A20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45003A24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45003A28: jal         0x450027BC
    // 0x45003A2C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    ovl_mobj_main_27BC(rdram, ctx);
        goto after_0;
    // 0x45003A2C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x45003A30: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x45003A34: lui         $t8, 0x4501
    ctx->r24 = S32(0X4501 << 16);
    // 0x45003A38: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x45003A3C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45003A40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x45003A44: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x45003A48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x45003A4C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x45003A50: lbu         $t8, 0x785($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X785);
    // 0x45003A54: nop

    // 0x45003A58: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x45003A5C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x45003A60: lw          $t9, -0x62C($at)
    ctx->r25 = MEM_W(ctx->r1, -0X62C);
    // 0x45003A64: nop

    // 0x45003A68: jalr        $t9
    // 0x45003A6C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x45003A6C: nop

    after_1:
    // 0x45003A70: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x45003A74: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x45003A78: lw          $t0, 0x220($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X220);
    // 0x45003A7C: sw          $zero, 0x228($a3)
    MEM_W(0X228, ctx->r7) = 0;
    // 0x45003A80: sw          $zero, 0x220($a3)
    MEM_W(0X220, ctx->r7) = 0;
    // 0x45003A84: addiu       $t1, $a3, 0x14
    ctx->r9 = ADD32(ctx->r7, 0X14);
    // 0x45003A88: sw          $t0, 0x224($a3)
    MEM_W(0X224, ctx->r7) = ctx->r8;
    // 0x45003A8C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x45003A90: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x45003A94: jal         0x450006C4
    // 0x45003A98: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x45003A98: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x45003A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45003AA0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45003AA4: jr          $ra
    // 0x45003AA8: nop

    return;
    // 0x45003AA8: nop

;}
RECOMP_FUNC void ovl_mobj_main_3AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003AAC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x45003AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45003AB4: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x45003AB8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x45003ABC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x45003AC0: lui         $t8, 0x4501
    ctx->r24 = S32(0X4501 << 16);
    // 0x45003AC4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x45003AC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x45003ACC: addiu       $t8, $t8, 0x77C
    ctx->r24 = ADD32(ctx->r24, 0X77C);
    // 0x45003AD0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45003AD4: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x45003AD8: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x45003ADC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x45003AE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x45003AE4: jal         0x450006C4
    // 0x45003AE8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45003AE8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x45003AEC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x45003AF0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x45003AF4: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x45003AF8: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x45003AFC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x45003B00: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x45003B04: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x45003B08: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x45003B0C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x45003B10: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x45003B14: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x45003B18: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x45003B1C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x45003B20: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x45003B24: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x45003B28: andi        $t5, $v0, 0x400
    ctx->r13 = ctx->r2 & 0X400;
    // 0x45003B2C: beq         $t5, $zero, L_45003B40
    if (ctx->r13 == 0) {
        // 0x45003B30: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_45003B40;
    }
    // 0x45003B30: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x45003B34: addiu       $t6, $zero, 0xEE
    ctx->r14 = ADD32(0, 0XEE);
    // 0x45003B38: b           L_45003B5C
    // 0x45003B3C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
        goto L_45003B5C;
    // 0x45003B3C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_45003B40:
    // 0x45003B40: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x45003B44: beq         $t7, $zero, L_45003B58
    if (ctx->r15 == 0) {
        // 0x45003B48: addiu       $t9, $zero, 0xFF
        ctx->r25 = ADD32(0, 0XFF);
            goto L_45003B58;
    }
    // 0x45003B48: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x45003B4C: addiu       $t8, $zero, 0xFC
    ctx->r24 = ADD32(0, 0XFC);
    // 0x45003B50: b           L_45003B5C
    // 0x45003B54: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
        goto L_45003B5C;
    // 0x45003B54: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
L_45003B58:
    // 0x45003B58: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
L_45003B5C:
    // 0x45003B5C: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x45003B60: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x45003B64: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x45003B68: beq         $t1, $zero, L_45003B84
    if (ctx->r9 == 0) {
        // 0x45003B6C: addiu       $a2, $sp, 0x20
        ctx->r6 = ADD32(ctx->r29, 0X20);
            goto L_45003B84;
    }
    // 0x45003B6C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x45003B70: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x45003B74: nop

    // 0x45003B78: ori         $t3, $t2, 0x20
    ctx->r11 = ctx->r10 | 0X20;
    // 0x45003B7C: b           L_45003B90
    // 0x45003B80: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
        goto L_45003B90;
    // 0x45003B80: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
L_45003B84:
    // 0x45003B84: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x45003B88: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x45003B8C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
L_45003B90:
    // 0x45003B90: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x45003B94: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x45003B98: jal         0x450006C4
    // 0x45003B9C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45003B9C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x45003BA0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x45003BA4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x45003BA8: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x45003BAC: nop

    // 0x45003BB0: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x45003BB4: beq         $t6, $zero, L_45003BD8
    if (ctx->r14 == 0) {
        // 0x45003BB8: andi        $t9, $v0, 0x10
        ctx->r25 = ctx->r2 & 0X10;
            goto L_45003BD8;
    }
    // 0x45003BB8: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
    // 0x45003BBC: lw          $t7, 0x184($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X184);
    // 0x45003BC0: nop

    // 0x45003BC4: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x45003BC8: sw          $t8, 0x184($a3)
    MEM_W(0X184, ctx->r7) = ctx->r24;
    // 0x45003BCC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x45003BD0: nop

    // 0x45003BD4: andi        $t9, $v0, 0x10
    ctx->r25 = ctx->r2 & 0X10;
L_45003BD8:
    // 0x45003BD8: beq         $t9, $zero, L_45003BFC
    if (ctx->r25 == 0) {
        // 0x45003BDC: andi        $t2, $v0, 0x20
        ctx->r10 = ctx->r2 & 0X20;
            goto L_45003BFC;
    }
    // 0x45003BDC: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
    // 0x45003BE0: lw          $t0, 0x184($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X184);
    // 0x45003BE4: nop

    // 0x45003BE8: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x45003BEC: sw          $t1, 0x184($a3)
    MEM_W(0X184, ctx->r7) = ctx->r9;
    // 0x45003BF0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x45003BF4: nop

    // 0x45003BF8: andi        $t2, $v0, 0x20
    ctx->r10 = ctx->r2 & 0X20;
L_45003BFC:
    // 0x45003BFC: beq         $t2, $zero, L_45003C20
    if (ctx->r10 == 0) {
        // 0x45003C00: andi        $t5, $v0, 0x80
        ctx->r13 = ctx->r2 & 0X80;
            goto L_45003C20;
    }
    // 0x45003C00: andi        $t5, $v0, 0x80
    ctx->r13 = ctx->r2 & 0X80;
    // 0x45003C04: lw          $t3, 0x184($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X184);
    // 0x45003C08: nop

    // 0x45003C0C: ori         $t4, $t3, 0x200
    ctx->r12 = ctx->r11 | 0X200;
    // 0x45003C10: sw          $t4, 0x184($a3)
    MEM_W(0X184, ctx->r7) = ctx->r12;
    // 0x45003C14: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x45003C18: nop

    // 0x45003C1C: andi        $t5, $v0, 0x80
    ctx->r13 = ctx->r2 & 0X80;
L_45003C20:
    // 0x45003C20: beq         $t5, $zero, L_45003C44
    if (ctx->r13 == 0) {
        // 0x45003C24: andi        $t8, $v0, 0x40
        ctx->r24 = ctx->r2 & 0X40;
            goto L_45003C44;
    }
    // 0x45003C24: andi        $t8, $v0, 0x40
    ctx->r24 = ctx->r2 & 0X40;
    // 0x45003C28: lw          $t6, 0x184($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X184);
    // 0x45003C2C: nop

    // 0x45003C30: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x45003C34: sw          $t7, 0x184($a3)
    MEM_W(0X184, ctx->r7) = ctx->r15;
    // 0x45003C38: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x45003C3C: nop

    // 0x45003C40: andi        $t8, $v0, 0x40
    ctx->r24 = ctx->r2 & 0X40;
L_45003C44:
    // 0x45003C44: beq         $t8, $zero, L_45003C58
    if (ctx->r24 == 0) {
        // 0x45003C48: nop
    
            goto L_45003C58;
    }
    // 0x45003C48: nop

    // 0x45003C4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45003C50: nop

    // 0x45003C54: swc1        $f4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f4.u32l;
L_45003C58:
    // 0x45003C58: lw          $t9, 0xC($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XC);
    // 0x45003C5C: lui         $t1, 0x4501
    ctx->r9 = S32(0X4501 << 16);
    // 0x45003C60: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x45003C64: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x45003C68: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x45003C6C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x45003C70: lbu         $t1, 0x784($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X784);
    // 0x45003C74: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x45003C78: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x45003C7C: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x45003C80: lw          $t9, -0x6C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6C0);
    // 0x45003C84: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x45003C88: jalr        $t9
    // 0x45003C8C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x45003C8C: nop

    after_2:
    // 0x45003C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45003C94: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x45003C98: jr          $ra
    // 0x45003C9C: nop

    return;
    // 0x45003C9C: nop

;}
RECOMP_FUNC void ovl_mobj_main_3CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003CA0: lui         $v1, 0x4501
    ctx->r3 = S32(0X4501 << 16);
    // 0x45003CA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x45003CA8: lw          $v1, 0x2CF8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2CF8);
    // 0x45003CAC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x45003CB0: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x45003CB4: beq         $at, $zero, L_45003CF8
    if (ctx->r1 == 0) {
        // 0x45003CB8: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_45003CF8;
    }
    // 0x45003CB8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_45003CBC:
    // 0x45003CBC: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x45003CC0: nop

    // 0x45003CC4: beq         $a1, $t6, L_45003CE4
    if (ctx->r5 == ctx->r14) {
        // 0x45003CC8: nop
    
            goto L_45003CE4;
    }
    // 0x45003CC8: nop

    // 0x45003CCC: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x45003CD0: nop

    // 0x45003CD4: beq         $a1, $t7, L_45003CE4
    if (ctx->r5 == ctx->r15) {
        // 0x45003CD8: nop
    
            goto L_45003CE4;
    }
    // 0x45003CD8: nop

    // 0x45003CDC: jr          $ra
    // 0x45003CE0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x45003CE0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_45003CE4:
    // 0x45003CE4: addiu       $v0, $v0, 0x2A8
    ctx->r2 = ADD32(ctx->r2, 0X2A8);
    // 0x45003CE8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x45003CEC: bne         $at, $zero, L_45003CBC
    if (ctx->r1 != 0) {
        // 0x45003CF0: nop
    
            goto L_45003CBC;
    }
    // 0x45003CF0: nop

    // 0x45003CF4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_45003CF8:
    // 0x45003CF8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x45003CFC: jr          $ra
    // 0x45003D00: nop

    return;
    // 0x45003D00: nop

;}
RECOMP_FUNC void ovl_mobj_main_3D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003D04: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x45003D08: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x45003D0C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x45003D10: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x45003D14: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x45003D18: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x45003D1C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x45003D20: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x45003D24: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x45003D28: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x45003D2C: jal         0x4500128C
    // 0x45003D30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_mobj_main_128C(rdram, ctx);
        goto after_0;
    // 0x45003D30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x45003D34: lui         $s1, 0x4501
    ctx->r17 = S32(0X4501 << 16);
    // 0x45003D38: lw          $s1, -0x710($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X710);
    // 0x45003D3C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x45003D40: blez        $s1, L_45003EA4
    if (SIGNED(ctx->r17) <= 0) {
        // 0x45003D44: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_45003EA4;
    }
    // 0x45003D44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x45003D48: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x45003D4C: addiu       $s6, $zero, -0x101
    ctx->r22 = ADD32(0, -0X101);
    // 0x45003D50: addiu       $s5, $zero, -0x3
    ctx->r21 = ADD32(0, -0X3);
    // 0x45003D54: addiu       $s4, $sp, 0x40
    ctx->r20 = ADD32(ctx->r29, 0X40);
    // 0x45003D58: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x45003D5C: addiu       $s2, $sp, 0x48
    ctx->r18 = ADD32(ctx->r29, 0X48);
L_45003D60:
    // 0x45003D60: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x45003D64: jal         0x45003CA0
    // 0x45003D68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_mobj_main_3CA0(rdram, ctx);
        goto after_1;
    // 0x45003D68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x45003D6C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x45003D70: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x45003D74: beq         $t6, $s3, L_45003EA4
    if (ctx->r14 == ctx->r19) {
        // 0x45003D78: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_45003EA4;
    }
    // 0x45003D78: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x45003D7C: jal         0x4500109C
    // 0x45003D80: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_2;
    // 0x45003D80: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x45003D84: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x45003D88: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x45003D8C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x45003D90: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x45003D94: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x45003D98: beq         $t9, $zero, L_45003DB0
    if (ctx->r25 == 0) {
        // 0x45003D9C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_45003DB0;
    }
    // 0x45003D9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x45003DA0: jal         0x4500109C
    // 0x45003DA4: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_3;
    // 0x45003DA4: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_3:
    // 0x45003DA8: b           L_45003E9C
    // 0x45003DAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_45003E9C;
    // 0x45003DAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_45003DB0:
    // 0x45003DB0: lw          $v0, 0x184($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X184);
    // 0x45003DB4: nop

    // 0x45003DB8: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
    // 0x45003DBC: beq         $t1, $zero, L_45003E1C
    if (ctx->r9 == 0) {
        // 0x45003DC0: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_45003E1C;
    }
    // 0x45003DC0: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x45003DC4: lw          $v0, 0x21C($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X21C);
    // 0x45003DC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x45003DCC: slti        $v1, $v0, 0xB
    ctx->r3 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x45003DD0: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x45003DD4: bne         $v1, $zero, L_45003E88
    if (ctx->r3 != 0) {
        // 0x45003DD8: sw          $t2, 0x21C($t0)
        MEM_W(0X21C, ctx->r8) = ctx->r10;
            goto L_45003E88;
    }
    // 0x45003DD8: sw          $t2, 0x21C($t0)
    MEM_W(0X21C, ctx->r8) = ctx->r10;
    // 0x45003DDC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x45003DE0: jal         0x45001CE0
    // 0x45003DE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_mobj_main_1CE0(rdram, ctx);
        goto after_4;
    // 0x45003DE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x45003DE8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x45003DEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x45003DF0: jal         0x4500109C
    // 0x45003DF4: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_5;
    // 0x45003DF4: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_5:
    // 0x45003DF8: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x45003DFC: nop

    // 0x45003E00: lw          $t4, 0x184($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X184);
    // 0x45003E04: nop

    // 0x45003E08: and         $t5, $t4, $s5
    ctx->r13 = ctx->r12 & ctx->r21;
    // 0x45003E0C: sw          $t5, 0x184($t3)
    MEM_W(0X184, ctx->r11) = ctx->r13;
    // 0x45003E10: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x45003E14: b           L_45003E88
    // 0x45003E18: sw          $zero, 0x21C($t6)
    MEM_W(0X21C, ctx->r14) = 0;
        goto L_45003E88;
    // 0x45003E18: sw          $zero, 0x21C($t6)
    MEM_W(0X21C, ctx->r14) = 0;
L_45003E1C:
    // 0x45003E1C: beq         $t7, $zero, L_45003E6C
    if (ctx->r15 == 0) {
        // 0x45003E20: lw          $t5, 0x48($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X48);
            goto L_45003E6C;
    }
    // 0x45003E20: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x45003E24: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x45003E28: nop

    // 0x45003E2C: lw          $v0, 0x21C($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X21C);
    // 0x45003E30: nop

    // 0x45003E34: slti        $v1, $v0, 0x10
    ctx->r3 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x45003E38: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x45003E3C: bne         $v1, $zero, L_45003E68
    if (ctx->r3 != 0) {
        // 0x45003E40: sw          $t9, 0x21C($t8)
        MEM_W(0X21C, ctx->r24) = ctx->r25;
            goto L_45003E68;
    }
    // 0x45003E40: sw          $t9, 0x21C($t8)
    MEM_W(0X21C, ctx->r24) = ctx->r25;
    // 0x45003E44: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x45003E48: nop

    // 0x45003E4C: sw          $zero, 0x21C($t1)
    MEM_W(0X21C, ctx->r9) = 0;
    // 0x45003E50: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x45003E54: nop

    // 0x45003E58: lw          $t0, 0x184($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X184);
    // 0x45003E5C: nop

    // 0x45003E60: and         $t4, $t0, $s6
    ctx->r12 = ctx->r8 & ctx->r22;
    // 0x45003E64: sw          $t4, 0x184($t2)
    MEM_W(0X184, ctx->r10) = ctx->r12;
L_45003E68:
    // 0x45003E68: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
L_45003E6C:
    // 0x45003E6C: nop

    // 0x45003E70: lw          $t3, 0x8($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X8);
    // 0x45003E74: nop

    // 0x45003E78: beq         $s7, $t3, L_45003E8C
    if (ctx->r23 == ctx->r11) {
        // 0x45003E7C: lw          $t6, 0x48($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X48);
            goto L_45003E8C;
    }
    // 0x45003E7C: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x45003E80: jal         0x45003A20
    // 0x45003E84: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    ovl_mobj_main_3A20(rdram, ctx);
        goto after_6;
    // 0x45003E84: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_6:
L_45003E88:
    // 0x45003E88: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
L_45003E8C:
    // 0x45003E8C: nop

    // 0x45003E90: addiu       $t7, $t6, 0x2A8
    ctx->r15 = ADD32(ctx->r14, 0X2A8);
    // 0x45003E94: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x45003E98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_45003E9C:
    // 0x45003E9C: bne         $s0, $s1, L_45003D60
    if (ctx->r16 != ctx->r17) {
        // 0x45003EA0: nop
    
            goto L_45003D60;
    }
    // 0x45003EA0: nop

L_45003EA4:
    // 0x45003EA4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x45003EA8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x45003EAC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x45003EB0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x45003EB4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x45003EB8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x45003EBC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x45003EC0: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x45003EC4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x45003EC8: jr          $ra
    // 0x45003ECC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x45003ECC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_mobj_main_3ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45003ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_45003ED8:
    // 0x45003ED8: jal         0x45003D04
    // 0x45003EDC: nop

    ovl_mobj_main_3D04(rdram, ctx);
        goto after_0;
    // 0x45003EDC: nop

    after_0:
    // 0x45003EE0: jal         0x4500085C
    // 0x45003EE4: nop

    ovl_mobj_main_85C(rdram, ctx);
        goto after_1;
    // 0x45003EE4: nop

    after_1:
    // 0x45003EE8: b           L_45003ED8
    // 0x45003EEC: nop

        goto L_45003ED8;
    // 0x45003EEC: nop

    // 0x45003EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45003EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45003EF8: jr          $ra
    // 0x45003EFC: nop

    return;
    // 0x45003EFC: nop

;}
RECOMP_FUNC void ovl_mobj_main_3F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45003F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45003F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45003F08: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x45003F0C: nop

    // 0x45003F10: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x45003F14: sltiu       $at, $t7, 0x17
    ctx->r1 = ctx->r15 < 0X17 ? 1 : 0;
    // 0x45003F18: beq         $at, $zero, L_45004010
    if (ctx->r1 == 0) {
        // 0x45003F1C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_45004010;
    }
    // 0x45003F1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x45003F20: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45003F24: addu        $at, $at, $t7
    gpr jr_addend_45003F30 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x45003F28: lw          $t7, 0x2000($at)
    ctx->r15 = ADD32(ctx->r1, 0X2000);
    // 0x45003F2C: nop

    // 0x45003F30: jr          $t7
    // 0x45003F34: nop

    switch (jr_addend_45003F30 >> 2) {
        case 0: goto L_45003F68; break;
        case 1: goto L_45004010; break;
        case 2: goto L_45004010; break;
        case 3: goto L_45003F78; break;
        case 4: goto L_45004010; break;
        case 5: goto L_45003F88; break;
        case 6: goto L_45003F38; break;
        case 7: goto L_45003F48; break;
        case 8: goto L_45004010; break;
        case 9: goto L_45004010; break;
        case 10: goto L_45003F98; break;
        case 11: goto L_45004008; break;
        case 12: goto L_45004010; break;
        case 13: goto L_45004010; break;
        case 14: goto L_45004010; break;
        case 15: goto L_45004010; break;
        case 16: goto L_45003FA8; break;
        case 17: goto L_45003FB8; break;
        case 18: goto L_45003FC8; break;
        case 19: goto L_45003FD8; break;
        case 20: goto L_45003F58; break;
        case 21: goto L_45003FE8; break;
        case 22: goto L_45003FF8; break;
        default: switch_error(__func__, 0x45003F30, 0x45012000);
    }
    // 0x45003F34: nop

L_45003F38:
    // 0x45003F38: jal         0x45001DE8
    // 0x45003F3C: nop

    ovl_mobj_main_1DE8(rdram, ctx);
        goto after_0;
    // 0x45003F3C: nop

    after_0:
    // 0x45003F40: b           L_45004014
    // 0x45003F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003F48:
    // 0x45003F48: jal         0x45001E40
    // 0x45003F4C: nop

    ovl_mobj_main_1E40(rdram, ctx);
        goto after_1;
    // 0x45003F4C: nop

    after_1:
    // 0x45003F50: b           L_45004014
    // 0x45003F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003F58:
    // 0x45003F58: jal         0x45001EC8
    // 0x45003F5C: nop

    ovl_mobj_main_1EC8(rdram, ctx);
        goto after_2;
    // 0x45003F5C: nop

    after_2:
    // 0x45003F60: b           L_45004014
    // 0x45003F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003F64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003F68:
    // 0x45003F68: jal         0x45001F78
    // 0x45003F6C: nop

    ovl_mobj_main_1F78(rdram, ctx);
        goto after_3;
    // 0x45003F6C: nop

    after_3:
    // 0x45003F70: b           L_45004014
    // 0x45003F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003F74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003F78:
    // 0x45003F78: jal         0x45002030
    // 0x45003F7C: nop

    ovl_mobj_main_2030(rdram, ctx);
        goto after_4;
    // 0x45003F7C: nop

    after_4:
    // 0x45003F80: b           L_45004014
    // 0x45003F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003F88:
    // 0x45003F88: jal         0x4500230C
    // 0x45003F8C: nop

    ovl_mobj_main_230C(rdram, ctx);
        goto after_5;
    // 0x45003F8C: nop

    after_5:
    // 0x45003F90: b           L_45004014
    // 0x45003F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003F98:
    // 0x45003F98: jal         0x45002D1C
    // 0x45003F9C: nop

    ovl_mobj_main_2D1C(rdram, ctx);
        goto after_6;
    // 0x45003F9C: nop

    after_6:
    // 0x45003FA0: b           L_45004014
    // 0x45003FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003FA8:
    // 0x45003FA8: jal         0x45003168
    // 0x45003FAC: nop

    ovl_mobj_main_3168(rdram, ctx);
        goto after_7;
    // 0x45003FAC: nop

    after_7:
    // 0x45003FB0: b           L_45004014
    // 0x45003FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003FB8:
    // 0x45003FB8: jal         0x4500332C
    // 0x45003FBC: nop

    ovl_mobj_main_332C(rdram, ctx);
        goto after_8;
    // 0x45003FBC: nop

    after_8:
    // 0x45003FC0: b           L_45004014
    // 0x45003FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003FC8:
    // 0x45003FC8: jal         0x45003434
    // 0x45003FCC: nop

    ovl_mobj_main_3434(rdram, ctx);
        goto after_9;
    // 0x45003FCC: nop

    after_9:
    // 0x45003FD0: b           L_45004014
    // 0x45003FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003FD8:
    // 0x45003FD8: jal         0x4500379C
    // 0x45003FDC: nop

    ovl_mobj_main_379C(rdram, ctx);
        goto after_10;
    // 0x45003FDC: nop

    after_10:
    // 0x45003FE0: b           L_45004014
    // 0x45003FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003FE8:
    // 0x45003FE8: jal         0x45003550
    // 0x45003FEC: nop

    ovl_mobj_main_3550(rdram, ctx);
        goto after_11;
    // 0x45003FEC: nop

    after_11:
    // 0x45003FF0: b           L_45004014
    // 0x45003FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45003FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45003FF8:
    // 0x45003FF8: jal         0x45003598
    // 0x45003FFC: nop

    ovl_mobj_main_3598(rdram, ctx);
        goto after_12;
    // 0x45003FFC: nop

    after_12:
    // 0x45004000: b           L_45004014
    // 0x45004004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_45004014;
    // 0x45004004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45004008:
    // 0x45004008: jal         0x45003704
    // 0x4500400C: nop

    ovl_mobj_main_3704(rdram, ctx);
        goto after_13;
    // 0x4500400C: nop

    after_13:
L_45004010:
    // 0x45004010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45004014:
    // 0x45004014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45004018: jr          $ra
    // 0x4500401C: nop

    return;
    // 0x4500401C: nop

;}
RECOMP_FUNC void ovl_mobj_main_4020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004020: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45004024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45004028: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4500402C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x45004030: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45004034: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x45004038: jal         0x450006C4
    // 0x4500403C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500403C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x45004040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45004044: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45004048: jr          $ra
    // 0x4500404C: nop

    return;
    // 0x4500404C: nop

;}
RECOMP_FUNC void ovl_mobj_main_4050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004050: jr          $ra
    // 0x45004054: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x45004054: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_mobj_main_4058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004058: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4500405C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45004060: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x45004064: lui         $t8, 0x4501
    ctx->r24 = S32(0X4501 << 16);
    // 0x45004068: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x4500406C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x45004070: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x45004074: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x45004078: lbu         $t8, 0x77F($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X77F);
    // 0x4500407C: lui         $t0, 0x4501
    ctx->r8 = S32(0X4501 << 16);
    // 0x45004080: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x45004084: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x45004088: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x4500408C: addiu       $t0, $t0, -0x390
    ctx->r8 = ADD32(ctx->r8, -0X390);
    // 0x45004090: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x45004094: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x45004098: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x4500409C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x450040A0: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x450040A4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x450040A8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x450040AC: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x450040B0: nop

    // 0x450040B4: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x450040B8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450040BC: jal         0x450006C4
    // 0x450040C0: nop

    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450040C0: nop

    after_0:
    // 0x450040C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450040C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x450040CC: jr          $ra
    // 0x450040D0: nop

    return;
    // 0x450040D0: nop

;}
RECOMP_FUNC void ovl_mobj_main_40D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450040D4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x450040D8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x450040DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x450040E0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x450040E4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x450040E8: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x450040EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x450040F0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x450040F4: addiu       $a2, $zero, 0x238
    ctx->r6 = ADD32(0, 0X238);
    // 0x450040F8: jal         0x45000F34
    // 0x450040FC: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x450040FC: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x45004100: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004104: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x45004108: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4500410C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x45004110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45004114: jal         0x4500192C
    // 0x45004118: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_192C(rdram, ctx);
        goto after_1;
    // 0x45004118: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x4500411C: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x45004120: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x45004124: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x45004128: addiu       $a3, $zero, 0x238
    ctx->r7 = ADD32(0, 0X238);
    // 0x4500412C: jal         0x45000F34
    // 0x45004130: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x45004130: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x45004134: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x45004138: sw          $t6, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r14;
    // 0x4500413C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x45004140: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45004144: sw          $t7, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r15;
    // 0x45004148: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x4500414C: cvt.d.s     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f0.d = CVT_D_S(ctx->f4.fl);
    // 0x45004150: sw          $t8, 0x1D0($s0)
    MEM_W(0X1D0, ctx->r16) = ctx->r24;
    // 0x45004154: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x45004158: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x4500415C: addiu       $t1, $zero, 0x1B
    ctx->r9 = ADD32(0, 0X1B);
    // 0x45004160: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x45004164: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x45004168: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x4500416C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x45004170: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x45004174: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x45004178: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x4500417C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x45004180: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x45004184: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x45004188: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4500418C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x45004190: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45004194: jal         0x45000F34
    // 0x45004198: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_3;
    // 0x45004198: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_3:
    // 0x4500419C: jal         0x450041B4
    // 0x450041A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_41B4(rdram, ctx);
        goto after_4;
    // 0x450041A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x450041A4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x450041A8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x450041AC: jr          $ra
    // 0x450041B0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x450041B0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_mobj_main_41B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450041B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x450041B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450041BC: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x450041C0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x450041C4: slti        $at, $a2, 0x5E
    ctx->r1 = SIGNED(ctx->r6) < 0X5E ? 1 : 0;
    // 0x450041C8: bne         $at, $zero, L_45004214
    if (ctx->r1 != 0) {
        // 0x450041CC: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_45004214;
    }
    // 0x450041CC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x450041D0: slti        $at, $v0, 0x7B
    ctx->r1 = SIGNED(ctx->r2) < 0X7B ? 1 : 0;
    // 0x450041D4: bne         $at, $zero, L_45004200
    if (ctx->r1 != 0) {
        // 0x450041D8: addiu       $t6, $v0, -0xC8
        ctx->r14 = ADD32(ctx->r2, -0XC8);
            goto L_45004200;
    }
    // 0x450041D8: addiu       $t6, $v0, -0xC8
    ctx->r14 = ADD32(ctx->r2, -0XC8);
    // 0x450041DC: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x450041E0: beq         $at, $zero, L_450042F8
    if (ctx->r1 == 0) {
        // 0x450041E4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_450042F8;
    }
    // 0x450041E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x450041E8: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x450041EC: addu        $at, $at, $t6
    gpr jr_addend_450041F8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x450041F0: lw          $t6, 0x2060($at)
    ctx->r14 = ADD32(ctx->r1, 0X2060);
    // 0x450041F4: nop

    // 0x450041F8: jr          $t6
    // 0x450041FC: nop

    switch (jr_addend_450041F8 >> 2) {
        case 0: goto L_450042DC; break;
        case 1: goto L_450042E4; break;
        case 2: goto L_450042EC; break;
        case 3: goto L_450042F4; break;
        case 4: goto L_450042F8; break;
        case 5: goto L_45004294; break;
        default: switch_error(__func__, 0x450041F8, 0x45012060);
    }
    // 0x450041FC: nop

L_45004200:
    // 0x45004200: addiu       $at, $zero, 0x7A
    ctx->r1 = ADD32(0, 0X7A);
    // 0x45004204: beq         $v0, $at, L_4500428C
    if (ctx->r2 == ctx->r1) {
        // 0x45004208: nop
    
            goto L_4500428C;
    }
    // 0x45004208: nop

    // 0x4500420C: b           L_450042FC
    // 0x45004210: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_450042FC;
    // 0x45004210: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_45004214:
    // 0x45004214: slti        $at, $v0, 0x53
    ctx->r1 = SIGNED(ctx->r2) < 0X53 ? 1 : 0;
    // 0x45004218: bne         $at, $zero, L_45004230
    if (ctx->r1 != 0) {
        // 0x4500421C: addiu       $at, $zero, 0x5D
        ctx->r1 = ADD32(0, 0X5D);
            goto L_45004230;
    }
    // 0x4500421C: addiu       $at, $zero, 0x5D
    ctx->r1 = ADD32(0, 0X5D);
    // 0x45004220: beq         $v0, $at, L_450042CC
    if (ctx->r2 == ctx->r1) {
        // 0x45004224: nop
    
            goto L_450042CC;
    }
    // 0x45004224: nop

    // 0x45004228: b           L_450042FC
    // 0x4500422C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_450042FC;
    // 0x4500422C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_45004230:
    // 0x45004230: slti        $at, $v0, 0x37
    ctx->r1 = SIGNED(ctx->r2) < 0X37 ? 1 : 0;
    // 0x45004234: bne         $at, $zero, L_45004250
    if (ctx->r1 != 0) {
        // 0x45004238: addiu       $t7, $v0, -0xC
        ctx->r15 = ADD32(ctx->r2, -0XC);
            goto L_45004250;
    }
    // 0x45004238: addiu       $t7, $v0, -0xC
    ctx->r15 = ADD32(ctx->r2, -0XC);
    // 0x4500423C: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x45004240: beq         $v0, $at, L_4500427C
    if (ctx->r2 == ctx->r1) {
        // 0x45004244: nop
    
            goto L_4500427C;
    }
    // 0x45004244: nop

    // 0x45004248: b           L_450042FC
    // 0x4500424C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_450042FC;
    // 0x4500424C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_45004250:
    // 0x45004250: sltiu       $at, $t7, 0x2B
    ctx->r1 = ctx->r15 < 0X2B ? 1 : 0;
    // 0x45004254: beq         $at, $zero, L_450042F8
    if (ctx->r1 == 0) {
        // 0x45004258: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_450042F8;
    }
    // 0x45004258: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4500425C: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45004260: addu        $at, $at, $t7
    gpr jr_addend_4500426C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x45004264: lw          $t7, 0x2078($at)
    ctx->r15 = ADD32(ctx->r1, 0X2078);
    // 0x45004268: nop

    // 0x4500426C: jr          $t7
    // 0x45004270: nop

    switch (jr_addend_4500426C >> 2) {
        case 0: goto L_45004284; break;
        case 1: goto L_450042F8; break;
        case 2: goto L_450042F8; break;
        case 3: goto L_450042F8; break;
        case 4: goto L_450042F8; break;
        case 5: goto L_450042F8; break;
        case 6: goto L_450042F8; break;
        case 7: goto L_450042D4; break;
        case 8: goto L_450042A4; break;
        case 9: goto L_450042BC; break;
        case 10: goto L_450042F8; break;
        case 11: goto L_450042F8; break;
        case 12: goto L_450042F8; break;
        case 13: goto L_450042F8; break;
        case 14: goto L_450042F8; break;
        case 15: goto L_450042F8; break;
        case 16: goto L_450042F8; break;
        case 17: goto L_450042F8; break;
        case 18: goto L_450042F8; break;
        case 19: goto L_450042F8; break;
        case 20: goto L_450042F8; break;
        case 21: goto L_450042F8; break;
        case 22: goto L_450042F8; break;
        case 23: goto L_450042F8; break;
        case 24: goto L_450042F8; break;
        case 25: goto L_450042C4; break;
        case 26: goto L_4500429C; break;
        case 27: goto L_450042B4; break;
        case 28: goto L_450042F8; break;
        case 29: goto L_450042F8; break;
        case 30: goto L_450042F8; break;
        case 31: goto L_450042F8; break;
        case 32: goto L_450042F8; break;
        case 33: goto L_450042F8; break;
        case 34: goto L_450042F8; break;
        case 35: goto L_45004274; break;
        case 36: goto L_450042F8; break;
        case 37: goto L_450042F8; break;
        case 38: goto L_450042F8; break;
        case 39: goto L_450042F8; break;
        case 40: goto L_450042F8; break;
        case 41: goto L_450042F8; break;
        case 42: goto L_450042AC; break;
        default: switch_error(__func__, 0x4500426C, 0x45012078);
    }
    // 0x45004270: nop

L_45004274:
    // 0x45004274: b           L_450042F8
    // 0x45004278: addiu       $a1, $zero, 0x223
    ctx->r5 = ADD32(0, 0X223);
        goto L_450042F8;
    // 0x45004278: addiu       $a1, $zero, 0x223
    ctx->r5 = ADD32(0, 0X223);
L_4500427C:
    // 0x4500427C: b           L_450042F8
    // 0x45004280: addiu       $a1, $zero, 0x224
    ctx->r5 = ADD32(0, 0X224);
        goto L_450042F8;
    // 0x45004280: addiu       $a1, $zero, 0x224
    ctx->r5 = ADD32(0, 0X224);
L_45004284:
    // 0x45004284: b           L_450042F8
    // 0x45004288: addiu       $a1, $zero, 0x226
    ctx->r5 = ADD32(0, 0X226);
        goto L_450042F8;
    // 0x45004288: addiu       $a1, $zero, 0x226
    ctx->r5 = ADD32(0, 0X226);
L_4500428C:
    // 0x4500428C: b           L_450042F8
    // 0x45004290: addiu       $a1, $zero, 0x225
    ctx->r5 = ADD32(0, 0X225);
        goto L_450042F8;
    // 0x45004290: addiu       $a1, $zero, 0x225
    ctx->r5 = ADD32(0, 0X225);
L_45004294:
    // 0x45004294: b           L_450042F8
    // 0x45004298: addiu       $a1, $zero, 0x297
    ctx->r5 = ADD32(0, 0X297);
        goto L_450042F8;
    // 0x45004298: addiu       $a1, $zero, 0x297
    ctx->r5 = ADD32(0, 0X297);
L_4500429C:
    // 0x4500429C: b           L_450042F8
    // 0x450042A0: addiu       $a1, $zero, 0x2CB
    ctx->r5 = ADD32(0, 0X2CB);
        goto L_450042F8;
    // 0x450042A0: addiu       $a1, $zero, 0x2CB
    ctx->r5 = ADD32(0, 0X2CB);
L_450042A4:
    // 0x450042A4: b           L_450042F8
    // 0x450042A8: addiu       $a1, $zero, 0x2CA
    ctx->r5 = ADD32(0, 0X2CA);
        goto L_450042F8;
    // 0x450042A8: addiu       $a1, $zero, 0x2CA
    ctx->r5 = ADD32(0, 0X2CA);
L_450042AC:
    // 0x450042AC: b           L_450042F8
    // 0x450042B0: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
        goto L_450042F8;
    // 0x450042B0: addiu       $a1, $zero, 0x2EC
    ctx->r5 = ADD32(0, 0X2EC);
L_450042B4:
    // 0x450042B4: b           L_450042F8
    // 0x450042B8: addiu       $a1, $zero, 0x36C
    ctx->r5 = ADD32(0, 0X36C);
        goto L_450042F8;
    // 0x450042B8: addiu       $a1, $zero, 0x36C
    ctx->r5 = ADD32(0, 0X36C);
L_450042BC:
    // 0x450042BC: b           L_450042F8
    // 0x450042C0: addiu       $a1, $zero, 0x244
    ctx->r5 = ADD32(0, 0X244);
        goto L_450042F8;
    // 0x450042C0: addiu       $a1, $zero, 0x244
    ctx->r5 = ADD32(0, 0X244);
L_450042C4:
    // 0x450042C4: b           L_450042F8
    // 0x450042C8: addiu       $a1, $zero, 0x245
    ctx->r5 = ADD32(0, 0X245);
        goto L_450042F8;
    // 0x450042C8: addiu       $a1, $zero, 0x245
    ctx->r5 = ADD32(0, 0X245);
L_450042CC:
    // 0x450042CC: b           L_450042F8
    // 0x450042D0: addiu       $a1, $zero, 0x260
    ctx->r5 = ADD32(0, 0X260);
        goto L_450042F8;
    // 0x450042D0: addiu       $a1, $zero, 0x260
    ctx->r5 = ADD32(0, 0X260);
L_450042D4:
    // 0x450042D4: b           L_450042F8
    // 0x450042D8: addiu       $a1, $zero, 0x261
    ctx->r5 = ADD32(0, 0X261);
        goto L_450042F8;
    // 0x450042D8: addiu       $a1, $zero, 0x261
    ctx->r5 = ADD32(0, 0X261);
L_450042DC:
    // 0x450042DC: b           L_450042F8
    // 0x450042E0: addiu       $a1, $zero, 0x2FB
    ctx->r5 = ADD32(0, 0X2FB);
        goto L_450042F8;
    // 0x450042E0: addiu       $a1, $zero, 0x2FB
    ctx->r5 = ADD32(0, 0X2FB);
L_450042E4:
    // 0x450042E4: b           L_450042F8
    // 0x450042E8: addiu       $a1, $zero, 0x2FA
    ctx->r5 = ADD32(0, 0X2FA);
        goto L_450042F8;
    // 0x450042E8: addiu       $a1, $zero, 0x2FA
    ctx->r5 = ADD32(0, 0X2FA);
L_450042EC:
    // 0x450042EC: b           L_450042F8
    // 0x450042F0: addiu       $a1, $zero, 0x2FC
    ctx->r5 = ADD32(0, 0X2FC);
        goto L_450042F8;
    // 0x450042F0: addiu       $a1, $zero, 0x2FC
    ctx->r5 = ADD32(0, 0X2FC);
L_450042F4:
    // 0x450042F4: addiu       $a1, $zero, 0x2FD
    ctx->r5 = ADD32(0, 0X2FD);
L_450042F8:
    // 0x450042F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_450042FC:
    // 0x450042FC: beq         $a1, $at, L_4500431C
    if (ctx->r5 == ctx->r1) {
        // 0x45004300: nop
    
            goto L_4500431C;
    }
    // 0x45004300: nop

    // 0x45004304: jal         0x45004020
    // 0x45004308: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_4020(rdram, ctx);
        goto after_0;
    // 0x45004308: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4500430C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45004310: nop

    // 0x45004314: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x45004318: nop

L_4500431C:
    // 0x4500431C: lw          $t8, 0x184($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X184);
    // 0x45004320: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x45004324: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x45004328: subu        $t0, $t0, $a2
    ctx->r8 = SUB32(ctx->r8, ctx->r6);
    // 0x4500432C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x45004330: lui         $v1, 0x4501
    ctx->r3 = S32(0X4501 << 16);
    // 0x45004334: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x45004338: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
    // 0x4500433C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x45004340: lbu         $v1, 0x786($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X786);
    // 0x45004344: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x45004348: bne         $v1, $at, L_45004358
    if (ctx->r3 != ctx->r1) {
        // 0x4500434C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_45004358;
    }
    // 0x4500434C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x45004350: b           L_45004358
    // 0x45004354: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_45004358;
    // 0x45004354: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_45004358:
    // 0x45004358: beq         $v0, $zero, L_45004378
    if (ctx->r2 == 0) {
        // 0x4500435C: sll         $t1, $v1, 3
        ctx->r9 = S32(ctx->r3 << 3);
            goto L_45004378;
    }
    // 0x4500435C: sll         $t1, $v1, 3
    ctx->r9 = S32(ctx->r3 << 3);
    // 0x45004360: lui         $t9, 0x4501
    ctx->r25 = S32(0X4501 << 16);
    // 0x45004364: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x45004368: lw          $t9, 0x47C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X47C);
    // 0x4500436C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x45004370: jalr        $t9
    // 0x45004374: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x45004374: nop

    after_1:
L_45004378:
    // 0x45004378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4500437C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45004380: jr          $ra
    // 0x45004384: nop

    return;
    // 0x45004384: nop

;}
RECOMP_FUNC void ovl_mobj_main_4388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4500438C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45004390: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45004394: jal         0x45005DA4
    // 0x45004398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_mobj_main_5DA4(rdram, ctx);
        goto after_0;
    // 0x45004398: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x4500439C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x450043A0: jal         0x45004058
    // 0x450043A4: nop

    ovl_mobj_main_4058(rdram, ctx);
        goto after_1;
    // 0x450043A4: nop

    after_1:
    // 0x450043A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450043AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450043B0: jr          $ra
    // 0x450043B4: nop

    return;
    // 0x450043B4: nop

;}
RECOMP_FUNC void ovl_mobj_main_43B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450043B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x450043BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x450043C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x450043C4: jal         0x450047AC
    // 0x450043C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_mobj_main_47AC(rdram, ctx);
        goto after_0;
    // 0x450043C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x450043CC: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x450043D0: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x450043D4: bne         $t6, $at, L_45004434
    if (ctx->r14 != ctx->r1) {
        // 0x450043D8: addiu       $a0, $zero, 0x3C
        ctx->r4 = ADD32(0, 0X3C);
            goto L_45004434;
    }
    // 0x450043D8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x450043DC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x450043E0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x450043E4: jal         0x450006C4
    // 0x450043E8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x450043E8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x450043EC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x450043F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x450043F4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x450043F8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x450043FC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45004400: jal         0x450006C4
    // 0x45004404: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x45004404: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x45004408: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500440C: lwc1        $f0, 0x2124($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2124);
    // 0x45004410: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x45004414: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x45004418: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x4500441C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x45004420: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45004424: jal         0x450006C4
    // 0x45004428: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_3;
    // 0x45004428: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x4500442C: b           L_45004448
    // 0x45004430: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_45004448;
    // 0x45004430: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45004434:
    // 0x45004434: jal         0x4500034C
    // 0x45004438: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    ovl_mobj_main_34C(rdram, ctx);
        goto after_4;
    // 0x45004438: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    after_4:
    // 0x4500443C: addiu       $t7, $v0, 0x5A
    ctx->r15 = ADD32(ctx->r2, 0X5A);
    // 0x45004440: sw          $t7, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->r15;
    // 0x45004444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_45004448:
    // 0x45004448: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4500444C: jr          $ra
    // 0x45004450: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x45004450: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_mobj_main_4454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45004458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500445C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x45004460: lui         $t8, 0x4501
    ctx->r24 = S32(0X4501 << 16);
    // 0x45004464: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x45004468: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x4500446C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x45004470: addiu       $t8, $t8, 0x77C
    ctx->r24 = ADD32(ctx->r24, 0X77C);
    // 0x45004474: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x45004478: lhu         $a1, 0x0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X0);
    // 0x4500447C: jal         0x45004020
    // 0x45004480: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    ovl_mobj_main_4020(rdram, ctx);
        goto after_0;
    // 0x45004480: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_0:
    // 0x45004484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45004488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4500448C: jr          $ra
    // 0x45004490: nop

    return;
    // 0x45004490: nop

;}
RECOMP_FUNC void ovl_mobj_main_4494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004494: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x45004498: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x4500449C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x450044A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x450044A4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x450044A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x450044AC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x450044B0: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x450044B4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x450044B8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x450044BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x450044C0: jal         0x45000F34
    // 0x450044C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x450044C4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x450044C8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x450044CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x450044D0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x450044D4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x450044D8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x450044DC: jal         0x4500192C
    // 0x450044E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_mobj_main_192C(rdram, ctx);
        goto after_1;
    // 0x450044E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x450044E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x450044E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x450044EC: sw          $t6, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r14;
    // 0x450044F0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x450044F4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x450044F8: sw          $t8, 0x1D0($a0)
    MEM_W(0X1D0, ctx->r4) = ctx->r24;
    // 0x450044FC: sw          $t7, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = ctx->r15;
    // 0x45004500: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x45004504: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x45004508: jr          $ra
    // 0x4500450C: nop

    return;
    // 0x4500450C: nop

;}
RECOMP_FUNC void ovl_mobj_main_4510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004510: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x45004514: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x45004518: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x4500451C: swc1        $f21, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x45004520: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    // 0x45004524: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x45004528: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x4500452C: bne         $v0, $at, L_4500455C
    if (ctx->r2 != ctx->r1) {
        // 0x45004530: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_4500455C;
    }
    // 0x45004530: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45004534: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x45004538: addiu       $a1, $zero, 0x241
    ctx->r5 = ADD32(0, 0X241);
    // 0x4500453C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x45004540: lui         $a3, 0x4290
    ctx->r7 = S32(0X4290 << 16);
    // 0x45004544: jal         0x45004494
    // 0x45004548: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    ovl_mobj_main_4494(rdram, ctx);
        goto after_0;
    // 0x45004548: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x4500454C: jal         0x450047AC
    // 0x45004550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_47AC(rdram, ctx);
        goto after_1;
    // 0x45004550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x45004554: b           L_45004660
    // 0x45004558: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_45004660;
    // 0x45004558: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_4500455C:
    // 0x4500455C: addiu       $at, $zero, 0x9A
    ctx->r1 = ADD32(0, 0X9A);
    // 0x45004560: bne         $v0, $at, L_45004598
    if (ctx->r2 != ctx->r1) {
        // 0x45004564: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_45004598;
    }
    // 0x45004564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45004568: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x4500456C: addiu       $a1, $zero, 0x32B
    ctx->r5 = ADD32(0, 0X32B);
    // 0x45004570: lui         $a2, 0xC240
    ctx->r6 = S32(0XC240 << 16);
    // 0x45004574: lui         $a3, 0x4170
    ctx->r7 = S32(0X4170 << 16);
    // 0x45004578: jal         0x45004494
    // 0x4500457C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    ovl_mobj_main_4494(rdram, ctx);
        goto after_2;
    // 0x4500457C: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_2:
    // 0x45004580: swc1        $f20, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f20.u32l;
    // 0x45004584: sw          $zero, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = 0;
    // 0x45004588: jal         0x450047AC
    // 0x4500458C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_47AC(rdram, ctx);
        goto after_3;
    // 0x4500458C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x45004590: b           L_45004660
    // 0x45004594: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_45004660;
    // 0x45004594: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_45004598:
    // 0x45004598: addiu       $at, $zero, 0xAA
    ctx->r1 = ADD32(0, 0XAA);
    // 0x4500459C: bne         $v0, $at, L_450045CC
    if (ctx->r2 != ctx->r1) {
        // 0x450045A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_450045CC;
    }
    // 0x450045A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450045A4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x450045A8: addiu       $a1, $zero, 0x304
    ctx->r5 = ADD32(0, 0X304);
    // 0x450045AC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x450045B0: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x450045B4: jal         0x45004494
    // 0x450045B8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    ovl_mobj_main_4494(rdram, ctx);
        goto after_4;
    // 0x450045B8: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_4:
    // 0x450045BC: jal         0x450051C0
    // 0x450045C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_51C0(rdram, ctx);
        goto after_5;
    // 0x450045C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x450045C4: b           L_45004660
    // 0x450045C8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_45004660;
    // 0x450045C8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_450045CC:
    // 0x450045CC: addiu       $at, $zero, 0x110
    ctx->r1 = ADD32(0, 0X110);
    // 0x450045D0: bne         $v0, $at, L_4500465C
    if (ctx->r2 != ctx->r1) {
        // 0x450045D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4500465C;
    }
    // 0x450045D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x450045D8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x450045DC: addiu       $a1, $zero, 0x3DF
    ctx->r5 = ADD32(0, 0X3DF);
    // 0x450045E0: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x450045E4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x450045E8: jal         0x45004494
    // 0x450045EC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    ovl_mobj_main_4494(rdram, ctx);
        goto after_6;
    // 0x450045EC: swc1        $f20, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x450045F0: lw          $a2, 0x1CC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1CC);
    // 0x450045F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x450045F8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x450045FC: addiu       $a1, $s0, 0x1D0
    ctx->r5 = ADD32(ctx->r16, 0X1D0);
    // 0x45004600: jal         0x45000F34
    // 0x45004604: addiu       $a3, $zero, 0x3DF
    ctx->r7 = ADD32(0, 0X3DF);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_7;
    // 0x45004604: addiu       $a3, $zero, 0x3DF
    ctx->r7 = ADD32(0, 0X3DF);
    after_7:
    // 0x45004608: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x4500460C: lw          $a2, 0x1D0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1D0);
    // 0x45004610: cvt.d.s     $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f0.d = CVT_D_S(ctx->f20.fl);
    // 0x45004614: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x45004618: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x4500461C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x45004620: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x45004624: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x45004628: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x4500462C: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x45004630: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x45004634: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x45004638: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x4500463C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x45004640: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45004644: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45004648: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4500464C: jal         0x45000F34
    // 0x45004650: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_8;
    // 0x45004650: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_8:
    // 0x45004654: jal         0x450041B4
    // 0x45004658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_41B4(rdram, ctx);
        goto after_9;
    // 0x45004658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_4500465C:
    // 0x4500465C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_45004660:
    // 0x45004660: lwc1        $f21, 0x50($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x45004664: lwc1        $f20, 0x54($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X54);
    // 0x45004668: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x4500466C: jr          $ra
    // 0x45004670: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x45004670: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_mobj_main_4674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004674: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45004678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500467C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45004680: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45004684: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45004688: jal         0x450006C4
    // 0x4500468C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500468C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x45004690: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x45004694: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45004698: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4500469C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x450046A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x450046A4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x450046A8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x450046AC: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x450046B0: jal         0x450006C4
    // 0x450046B4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x450046B4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x450046B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450046BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x450046C0: jr          $ra
    // 0x450046C4: nop

    return;
    // 0x450046C4: nop

;}
RECOMP_FUNC void ovl_mobj_main_46C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450046C8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x450046CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450046D0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x450046D4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450046D8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x450046DC: jal         0x450006C4
    // 0x450046E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450046E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x450046E4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x450046E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x450046EC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x450046F0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x450046F4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x450046F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x450046FC: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x45004700: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x45004704: jal         0x450006C4
    // 0x45004708: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45004708: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x4500470C: lui         $v0, 0x4501
    ctx->r2 = S32(0X4501 << 16);
    // 0x45004710: addiu       $v0, $v0, 0x1550
    ctx->r2 = ADD32(ctx->r2, 0X1550);
    // 0x45004714: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x45004718: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4500471C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x45004720: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x45004724: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x45004728: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4500472C: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x45004730: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x45004734: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
    // 0x45004738: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x4500473C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x45004740: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x45004744: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45004748: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x4500474C: jal         0x450006C4
    // 0x45004750: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x45004750: swc1        $f6, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f6.u32l;
    after_2:
    // 0x45004754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45004758: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x4500475C: jr          $ra
    // 0x45004760: nop

    return;
    // 0x45004760: nop

;}
RECOMP_FUNC void ovl_mobj_main_4764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45004768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500476C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x45004770: jal         0x4500500C
    // 0x45004774: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    ovl_mobj_main_500C(rdram, ctx);
        goto after_0;
    // 0x45004774: lui         $a1, 0xC2C8
    ctx->r5 = S32(0XC2C8 << 16);
    after_0:
    // 0x45004778: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4500477C: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x45004780: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x45004784: nop

    // 0x45004788: bne         $t6, $at, L_450047A0
    if (ctx->r14 != ctx->r1) {
        // 0x4500478C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450047A0;
    }
    // 0x4500478C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45004790: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45004794: nop

    // 0x45004798: swc1        $f4, 0x1DC($a0)
    MEM_W(0X1DC, ctx->r4) = ctx->f4.u32l;
    // 0x4500479C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450047A0:
    // 0x450047A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x450047A4: jr          $ra
    // 0x450047A8: nop

    return;
    // 0x450047A8: nop

;}
RECOMP_FUNC void ovl_mobj_main_47AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450047AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x450047B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450047B4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x450047B8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x450047BC: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x450047C0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x450047C4: jal         0x450006C4
    // 0x450047C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x450047C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x450047CC: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x450047D0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x450047D4: nop

    // 0x450047D8: swc1        $f4, 0x204($a3)
    MEM_W(0X204, ctx->r7) = ctx->f4.u32l;
    // 0x450047DC: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x450047E0: nop

    // 0x450047E4: swc1        $f6, 0x208($a3)
    MEM_W(0X208, ctx->r7) = ctx->f6.u32l;
    // 0x450047E8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x450047EC: nop

    // 0x450047F0: swc1        $f8, 0x20C($a3)
    MEM_W(0X20C, ctx->r7) = ctx->f8.u32l;
    // 0x450047F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450047F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x450047FC: jr          $ra
    // 0x45004800: nop

    return;
    // 0x45004800: nop

;}
RECOMP_FUNC void ovl_mobj_main_4804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45004808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4500480C: jal         0x450047AC
    // 0x45004810: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_47AC(rdram, ctx);
        goto after_0;
    // 0x45004810: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45004814: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45004818: jal         0x450041B4
    // 0x4500481C: nop

    ovl_mobj_main_41B4(rdram, ctx);
        goto after_1;
    // 0x4500481C: nop

    after_1:
    // 0x45004820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45004824: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45004828: jr          $ra
    // 0x4500482C: nop

    return;
    // 0x4500482C: nop

;}
RECOMP_FUNC void ovl_mobj_main_4830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004830: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x45004834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45004838: lw          $t6, 0x194($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X194);
    // 0x4500483C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004840: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x45004844: lw          $t7, 0x194($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X194);
    // 0x45004848: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4500484C: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x45004850: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x45004854: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
    // 0x45004858: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x4500485C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45004860: sw          $a3, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r7;
    // 0x45004864: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x45004868: jal         0x450006C4
    // 0x4500486C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500486C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x45004870: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x45004874: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45004878: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x4500487C: lwc1        $f6, 0x2128($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2128);
    // 0x45004880: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x45004884: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45004888: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x4500488C: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x45004890: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x45004894: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x45004898: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x4500489C: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x450048A0: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x450048A4: jal         0x4500109C
    // 0x450048A8: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    ovl_mobj_main_109C(rdram, ctx);
        goto after_1;
    // 0x450048A8: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x450048AC: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x450048B0: jal         0x450041B4
    // 0x450048B4: nop

    ovl_mobj_main_41B4(rdram, ctx);
        goto after_2;
    // 0x450048B4: nop

    after_2:
    // 0x450048B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450048BC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x450048C0: jr          $ra
    // 0x450048C4: nop

    return;
    // 0x450048C4: nop

;}
RECOMP_FUNC void ovl_mobj_main_48C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450048C8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x450048CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x450048D0: lw          $t6, 0x184($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X184);
    // 0x450048D4: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x450048D8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x450048DC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x450048E0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x450048E4: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x450048E8: sw          $t7, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r15;
    // 0x450048EC: addiu       $at, $zero, 0x30
    ctx->r1 = ADD32(0, 0X30);
    // 0x450048F0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x450048F4: sw          $t9, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->r25;
    // 0x450048F8: bne         $v0, $at, L_45004938
    if (ctx->r2 != ctx->r1) {
        // 0x450048FC: sw          $zero, 0x188($a0)
        MEM_W(0X188, ctx->r4) = 0;
            goto L_45004938;
    }
    // 0x450048FC: sw          $zero, 0x188($a0)
    MEM_W(0X188, ctx->r4) = 0;
    // 0x45004900: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004904: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x45004908: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500490C: swc1        $f0, 0x1DC($a0)
    MEM_W(0X1DC, ctx->r4) = ctx->f0.u32l;
    // 0x45004910: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x45004914: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x45004918: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x4500491C: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x45004920: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45004924: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x45004928: jal         0x450006C4
    // 0x4500492C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4500492C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x45004930: b           L_450049EC
    // 0x45004934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_450049EC;
    // 0x45004934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45004938:
    // 0x45004938: addiu       $at, $zero, 0xD6
    ctx->r1 = ADD32(0, 0XD6);
    // 0x4500493C: bne         $v0, $at, L_45004994
    if (ctx->r2 != ctx->r1) {
        // 0x45004940: addiu       $t0, $zero, 0x4
        ctx->r8 = ADD32(0, 0X4);
            goto L_45004994;
    }
    // 0x45004940: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x45004944: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x45004948: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4500494C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004950: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x45004954: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x45004958: sw          $t0, 0x1DC($a3)
    MEM_W(0X1DC, ctx->r7) = ctx->r8;
    // 0x4500495C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45004960: swc1        $f0, 0x1E4($a3)
    MEM_W(0X1E4, ctx->r7) = ctx->f0.u32l;
    // 0x45004964: swc1        $f0, 0x1E8($a3)
    MEM_W(0X1E8, ctx->r7) = ctx->f0.u32l;
    // 0x45004968: swc1        $f4, 0x1E0($a3)
    MEM_W(0X1E0, ctx->r7) = ctx->f4.u32l;
    // 0x4500496C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45004970: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x45004974: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x45004978: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x4500497C: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x45004980: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x45004984: jal         0x450006C4
    // 0x45004988: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45004988: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x4500498C: b           L_450049EC
    // 0x45004990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_450049EC;
    // 0x45004990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_45004994:
    // 0x45004994: addiu       $at, $zero, 0x116
    ctx->r1 = ADD32(0, 0X116);
    // 0x45004998: bne         $v0, $at, L_450049C0
    if (ctx->r2 != ctx->r1) {
        // 0x4500499C: addiu       $t1, $zero, 0x8
        ctx->r9 = ADD32(0, 0X8);
            goto L_450049C0;
    }
    // 0x4500499C: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x450049A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x450049A4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x450049A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x450049AC: sw          $t1, 0x1DC($a3)
    MEM_W(0X1DC, ctx->r7) = ctx->r9;
    // 0x450049B0: swc1        $f0, 0x1E4($a3)
    MEM_W(0X1E4, ctx->r7) = ctx->f0.u32l;
    // 0x450049B4: swc1        $f0, 0x1E8($a3)
    MEM_W(0X1E8, ctx->r7) = ctx->f0.u32l;
    // 0x450049B8: b           L_450049E8
    // 0x450049BC: swc1        $f8, 0x1E0($a3)
    MEM_W(0X1E0, ctx->r7) = ctx->f8.u32l;
        goto L_450049E8;
    // 0x450049BC: swc1        $f8, 0x1E0($a3)
    MEM_W(0X1E0, ctx->r7) = ctx->f8.u32l;
L_450049C0:
    // 0x450049C0: addiu       $at, $zero, 0xD4
    ctx->r1 = ADD32(0, 0XD4);
    // 0x450049C4: bne         $v0, $at, L_450049EC
    if (ctx->r2 != ctx->r1) {
        // 0x450049C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_450049EC;
    }
    // 0x450049C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x450049CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x450049D0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x450049D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x450049D8: sw          $zero, 0x1E4($a3)
    MEM_W(0X1E4, ctx->r7) = 0;
    // 0x450049DC: swc1        $f0, 0x1E0($a3)
    MEM_W(0X1E0, ctx->r7) = ctx->f0.u32l;
    // 0x450049E0: swc1        $f0, 0x1E8($a3)
    MEM_W(0X1E8, ctx->r7) = ctx->f0.u32l;
    // 0x450049E4: swc1        $f10, 0x1DC($a3)
    MEM_W(0X1DC, ctx->r7) = ctx->f10.u32l;
L_450049E8:
    // 0x450049E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_450049EC:
    // 0x450049EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x450049F0: jr          $ra
    // 0x450049F4: nop

    return;
    // 0x450049F4: nop

;}
RECOMP_FUNC void ovl_mobj_main_49F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x450049F8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x450049FC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x45004A00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45004A04: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x45004A08: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45004A0C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x45004A10: jal         0x450006C4
    // 0x45004A14: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45004A14: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x45004A18: lui         $at, 0x4501
    ctx->r1 = S32(0X4501 << 16);
    // 0x45004A1C: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x45004A20: lwc1        $f1, 0x2130($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X2130);
    // 0x45004A24: lwc1        $f0, 0x2134($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2134);
    // 0x45004A28: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x45004A2C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x45004A30: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x45004A34: addiu       $t6, $sp, 0x58
    ctx->r14 = ADD32(ctx->r29, 0X58);
    // 0x45004A38: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x45004A3C: sw          $t6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r14;
    // 0x45004A40: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x45004A44: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x45004A48: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x45004A4C: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x45004A50: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x45004A54: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x45004A58: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x45004A5C: mul.d       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x45004A60: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x45004A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45004A68: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x45004A6C: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x45004A70: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x45004A74: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x45004A78: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x45004A7C: nop

    // 0x45004A80: bne         $t7, $at, L_45004AAC
    if (ctx->r15 != ctx->r1) {
        // 0x45004A84: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_45004AAC;
    }
    // 0x45004A84: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x45004A88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45004A8C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x45004A90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45004A94: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x45004A98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x45004A9C: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x45004AA0: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x45004AA4: b           L_45004AC4
    // 0x45004AA8: swc1        $f10, 0x1D8($s0)
    MEM_W(0X1D8, ctx->r16) = ctx->f10.u32l;
        goto L_45004AC4;
    // 0x45004AA8: swc1        $f10, 0x1D8($s0)
    MEM_W(0X1D8, ctx->r16) = ctx->f10.u32l;
L_45004AAC:
    // 0x45004AAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004AB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45004AB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x45004AB8: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x45004ABC: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x45004AC0: swc1        $f18, 0x1D8($s0)
    MEM_W(0X1D8, ctx->r16) = ctx->f18.u32l;
L_45004AC4:
    // 0x45004AC4: jal         0x4500109C
    // 0x45004AC8: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    ovl_mobj_main_109C(rdram, ctx);
        goto after_1;
    // 0x45004AC8: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_1:
    // 0x45004ACC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x45004AD0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x45004AD4: jal         0x450006C4
    // 0x45004AD8: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_2;
    // 0x45004AD8: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_2:
    // 0x45004ADC: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x45004AE0: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x45004AE4: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x45004AE8: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x45004AEC: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x45004AF0: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x45004AF4: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x45004AF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45004AFC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x45004B00: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x45004B04: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x45004B08: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x45004B0C: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x45004B10: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x45004B14: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x45004B18: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x45004B1C: lwc1        $f8, 0x1D8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1D8);
    // 0x45004B20: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x45004B24: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x45004B28: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x45004B2C: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x45004B30: addiu       $t0, $sp, 0x40
    ctx->r8 = ADD32(ctx->r29, 0X40);
    // 0x45004B34: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x45004B38: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x45004B3C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x45004B40: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x45004B44: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x45004B48: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    // 0x45004B4C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x45004B50: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x45004B54: jal         0x45000F34
    // 0x45004B58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_3;
    // 0x45004B58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_3:
    // 0x45004B5C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x45004B60: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x45004B64: jr          $ra
    // 0x45004B68: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x45004B68: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_mobj_main_4B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004B6C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x45004B70: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x45004B74: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x45004B78: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x45004B7C: sw          $t6, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r14;
    // 0x45004B80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45004B84: addiu       $a1, $s0, 0x1CC
    ctx->r5 = ADD32(ctx->r16, 0X1CC);
    // 0x45004B88: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x45004B8C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x45004B90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x45004B94: addiu       $a2, $zero, 0x27B
    ctx->r6 = ADD32(0, 0X27B);
    // 0x45004B98: jal         0x45000F34
    // 0x45004B9C: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x45004B9C: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x45004BA0: lw          $a2, 0x1CC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1CC);
    // 0x45004BA4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x45004BA8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x45004BAC: addiu       $a1, $sp, 0x5C
    ctx->r5 = ADD32(ctx->r29, 0X5C);
    // 0x45004BB0: jal         0x45000F34
    // 0x45004BB4: addiu       $a3, $zero, 0x27B
    ctx->r7 = ADD32(0, 0X27B);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_1;
    // 0x45004BB4: addiu       $a3, $zero, 0x27B
    ctx->r7 = ADD32(0, 0X27B);
    after_1:
    // 0x45004BB8: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x45004BBC: lw          $a1, 0x1CC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1CC);
    // 0x45004BC0: sw          $t7, 0x1D0($s0)
    MEM_W(0X1D0, ctx->r16) = ctx->r15;
    // 0x45004BC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x45004BC8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x45004BCC: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x45004BD0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x45004BD4: addiu       $t9, $zero, 0x1B
    ctx->r25 = ADD32(0, 0X1B);
    // 0x45004BD8: addiu       $t0, $zero, 0xB
    ctx->r8 = ADD32(0, 0XB);
    // 0x45004BDC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x45004BE0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x45004BE4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x45004BE8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x45004BEC: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x45004BF0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x45004BF4: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x45004BF8: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x45004BFC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x45004C00: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x45004C04: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x45004C08: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x45004C0C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x45004C10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x45004C14: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x45004C18: jal         0x45000F34
    // 0x45004C1C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_mobj_main_F34(rdram, ctx);
        goto after_2;
    // 0x45004C1C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_2:
    // 0x45004C20: jal         0x450049F8
    // 0x45004C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_mobj_main_49F8(rdram, ctx);
        goto after_3;
    // 0x45004C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x45004C28: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x45004C2C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x45004C30: jr          $ra
    // 0x45004C34: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x45004C34: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_mobj_main_4C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004C38: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45004C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45004C40: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x45004C44: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x45004C48: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x45004C4C: jal         0x450006C4
    // 0x45004C50: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_0;
    // 0x45004C50: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x45004C54: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x45004C58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x45004C5C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x45004C60: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x45004C64: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x45004C68: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x45004C6C: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x45004C70: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x45004C74: jal         0x450006C4
    // 0x45004C78: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_mobj_main_6C4(rdram, ctx);
        goto after_1;
    // 0x45004C78: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x45004C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45004C80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x45004C84: jr          $ra
    // 0x45004C88: nop

    return;
    // 0x45004C88: nop

;}
RECOMP_FUNC void ovl_mobj_main_4C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x45004C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x45004C94: jal         0x45004454
    // 0x45004C98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_mobj_main_4454(rdram, ctx);
        goto after_0;
    // 0x45004C98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x45004C9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45004CA0: jal         0x450047AC
    // 0x45004CA4: nop

    ovl_mobj_main_47AC(rdram, ctx);
        goto after_1;
    // 0x45004CA4: nop

    after_1:
    // 0x45004CA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x45004CAC: jal         0x450041B4
    // 0x45004CB0: nop

    ovl_mobj_main_41B4(rdram, ctx);
        goto after_2;
    // 0x45004CB0: nop

    after_2:
    // 0x45004CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x45004CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x45004CBC: jr          $ra
    // 0x45004CC0: nop

    return;
    // 0x45004CC0: nop

;}
RECOMP_FUNC void ovl_mobj_main_4CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x45004CC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x45004CC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x45004CCC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x45004CD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x45004CD4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x45004CD8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x45004CDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x45004CE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x45004CE4: addiu       $a2, $zero, 0x2C6
    ctx->r6 = ADD32(0, 0X2C6);
    // 0x45004CE8: jal         0x45000F34
    // 0x45004CEC: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    ovl_mobj_main_F34(rdram, ctx);
        goto after_0;
    // 0x45004CEC: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x45004CF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x45004CF4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x45004CF8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x45004CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45004D00: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x45004D04: jal         0x4500192C
    // 0x45004D08: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_mobj_main_192C(rdram, ctx);
        goto after_1;
    // 0x45004D08: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x45004D0C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x45004D10: sw          $t6, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r14;
    // 0x45004D14: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x45004D18: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x45004D1C: sw          $t8, 0x1D0($s0)
    MEM_W(0X1D0, ctx->r16) = ctx->r24;
    // 0x45004D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x45004D24: jal         0x450041B4
    // 0x45004D28: sw          $t7, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r15;
    ovl_mobj_main_41B4(rdram, ctx);
        goto after_2;
    // 0x45004D28: sw          $t7, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r15;
    after_2:
    // 0x45004D2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x45004D30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x45004D34: jr          $ra
    // 0x45004D38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x45004D38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
