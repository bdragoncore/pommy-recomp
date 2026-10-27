#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_blast_ice_23A0(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_blast_ice_218C(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_ice_23E4(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_blast_ice_17CC(rdram, ctx);
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
    ovl_blast_ice_23A0(rdram, ctx);
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
    ovl_blast_ice_22C4(rdram, ctx);
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
    ovl_blast_ice_21FC(rdram, ctx);
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
    ovl_blast_ice_21C4(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_ice_249C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200249C: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x420024A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x420024A4: lw          $v1, 0x3FCC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FCC);
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
RECOMP_FUNC void ovl_blast_ice_2500(uint8_t* rdram, recomp_context* ctx) {
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
    ovl_blast_ice_1874(rdram, ctx);
        goto after_0;
    // 0x42002524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x42002528: lui         $s1, 0x4200
    ctx->r17 = S32(0X4200 << 16);
    // 0x4200252C: lw          $s1, 0x3FC0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X3FC0);
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
    ovl_blast_ice_249C(rdram, ctx);
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
    ovl_blast_ice_6C4(rdram, ctx);
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
    // 0x420025A8: lw          $t2, 0x3E9C($at)
    ctx->r10 = ADD32(ctx->r1, 0X3E9C);
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
        default: switch_error(__func__, 0x420025B0, 0x42003E9C);
    }
    // 0x420025B4: nop

L_420025B8:
    // 0x420025B8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x420025BC: jal         0x420023E4
    // 0x420025C0: nop

    ovl_blast_ice_23E4(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_ice_25F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420025F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420025FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_42002600:
    // 0x42002600: jal         0x42002500
    // 0x42002604: nop

    ovl_blast_ice_2500(rdram, ctx);
        goto after_0;
    // 0x42002604: nop

    after_0:
    // 0x42002608: jal         0x4200085C
    // 0x4200260C: nop

    ovl_blast_ice_85C(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_ice_2640(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x42002668: lw          $t7, 0x3EC0($at)
    ctx->r15 = ADD32(ctx->r1, 0X3EC0);
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
        default: switch_error(__func__, 0x42002670, 0x42003EC0);
    }
    // 0x42002674: nop

L_42002678:
    // 0x42002678: jal         0x420020B4
    // 0x4200267C: nop

    ovl_blast_ice_20B4(rdram, ctx);
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

    ovl_blast_ice_2014(rdram, ctx);
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

    ovl_blast_ice_1FEC(rdram, ctx);
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

    ovl_blast_ice_1FB0(rdram, ctx);
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

    ovl_blast_ice_1E64(rdram, ctx);
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

    ovl_blast_ice_1C3C(rdram, ctx);
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

    ovl_blast_ice_1B64(rdram, ctx);
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

    ovl_blast_ice_1B38(rdram, ctx);
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

    ovl_blast_ice_1ADC(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_ice_2710(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x42002738: lw          $t6, 0x3F18($at)
    ctx->r14 = ADD32(ctx->r1, 0X3F18);
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
        default: switch_error(__func__, 0x42002740, 0x42003F18);
    }
    // 0x42002744: nop

L_42002748:
    // 0x42002748: jal         0x42002640
    // 0x4200274C: nop

    ovl_blast_ice_2640(rdram, ctx);
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

    ovl_blast_ice_2640(rdram, ctx);
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

    ovl_blast_ice_2640(rdram, ctx);
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
    // 0x42002780: addiu       $a0, $a0, 0x3E70
    ctx->r4 = ADD32(ctx->r4, 0X3E70);
    ovl_blast_ice_1C(rdram, ctx);
        goto after_3;
    // 0x42002780: addiu       $a0, $a0, 0x3E70
    ctx->r4 = ADD32(ctx->r4, 0X3E70);
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
RECOMP_FUNC void ovl_blast_ice_27A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x420027A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420027A8: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420027AC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x420027B0: bne         $t6, $at, L_420027C8
    if (ctx->r14 != ctx->r1) {
        // 0x420027B4: nop
    
            goto L_420027C8;
    }
    // 0x420027B4: nop

    // 0x420027B8: jal         0x42003AFC
    // 0x420027BC: nop

    ovl_blast_ice_3AFC(rdram, ctx);
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
    // 0x420027C8: jal         0x420031E8
    // 0x420027CC: nop

    ovl_blast_ice_31E8(rdram, ctx);
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
RECOMP_FUNC void ovl_blast_ice_27E0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_ice_27EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x420027F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x420027F4: jr          $ra
    // 0x420027F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x420027F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_blast_ice_27FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420027FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x42002800: jr          $ra
    // 0x42002804: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x42002804: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_blast_ice_2808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002808: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4200280C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42002810: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x42002814: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x42002818: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4200281C: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x42002820: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002824: bne         $t6, $at, L_42002854
    if (ctx->r14 != ctx->r1) {
        // 0x42002828: or          $s2, $a0, $zero
        ctx->r18 = ctx->r4 | 0;
            goto L_42002854;
    }
    // 0x42002828: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x4200282C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x42002830: addiu       $s1, $a0, 0x7C
    ctx->r17 = ADD32(ctx->r4, 0X7C);
    // 0x42002834: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
L_42002838:
    // 0x42002838: jal         0x42000F50
    // 0x4200283C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_ice_F50(rdram, ctx);
        goto after_0;
    // 0x4200283C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x42002840: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x42002844: bne         $s0, $s2, L_42002838
    if (ctx->r16 != ctx->r18) {
        // 0x42002848: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_42002838;
    }
    // 0x42002848: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x4200284C: b           L_4200288C
    // 0x42002850: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4200288C;
    // 0x42002850: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_42002854:
    // 0x42002854: jal         0x42000F50
    // 0x42002858: addiu       $a0, $s2, 0x80
    ctx->r4 = ADD32(ctx->r18, 0X80);
    ovl_blast_ice_F50(rdram, ctx);
        goto after_1;
    // 0x42002858: addiu       $a0, $s2, 0x80
    ctx->r4 = ADD32(ctx->r18, 0X80);
    after_1:
    // 0x4200285C: jal         0x42000F50
    // 0x42002860: addiu       $a0, $s2, 0x8C
    ctx->r4 = ADD32(ctx->r18, 0X8C);
    ovl_blast_ice_F50(rdram, ctx);
        goto after_2;
    // 0x42002860: addiu       $a0, $s2, 0x8C
    ctx->r4 = ADD32(ctx->r18, 0X8C);
    after_2:
    // 0x42002864: jal         0x42000F50
    // 0x42002868: addiu       $a0, $s2, 0x98
    ctx->r4 = ADD32(ctx->r18, 0X98);
    ovl_blast_ice_F50(rdram, ctx);
        goto after_3;
    // 0x42002868: addiu       $a0, $s2, 0x98
    ctx->r4 = ADD32(ctx->r18, 0X98);
    after_3:
    // 0x4200286C: jal         0x42000F50
    // 0x42002870: addiu       $a0, $s2, 0xA4
    ctx->r4 = ADD32(ctx->r18, 0XA4);
    ovl_blast_ice_F50(rdram, ctx);
        goto after_4;
    // 0x42002870: addiu       $a0, $s2, 0xA4
    ctx->r4 = ADD32(ctx->r18, 0XA4);
    after_4:
    // 0x42002874: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42002878: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x4200287C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x42002880: jal         0x42000214
    // 0x42002884: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_blast_ice_214(rdram, ctx);
        goto after_5;
    // 0x42002884: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_5:
    // 0x42002888: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4200288C:
    // 0x4200288C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002890: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x42002894: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x42002898: jr          $ra
    // 0x4200289C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4200289C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_ice_28A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420028A0: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x420028A4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x420028A8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x420028AC: lui         $v1, 0x4200
    ctx->r3 = S32(0X4200 << 16);
    // 0x420028B0: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x420028B4: lw          $v0, 0x3E40($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X3E40);
    // 0x420028B8: jr          $ra
    // 0x420028BC: nop

    return;
    // 0x420028BC: nop

;}
RECOMP_FUNC void ovl_blast_ice_28C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420028C0: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x420028C4: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x420028C8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x420028CC: lui         $t9, 0x4200
    ctx->r25 = S32(0X4200 << 16);
    // 0x420028D0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x420028D4: lw          $t9, 0x3E60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X3E60);
    // 0x420028D8: nop

    // 0x420028DC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x420028E0: nop

    // 0x420028E4: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x420028E8: jr          $ra
    // 0x420028EC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x420028EC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_blast_ice_28F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420028F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x420028F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x420028F8: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420028FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x42002900: bne         $t6, $at, L_42002950
    if (ctx->r14 != ctx->r1) {
        // 0x42002904: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_42002950;
    }
    // 0x42002904: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x42002908: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x4200290C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x42002914: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x42002918: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x4200291C: jal         0x420028A0
    // 0x42002920: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_blast_ice_28A0(rdram, ctx);
        goto after_0;
    // 0x42002920: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x42002924: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x42002928: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x4200292C: lw          $a0, 0x74($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X74);
    // 0x42002930: jal         0x420028A0
    // 0x42002934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ice_28A0(rdram, ctx);
        goto after_1;
    // 0x42002934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x42002938: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x4200293C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x42002940: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x42002944: addiu       $t9, $t8, 0xE
    ctx->r25 = ADD32(ctx->r24, 0XE);
    // 0x42002948: b           L_4200296C
    // 0x4200294C: sw          $t9, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r25;
        goto L_4200296C;
    // 0x4200294C: sw          $t9, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r25;
L_42002950:
    // 0x42002950: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x42002954: addiu       $t0, $zero, 0x6E
    ctx->r8 = ADD32(0, 0X6E);
    // 0x42002958: sw          $t0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r8;
    // 0x4200295C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x42002960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x42002964: jal         0x42001208
    // 0x42002968: swc1        $f6, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f6.u32l;
    ovl_blast_ice_1208(rdram, ctx);
        goto after_2;
    // 0x42002968: swc1        $f6, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f6.u32l;
    after_2:
L_4200296C:
    // 0x4200296C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002970: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x42002974: jr          $ra
    // 0x42002978: nop

    return;
    // 0x42002978: nop

;}
RECOMP_FUNC void ovl_blast_ice_297C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200297C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002984: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x42002988: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x4200298C: jal         0x42001874
    // 0x42002990: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_blast_ice_1874(rdram, ctx);
        goto after_0;
    // 0x42002990: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x42002994: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42002998: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4200299C: nop

    // 0x420029A0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x420029A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420029A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x420029AC: jr          $ra
    // 0x420029B0: nop

    return;
    // 0x420029B0: nop

;}
RECOMP_FUNC void ovl_blast_ice_29B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420029B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420029B8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x420029BC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x420029C0: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x420029C4: jr          $ra
    // 0x420029C8: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x420029C8: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_blast_ice_29CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420029CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x420029D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x420029D4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x420029D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x420029DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x420029E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x420029E4: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x420029E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x420029EC: bne         $t6, $at, L_42002A20
    if (ctx->r14 != ctx->r1) {
        // 0x420029F0: or          $s3, $a0, $zero
        ctx->r19 = ctx->r4 | 0;
            goto L_42002A20;
    }
    // 0x420029F0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x420029F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x420029F8: addiu       $s1, $a0, 0x7C
    ctx->r17 = ADD32(ctx->r4, 0X7C);
    // 0x420029FC: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
