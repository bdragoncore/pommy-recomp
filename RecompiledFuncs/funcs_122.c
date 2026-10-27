#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_wind_23A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420023A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420023A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420023A8: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x420023AC: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x420023B0: lw          $t1, 0x6C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X6C);
    // 0x420023B4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x420023B8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x420023BC: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x420023C0: sw          $t7, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r15;
    // 0x420023C4: bne         $at, $zero, L_420023D4
    if (ctx->r1 != 0) {
        // 0x420023C8: sw          $t9, 0x68($a0)
        MEM_W(0X68, ctx->r4) = ctx->r25;
            goto L_420023D4;
    }
    // 0x420023C8: sw          $t9, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r25;
    // 0x420023CC: jal         0x4200218C
    // 0x420023D0: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_blast_wind_218C(rdram, ctx);
        goto after_0;
    // 0x420023D0: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_0:
L_420023D4:
    // 0x420023D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420023D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420023DC: jr          $ra
    // 0x420023E0: nop

    return;
    // 0x420023E0: nop

;}
RECOMP_FUNC void ovl_blast_wind_23E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420023E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x420023E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x420023EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x420023F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x420023F4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x420023F8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x420023FC: jal         0x420017CC
    // 0x42002400: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    ovl_blast_wind_17CC(rdram, ctx);
        goto after_0;
    // 0x42002400: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x42002404: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x42002408: nop

    // 0x4200240C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x42002410: nop

    // 0x42002414: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x42002418: beq         $t8, $zero, L_42002490
    if (ctx->r24 == 0) {
        // 0x4200241C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42002490;
    }
    // 0x4200241C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42002420: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x42002424: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42002428: beq         $v0, $at, L_42002444
    if (ctx->r2 == ctx->r1) {
        // 0x4200242C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_42002444;
    }
    // 0x4200242C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42002430: jal         0x420023A0
    // 0x42002434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_wind_23A0(rdram, ctx);
        goto after_1;
    // 0x42002434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x42002438: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x4200243C: nop

    // 0x42002440: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_42002444:
    // 0x42002444: beq         $v0, $at, L_42002460
    if (ctx->r2 == ctx->r1) {
        // 0x42002448: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_42002460;
    }
    // 0x42002448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4200244C: jal         0x420022C4
    // 0x42002450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_wind_22C4(rdram, ctx);
        goto after_2;
    // 0x42002450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x42002454: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x42002458: nop

    // 0x4200245C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_42002460:
    // 0x42002460: beq         $v0, $at, L_4200247C
    if (ctx->r2 == ctx->r1) {
        // 0x42002464: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4200247C;
    }
    // 0x42002464: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42002468: jal         0x420021FC
    // 0x4200246C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_wind_21FC(rdram, ctx);
        goto after_3;
    // 0x4200246C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x42002470: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x42002474: nop

    // 0x42002478: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4200247C:
    // 0x4200247C: beq         $v0, $at, L_42002490
    if (ctx->r2 == ctx->r1) {
        // 0x42002480: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_42002490;
    }
    // 0x42002480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42002484: jal         0x420021C4
    // 0x42002488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_blast_wind_21C4(rdram, ctx);
        goto after_4;
    // 0x42002488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4200248C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_42002490:
    // 0x42002490: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002494: jr          $ra
    // 0x42002498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x42002498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_wind_249C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200249C: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x420024A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x420024A4: lw          $v1, 0x44BC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X44BC);
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
RECOMP_FUNC void ovl_blast_wind_2500(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_blast_wind_1874(rdram, ctx);
        goto after_0;
    // 0x42002524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x42002528: lui         $s1, 0x4200
    ctx->r17 = S32(0X4200 << 16);
    // 0x4200252C: lw          $s1, 0x44B0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X44B0);
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
    ovl_blast_wind_249C(rdram, ctx);
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
    ovl_blast_wind_6C4(rdram, ctx);
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
    // 0x420025A8: lw          $t2, 0x43BC($at)
    ctx->r10 = ADD32(ctx->r1, 0X43BC);
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
        default: switch_error(__func__, 0x420025B0, 0x420043BC);
    }
    // 0x420025B4: nop

