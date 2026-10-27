#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_flame_249C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200249C: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x420024A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x420024A4: lw          $v1, 0x366C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X366C);
    // 0x420024A8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x420024AC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x420024B0: beq         $at, $zero, L_420024F4
    if (ctx->r1 == 0) {
        // 0x420024B4: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_420024F4;
    }
    // 0x420024B4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_420024B8:
    // 0x420024B8: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x420024BC: nop

    // 0x420024C0: beq         $a1, $t6, L_420024E0
    if (ctx->r5 == ctx->r14) {
        // 0x420024C4: nop
    
            goto L_420024E0;
    }
    // 0x420024C4: nop

    // 0x420024C8: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x420024CC: nop

    // 0x420024D0: beq         $a1, $t7, L_420024E0
    if (ctx->r5 == ctx->r15) {
        // 0x420024D4: nop
    
            goto L_420024E0;
    }
    // 0x420024D4: nop

    // 0x420024D8: jr          $ra
    // 0x420024DC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x420024DC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_420024E0:
    // 0x420024E0: addiu       $v0, $v0, 0x1CC
    ctx->r2 = ADD32(ctx->r2, 0X1CC);
    // 0x420024E4: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x420024E8: bne         $at, $zero, L_420024B8
    if (ctx->r1 != 0) {
        // 0x420024EC: nop
    
            goto L_420024B8;
    }
    // 0x420024EC: nop

    // 0x420024F0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_420024F4:
    // 0x420024F4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x420024F8: jr          $ra
    // 0x420024FC: nop

    return;
    // 0x420024FC: nop

;}
RECOMP_FUNC void ovl_blast_flame_2500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002500: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x42002504: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42002508: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x4200250C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x42002510: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x42002514: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x42002518: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4200251C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x42002520: jal         0x42001874
    // 0x42002524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_flame_1874(rdram, ctx);
        goto after_0;
    // 0x42002524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x42002528: lui         $s1, 0x4200
    ctx->r17 = S32(0X4200 << 16);
    // 0x4200252C: lw          $s1, 0x3660($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X3660);
    // 0x42002530: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x42002534: blez        $s1, L_420025D8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x42002538: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_420025D8;
    }
    // 0x42002538: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4200253C: addiu       $s4, $sp, 0x34
    ctx->r20 = ADD32(ctx->r29, 0X34);
    // 0x42002540: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x42002544: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
L_42002548:
    // 0x42002548: jal         0x4200249C
    // 0x4200254C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_blast_flame_249C(rdram, ctx);
        goto after_1;
    // 0x4200254C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x42002550: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x42002554: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x42002558: beq         $t6, $s3, L_420025D8
    if (ctx->r14 == ctx->r19) {
        // 0x4200255C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_420025D8;
    }
    // 0x4200255C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x42002560: lw          $t8, 0x5C($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X5C);
    // 0x42002564: nop

    // 0x42002568: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x4200256C: beq         $t9, $zero, L_42002588
    if (ctx->r25 == 0) {
        // 0x42002570: nop
    
            goto L_42002588;
    }
    // 0x42002570: nop

    // 0x42002574: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x42002578: jal         0x420006C4
    // 0x4200257C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_blast_flame_6C4(rdram, ctx);
        goto after_2;
    // 0x4200257C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x42002580: b           L_420025C8
    // 0x42002584: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
        goto L_420025C8;
    // 0x42002584: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
L_42002588:
    // 0x42002588: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x4200258C: nop

    // 0x42002590: addiu       $t2, $t1, -0x2
    ctx->r10 = ADD32(ctx->r9, -0X2);
    // 0x42002594: sltiu       $at, $t2, 0x9
    ctx->r1 = ctx->r10 < 0X9 ? 1 : 0;
    // 0x42002598: beq         $at, $zero, L_420025C4
    if (ctx->r1 == 0) {
        // 0x4200259C: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_420025C4;
    }
    // 0x4200259C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x420025A0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420025A4: addu        $at, $at, $t2
    gpr jr_addend_420025B0 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x420025A8: lw          $t2, 0x359C($at)
    ctx->r10 = ADD32(ctx->r1, 0X359C);
    // 0x420025AC: nop

    // 0x420025B0: jr          $t2
    // 0x420025B4: nop

    switch (jr_addend_420025B0 >> 2) {
        case 0: goto L_420025B8; break;
        case 1: goto L_420025C4; break;
        case 2: goto L_420025B8; break;
        case 3: goto L_420025B8; break;
        case 4: goto L_420025B8; break;
        case 5: goto L_420025B8; break;
        case 6: goto L_420025B8; break;
        case 7: goto L_420025B8; break;
        case 8: goto L_420025B8; break;
        default: switch_error(__func__, 0x420025B0, 0x4200359C);
    }
    // 0x420025B4: nop

L_420025B8:
    // 0x420025B8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x420025BC: jal         0x420023E4
    // 0x420025C0: nop

    ovl_blast_flame_23E4(rdram, ctx);
        goto after_3;
    // 0x420025C0: nop

    after_3:
L_420025C4:
    // 0x420025C4: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
L_420025C8:
    // 0x420025C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x420025CC: addiu       $t4, $t3, 0x1CC
    ctx->r12 = ADD32(ctx->r11, 0X1CC);
    // 0x420025D0: bne         $s0, $s1, L_42002548
    if (ctx->r16 != ctx->r17) {
        // 0x420025D4: sw          $t4, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r12;
            goto L_42002548;
    }
    // 0x420025D4: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
L_420025D8:
    // 0x420025D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x420025DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x420025E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x420025E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x420025E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x420025EC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x420025F0: jr          $ra
    // 0x420025F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x420025F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_blast_flame_25F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420025F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420025FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_42002600:
    // 0x42002600: jal         0x42002500
    // 0x42002604: nop

    ovl_blast_flame_2500(rdram, ctx);
        goto after_0;
    // 0x42002604: nop

    after_0:
    // 0x42002608: jal         0x4200085C
    // 0x4200260C: nop

    ovl_blast_flame_85C(rdram, ctx);
        goto after_1;
    // 0x4200260C: nop

    after_1:
    // 0x42002610: b           L_42002600
    // 0x42002614: nop

        goto L_42002600;
    // 0x42002614: nop

    // 0x42002618: nop

    // 0x4200261C: nop

    // 0x42002620: nop

    // 0x42002624: nop

    // 0x42002628: nop

    // 0x4200262C: nop

    // 0x42002630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002638: jr          $ra
    // 0x4200263C: nop

    return;
    // 0x4200263C: nop

;}
RECOMP_FUNC void ovl_blast_flame_2640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002648: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x4200264C: nop

    // 0x42002650: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x42002654: sltiu       $at, $t7, 0x16
    ctx->r1 = ctx->r15 < 0X16 ? 1 : 0;
    // 0x42002658: beq         $at, $zero, L_42002700
    if (ctx->r1 == 0) {
        // 0x4200265C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_42002700;
    }
    // 0x4200265C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x42002660: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002664: addu        $at, $at, $t7
    gpr jr_addend_42002670 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x42002668: lw          $t7, 0x35C0($at)
    ctx->r15 = ADD32(ctx->r1, 0X35C0);
    // 0x4200266C: nop

    // 0x42002670: jr          $t7
    // 0x42002674: nop

    switch (jr_addend_42002670 >> 2) {
        case 0: goto L_42002678; break;
        case 1: goto L_42002700; break;
        case 2: goto L_42002700; break;
        case 3: goto L_420026D8; break;
        case 4: goto L_42002700; break;
        case 5: goto L_420026E8; break;
        case 6: goto L_42002688; break;
        case 7: goto L_42002698; break;
        case 8: goto L_42002700; break;
        case 9: goto L_42002700; break;
        case 10: goto L_420026C8; break;
        case 11: goto L_420026B8; break;
        case 12: goto L_42002700; break;
        case 13: goto L_42002700; break;
        case 14: goto L_42002700; break;
        case 15: goto L_42002700; break;
        case 16: goto L_42002700; break;
        case 17: goto L_42002700; break;
        case 18: goto L_42002700; break;
        case 19: goto L_420026F8; break;
        case 20: goto L_420026A8; break;
        case 21: goto L_42002700; break;
        default: switch_error(__func__, 0x42002670, 0x420035C0);
    }
    // 0x42002674: nop