L_42002A00:
    // 0x42002A00: jal         0x420029B4
    // 0x42002A04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_blast_ice_29B4(rdram, ctx);
        goto after_0;
    // 0x42002A04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x42002A08: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x42002A0C: bne         $s0, $s2, L_42002A00
    if (ctx->r16 != ctx->r18) {
        // 0x42002A10: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_42002A00;
    }
    // 0x42002A10: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x42002A14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42002A18: b           L_42002A74
    // 0x42002A1C: swc1        $f4, 0xB8($s3)
    MEM_W(0XB8, ctx->r19) = ctx->f4.u32l;
        goto L_42002A74;
    // 0x42002A1C: swc1        $f4, 0xB8($s3)
    MEM_W(0XB8, ctx->r19) = ctx->f4.u32l;
L_42002A20:
    // 0x42002A20: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x42002A24: jal         0x42001874
    // 0x42002A28: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_ice_1874(rdram, ctx);
        goto after_1;
    // 0x42002A28: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x42002A2C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x42002A30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002A34: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x42002A38: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x42002A3C: addiu       $a0, $s3, 0x80
    ctx->r4 = ADD32(ctx->r19, 0X80);
    // 0x42002A40: jal         0x420029B4
    // 0x42002A44: swc1        $f8, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->f8.u32l;
    ovl_blast_ice_29B4(rdram, ctx);
        goto after_2;
    // 0x42002A44: swc1        $f8, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->f8.u32l;
    after_2:
    // 0x42002A48: jal         0x420029B4
    // 0x42002A4C: addiu       $a0, $s3, 0x8C
    ctx->r4 = ADD32(ctx->r19, 0X8C);
    ovl_blast_ice_29B4(rdram, ctx);
        goto after_3;
    // 0x42002A4C: addiu       $a0, $s3, 0x8C
    ctx->r4 = ADD32(ctx->r19, 0X8C);
    after_3:
    // 0x42002A50: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002A54: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x42002A58: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42002A5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x42002A60: sw          $v0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r2;
    // 0x42002A64: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x42002A68: swc1        $f0, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = ctx->f0.u32l;
    // 0x42002A6C: swc1        $f0, 0xA0($s3)
    MEM_W(0XA0, ctx->r19) = ctx->f0.u32l;
    // 0x42002A70: swc1        $f10, 0xA8($s3)
    MEM_W(0XA8, ctx->r19) = ctx->f10.u32l;
L_42002A74:
    // 0x42002A74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42002A78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42002A7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x42002A80: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x42002A84: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x42002A88: jr          $ra
    // 0x42002A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x42002A8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_blast_ice_2A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002A90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42002A94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002A98: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x42002A9C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42002AA0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42002AA4: jal         0x42001104
    // 0x42002AA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_1104(rdram, ctx);
        goto after_0;
    // 0x42002AA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42002AAC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x42002AB0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x42002AB4: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x42002AB8: jal         0x420006C4
    // 0x42002ABC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_blast_ice_6C4(rdram, ctx);
        goto after_1;
    // 0x42002ABC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x42002AC0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x42002AC4: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42002AC8: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x42002ACC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42002AD0: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x42002AD4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x42002AD8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x42002ADC: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x42002AE0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x42002AE4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x42002AE8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42002AEC: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x42002AF0: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x42002AF4: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x42002AF8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42002AFC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x42002B00: jal         0x42000F34
    // 0x42002B04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_2;
    // 0x42002B04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x42002B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002B0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x42002B10: jr          $ra
    // 0x42002B14: nop

    return;
    // 0x42002B14: nop

;}
RECOMP_FUNC void ovl_blast_ice_2B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002B18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42002B1C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002B20: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x42002B24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002B28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42002B2C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x42002B30: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x42002B34: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42002B38: addiu       $a2, $zero, 0x1D2
    ctx->r6 = ADD32(0, 0X1D2);
    // 0x42002B3C: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x42002B40: jal         0x42002A90
    // 0x42002B44: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_blast_ice_2A90(rdram, ctx);
        goto after_0;
    // 0x42002B44: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x42002B48: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x42002B4C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42002B50: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002B54: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x42002B58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42002B5C: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x42002B60: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x42002B64: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x42002B68: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x42002B6C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x42002B70: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x42002B74: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42002B78: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x42002B7C: jal         0x42000F34
    // 0x42002B80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_1;
    // 0x42002B80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42002B84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42002B88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x42002B8C: jr          $ra
    // 0x42002B90: nop

    return;
    // 0x42002B90: nop