L_420025B8:
    // 0x420025B8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x420025BC: jal         0x420023E4
    // 0x420025C0: nop

    ovl_blast_wind_23E4(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_wind_25F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420025F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420025FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_42002600:
    // 0x42002600: jal         0x42002500
    // 0x42002604: nop

    ovl_blast_wind_2500(rdram, ctx);
        goto after_0;
    // 0x42002604: nop

    after_0:
    // 0x42002608: jal         0x4200085C
    // 0x4200260C: nop

    ovl_blast_wind_85C(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_wind_2640(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x42002668: lw          $t7, 0x43E0($at)
    ctx->r15 = ADD32(ctx->r1, 0X43E0);
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
        default: switch_error(__func__, 0x42002670, 0x420043E0);
    }
    // 0x42002674: nop

L_42002678:
    // 0x42002678: jal         0x420020B4
    // 0x4200267C: nop

    ovl_blast_wind_20B4(rdram, ctx);
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

    ovl_blast_wind_2014(rdram, ctx);
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

    ovl_blast_wind_1FEC(rdram, ctx);
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

    ovl_blast_wind_1FB0(rdram, ctx);
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

    ovl_blast_wind_1E64(rdram, ctx);
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

    ovl_blast_wind_1C3C(rdram, ctx);
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

    ovl_blast_wind_1B64(rdram, ctx);
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

    ovl_blast_wind_1B38(rdram, ctx);
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

    ovl_blast_wind_1ADC(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_wind_2710(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x42002738: lw          $t6, 0x4438($at)
    ctx->r14 = ADD32(ctx->r1, 0X4438);
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
        default: switch_error(__func__, 0x42002740, 0x42004438);
    }
    // 0x42002744: nop

L_42002748:
    // 0x42002748: jal         0x42002640
    // 0x4200274C: nop

    ovl_blast_wind_2640(rdram, ctx);
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

    ovl_blast_wind_2640(rdram, ctx);
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

    ovl_blast_wind_2640(rdram, ctx);
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
    // 0x42002780: addiu       $a0, $a0, 0x4390
    ctx->r4 = ADD32(ctx->r4, 0X4390);
    ovl_blast_wind_1C(rdram, ctx);
        goto after_3;
    // 0x42002780: addiu       $a0, $a0, 0x4390
    ctx->r4 = ADD32(ctx->r4, 0X4390);
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
RECOMP_FUNC void ovl_blast_wind_27A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420027A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420027A8: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420027AC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x420027B0: bne         $t6, $at, L_420027C8
    if (ctx->r14 != ctx->r1) {
        // 0x420027B4: nop
    
            goto L_420027C8;
    }
    // 0x420027B4: nop

    // 0x420027B8: jal         0x420040E0
    // 0x420027BC: nop

    ovl_blast_wind_40E0(rdram, ctx);
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
    // 0x420027C8: jal         0x42003800
    // 0x420027CC: nop

    ovl_blast_wind_3800(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_wind_27E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x420027E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420027E8: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x420027EC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x420027F0: beq         $t6, $zero, L_42002910
    if (ctx->r14 == 0) {
        // 0x420027F4: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_42002910;
    }
    // 0x420027F4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x420027F8: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x420027FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002800: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002804: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x42002808: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x4200280C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x42002810: nop

    // 0x42002814: bc1t        L_42002914
    if (c1cs) {
        // 0x42002818: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_42002914;
    }
    // 0x42002818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4200281C: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x42002820: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x42002824: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x42002828: sra         $t9, $t8, 4
    ctx->r25 = S32(SIGNED(ctx->r24) >> 4);
    // 0x4200282C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x42002830: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x42002834: jal         0x42001874
    // 0x42002838: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    ovl_blast_wind_1874(rdram, ctx);
        goto after_0;
    // 0x42002838: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x4200283C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x42002840: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x42002844: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x42002848: beq         $v1, $zero, L_42002914
    if (ctx->r3 == 0) {
        // 0x4200284C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_42002914;
    }
    // 0x4200284C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002850: lw          $t0, 0x70($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X70);
    // 0x42002854: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x42002858: bne         $v0, $t0, L_42002910
    if (ctx->r2 != ctx->r8) {
        // 0x4200285C: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_42002910;
    }
    // 0x4200285C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x42002860: bne         $v1, $zero, L_42002888
    if (ctx->r3 != 0) {
        // 0x42002864: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_42002888;
    }
    // 0x42002864: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002868: lw          $t1, 0x10($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X10);
    // 0x4200286C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002870: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x42002874: nop

    // 0x42002878: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x4200287C: nop

    // 0x42002880: bc1t        L_42002904
    if (c1cs) {
        // 0x42002884: sll         $t5, $v1, 4
        ctx->r13 = S32(ctx->r3 << 4);
            goto L_42002904;
    }
    // 0x42002884: sll         $t5, $v1, 4
    ctx->r13 = S32(ctx->r3 << 4);
L_42002888:
    // 0x42002888: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4200288C: bne         $v1, $at, L_420028B4
    if (ctx->r3 != ctx->r1) {
        // 0x42002890: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_420028B4;
    }
    // 0x42002890: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002894: lw          $t2, 0x10($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X10);
    // 0x42002898: nop

    // 0x4200289C: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x420028A0: nop

    // 0x420028A4: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x420028A8: nop

    // 0x420028AC: bc1t        L_42002900
    if (c1cs) {
        // 0x420028B0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_42002900;
    }
    // 0x420028B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_420028B4:
    // 0x420028B4: bne         $v1, $at, L_420028DC
    if (ctx->r3 != ctx->r1) {
        // 0x420028B8: nop
    
            goto L_420028DC;
    }
    // 0x420028B8: nop

    // 0x420028BC: lw          $t3, 0x10($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X10);
    // 0x420028C0: nop

    // 0x420028C4: lwc1        $f16, 0x8($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X8);
    // 0x420028C8: nop

    // 0x420028CC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x420028D0: nop

    // 0x420028D4: bc1t        L_42002904
    if (c1cs) {
        // 0x420028D8: sll         $t5, $v1, 4
        ctx->r13 = S32(ctx->r3 << 4);
            goto L_42002904;
    }
    // 0x420028D8: sll         $t5, $v1, 4
    ctx->r13 = S32(ctx->r3 << 4);
L_420028DC:
    // 0x420028DC: bne         $v1, $v0, L_42002914
    if (ctx->r3 != ctx->r2) {
        // 0x420028E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_42002914;
    }
    // 0x420028E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420028E4: lw          $t4, 0x10($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X10);
    // 0x420028E8: nop

    // 0x420028EC: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x420028F0: nop

    // 0x420028F4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x420028F8: nop

    // 0x420028FC: bc1f        L_42002910
    if (!c1cs) {
        // 0x42002900: sll         $t5, $v1, 4
        ctx->r13 = S32(ctx->r3 << 4);
            goto L_42002910;
    }
L_42002900:
    // 0x42002900: sll         $t5, $v1, 4
    ctx->r13 = S32(ctx->r3 << 4);
L_42002904:
    // 0x42002904: addu        $v0, $a3, $t5
    ctx->r2 = ADD32(ctx->r7, ctx->r13);
    // 0x42002908: swc1        $f0, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->f0.u32l;
    // 0x4200290C: swc1        $f0, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->f0.u32l;
L_42002910:
    // 0x42002910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_42002914:
    // 0x42002914: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x42002918: jr          $ra
    // 0x4200291C: nop

    return;
    // 0x4200291C: nop

;}
RECOMP_FUNC void ovl_blast_wind_2920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002920: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x42002924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002928: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x4200292C: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x42002930: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x42002934: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x42002938: jal         0x420006C4
    // 0x4200293C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    ovl_blast_wind_6C4(rdram, ctx);
        goto after_0;
    // 0x4200293C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    after_0:
    // 0x42002940: beq         $v0, $zero, L_42002954
    if (ctx->r2 == 0) {
        // 0x42002944: lw          $t7, 0x68($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X68);
            goto L_42002954;
    }
    // 0x42002944: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x42002948: b           L_42002B7C
    // 0x4200294C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_42002B7C;
    // 0x4200294C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x42002950: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
L_42002954:
    // 0x42002954: lw          $t9, 0x84($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X84);
    // 0x42002958: bne         $t7, $zero, L_42002B60
    if (ctx->r15 != 0) {
        // 0x4200295C: nop
    
            goto L_42002B60;
    }
    // 0x4200295C: nop

    // 0x42002960: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x42002964: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x42002968: bne         $t8, $at, L_4200297C
    if (ctx->r24 != ctx->r1) {
        // 0x4200296C: lw          $v1, 0x84($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X84);
            goto L_4200297C;
    }
    // 0x4200296C: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
    // 0x42002970: b           L_42002B7C
    // 0x42002974: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_42002B7C;
    // 0x42002974: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x42002978: lw          $v1, 0x84($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X84);
L_4200297C:
    // 0x4200297C: ori         $at, $zero, 0xA203
    ctx->r1 = 0 | 0XA203;
    // 0x42002980: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x42002984: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x42002988: bne         $v0, $at, L_420029A4
    if (ctx->r2 != ctx->r1) {
        // 0x4200298C: ori         $at, $zero, 0xA264
        ctx->r1 = 0 | 0XA264;
            goto L_420029A4;
    }
    // 0x4200298C: ori         $at, $zero, 0xA264
    ctx->r1 = 0 | 0XA264;
    // 0x42002990: lw          $t0, 0x68($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X68);
    // 0x42002994: nop

    // 0x42002998: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x4200299C: beq         $at, $zero, L_420029C4
    if (ctx->r1 == 0) {
        // 0x420029A0: ori         $at, $zero, 0xA264
        ctx->r1 = 0 | 0XA264;
            goto L_420029C4;
    }
    // 0x420029A0: ori         $at, $zero, 0xA264
    ctx->r1 = 0 | 0XA264;
L_420029A4:
    // 0x420029A4: beq         $v0, $at, L_420029C4
    if (ctx->r2 == ctx->r1) {
        // 0x420029A8: ori         $at, $zero, 0xA265
        ctx->r1 = 0 | 0XA265;
            goto L_420029C4;
    }
    // 0x420029A8: ori         $at, $zero, 0xA265
    ctx->r1 = 0 | 0XA265;
    // 0x420029AC: beq         $v0, $at, L_420029C4
    if (ctx->r2 == ctx->r1) {
        // 0x420029B0: ori         $at, $zero, 0xA266
        ctx->r1 = 0 | 0XA266;
            goto L_420029C4;
    }
    // 0x420029B0: ori         $at, $zero, 0xA266
    ctx->r1 = 0 | 0XA266;
    // 0x420029B4: beq         $v0, $at, L_420029C4
    if (ctx->r2 == ctx->r1) {
        // 0x420029B8: ori         $at, $zero, 0xA267
        ctx->r1 = 0 | 0XA267;
            goto L_420029C4;
    }
    // 0x420029B8: ori         $at, $zero, 0xA267
    ctx->r1 = 0 | 0XA267;
    // 0x420029BC: bne         $v0, $at, L_42002B58
    if (ctx->r2 != ctx->r1) {
        // 0x420029C0: nop
    
            goto L_42002B58;
    }
    // 0x420029C0: nop

L_420029C4:
    // 0x420029C4: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x420029C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x420029CC: jal         0x420006C4
    // 0x420029D0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_wind_6C4(rdram, ctx);
        goto after_1;
    // 0x420029D0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x420029D4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x420029D8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x420029DC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x420029E0: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x420029E4: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x420029E8: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x420029EC: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x420029F0: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x420029F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x420029F8: jal         0x420006C4
    // 0x420029FC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_wind_6C4(rdram, ctx);
        goto after_2;
    // 0x420029FC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x42002A00: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x42002A04: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002A08: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x42002A0C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x42002A10: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x42002A14: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x42002A18: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x42002A1C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x42002A20: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x42002A24: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x42002A28: jal         0x420017CC
    // 0x42002A2C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_blast_wind_17CC(rdram, ctx);
        goto after_3;
    // 0x42002A2C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x42002A30: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002A34: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x42002A38: lwc1        $f10, 0x4460($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X4460);
    // 0x42002A3C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x42002A40: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x42002A44: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x42002A48: bc1f        L_42002A58
    if (!c1cs) {
        // 0x42002A4C: addiu       $t7, $zero, 0x17
        ctx->r15 = ADD32(0, 0X17);
            goto L_42002A58;
    }
    // 0x42002A4C: addiu       $t7, $zero, 0x17
    ctx->r15 = ADD32(0, 0X17);
    // 0x42002A50: b           L_42002B7C
    // 0x42002A54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_42002B7C;
    // 0x42002A54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_42002A58:
    // 0x42002A58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42002A5C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x42002A60: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x42002A64: addiu       $t8, $sp, 0x58
    ctx->r24 = ADD32(ctx->r29, 0X58);
    // 0x42002A68: bc1f        L_42002A7C
    if (!c1cs) {
        // 0x42002A6C: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_42002A7C;
    }
    // 0x42002A6C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x42002A70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002A74: b           L_42002B00
    // 0x42002A78: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
        goto L_42002B00;
    // 0x42002A78: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_42002A7C:
    // 0x42002A7C: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x42002A80: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42002A84: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x42002A88: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x42002A8C: nop

    // 0x42002A90: bc1f        L_42002AA8
    if (!c1cs) {
        // 0x42002A94: nop
    
            goto L_42002AA8;
    }
    // 0x42002A94: nop

    // 0x42002A98: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x42002A9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42002AA0: b           L_42002B00
    // 0x42002AA4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
        goto L_42002B00;
    // 0x42002AA4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_42002AA8:
    // 0x42002AA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002AAC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002AB0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x42002AB4: nop

    // 0x42002AB8: bc1f        L_42002AD0
    if (!c1cs) {
        // 0x42002ABC: nop
    
            goto L_42002AD0;
    }
    // 0x42002ABC: nop

    // 0x42002AC0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x42002AC4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42002AC8: b           L_42002B00
    // 0x42002ACC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
        goto L_42002B00;
    // 0x42002ACC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_42002AD0:
    // 0x42002AD0: lwc1        $f6, 0x4464($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4464);
    // 0x42002AD4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x42002AD8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x42002ADC: nop

    // 0x42002AE0: bc1f        L_42002AF4
    if (!c1cs) {
        // 0x42002AE4: nop
    
            goto L_42002AF4;
    }
    // 0x42002AE4: nop

    // 0x42002AE8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42002AEC: b           L_42002B00
    // 0x42002AF0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
        goto L_42002B00;
    // 0x42002AF0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_42002AF4:
    // 0x42002AF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002AF8: nop

    // 0x42002AFC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_42002B00:
    // 0x42002B00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42002B04: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x42002B08: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x42002B0C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x42002B10: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x42002B14: swc1        $f10, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f10.u32l;
    // 0x42002B18: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x42002B1C: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x42002B20: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x42002B24: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x42002B28: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x42002B2C: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x42002B30: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x42002B34: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x42002B38: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x42002B3C: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x42002B40: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x42002B44: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x42002B48: jal         0x420017CC
    // 0x42002B4C: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    ovl_blast_wind_17CC(rdram, ctx);
        goto after_4;
    // 0x42002B4C: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    after_4:
    // 0x42002B50: b           L_42002B7C
    // 0x42002B54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_42002B7C;
    // 0x42002B54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_42002B58:
    // 0x42002B58: b           L_42002B7C
    // 0x42002B5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_42002B7C;
    // 0x42002B5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_42002B60:
    // 0x42002B60: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x42002B64: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x42002B68: andi        $t1, $t0, 0x7000
    ctx->r9 = ctx->r8 & 0X7000;
    // 0x42002B6C: bne         $t1, $at, L_42002B7C
    if (ctx->r9 != ctx->r1) {
        // 0x42002B70: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_42002B7C;
    }
    // 0x42002B70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x42002B74: b           L_42002B7C
    // 0x42002B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_42002B7C;
    // 0x42002B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_42002B7C:
    // 0x42002B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002B80: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x42002B84: jr          $ra
    // 0x42002B88: nop

    return;
    // 0x42002B88: nop

;}
RECOMP_FUNC void ovl_blast_wind_2B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002B8C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x42002B90: jr          $ra
    // 0x42002B94: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x42002B94: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_blast_wind_2B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002B98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x42002B9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42002BA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x42002BA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x42002BA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42002BAC: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002BB0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x42002BB4: bne         $t6, $at, L_42002C54
    if (ctx->r14 != ctx->r1) {
        // 0x42002BB8: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_42002C54;
    }
    // 0x42002BB8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x42002BBC: jal         0x42000F50
    // 0x42002BC0: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    ovl_blast_wind_F50(rdram, ctx);
        goto after_0;
    // 0x42002BC0: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    after_0:
    // 0x42002BC4: jal         0x42000F50
    // 0x42002BC8: addiu       $a0, $s2, 0x88
    ctx->r4 = ADD32(ctx->r18, 0X88);
    ovl_blast_wind_F50(rdram, ctx);
        goto after_1;
    // 0x42002BC8: addiu       $a0, $s2, 0x88
    ctx->r4 = ADD32(ctx->r18, 0X88);
    after_1:
    // 0x42002BCC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002BD0: addiu       $s1, $s2, 0xCC
    ctx->r17 = ADD32(ctx->r18, 0XCC);
L_42002BD4:
    // 0x42002BD4: jal         0x42000F50
    // 0x42002BD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_wind_F50(rdram, ctx);
        goto after_2;
    // 0x42002BD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x42002BDC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x42002BE0: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x42002BE4: bne         $at, $zero, L_42002BD4
    if (ctx->r1 != 0) {
        // 0x42002BE8: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_42002BD4;
    }
    // 0x42002BE8: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x42002BEC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002BF0: addiu       $s1, $s2, 0x108
    ctx->r17 = ADD32(ctx->r18, 0X108);
L_42002BF4:
    // 0x42002BF4: jal         0x42000F50
    // 0x42002BF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_wind_F50(rdram, ctx);
        goto after_3;
    // 0x42002BF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x42002BFC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x42002C00: slti        $at, $s0, 0x18
    ctx->r1 = SIGNED(ctx->r16) < 0X18 ? 1 : 0;
    // 0x42002C04: bne         $at, $zero, L_42002BF4
    if (ctx->r1 != 0) {
        // 0x42002C08: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_42002BF4;
    }
    // 0x42002C08: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x42002C0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002C10: addiu       $s1, $s2, 0x94
    ctx->r17 = ADD32(ctx->r18, 0X94);
L_42002C14:
    // 0x42002C14: jal         0x42000F50
    // 0x42002C18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_wind_F50(rdram, ctx);
        goto after_4;
    // 0x42002C18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x42002C1C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x42002C20: slti        $at, $s0, 0x20
    ctx->r1 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x42002C24: bne         $at, $zero, L_42002C14
    if (ctx->r1 != 0) {
        // 0x42002C28: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_42002C14;
    }
    // 0x42002C28: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x42002C2C: addiu       $s1, $s2, 0xB4
    ctx->r17 = ADD32(ctx->r18, 0XB4);
    // 0x42002C30: addiu       $s2, $zero, 0x18
    ctx->r18 = ADD32(0, 0X18);
    // 0x42002C34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_42002C38:
    // 0x42002C38: jal         0x42000F50
    // 0x42002C3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_wind_F50(rdram, ctx);
        goto after_5;
    // 0x42002C3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x42002C40: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x42002C44: bne         $s0, $s2, L_42002C38
    if (ctx->r16 != ctx->r18) {
        // 0x42002C48: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_42002C38;
    }
    // 0x42002C48: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x42002C4C: b           L_42002C88
    // 0x42002C50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_42002C88;
    // 0x42002C50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42002C54:
    // 0x42002C54: jal         0x42000F50
    // 0x42002C58: addiu       $a0, $s2, 0x7C
    ctx->r4 = ADD32(ctx->r18, 0X7C);
    ovl_blast_wind_F50(rdram, ctx);
        goto after_6;
    // 0x42002C58: addiu       $a0, $s2, 0x7C
    ctx->r4 = ADD32(ctx->r18, 0X7C);
    after_6:
    // 0x42002C5C: jal         0x42000F50
    // 0x42002C60: addiu       $a0, $s2, 0x88
    ctx->r4 = ADD32(ctx->r18, 0X88);
    ovl_blast_wind_F50(rdram, ctx);
        goto after_7;
    // 0x42002C60: addiu       $a0, $s2, 0x88
    ctx->r4 = ADD32(ctx->r18, 0X88);
    after_7:
    // 0x42002C64: addiu       $s1, $s2, 0x94
    ctx->r17 = ADD32(ctx->r18, 0X94);
    // 0x42002C68: addiu       $s2, $zero, 0x40
    ctx->r18 = ADD32(0, 0X40);
    // 0x42002C6C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_42002C70:
    // 0x42002C70: jal         0x42000F50
    // 0x42002C74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_wind_F50(rdram, ctx);
        goto after_8;
    // 0x42002C74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x42002C78: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x42002C7C: bne         $s0, $s2, L_42002C70
    if (ctx->r16 != ctx->r18) {
        // 0x42002C80: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_42002C70;
    }
    // 0x42002C80: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x42002C84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42002C88:
    // 0x42002C88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002C8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x42002C90: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x42002C94: jr          $ra
    // 0x42002C98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x42002C98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_wind_2C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002C9C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x42002CA0: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x42002CA4: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x42002CA8: lw          $v1, 0x4380($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4380);
    // 0x42002CAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42002CB0: bne         $a1, $at, L_42002CBC
    if (ctx->r5 != ctx->r1) {
        // 0x42002CB4: nop
    
            goto L_42002CBC;
    }
    // 0x42002CB4: nop

    // 0x42002CB8: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
L_42002CBC:
    // 0x42002CBC: jr          $ra
    // 0x42002CC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x42002CC0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_blast_wind_2CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002CCC: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002CD0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x42002CD4: bne         $t6, $at, L_42002CE8
    if (ctx->r14 != ctx->r1) {
        // 0x42002CD8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_42002CE8;
    }
    // 0x42002CD8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x42002CDC: addiu       $t7, $zero, 0x9B
    ctx->r15 = ADD32(0, 0X9B);
    // 0x42002CE0: b           L_42002D04
    // 0x42002CE4: sw          $t7, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r15;
        goto L_42002D04;
    // 0x42002CE4: sw          $t7, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r15;
L_42002CE8:
    // 0x42002CE8: lw          $a0, 0x74($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X74);
    // 0x42002CEC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x42002CF0: jal         0x42002C9C
    // 0x42002CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_blast_wind_2C9C(rdram, ctx);
        goto after_0;
    // 0x42002CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x42002CF8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x42002CFC: nop

    // 0x42002D00: sw          $v0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r2;
L_42002D04:
    // 0x42002D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002D08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002D0C: jr          $ra
    // 0x42002D10: nop

    return;
    // 0x42002D10: nop

;}
RECOMP_FUNC void ovl_blast_wind_2D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002D14: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42002D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002D1C: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002D20: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x42002D24: bne         $t6, $at, L_42002D58
    if (ctx->r14 != ctx->r1) {
        // 0x42002D28: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_42002D58;
    }
    // 0x42002D28: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x42002D2C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x42002D30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002D34: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x42002D38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002D3C: addiu       $t7, $zero, 0x23
    ctx->r15 = ADD32(0, 0X23);
    // 0x42002D40: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x42002D44: sw          $t7, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r15;
    // 0x42002D48: sw          $t8, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->r24;
    // 0x42002D4C: swc1        $f4, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f4.u32l;
    // 0x42002D50: b           L_42002DB4
    // 0x42002D54: swc1        $f6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f6.u32l;
        goto L_42002DB4;
    // 0x42002D54: swc1        $f6, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->f6.u32l;
L_42002D58:
    // 0x42002D58: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x42002D5C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x42002D60: jal         0x42001874
    // 0x42002D64: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_wind_1874(rdram, ctx);
        goto after_0;
    // 0x42002D64: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x42002D68: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42002D6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42002D70: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x42002D74: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x42002D78: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002D7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42002D80: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x42002D84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002D88: swc1        $f0, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = ctx->f0.u32l;
    // 0x42002D8C: swc1        $f10, 0x90($a3)
    MEM_W(0X90, ctx->r7) = ctx->f10.u32l;
    // 0x42002D90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42002D94: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x42002D98: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x42002D9C: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x42002DA0: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x42002DA4: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x42002DA8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x42002DAC: jal         0x420006C4
    // 0x42002DB0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_blast_wind_6C4(rdram, ctx);
        goto after_1;
    // 0x42002DB0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
L_42002DB4:
    // 0x42002DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002DB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x42002DBC: jr          $ra
    // 0x42002DC0: nop

    return;
    // 0x42002DC0: nop

;}
RECOMP_FUNC void ovl_blast_wind_2DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002DC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002DC8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x42002DCC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x42002DD0: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x42002DD4: jr          $ra
    // 0x42002DD8: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x42002DD8: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_blast_wind_2DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002DDC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002DE0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x42002DE4: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x42002DE8: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x42002DEC: jr          $ra
    // 0x42002DF0: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x42002DF0: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_blast_wind_2DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002DF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002DF8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x42002DFC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x42002E00: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x42002E04: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x42002E08: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x42002E0C: jr          $ra
    // 0x42002E10: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x42002E10: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_blast_wind_2E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002E14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42002E18: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x42002E1C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x42002E20: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x42002E24: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x42002E28: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x42002E2C: jr          $ra
    // 0x42002E30: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x42002E30: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_blast_wind_2E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002E34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002E38: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x42002E3C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x42002E40: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x42002E44: jr          $ra
    // 0x42002E48: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x42002E48: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_blast_wind_2E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002E4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x42002E50: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42002E54: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x42002E58: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x42002E5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42002E60: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002E64: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x42002E68: bne         $t6, $at, L_42002EA8
    if (ctx->r14 != ctx->r1) {
        // 0x42002E6C: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_42002EA8;
    }
    // 0x42002E6C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x42002E70: jal         0x42002DC4
    // 0x42002E74: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    ovl_blast_wind_2DC4(rdram, ctx);
        goto after_0;
    // 0x42002E74: addiu       $a0, $a0, 0x7C
    ctx->r4 = ADD32(ctx->r4, 0X7C);
    after_0:
    // 0x42002E78: jal         0x42002DDC
    // 0x42002E7C: addiu       $a0, $s2, 0x88
    ctx->r4 = ADD32(ctx->r18, 0X88);
    ovl_blast_wind_2DDC(rdram, ctx);
        goto after_1;
    // 0x42002E7C: addiu       $a0, $s2, 0x88
    ctx->r4 = ADD32(ctx->r18, 0X88);
    after_1:
    // 0x42002E80: addiu       $s1, $s2, 0x94
    ctx->r17 = ADD32(ctx->r18, 0X94);
    // 0x42002E84: addiu       $s2, $zero, 0x40
    ctx->r18 = ADD32(0, 0X40);
    // 0x42002E88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_42002E8C:
    // 0x42002E8C: jal         0x42002DF4
    // 0x42002E90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_wind_2DF4(rdram, ctx);
        goto after_2;
    // 0x42002E90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x42002E94: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x42002E98: bne         $s0, $s2, L_42002E8C
    if (ctx->r16 != ctx->r18) {
        // 0x42002E9C: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_42002E8C;
    }
    // 0x42002E9C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x42002EA0: b           L_42002F5C
    // 0x42002EA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_42002F5C;
    // 0x42002EA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42002EA8:
    // 0x42002EA8: jal         0x42002DC4
    // 0x42002EAC: addiu       $a0, $s2, 0x7C
    ctx->r4 = ADD32(ctx->r18, 0X7C);
    ovl_blast_wind_2DC4(rdram, ctx);
        goto after_3;
    // 0x42002EAC: addiu       $a0, $s2, 0x7C
    ctx->r4 = ADD32(ctx->r18, 0X7C);
    after_3:
    // 0x42002EB0: jal         0x42002DDC
    // 0x42002EB4: addiu       $a0, $s2, 0x88
    ctx->r4 = ADD32(ctx->r18, 0X88);
    ovl_blast_wind_2DDC(rdram, ctx);
        goto after_4;
    // 0x42002EB4: addiu       $a0, $s2, 0x88
    ctx->r4 = ADD32(ctx->r18, 0X88);
    after_4:
    // 0x42002EB8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x42002EBC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42002EC0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002EC4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x42002EC8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x42002ECC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