L_42002678:
    // 0x42002678: jal         0x420020B4
    // 0x4200267C: nop

    ovl_blast_flame_20B4(rdram, ctx);
        goto after_0;
    // 0x4200267C: nop

    after_0:
    // 0x42002680: b           L_42002704
    // 0x42002684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x42002684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002688:
    // 0x42002688: jal         0x42002014
    // 0x4200268C: nop

    ovl_blast_flame_2014(rdram, ctx);
        goto after_1;
    // 0x4200268C: nop

    after_1:
    // 0x42002690: b           L_42002704
    // 0x42002694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x42002694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002698:
    // 0x42002698: jal         0x42001FEC
    // 0x4200269C: nop

    ovl_blast_flame_1FEC(rdram, ctx);
        goto after_2;
    // 0x4200269C: nop

    after_2:
    // 0x420026A0: b           L_42002704
    // 0x420026A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026A8:
    // 0x420026A8: jal         0x42001FB0
    // 0x420026AC: nop

    ovl_blast_flame_1FB0(rdram, ctx);
        goto after_3;
    // 0x420026AC: nop

    after_3:
    // 0x420026B0: b           L_42002704
    // 0x420026B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026B8:
    // 0x420026B8: jal         0x42001E64
    // 0x420026BC: nop

    ovl_blast_flame_1E64(rdram, ctx);
        goto after_4;
    // 0x420026BC: nop

    after_4:
    // 0x420026C0: b           L_42002704
    // 0x420026C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026C8:
    // 0x420026C8: jal         0x42001C3C
    // 0x420026CC: nop

    ovl_blast_flame_1C3C(rdram, ctx);
        goto after_5;
    // 0x420026CC: nop

    after_5:
    // 0x420026D0: b           L_42002704
    // 0x420026D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026D8:
    // 0x420026D8: jal         0x42001B64
    // 0x420026DC: nop

    ovl_blast_flame_1B64(rdram, ctx);
        goto after_6;
    // 0x420026DC: nop

    after_6:
    // 0x420026E0: b           L_42002704
    // 0x420026E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026E8:
    // 0x420026E8: jal         0x42001B38
    // 0x420026EC: nop

    ovl_blast_flame_1B38(rdram, ctx);
        goto after_7;
    // 0x420026EC: nop

    after_7:
    // 0x420026F0: b           L_42002704
    // 0x420026F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002704;
    // 0x420026F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420026F8:
    // 0x420026F8: jal         0x42001ADC
    // 0x420026FC: nop

    ovl_blast_flame_1ADC(rdram, ctx);
        goto after_8;
    // 0x420026FC: nop

    after_8:
L_42002700:
    // 0x42002700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002704:
    // 0x42002704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002708: jr          $ra
    // 0x4200270C: nop

    return;
    // 0x4200270C: nop

;}
RECOMP_FUNC void ovl_blast_flame_2710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002718: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x4200271C: nop

    // 0x42002720: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x42002724: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x42002728: beq         $at, $zero, L_42002778
    if (ctx->r1 == 0) {
        // 0x4200272C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_42002778;
    }
    // 0x4200272C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x42002730: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002734: addu        $at, $at, $t6
    gpr jr_addend_42002740 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x42002738: lw          $t6, 0x3618($at)
    ctx->r14 = ADD32(ctx->r1, 0X3618);
    // 0x4200273C: nop

    // 0x42002740: jr          $t6
    // 0x42002744: nop

    switch (jr_addend_42002740 >> 2) {
        case 0: goto L_42002748; break;
        case 1: goto L_42002758; break;
        case 2: goto L_42002768; break;
        case 3: goto L_42002758; break;
        case 4: goto L_42002758; break;
        case 5: goto L_42002758; break;
        case 6: goto L_42002758; break;
        case 7: goto L_42002758; break;
        case 8: goto L_42002758; break;
        case 9: goto L_42002758; break;
        default: switch_error(__func__, 0x42002740, 0x42003618);
    }
    // 0x42002744: nop

L_42002748:
    // 0x42002748: jal         0x42002640
    // 0x4200274C: nop

    ovl_blast_flame_2640(rdram, ctx);
        goto after_0;
    // 0x4200274C: nop

    after_0:
    // 0x42002750: b           L_42002788
    // 0x42002754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002788;
    // 0x42002754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002758:
    // 0x42002758: jal         0x42002640
    // 0x4200275C: nop

    ovl_blast_flame_2640(rdram, ctx);
        goto after_1;
    // 0x4200275C: nop

    after_1:
    // 0x42002760: b           L_42002788
    // 0x42002764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002788;
    // 0x42002764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002768:
    // 0x42002768: jal         0x42002640
    // 0x4200276C: nop

    ovl_blast_flame_2640(rdram, ctx);
        goto after_2;
    // 0x4200276C: nop

    after_2:
    // 0x42002770: b           L_42002788
    // 0x42002774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_42002788;
    // 0x42002774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002778:
    // 0x42002778: lui         $a0, 0x4200
    ctx->r4 = S32(0X4200 << 16);
    // 0x4200277C: jal         0x4200001C
    // 0x42002780: addiu       $a0, $a0, 0x3570
    ctx->r4 = ADD32(ctx->r4, 0X3570);
    ovl_blast_flame_1C(rdram, ctx);
        goto after_3;
    // 0x42002780: addiu       $a0, $a0, 0x3570
    ctx->r4 = ADD32(ctx->r4, 0X3570);
    after_3:
    // 0x42002784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002788:
    // 0x42002788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4200278C: jr          $ra
    // 0x42002790: nop

    return;
    // 0x42002790: nop

    // 0x42002794: nop

    // 0x42002798: nop

    // 0x4200279C: nop

;}
RECOMP_FUNC void ovl_blast_flame_27A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420027A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420027A8: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420027AC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x420027B0: bne         $t6, $at, L_420027C8
    if (ctx->r14 != ctx->r1) {
        // 0x420027B4: nop
    
            goto L_420027C8;
    }
    // 0x420027B4: nop

    // 0x420027B8: jal         0x42003378
    // 0x420027BC: nop

    ovl_blast_flame_3378(rdram, ctx);
        goto after_0;
    // 0x420027BC: nop

    after_0:
    // 0x420027C0: b           L_420027D4
    // 0x420027C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_420027D4;
    // 0x420027C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420027C8:
    // 0x420027C8: jal         0x42002EC8
    // 0x420027CC: nop

    ovl_blast_flame_2EC8(rdram, ctx);
        goto after_1;
    // 0x420027CC: nop

    after_1:
    // 0x420027D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420027D4:
    // 0x420027D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420027D8: jr          $ra
    // 0x420027DC: nop

    return;
    // 0x420027DC: nop