;}
RECOMP_FUNC void ovl_blast_ice_2B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002B94: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42002B98: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x42002B9C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x42002BA0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42002BA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42002BA8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x42002BAC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x42002BB0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x42002BB4: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x42002BB8: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x42002BBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42002BC0: jal         0x42000F34
    // 0x42002BC4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_blast_ice_F34(rdram, ctx);
        goto after_0;
    // 0x42002BC4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x42002BC8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x42002BCC: nop

    // 0x42002BD0: bltz        $t6, L_42002D5C
    if (SIGNED(ctx->r14) < 0) {
        // 0x42002BD4: nop
    
            goto L_42002D5C;
    }
    // 0x42002BD4: nop

    // 0x42002BD8: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x42002BDC: jal         0x420028A0
    // 0x42002BE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ice_28A0(rdram, ctx);
        goto after_1;
    // 0x42002BE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x42002BE4: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x42002BE8: nop

    // 0x42002BEC: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x42002BF0: bne         $at, $zero, L_42002C28
    if (ctx->r1 != 0) {
        // 0x42002BF4: nop
    
            goto L_42002C28;
    }
    // 0x42002BF4: nop

    // 0x42002BF8: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x42002BFC: jal         0x420028A0
    // 0x42002C00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ice_28A0(rdram, ctx);
        goto after_2;
    // 0x42002C00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x42002C04: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x42002C08: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x42002C0C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x42002C10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42002C14: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x42002C18: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x42002C1C: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x42002C20: b           L_42002CA8
    // 0x42002C24: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
        goto L_42002CA8;
    // 0x42002C24: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
L_42002C28:
    // 0x42002C28: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x42002C2C: jal         0x420028A0
    // 0x42002C30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_blast_ice_28A0(rdram, ctx);
        goto after_3;
    // 0x42002C30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x42002C34: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x42002C38: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x42002C3C: jal         0x420028A0
    // 0x42002C40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ice_28A0(rdram, ctx);
        goto after_4;
    // 0x42002C40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x42002C44: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x42002C48: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x42002C4C: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x42002C50: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x42002C54: beq         $at, $zero, L_42002CA8
    if (ctx->r1 == 0) {
        // 0x42002C58: nop
    
            goto L_42002CA8;
    }
    // 0x42002C58: nop

    // 0x42002C5C: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x42002C60: jal         0x420028A0
    // 0x42002C64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_blast_ice_28A0(rdram, ctx);
        goto after_5;
    // 0x42002C64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x42002C68: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x42002C6C: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x42002C70: jal         0x420028A0
    // 0x42002C74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ice_28A0(rdram, ctx);
        goto after_6;
    // 0x42002C74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x42002C78: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x42002C7C: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x42002C80: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x42002C84: addiu       $t4, $t3, 0xE
    ctx->r12 = ADD32(ctx->r11, 0XE);
    // 0x42002C88: slt         $at, $t4, $t1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x42002C8C: bne         $at, $zero, L_42002CA8
    if (ctx->r1 != 0) {
        // 0x42002C90: lui         $at, 0x4200
        ctx->r1 = S32(0X4200 << 16);
            goto L_42002CA8;
    }
    // 0x42002C90: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002C94: lwc1        $f4, 0x3F40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3F40);
    // 0x42002C98: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x42002C9C: nop

    // 0x42002CA0: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x42002CA4: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
L_42002CA8:
    // 0x42002CA8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002CAC: lwc1        $f10, 0x3F44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3F44);
    // 0x42002CB0: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002CB4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002CB8: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x42002CBC: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x42002CC0: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    // 0x42002CC4: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002CC8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x42002CCC: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42002CD0: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x42002CD4: lwc1        $f4, 0x3F48($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3F48);
    // 0x42002CD8: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x42002CDC: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x42002CE0: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x42002CE4: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42002CE8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x42002CEC: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x42002CF0: bc1f        L_42002D00
    if (!c1cs) {
        // 0x42002CF4: swc1        $f18, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
            goto L_42002D00;
    }
    // 0x42002CF4: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x42002CF8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x42002CFC: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
L_42002D00:
    // 0x42002D00: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x42002D04: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x42002D08: slti        $at, $t5, 0x9
    ctx->r1 = SIGNED(ctx->r13) < 0X9 ? 1 : 0;
    // 0x42002D0C: bne         $at, $zero, L_42002D5C
    if (ctx->r1 != 0) {
        // 0x42002D10: or          $a2, $s1, $zero
        ctx->r6 = ctx->r17 | 0;
            goto L_42002D5C;
    }
    // 0x42002D10: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x42002D14: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002D18: jal         0x42000F34
    // 0x42002D1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_7;
    // 0x42002D1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x42002D20: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002D24: lwc1        $f10, 0x3F4C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3F4C);
    // 0x42002D28: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42002D2C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42002D30: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x42002D34: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x42002D38: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x42002D3C: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002D40: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42002D44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x42002D48: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x42002D4C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x42002D50: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002D54: jal         0x42000F34
    // 0x42002D58: nop

    ovl_blast_ice_F34(rdram, ctx);
        goto after_8;
    // 0x42002D58: nop

    after_8:
L_42002D5C:
    // 0x42002D5C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002D60: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42002D64: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x42002D68: jal         0x42000F34
    // 0x42002D6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_9;
    // 0x42002D6C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x42002D70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42002D74: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x42002D78: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x42002D7C: jr          $ra
    // 0x42002D80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x42002D80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_blast_ice_2D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002D84: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002D88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42002D8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42002D90: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x42002D94: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x42002D98: addiu       $a2, $zero, 0x1D5
    ctx->r6 = ADD32(0, 0X1D5);
    // 0x42002D9C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x42002DA0: jal         0x42002A90
    // 0x42002DA4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    ovl_blast_ice_2A90(rdram, ctx);
        goto after_0;
    // 0x42002DA4: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x42002DA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x42002DAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42002DB0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x42002DB4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x42002DB8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x42002DBC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x42002DC0: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x42002DC4: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x42002DC8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42002DCC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x42002DD0: jal         0x42000F34
    // 0x42002DD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_1;
    // 0x42002DD4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x42002DD8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x42002DDC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x42002DE0: nop

    // 0x42002DE4: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
    // 0x42002DE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42002DEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x42002DF0: jr          $ra
    // 0x42002DF4: nop

    return;
    // 0x42002DF4: nop

;}
RECOMP_FUNC void ovl_blast_ice_2DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002DF8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x42002DFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x42002E00: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42002E04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x42002E08: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x42002E0C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x42002E10: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x42002E14: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x42002E18: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x42002E1C: jal         0x42000F34
    // 0x42002E20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_0;
    // 0x42002E20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42002E24: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x42002E28: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002E2C: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x42002E30: beq         $at, $zero, L_42002E64
    if (ctx->r1 == 0) {
        // 0x42002E34: lui         $at, 0x4200
        ctx->r1 = S32(0X4200 << 16);
            goto L_42002E64;
    }
    // 0x42002E34: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002E38: lwc1        $f6, 0x3F50($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3F50);
    // 0x42002E3C: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42002E40: nop

    // 0x42002E44: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42002E48: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x42002E4C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42002E50: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42002E54: nop

    // 0x42002E58: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x42002E5C: b           L_42002E78
    // 0x42002E60: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
        goto L_42002E78;
    // 0x42002E60: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
L_42002E64:
    // 0x42002E64: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002E68: lwc1        $f6, 0x3F54($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3F54);
    // 0x42002E6C: nop

    // 0x42002E70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x42002E74: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
L_42002E78:
    // 0x42002E78: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x42002E7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x42002E80: lw          $a0, 0x74($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X74);
    // 0x42002E84: jal         0x420028A0
    // 0x42002E88: nop

    ovl_blast_ice_28A0(rdram, ctx);
        goto after_1;
    // 0x42002E88: nop

    after_1:
    // 0x42002E8C: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x42002E90: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x42002E94: lw          $a0, 0x74($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X74);
    // 0x42002E98: jal         0x420028A0
    // 0x42002E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_blast_ice_28A0(rdram, ctx);
        goto after_2;
    // 0x42002E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x42002EA0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x42002EA4: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x42002EA8: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x42002EAC: addiu       $t2, $t1, 0x6
    ctx->r10 = ADD32(ctx->r9, 0X6);
    // 0x42002EB0: slt         $at, $t9, $t2
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x42002EB4: beq         $at, $zero, L_42002ED8
    if (ctx->r1 == 0) {
        // 0x42002EB8: addiu       $a0, $zero, 0x13
        ctx->r4 = ADD32(0, 0X13);
            goto L_42002ED8;
    }
    // 0x42002EB8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42002EBC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002EC0: lwc1        $f0, 0x3F58($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3F58);
    // 0x42002EC4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x42002EC8: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002ECC: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x42002ED0: b           L_42002EF0
    // 0x42002ED4: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
        goto L_42002EF0;
    // 0x42002ED4: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