L_42002ED0:
    // 0x42002ED0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x42002ED4: slti        $at, $v1, 0x3
    ctx->r1 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x42002ED8: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x42002EDC: sw          $a0, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r4;
    // 0x42002EE0: swc1        $f0, 0xBC($v0)
    MEM_W(0XBC, ctx->r2) = ctx->f0.u32l;
    // 0x42002EE4: swc1        $f0, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = ctx->f0.u32l;
    // 0x42002EE8: swc1        $f0, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = ctx->f0.u32l;
    // 0x42002EEC: bne         $at, $zero, L_42002ED0
    if (ctx->r1 != 0) {
        // 0x42002EF0: swc1        $f2, 0xC8($v0)
        MEM_W(0XC8, ctx->r2) = ctx->f2.u32l;
            goto L_42002ED0;
    }
    // 0x42002EF0: swc1        $f2, 0xC8($v0)
    MEM_W(0XC8, ctx->r2) = ctx->f2.u32l;
    // 0x42002EF4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x42002EF8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_42002EFC:
    // 0x42002EFC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x42002F00: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x42002F04: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x42002F08: sw          $a0, 0xFC($v0)
    MEM_W(0XFC, ctx->r2) = ctx->r4;
    // 0x42002F0C: swc1        $f0, 0x100($v0)
    MEM_W(0X100, ctx->r2) = ctx->f0.u32l;
    // 0x42002F10: bne         $at, $zero, L_42002EFC
    if (ctx->r1 != 0) {
        // 0x42002F14: swc1        $f0, 0x104($v0)
        MEM_W(0X104, ctx->r2) = ctx->f0.u32l;
            goto L_42002EFC;
    }
    // 0x42002F14: swc1        $f0, 0x104($v0)
    MEM_W(0X104, ctx->r2) = ctx->f0.u32l;
    // 0x42002F18: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002F1C: addiu       $s1, $s2, 0x94
    ctx->r17 = ADD32(ctx->r18, 0X94);