;}
RECOMP_FUNC void ovl_blast_flame_27E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027E0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x420027E4: jr          $ra
    // 0x420027E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x420027E8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_blast_flame_27EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x420027F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420027F4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x420027F8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x420027FC: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x42002800: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x42002804: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x42002808: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4200280C: jal         0x420006C4
    // 0x42002810: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_flame_6C4(rdram, ctx);
        goto after_0;
    // 0x42002810: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x42002814: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x42002818: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4200281C: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
    // 0x42002820: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x42002824: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x42002828: bne         $t7, $zero, L_42002864
    if (ctx->r15 != 0) {
        // 0x4200282C: nop
    
            goto L_42002864;
    }
    // 0x4200282C: nop

    // 0x42002830: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x42002834: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x42002838: andi        $t0, $t9, 0x7000
    ctx->r8 = ctx->r25 & 0X7000;
    // 0x4200283C: beq         $t0, $at, L_4200285C
    if (ctx->r8 == ctx->r1) {
        // 0x42002840: ori         $t1, $v0, 0x800
        ctx->r9 = ctx->r2 | 0X800;
            goto L_4200285C;
    }
    // 0x42002840: ori         $t1, $v0, 0x800
    ctx->r9 = ctx->r2 | 0X800;
    // 0x42002844: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42002848: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4200284C: beq         $a0, $zero, L_42002864
    if (ctx->r4 == 0) {
        // 0x42002850: nop
    
            goto L_42002864;
    }
    // 0x42002850: nop

    // 0x42002854: beq         $a0, $at, L_42002864
    if (ctx->r4 == ctx->r1) {
        // 0x42002858: nop
    
            goto L_42002864;
    }
    // 0x42002858: nop

L_4200285C:
    // 0x4200285C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x42002860: sw          $t1, 0x5C($a3)
    MEM_W(0X5C, ctx->r7) = ctx->r9;
L_42002864:
    // 0x42002864: lw          $t2, 0x70($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X70);
    // 0x42002868: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4200286C: bne         $t2, $at, L_420028A4
    if (ctx->r10 != ctx->r1) {
        // 0x42002870: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_420028A4;
    }
    // 0x42002870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002874: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x42002878: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x4200287C: bne         $a0, $zero, L_420028A0
    if (ctx->r4 != 0) {
        // 0x42002880: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_420028A0;
    }
    // 0x42002880: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x42002884: bne         $t3, $at, L_420028A0
    if (ctx->r11 != ctx->r1) {
        // 0x42002888: lui         $at, 0x4200
        ctx->r1 = S32(0X4200 << 16);
            goto L_420028A0;
    }
    // 0x42002888: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200288C: lwc1        $f6, 0x3640($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3640);
    // 0x42002890: lwc1        $f4, 0x24($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X24);
    // 0x42002894: nop

    // 0x42002898: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x4200289C: swc1        $f8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f8.u32l;
L_420028A0:
    // 0x420028A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_420028A4:
    // 0x420028A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x420028A8: jr          $ra
    // 0x420028AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x420028AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_blast_flame_28B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420028B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x420028B4: jr          $ra
    // 0x420028B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x420028B8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_blast_flame_28BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420028BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x420028C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x420028C4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x420028C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x420028CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x420028D0: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420028D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x420028D8: bne         $t6, $at, L_42002908
    if (ctx->r14 != ctx->r1) {
        // 0x420028DC: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_42002908;
    }
    // 0x420028DC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x420028E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x420028E4: addiu       $s1, $a0, 0x7C
    ctx->r17 = ADD32(ctx->r4, 0X7C);
    // 0x420028E8: addiu       $s2, $zero, 0x60
    ctx->r18 = ADD32(0, 0X60);
L_420028EC:
    // 0x420028EC: jal         0x42000F50
    // 0x420028F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_flame_F50(rdram, ctx);
        goto after_0;
    // 0x420028F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x420028F4: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x420028F8: bne         $s0, $s2, L_420028EC
    if (ctx->r16 != ctx->r18) {
        // 0x420028FC: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_420028EC;
    }
    // 0x420028FC: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x42002900: b           L_4200293C
    // 0x42002904: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4200293C;
    // 0x42002904: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42002908:
    // 0x42002908: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4200290C: addiu       $s1, $a1, 0x7C
    ctx->r17 = ADD32(ctx->r5, 0X7C);
    // 0x42002910: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x42002914: addiu       $s2, $zero, 0x30
    ctx->r18 = ADD32(0, 0X30);
L_42002918:
    // 0x42002918: jal         0x42000F50
    // 0x4200291C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_flame_F50(rdram, ctx);
        goto after_1;
    // 0x4200291C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x42002920: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x42002924: bne         $s0, $s2, L_42002918
    if (ctx->r16 != ctx->r18) {
        // 0x42002928: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_42002918;
    }
    // 0x42002928: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x4200292C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x42002930: jal         0x42000F50
    // 0x42002934: addiu       $a0, $a0, 0xAC
    ctx->r4 = ADD32(ctx->r4, 0XAC);
    ovl_blast_flame_F50(rdram, ctx);
        goto after_2;
    // 0x42002934: addiu       $a0, $a0, 0xAC
    ctx->r4 = ADD32(ctx->r4, 0XAC);
    after_2:
    // 0x42002938: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4200293C:
    // 0x4200293C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002940: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x42002944: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x42002948: jr          $ra
    // 0x4200294C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4200294C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_flame_2950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002958: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x4200295C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002960: bne         $t6, $at, L_42002994
    if (ctx->r14 != ctx->r1) {
        // 0x42002964: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_42002994;
    }
    // 0x42002964: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x42002968: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4200296C: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x42002970: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002974: swc1        $f4, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f4.u32l;
    // 0x42002978: swc1        $f6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f6.u32l;
    // 0x4200297C: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x42002980: jal         0x42002D74
    // 0x42002984: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_blast_flame_2D74(rdram, ctx);
        goto after_0;
    // 0x42002984: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x42002988: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x4200298C: b           L_4200299C
    // 0x42002990: sw          $v0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r2;
        goto L_4200299C;
    // 0x42002990: sw          $v0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r2;
L_42002994:
    // 0x42002994: addiu       $t7, $zero, 0x54
    ctx->r15 = ADD32(0, 0X54);
    // 0x42002998: sw          $t7, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r15;
L_4200299C:
    // 0x4200299C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420029A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420029A4: jr          $ra
    // 0x420029A8: nop

    return;
    // 0x420029A8: nop