L_42002ED8:
    // 0x42002ED8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002EDC: lwc1        $f0, 0x3F5C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3F5C);
    // 0x42002EE0: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x42002EE4: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x42002EE8: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x42002EEC: sub.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f0.fl;
L_42002EF0:
    // 0x42002EF0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42002EF4: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x42002EF8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42002EFC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x42002F00: bc1f        L_42002F0C
    if (!c1cs) {
        // 0x42002F04: nop
    
            goto L_42002F0C;
    }
    // 0x42002F04: nop

    // 0x42002F08: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
L_42002F0C:
    // 0x42002F0C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x42002F10: swc1        $f12, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f12.u32l;
    // 0x42002F14: bc1f        L_42002F20
    if (!c1cs) {
        // 0x42002F18: nop
    
            goto L_42002F20;
    }
    // 0x42002F18: nop

    // 0x42002F1C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_42002F20:
    // 0x42002F20: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42002F24: jal         0x42000F34
    // 0x42002F28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_3;
    // 0x42002F28: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x42002F2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x42002F30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x42002F34: jr          $ra
    // 0x42002F38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x42002F38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_blast_ice_2F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x42002F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42002F44: jal         0x42002710
    // 0x42002F48: nop

    ovl_blast_ice_2710(rdram, ctx);
        goto after_0;
    // 0x42002F48: nop

    after_0:
    // 0x42002F4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x42002F50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x42002F54: jr          $ra
    // 0x42002F58: nop

    return;
    // 0x42002F58: nop

    // 0x42002F5C: jr          $ra
    // 0x42002F60: nop

    return;
    // 0x42002F60: nop

;}
RECOMP_FUNC void ovl_blast_ice_2F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42002F64: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x42002F68: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42002F6C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x42002F70: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x42002F74: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x42002F78: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x42002F7C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x42002F80: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x42002F84: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x42002F88: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x42002F8C: beq         $at, $zero, L_42002FC4
    if (ctx->r1 == 0) {
        // 0x42002F90: or          $t6, $a0, $zero
        ctx->r14 = ctx->r4 | 0;
            goto L_42002FC4;
    }
    // 0x42002F90: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x42002F94: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x42002F98: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x42002F9C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x42002FA0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x42002FA4: lw          $a1, 0x7C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X7C);
    // 0x42002FA8: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x42002FAC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x42002FB0: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x42002FB4: jal         0x42000F34
    // 0x42002FB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_0;
    // 0x42002FB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42002FBC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x42002FC0: nop

L_42002FC4:
    // 0x42002FC4: bne         $v0, $s1, L_42003038
    if (ctx->r2 != ctx->r17) {
        // 0x42002FC8: lui         $at, 0x4200
        ctx->r1 = S32(0X4200 << 16);
            goto L_42003038;
    }
    // 0x42002FC8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42002FCC: lwc1        $f0, 0x3F60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3F60);
    // 0x42002FD0: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x42002FD4: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x42002FD8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x42002FDC: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x42002FE0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x42002FE4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x42002FE8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x42002FEC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x42002FF0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x42002FF4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x42002FF8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x42002FFC: addu        $s0, $a0, $t2
    ctx->r16 = ADD32(ctx->r4, ctx->r10);
    // 0x42003000: addiu       $a1, $s0, 0x7C
    ctx->r5 = ADD32(ctx->r16, 0X7C);
    // 0x42003004: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x42003008: addiu       $a2, $zero, 0x1D4
    ctx->r6 = ADD32(0, 0X1D4);
    // 0x4200300C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x42003010: jal         0x42002A90
    // 0x42003014: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    ovl_blast_ice_2A90(rdram, ctx);
        goto after_1;
    // 0x42003014: swc1        $f12, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x42003018: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4200301C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42003020: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x42003024: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x42003028: swc1        $f16, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f16.u32l;
    // 0x4200302C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    // 0x42003030: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x42003034: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
L_42003038:
    // 0x42003038: slt         $at, $v0, $s1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x4200303C: bne         $at, $zero, L_420031D4
    if (ctx->r1 != 0) {
        // 0x42003040: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_420031D4;
    }
    // 0x42003040: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x42003044: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x42003048: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x4200304C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x42003050: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x42003054: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x42003058: addu        $s0, $t3, $t5
    ctx->r16 = ADD32(ctx->r11, ctx->r13);
    // 0x4200305C: lw          $a1, 0x7C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X7C);
    // 0x42003060: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x42003064: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x42003068: jal         0x42000F34
    // 0x4200306C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_2;
    // 0x4200306C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x42003070: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x42003074: addiu       $v1, $s1, 0x1
    ctx->r3 = ADD32(ctx->r17, 0X1);
    // 0x42003078: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x4200307C: beq         $at, $zero, L_4200309C
    if (ctx->r1 == 0) {
        // 0x42003080: addiu       $a0, $zero, 0x11
        ctx->r4 = ADD32(0, 0X11);
            goto L_4200309C;
    }
    // 0x42003080: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42003084: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x42003088: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4200308C: lwc1        $f18, 0x84($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X84);
    // 0x42003090: nop

    // 0x42003094: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x42003098: swc1        $f6, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f6.u32l;
L_4200309C:
    // 0x4200309C: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x420030A0: lwc1        $f10, 0x84($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X84);
    // 0x420030A4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x420030A8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x420030AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x420030B0: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x420030B4: lw          $a1, 0x7C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X7C);
    // 0x420030B8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x420030BC: jal         0x42000F34
    // 0x420030C0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_3;
    // 0x420030C0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_3:
    // 0x420030C4: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x420030C8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x420030CC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x420030D0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x420030D4: bne         $at, $zero, L_4200313C
    if (ctx->r1 != 0) {
        // 0x420030D8: addiu       $t7, $s1, 0x4
        ctx->r15 = ADD32(ctx->r17, 0X4);
            goto L_4200313C;
    }
    // 0x420030D8: addiu       $t7, $s1, 0x4
    ctx->r15 = ADD32(ctx->r17, 0X4);
    // 0x420030DC: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x420030E0: beq         $at, $zero, L_42003140
    if (ctx->r1 == 0) {
        // 0x420030E4: addiu       $t1, $s1, 0x4
        ctx->r9 = ADD32(ctx->r17, 0X4);
            goto L_42003140;
    }
    // 0x420030E4: addiu       $t1, $s1, 0x4
    ctx->r9 = ADD32(ctx->r17, 0X4);
    // 0x420030E8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x420030EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x420030F0: lw          $a0, 0x74($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X74);
    // 0x420030F4: jal         0x420028C0
    // 0x420030F8: nop

    ovl_blast_ice_28C0(rdram, ctx);
        goto after_4;
    // 0x420030F8: nop

    after_4:
    // 0x420030FC: subu        $t8, $s1, $s1
    ctx->r24 = SUB32(ctx->r17, ctx->r17);
    // 0x42003100: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x42003104: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x42003108: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4200310C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x42003110: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x42003114: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x42003118: div.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x4200311C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x42003120: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x42003124: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x42003128: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x4200312C: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x42003130: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x42003134: b           L_42003174
    // 0x42003138: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
        goto L_42003174;
    // 0x42003138: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
L_4200313C:
    // 0x4200313C: addiu       $t1, $s1, 0x4
    ctx->r9 = ADD32(ctx->r17, 0X4);
L_42003140:
    // 0x42003140: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x42003144: bne         $at, $zero, L_42003174
    if (ctx->r1 != 0) {
        // 0x42003148: lui         $at, 0x4200
        ctx->r1 = S32(0X4200 << 16);
            goto L_42003174;
    }
    // 0x42003148: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200314C: lwc1        $f0, 0x3F64($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3F64);
    // 0x42003150: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x42003154: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x42003158: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x4200315C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x42003160: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x42003164: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x42003168: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x4200316C: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x42003170: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
L_42003174:
    // 0x42003174: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x42003178: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x4200317C: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x42003180: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x42003184: bc1f        L_42003190
    if (!c1cs) {
        // 0x42003188: nop
    
            goto L_42003190;
    }
    // 0x42003188: nop

    // 0x4200318C: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
L_42003190:
    // 0x42003190: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x42003194: nop

    // 0x42003198: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x4200319C: nop

    // 0x420031A0: bc1f        L_420031AC
    if (!c1cs) {
        // 0x420031A4: nop
    
            goto L_420031AC;
    }
    // 0x420031A4: nop

    // 0x420031A8: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