L_42002F20:
    // 0x42002F20: jal         0x42002E14
    // 0x42002F24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_wind_2E14(rdram, ctx);
        goto after_5;
    // 0x42002F24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x42002F28: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x42002F2C: slti        $at, $s0, 0x20
    ctx->r1 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x42002F30: bne         $at, $zero, L_42002F20
    if (ctx->r1 != 0) {
        // 0x42002F34: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_42002F20;
    }
    // 0x42002F34: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x42002F38: addiu       $s1, $s2, 0xB4
    ctx->r17 = ADD32(ctx->r18, 0XB4);
    // 0x42002F3C: addiu       $s2, $zero, 0x18
    ctx->r18 = ADD32(0, 0X18);
    // 0x42002F40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_42002F44:
    // 0x42002F44: jal         0x42002E34
    // 0x42002F48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_wind_2E34(rdram, ctx);
        goto after_6;
    // 0x42002F48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x42002F4C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x42002F50: bne         $s0, $s2, L_42002F44
    if (ctx->r16 != ctx->r18) {
        // 0x42002F54: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_42002F44;
    }
    // 0x42002F54: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x42002F58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42002F5C:
    // 0x42002F5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002F60: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x42002F64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x42002F68: jr          $ra
    // 0x42002F6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x42002F6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_wind_2F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002F74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002F78: jal         0x42002710
    // 0x42002F7C: nop

    ovl_blast_wind_2710(rdram, ctx);
        goto after_0;
    // 0x42002F7C: nop

    after_0:
    // 0x42002F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002F88: jr          $ra
    // 0x42002F8C: nop

    return;
    // 0x42002F8C: nop

;}
RECOMP_FUNC void ovl_blast_wind_2F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002F90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x42002F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002F98: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x42002F9C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x42002FA0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x42002FA4: jal         0x42001104
    // 0x42002FA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_wind_1104(rdram, ctx);
        goto after_0;
    // 0x42002FA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42002FAC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x42002FB0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x42002FB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002FB8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x42002FBC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x42002FC0: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42002FC4: bc1t        L_42002FD0
    if (c1cs) {
        // 0x42002FC8: addiu       $a2, $sp, 0x1C
        ctx->r6 = ADD32(ctx->r29, 0X1C);
            goto L_42002FD0;
    }
    // 0x42002FC8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x42002FCC: swc1        $f0, 0x80($t6)
    MEM_W(0X80, ctx->r14) = ctx->f0.u32l;
L_42002FD0:
    // 0x42002FD0: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x42002FD4: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42002FD8: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x42002FDC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x42002FE0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x42002FE4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x42002FE8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x42002FEC: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x42002FF0: jal         0x42000F34
    // 0x42002FF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_1;
    // 0x42002FF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42002FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002FFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x42003000: jr          $ra
    // 0x42003004: nop

    return;
    // 0x42003004: nop

;}
RECOMP_FUNC void ovl_blast_wind_3008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003008: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x4200300C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x42003010: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003014: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x42003018: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x4200301C: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x42003020: bne         $a2, $a3, L_42003050
    if (ctx->r6 != ctx->r7) {
        // 0x42003024: sw          $a3, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r7;
            goto L_42003050;
    }
    // 0x42003024: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x42003028: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4200302C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003030: addiu       $a2, $zero, 0x1F9
    ctx->r6 = ADD32(0, 0X1F9);
    // 0x42003034: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x42003038: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x4200303C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x42003040: jal         0x42002F90
    // 0x42003044: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    ovl_blast_wind_2F90(rdram, ctx);
        goto after_0;
    // 0x42003044: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x42003048: b           L_42003074
    // 0x4200304C: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
        goto L_42003074;
    // 0x4200304C: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
L_42003050:
    // 0x42003050: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x42003054: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x42003058: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x4200305C: bne         $t8, $t9, L_42003070
    if (ctx->r24 != ctx->r25) {
        // 0x42003060: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_42003070;
    }
    // 0x42003060: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003064: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003068: jal         0x42000F34
    // 0x4200306C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_1;
    // 0x4200306C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_42003070:
    // 0x42003070: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
L_42003074:
    // 0x42003074: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x42003078: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x4200307C: bne         $t0, $t1, L_42003090
    if (ctx->r8 != ctx->r9) {
        // 0x42003080: lw          $t2, 0x78($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X78);
            goto L_42003090;
    }
    // 0x42003080: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x42003084: jal         0x42001208
    // 0x42003088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_wind_1208(rdram, ctx);
        goto after_2;
    // 0x42003088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x4200308C: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
L_42003090:
    // 0x42003090: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x42003094: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003098: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x4200309C: bne         $at, $zero, L_420032AC
    if (ctx->r1 != 0) {
        // 0x420030A0: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_420032AC;
    }
    // 0x420030A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x420030A4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x420030A8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x420030AC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x420030B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420030B4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x420030B8: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x420030BC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420030C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x420030C4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420030C8: beq         $a3, $zero, L_42003114
    if (ctx->r7 == 0) {
        // 0x420030CC: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_42003114;
    }
    // 0x420030CC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x420030D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x420030D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x420030D8: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x420030DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x420030E0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x420030E4: nop

    // 0x420030E8: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x420030EC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420030F0: nop

    // 0x420030F4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420030F8: bne         $a3, $zero, L_4200310C
    if (ctx->r7 != 0) {
        // 0x420030FC: nop
    
            goto L_4200310C;
    }
    // 0x420030FC: nop

    // 0x42003100: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x42003104: b           L_42003124
    // 0x42003108: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_42003124;
    // 0x42003108: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_4200310C:
    // 0x4200310C: b           L_42003124
    // 0x42003110: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_42003124;
    // 0x42003110: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_42003114:
    // 0x42003114: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x42003118: nop

    // 0x4200311C: bltz        $a3, L_4200310C
    if (SIGNED(ctx->r7) < 0) {
        // 0x42003120: nop
    
            goto L_4200310C;
    }
    // 0x42003120: nop

L_42003124:
    // 0x42003124: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x42003128: jal         0x42000F34
    // 0x4200312C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_3;
    // 0x4200312C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x42003130: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x42003134: nop

    // 0x42003138: slti        $at, $t5, 0xA
    ctx->r1 = SIGNED(ctx->r13) < 0XA ? 1 : 0;
    // 0x4200313C: beq         $at, $zero, L_42003180
    if (ctx->r1 == 0) {
        // 0x42003140: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_42003180;
    }
    // 0x42003140: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x42003144: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003148: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4200314C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003150: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003154: nop

    // 0x42003158: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4200315C: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x42003160: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003164: nop

    // 0x42003168: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x4200316C: nop

    // 0x42003170: bc1f        L_420031C0
    if (!c1cs) {
        // 0x42003174: lw          $t6, 0x70($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X70);
            goto L_420031C0;
    }
    // 0x42003174: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x42003178: b           L_420031BC
    // 0x4200317C: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
        goto L_420031BC;
    // 0x4200317C: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_42003180:
    // 0x42003180: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003184: lwc1        $f6, 0x4468($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4468);
    // 0x42003188: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x4200318C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x42003190: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x42003194: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x42003198: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x4200319C: nop

    // 0x420031A0: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x420031A4: nop

    // 0x420031A8: bc1f        L_420031C0
    if (!c1cs) {
        // 0x420031AC: lw          $t6, 0x70($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X70);
            goto L_420031C0;
    }
    // 0x420031AC: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x420031B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x420031B4: nop

    // 0x420031B8: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
L_420031BC:
    // 0x420031BC: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
L_420031C0:
    // 0x420031C0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x420031C4: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x420031C8: jal         0x420006C4
    // 0x420031CC: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_blast_wind_6C4(rdram, ctx);
        goto after_4;
    // 0x420031CC: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x420031D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420031D4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x420031D8: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x420031DC: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x420031E0: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x420031E4: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x420031E8: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x420031EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420031F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x420031F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x420031F8: addiu       $t8, $sp, 0x4C
    ctx->r24 = ADD32(ctx->r29, 0X4C);
    // 0x420031FC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x42003200: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x42003204: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x42003208: slti        $at, $t7, 0xA
    ctx->r1 = SIGNED(ctx->r15) < 0XA ? 1 : 0;
    // 0x4200320C: beq         $at, $zero, L_42003238
    if (ctx->r1 == 0) {
        // 0x42003210: addiu       $a2, $sp, 0x40
        ctx->r6 = ADD32(ctx->r29, 0X40);
            goto L_42003238;
    }
    // 0x42003210: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x42003214: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003218: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4200321C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x42003220: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42003224: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x42003228: jal         0x42000F34
    // 0x4200322C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_5;
    // 0x4200322C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_5:
    // 0x42003230: b           L_420032AC
    // 0x42003234: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_420032AC;
    // 0x42003234: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_42003238:
    // 0x42003238: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x4200323C: jal         0x42000F34
    // 0x42003240: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_6;
    // 0x42003240: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x42003244: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003248: lwc1        $f0, 0x446C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X446C);
    // 0x4200324C: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x42003250: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x42003254: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x42003258: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x4200325C: addiu       $t9, $sp, 0x4C
    ctx->r25 = ADD32(ctx->r29, 0X4C);
    // 0x42003260: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x42003264: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x42003268: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x4200326C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x42003270: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x42003274: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003278: addiu       $t0, $zero, 0x13
    ctx->r8 = ADD32(0, 0X13);
    // 0x4200327C: addiu       $t1, $sp, 0x40
    ctx->r9 = ADD32(ctx->r29, 0X40);
    // 0x42003280: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x42003284: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x42003288: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x4200328C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x42003290: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42003294: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x42003298: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x4200329C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x420032A0: jal         0x42000F34
    // 0x420032A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_7;
    // 0x420032A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_7:
    // 0x420032A8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_420032AC:
    // 0x420032AC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x420032B0: jr          $ra
    // 0x420032B4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x420032B4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_blast_wind_32B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420032B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x420032BC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x420032C0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x420032C4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x420032C8: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x420032CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x420032D0: bne         $a2, $a3, L_420032F4
    if (ctx->r6 != ctx->r7) {
        // 0x420032D4: sw          $a3, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r7;
            goto L_420032F4;
    }
    // 0x420032D4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x420032D8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x420032DC: addiu       $a2, $zero, 0x1ED
    ctx->r6 = ADD32(0, 0X1ED);
    // 0x420032E0: lui         $a3, 0xBF80
    ctx->r7 = S32(0XBF80 << 16);
    // 0x420032E4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x420032E8: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x420032EC: jal         0x42002F90
    // 0x420032F0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    ovl_blast_wind_2F90(rdram, ctx);
        goto after_0;
    // 0x420032F0: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    after_0:
L_420032F4:
    // 0x420032F4: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x420032F8: nop

    // 0x420032FC: slt         $at, $s1, $t7
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x42003300: bne         $at, $zero, L_42003354
    if (ctx->r1 != 0) {
        // 0x42003304: lw          $t8, 0x58($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X58);
            goto L_42003354;
    }
    // 0x42003304: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x42003308: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x4200330C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003310: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x42003314: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003318: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x4200331C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x42003320: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003324: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003328: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x4200332C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003330: jal         0x42000F34
    // 0x42003334: nop

    ovl_blast_wind_F34(rdram, ctx);
        goto after_1;
    // 0x42003334: nop

    after_1:
    // 0x42003338: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200333C: lwc1        $f16, 0x4470($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4470);
    // 0x42003340: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003344: nop

    // 0x42003348: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4200334C: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x42003350: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
L_42003354:
    // 0x42003354: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x42003358: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x4200335C: bne         $at, $zero, L_4200342C
    if (ctx->r1 != 0) {
        // 0x42003360: slt         $at, $s1, $t9
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
            goto L_4200342C;
    }
    // 0x42003360: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x42003364: beq         $at, $zero, L_4200342C
    if (ctx->r1 == 0) {
        // 0x42003368: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_4200342C;
    }
    // 0x42003368: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x4200336C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x42003370: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003374: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003378: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x4200337C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x42003380: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42003384: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003388: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x4200338C: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003390: beq         $a3, $zero, L_420033DC
    if (ctx->r7 == 0) {
        // 0x42003394: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_420033DC;
    }
    // 0x42003394: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x42003398: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4200339C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x420033A0: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x420033A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x420033A8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x420033AC: nop

    // 0x420033B0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x420033B4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420033B8: nop

    // 0x420033BC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420033C0: bne         $a3, $zero, L_420033D4
    if (ctx->r7 != 0) {
        // 0x420033C4: nop
    
            goto L_420033D4;
    }
    // 0x420033C4: nop

    // 0x420033C8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x420033CC: b           L_420033EC
    // 0x420033D0: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_420033EC;
    // 0x420033D0: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_420033D4:
    // 0x420033D4: b           L_420033EC
    // 0x420033D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_420033EC;
    // 0x420033D8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_420033DC:
    // 0x420033DC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x420033E0: nop

    // 0x420033E4: bltz        $a3, L_420033D4
    if (SIGNED(ctx->r7) < 0) {
        // 0x420033E8: nop
    
            goto L_420033D4;
    }
    // 0x420033E8: nop

L_420033EC:
    // 0x420033EC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x420033F0: jal         0x42000F34
    // 0x420033F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_2;
    // 0x420033F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x420033F8: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x420033FC: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x42003400: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003404: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x42003408: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x4200340C: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003410: nop

    // 0x42003414: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x42003418: nop

    // 0x4200341C: bc1f        L_42003534
    if (!c1cs) {
        // 0x42003420: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_42003534;
    }
    // 0x42003420: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003424: b           L_42003530
    // 0x42003428: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
        goto L_42003530;
    // 0x42003428: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
L_4200342C:
    // 0x4200342C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x42003430: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x42003434: bne         $s1, $t1, L_42003458
    if (ctx->r17 != ctx->r9) {
        // 0x42003438: slt         $at, $s1, $t2
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_42003458;
    }
    // 0x42003438: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x4200343C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003440: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003444: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003448: jal         0x42000F34
    // 0x4200344C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_3;
    // 0x4200344C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x42003450: b           L_42003534
    // 0x42003454: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_42003534;
    // 0x42003454: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42003458:
    // 0x42003458: bne         $at, $zero, L_42003530
    if (ctx->r1 != 0) {
        // 0x4200345C: addiu       $t3, $t2, 0x4
        ctx->r11 = ADD32(ctx->r10, 0X4);
            goto L_42003530;
    }
    // 0x4200345C: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x42003460: slt         $at, $t3, $s1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x42003464: bne         $at, $zero, L_42003530
    if (ctx->r1 != 0) {
        // 0x42003468: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_42003530;
    }
    // 0x42003468: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x4200346C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42003470: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003474: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003478: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x4200347C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42003480: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x42003484: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x42003488: nop

    // 0x4200348C: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x42003490: bne         $t5, $s1, L_420034A4
    if (ctx->r13 != ctx->r17) {
        // 0x42003494: nop
    
            goto L_420034A4;
    }
    // 0x42003494: nop

    // 0x42003498: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4200349C: nop

    // 0x420034A0: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
L_420034A4:
    // 0x420034A4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x420034A8: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x420034AC: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x420034B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420034B4: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x420034B8: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x420034BC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420034C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x420034C4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420034C8: beq         $a3, $zero, L_42003514
    if (ctx->r7 == 0) {
        // 0x420034CC: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_42003514;
    }
    // 0x420034CC: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x420034D0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x420034D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x420034D8: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x420034DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x420034E0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x420034E4: nop

    // 0x420034E8: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x420034EC: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x420034F0: nop

    // 0x420034F4: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420034F8: bne         $a3, $zero, L_4200350C
    if (ctx->r7 != 0) {
        // 0x420034FC: nop
    
            goto L_4200350C;
    }
    // 0x420034FC: nop

    // 0x42003500: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x42003504: b           L_42003524
    // 0x42003508: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_42003524;
    // 0x42003508: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_4200350C:
    // 0x4200350C: b           L_42003524
    // 0x42003510: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_42003524;
    // 0x42003510: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_42003514:
    // 0x42003514: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x42003518: nop

    // 0x4200351C: bltz        $a3, L_4200350C
    if (SIGNED(ctx->r7) < 0) {
        // 0x42003520: nop
    
            goto L_4200350C;
    }
    // 0x42003520: nop

L_42003524:
    // 0x42003524: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x42003528: jal         0x42000F34
    // 0x4200352C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_4;
    // 0x4200352C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_42003530:
    // 0x42003530: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42003534:
    // 0x42003534: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x42003538: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x4200353C: jr          $ra
    // 0x42003540: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x42003540: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_wind_3544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003544: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x42003548: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x4200354C: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x42003550: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x42003554: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42003558: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x4200355C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42003560: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x42003564: bne         $at, $zero, L_420037F0
    if (ctx->r1 != 0) {
        // 0x42003568: sw          $a2, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->r6;
            goto L_420037F0;
    }
    // 0x42003568: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x4200356C: bne         $a2, $a3, L_42003650
    if (ctx->r6 != ctx->r7) {
        // 0x42003570: lw          $t2, 0x88($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X88);
            goto L_42003650;
    }
    // 0x42003570: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x42003574: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x42003578: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4200357C: bne         $t7, $at, L_42003604
    if (ctx->r15 != ctx->r1) {
        // 0x42003580: addiu       $a2, $zero, 0x1F8
        ctx->r6 = ADD32(0, 0X1F8);
            goto L_42003604;
    }
    // 0x42003580: addiu       $a2, $zero, 0x1F8
    ctx->r6 = ADD32(0, 0X1F8);
    // 0x42003584: jal         0x42001104
    // 0x42003588: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_wind_1104(rdram, ctx);
        goto after_0;
    // 0x42003588: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x4200358C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x42003590: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003594: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003598: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x4200359C: jal         0x42000F34
    // 0x420035A0: addiu       $a3, $zero, 0x1F8
    ctx->r7 = ADD32(0, 0X1F8);
    ovl_blast_wind_F34(rdram, ctx);
        goto after_1;
    // 0x420035A0: addiu       $a3, $zero, 0x1F8
    ctx->r7 = ADD32(0, 0X1F8);
    after_1:
    // 0x420035A4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420035A8: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x420035AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x420035B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420035B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x420035B8: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x420035BC: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x420035C0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x420035C4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x420035C8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x420035CC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x420035D0: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x420035D4: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x420035D8: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x420035DC: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x420035E0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x420035E4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x420035E8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x420035EC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x420035F0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x420035F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x420035F8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x420035FC: jal         0x42000F34
    // 0x42003600: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_2;
    // 0x42003600: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_2:
L_42003604:
    // 0x42003604: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003608: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x4200360C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x42003610: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x42003614: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x42003618: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x4200361C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x42003620: jal         0x420017CC
    // 0x42003624: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    ovl_blast_wind_17CC(rdram, ctx);
        goto after_3;
    // 0x42003624: swc1        $f16, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x42003628: lwc1        $f0, 0xA0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x4200362C: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x42003630: nop

    // 0x42003634: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x42003638: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x4200363C: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x42003640: nop

    // 0x42003644: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x42003648: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
    // 0x4200364C: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
L_42003650:
    // 0x42003650: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x42003654: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x42003658: jal         0x42001874
    // 0x4200365C: nop

    ovl_blast_wind_1874(rdram, ctx);
        goto after_4;
    // 0x4200365C: nop

    after_4:
    // 0x42003660: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x42003664: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003668: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x4200366C: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x42003670: jal         0x42000F34
    // 0x42003674: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_5;
    // 0x42003674: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x42003678: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4200367C: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003680: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x42003684: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x42003688: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x4200368C: swc1        $f18, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f18.u32l;
    // 0x42003690: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x42003694: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x42003698: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4200369C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x420036A0: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x420036A4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420036A8: jal         0x42000F34
    // 0x420036AC: nop

    ovl_blast_wind_F34(rdram, ctx);
        goto after_6;
    // 0x420036AC: nop

    after_6:
    // 0x420036B0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x420036B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x420036B8: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x420036BC: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x420036C0: mul.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x420036C4: sll         $v1, $t0, 2
    ctx->r3 = S32(ctx->r8 << 2);
    // 0x420036C8: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x420036CC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x420036D0: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x420036D4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x420036D8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x420036DC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x420036E0: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    // 0x420036E4: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x420036E8: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x420036EC: addu        $a2, $v1, $t3
    ctx->r6 = ADD32(ctx->r3, ctx->r11);
    // 0x420036F0: jal         0x42000F94
    // 0x420036F4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    ovl_blast_wind_F94(rdram, ctx);
        goto after_7;
    // 0x420036F4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x420036F8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x420036FC: lui         $t7, 0x4200
    ctx->r15 = S32(0X4200 << 16);
    // 0x42003700: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x42003704: addiu       $t7, $t7, 0x44C0
    ctx->r15 = ADD32(ctx->r15, 0X44C0);
    // 0x42003708: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x4200370C: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x42003710: lwc1        $f0, 0x5C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x42003714: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x42003718: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x4200371C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003720: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003724: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x42003728: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x4200372C: addu        $a2, $t8, $v1
    ctx->r6 = ADD32(ctx->r24, ctx->r3);
    // 0x42003730: jal         0x42001038
    // 0x42003734: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_blast_wind_1038(rdram, ctx);
        goto after_8;
    // 0x42003734: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x42003738: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x4200373C: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x42003740: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x42003744: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42003748: beq         $t0, $at, L_42003770
    if (ctx->r8 == ctx->r1) {
        // 0x4200374C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_42003770;
    }
    // 0x4200374C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42003750: beq         $t0, $at, L_42003784
    if (ctx->r8 == ctx->r1) {
        // 0x42003754: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_42003784;
    }
    // 0x42003754: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x42003758: beq         $t0, $at, L_42003798
    if (ctx->r8 == ctx->r1) {
        // 0x4200375C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_42003798;
    }
    // 0x4200375C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x42003760: beq         $t0, $at, L_420037AC
    if (ctx->r8 == ctx->r1) {
        // 0x42003764: nop
    
            goto L_420037AC;
    }
    // 0x42003764: nop

    // 0x42003768: b           L_420037C0
    // 0x4200376C: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
        goto L_420037C0;
    // 0x4200376C: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