;}
RECOMP_FUNC void ovl_blast_flame_29AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420029AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x420029B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x420029B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x420029B8: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420029BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x420029C0: bne         $t6, $at, L_42002AF4
    if (ctx->r14 != ctx->r1) {
        // 0x420029C4: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_42002AF4;
    }
    // 0x420029C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x420029C8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x420029CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x420029D0: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x420029D4: addiu       $a1, $zero, 0x207
    ctx->r5 = ADD32(0, 0X207);
    // 0x420029D8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x420029DC: jal         0x42001274
    // 0x420029E0: swc1        $f8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f8.u32l;
    ovl_blast_flame_1274(rdram, ctx);
        goto after_0;
    // 0x420029E0: swc1        $f8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f8.u32l;
    after_0:
    // 0x420029E4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x420029E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x420029EC: jal         0x420006C4
    // 0x420029F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_flame_6C4(rdram, ctx);
        goto after_1;
    // 0x420029F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x420029F4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x420029F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x420029FC: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002A00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x42002A04: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x42002A08: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x42002A0C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x42002A10: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x42002A14: jal         0x420006C4
    // 0x42002A18: nop

    ovl_blast_flame_6C4(rdram, ctx);
        goto after_2;
    // 0x42002A18: nop

    after_2:
    // 0x42002A1C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002A20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x42002A24: swc1        $f4, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = ctx->f4.u32l;
    // 0x42002A28: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002A2C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x42002A30: swc1        $f6, 0xF4($s0)
    MEM_W(0XF4, ctx->r16) = ctx->f6.u32l;
    // 0x42002A34: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42002A38: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x42002A3C: swc1        $f8, 0xF8($s0)
    MEM_W(0XF8, ctx->r16) = ctx->f8.u32l;
    // 0x42002A40: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002A44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x42002A48: swc1        $f10, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = ctx->f10.u32l;
    // 0x42002A4C: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002A50: addu        $v0, $s0, $t7
    ctx->r2 = ADD32(ctx->r16, ctx->r15);
    // 0x42002A54: swc1        $f16, 0x100($s0)
    MEM_W(0X100, ctx->r16) = ctx->f16.u32l;
    // 0x42002A58: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42002A5C: nop

    // 0x42002A60: swc1        $f18, 0x104($s0)
    MEM_W(0X104, ctx->r16) = ctx->f18.u32l;
    // 0x42002A64: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002A68: nop

    // 0x42002A6C: swc1        $f4, 0xF0($v0)
    MEM_W(0XF0, ctx->r2) = ctx->f4.u32l;
    // 0x42002A70: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002A74: nop

    // 0x42002A78: swc1        $f6, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->f6.u32l;
    // 0x42002A7C: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42002A80: nop

    // 0x42002A84: swc1        $f8, 0xF8($v0)
    MEM_W(0XF8, ctx->r2) = ctx->f8.u32l;
    // 0x42002A88: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002A8C: nop

    // 0x42002A90: swc1        $f10, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f10.u32l;
    // 0x42002A94: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002A98: nop

    // 0x42002A9C: swc1        $f16, 0x100($v0)
    MEM_W(0X100, ctx->r2) = ctx->f16.u32l;
    // 0x42002AA0: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42002AA4: nop

    // 0x42002AA8: swc1        $f18, 0x104($v0)
    MEM_W(0X104, ctx->r2) = ctx->f18.u32l;
    // 0x42002AAC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002AB0: nop

    // 0x42002AB4: swc1        $f4, 0x108($v0)
    MEM_W(0X108, ctx->r2) = ctx->f4.u32l;
    // 0x42002AB8: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002ABC: nop

    // 0x42002AC0: swc1        $f6, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = ctx->f6.u32l;
    // 0x42002AC4: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42002AC8: nop

    // 0x42002ACC: swc1        $f8, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->f8.u32l;
    // 0x42002AD0: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002AD4: nop

    // 0x42002AD8: swc1        $f10, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->f10.u32l;
    // 0x42002ADC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002AE0: nop

    // 0x42002AE4: swc1        $f16, 0x118($v0)
    MEM_W(0X118, ctx->r2) = ctx->f16.u32l;
    // 0x42002AE8: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42002AEC: b           L_42002B18
    // 0x42002AF0: swc1        $f18, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->f18.u32l;
        goto L_42002B18;
    // 0x42002AF0: swc1        $f18, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->f18.u32l;
L_42002AF4:
    // 0x42002AF4: lw          $t8, 0x5C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X5C);
    // 0x42002AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42002AFC: ori         $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 | 0X1000;
    // 0x42002B00: sw          $t9, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r25;
    // 0x42002B04: jal         0x42001208
    // 0x42002B08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_flame_1208(rdram, ctx);
        goto after_3;
    // 0x42002B08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x42002B0C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42002B10: nop

    // 0x42002B14: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
L_42002B18:
    // 0x42002B18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42002B1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002B20: jr          $ra
    // 0x42002B24: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x42002B24: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_flame_2B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002B28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002B30: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002B34: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002B38: bne         $t6, $at, L_42002BFC
    if (ctx->r14 != ctx->r1) {
        // 0x42002B3C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_42002BFC;
    }
    // 0x42002B3C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x42002B40: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002B44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x42002B48: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x42002B4C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x42002B50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_42002B54:
    // 0x42002B54: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x42002B58: slti        $at, $a0, 0x6
    ctx->r1 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
    // 0x42002B5C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x42002B60: sw          $v0, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->r2;
    // 0x42002B64: sw          $a1, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->r5;
    // 0x42002B68: swc1        $f0, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->f0.u32l;
    // 0x42002B6C: bne         $at, $zero, L_42002B54
    if (ctx->r1 != 0) {
        // 0x42002B70: swc1        $f0, 0x78($v1)
        MEM_W(0X78, ctx->r3) = ctx->f0.u32l;
            goto L_42002B54;
    }
    // 0x42002B70: swc1        $f0, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->f0.u32l;
    // 0x42002B74: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002B78: lwc1        $f4, 0x3644($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3644);
    // 0x42002B7C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x42002B80: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x42002B84: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x42002B88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x42002B8C: swc1        $f0, 0xE0($a3)
    MEM_W(0XE0, ctx->r7) = ctx->f0.u32l;
    // 0x42002B90: swc1        $f0, 0xE4($a3)
    MEM_W(0XE4, ctx->r7) = ctx->f0.u32l;
    // 0x42002B94: sw          $zero, 0xE8($a3)
    MEM_W(0XE8, ctx->r7) = 0;
    // 0x42002B98: sw          $zero, 0xEC($a3)
    MEM_W(0XEC, ctx->r7) = 0;
    // 0x42002B9C: swc1        $f0, 0x104($a3)
    MEM_W(0X104, ctx->r7) = ctx->f0.u32l;
    // 0x42002BA0: swc1        $f0, 0x100($a3)
    MEM_W(0X100, ctx->r7) = ctx->f0.u32l;
    // 0x42002BA4: swc1        $f0, 0xFC($a3)
    MEM_W(0XFC, ctx->r7) = ctx->f0.u32l;
    // 0x42002BA8: swc1        $f0, 0xF8($a3)
    MEM_W(0XF8, ctx->r7) = ctx->f0.u32l;
    // 0x42002BAC: swc1        $f0, 0xF4($a3)
    MEM_W(0XF4, ctx->r7) = ctx->f0.u32l;
    // 0x42002BB0: swc1        $f0, 0xF0($a3)
    MEM_W(0XF0, ctx->r7) = ctx->f0.u32l;
    // 0x42002BB4: addu        $v0, $a3, $t7
    ctx->r2 = ADD32(ctx->r7, ctx->r15);
    // 0x42002BB8: swc1        $f4, 0xDC($a3)
    MEM_W(0XDC, ctx->r7) = ctx->f4.u32l;
    // 0x42002BBC: swc1        $f0, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->f0.u32l;
    // 0x42002BC0: swc1        $f0, 0x118($v0)
    MEM_W(0X118, ctx->r2) = ctx->f0.u32l;
    // 0x42002BC4: swc1        $f0, 0x114($v0)
    MEM_W(0X114, ctx->r2) = ctx->f0.u32l;
    // 0x42002BC8: swc1        $f0, 0x110($v0)
    MEM_W(0X110, ctx->r2) = ctx->f0.u32l;
    // 0x42002BCC: swc1        $f0, 0x10C($v0)
    MEM_W(0X10C, ctx->r2) = ctx->f0.u32l;
    // 0x42002BD0: swc1        $f0, 0x108($v0)
    MEM_W(0X108, ctx->r2) = ctx->f0.u32l;
    // 0x42002BD4: swc1        $f0, 0x104($v0)
    MEM_W(0X104, ctx->r2) = ctx->f0.u32l;
    // 0x42002BD8: swc1        $f0, 0x100($v0)
    MEM_W(0X100, ctx->r2) = ctx->f0.u32l;
    // 0x42002BDC: swc1        $f0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->f0.u32l;
    // 0x42002BE0: swc1        $f0, 0xF0($v0)
    MEM_W(0XF0, ctx->r2) = ctx->f0.u32l;
    // 0x42002BE4: swc1        $f0, 0xF4($v0)
    MEM_W(0XF4, ctx->r2) = ctx->f0.u32l;
    // 0x42002BE8: swc1        $f0, 0xF8($v0)
    MEM_W(0XF8, ctx->r2) = ctx->f0.u32l;
    // 0x42002BEC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002BF0: lwc1        $f6, 0x3648($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3648);
    // 0x42002BF4: b           L_42002C6C
    // 0x42002BF8: swc1        $f6, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f6.u32l;
        goto L_42002C6C;
    // 0x42002BF8: swc1        $f6, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f6.u32l;