L_420031AC:
    // 0x420031AC: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x420031B0: nop

    // 0x420031B4: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x420031B8: nop

    // 0x420031BC: bc1f        L_420031C8
    if (!c1cs) {
        // 0x420031C0: nop
    
            goto L_420031C8;
    }
    // 0x420031C0: nop

    // 0x420031C4: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
L_420031C8:
    // 0x420031C8: lw          $a1, 0x7C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X7C);
    // 0x420031CC: jal         0x42000F34
    // 0x420031D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_5;
    // 0x420031D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
L_420031D4:
    // 0x420031D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x420031D8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x420031DC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x420031E0: jr          $ra
    // 0x420031E4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x420031E4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_blast_ice_31E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420031E8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x420031EC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x420031F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x420031F4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x420031F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x420031FC: lw          $s1, 0x68($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X68);
    // 0x42003200: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003204: jal         0x42001874
    // 0x42003208: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_ice_1874(rdram, ctx);
        goto after_0;
    // 0x42003208: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x4200320C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42003210: bne         $s1, $at, L_42003284
    if (ctx->r17 != ctx->r1) {
        // 0x42003214: sw          $v0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r2;
            goto L_42003284;
    }
    // 0x42003214: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x42003218: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x4200321C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x42003220: jal         0x420006C4
    // 0x42003224: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_blast_ice_6C4(rdram, ctx);
        goto after_1;
    // 0x42003224: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x42003228: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200322C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003230: lwc1        $f4, 0x3F68($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3F68);
    // 0x42003234: swc1        $f0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f0.u32l;
    // 0x42003238: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x4200323C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x42003240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003244: addiu       $a1, $s0, 0xAC
    ctx->r5 = ADD32(ctx->r16, 0XAC);
    // 0x42003248: jal         0x42002D84
    // 0x4200324C: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    ovl_blast_ice_2D84(rdram, ctx);
        goto after_2;
    // 0x4200324C: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    after_2:
    // 0x42003250: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x42003254: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x42003258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4200325C: jal         0x42002B18
    // 0x42003260: addiu       $a1, $s0, 0x7C
    ctx->r5 = ADD32(ctx->r16, 0X7C);
    ovl_blast_ice_2B18(rdram, ctx);
        goto after_3;
    // 0x42003260: addiu       $a1, $s0, 0x7C
    ctx->r5 = ADD32(ctx->r16, 0X7C);
    after_3:
    // 0x42003264: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003268: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x4200326C: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x42003270: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x42003274: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x42003278: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x4200327C: jal         0x420006C4
    // 0x42003280: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_blast_ice_6C4(rdram, ctx);
        goto after_4;
    // 0x42003280: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
L_42003284:
    // 0x42003284: lw          $t7, 0x74($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X74);
    // 0x42003288: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x4200328C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x42003290: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003294: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x42003298: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200329C: lwc1        $f18, 0x3F6C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X3F6C);
    // 0x420032A0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x420032A4: addiu       $t8, $s0, 0xAC
    ctx->r24 = ADD32(ctx->r16, 0XAC);
    // 0x420032A8: add.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x420032AC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x420032B0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x420032B4: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x420032B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420032BC: addiu       $a1, $s0, 0x7C
    ctx->r5 = ADD32(ctx->r16, 0X7C);
    // 0x420032C0: jal         0x42002B94
    // 0x420032C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_ice_2B94(rdram, ctx);
        goto after_5;
    // 0x420032C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x420032C8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x420032CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x420032D0: jal         0x42002DF8
    // 0x420032D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_ice_2DF8(rdram, ctx);
        goto after_6;
    // 0x420032D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x420032D8: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420032DC: lwc1        $f6, 0x3F70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3F70);
    // 0x420032E0: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x420032E4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x420032E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420032EC: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x420032F0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x420032F4: mul.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x420032F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x420032FC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x42003300: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003304: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x42003308: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x4200330C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x42003310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003314: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x42003318: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x4200331C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x42003320: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x42003324: jal         0x42002F64
    // 0x42003328: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_blast_ice_2F64(rdram, ctx);
        goto after_7;
    // 0x42003328: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x4200332C: lui         $at, 0x42F4
    ctx->r1 = S32(0X42F4 << 16);
    // 0x42003330: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42003334: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003338: lui         $at, 0xC290
    ctx->r1 = S32(0XC290 << 16);
    // 0x4200333C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x42003340: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003348: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4200334C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x42003350: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x42003354: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x42003358: jal         0x42002F64
    // 0x4200335C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_blast_ice_2F64(rdram, ctx);
        goto after_8;
    // 0x4200335C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x42003360: lui         $at, 0xC2AA
    ctx->r1 = S32(0XC2AA << 16);
    // 0x42003364: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42003368: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4200336C: lui         $at, 0xC2D8
    ctx->r1 = S32(0XC2D8 << 16);
    // 0x42003370: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x42003374: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4200337C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x42003380: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x42003384: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x42003388: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x4200338C: jal         0x42002F64
    // 0x42003390: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_blast_ice_2F64(rdram, ctx);
        goto after_9;
    // 0x42003390: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x42003394: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x42003398: beq         $at, $zero, L_420033FC
    if (ctx->r1 == 0) {
        // 0x4200339C: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_420033FC;
    }
    // 0x4200339C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x420033A0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x420033A4: jal         0x420006C4
    // 0x420033A8: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_blast_ice_6C4(rdram, ctx);
        goto after_10;
    // 0x420033A8: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_10:
    // 0x420033AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x420033B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x420033B4: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x420033B8: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x420033BC: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x420033C0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x420033C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x420033C8: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x420033CC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x420033D0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x420033D4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x420033D8: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x420033DC: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x420033E0: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x420033E4: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x420033E8: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x420033EC: swc1        $f16, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f16.u32l;
    // 0x420033F0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x420033F4: jal         0x420006C4
    // 0x420033F8: nop

    ovl_blast_ice_6C4(rdram, ctx);
        goto after_11;
    // 0x420033F8: nop

    after_11:
L_420033FC:
    // 0x420033FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42003400: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x42003404: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x42003408: jr          $ra
    // 0x4200340C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x4200340C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_blast_ice_3410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003410: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x42003414: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x42003418: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4200341C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42003420: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x42003424: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42003428: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x4200342C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003430: bc1f        L_420034D0
    if (!c1cs) {
        // 0x42003434: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_420034D0;
    }
    // 0x42003434: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x42003438: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x4200343C: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x42003440: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x42003444: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x42003448: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x4200344C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x42003450: addiu       $a3, $zero, 0x16
    ctx->r7 = ADD32(0, 0X16);
    // 0x42003454: jal         0x42000F34
    // 0x42003458: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_0;
    // 0x42003458: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_0:
    // 0x4200345C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x42003460: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x42003464: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003468: lwc1        $f11, 0x3F78($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X3F78);
    // 0x4200346C: lwc1        $f10, 0x3F7C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3F7C);
    // 0x42003470: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003474: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42003478: lwc1        $f6, 0x48($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X48);
    // 0x4200347C: lwc1        $f4, 0x3F80($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3F80);
    // 0x42003480: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x42003484: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x42003488: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x4200348C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x42003490: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x42003494: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42003498: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x4200349C: bc1f        L_420034A8
    if (!c1cs) {
        // 0x420034A0: swc1        $f18, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
            goto L_420034A8;
    }
    // 0x420034A0: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    // 0x420034A4: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