L_42003770:
    // 0x42003770: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x42003774: ori         $t9, $zero, 0xA264
    ctx->r25 = 0 | 0XA264;
    // 0x42003778: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x4200377C: b           L_420037BC
    // 0x42003780: sw          $t9, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r25;
        goto L_420037BC;
    // 0x42003780: sw          $t9, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r25;
L_42003784:
    // 0x42003784: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x42003788: ori         $t3, $zero, 0xA265
    ctx->r11 = 0 | 0XA265;
    // 0x4200378C: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x42003790: b           L_420037BC
    // 0x42003794: sw          $t3, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r11;
        goto L_420037BC;
    // 0x42003794: sw          $t3, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r11;
L_42003798:
    // 0x42003798: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x4200379C: ori         $t7, $zero, 0xA266
    ctx->r15 = 0 | 0XA266;
    // 0x420037A0: addu        $t8, $t4, $v1
    ctx->r24 = ADD32(ctx->r12, ctx->r3);
    // 0x420037A4: b           L_420037BC
    // 0x420037A8: sw          $t7, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r15;
        goto L_420037BC;
    // 0x420037A8: sw          $t7, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r15;
L_420037AC:
    // 0x420037AC: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x420037B0: ori         $t1, $zero, 0xA267
    ctx->r9 = 0 | 0XA267;
    // 0x420037B4: addu        $t2, $t9, $v1
    ctx->r10 = ADD32(ctx->r25, ctx->r3);
    // 0x420037B8: sw          $t1, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r9;
L_420037BC:
    // 0x420037BC: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
L_420037C0:
    // 0x420037C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x420037C4: lw          $a0, 0x74($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X74);
    // 0x420037C8: jal         0x42002C9C
    // 0x420037CC: nop

    ovl_blast_wind_2C9C(rdram, ctx);
        goto after_9;
    // 0x420037CC: nop

    after_9:
    // 0x420037D0: lw          $t3, 0x90($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X90);
    // 0x420037D4: nop

    // 0x420037D8: bne         $v0, $t3, L_420037F4
    if (ctx->r2 != ctx->r11) {
        // 0x420037DC: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_420037F4;
    }
    // 0x420037DC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x420037E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x420037E4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x420037E8: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x420037EC: swc1        $f8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f8.u32l;
L_420037F0:
    // 0x420037F0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_420037F4:
    // 0x420037F4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x420037F8: jr          $ra
    // 0x420037FC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x420037FC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_blast_wind_3800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003800: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42003804: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x42003808: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x4200380C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x42003810: lw          $s1, 0x68($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X68);
    // 0x42003814: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003818: addiu       $t6, $zero, 0x23
    ctx->r14 = ADD32(0, 0X23);
    // 0x4200381C: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x42003820: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x42003824: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x42003828: addiu       $a1, $s0, 0x7C
    ctx->r5 = ADD32(ctx->r16, 0X7C);
    // 0x4200382C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003830: jal         0x42003008
    // 0x42003834: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_wind_3008(rdram, ctx);
        goto after_0;
    // 0x42003834: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x42003838: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4200383C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42003840: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x42003844: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x42003848: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x4200384C: addiu       $t1, $zero, 0x1A
    ctx->r9 = ADD32(0, 0X1A);
    // 0x42003850: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x42003854: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x42003858: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x4200385C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x42003860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003864: addiu       $a1, $s0, 0x88
    ctx->r5 = ADD32(ctx->r16, 0X88);
    // 0x42003868: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x4200386C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x42003870: jal         0x420032B8
    // 0x42003874: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    ovl_blast_wind_32B8(rdram, ctx);
        goto after_1;
    // 0x42003874: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x42003878: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4200387C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003880: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003884: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003888: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x4200388C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x42003890: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x42003894: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x42003898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4200389C: addiu       $a1, $s0, 0x94
    ctx->r5 = ADD32(ctx->r16, 0X94);
    // 0x420038A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x420038A4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x420038A8: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x420038AC: jal         0x42003544
    // 0x420038B0: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    ovl_blast_wind_3544(rdram, ctx);
        goto after_2;
    // 0x420038B0: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x420038B4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x420038B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x420038BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x420038C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x420038C4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x420038C8: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x420038CC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x420038D0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x420038D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420038D8: addiu       $a1, $s0, 0xA4
    ctx->r5 = ADD32(ctx->r16, 0XA4);
    // 0x420038DC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x420038E0: lui         $a3, 0x42B4
    ctx->r7 = S32(0X42B4 << 16);
    // 0x420038E4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x420038E8: jal         0x42003544
    // 0x420038EC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    ovl_blast_wind_3544(rdram, ctx);
        goto after_3;
    // 0x420038EC: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x420038F0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x420038F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x420038F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x420038FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42003900: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x42003904: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x42003908: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x4200390C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x42003910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003914: addiu       $a1, $s0, 0xB4
    ctx->r5 = ADD32(ctx->r16, 0XB4);
    // 0x42003918: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x4200391C: lui         $a3, 0x4334
    ctx->r7 = S32(0X4334 << 16);
    // 0x42003920: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x42003924: jal         0x42003544
    // 0x42003928: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    ovl_blast_wind_3544(rdram, ctx);
        goto after_4;
    // 0x42003928: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x4200392C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x42003930: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003934: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003938: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4200393C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x42003940: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x42003944: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x42003948: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x4200394C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003950: addiu       $a1, $s0, 0xC4
    ctx->r5 = ADD32(ctx->r16, 0XC4);
    // 0x42003954: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x42003958: lui         $a3, 0x4387
    ctx->r7 = S32(0X4387 << 16);
    // 0x4200395C: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x42003960: jal         0x42003544
    // 0x42003964: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    ovl_blast_wind_3544(rdram, ctx);
        goto after_5;
    // 0x42003964: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x42003968: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4200396C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x42003970: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x42003974: jr          $ra
    // 0x42003978: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x42003978: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_blast_wind_397C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200397C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42003980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42003984: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42003988: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4200398C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x42003990: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x42003994: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42003998: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4200399C: jal         0x420006C4
    // 0x420039A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_blast_wind_6C4(rdram, ctx);
        goto after_0;
    // 0x420039A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x420039A4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x420039A8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x420039AC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x420039B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x420039B4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x420039B8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x420039BC: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x420039C0: jal         0x42001104
    // 0x420039C4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    ovl_blast_wind_1104(rdram, ctx);
        goto after_1;
    // 0x420039C4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x420039C8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x420039CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420039D0: nop

    // 0x420039D4: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x420039D8: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x420039DC: swc1        $f0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f0.u32l;
    // 0x420039E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420039E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x420039E8: jr          $ra
    // 0x420039EC: nop

    return;
    // 0x420039EC: nop

;}
RECOMP_FUNC void ovl_blast_wind_39F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420039F0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420039F4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x420039F8: lwc1        $f1, 0x4478($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X4478);
    // 0x420039FC: lwc1        $f0, 0x447C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X447C);
    // 0x42003A00: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42003A04: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x42003A08: mul.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f8.d);
    // 0x42003A0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42003A10: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x42003A14: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x42003A18: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x42003A1C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x42003A20: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x42003A24: add.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d + ctx->f10.d;
    // 0x42003A28: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x42003A2C: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x42003A30: mul.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x42003A34: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x42003A38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003A3C: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x42003A40: swc1        $f18, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f18.u32l;
    // 0x42003A44: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x42003A48: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x42003A4C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x42003A50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003A54: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    // 0x42003A58: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x42003A5C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x42003A60: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x42003A64: mul.d       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x42003A68: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x42003A6C: add.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d + ctx->f16.d;
    // 0x42003A70: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x42003A74: swc1        $f4, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f4.u32l;
    // 0x42003A78: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003A7C: jal         0x42000F34
    // 0x42003A80: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    ovl_blast_wind_F34(rdram, ctx);
        goto after_0;
    // 0x42003A80: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_0:
    // 0x42003A84: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x42003A88: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x42003A8C: slti        $at, $t6, 0x2D
    ctx->r1 = SIGNED(ctx->r14) < 0X2D ? 1 : 0;
    // 0x42003A90: beq         $at, $zero, L_42003AF8
    if (ctx->r1 == 0) {
        // 0x42003A94: addiu       $a2, $s0, 0x4
        ctx->r6 = ADD32(ctx->r16, 0X4);
            goto L_42003AF8;
    }
    // 0x42003A94: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x42003A98: lwc1        $f0, 0x58($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X58);
    // 0x42003A9C: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x42003AA0: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x42003AA4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42003AA8: nop

    // 0x42003AAC: bc1f        L_42003B48
    if (!c1cs) {
        // 0x42003AB0: nop
    
            goto L_42003B48;
    }
    // 0x42003AB0: nop

    // 0x42003AB4: add.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x42003AB8: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x42003ABC: nop

    // 0x42003AC0: bc1f        L_42003AD8
    if (!c1cs) {
        // 0x42003AC4: nop
    
            goto L_42003AD8;
    }
    // 0x42003AC4: nop

    // 0x42003AC8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x42003ACC: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x42003AD0: b           L_42003B48
    // 0x42003AD4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
        goto L_42003B48;
    // 0x42003AD4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
L_42003AD8:
    // 0x42003AD8: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x42003ADC: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42003AE0: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x42003AE4: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x42003AE8: add.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x42003AEC: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x42003AF0: b           L_42003B48
    // 0x42003AF4: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
        goto L_42003B48;
    // 0x42003AF4: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
L_42003AF8:
    // 0x42003AF8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003AFC: lwc1        $f12, 0x4480($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X4480);
    // 0x42003B00: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x42003B04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003B08: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x42003B0C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42003B10: nop

    // 0x42003B14: bc1f        L_42003B2C
    if (!c1cs) {
        // 0x42003B18: nop
    
            goto L_42003B2C;
    }
    // 0x42003B18: nop

    // 0x42003B1C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x42003B20: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x42003B24: b           L_42003B48
    // 0x42003B28: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
        goto L_42003B48;
    // 0x42003B28: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
L_42003B2C:
    // 0x42003B2C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x42003B30: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42003B34: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x42003B38: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x42003B3C: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x42003B40: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x42003B44: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