L_42002BFC:
    // 0x42002BFC: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x42002C00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x42002C04: jal         0x42001874
    // 0x42002C08: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_flame_1874(rdram, ctx);
        goto after_0;
    // 0x42002C08: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x42002C0C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x42002C10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002C14: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42002C18: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42002C1C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x42002C20: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x42002C24: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x42002C28: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x42002C2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x42002C30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x42002C34: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x42002C38: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x42002C3C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_42002C40:
    // 0x42002C40: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x42002C44: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x42002C48: sw          $v0, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = ctx->r2;
    // 0x42002C4C: swc1        $f0, 0x70($v1)
    MEM_W(0X70, ctx->r3) = ctx->f0.u32l;
    // 0x42002C50: swc1        $f0, 0x74($v1)
    MEM_W(0X74, ctx->r3) = ctx->f0.u32l;
    // 0x42002C54: bne         $a0, $a2, L_42002C40
    if (ctx->r4 != ctx->r6) {
        // 0x42002C58: sw          $a1, 0x78($v1)
        MEM_W(0X78, ctx->r3) = ctx->r5;
            goto L_42002C40;
    }
    // 0x42002C58: sw          $a1, 0x78($v1)
    MEM_W(0X78, ctx->r3) = ctx->r5;
    // 0x42002C5C: sw          $v0, 0xAC($a3)
    MEM_W(0XAC, ctx->r7) = ctx->r2;
    // 0x42002C60: swc1        $f0, 0xB0($a3)
    MEM_W(0XB0, ctx->r7) = ctx->f0.u32l;
    // 0x42002C64: swc1        $f0, 0xB4($a3)
    MEM_W(0XB4, ctx->r7) = ctx->f0.u32l;
    // 0x42002C68: sw          $a1, 0xB8($a3)
    MEM_W(0XB8, ctx->r7) = ctx->r5;
L_42002C6C:
    // 0x42002C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002C70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002C74: jr          $ra
    // 0x42002C78: nop

    return;
    // 0x42002C78: nop

;}
RECOMP_FUNC void ovl_blast_flame_2C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002C7C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42002C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002C84: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x42002C88: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x42002C8C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42002C90: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42002C94: jal         0x420006C4
    // 0x42002C98: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_flame_6C4(rdram, ctx);
        goto after_0;
    // 0x42002C98: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x42002C9C: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x42002CA0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x42002CA4: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x42002CA8: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
    // 0x42002CAC: addiu       $a1, $v0, 0x7C
    ctx->r5 = ADD32(ctx->r2, 0X7C);
    // 0x42002CB0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x42002CB4: addiu       $a2, $zero, 0x202
    ctx->r6 = ADD32(0, 0X202);
    // 0x42002CB8: jal         0x42001104
    // 0x42002CBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_flame_1104(rdram, ctx);
        goto after_1;
    // 0x42002CBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42002CC0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x42002CC4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002CC8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002CCC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x42002CD0: lw          $a1, 0x7C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X7C);
    // 0x42002CD4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42002CD8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x42002CDC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42002CE0: swc1        $f4, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->f4.u32l;
    // 0x42002CE4: jal         0x42000F34
    // 0x42002CE8: swc1        $f6, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->f6.u32l;
    ovl_blast_flame_F34(rdram, ctx);
        goto after_2;
    // 0x42002CE8: swc1        $f6, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->f6.u32l;
    after_2:
    // 0x42002CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002CF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x42002CF4: jr          $ra
    // 0x42002CF8: nop

    return;
    // 0x42002CF8: nop

;}
RECOMP_FUNC void ovl_blast_flame_2CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002D04: jal         0x42002710
    // 0x42002D08: nop

    ovl_blast_flame_2710(rdram, ctx);
        goto after_0;
    // 0x42002D08: nop

    after_0:
    // 0x42002D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002D10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002D14: jr          $ra
    // 0x42002D18: nop

    return;
    // 0x42002D18: nop

    // 0x42002D1C: jr          $ra
    // 0x42002D20: nop

    return;
    // 0x42002D20: nop

    // 0x42002D24: jr          $ra
    // 0x42002D28: nop

    return;
    // 0x42002D28: nop

;}
RECOMP_FUNC void ovl_blast_flame_2D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002D2C: beq         $a0, $zero, L_42002D54
    if (ctx->r4 == 0) {
        // 0x42002D30: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_42002D54;
    }
    // 0x42002D30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002D34: beq         $a0, $at, L_42002D5C
    if (ctx->r4 == ctx->r1) {
        // 0x42002D38: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_42002D5C;
    }
    // 0x42002D38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002D3C: beq         $a0, $at, L_42002D64
    if (ctx->r4 == ctx->r1) {
        // 0x42002D40: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_42002D64;
    }
    // 0x42002D40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x42002D44: beq         $a0, $at, L_42002D6C
    if (ctx->r4 == ctx->r1) {
        // 0x42002D48: addiu       $v1, $zero, 0xB
        ctx->r3 = ADD32(0, 0XB);
            goto L_42002D6C;
    }
    // 0x42002D48: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x42002D4C: jr          $ra
    // 0x42002D50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x42002D50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_42002D54:
    // 0x42002D54: jr          $ra
    // 0x42002D58: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x42002D58: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_42002D5C:
    // 0x42002D5C: jr          $ra
    // 0x42002D60: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x42002D60: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_42002D64:
    // 0x42002D64: jr          $ra
    // 0x42002D68: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    return;
    // 0x42002D68: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_42002D6C:
    // 0x42002D6C: jr          $ra
    // 0x42002D70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x42002D70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_blast_flame_2D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002D74: beq         $a0, $zero, L_42002D9C
    if (ctx->r4 == 0) {
        // 0x42002D78: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_42002D9C;
    }
    // 0x42002D78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002D7C: beq         $a0, $at, L_42002DA4
    if (ctx->r4 == ctx->r1) {
        // 0x42002D80: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_42002DA4;
    }
    // 0x42002D80: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002D84: beq         $a0, $at, L_42002DAC
    if (ctx->r4 == ctx->r1) {
        // 0x42002D88: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_42002DAC;
    }
    // 0x42002D88: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x42002D8C: beq         $a0, $at, L_42002DB4
    if (ctx->r4 == ctx->r1) {
        // 0x42002D90: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_42002DB4;
    }
    // 0x42002D90: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x42002D94: jr          $ra
    // 0x42002D98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x42002D98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_42002D9C:
    // 0x42002D9C: jr          $ra
    // 0x42002DA0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    return;
    // 0x42002DA0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_42002DA4:
    // 0x42002DA4: jr          $ra
    // 0x42002DA8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x42002DA8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_42002DAC:
    // 0x42002DAC: jr          $ra
    // 0x42002DB0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    return;
    // 0x42002DB0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_42002DB4:
    // 0x42002DB4: jr          $ra
    // 0x42002DB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x42002DB8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_blast_flame_2DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002DBC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42002DC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002DC4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x42002DC8: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42002DCC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x42002DD0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x42002DD4: jal         0x420006C4
    // 0x42002DD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_blast_flame_6C4(rdram, ctx);
        goto after_0;
    // 0x42002DD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x42002DDC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x42002DE0: nop

    // 0x42002DE4: lw          $v0, 0xE8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XE8);
    // 0x42002DE8: nop

    // 0x42002DEC: slti        $v1, $v0, 0x6
    ctx->r3 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x42002DF0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x42002DF4: bne         $v1, $zero, L_42002E00
    if (ctx->r3 != 0) {
        // 0x42002DF8: sw          $t6, 0xE8($a3)
        MEM_W(0XE8, ctx->r7) = ctx->r14;
            goto L_42002E00;
    }
    // 0x42002DF8: sw          $t6, 0xE8($a3)
    MEM_W(0XE8, ctx->r7) = ctx->r14;
    // 0x42002DFC: sw          $zero, 0xE8($a3)
    MEM_W(0XE8, ctx->r7) = 0;