L_420034A8:
    // 0x420034A8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420034AC: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x420034B0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x420034B4: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x420034B8: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x420034BC: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x420034C0: jal         0x42000F34
    // 0x420034C4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_1;
    // 0x420034C4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_1:
    // 0x420034C8: b           L_42003560
    // 0x420034CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_42003560;
    // 0x420034CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_420034D0:
    // 0x420034D0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x420034D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420034D8: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x420034DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x420034E0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x420034E4: lui         $a3, 0x40A0
    ctx->r7 = S32(0X40A0 << 16);
    // 0x420034E8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x420034EC: nop

    // 0x420034F0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x420034F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x420034F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x420034FC: nop

    // 0x42003500: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x42003504: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x42003508: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x4200350C: jal         0x42002B94
    // 0x42003510: nop

    ovl_blast_ice_2B94(rdram, ctx);
        goto after_2;
    // 0x42003510: nop

    after_2:
    // 0x42003514: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003518: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x4200351C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x42003520: jal         0x42000F34
    // 0x42003524: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_3;
    // 0x42003524: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x42003528: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x4200352C: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x42003530: lwc1        $f7, 0x3F88($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X3F88);
    // 0x42003534: lwc1        $f6, 0x3F8C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3F8C);
    // 0x42003538: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x4200353C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x42003540: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x42003544: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x42003548: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x4200354C: swc1        $f10, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f10.u32l;
    // 0x42003550: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003554: jal         0x42000F34
    // 0x42003558: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_4;
    // 0x42003558: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x4200355C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42003560:
    // 0x42003560: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x42003564: jr          $ra
    // 0x42003568: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x42003568: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_blast_ice_356C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4200356C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x42003570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42003574: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x42003578: addiu       $a2, $zero, 0x1D7
    ctx->r6 = ADD32(0, 0X1D7);
    // 0x4200357C: jal         0x42001104
    // 0x42003580: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_1104(rdram, ctx);
        goto after_0;
    // 0x42003580: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x42003584: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003588: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x4200358C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x42003590: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x42003594: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x42003598: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x4200359C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x420035A0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x420035A4: jal         0x42000F34
    // 0x420035A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_1;
    // 0x420035A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x420035AC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420035B0: lwc1        $f4, 0x3F90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3F90);
    // 0x420035B4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x420035B8: nop

    // 0x420035BC: swc1        $f4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f4.u32l;
    // 0x420035C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x420035C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x420035C8: jr          $ra
    // 0x420035CC: nop

    return;
    // 0x420035CC: nop

;}
RECOMP_FUNC void ovl_blast_ice_35D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x420035D0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x420035D4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x420035D8: slti        $at, $a2, 0x3C
    ctx->r1 = SIGNED(ctx->r6) < 0X3C ? 1 : 0;
    // 0x420035DC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x420035E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x420035E4: beq         $at, $zero, L_4200371C
    if (ctx->r1 == 0) {
        // 0x420035E8: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_4200371C;
    }
    // 0x420035E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x420035EC: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x420035F0: jal         0x42001874
    // 0x420035F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_ice_1874(rdram, ctx);
        goto after_0;
    // 0x420035F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x420035F8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x420035FC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003600: addiu       $t6, $sp, 0x40
    ctx->r14 = ADD32(ctx->r29, 0X40);
    // 0x42003604: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x42003608: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x4200360C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x42003610: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x42003614: addiu       $a3, $zero, 0x16
    ctx->r7 = ADD32(0, 0X16);
    // 0x42003618: jal         0x42000F34
    // 0x4200361C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_1;
    // 0x4200361C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_1:
    // 0x42003620: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003624: lwc1        $f2, 0x3F94($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3F94);
    // 0x42003628: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x4200362C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003630: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x42003634: nop

    // 0x42003638: bc1f        L_42003680
    if (!c1cs) {
        // 0x4200363C: nop
    
            goto L_42003680;
    }
    // 0x4200363C: nop

    // 0x42003640: lwc1        $f4, 0x3F98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3F98);
    // 0x42003644: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003648: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x4200364C: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x42003650: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x42003654: lwc1        $f8, 0x3FA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3FA4);
    // 0x42003658: sub.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x4200365C: lwc1        $f9, 0x3FA0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X3FA0);
    // 0x42003660: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x42003664: mul.d       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f18.d);
    // 0x42003668: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x4200366C: nop

    // 0x42003670: cvt.d.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.d = CVT_D_S(ctx->f6.fl);
    // 0x42003674: add.d       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f16.d = ctx->f10.d + ctx->f4.d;
    // 0x42003678: cvt.s.d     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f8.fl = CVT_S_D(ctx->f16.d);
    // 0x4200367C: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
L_42003680:
    // 0x42003680: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x42003684: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x42003688: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4200368C: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x42003690: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003694: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x42003698: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x4200369C: lwc1        $f0, 0x3FA8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3FA8);
    // 0x420036A0: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x420036A4: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x420036A8: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x420036AC: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x420036B0: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x420036B4: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x420036B8: bc1f        L_420036CC
    if (!c1cs) {
        // 0x420036BC: swc1        $f4, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
            goto L_420036CC;
    }
    // 0x420036BC: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x420036C0: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x420036C4: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x420036C8: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
L_420036CC:
    // 0x420036CC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x420036D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x420036D4: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x420036D8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x420036DC: mul.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x420036E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x420036E4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x420036E8: addiu       $t8, $sp, 0x40
    ctx->r24 = ADD32(ctx->r29, 0X40);
    // 0x420036EC: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x420036F0: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x420036F4: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x420036F8: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x420036FC: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x42003700: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003704: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x42003708: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x4200370C: jal         0x42000F34
    // 0x42003710: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_2;
    // 0x42003710: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_2:
    // 0x42003714: b           L_42003764
    // 0x42003718: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_42003764;
    // 0x42003718: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_4200371C:
    // 0x4200371C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x42003720: bne         $a2, $at, L_42003764
    if (ctx->r6 != ctx->r1) {
        // 0x42003724: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_42003764;
    }
    // 0x42003724: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x42003728: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x4200372C: jal         0x42001874
    // 0x42003730: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_ice_1874(rdram, ctx);
        goto after_3;
    // 0x42003730: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x42003734: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x42003738: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x4200373C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x42003740: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x42003744: jal         0x42000F34
    // 0x42003748: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_4;
    // 0x42003748: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x4200374C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x42003750: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x42003754: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x42003758: nop

    // 0x4200375C: swc1        $f10, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f10.u32l;
    // 0x42003760: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42003764:
    // 0x42003764: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x42003768: jr          $ra
    // 0x4200376C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x4200376C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_blast_ice_3770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003770: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x42003774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x42003778: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x4200377C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x42003780: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x42003784: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x42003788: jal         0x420006C4
    // 0x4200378C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_ice_6C4(rdram, ctx);
        goto after_0;
    // 0x4200378C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x42003790: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x42003794: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x42003798: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x4200379C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x420037A0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x420037A4: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x420037A8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x420037AC: jal         0x420006C4
    // 0x420037B0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_ice_6C4(rdram, ctx);
        goto after_1;
    // 0x420037B0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x420037B4: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x420037B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x420037BC: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    // 0x420037C0: jal         0x420006C4
    // 0x420037C4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_blast_ice_6C4(rdram, ctx);
        goto after_2;
    // 0x420037C4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x420037C8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x420037CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x420037D0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x420037D4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x420037D8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x420037DC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x420037E0: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x420037E4: addiu       $a2, $zero, 0x1D6
    ctx->r6 = ADD32(0, 0X1D6);
    // 0x420037E8: jal         0x42001104
    // 0x420037EC: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    ovl_blast_ice_1104(rdram, ctx);
        goto after_3;
    // 0x420037EC: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x420037F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x420037F4: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x420037F8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x420037FC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x42003800: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x42003804: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x42003808: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x4200380C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x42003810: jal         0x42000F34
    // 0x42003814: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_4;
    // 0x42003814: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x42003818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4200381C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x42003820: jr          $ra
    // 0x42003824: nop

    return;
    // 0x42003824: nop

;}
RECOMP_FUNC void ovl_blast_ice_3828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003828: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x4200382C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x42003830: slti        $at, $a2, 0x3C
    ctx->r1 = SIGNED(ctx->r6) < 0X3C ? 1 : 0;
    // 0x42003834: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x42003838: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x4200383C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x42003840: beq         $at, $zero, L_420038C4
    if (ctx->r1 == 0) {
        // 0x42003844: sw          $a2, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r6;
            goto L_420038C4;
    }
    // 0x42003844: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x42003848: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x4200384C: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x42003850: jal         0x420006C4
    // 0x42003854: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_blast_ice_6C4(rdram, ctx);
        goto after_0;
    // 0x42003854: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x42003858: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4200385C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x42003860: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003864: lwc1        $f2, 0x3FAC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3FAC);
    // 0x42003868: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x4200386C: nop

    // 0x42003870: add.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f2.fl;
    // 0x42003874: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x42003878: nop

    // 0x4200387C: bc1f        L_42003894
    if (!c1cs) {
        // 0x42003880: nop
    
            goto L_42003894;
    }
    // 0x42003880: nop

    // 0x42003884: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x42003888: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x4200388C: b           L_420038B0
    // 0x42003890: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
        goto L_420038B0;
    // 0x42003890: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