L_42003B48:
    // 0x42003B48: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003B4C: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x42003B50: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x42003B54: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x42003B58: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x42003B5C: jal         0x42000F34
    // 0x42003B60: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_1;
    // 0x42003B60: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_1:
    // 0x42003B64: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003B68: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x42003B6C: jr          $ra
    // 0x42003B70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x42003B70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_wind_3B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003B74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42003B78: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x42003B7C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x42003B80: slti        $at, $a1, 0xF
    ctx->r1 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x42003B84: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003B88: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x42003B8C: bne         $at, $zero, L_42003C94
    if (ctx->r1 != 0) {
        // 0x42003B90: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_42003C94;
    }
    // 0x42003B90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42003B94: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x42003B98: bne         $a1, $at, L_42003BD4
    if (ctx->r5 != ctx->r1) {
        // 0x42003B9C: addiu       $a2, $zero, 0x1F4
        ctx->r6 = ADD32(0, 0X1F4);
            goto L_42003BD4;
    }
    // 0x42003B9C: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x42003BA0: addiu       $a1, $s0, 0xCC
    ctx->r5 = ADD32(ctx->r16, 0XCC);
    // 0x42003BA4: jal         0x4200397C
    // 0x42003BA8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    ovl_blast_wind_397C(rdram, ctx);
        goto after_0;
    // 0x42003BA8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_0:
    // 0x42003BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003BB0: addiu       $a1, $s0, 0xE0
    ctx->r5 = ADD32(ctx->r16, 0XE0);
    // 0x42003BB4: addiu       $a2, $zero, 0x1F4
    ctx->r6 = ADD32(0, 0X1F4);
    // 0x42003BB8: jal         0x4200397C
    // 0x42003BBC: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    ovl_blast_wind_397C(rdram, ctx);
        goto after_1;
    // 0x42003BBC: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    after_1:
    // 0x42003BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003BC4: addiu       $a1, $s0, 0xF4
    ctx->r5 = ADD32(ctx->r16, 0XF4);
    // 0x42003BC8: addiu       $a2, $zero, 0x1F5
    ctx->r6 = ADD32(0, 0X1F5);
    // 0x42003BCC: jal         0x4200397C
    // 0x42003BD0: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    ovl_blast_wind_397C(rdram, ctx);
        goto after_2;
    // 0x42003BD0: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    after_2:
L_42003BD4:
    // 0x42003BD4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003BD8: lwc1        $f4, 0x4484($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4484);
    // 0x42003BDC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003BE0: lwc1        $f6, 0x4488($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4488);
    // 0x42003BE4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x42003BE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003BEC: lui         $a2, 0x3C23
    ctx->r6 = S32(0X3C23 << 16);
    // 0x42003BF0: addiu       $t6, $s0, 0xF4
    ctx->r14 = ADD32(ctx->r16, 0XF4);
    // 0x42003BF4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x42003BF8: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x42003BFC: addiu       $a0, $s0, 0xCC
    ctx->r4 = ADD32(ctx->r16, 0XCC);
    // 0x42003C00: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003C04: lui         $a3, 0x4140
    ctx->r7 = S32(0X4140 << 16);
    // 0x42003C08: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x42003C0C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x42003C10: jal         0x420039F0
    // 0x42003C14: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    ovl_blast_wind_39F0(rdram, ctx);
        goto after_3;
    // 0x42003C14: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x42003C18: slti        $at, $s1, 0x19
    ctx->r1 = SIGNED(ctx->r17) < 0X19 ? 1 : 0;
    // 0x42003C1C: bne         $at, $zero, L_42003C54
    if (ctx->r1 != 0) {
        // 0x42003C20: addiu       $a0, $s0, 0xE0
        ctx->r4 = ADD32(ctx->r16, 0XE0);
            goto L_42003C54;
    }
    // 0x42003C20: addiu       $a0, $s0, 0xE0
    ctx->r4 = ADD32(ctx->r16, 0XE0);
    // 0x42003C24: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003C28: lwc1        $f10, 0x448C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X448C);
    // 0x42003C2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003C30: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x42003C34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42003C38: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x42003C3C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003C40: lui         $a3, 0x41C0
    ctx->r7 = S32(0X41C0 << 16);
    // 0x42003C44: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x42003C48: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x42003C4C: jal         0x420039F0
    // 0x42003C50: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    ovl_blast_wind_39F0(rdram, ctx);
        goto after_4;
    // 0x42003C50: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_4:
L_42003C54:
    // 0x42003C54: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003C58: lwc1        $f18, 0x4490($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4490);
    // 0x42003C5C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003C60: lwc1        $f4, 0x4494($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4494);
    // 0x42003C64: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x42003C68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003C6C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x42003C70: lui         $a2, 0x3A83
    ctx->r6 = S32(0X3A83 << 16);
    // 0x42003C74: lui         $a3, 0x4183
    ctx->r7 = S32(0X4183 << 16);
    // 0x42003C78: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x42003C7C: ori         $a2, $a2, 0x126F
    ctx->r6 = ctx->r6 | 0X126F;
    // 0x42003C80: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x42003C84: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x42003C88: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x42003C8C: jal         0x420039F0
    // 0x42003C90: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    ovl_blast_wind_39F0(rdram, ctx);
        goto after_5;
    // 0x42003C90: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    after_5:
L_42003C94:
    // 0x42003C94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003C98: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x42003C9C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x42003CA0: jr          $ra
    // 0x42003CA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x42003CA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_blast_wind_3CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003CA8: jr          $ra
    // 0x42003CAC: nop

    return;
    // 0x42003CAC: nop

    // 0x42003CB0: jr          $ra
    // 0x42003CB4: nop

    return;
    // 0x42003CB4: nop

    // 0x42003CB8: jr          $ra
    // 0x42003CBC: nop

    return;
    // 0x42003CBC: nop

;}
RECOMP_FUNC void ovl_blast_wind_3CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003CC0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x42003CC4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x42003CC8: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x42003CCC: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x42003CD0: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x42003CD4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003CD8: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x42003CDC: bne         $at, $zero, L_42003E80
    if (ctx->r1 != 0) {
        // 0x42003CE0: or          $s1, $a2, $zero
        ctx->r17 = ctx->r6 | 0;
            goto L_42003E80;
    }
    // 0x42003CE0: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x42003CE4: bne         $a2, $v0, L_42003DFC
    if (ctx->r6 != ctx->r2) {
        // 0x42003CE8: addiu       $t9, $v0, 0xA
        ctx->r25 = ADD32(ctx->r2, 0XA);
            goto L_42003DFC;
    }
    // 0x42003CE8: addiu       $t9, $v0, 0xA
    ctx->r25 = ADD32(ctx->r2, 0XA);
    // 0x42003CEC: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x42003CF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x42003CF4: bne         $a1, $at, L_42003D28
    if (ctx->r5 != ctx->r1) {
        // 0x42003CF8: addiu       $a2, $zero, 0x7B3
        ctx->r6 = ADD32(0, 0X7B3);
            goto L_42003D28;
    }
    // 0x42003CF8: addiu       $a2, $zero, 0x7B3
    ctx->r6 = ADD32(0, 0X7B3);
    // 0x42003CFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x42003D00: jal         0x42001104
    // 0x42003D04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_wind_1104(rdram, ctx);
        goto after_0;
    // 0x42003D04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003D08: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x42003D0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x42003D10: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x42003D14: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x42003D18: jal         0x42000F34
    // 0x42003D1C: addiu       $a3, $zero, 0x7B3
    ctx->r7 = ADD32(0, 0X7B3);
    ovl_blast_wind_F34(rdram, ctx);
        goto after_1;
    // 0x42003D1C: addiu       $a3, $zero, 0x7B3
    ctx->r7 = ADD32(0, 0X7B3);
    after_1:
    // 0x42003D20: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003D24: nop

L_42003D28:
    // 0x42003D28: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x42003D2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003D30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003D34: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003D38: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x42003D3C: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x42003D40: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x42003D44: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x42003D48: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x42003D4C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x42003D50: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x42003D54: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x42003D58: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x42003D5C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x42003D60: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x42003D64: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x42003D68: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x42003D6C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42003D70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x42003D74: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x42003D78: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x42003D7C: jal         0x42000F34
    // 0x42003D80: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_2;
    // 0x42003D80: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_2:
    // 0x42003D84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42003D88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42003D8C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003D90: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x42003D94: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x42003D98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003D9C: jal         0x42000F34
    // 0x42003DA0: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_3;
    // 0x42003DA0: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    after_3:
    // 0x42003DA4: jal         0x42000340
    // 0x42003DA8: nop

    ovl_blast_wind_340(rdram, ctx);
        goto after_4;
    // 0x42003DA8: nop

    after_4:
    // 0x42003DAC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x42003DB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42003DB4: cvt.s.d     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f18.fl = CVT_S_D(ctx->f0.d);
    // 0x42003DB8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003DBC: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x42003DC0: lwc1        $f11, 0x4498($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X4498);
    // 0x42003DC4: lwc1        $f10, 0x449C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X449C);
    // 0x42003DC8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x42003DCC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x42003DD0: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x42003DD4: addiu       $a2, $sp, 0x6C
    ctx->r6 = ADD32(ctx->r29, 0X6C);
    // 0x42003DD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003DDC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x42003DE0: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x42003DE4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003DE8: jal         0x42000F34
    // 0x42003DEC: nop

    ovl_blast_wind_F34(rdram, ctx);
        goto after_5;
    // 0x42003DEC: nop

    after_5:
    // 0x42003DF0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x42003DF4: nop

    // 0x42003DF8: addiu       $t9, $v0, 0xA
    ctx->r25 = ADD32(ctx->r2, 0XA);
L_42003DFC:
    // 0x42003DFC: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x42003E00: beq         $at, $zero, L_42003E80
    if (ctx->r1 == 0) {
        // 0x42003E04: lui         $at, 0x4200
        ctx->r1 = S32(0X4200 << 16);
            goto L_42003E80;
    }
    // 0x42003E04: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003E08: lwc1        $f6, 0x44A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X44A0);
    // 0x42003E0C: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003E10: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003E14: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42003E18: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x42003E1C: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x42003E20: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003E24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003E28: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    // 0x42003E2C: lwc1        $f16, 0x68($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X68);
    // 0x42003E30: nop

    // 0x42003E34: swc1        $f16, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f16.u32l;
    // 0x42003E38: swc1        $f16, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f16.u32l;
    // 0x42003E3C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003E40: jal         0x42000F34
    // 0x42003E44: nop

    ovl_blast_wind_F34(rdram, ctx);
        goto after_6;
    // 0x42003E44: nop

    after_6:
    // 0x42003E48: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x42003E4C: slti        $at, $s1, 0x87
    ctx->r1 = SIGNED(ctx->r17) < 0X87 ? 1 : 0;
    // 0x42003E50: addiu       $t0, $v0, 0x9
    ctx->r8 = ADD32(ctx->r2, 0X9);
    // 0x42003E54: bne         $s1, $t0, L_42003E84
    if (ctx->r17 != ctx->r8) {
        // 0x42003E58: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_42003E84;
    }
    // 0x42003E58: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x42003E5C: beq         $at, $zero, L_42003E70
    if (ctx->r1 == 0) {
        // 0x42003E60: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_42003E70;
    }
    // 0x42003E60: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003E64: addiu       $t1, $v0, 0xA
    ctx->r9 = ADD32(ctx->r2, 0XA);
    // 0x42003E68: b           L_42003E80
    // 0x42003E6C: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
        goto L_42003E80;
    // 0x42003E6C: sw          $t1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r9;
L_42003E70:
    // 0x42003E70: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003E74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003E78: jal         0x42000F34
    // 0x42003E7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_7;
    // 0x42003E7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