L_42002E00:
    // 0x42002E00: lw          $t7, 0xE8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0XE8);
    // 0x42002E04: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x42002E08: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x42002E0C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x42002E10: mflo        $t8
    ctx->r24 = lo;
    // 0x42002E14: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x42002E18: swc1        $f4, 0xF0($t9)
    MEM_W(0XF0, ctx->r25) = ctx->f4.u32l;
    // 0x42002E1C: lw          $t0, 0xE8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XE8);
    // 0x42002E20: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x42002E24: multu       $t0, $v0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x42002E28: mflo        $t1
    ctx->r9 = lo;
    // 0x42002E2C: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x42002E30: swc1        $f6, 0xF4($t2)
    MEM_W(0XF4, ctx->r10) = ctx->f6.u32l;
    // 0x42002E34: lw          $t3, 0xE8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XE8);
    // 0x42002E38: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002E3C: multu       $t3, $v0
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x42002E40: mflo        $t4
    ctx->r12 = lo;
    // 0x42002E44: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x42002E48: swc1        $f8, 0xF8($t5)
    MEM_W(0XF8, ctx->r13) = ctx->f8.u32l;
    // 0x42002E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002E50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x42002E54: jr          $ra
    // 0x42002E58: nop

    return;
    // 0x42002E58: nop

;}
RECOMP_FUNC void ovl_blast_flame_2E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002E5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002E60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002E64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x42002E68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42002E6C: lw          $t7, 0xE8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XE8);
    // 0x42002E70: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x42002E74: subu        $v0, $t7, $t8
    ctx->r2 = SUB32(ctx->r15, ctx->r24);
    // 0x42002E78: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x42002E7C: bgez        $v0, L_42002E88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x42002E80: addiu       $a0, $zero, 0x11
        ctx->r4 = ADD32(0, 0X11);
            goto L_42002E88;
    }
    // 0x42002E80: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42002E84: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
L_42002E88:
    // 0x42002E88: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x42002E8C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x42002E90: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x42002E94: subu        $t3, $t3, $v0
    ctx->r11 = SUB32(ctx->r11, ctx->r2);
    // 0x42002E98: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x42002E9C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x42002EA0: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x42002EA4: lw          $a1, 0x7C($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X7C);
    // 0x42002EA8: addu        $a2, $t9, $t3
    ctx->r6 = ADD32(ctx->r25, ctx->r11);
    // 0x42002EAC: addiu       $a2, $a2, 0xF0
    ctx->r6 = ADD32(ctx->r6, 0XF0);
    // 0x42002EB0: jal         0x42000F34
    // 0x42002EB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_flame_F34(rdram, ctx);
        goto after_0;
    // 0x42002EB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42002EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002EC0: jr          $ra
    // 0x42002EC4: nop

    return;
    // 0x42002EC4: nop

;}
RECOMP_FUNC void ovl_blast_flame_2EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002EC8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42002ECC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x42002ED0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x42002ED4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x42002ED8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x42002EDC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x42002EE0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x42002EE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x42002EE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x42002EEC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x42002EF0: lw          $s5, 0x68($a0)
    ctx->r21 = MEM_W(ctx->r4, 0X68);
    // 0x42002EF4: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x42002EF8: jal         0x42002D2C
    // 0x42002EFC: nop

    ovl_blast_flame_2D2C(rdram, ctx);
        goto after_0;
    // 0x42002EFC: nop

    after_0:
    // 0x42002F00: bne         $s5, $v0, L_42002F1C
    if (ctx->r21 != ctx->r2) {
        // 0x42002F04: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_42002F1C;
    }
    // 0x42002F04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x42002F08: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002F0C: nop

    // 0x42002F10: swc1        $f0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->f0.u32l;
    // 0x42002F14: swc1        $f0, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->f0.u32l;
    // 0x42002F18: swc1        $f0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->f0.u32l;
L_42002F1C:
    // 0x42002F1C: jal         0x42002DBC
    // 0x42002F20: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_blast_flame_2DBC(rdram, ctx);
        goto after_1;
    // 0x42002F20: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x42002F24: slt         $at, $s5, $s0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x42002F28: beq         $at, $zero, L_42002FAC
    if (ctx->r1 == 0) {
        // 0x42002F2C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_42002FAC;
    }
    // 0x42002F2C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002F30: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x42002F34: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
L_42002F38:
    // 0x42002F38: bne         $s5, $s3, L_42002F84
    if (ctx->r21 != ctx->r19) {
        // 0x42002F3C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_42002F84;
    }
    // 0x42002F3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x42002F40: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x42002F44: addu        $s1, $s2, $t6
    ctx->r17 = ADD32(ctx->r18, ctx->r14);
    // 0x42002F48: addiu       $s4, $s1, 0x80
    ctx->r20 = ADD32(ctx->r17, 0X80);
    // 0x42002F4C: jal         0x42002C7C
    // 0x42002F50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_blast_flame_2C7C(rdram, ctx);
        goto after_2;
    // 0x42002F50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x42002F54: lw          $a2, 0x7C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X7C);
    // 0x42002F58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42002F5C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42002F60: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x42002F64: jal         0x42000F34
    // 0x42002F68: addiu       $a3, $zero, 0x203
    ctx->r7 = ADD32(0, 0X203);
    ovl_blast_flame_F34(rdram, ctx);
        goto after_3;
    // 0x42002F68: addiu       $a3, $zero, 0x203
    ctx->r7 = ADD32(0, 0X203);
    after_3:
    // 0x42002F6C: lw          $t7, 0xEC($s2)
    ctx->r15 = MEM_W(ctx->r18, 0XEC);
    // 0x42002F70: nop

    // 0x42002F74: slt         $at, $t7, $s0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x42002F78: beq         $at, $zero, L_42002F88
    if (ctx->r1 == 0) {
        // 0x42002F7C: slt         $at, $s5, $s3
        ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r19) ? 1 : 0;
            goto L_42002F88;
    }
    // 0x42002F7C: slt         $at, $s5, $s3
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x42002F80: sw          $s0, 0xEC($s2)
    MEM_W(0XEC, ctx->r18) = ctx->r16;
L_42002F84:
    // 0x42002F84: slt         $at, $s5, $s3
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r19) ? 1 : 0;
L_42002F88:
    // 0x42002F88: bne         $at, $zero, L_42002FA0
    if (ctx->r1 != 0) {
        // 0x42002F8C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_42002FA0;
    }
    // 0x42002F8C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x42002F90: lw          $t8, 0xEC($s2)
    ctx->r24 = MEM_W(ctx->r18, 0XEC);
    // 0x42002F94: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42002F98: jal         0x42002E5C
    // 0x42002F9C: subu        $a2, $t8, $s0
    ctx->r6 = SUB32(ctx->r24, ctx->r16);
    ovl_blast_flame_2E5C(rdram, ctx);
        goto after_4;
    // 0x42002F9C: subu        $a2, $t8, $s0
    ctx->r6 = SUB32(ctx->r24, ctx->r16);
    after_4:
L_42002FA0:
    // 0x42002FA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x42002FA4: bne         $s0, $s6, L_42002F38
    if (ctx->r16 != ctx->r22) {
        // 0x42002FA8: addiu       $s3, $s3, 0x2
        ctx->r19 = ADD32(ctx->r19, 0X2);
            goto L_42002F38;
    }
    // 0x42002FA8: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
L_42002FAC:
    // 0x42002FAC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x42002FB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x42002FB4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x42002FB8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x42002FBC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x42002FC0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x42002FC4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x42002FC8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x42002FCC: jr          $ra
    // 0x42002FD0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x42002FD0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_flame_2FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002FD4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x42002FD8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x42002FDC: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42002FE0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42002FE4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42002FE8: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x42002FEC: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x42002FF0: bne         $at, $zero, L_42003160
    if (ctx->r1 != 0) {
        // 0x42002FF4: sw          $a3, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r7;
            goto L_42003160;
    }
    // 0x42002FF4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x42002FF8: bne         $a2, $a3, L_420030A8
    if (ctx->r6 != ctx->r7) {
        // 0x42002FFC: addiu       $a2, $zero, 0x212
        ctx->r6 = ADD32(0, 0X212);
            goto L_420030A8;
    }
    // 0x42002FFC: addiu       $a2, $zero, 0x212
    ctx->r6 = ADD32(0, 0X212);
    // 0x42003000: jal         0x42001104
    // 0x42003004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_flame_1104(rdram, ctx);
        goto after_0;
    // 0x42003004: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003008: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x4200300C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003010: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003014: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x42003018: jal         0x42000F34
    // 0x4200301C: addiu       $a3, $zero, 0x212
    ctx->r7 = ADD32(0, 0X212);
    ovl_blast_flame_F34(rdram, ctx);
        goto after_1;
    // 0x4200301C: addiu       $a3, $zero, 0x212
    ctx->r7 = ADD32(0, 0X212);
    after_1:
    // 0x42003020: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003024: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x42003028: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4200302C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x42003030: jal         0x42000F34
    // 0x42003034: addiu       $a3, $zero, 0x213
    ctx->r7 = ADD32(0, 0X213);
    ovl_blast_flame_F34(rdram, ctx);
        goto after_2;
    // 0x42003034: addiu       $a3, $zero, 0x213
    ctx->r7 = ADD32(0, 0X213);
    after_2:
    // 0x42003038: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x4200303C: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x42003040: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003044: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003048: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4200304C: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x42003050: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x42003054: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x42003058: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x4200305C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x42003060: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x42003064: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x42003068: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x4200306C: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x42003070: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x42003074: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x42003078: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x4200307C: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x42003080: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42003084: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42003088: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4200308C: jal         0x42000F34
    // 0x42003090: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_flame_F34(rdram, ctx);
        goto after_3;
    // 0x42003090: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_3:
    // 0x42003094: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003098: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4200309C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x420030A0: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x420030A4: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
L_420030A8:
    // 0x420030A8: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x420030AC: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x420030B0: addiu       $t2, $t1, 0x19
    ctx->r10 = ADD32(ctx->r9, 0X19);
    // 0x420030B4: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x420030B8: beq         $at, $zero, L_42003104
    if (ctx->r1 == 0) {
        // 0x420030BC: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_42003104;
    }
    // 0x420030BC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x420030C0: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x420030C4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x420030C8: lw          $a1, 0x0($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X0);
    // 0x420030CC: jal         0x42001874
    // 0x420030D0: nop

    ovl_blast_flame_1874(rdram, ctx);
        goto after_4;
    // 0x420030D0: nop

    after_4:
    // 0x420030D4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x420030D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x420030DC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x420030E0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420030E4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x420030E8: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x420030EC: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x420030F0: lwc1        $f16, 0x364C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X364C);
    // 0x420030F4: nop

    // 0x420030F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x420030FC: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x42003100: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
L_42003104:
    // 0x42003104: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42003108: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200310C: lwc1        $f6, 0x3650($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3650);
    // 0x42003110: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003114: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x42003118: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4200311C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003120: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x42003124: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003128: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x4200312C: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x42003130: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x42003134: bc1f        L_42003144
    if (!c1cs) {
        // 0x42003138: nop
    
            goto L_42003144;
    }
    // 0x42003138: nop

    // 0x4200313C: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x42003140: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
L_42003144:
    // 0x42003144: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x42003148: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x4200314C: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x42003150: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x42003154: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003158: jal         0x42000F34
    // 0x4200315C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_flame_F34(rdram, ctx);
        goto after_5;
    // 0x4200315C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
L_42003160:
    // 0x42003160: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x42003164: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x42003168: jr          $ra
    // 0x4200316C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x4200316C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_blast_flame_3170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003170: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x42003174: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x42003178: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x4200317C: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42003180: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003184: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x42003188: bne         $at, $zero, L_42003364
    if (ctx->r1 != 0) {
        // 0x4200318C: sw          $ra, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r31;
            goto L_42003364;
    }
    // 0x4200318C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42003190: bne         $a2, $a3, L_42003228
    if (ctx->r6 != ctx->r7) {
        // 0x42003194: addiu       $a2, $zero, 0x211
        ctx->r6 = ADD32(0, 0X211);
            goto L_42003228;
    }
    // 0x42003194: addiu       $a2, $zero, 0x211
    ctx->r6 = ADD32(0, 0X211);
    // 0x42003198: jal         0x42001104
    // 0x4200319C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_flame_1104(rdram, ctx);
        goto after_0;
    // 0x4200319C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x420031A0: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x420031A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x420031A8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x420031AC: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x420031B0: jal         0x42000F34
    // 0x420031B4: addiu       $a3, $zero, 0x211
    ctx->r7 = ADD32(0, 0X211);
    ovl_blast_flame_F34(rdram, ctx);
        goto after_1;
    // 0x420031B4: addiu       $a3, $zero, 0x211
    ctx->r7 = ADD32(0, 0X211);
    after_1:
    // 0x420031B8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420031BC: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x420031C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x420031C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420031C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x420031CC: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x420031D0: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x420031D4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x420031D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x420031DC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x420031E0: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x420031E4: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x420031E8: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x420031EC: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x420031F0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x420031F4: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x420031F8: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x420031FC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x42003200: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42003204: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42003208: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4200320C: jal         0x42000F34
    // 0x42003210: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_flame_F34(rdram, ctx);
        goto after_2;
    // 0x42003210: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_2:
    // 0x42003214: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x42003218: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x4200321C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003220: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x42003224: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