L_42003894:
    // 0x42003894: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x42003898: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4200389C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x420038A0: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x420038A4: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x420038A8: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    // 0x420038AC: swc1        $f10, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f10.u32l;
L_420038B0:
    // 0x420038B0: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x420038B4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x420038B8: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x420038BC: jal         0x420006C4
    // 0x420038C0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_blast_ice_6C4(rdram, ctx);
        goto after_1;
    // 0x420038C0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_1:
L_420038C4:
    // 0x420038C4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x420038C8: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x420038CC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x420038D0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x420038D4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x420038D8: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x420038DC: addiu       $a3, $zero, 0x16
    ctx->r7 = ADD32(0, 0X16);
    // 0x420038E0: jal         0x42000F34
    // 0x420038E4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_2;
    // 0x420038E4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_2:
    // 0x420038E8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x420038EC: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x420038F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x420038F4: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x420038F8: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x420038FC: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003900: bc1f        L_42003928
    if (!c1cs) {
        // 0x42003904: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_42003928;
    }
    // 0x42003904: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003908: lwc1        $f0, 0x3FB0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3FB0);
    // 0x4200390C: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x42003910: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x42003914: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x42003918: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x4200391C: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x42003920: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x42003924: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
L_42003928:
    // 0x42003928: lw          $t0, 0x70($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X70);
    // 0x4200392C: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x42003930: slti        $at, $t0, 0x4B
    ctx->r1 = SIGNED(ctx->r8) < 0X4B ? 1 : 0;
    // 0x42003934: beq         $at, $zero, L_42003950
    if (ctx->r1 == 0) {
        // 0x42003938: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_42003950;
    }
    // 0x42003938: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x4200393C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42003940: nop

    // 0x42003944: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x42003948: b           L_42003A30
    // 0x4200394C: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
        goto L_42003A30;
    // 0x4200394C: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
L_42003950:
    // 0x42003950: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x42003954: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003958: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x4200395C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003960: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x42003964: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x42003968: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x4200396C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x42003970: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x42003974: beq         $a3, $zero, L_420039C0
    if (ctx->r7 == 0) {
        // 0x42003978: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_420039C0;
    }
    // 0x42003978: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x4200397C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003980: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x42003984: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x42003988: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x4200398C: ctc1        $a3, $FpcCsr
    set_cop1_cs(ctx->r7);
    // 0x42003990: nop

    // 0x42003994: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x42003998: cfc1        $a3, $FpcCsr
    ctx->r7 = get_cop1_cs();
    // 0x4200399C: nop

    // 0x420039A0: andi        $a3, $a3, 0x78
    ctx->r7 = ctx->r7 & 0X78;
    // 0x420039A4: bne         $a3, $zero, L_420039B8
    if (ctx->r7 != 0) {
        // 0x420039A8: nop
    
            goto L_420039B8;
    }
    // 0x420039A8: nop

    // 0x420039AC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x420039B0: b           L_420039D0
    // 0x420039B4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
        goto L_420039D0;
    // 0x420039B4: or          $a3, $a3, $at
    ctx->r7 = ctx->r7 | ctx->r1;
L_420039B8:
    // 0x420039B8: b           L_420039D0
    // 0x420039BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
        goto L_420039D0;
    // 0x420039BC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_420039C0:
    // 0x420039C0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x420039C4: nop

    // 0x420039C8: bltz        $a3, L_420039B8
    if (SIGNED(ctx->r7) < 0) {
        // 0x420039CC: nop
    
            goto L_420039B8;
    }
    // 0x420039CC: nop

L_420039D0:
    // 0x420039D0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x420039D4: jal         0x42000F34
    // 0x420039D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_3;
    // 0x420039D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x420039DC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x420039E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x420039E4: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x420039E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x420039EC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x420039F0: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x420039F4: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x420039F8: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x420039FC: nop

    // 0x42003A00: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x42003A04: nop

    // 0x42003A08: bc1f        L_42003A1C
    if (!c1cs) {
        // 0x42003A0C: nop
    
            goto L_42003A1C;
    }
    // 0x42003A0C: nop

    // 0x42003A10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x42003A14: nop

    // 0x42003A18: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
L_42003A1C:
    // 0x42003A1C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42003A20: lwc1        $f10, 0x3FB4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3FB4);
    // 0x42003A24: nop

    // 0x42003A28: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x42003A2C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
L_42003A30:
    // 0x42003A30: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003A34: addiu       $t2, $sp, 0x38
    ctx->r10 = ADD32(ctx->r29, 0X38);
    // 0x42003A38: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x42003A3C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x42003A40: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x42003A44: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x42003A48: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x42003A4C: jal         0x42000F34
    // 0x42003A50: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_4;
    // 0x42003A50: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_4:
    // 0x42003A54: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x42003A58: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x42003A5C: bne         $t3, $at, L_42003A80
    if (ctx->r11 != ctx->r1) {
        // 0x42003A60: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_42003A80;
    }
    // 0x42003A60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x42003A64: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x42003A68: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x42003A6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003A70: jal         0x42001208
    // 0x42003A74: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    ovl_blast_ice_1208(rdram, ctx);
        goto after_5;
    // 0x42003A74: swc1        $f18, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f18.u32l;
    after_5:
    // 0x42003A78: b           L_42003AF0
    // 0x42003A7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_42003AF0;
    // 0x42003A7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42003A80:
    // 0x42003A80: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x42003A84: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x42003A88: slti        $at, $t4, 0x3D
    ctx->r1 = SIGNED(ctx->r12) < 0X3D ? 1 : 0;
    // 0x42003A8C: bne         $at, $zero, L_42003AD0
    if (ctx->r1 != 0) {
        // 0x42003A90: slti        $at, $t4, 0x46
        ctx->r1 = SIGNED(ctx->r12) < 0X46 ? 1 : 0;
            goto L_42003AD0;
    }
    // 0x42003A90: slti        $at, $t4, 0x46
    ctx->r1 = SIGNED(ctx->r12) < 0X46 ? 1 : 0;
    // 0x42003A94: beq         $at, $zero, L_42003AD0
    if (ctx->r1 == 0) {
        // 0x42003A98: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_42003AD0;
    }
    // 0x42003A98: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42003A9C: lw          $t5, 0x68($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X68);
    // 0x42003AA0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x42003AA4: lw          $a3, 0x7C($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X7C);
    // 0x42003AA8: jal         0x42000214
    // 0x42003AAC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    ovl_blast_ice_214(rdram, ctx);
        goto after_6;
    // 0x42003AAC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_6:
    // 0x42003AB0: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x42003AB4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x42003AB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x42003ABC: lwc1        $f4, 0x7C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X7C);
    // 0x42003AC0: nop

    // 0x42003AC4: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x42003AC8: b           L_42003AEC
    // 0x42003ACC: swc1        $f8, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f8.u32l;
        goto L_42003AEC;
    // 0x42003ACC: swc1        $f8, 0x7C($t6)
    MEM_W(0X7C, ctx->r14) = ctx->f8.u32l;
L_42003AD0:
    // 0x42003AD0: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x42003AD4: bne         $t7, $at, L_42003AEC
    if (ctx->r15 != ctx->r1) {
        // 0x42003AD8: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_42003AEC;
    }
    // 0x42003AD8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x42003ADC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x42003AE0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x42003AE4: jal         0x42000214
    // 0x42003AE8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_blast_ice_214(rdram, ctx);
        goto after_7;
    // 0x42003AE8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_7:
L_42003AEC:
    // 0x42003AEC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_42003AF0:
    // 0x42003AF0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x42003AF4: jr          $ra
    // 0x42003AF8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x42003AF8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_blast_ice_3AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42003AFC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x42003B00: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x42003B04: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x42003B08: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x42003B0C: lw          $s1, 0x68($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X68);
    // 0x42003B10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42003B14: bne         $s1, $at, L_42003B54
    if (ctx->r17 != ctx->r1) {
        // 0x42003B18: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_42003B54;
    }
    // 0x42003B18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x42003B1C: jal         0x42002D84
    // 0x42003B20: addiu       $a1, $s0, 0x80
    ctx->r5 = ADD32(ctx->r16, 0X80);
    ovl_blast_ice_2D84(rdram, ctx);
        goto after_0;
    // 0x42003B20: addiu       $a1, $s0, 0x80
    ctx->r5 = ADD32(ctx->r16, 0X80);
    after_0:
    // 0x42003B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003B28: addiu       $a1, $s0, 0x8C
    ctx->r5 = ADD32(ctx->r16, 0X8C);
    // 0x42003B2C: jal         0x42002B18
    // 0x42003B30: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    ovl_blast_ice_2B18(rdram, ctx);
        goto after_1;
    // 0x42003B30: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_1:
    // 0x42003B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003B38: jal         0x4200356C
    // 0x42003B3C: addiu       $a1, $s0, 0x98
    ctx->r5 = ADD32(ctx->r16, 0X98);
    ovl_blast_ice_356C(rdram, ctx);
        goto after_2;
    // 0x42003B3C: addiu       $a1, $s0, 0x98
    ctx->r5 = ADD32(ctx->r16, 0X98);
    after_2:
    // 0x42003B40: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x42003B44: nop

    // 0x42003B48: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x42003B4C: b           L_42003C04
    // 0x42003B50: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
        goto L_42003C04;
    // 0x42003B50: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_42003B54:
    // 0x42003B54: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x42003B58: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x42003B5C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x42003B60: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x42003B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003B68: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x42003B6C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42003B70: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42003B74: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x42003B78: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x42003B7C: bc1f        L_42003BB0
    if (!c1cs) {
        // 0x42003B80: nop
    
            goto L_42003BB0;
    }
    // 0x42003B80: nop

    // 0x42003B84: jal         0x42003770
    // 0x42003B88: addiu       $a1, $s0, 0xA4
    ctx->r5 = ADD32(ctx->r16, 0XA4);
    ovl_blast_ice_3770(rdram, ctx);
        goto after_3;
    // 0x42003B88: addiu       $a1, $s0, 0xA4
    ctx->r5 = ADD32(ctx->r16, 0XA4);
    after_3:
    // 0x42003B8C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003B94: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x42003B98: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x42003B9C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x42003BA0: jal         0x42001190
    // 0x42003BA4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_blast_ice_1190(rdram, ctx);
        goto after_4;
    // 0x42003BA4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x42003BA8: b           L_42003C08
    // 0x42003BAC: addiu       $t6, $s0, 0x8C
    ctx->r14 = ADD32(ctx->r16, 0X8C);
        goto L_42003C08;
    // 0x42003BAC: addiu       $t6, $s0, 0x8C
    ctx->r14 = ADD32(ctx->r16, 0X8C);
L_42003BB0:
    // 0x42003BB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x42003BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003BB8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x42003BBC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x42003BC0: bc1f        L_42003BE4
    if (!c1cs) {
        // 0x42003BC4: addiu       $at, $zero, 0x64
        ctx->r1 = ADD32(0, 0X64);
            goto L_42003BE4;
    }
    // 0x42003BC4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x42003BC8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x42003BCC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x42003BD0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x42003BD4: jal         0x42001190
    // 0x42003BD8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_blast_ice_1190(rdram, ctx);
        goto after_5;
    // 0x42003BD8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x42003BDC: b           L_42003C08
    // 0x42003BE0: addiu       $t6, $s0, 0x8C
    ctx->r14 = ADD32(ctx->r16, 0X8C);
        goto L_42003C08;
    // 0x42003BE0: addiu       $t6, $s0, 0x8C
    ctx->r14 = ADD32(ctx->r16, 0X8C);
L_42003BE4:
    // 0x42003BE4: bne         $s1, $at, L_42003C08
    if (ctx->r17 != ctx->r1) {
        // 0x42003BE8: addiu       $t6, $s0, 0x8C
        ctx->r14 = ADD32(ctx->r16, 0X8C);
            goto L_42003C08;
    }
    // 0x42003BE8: addiu       $t6, $s0, 0x8C
    ctx->r14 = ADD32(ctx->r16, 0X8C);
    // 0x42003BEC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x42003BF0: jal         0x42001874
    // 0x42003BF4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_blast_ice_1874(rdram, ctx);
        goto after_6;
    // 0x42003BF4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_6:
    // 0x42003BF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x42003BFC: nop

    // 0x42003C00: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_42003C04:
    // 0x42003C04: addiu       $t6, $s0, 0x8C
    ctx->r14 = ADD32(ctx->r16, 0X8C);
L_42003C08:
    // 0x42003C08: addiu       $t7, $s0, 0x98
    ctx->r15 = ADD32(ctx->r16, 0X98);
    // 0x42003C0C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x42003C10: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x42003C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003C18: addiu       $a1, $s0, 0x80
    ctx->r5 = ADD32(ctx->r16, 0X80);
    // 0x42003C1C: jal         0x42002DF8
    // 0x42003C20: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_ice_2DF8(rdram, ctx);
        goto after_7;
    // 0x42003C20: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x42003C24: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    // 0x42003C28: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    // 0x42003C2C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x42003C30: jal         0x42000F34
    // 0x42003C34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_8;
    // 0x42003C34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x42003C38: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x42003C3C: lwc1        $f12, 0x3FB8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3FB8);
    // 0x42003C40: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x42003C44: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x42003C48: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x42003C4C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x42003C50: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42003C54: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x42003C58: bc1f        L_42003C64
    if (!c1cs) {
        // 0x42003C5C: addiu       $a2, $sp, 0x34
        ctx->r6 = ADD32(ctx->r29, 0X34);
            goto L_42003C64;
    }
    // 0x42003C5C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x42003C60: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
L_42003C64:
    // 0x42003C64: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x42003C68: nop

    // 0x42003C6C: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x42003C70: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x42003C74: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x42003C78: bc1f        L_42003C84
    if (!c1cs) {
        // 0x42003C7C: nop
    
            goto L_42003C84;
    }
    // 0x42003C7C: nop

    // 0x42003C80: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
L_42003C84:
    // 0x42003C84: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    // 0x42003C88: jal         0x42000F34
    // 0x42003C8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_blast_ice_F34(rdram, ctx);
        goto after_9;
    // 0x42003C8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x42003C90: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x42003C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003C98: jal         0x42003410
    // 0x42003C9C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_ice_3410(rdram, ctx);
        goto after_10;
    // 0x42003C9C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x42003CA0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x42003CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003CA8: jal         0x420035D0
    // 0x42003CAC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_ice_35D0(rdram, ctx);
        goto after_11;
    // 0x42003CAC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x42003CB0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x42003CB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x42003CB8: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x42003CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003CC0: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x42003CC4: addiu       $a1, $s0, 0xA4
    ctx->r5 = ADD32(ctx->r16, 0XA4);
    // 0x42003CC8: bc1f        L_42003CDC
    if (!c1cs) {
        // 0x42003CCC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_42003CDC;
    }
    // 0x42003CCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x42003CD0: jal         0x42003828
    // 0x42003CD4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_blast_ice_3828(rdram, ctx);
        goto after_12;
    // 0x42003CD4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x42003CD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_42003CDC:
    // 0x42003CDC: bne         $s1, $at, L_42003CEC
    if (ctx->r17 != ctx->r1) {
        // 0x42003CE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_42003CEC;
    }
    // 0x42003CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x42003CE4: jal         0x4200148C
    // 0x42003CE8: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_blast_ice_148C(rdram, ctx);
        goto after_13;
    // 0x42003CE8: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_13:
L_42003CEC:
    // 0x42003CEC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x42003CF0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x42003CF4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x42003CF8: jr          $ra
    // 0x42003CFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x42003CFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_blast_wind_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x42000000: lui         $v0, 0x4200
    ctx->r2 = S32(0X4200 << 16);
    // 0x42000004: jr          $ra
    // 0x42000008: addiu       $v0, $v0, 0x2F70
    ctx->r2 = ADD32(ctx->r2, 0X2F70);
    return;
    // 0x42000008: addiu       $v0, $v0, 0x2F70
    ctx->r2 = ADD32(ctx->r2, 0X2F70);
    // 0x4200000C: nop

;}
RECOMP_FUNC void ovl_blast_wind_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_blast_wind_D0(uint8_t* rdram, recomp_context* ctx) {
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