L_42003E80:
    // 0x42003E80: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_42003E84:
    // 0x42003E84: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x42003E88: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x42003E8C: jr          $ra
    // 0x42003E90: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x42003E90: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_blast_wind_3E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003E94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x42003E98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x42003E9C: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x42003EA0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003EA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42003EA8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x42003EAC: bne         $at, $zero, L_420040D0
    if (ctx->r1 != 0) {
        // 0x42003EB0: sw          $a3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r7;
            goto L_420040D0;
    }
    // 0x42003EB0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x42003EB4: bne         $a2, $a3, L_42003F64
    if (ctx->r6 != ctx->r7) {
        // 0x42003EB8: addiu       $a2, $zero, 0x1ED
        ctx->r6 = ADD32(0, 0X1ED);
            goto L_42003F64;
    }
    // 0x42003EB8: addiu       $a2, $zero, 0x1ED
    ctx->r6 = ADD32(0, 0X1ED);
    // 0x42003EBC: jal         0x42001104
    // 0x42003EC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_wind_1104(rdram, ctx);
        goto after_0;
    // 0x42003EC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003EC4: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x42003EC8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x42003ECC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003ED0: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003ED4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003ED8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42003EDC: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x42003EE0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003EE4: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003EE8: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42003EEC: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003EF0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42003EF4: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x42003EF8: beq         $a3, $zero, L_42003F48
    if (ctx->r7 == 0) {
        // 0x42003EFC: swc1        $f4, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
            goto L_42003F48;
    }
    // 0x42003EFC: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x42003F00: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x42003F04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003F08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003F0C: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x42003F10: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x42003F14: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003F18: nop

    // 0x42003F1C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x42003F20: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42003F24: nop

    // 0x42003F28: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003F2C: bne         $a3, $zero, L_42003F40
    if (ctx->r7 != 0) {
        // 0x42003F30: nop
    
            goto L_42003F40;
    }
    // 0x42003F30: nop

    // 0x42003F34: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x42003F38: b           L_42003F58
    // 0x42003F3C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_42003F58;
    // 0x42003F3C: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_42003F40:
    // 0x42003F40: b           L_42003F58
    // 0x42003F44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_42003F58;
    // 0x42003F44: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_42003F48:
    // 0x42003F48: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x42003F4C: nop

    // 0x42003F50: bltz        $a3, L_42003F40
    if (SIGNED(ctx->r7) < 0) {
        // 0x42003F54: nop
    
            goto L_42003F40;
    }
    // 0x42003F54: nop

L_42003F58:
    // 0x42003F58: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x42003F5C: jal         0x42000F34
    // 0x42003F60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_1;
    // 0x42003F60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_42003F64:
    // 0x42003F64: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x42003F68: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x42003F6C: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x42003F70: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x42003F74: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x42003F78: beq         $at, $zero, L_42003FD8
    if (ctx->r1 == 0) {
        // 0x42003F7C: lw          $t2, 0x40($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X40);
            goto L_42003FD8;
    }
    // 0x42003F7C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x42003F80: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x42003F84: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x42003F88: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x42003F8C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x42003F90: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003F94: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x42003F98: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003F9C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x42003FA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42003FA4: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x42003FA8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x42003FAC: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003FB0: nop

    // 0x42003FB4: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x42003FB8: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x42003FBC: nop

    // 0x42003FC0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    // 0x42003FC4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x42003FC8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003FCC: jal         0x42000F34
    // 0x42003FD0: nop

    ovl_blast_wind_F34(rdram, ctx);
        goto after_2;
    // 0x42003FD0: nop

    after_2:
    // 0x42003FD4: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
L_42003FD8:
    // 0x42003FD8: nop

    // 0x42003FDC: slti        $at, $t2, 0x87
    ctx->r1 = SIGNED(ctx->r10) < 0X87 ? 1 : 0;
    // 0x42003FE0: bne         $at, $zero, L_420040D4
    if (ctx->r1 != 0) {
        // 0x42003FE4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_420040D4;
    }
    // 0x42003FE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42003FE8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x42003FEC: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003FF0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003FF4: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42003FF8: nop

    // 0x42003FFC: bc1f        L_420040D4
    if (!c1cs) {
        // 0x42004000: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_420040D4;
    }
    // 0x42004000: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42004004: lwc1        $f16, 0x44A4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X44A4);
    // 0x42004008: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x4200400C: sub.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x42004010: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42004014: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x42004018: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x4200401C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42004020: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x42004024: nop

    // 0x42004028: bc1f        L_42004044
    if (!c1cs) {
        // 0x4200402C: nop
    
            goto L_42004044;
    }
    // 0x4200402C: nop

    // 0x42004030: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42004034: jal         0x42000F34
    // 0x42004038: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_3;
    // 0x42004038: swc1        $f2, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f2.u32l;
    after_3:
    // 0x4200403C: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42004040: nop

L_42004044:
    // 0x42004044: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x42004048: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x4200404C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42004050: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42004054: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x42004058: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x4200405C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42004060: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42004064: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42004068: beq         $a3, $zero, L_420040B4
    if (ctx->r7 == 0) {
        // 0x4200406C: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_420040B4;
    }
    // 0x4200406C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x42004070: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42004074: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42004078: sub.s       $f18, $f0, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x4200407C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x42004080: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42004084: nop

    // 0x42004088: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x4200408C: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x42004090: nop

    // 0x42004094: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42004098: bne         $a3, $zero, L_420040AC
    if (ctx->r7 != 0) {
        // 0x4200409C: nop
    
            goto L_420040AC;
    }
    // 0x4200409C: nop

    // 0x420040A0: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x420040A4: b           L_420040C4
    // 0x420040A8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_420040C4;
    // 0x420040A8: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_420040AC:
    // 0x420040AC: b           L_420040C4
    // 0x420040B0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_420040C4;
    // 0x420040B0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_420040B4:
    // 0x420040B4: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x420040B8: nop

    // 0x420040BC: bltz        $a3, L_420040AC
    if (SIGNED(ctx->r7) < 0) {
        // 0x420040C0: nop
    
            goto L_420040AC;
    }
    // 0x420040C0: nop

L_420040C4:
    // 0x420040C4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x420040C8: jal         0x42000F34
    // 0x420040CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_wind_F34(rdram, ctx);
        goto after_4;
    // 0x420040CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_420040D0:
    // 0x420040D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_420040D4:
    // 0x420040D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x420040D8: jr          $ra
    // 0x420040DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x420040DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_blast_wind_40E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420040E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x420040E4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x420040E8: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x420040EC: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x420040F0: lw          $s1, 0x68($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X68);
    // 0x420040F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x420040F8: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x420040FC: addiu       $t7, $zero, 0xF
    ctx->r15 = ADD32(0, 0XF);
    // 0x42004100: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x42004104: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x42004108: addiu       $a1, $s0, 0x7C
    ctx->r5 = ADD32(ctx->r16, 0X7C);
    // 0x4200410C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42004110: jal         0x42003008
    // 0x42004114: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_wind_3008(rdram, ctx);
        goto after_0;
    // 0x42004114: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x42004118: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
    // 0x4200411C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42004120: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x42004124: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x42004128: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x4200412C: addiu       $t1, $zero, 0xF
    ctx->r9 = ADD32(0, 0XF);
    // 0x42004130: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x42004134: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x42004138: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x4200413C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x42004140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004144: addiu       $a1, $s0, 0x88
    ctx->r5 = ADD32(ctx->r16, 0X88);
    // 0x42004148: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x4200414C: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x42004150: jal         0x420032B8
    // 0x42004154: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    ovl_blast_wind_32B8(rdram, ctx);
        goto after_1;
    // 0x42004154: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x42004158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4200415C: jal         0x42003B74
    // 0x42004160: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_blast_wind_3B74(rdram, ctx);
        goto after_2;
    // 0x42004160: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x42004164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004168: addiu       $a1, $s0, 0x94
    ctx->r5 = ADD32(ctx->r16, 0X94);
    // 0x4200416C: jal         0x42003CC0
    // 0x42004170: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_wind_3CC0(rdram, ctx);
        goto after_3;
    // 0x42004170: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x42004174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004178: addiu       $a1, $s0, 0xA4
    ctx->r5 = ADD32(ctx->r16, 0XA4);
    // 0x4200417C: jal         0x42003CC0
    // 0x42004180: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_wind_3CC0(rdram, ctx);
        goto after_4;
    // 0x42004180: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x42004184: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x42004188: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x4200418C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42004190: addiu       $a1, $s0, 0xB4
    ctx->r5 = ADD32(ctx->r16, 0XB4);
    // 0x42004194: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x42004198: jal         0x42003E94
    // 0x4200419C: addiu       $a3, $zero, 0x23
    ctx->r7 = ADD32(0, 0X23);
    ovl_blast_wind_3E94(rdram, ctx);
        goto after_5;
    // 0x4200419C: addiu       $a3, $zero, 0x23
    ctx->r7 = ADD32(0, 0X23);
    after_5:
    // 0x420041A0: addiu       $t3, $zero, 0x5A
    ctx->r11 = ADD32(0, 0X5A);
    // 0x420041A4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x420041A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420041AC: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x420041B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x420041B4: jal         0x42003E94
    // 0x420041B8: addiu       $a3, $zero, 0x23
    ctx->r7 = ADD32(0, 0X23);
    ovl_blast_wind_3E94(rdram, ctx);
        goto after_6;
    // 0x420041B8: addiu       $a3, $zero, 0x23
    ctx->r7 = ADD32(0, 0X23);
    after_6:
    // 0x420041BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x420041C0: bne         $s1, $at, L_420041D8
    if (ctx->r17 != ctx->r1) {
        // 0x420041C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_420041D8;
    }
    // 0x420041C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420041C8: jal         0x4200148C
    // 0x420041CC: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_blast_wind_148C(rdram, ctx);
        goto after_7;
    // 0x420041CC: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_7:
    // 0x420041D0: b           L_42004228
    // 0x420041D4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_42004228;
    // 0x420041D4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_420041D8:
    // 0x420041D8: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x420041DC: bne         $s1, $at, L_42004204
    if (ctx->r17 != ctx->r1) {
        // 0x420041E0: addiu       $at, $zero, 0x87
        ctx->r1 = ADD32(0, 0X87);
            goto L_42004204;
    }
    // 0x420041E0: addiu       $at, $zero, 0x87
    ctx->r1 = ADD32(0, 0X87);
    // 0x420041E4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420041E8: jal         0x42001874
    // 0x420041EC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_wind_1874(rdram, ctx);
        goto after_8;
    // 0x420041EC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_8:
    // 0x420041F0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x420041F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x420041F8: b           L_42004224
    // 0x420041FC: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_42004224;
    // 0x420041FC: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x42004200: addiu       $at, $zero, 0x87
    ctx->r1 = ADD32(0, 0X87);
L_42004204:
    // 0x42004204: bne         $s1, $at, L_42004228
    if (ctx->r17 != ctx->r1) {
        // 0x42004208: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_42004228;
    }
    // 0x42004208: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4200420C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42004210: jal         0x42001874
    // 0x42004214: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_wind_1874(rdram, ctx);
        goto after_9;
    // 0x42004214: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_9:
    // 0x42004218: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4200421C: nop

    // 0x42004220: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_42004224:
    // 0x42004224: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_42004228:
    // 0x42004228: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x4200422C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x42004230: jr          $ra
    // 0x42004234: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x42004234: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_demon_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000000: lui         $v0, 0x4300
    ctx->r2 = S32(0X4300 << 16);
    // 0x43000004: jr          $ra
    // 0x43000008: addiu       $v0, $v0, 0xF50
    ctx->r2 = ADD32(ctx->r2, 0XF50);
    return;
    // 0x43000008: addiu       $v0, $v0, 0xF50
    ctx->r2 = ADD32(ctx->r2, 0XF50);
    // 0x4300000C: nop

;}
RECOMP_FUNC void ovl_boss_demon_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_boss_demon_B8(uint8_t* rdram, recomp_context* ctx) {
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