L_42003228:
    // 0x42003228: slti        $at, $s1, 0x2B
    ctx->r1 = SIGNED(ctx->r17) < 0X2B ? 1 : 0;
    // 0x4200322C: bne         $at, $zero, L_420032E8
    if (ctx->r1 != 0) {
        // 0x42003230: slti        $at, $s1, 0x55
        ctx->r1 = SIGNED(ctx->r17) < 0X55 ? 1 : 0;
            goto L_420032E8;
    }
    // 0x42003230: slti        $at, $s1, 0x55
    ctx->r1 = SIGNED(ctx->r17) < 0X55 ? 1 : 0;
    // 0x42003234: beq         $at, $zero, L_420032E8
    if (ctx->r1 == 0) {
        // 0x42003238: lui         $at, 0x4200
        ctx->r1 = S32(0X4200 << 16);
            goto L_420032E8;
    }
    // 0x42003238: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200323C: lwc1        $f6, 0x3654($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3654);
    // 0x42003240: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003244: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003248: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4200324C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003250: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x42003254: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x42003258: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x4200325C: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003260: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x42003264: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x42003268: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x4200326C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003270: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42003274: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003278: beq         $a3, $zero, L_420032C4
    if (ctx->r7 == 0) {
        // 0x4200327C: nop
    
            goto L_420032C4;
    }
    // 0x4200327C: nop

    // 0x42003280: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42003284: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003288: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x4200328C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x42003290: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003294: nop

    // 0x42003298: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x4200329C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420032A0: nop

    // 0x420032A4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420032A8: bne         $a3, $zero, L_420032BC
    if (ctx->r7 != 0) {
        // 0x420032AC: nop
    
            goto L_420032BC;
    }
    // 0x420032AC: nop

    // 0x420032B0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x420032B4: b           L_420032D4
    // 0x420032B8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_420032D4;
    // 0x420032B8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_420032BC:
    // 0x420032BC: b           L_420032D4
    // 0x420032C0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_420032D4;
    // 0x420032C0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_420032C4:
    // 0x420032C4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x420032C8: nop

    // 0x420032CC: bltz        $a3, L_420032BC
    if (SIGNED(ctx->r7) < 0) {
        // 0x420032D0: nop
    
            goto L_420032BC;
    }
    // 0x420032D0: nop

L_420032D4:
    // 0x420032D4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x420032D8: jal         0x42000F34
    // 0x420032DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_flame_F34(rdram, ctx);
        goto after_3;
    // 0x420032DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x420032E0: b           L_42003308
    // 0x420032E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
        goto L_42003308;
    // 0x420032E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
L_420032E8:
    // 0x420032E8: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
    // 0x420032EC: bne         $s1, $at, L_42003304
    if (ctx->r17 != ctx->r1) {
        // 0x420032F0: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003304;
    }
    // 0x420032F0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x420032F4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420032F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x420032FC: jal         0x42000F34
    // 0x42003300: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_flame_F34(rdram, ctx);
        goto after_4;
    // 0x42003300: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
L_42003304:
    // 0x42003304: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
L_42003308:
    // 0x42003308: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x4200330C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x42003310: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42003314: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003318: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4200331C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x42003320: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x42003324: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x42003328: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x4200332C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x42003330: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x42003334: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x42003338: bc1f        L_42003348
    if (!c1cs) {
        // 0x4200333C: nop
    
            goto L_42003348;
    }
    // 0x4200333C: nop

    // 0x42003340: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x42003344: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
L_42003348:
    // 0x42003348: swc1        $f10, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f10.u32l;
    // 0x4200334C: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003350: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x42003354: swc1        $f16, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f16.u32l;
    // 0x42003358: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x4200335C: jal         0x42000F34
    // 0x42003360: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_flame_F34(rdram, ctx);
        goto after_5;
    // 0x42003360: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
L_42003364:
    // 0x42003364: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x42003368: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x4200336C: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x42003370: jr          $ra
    // 0x42003374: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x42003374: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_blast_flame_3378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003378: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4200337C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42003380: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x42003384: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x42003388: lw          $s1, 0x68($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X68);
    // 0x4200338C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003390: addiu       $a1, $s0, 0x7C
    ctx->r5 = ADD32(ctx->r16, 0X7C);
    // 0x42003394: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003398: jal         0x42002FD4
    // 0x4200339C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_flame_2FD4(rdram, ctx);
        goto after_0;
    // 0x4200339C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x420033A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420033A4: addiu       $a1, $s0, 0x8C
    ctx->r5 = ADD32(ctx->r16, 0X8C);
    // 0x420033A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x420033AC: jal         0x42002FD4
    // 0x420033B0: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    ovl_blast_flame_2FD4(rdram, ctx);
        goto after_1;
    // 0x420033B0: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    after_1:
    // 0x420033B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420033B8: addiu       $a1, $s0, 0x9C
    ctx->r5 = ADD32(ctx->r16, 0X9C);
    // 0x420033BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x420033C0: jal         0x42002FD4
    // 0x420033C4: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    ovl_blast_flame_2FD4(rdram, ctx);
        goto after_2;
    // 0x420033C4: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    after_2:
    // 0x420033C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420033CC: addiu       $a1, $s0, 0xAC
    ctx->r5 = ADD32(ctx->r16, 0XAC);
    // 0x420033D0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x420033D4: jal         0x42003170
    // 0x420033D8: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    ovl_blast_flame_3170(rdram, ctx);
        goto after_3;
    // 0x420033D8: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    after_3:
    // 0x420033DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x420033E0: bne         $s1, $at, L_420033F8
    if (ctx->r17 != ctx->r1) {
        // 0x420033E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_420033F8;
    }
    // 0x420033E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420033E8: jal         0x4200148C
    // 0x420033EC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    ovl_blast_flame_148C(rdram, ctx);
        goto after_4;
    // 0x420033EC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_4:
    // 0x420033F0: b           L_42003420
    // 0x420033F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_42003420;
    // 0x420033F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_420033F8:
    // 0x420033F8: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x420033FC: bne         $s1, $at, L_42003420
    if (ctx->r17 != ctx->r1) {
        // 0x42003400: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42003420;
    }
    // 0x42003400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42003404: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003408: jal         0x42001874
    // 0x4200340C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_flame_1874(rdram, ctx);
        goto after_5;
    // 0x4200340C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x42003410: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003414: nop

    // 0x42003418: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x4200341C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42003420:
    // 0x42003420: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42003424: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x42003428: jr          $ra
    // 0x4200342C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4200342C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_blast_ground_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000000: lui         $v0, 0x4200
    ctx->r2 = S32(0X4200 << 16);
    // 0x42000004: jr          $ra
    // 0x42000008: addiu       $v0, $v0, 0x2DE8
    ctx->r2 = ADD32(ctx->r2, 0X2DE8);
    return;
    // 0x42000008: addiu       $v0, $v0, 0x2DE8
    ctx->r2 = ADD32(ctx->r2, 0X2DE8);
    // 0x4200000C: nop

;}
RECOMP_FUNC void ovl_blast_ground_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000014: jr          $t1
    // 0x42000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_blast_ground_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000020: jr          $t1
    // 0x42000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_blast_ground_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200002C: jr          $t1
    // 0x42000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_blast_ground_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000038: jr          $t1
    // 0x4200003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_blast_ground_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000044: jr          $t1
    // 0x42000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_blast_ground_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000050: jr          $t1
    // 0x42000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_blast_ground_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200005C: jr          $t1
    // 0x42000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_blast_ground_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000068: jr          $t1
    // 0x4200006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_blast_ground_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000074: jr          $t1
    // 0x42000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_blast_ground_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000080: jr          $t1
    // 0x42000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_blast_ground_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200008C: jr          $t1
    // 0x42000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_blast_ground_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000098: jr          $t1
    // 0x4200009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_blast_ground_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000A4: jr          $t1
    // 0x420000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_blast_ground_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000B0: jr          $t1
    // 0x420000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_blast_ground_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000BC: jr          $t1
    // 0x420000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_blast_ground_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000C8: jr          $t1
    // 0x420000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_blast_ground_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000D4: jr          $t1
    // 0x420000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_blast_ground_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000E0: jr          $t1
    // 0x420000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_blast_ground_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000EC: jr          $t1
    // 0x420000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_blast_ground_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x420000F8: jr          $t1
    // 0x420000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x420000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_blast_ground_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000104: jr          $t1
    // 0x42000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_blast_ground_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000110: jr          $t1
    // 0x42000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_blast_ground_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x4200011C: jr          $t1
    // 0x42000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_blast_ground_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000128: jr          $t1
    // 0x4200012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x4200012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_blast_ground_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000134: jr          $t1
    // 0x42000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_blast_ground_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x42000140: jr          $t1
    // 0x42000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x42000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
