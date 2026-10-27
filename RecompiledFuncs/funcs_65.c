#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_item_main_349C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100349C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x410034A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x410034A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x410034A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x410034AC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x410034B0: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x410034B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x410034B8: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x410034BC: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x410034C0: jal         0x410006C4
    // 0x410034C4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x410034C4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x410034C8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x410034CC: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x410034D0: bne         $t6, $zero, L_41003574
    if (ctx->r14 != 0) {
        // 0x410034D4: lw          $t6, 0x58($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X58);
            goto L_41003574;
    }
    // 0x410034D4: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x410034D8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x410034DC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x410034E0: beq         $t7, $at, L_41003614
    if (ctx->r15 == ctx->r1) {
        // 0x410034E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41003614;
    }
    // 0x410034E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x410034E8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x410034EC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x410034F0: bne         $t8, $at, L_41003574
    if (ctx->r24 != ctx->r1) {
        // 0x410034F4: lw          $t6, 0x58($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X58);
            goto L_41003574;
    }
    // 0x410034F4: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x410034F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x410034FC: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x41003500: nop

    // 0x41003504: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x41003508: nop

    // 0x4100350C: bc1t        L_41003574
    if (c1cs) {
        // 0x41003510: lw          $t6, 0x58($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X58);
            goto L_41003574;
    }
    // 0x41003510: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x41003514: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x41003518: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4100351C: beq         $t9, $at, L_41003570
    if (ctx->r25 == ctx->r1) {
        // 0x41003520: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_41003570;
    }
    // 0x41003520: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x41003524: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x41003528: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x4100352C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x41003530: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x41003534: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x41003538: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x4100353C: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x41003540: addiu       $t4, $zero, 0x2E
    ctx->r12 = ADD32(0, 0X2E);
    // 0x41003544: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x41003548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4100354C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x41003550: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x41003554: jal         0x410010E4
    // 0x41003558: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    ovl_item_main_10E4(rdram, ctx);
        goto after_1;
    // 0x41003558: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    after_1:
    // 0x4100355C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x41003560: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x41003564: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41003568: beq         $t5, $at, L_41003614
    if (ctx->r13 == ctx->r1) {
        // 0x4100356C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41003614;
    }
    // 0x4100356C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41003570:
    // 0x41003570: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
L_41003574:
    // 0x41003574: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x41003578: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x4100357C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x41003580: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x41003584: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x41003588: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x4100358C: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x41003590: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x41003594: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x41003598: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x4100359C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x410035A0: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x410035A4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x410035A8: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x410035AC: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x410035B0: nop

    // 0x410035B4: andi        $t0, $t9, 0x200
    ctx->r8 = ctx->r25 & 0X200;
    // 0x410035B8: bne         $t0, $zero, L_410035F8
    if (ctx->r8 != 0) {
        // 0x410035BC: nop
    
            goto L_410035F8;
    }
    // 0x410035BC: nop

    // 0x410035C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x410035C4: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x410035C8: nop

    // 0x410035CC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x410035D0: nop

    // 0x410035D4: bc1f        L_410035F8
    if (!c1cs) {
        // 0x410035D8: nop
    
            goto L_410035F8;
    }
    // 0x410035D8: nop

    // 0x410035DC: lwc1        $f16, 0x34($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X34);
    // 0x410035E0: lwc1        $f18, 0x30($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X30);
    // 0x410035E4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x410035E8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x410035EC: nop

    // 0x410035F0: bc1f        L_41003600
    if (!c1cs) {
        // 0x410035F4: nop
    
            goto L_41003600;
    }
    // 0x410035F4: nop

L_410035F8:
    // 0x410035F8: b           L_41003604
    // 0x410035FC: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
        goto L_41003604;
    // 0x410035FC: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
L_41003600:
    // 0x41003600: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
L_41003604:
    // 0x41003604: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x41003608: jal         0x410006C4
    // 0x4100360C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_item_main_6C4(rdram, ctx);
        goto after_2;
    // 0x4100360C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x41003610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41003614:
    // 0x41003614: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41003618: jr          $ra
    // 0x4100361C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4100361C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_item_main_3620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41003620: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x41003624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41003628: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4100362C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41003630: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x41003634: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x41003638: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x4100363C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x41003640: bc1f        L_41003660
    if (!c1cs) {
        // 0x41003644: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_41003660;
    }
    // 0x41003644: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x41003648: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x4100364C: nop

    // 0x41003650: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x41003654: nop

    // 0x41003658: bc1t        L_410036CC
    if (c1cs) {
        // 0x4100365C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410036CC;
    }
    // 0x4100365C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41003660:
    // 0x41003660: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x41003664: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x41003668: jal         0x410006C4
    // 0x4100366C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4100366C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x41003670: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x41003674: bne         $v0, $zero, L_410036CC
    if (ctx->r2 != 0) {
        // 0x41003678: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410036CC;
    }
    // 0x41003678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4100367C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x41003680: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x41003684: bne         $v0, $at, L_410036A0
    if (ctx->r2 != ctx->r1) {
        // 0x41003688: addiu       $a1, $zero, 0x84
        ctx->r5 = ADD32(0, 0X84);
            goto L_410036A0;
    }
    // 0x41003688: addiu       $a1, $zero, 0x84
    ctx->r5 = ADD32(0, 0X84);
    // 0x4100368C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x41003690: jal         0x410012C0
    // 0x41003694: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_item_main_12C0(rdram, ctx);
        goto after_1;
    // 0x41003694: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x41003698: b           L_410036CC
    // 0x4100369C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_410036CC;
    // 0x4100369C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_410036A0:
    // 0x410036A0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x410036A4: bne         $v0, $at, L_410036CC
    if (ctx->r2 != ctx->r1) {
        // 0x410036A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410036CC;
    }
    // 0x410036A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410036AC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x410036B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x410036B4: bne         $t7, $at, L_410036C8
    if (ctx->r15 != ctx->r1) {
        // 0x410036B8: addiu       $a1, $zero, 0x85
        ctx->r5 = ADD32(0, 0X85);
            goto L_410036C8;
    }
    // 0x410036B8: addiu       $a1, $zero, 0x85
    ctx->r5 = ADD32(0, 0X85);
    // 0x410036BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x410036C0: jal         0x410012C0
    // 0x410036C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_item_main_12C0(rdram, ctx);
        goto after_2;
    // 0x410036C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_410036C8:
    // 0x410036C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_410036CC:
    // 0x410036CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x410036D0: jr          $ra
    // 0x410036D4: nop

    return;
    // 0x410036D4: nop

;}
RECOMP_FUNC void ovl_item_main_36D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410036D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x410036DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x410036E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x410036E4: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x410036E8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410036EC: sra         $t7, $t6, 12
    ctx->r15 = S32(SIGNED(ctx->r14) >> 12);
    // 0x410036F0: andi        $t8, $t7, 0x7
    ctx->r24 = ctx->r15 & 0X7;
    // 0x410036F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x410036F8: addu        $at, $at, $t8
    gpr jr_addend_41003704 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x410036FC: lw          $t8, 0x7114($at)
    ctx->r24 = ADD32(ctx->r1, 0X7114);
    // 0x41003700: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x41003704: jr          $t8
    // 0x41003708: nop

    switch (jr_addend_41003704 >> 2) {
        case 0: goto L_41003804; break;
        case 1: goto L_4100370C; break;
        case 2: goto L_41003738; break;
        case 3: goto L_4100376C; break;
        case 4: goto L_4100378C; break;
        case 5: goto L_410037AC; break;
        case 6: goto L_410037CC; break;
        case 7: goto L_410037EC; break;
        default: switch_error(__func__, 0x41003704, 0x41007114);
    }
    // 0x41003708: nop

L_4100370C:
    // 0x4100370C: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x41003710: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x41003714: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x41003718: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x4100371C: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x41003720: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x41003724: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x41003728: jal         0x410006C4
    // 0x4100372C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4100372C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x41003730: b           L_41003808
    // 0x41003734: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_41003808;
    // 0x41003734: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_41003738:
    // 0x41003738: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x4100373C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x41003740: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x41003744: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x41003748: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x4100374C: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x41003750: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x41003754: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x41003758: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x4100375C: jal         0x410006C4
    // 0x41003760: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x41003760: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x41003764: b           L_41003808
    // 0x41003768: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_41003808;
    // 0x41003768: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4100376C:
    // 0x4100376C: lw          $t4, 0xC($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC);
    // 0x41003770: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x41003774: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x41003778: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x4100377C: jal         0x4100349C
    // 0x41003780: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    ovl_item_main_349C(rdram, ctx);
        goto after_2;
    // 0x41003780: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_2:
    // 0x41003784: b           L_41003808
    // 0x41003788: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_41003808;
    // 0x41003788: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4100378C:
    // 0x4100378C: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x41003790: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x41003794: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x41003798: addiu       $a2, $zero, 0x25
    ctx->r6 = ADD32(0, 0X25);
    // 0x4100379C: jal         0x4100349C
    // 0x410037A0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    ovl_item_main_349C(rdram, ctx);
        goto after_3;
    // 0x410037A0: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x410037A4: b           L_41003808
    // 0x410037A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_41003808;
    // 0x410037A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_410037AC:
    // 0x410037AC: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x410037B0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x410037B4: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x410037B8: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x410037BC: jal         0x4100349C
    // 0x410037C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    ovl_item_main_349C(rdram, ctx);
        goto after_4;
    // 0x410037C0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_4:
    // 0x410037C4: b           L_41003808
    // 0x410037C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_41003808;
    // 0x410037C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_410037CC:
    // 0x410037CC: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x410037D0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x410037D4: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x410037D8: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x410037DC: jal         0x4100349C
    // 0x410037E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_item_main_349C(rdram, ctx);
        goto after_5;
    // 0x410037E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_5:
    // 0x410037E4: b           L_41003808
    // 0x410037E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_41003808;
    // 0x410037E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_410037EC:
    // 0x410037EC: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x410037F0: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x410037F4: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x410037F8: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x410037FC: jal         0x4100349C
    // 0x41003800: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    ovl_item_main_349C(rdram, ctx);
        goto after_6;
    // 0x41003800: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_6:
L_41003804:
    // 0x41003804: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_41003808:
    // 0x41003808: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4100380C: jr          $ra
    // 0x41003810: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x41003810: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_item_main_3814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41003814: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x41003818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4100381C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x41003820: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x41003824: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x41003828: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x4100382C: bne         $t6, $zero, L_4100389C
    if (ctx->r14 != 0) {
        // 0x41003830: andi        $t7, $v0, 0x20
        ctx->r15 = ctx->r2 & 0X20;
            goto L_4100389C;
    }
    // 0x41003830: andi        $t7, $v0, 0x20
    ctx->r15 = ctx->r2 & 0X20;
    // 0x41003834: beq         $t7, $zero, L_41003864
    if (ctx->r15 == 0) {
        // 0x41003838: lw          $t1, 0x3C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X3C);
            goto L_41003864;
    }
    // 0x41003838: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x4100383C: jal         0x410010A8
    // 0x41003840: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_item_main_10A8(rdram, ctx);
        goto after_0;
    // 0x41003840: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x41003844: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x41003848: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x4100384C: lw          $t0, 0x4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X4);
    // 0x41003850: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x41003854: nop

    // 0x41003858: beq         $t9, $t0, L_410038A0
    if (ctx->r25 == ctx->r8) {
        // 0x4100385C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410038A0;
    }
    // 0x4100385C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41003860: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
L_41003864:
    // 0x41003864: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x41003868: lw          $a0, 0x8($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X8);
    // 0x4100386C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x41003870: jal         0x410006C4
    // 0x41003874: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x41003874: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x41003878: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x4100387C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x41003880: beq         $v0, $zero, L_41003890
    if (ctx->r2 == 0) {
        // 0x41003884: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_41003890;
    }
    // 0x41003884: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x41003888: bne         $v0, $at, L_410038A0
    if (ctx->r2 != ctx->r1) {
        // 0x4100388C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410038A0;
    }
    // 0x4100388C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41003890:
    // 0x41003890: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x41003894: jal         0x410036D8
    // 0x41003898: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_item_main_36D8(rdram, ctx);
        goto after_2;
    // 0x41003898: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
L_4100389C:
    // 0x4100389C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_410038A0:
    // 0x410038A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x410038A4: jr          $ra
    // 0x410038A8: nop

    return;
    // 0x410038A8: nop

;}
RECOMP_FUNC void ovl_item_main_38AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410038AC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x410038B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410038B4: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x410038B8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x410038BC: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x410038C0: beq         $t7, $zero, L_41003940
    if (ctx->r15 == 0) {
        // 0x410038C4: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_41003940;
    }
    // 0x410038C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x410038C8: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x410038CC: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    // 0x410038D0: jal         0x410006C4
    // 0x410038D4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x410038D4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x410038D8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x410038DC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x410038E0: lw          $t8, 0x94($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X94);
    // 0x410038E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x410038E8: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x410038EC: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x410038F0: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x410038F4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x410038F8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x410038FC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x41003900: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x41003904: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x41003908: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x4100390C: jal         0x410010E4
    // 0x41003910: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    ovl_item_main_10E4(rdram, ctx);
        goto after_1;
    // 0x41003910: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x41003914: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x41003918: nop

    // 0x4100391C: lw          $v0, 0x98($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X98);
    // 0x41003920: nop

    // 0x41003924: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x41003928: bgtz        $v0, L_41003940
    if (SIGNED(ctx->r2) > 0) {
        // 0x4100392C: sw          $t9, 0x98($a3)
        MEM_W(0X98, ctx->r7) = ctx->r25;
            goto L_41003940;
    }
    // 0x4100392C: sw          $t9, 0x98($a3)
    MEM_W(0X98, ctx->r7) = ctx->r25;
    // 0x41003930: lw          $t0, 0x60($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X60);
    // 0x41003934: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x41003938: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x4100393C: sw          $t1, 0x60($a3)
    MEM_W(0X60, ctx->r7) = ctx->r9;
L_41003940:
    // 0x41003940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41003944: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x41003948: jr          $ra
    // 0x4100394C: nop

    return;
    // 0x4100394C: nop

;}
RECOMP_FUNC void ovl_item_main_3950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41003950: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x41003954: nop

    // 0x41003958: ori         $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 | 0X4000;
    // 0x4100395C: jr          $ra
    // 0x41003960: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    return;
    // 0x41003960: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_item_main_3964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41003964: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x41003968: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4100396C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41003970: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x41003974: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x41003978: nop

    // 0x4100397C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x41003980: jal         0x410017C4
    // 0x41003984: nop

    ovl_item_main_17C4(rdram, ctx);
        goto after_0;
    // 0x41003984: nop

    after_0:
    // 0x41003988: lw          $v1, 0x88($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X88);
    // 0x4100398C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x41003990: lw          $a3, 0xC($v1)
    ctx->r7 = MEM_W(ctx->r3, 0XC);
    // 0x41003994: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41003998: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x4100399C: sw          $t7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r15;
    // 0x410039A0: beq         $v0, $at, L_410039BC
    if (ctx->r2 == ctx->r1) {
        // 0x410039A4: sw          $zero, 0x74($sp)
        MEM_W(0X74, ctx->r29) = 0;
            goto L_410039BC;
    }
    // 0x410039A4: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x410039A8: lw          $t8, 0x60($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X60);
    // 0x410039AC: nop

    // 0x410039B0: andi        $t9, $t8, 0x2000
    ctx->r25 = ctx->r24 & 0X2000;
    // 0x410039B4: beq         $t9, $zero, L_410039C4
    if (ctx->r25 == 0) {
        // 0x410039B8: nop
    
            goto L_410039C4;
    }
    // 0x410039B8: nop

L_410039BC:
    // 0x410039BC: b           L_41003ED4
    // 0x410039C0: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
        goto L_41003ED4;
    // 0x410039C0: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_410039C4:
    // 0x410039C4: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x410039C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x410039CC: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x410039D0: bne         $t1, $zero, L_41003A70
    if (ctx->r9 != 0) {
        // 0x410039D4: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_41003A70;
    }
    // 0x410039D4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x410039D8: lw          $t2, 0x10($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X10);
    // 0x410039DC: addiu       $t5, $s0, 0x1C
    ctx->r13 = ADD32(ctx->r16, 0X1C);
    // 0x410039E0: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x410039E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x410039E8: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
    // 0x410039EC: lw          $t3, 0x10($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X10);
    // 0x410039F0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x410039F4: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x410039F8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x410039FC: swc1        $f6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f6.u32l;
    // 0x41003A00: lw          $t4, 0x10($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X10);
    // 0x41003A04: nop

    // 0x41003A08: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x41003A0C: nop

    // 0x41003A10: swc1        $f8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f8.u32l;
    // 0x41003A14: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x41003A18: lw          $t6, 0xC($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XC);
    // 0x41003A1C: nop

    // 0x41003A20: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x41003A24: lw          $t7, 0x10($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X10);
    // 0x41003A28: nop

    // 0x41003A2C: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x41003A30: nop

    // 0x41003A34: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x41003A38: lw          $t8, 0x10($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X10);
    // 0x41003A3C: nop

    // 0x41003A40: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x41003A44: nop

    // 0x41003A48: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x41003A4C: lw          $t9, 0x10($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X10);
    // 0x41003A50: nop

    // 0x41003A54: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x41003A58: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x41003A5C: jal         0x410010E4
    // 0x41003A60: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    ovl_item_main_10E4(rdram, ctx);
        goto after_1;
    // 0x41003A60: swc1        $f18, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x41003A64: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003A68: b           L_41003A90
    // 0x41003A6C: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
        goto L_41003A90;
    // 0x41003A6C: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
L_41003A70:
    // 0x41003A70: jal         0x41003620
    // 0x41003A74: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    ovl_item_main_3620(rdram, ctx);
        goto after_2;
    // 0x41003A74: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_2:
    // 0x41003A78: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    // 0x41003A7C: jal         0x41003814
    // 0x41003A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_3814(rdram, ctx);
        goto after_3;
    // 0x41003A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x41003A84: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003A88: nop

    // 0x41003A8C: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
L_41003A90:
    // 0x41003A90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x41003A94: lwc1        $f6, 0x14($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X14);
    // 0x41003A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41003A9C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x41003AA0: nop

    // 0x41003AA4: bc1f        L_41003B7C
    if (!c1cs) {
        // 0x41003AA8: nop
    
            goto L_41003B7C;
    }
    // 0x41003AA8: nop

    // 0x41003AAC: jal         0x410038AC
    // 0x41003AB0: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    ovl_item_main_38AC(rdram, ctx);
        goto after_4;
    // 0x41003AB0: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_4:
    // 0x41003AB4: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x41003AB8: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003ABC: andi        $t0, $v1, 0x4000
    ctx->r8 = ctx->r3 & 0X4000;
    // 0x41003AC0: bne         $t0, $zero, L_41003B00
    if (ctx->r8 != 0) {
        // 0x41003AC4: andi        $t1, $v1, 0x20
        ctx->r9 = ctx->r3 & 0X20;
            goto L_41003B00;
    }
    // 0x41003AC4: andi        $t1, $v1, 0x20
    ctx->r9 = ctx->r3 & 0X20;
    // 0x41003AC8: beq         $t1, $zero, L_41003B00
    if (ctx->r9 == 0) {
        // 0x41003ACC: andi        $t2, $v1, 0x10
        ctx->r10 = ctx->r3 & 0X10;
            goto L_41003B00;
    }
    // 0x41003ACC: andi        $t2, $v1, 0x10
    ctx->r10 = ctx->r3 & 0X10;
    // 0x41003AD0: bne         $t2, $zero, L_41003B00
    if (ctx->r10 != 0) {
        // 0x41003AD4: andi        $t3, $v1, 0x4
        ctx->r11 = ctx->r3 & 0X4;
            goto L_41003B00;
    }
    // 0x41003AD4: andi        $t3, $v1, 0x4
    ctx->r11 = ctx->r3 & 0X4;
    // 0x41003AD8: bne         $t3, $zero, L_41003B00
    if (ctx->r11 != 0) {
        // 0x41003ADC: addiu       $at, $zero, -0x21
        ctx->r1 = ADD32(0, -0X21);
            goto L_41003B00;
    }
    // 0x41003ADC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x41003AE0: and         $t4, $v1, $at
    ctx->r12 = ctx->r3 & ctx->r1;
    // 0x41003AE4: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x41003AE8: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x41003AEC: jal         0x41003950
    // 0x41003AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_3950(rdram, ctx);
        goto after_5;
    // 0x41003AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x41003AF4: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003AF8: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x41003AFC: nop

L_41003B00:
    // 0x41003B00: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x41003B04: and         $t5, $v1, $at
    ctx->r13 = ctx->r3 & ctx->r1;
    // 0x41003B08: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x41003B0C: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x41003B10: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x41003B14: jal         0x41001960
    // 0x41003B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_1960(rdram, ctx);
        goto after_6;
    // 0x41003B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x41003B1C: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x41003B20: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003B24: andi        $t6, $v1, 0x8
    ctx->r14 = ctx->r3 & 0X8;
    // 0x41003B28: beq         $t6, $zero, L_41003B4C
    if (ctx->r14 == 0) {
        // 0x41003B2C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41003B4C;
    }
    // 0x41003B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41003B30: jal         0x4100327C
    // 0x41003B34: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    ovl_item_main_327C(rdram, ctx);
        goto after_7;
    // 0x41003B34: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_7:
    // 0x41003B38: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x41003B3C: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x41003B40: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003B44: and         $v1, $t7, $at
    ctx->r3 = ctx->r15 & ctx->r1;
    // 0x41003B48: sw          $v1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r3;
L_41003B4C:
    // 0x41003B4C: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x41003B50: and         $t9, $v1, $at
    ctx->r25 = ctx->r3 & ctx->r1;
    // 0x41003B54: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x41003B58: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x41003B5C: beq         $t0, $zero, L_41003B70
    if (ctx->r8 == 0) {
        // 0x41003B60: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_41003B70;
    }
    // 0x41003B60: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x41003B64: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x41003B68: and         $v1, $t9, $at
    ctx->r3 = ctx->r25 & ctx->r1;
    // 0x41003B6C: sw          $v1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r3;
L_41003B70:
    // 0x41003B70: ori         $t2, $v1, 0x1000
    ctx->r10 = ctx->r3 | 0X1000;
    // 0x41003B74: b           L_41003BB4
    // 0x41003B78: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
        goto L_41003BB4;
    // 0x41003B78: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
L_41003B7C:
    // 0x41003B7C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x41003B80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41003B84: beq         $v0, $at, L_41003BB4
    if (ctx->r2 == ctx->r1) {
        // 0x41003B88: nop
    
            goto L_41003BB4;
    }
    // 0x41003B88: nop

    // 0x41003B8C: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x41003B90: nop

    // 0x41003B94: beq         $t3, $v0, L_41003BB4
    if (ctx->r11 == ctx->r2) {
        // 0x41003B98: nop
    
            goto L_41003BB4;
    }
    // 0x41003B98: nop

    // 0x41003B9C: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
    // 0x41003BA0: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x41003BA4: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x41003BA8: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
    // 0x41003BAC: ori         $t7, $t5, 0x800
    ctx->r15 = ctx->r13 | 0X800;
    // 0x41003BB0: sw          $t7, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r15;
L_41003BB4:
    // 0x41003BB4: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x41003BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41003BBC: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x41003BC0: beq         $t9, $zero, L_41003BDC
    if (ctx->r25 == 0) {
        // 0x41003BC4: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_41003BDC;
    }
    // 0x41003BC4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x41003BC8: lw          $t0, 0x58($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X58);
    // 0x41003BCC: nop

    // 0x41003BD0: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x41003BD4: b           L_41003BEC
    // 0x41003BD8: sw          $t1, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r9;
        goto L_41003BEC;
    // 0x41003BD8: sw          $t1, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r9;
L_41003BDC:
    // 0x41003BDC: lw          $t2, 0x58($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X58);
    // 0x41003BE0: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x41003BE4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x41003BE8: sw          $t3, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r11;
L_41003BEC:
    // 0x41003BEC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x41003BF0: jal         0x410011A4
    // 0x41003BF4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    ovl_item_main_11A4(rdram, ctx);
        goto after_8;
    // 0x41003BF4: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_8:
    // 0x41003BF8: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003BFC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x41003C00: beq         $v0, $at, L_41003C10
    if (ctx->r2 == ctx->r1) {
        // 0x41003C04: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_41003C10;
    }
    // 0x41003C04: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x41003C08: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x41003C0C: sw          $t4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r12;
L_41003C10:
    // 0x41003C10: lw          $t5, 0x60($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X60);
    // 0x41003C14: nop

    // 0x41003C18: andi        $t6, $t5, 0x4000
    ctx->r14 = ctx->r13 & 0X4000;
    // 0x41003C1C: bne         $t6, $zero, L_41003CE8
    if (ctx->r14 != 0) {
        // 0x41003C20: nop
    
            goto L_41003CE8;
    }
    // 0x41003C20: nop

    // 0x41003C24: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x41003C28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41003C2C: beq         $v0, $at, L_41003CE8
    if (ctx->r2 == ctx->r1) {
        // 0x41003C30: nop
    
            goto L_41003CE8;
    }
    // 0x41003C30: nop

    // 0x41003C34: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x41003C38: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x41003C3C: bne         $a0, $v0, L_41003CE8
    if (ctx->r4 != ctx->r2) {
        // 0x41003C40: addiu       $a2, $sp, 0x5C
        ctx->r6 = ADD32(ctx->r29, 0X5C);
            goto L_41003CE8;
    }
    // 0x41003C40: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x41003C44: jal         0x410006C4
    // 0x41003C48: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    ovl_item_main_6C4(rdram, ctx);
        goto after_9;
    // 0x41003C48: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_9:
    // 0x41003C4C: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003C50: bne         $v0, $zero, L_41003C90
    if (ctx->r2 != 0) {
        // 0x41003C54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41003C90;
    }
    // 0x41003C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41003C58: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x41003C5C: nop

    // 0x41003C60: bne         $t7, $zero, L_41003C90
    if (ctx->r15 != 0) {
        // 0x41003C64: nop
    
            goto L_41003C90;
    }
    // 0x41003C64: nop

    // 0x41003C68: lw          $t8, 0xC($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC);
    // 0x41003C6C: ori         $at, $zero, 0x8040
    ctx->r1 = 0 | 0X8040;
    // 0x41003C70: slt         $at, $t8, $at
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x41003C74: beq         $at, $zero, L_41003CA0
    if (ctx->r1 == 0) {
        // 0x41003C78: nop
    
            goto L_41003CA0;
    }
    // 0x41003C78: nop

    // 0x41003C7C: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x41003C80: nop

    // 0x41003C84: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x41003C88: b           L_41003CA0
    // 0x41003C8C: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
        goto L_41003CA0;
    // 0x41003C8C: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
L_41003C90:
    // 0x41003C90: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x41003C94: nop

    // 0x41003C98: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x41003C9C: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
L_41003CA0:
    // 0x41003CA0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x41003CA4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x41003CA8: andi        $t3, $v1, 0x4
    ctx->r11 = ctx->r3 & 0X4;
    // 0x41003CAC: bne         $t3, $zero, L_41003CCC
    if (ctx->r11 != 0) {
        // 0x41003CB0: andi        $t4, $v1, 0x4000
        ctx->r12 = ctx->r3 & 0X4000;
            goto L_41003CCC;
    }
    // 0x41003CB0: andi        $t4, $v1, 0x4000
    ctx->r12 = ctx->r3 & 0X4000;
    // 0x41003CB4: jal         0x41002D58
    // 0x41003CB8: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    ovl_item_main_2D58(rdram, ctx);
        goto after_10;
    // 0x41003CB8: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_10:
    // 0x41003CBC: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003CC0: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x41003CC4: nop

    // 0x41003CC8: andi        $t4, $v1, 0x4000
    ctx->r12 = ctx->r3 & 0X4000;
L_41003CCC:
    // 0x41003CCC: beq         $t4, $zero, L_41003CDC
    if (ctx->r12 == 0) {
        // 0x41003CD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41003CDC;
    }
    // 0x41003CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41003CD4: jal         0x4100307C
    // 0x41003CD8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    ovl_item_main_307C(rdram, ctx);
        goto after_11;
    // 0x41003CD8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_11:
L_41003CDC:
    // 0x41003CDC: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x41003CE0: b           L_41003ED4
    // 0x41003CE4: sw          $zero, 0xC($t5)
    MEM_W(0XC, ctx->r13) = 0;
        goto L_41003ED4;
    // 0x41003CE4: sw          $zero, 0xC($t5)
    MEM_W(0XC, ctx->r13) = 0;
L_41003CE8:
    // 0x41003CE8: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x41003CEC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x41003CF0: bne         $v0, $at, L_41003D04
    if (ctx->r2 != ctx->r1) {
        // 0x41003CF4: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_41003D04;
    }
    // 0x41003CF4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x41003CF8: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
    // 0x41003CFC: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x41003D00: nop

L_41003D04:
    // 0x41003D04: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x41003D08: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x41003D0C: bne         $t7, $at, L_41003E40
    if (ctx->r15 != ctx->r1) {
        // 0x41003D10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41003E40;
    }
    // 0x41003D10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41003D14: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x41003D18: jal         0x4100314C
    // 0x41003D1C: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    ovl_item_main_314C(rdram, ctx);
        goto after_12;
    // 0x41003D1C: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_12:
    // 0x41003D20: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003D24: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x41003D28: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x41003D2C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x41003D30: jal         0x410006C4
    // 0x41003D34: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    ovl_item_main_6C4(rdram, ctx);
        goto after_13;
    // 0x41003D34: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    after_13:
    // 0x41003D38: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003D3C: bne         $v0, $zero, L_41003EC8
    if (ctx->r2 != 0) {
        // 0x41003D40: lw          $t2, 0x78($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X78);
            goto L_41003EC8;
    }
    // 0x41003D40: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x41003D44: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x41003D48: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x41003D4C: bne         $t8, $at, L_41003EC8
    if (ctx->r24 != ctx->r1) {
        // 0x41003D50: lw          $t2, 0x78($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X78);
            goto L_41003EC8;
    }
    // 0x41003D50: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x41003D54: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x41003D58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x41003D5C: bne         $t9, $at, L_41003EC8
    if (ctx->r25 != ctx->r1) {
        // 0x41003D60: lw          $t2, 0x78($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X78);
            goto L_41003EC8;
    }
    // 0x41003D60: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x41003D64: lw          $v1, 0x60($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X60);
    // 0x41003D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41003D6C: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    // 0x41003D70: beq         $t0, $zero, L_41003DB0
    if (ctx->r8 == 0) {
        // 0x41003D74: andi        $t3, $v1, 0x200
        ctx->r11 = ctx->r3 & 0X200;
            goto L_41003DB0;
    }
    // 0x41003D74: andi        $t3, $v1, 0x200
    ctx->r11 = ctx->r3 & 0X200;
    // 0x41003D78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x41003D7C: jal         0x41001338
    // 0x41003D80: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    ovl_item_main_1338(rdram, ctx);
        goto after_14;
    // 0x41003D80: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_14:
    // 0x41003D84: lw          $a3, 0x7C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X7C);
    // 0x41003D88: beq         $v0, $zero, L_41003EC4
    if (ctx->r2 == 0) {
        // 0x41003D8C: addiu       $at, $zero, -0x5
        ctx->r1 = ADD32(0, -0X5);
            goto L_41003EC4;
    }
    // 0x41003D8C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x41003D90: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x41003D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41003D98: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x41003D9C: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x41003DA0: jal         0x41002D58
    // 0x41003DA4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    ovl_item_main_2D58(rdram, ctx);
        goto after_15;
    // 0x41003DA4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_15:
    // 0x41003DA8: b           L_41003EC8
    // 0x41003DAC: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
        goto L_41003EC8;
    // 0x41003DAC: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
L_41003DB0:
    // 0x41003DB0: bne         $t3, $zero, L_41003EC8
    if (ctx->r11 != 0) {
        // 0x41003DB4: lw          $t2, 0x78($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X78);
            goto L_41003EC8;
    }
    // 0x41003DB4: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x41003DB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41003DBC: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x41003DC0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x41003DC4: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x41003DC8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x41003DCC: bc1t        L_41003DDC
    if (c1cs) {
        // 0x41003DD0: nop
    
            goto L_41003DDC;
    }
    // 0x41003DD0: nop

    // 0x41003DD4: b           L_41003EC4
    // 0x41003DD8: sw          $t4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r12;
        goto L_41003EC4;
    // 0x41003DD8: sw          $t4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r12;
L_41003DDC:
    // 0x41003DDC: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x41003DE0: jal         0x410006C4
    // 0x41003DE4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_item_main_6C4(rdram, ctx);
        goto after_16;
    // 0x41003DE4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_16:
    // 0x41003DE8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x41003DEC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41003DF0: lwc1        $f10, 0x1C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x41003DF4: nop

    // 0x41003DF8: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x41003DFC: nop

    // 0x41003E00: bc1f        L_41003EC8
    if (!c1cs) {
        // 0x41003E04: lw          $t2, 0x78($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X78);
            goto L_41003EC8;
    }
    // 0x41003E04: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x41003E08: lwc1        $f16, 0x14($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X14);
    // 0x41003E0C: nop

    // 0x41003E10: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x41003E14: nop

    // 0x41003E18: bc1f        L_41003EC8
    if (!c1cs) {
        // 0x41003E1C: lw          $t2, 0x78($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X78);
            goto L_41003EC8;
    }
    // 0x41003E1C: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x41003E20: lwc1        $f18, 0x28($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X28);
    // 0x41003E24: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x41003E28: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x41003E2C: nop

    // 0x41003E30: bc1f        L_41003EC8
    if (!c1cs) {
        // 0x41003E34: lw          $t2, 0x78($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X78);
            goto L_41003EC8;
    }
    // 0x41003E34: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x41003E38: b           L_41003EC4
    // 0x41003E3C: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
        goto L_41003EC4;
    // 0x41003E3C: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
L_41003E40:
    // 0x41003E40: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x41003E44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x41003E48: bne         $t7, $at, L_41003EA4
    if (ctx->r15 != ctx->r1) {
        // 0x41003E4C: nop
    
            goto L_41003EA4;
    }
    // 0x41003E4C: nop

    // 0x41003E50: lw          $a1, 0x10($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X10);
    // 0x41003E54: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x41003E58: lwc1        $f0, 0x4($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X4);
    // 0x41003E5C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41003E60: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x41003E64: nop

    // 0x41003E68: bc1f        L_41003E78
    if (!c1cs) {
        // 0x41003E6C: nop
    
            goto L_41003E78;
    }
    // 0x41003E6C: nop

    // 0x41003E70: b           L_41003E7C
    // 0x41003E74: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_41003E7C;
    // 0x41003E74: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_41003E78:
    // 0x41003E78: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_41003E7C:
    // 0x41003E7C: lwc1        $f6, 0x7134($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7134);
    // 0x41003E80: nop

    // 0x41003E84: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x41003E88: nop

    // 0x41003E8C: bc1f        L_41003EA4
    if (!c1cs) {
        // 0x41003E90: nop
    
            goto L_41003EA4;
    }
    // 0x41003E90: nop

    // 0x41003E94: jal         0x41003364
    // 0x41003E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_3364(rdram, ctx);
        goto after_17;
    // 0x41003E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x41003E9C: b           L_41003EC8
    // 0x41003EA0: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
        goto L_41003EC8;
    // 0x41003EA0: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
L_41003EA4:
    // 0x41003EA4: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x41003EA8: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x41003EAC: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x41003EB0: beq         $t9, $zero, L_41003EC8
    if (ctx->r25 == 0) {
        // 0x41003EB4: lw          $t2, 0x78($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X78);
            goto L_41003EC8;
    }
    // 0x41003EB4: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x41003EB8: bne         $t0, $zero, L_41003EC4
    if (ctx->r8 != 0) {
        // 0x41003EBC: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_41003EC4;
    }
    // 0x41003EBC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x41003EC0: sw          $t1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r9;
L_41003EC4:
    // 0x41003EC4: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
L_41003EC8:
    // 0x41003EC8: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x41003ECC: nop

    // 0x41003ED0: sw          $t2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r10;
L_41003ED4:
    // 0x41003ED4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x41003ED8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41003EDC: jr          $ra
    // 0x41003EE0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x41003EE0: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_item_main_3EE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41003EE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41003EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41003EEC: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x41003EF0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x41003EF4: jal         0x410017C4
    // 0x41003EF8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_item_main_17C4(rdram, ctx);
        goto after_0;
    // 0x41003EF8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x41003EFC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x41003F00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41003F04: beq         $v0, $at, L_41003F1C
    if (ctx->r2 == ctx->r1) {
        // 0x41003F08: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_41003F1C;
    }
    // 0x41003F08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x41003F0C: addiu       $t6, $v0, 0x1C
    ctx->r14 = ADD32(ctx->r2, 0X1C);
    // 0x41003F10: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    // 0x41003F14: jal         0x410010E4
    // 0x41003F18: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_item_main_10E4(rdram, ctx);
        goto after_1;
    // 0x41003F18: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_1:
L_41003F1C:
    // 0x41003F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41003F20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x41003F24: jr          $ra
    // 0x41003F28: nop

    return;
    // 0x41003F28: nop

;}
RECOMP_FUNC void ovl_item_main_3F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41003F2C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x41003F30: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x41003F34: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x41003F38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x41003F3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41003F40: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x41003F44: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x41003F48: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x41003F4C: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x41003F50: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x41003F54: jal         0x410006C4
    // 0x41003F58: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x41003F58: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x41003F5C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x41003F60: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x41003F64: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x41003F68: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x41003F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x41003F70: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x41003F74: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x41003F78: nop

    // 0x41003F7C: swc1        $f8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f8.u32l;
    // 0x41003F80: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x41003F84: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x41003F88: beq         $t6, $zero, L_41003F9C
    if (ctx->r14 == 0) {
        // 0x41003F8C: nop
    
            goto L_41003F9C;
    }
    // 0x41003F8C: nop

    // 0x41003F90: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x41003F94: b           L_41003F9C
    // 0x41003F98: nop

        goto L_41003F9C;
    // 0x41003F98: nop

L_41003F9C:
    // 0x41003F9C: jal         0x410006C4
    // 0x41003FA0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x41003FA0: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x41003FA4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x41003FA8: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
    // 0x41003FAC: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x41003FB0: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x41003FB4: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x41003FB8: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x41003FBC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x41003FC0: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x41003FC4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x41003FC8: sw          $t1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r9;
    // 0x41003FCC: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x41003FD0: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x41003FD4: lw          $t2, 0x9C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X9C);
    // 0x41003FD8: addiu       $t6, $sp, 0x28
    ctx->r14 = ADD32(ctx->r29, 0X28);
    // 0x41003FDC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x41003FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41003FE4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x41003FE8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x41003FEC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x41003FF0: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x41003FF4: lw          $t3, 0x74($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X74);
    // 0x41003FF8: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x41003FFC: sra         $t4, $t3, 12
    ctx->r12 = S32(SIGNED(ctx->r11) >> 12);
    // 0x41004000: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x41004004: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x41004008: nop

    // 0x4100400C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x41004010: jal         0x410010E4
    // 0x41004014: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    ovl_item_main_10E4(rdram, ctx);
        goto after_2;
    // 0x41004014: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x41004018: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x4100401C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x41004020: beq         $t7, $zero, L_41004054
    if (ctx->r15 == 0) {
        // 0x41004024: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41004054;
    }
    // 0x41004024: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x41004028: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4100402C: jal         0x410006C4
    // 0x41004030: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_item_main_6C4(rdram, ctx);
        goto after_3;
    // 0x41004030: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x41004034: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x41004038: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x4100403C: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x41004040: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x41004044: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x41004048: jal         0x410006C4
    // 0x4100404C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_item_main_6C4(rdram, ctx);
        goto after_4;
    // 0x4100404C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_4:
    // 0x41004050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41004054:
    // 0x41004054: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x41004058: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4100405C: jr          $ra
    // 0x41004060: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x41004060: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_item_main_4064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004064: jr          $ra
    // 0x41004068: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x41004068: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_item_main_406C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100406C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41004070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004074: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x41004078: jal         0x410010E4
    // 0x4100407C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_item_main_10E4(rdram, ctx);
        goto after_0;
    // 0x4100407C: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x41004080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41004088: jr          $ra
    // 0x4100408C: nop

    return;
    // 0x4100408C: nop

;}
RECOMP_FUNC void ovl_item_main_4090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004090: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x41004094: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x41004098: swc1        $f12, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f12.u32l;
    // 0x4100409C: jr          $ra
    // 0x410040A0: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x410040A0: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_item_main_40A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410040A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x410040A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x410040AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x410040B0: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x410040B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x410040B8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x410040BC: beq         $t7, $zero, L_4100418C
    if (ctx->r15 == 0) {
        // 0x410040C0: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_4100418C;
    }
    // 0x410040C0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x410040C4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x410040C8: lw          $v0, 0x64($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X64);
    // 0x410040CC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x410040D0: beq         $v0, $at, L_4100410C
    if (ctx->r2 == ctx->r1) {
        // 0x410040D4: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_4100410C;
    }
    // 0x410040D4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x410040D8: beq         $v0, $at, L_41004158
    if (ctx->r2 == ctx->r1) {
        // 0x410040DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41004158;
    }
    // 0x410040DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x410040E0: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x410040E4: beq         $v0, $at, L_410040FC
    if (ctx->r2 == ctx->r1) {
        // 0x410040E8: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_410040FC;
    }
    // 0x410040E8: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x410040EC: beq         $v0, $at, L_41004164
    if (ctx->r2 == ctx->r1) {
        // 0x410040F0: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_41004164;
    }
    // 0x410040F0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x410040F4: b           L_41004164
    // 0x410040F8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
        goto L_41004164;
    // 0x410040F8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_410040FC:
    // 0x410040FC: jal         0x4100406C
    // 0x41004100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_406C(rdram, ctx);
        goto after_0;
    // 0x41004100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x41004104: b           L_41004164
    // 0x41004108: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
        goto L_41004164;
    // 0x41004108: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_4100410C:
    // 0x4100410C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41004110: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x41004114: nop

    // 0x41004118: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x4100411C: nop

    // 0x41004120: bc1f        L_41004150
    if (!c1cs) {
        // 0x41004124: nop
    
            goto L_41004150;
    }
    // 0x41004124: nop

    // 0x41004128: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x4100412C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41004130: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x41004134: nop

    // 0x41004138: bc1t        L_41004150
    if (c1cs) {
        // 0x4100413C: nop
    
            goto L_41004150;
    }
    // 0x4100413C: nop

    // 0x41004140: jal         0x41004090
    // 0x41004144: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_item_main_4090(rdram, ctx);
        goto after_1;
    // 0x41004144: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_1:
    // 0x41004148: b           L_41004164
    // 0x4100414C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
        goto L_41004164;
    // 0x4100414C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_41004150:
    // 0x41004150: b           L_41004160
    // 0x41004154: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
        goto L_41004160;
    // 0x41004154: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_41004158:
    // 0x41004158: jal         0x41004090
    // 0x4100415C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    ovl_item_main_4090(rdram, ctx);
        goto after_2;
    // 0x4100415C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    after_2:
L_41004160:
    // 0x41004160: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_41004164:
    // 0x41004164: nop

    // 0x41004168: beq         $t9, $zero, L_4100417C
    if (ctx->r25 == 0) {
        // 0x4100416C: nop
    
            goto L_4100417C;
    }
    // 0x4100416C: nop

    // 0x41004170: lw          $t0, 0x64($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X64);
    // 0x41004174: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x41004178: sw          $t0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->r8;
L_4100417C:
    // 0x4100417C: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x41004180: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x41004184: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x41004188: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
L_4100418C:
    // 0x4100418C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x41004190: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41004194: jr          $ra
    // 0x41004198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x41004198: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_item_main_419C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100419C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x410041A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410041A4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x410041A8: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x410041AC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x410041B0: jal         0x410006C4
    // 0x410041B4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x410041B4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x410041B8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x410041BC: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x410041C0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x410041C4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x410041C8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x410041CC: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x410041D0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x410041D4: jal         0x410006C4
    // 0x410041D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x410041D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x410041DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410041E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x410041E4: jr          $ra
    // 0x410041E8: nop

    return;
    // 0x410041E8: nop

;}
RECOMP_FUNC void ovl_item_main_41EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410041EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x410041F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410041F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x410041F8: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x410041FC: nop

    // 0x41004200: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x41004204: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x41004208: jal         0x41001544
    // 0x4100420C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_item_main_1544(rdram, ctx);
        goto after_0;
    // 0x4100420C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x41004210: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x41004214: bne         $v0, $zero, L_41004244
    if (ctx->r2 != 0) {
        // 0x41004218: nop
    
            goto L_41004244;
    }
    // 0x41004218: nop

    // 0x4100421C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x41004220: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x41004224: lw          $v0, 0x74($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X74);
    // 0x41004228: nop

    // 0x4100422C: sra         $t8, $v0, 8
    ctx->r24 = S32(SIGNED(ctx->r2) >> 8);
    // 0x41004230: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x41004234: beq         $t9, $at, L_41004244
    if (ctx->r25 == ctx->r1) {
        // 0x41004238: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_41004244;
    }
    // 0x41004238: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x4100423C: bne         $t9, $at, L_4100424C
    if (ctx->r25 != ctx->r1) {
        // 0x41004240: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4100424C;
    }
    // 0x41004240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41004244:
    // 0x41004244: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x41004248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4100424C:
    // 0x4100424C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x41004250: jr          $ra
    // 0x41004254: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x41004254: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_item_main_4258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004258: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x4100425C: nop

    // 0x41004260: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x41004264: bne         $t7, $zero, L_4100427C
    if (ctx->r15 != 0) {
        // 0x41004268: nop
    
            goto L_4100427C;
    }
    // 0x41004268: nop

    // 0x4100426C: lw          $t8, 0x6C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X6C);
    // 0x41004270: nop

    // 0x41004274: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x41004278: sw          $t9, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r25;
L_4100427C:
    // 0x4100427C: jr          $ra
    // 0x41004280: nop

    return;
    // 0x41004280: nop

;}
RECOMP_FUNC void ovl_item_main_4284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004284: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x41004288: addiu       $at, $zero, -0x201
    ctx->r1 = ADD32(0, -0X201);
    // 0x4100428C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x41004290: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x41004294: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x41004298: jr          $ra
    // 0x4100429C: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
    return;
    // 0x4100429C: sw          $t8, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void ovl_item_main_42A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410042A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x410042A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x410042A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x410042AC: lw          $v0, 0x68($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X68);
    // 0x410042B0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x410042B4: beq         $v0, $at, L_410043C8
    if (ctx->r2 == ctx->r1) {
        // 0x410042B8: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_410043C8;
    }
    // 0x410042B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x410042BC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x410042C0: beq         $v0, $at, L_410043C8
    if (ctx->r2 == ctx->r1) {
        // 0x410042C4: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_410043C8;
    }
    // 0x410042C4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x410042C8: beq         $v0, $at, L_41004414
    if (ctx->r2 == ctx->r1) {
        // 0x410042CC: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_41004414;
    }
    // 0x410042CC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x410042D0: bne         $v0, $at, L_41004418
    if (ctx->r2 != ctx->r1) {
        // 0x410042D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41004418;
    }
    // 0x410042D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x410042D8: jal         0x410041EC
    // 0x410042DC: nop

    ovl_item_main_41EC(rdram, ctx);
        goto after_0;
    // 0x410042DC: nop

    after_0:
    // 0x410042E0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410042E4: sw          $v0, 0x6890($at)
    MEM_W(0X6890, ctx->r1) = ctx->r2;
    // 0x410042E8: jal         0x4100419C
    // 0x410042EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_419C(rdram, ctx);
        goto after_1;
    // 0x410042EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x410042F0: jal         0x41001E50
    // 0x410042F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_1E50(rdram, ctx);
        goto after_2;
    // 0x410042F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x410042F8: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x410042FC: addiu       $a1, $a1, 0x6878
    ctx->r5 = ADD32(ctx->r5, 0X6878);
    // 0x41004300: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x41004304: nop

    // 0x41004308: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x4100430C: blez        $v0, L_410043B4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x41004310: slti        $at, $v0, 0xF
        ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
            goto L_410043B4;
    }
    // 0x41004310: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x41004314: beq         $at, $zero, L_410043B4
    if (ctx->r1 == 0) {
        // 0x41004318: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_410043B4;
    }
    // 0x41004318: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x4100431C: lui         $t7, 0x4100
    ctx->r15 = S32(0X4100 << 16);
    // 0x41004320: addiu       $t7, $t7, 0x6794
    ctx->r15 = ADD32(ctx->r15, 0X6794);
    // 0x41004324: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x41004328: lw          $t8, -0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, -0X4);
    // 0x4100432C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x41004330: beq         $v0, $at, L_41004348
    if (ctx->r2 == ctx->r1) {
        // 0x41004334: sw          $t8, 0x8($a1)
        MEM_W(0X8, ctx->r5) = ctx->r24;
            goto L_41004348;
    }
    // 0x41004334: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
    // 0x41004338: lui         $t9, 0x4100
    ctx->r25 = S32(0X4100 << 16);
    // 0x4100433C: addiu       $t9, $t9, 0x67A4
    ctx->r25 = ADD32(ctx->r25, 0X67A4);
    // 0x41004340: bne         $v1, $t9, L_410043A8
    if (ctx->r3 != ctx->r25) {
        // 0x41004344: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_410043A8;
    }
    // 0x41004344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_41004348:
    // 0x41004348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4100434C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x41004350: jal         0x41003F2C
    // 0x41004354: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_item_main_3F2C(rdram, ctx);
        goto after_3;
    // 0x41004354: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x41004358: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x4100435C: addiu       $a1, $a1, 0x6878
    ctx->r5 = ADD32(ctx->r5, 0X6878);
    // 0x41004360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41004364: lui         $a2, 0x42B4
    ctx->r6 = S32(0X42B4 << 16);
    // 0x41004368: jal         0x41003F2C
    // 0x4100436C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_item_main_3F2C(rdram, ctx);
        goto after_4;
    // 0x4100436C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x41004370: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x41004374: addiu       $a1, $a1, 0x6878
    ctx->r5 = ADD32(ctx->r5, 0X6878);
    // 0x41004378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4100437C: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x41004380: jal         0x41003F2C
    // 0x41004384: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_item_main_3F2C(rdram, ctx);
        goto after_5;
    // 0x41004384: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x41004388: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x4100438C: addiu       $a1, $a1, 0x6878
    ctx->r5 = ADD32(ctx->r5, 0X6878);
    // 0x41004390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41004394: lui         $a2, 0x4387
    ctx->r6 = S32(0X4387 << 16);
    // 0x41004398: jal         0x41003F2C
    // 0x4100439C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_item_main_3F2C(rdram, ctx);
        goto after_6;
    // 0x4100439C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x410043A0: b           L_410043B8
    // 0x410043A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_410043B8;
    // 0x410043A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_410043A8:
    // 0x410043A8: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x410043AC: jal         0x41003F2C
    // 0x410043B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_item_main_3F2C(rdram, ctx);
        goto after_7;
    // 0x410043B0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
L_410043B4:
    // 0x410043B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_410043B8:
    // 0x410043B8: jal         0x41001648
    // 0x410043BC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_item_main_1648(rdram, ctx);
        goto after_8;
    // 0x410043BC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_8:
    // 0x410043C0: b           L_41004418
    // 0x410043C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_41004418;
    // 0x410043C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_410043C8:
    // 0x410043C8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x410043CC: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x410043D0: nop

    // 0x410043D4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x410043D8: nop

    // 0x410043DC: bc1f        L_41004418
    if (!c1cs) {
        // 0x410043E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41004418;
    }
    // 0x410043E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x410043E4: lwc1        $f6, 0x38($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X38);
    // 0x410043E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x410043EC: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x410043F0: nop

    // 0x410043F4: bc1f        L_41004418
    if (!c1cs) {
        // 0x410043F8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41004418;
    }
    // 0x410043F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x410043FC: jal         0x41001648
    // 0x41004400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_item_main_1648(rdram, ctx);
        goto after_9;
    // 0x41004400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x41004404: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41004408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4100440C: jal         0x41004284
    // 0x41004410: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    ovl_item_main_4284(rdram, ctx);
        goto after_10;
    // 0x41004410: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    after_10:
L_41004414:
    // 0x41004414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41004418:
    // 0x41004418: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4100441C: jr          $ra
    // 0x41004420: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x41004420: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_item_main_4424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004424: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x41004428: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4100442C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x41004430: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x41004434: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41004438: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x4100443C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x41004440: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x41004444: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x41004448: addiu       $a1, $zero, 0x8D
    ctx->r5 = ADD32(0, 0X8D);
    // 0x4100444C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x41004450: jal         0x41001240
    // 0x41004454: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_item_main_1240(rdram, ctx);
        goto after_0;
    // 0x41004454: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x41004458: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x4100445C: sw          $v0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r2;
    // 0x41004460: sw          $t8, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r24;
    // 0x41004464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41004468: addiu       $a1, $zero, 0x5F
    ctx->r5 = ADD32(0, 0X5F);
    // 0x4100446C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x41004470: jal         0x410012C0
    // 0x41004474: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_item_main_12C0(rdram, ctx);
        goto after_1;
    // 0x41004474: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x41004478: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x4100447C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x41004480: sra         $v1, $a0, 8
    ctx->r3 = S32(SIGNED(ctx->r4) >> 8);
    // 0x41004484: andi        $t9, $v1, 0xF
    ctx->r25 = ctx->r3 & 0XF;
    // 0x41004488: beq         $t9, $at, L_41004498
    if (ctx->r25 == ctx->r1) {
        // 0x4100448C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_41004498;
    }
    // 0x4100448C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x41004490: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x41004494: bne         $t9, $at, L_410044B8
    if (ctx->r25 != ctx->r1) {
        // 0x41004498: sra         $t1, $a0, 12
        ctx->r9 = S32(SIGNED(ctx->r4) >> 12);
            goto L_410044B8;
    }
L_41004498:
    // 0x41004498: sra         $t1, $a0, 12
    ctx->r9 = S32(SIGNED(ctx->r4) >> 12);
    // 0x4100449C: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x410044A0: sll         $t3, $t2, 12
    ctx->r11 = S32(ctx->r10 << 12);
    // 0x410044A4: ori         $t4, $t3, 0x300
    ctx->r12 = ctx->r11 | 0X300;
    // 0x410044A8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x410044AC: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x410044B0: b           L_410044E4
    // 0x410044B4: sw          $t7, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r15;
        goto L_410044E4;
    // 0x410044B4: sw          $t7, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r15;
L_410044B8:
    // 0x410044B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x410044BC: beq         $v1, $at, L_410044CC
    if (ctx->r3 == ctx->r1) {
        // 0x410044C0: sra         $t9, $a0, 12
        ctx->r25 = S32(SIGNED(ctx->r4) >> 12);
            goto L_410044CC;
    }
    // 0x410044C0: sra         $t9, $a0, 12
    ctx->r25 = S32(SIGNED(ctx->r4) >> 12);
    // 0x410044C4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x410044C8: bne         $v1, $at, L_410044E4
    if (ctx->r3 != ctx->r1) {
        // 0x410044CC: andi        $t0, $t9, 0xF
        ctx->r8 = ctx->r25 & 0XF;
            goto L_410044E4;
    }
L_410044CC:
    // 0x410044CC: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x410044D0: sll         $t1, $t0, 12
    ctx->r9 = S32(ctx->r8 << 12);
    // 0x410044D4: ori         $t2, $t1, 0x400
    ctx->r10 = ctx->r9 | 0X400;
    // 0x410044D8: andi        $t5, $a0, 0xFF
    ctx->r13 = ctx->r4 & 0XFF;
    // 0x410044DC: or          $t4, $t2, $t5
    ctx->r12 = ctx->r10 | ctx->r13;
    // 0x410044E0: sw          $t4, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r12;
L_410044E4:
    // 0x410044E4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x410044E8: jal         0x410014B0
    // 0x410044EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_item_main_14B0(rdram, ctx);
        goto after_2;
    // 0x410044EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x410044F0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410044F4: lwc1        $f0, 0x7138($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7138);
    // 0x410044F8: lui         $at, 0x427C
    ctx->r1 = S32(0X427C << 16);
    // 0x410044FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x41004500: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x41004504: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x41004508: swc1        $f2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f2.u32l;
    // 0x4100450C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x41004510: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x41004514: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x41004518: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4100451C: jal         0x410006C4
    // 0x41004520: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_item_main_6C4(rdram, ctx);
        goto after_3;
    // 0x41004520: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x41004524: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x41004528: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4100452C: jr          $ra
    // 0x41004530: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x41004530: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_item_main_4534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41004538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4100453C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x41004540: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x41004544: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x41004548: jal         0x41001474
    // 0x4100454C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_item_main_1474(rdram, ctx);
        goto after_0;
    // 0x4100454C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x41004550: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x41004554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x41004558: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x4100455C: jal         0x410014B0
    // 0x41004560: nop

    ovl_item_main_14B0(rdram, ctx);
        goto after_1;
    // 0x41004560: nop

    after_1:
    // 0x41004564: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x41004568: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4100456C: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x41004570: nop

    // 0x41004574: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x41004578: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x4100457C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x41004580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41004588: jr          $ra
    // 0x4100458C: nop

    return;
    // 0x4100458C: nop

;}
RECOMP_FUNC void ovl_item_main_4590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004590: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x41004594: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41004598: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4100459C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x410045A0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x410045A4: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x410045A8: jal         0x41001544
    // 0x410045AC: nop

    ovl_item_main_1544(rdram, ctx);
        goto after_0;
    // 0x410045AC: nop

    after_0:
    // 0x410045B0: bne         $v0, $zero, L_41004684
    if (ctx->r2 != 0) {
        // 0x410045B4: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_41004684;
    }
    // 0x410045B4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x410045B8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x410045BC: jal         0x410006C4
    // 0x410045C0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x410045C0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x410045C4: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x410045C8: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x410045CC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410045D0: lwc1        $f0, 0x713C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X713C);
    // 0x410045D4: add.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x410045D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x410045DC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x410045E0: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x410045E4: bc1f        L_410045F0
    if (!c1cs) {
        // 0x410045E8: nop
    
            goto L_410045F0;
    }
    // 0x410045E8: nop

    // 0x410045EC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_410045F0:
    // 0x410045F0: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x410045F4: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x410045F8: add.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x410045FC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x41004600: add.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f12.fl;
    // 0x41004604: bc1f        L_41004610
    if (!c1cs) {
        // 0x41004608: nop
    
            goto L_41004610;
    }
    // 0x41004608: nop

    // 0x4100460C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_41004610:
    // 0x41004610: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x41004614: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x41004618: bc1f        L_41004624
    if (!c1cs) {
        // 0x4100461C: swc1        $f14, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
            goto L_41004624;
    }
    // 0x4100461C: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x41004620: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
L_41004624:
    // 0x41004624: jal         0x41004534
    // 0x41004628: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    ovl_item_main_4534(rdram, ctx);
        goto after_2;
    // 0x41004628: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x4100462C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x41004630: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x41004634: jal         0x410006C4
    // 0x41004638: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_item_main_6C4(rdram, ctx);
        goto after_3;
    // 0x41004638: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x4100463C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41004640: lwc1        $f0, 0x7144($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7144);
    // 0x41004644: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x41004648: nop

    // 0x4100464C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x41004650: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x41004654: bc1f        L_41004688
    if (!c1cs) {
        // 0x41004658: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41004688;
    }
    // 0x41004658: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4100465C: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x41004660: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x41004664: bc1f        L_41004688
    if (!c1cs) {
        // 0x41004668: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41004688;
    }
    // 0x41004668: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4100466C: c.eq.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl == ctx->f0.fl;
    // 0x41004670: nop

    // 0x41004674: bc1f        L_41004688
    if (!c1cs) {
        // 0x41004678: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41004688;
    }
    // 0x41004678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4100467C: jal         0x41004424
    // 0x41004680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_4424(rdram, ctx);
        goto after_4;
    // 0x41004680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_41004684:
    // 0x41004684: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41004688:
    // 0x41004688: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4100468C: jr          $ra
    // 0x41004690: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x41004690: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_item_main_4694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004694: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x41004698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4100469C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x410046A0: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x410046A4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x410046A8: jal         0x410006C4
    // 0x410046AC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x410046AC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x410046B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x410046B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x410046B8: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x410046BC: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x410046C0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x410046C4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410046C8: bc1f        L_410046F0
    if (!c1cs) {
        // 0x410046CC: nop
    
            goto L_410046F0;
    }
    // 0x410046CC: nop

    // 0x410046D0: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x410046D4: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x410046D8: bc1f        L_410046F0
    if (!c1cs) {
        // 0x410046DC: nop
    
            goto L_410046F0;
    }
    // 0x410046DC: nop

    // 0x410046E0: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x410046E4: nop

    // 0x410046E8: bc1t        L_41004760
    if (c1cs) {
        // 0x410046EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41004760;
    }
    // 0x410046EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_410046F0:
    // 0x410046F0: lwc1        $f14, 0x7148($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X7148);
    // 0x410046F4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x410046F8: sub.s       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x410046FC: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x41004700: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x41004704: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x41004708: bc1f        L_41004714
    if (!c1cs) {
        // 0x4100470C: sub.s       $f12, $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f14.fl;
            goto L_41004714;
    }
    // 0x4100470C: sub.s       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f14.fl;
    // 0x41004710: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
L_41004714:
    // 0x41004714: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x41004718: sub.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x4100471C: bc1f        L_41004728
    if (!c1cs) {
        // 0x41004720: nop
    
            goto L_41004728;
    }
    // 0x41004720: nop

    // 0x41004724: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_41004728:
    // 0x41004728: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x4100472C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x41004730: bc1f        L_4100473C
    if (!c1cs) {
        // 0x41004734: swc1        $f16, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
            goto L_4100473C;
    }
    // 0x41004734: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x41004738: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
L_4100473C:
    // 0x4100473C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x41004740: jal         0x41004534
    // 0x41004744: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    ovl_item_main_4534(rdram, ctx);
        goto after_1;
    // 0x41004744: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x41004748: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x4100474C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x41004750: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x41004754: jal         0x410006C4
    // 0x41004758: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_item_main_6C4(rdram, ctx);
        goto after_2;
    // 0x41004758: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x4100475C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41004760:
    // 0x41004760: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x41004764: jr          $ra
    // 0x41004768: nop

    return;
    // 0x41004768: nop

;}
RECOMP_FUNC void ovl_item_main_476C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100476C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x41004770: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41004774: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41004778: jal         0x41001064
    // 0x4100477C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_item_main_1064(rdram, ctx);
        goto after_0;
    // 0x4100477C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x41004780: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x41004784: nop

    // 0x41004788: beq         $v0, $zero, L_410047AC
    if (ctx->r2 == 0) {
        // 0x4100478C: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_410047AC;
    }
    // 0x4100478C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x41004790: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x41004794: bne         $at, $zero, L_410047AC
    if (ctx->r1 != 0) {
        // 0x41004798: sw          $t6, 0x70($s0)
        MEM_W(0X70, ctx->r16) = ctx->r14;
            goto L_410047AC;
    }
    // 0x41004798: sw          $t6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r14;
    // 0x4100479C: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x410047A0: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x410047A4: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x410047A8: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
L_410047AC:
    // 0x410047AC: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x410047B0: nop

    // 0x410047B4: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x410047B8: beq         $t1, $zero, L_410047F4
    if (ctx->r9 == 0) {
        // 0x410047BC: nop
    
            goto L_410047F4;
    }
    // 0x410047BC: nop

    // 0x410047C0: jal         0x41001080
    // 0x410047C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_1080(rdram, ctx);
        goto after_1;
    // 0x410047C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x410047C8: jal         0x410042A0
    // 0x410047CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_42A0(rdram, ctx);
        goto after_2;
    // 0x410047CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x410047D0: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x410047D4: jal         0x41001510
    // 0x410047D8: nop

    ovl_item_main_1510(rdram, ctx);
        goto after_3;
    // 0x410047D8: nop

    after_3:
    // 0x410047DC: beq         $v0, $zero, L_4100489C
    if (ctx->r2 == 0) {
        // 0x410047E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4100489C;
    }
    // 0x410047E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x410047E4: jal         0x41004258
    // 0x410047E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_4258(rdram, ctx);
        goto after_4;
    // 0x410047E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x410047EC: b           L_4100489C
    // 0x410047F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4100489C;
    // 0x410047F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_410047F4:
    // 0x410047F4: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x410047F8: jal         0x41001544
    // 0x410047FC: nop

    ovl_item_main_1544(rdram, ctx);
        goto after_5;
    // 0x410047FC: nop

    after_5:
    // 0x41004800: bne         $v0, $zero, L_41004810
    if (ctx->r2 != 0) {
        // 0x41004804: nop
    
            goto L_41004810;
    }
    // 0x41004804: nop

    // 0x41004808: jal         0x41004694
    // 0x4100480C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_4694(rdram, ctx);
        goto after_6;
    // 0x4100480C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_41004810:
    // 0x41004810: lw          $t2, 0x5C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X5C);
    // 0x41004814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41004818: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x4100481C: jal         0x41004258
    // 0x41004820: sw          $t3, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r11;
    ovl_item_main_4258(rdram, ctx);
        goto after_7;
    // 0x41004820: sw          $t3, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r11;
    after_7:
    // 0x41004824: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x41004828: jal         0x41001510
    // 0x4100482C: nop

    ovl_item_main_1510(rdram, ctx);
        goto after_8;
    // 0x4100482C: nop

    after_8:
    // 0x41004830: bne         $v0, $zero, L_4100485C
    if (ctx->r2 != 0) {
        // 0x41004834: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_4100485C;
    }
    // 0x41004834: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x41004838: lw          $t4, 0x6C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X6C);
    // 0x4100483C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41004840: slti        $at, $t4, 0x4B
    ctx->r1 = SIGNED(ctx->r12) < 0X4B ? 1 : 0;
    // 0x41004844: bne         $at, $zero, L_41004890
    if (ctx->r1 != 0) {
        // 0x41004848: nop
    
            goto L_41004890;
    }
    // 0x41004848: nop

    // 0x4100484C: jal         0x41001648
    // 0x41004850: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_item_main_1648(rdram, ctx);
        goto after_9;
    // 0x41004850: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_9:
    // 0x41004854: b           L_41004890
    // 0x41004858: nop

        goto L_41004890;
    // 0x41004858: nop

L_4100485C:
    // 0x4100485C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x41004860: jal         0x410006C4
    // 0x41004864: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_item_main_6C4(rdram, ctx);
        goto after_10;
    // 0x41004864: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_10:
    // 0x41004868: lui         $at, 0xC5FA
    ctx->r1 = S32(0XC5FA << 16);
    // 0x4100486C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x41004870: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x41004874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41004878: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x4100487C: nop

    // 0x41004880: bc1f        L_41004890
    if (!c1cs) {
        // 0x41004884: nop
    
            goto L_41004890;
    }
    // 0x41004884: nop

    // 0x41004888: jal         0x41001648
    // 0x4100488C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_item_main_1648(rdram, ctx);
        goto after_11;
    // 0x4100488C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_11:
L_41004890:
    // 0x41004890: jal         0x410042A0
    // 0x41004894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_42A0(rdram, ctx);
        goto after_12;
    // 0x41004894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x41004898: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4100489C:
    // 0x4100489C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x410048A0: jr          $ra
    // 0x410048A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x410048A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_item_main_48A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410048A8: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x410048AC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x410048B0: lw          $v1, 0x71EC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X71EC);
    // 0x410048B4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x410048B8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x410048BC: beq         $at, $zero, L_41004900
    if (ctx->r1 == 0) {
        // 0x410048C0: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_41004900;
    }
    // 0x410048C0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_410048C4:
    // 0x410048C4: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x410048C8: nop

    // 0x410048CC: beq         $a1, $t6, L_410048EC
    if (ctx->r5 == ctx->r14) {
        // 0x410048D0: nop
    
            goto L_410048EC;
    }
    // 0x410048D0: nop

    // 0x410048D4: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x410048D8: nop

    // 0x410048DC: beq         $a1, $t7, L_410048EC
    if (ctx->r5 == ctx->r15) {
        // 0x410048E0: nop
    
            goto L_410048EC;
    }
    // 0x410048E0: nop

    // 0x410048E4: jr          $ra
    // 0x410048E8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x410048E8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_410048EC:
    // 0x410048EC: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x410048F0: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x410048F4: bne         $at, $zero, L_410048C4
    if (ctx->r1 != 0) {
        // 0x410048F8: nop
    
            goto L_410048C4;
    }
    // 0x410048F8: nop

    // 0x410048FC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_41004900:
    // 0x41004900: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x41004904: jr          $ra
    // 0x41004908: nop

    return;
    // 0x41004908: nop

;}
RECOMP_FUNC void ovl_item_main_490C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100490C: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x41004910: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41004914: beq         $t6, $at, L_41004938
    if (ctx->r14 == ctx->r1) {
        // 0x41004918: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_41004938;
    }
    // 0x41004918: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4100491C: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x41004920: nop

    // 0x41004924: andi        $t8, $t7, 0x2000
    ctx->r24 = ctx->r15 & 0X2000;
    // 0x41004928: bne         $t8, $zero, L_41004938
    if (ctx->r24 != 0) {
        // 0x4100492C: nop
    
            goto L_41004938;
    }
    // 0x4100492C: nop

    // 0x41004930: jr          $ra
    // 0x41004934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x41004934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_41004938:
    // 0x41004938: jr          $ra
    // 0x4100493C: nop

    return;
    // 0x4100493C: nop

;}
RECOMP_FUNC void ovl_item_main_4940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004940: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x41004944: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x41004948: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x4100494C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x41004950: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x41004954: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x41004958: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4100495C: jal         0x41001450
    // 0x41004960: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_1450(rdram, ctx);
        goto after_0;
    // 0x41004960: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x41004964: lui         $s1, 0x4100
    ctx->r17 = S32(0X4100 << 16);
    // 0x41004968: lw          $s1, 0x71E0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X71E0);
    // 0x4100496C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x41004970: blez        $s1, L_41004A6C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x41004974: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_41004A6C;
    }
    // 0x41004974: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x41004978: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
    // 0x4100497C: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x41004980: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
L_41004984:
    // 0x41004984: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x41004988: jal         0x410048A8
    // 0x4100498C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_item_main_48A8(rdram, ctx);
        goto after_1;
    // 0x4100498C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x41004990: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x41004994: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x41004998: beq         $t6, $s3, L_41004A6C
    if (ctx->r14 == ctx->r19) {
        // 0x4100499C: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_41004A6C;
    }
    // 0x4100499C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x410049A0: jal         0x410010E4
    // 0x410049A4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_item_main_10E4(rdram, ctx);
        goto after_2;
    // 0x410049A4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x410049A8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x410049AC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x410049B0: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x410049B4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x410049B8: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x410049BC: bne         $t8, $zero, L_410049D8
    if (ctx->r24 != 0) {
        // 0x410049C0: nop
    
            goto L_410049D8;
    }
    // 0x410049C0: nop

    // 0x410049C4: lw          $t0, 0x60($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X60);
    // 0x410049C8: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x410049CC: andi        $t1, $t0, 0x2000
    ctx->r9 = ctx->r8 & 0X2000;
    // 0x410049D0: beq         $t1, $zero, L_410049E8
    if (ctx->r9 == 0) {
        // 0x410049D4: nop
    
            goto L_410049E8;
    }
    // 0x410049D4: nop

L_410049D8:
    // 0x410049D8: jal         0x4100406C
    // 0x410049DC: nop

    ovl_item_main_406C(rdram, ctx);
        goto after_3;
    // 0x410049DC: nop

    after_3:
    // 0x410049E0: b           L_41004A64
    // 0x410049E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_41004A64;
    // 0x410049E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_410049E8:
    // 0x410049E8: beq         $t2, $zero, L_41004A54
    if (ctx->r10 == 0) {
        // 0x410049EC: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_41004A54;
    }
    // 0x410049EC: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x410049F0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x410049F4: jal         0x4100490C
    // 0x410049F8: nop

    ovl_item_main_490C(rdram, ctx);
        goto after_4;
    // 0x410049F8: nop

    after_4:
    // 0x410049FC: beq         $v0, $zero, L_41004A14
    if (ctx->r2 == 0) {
        // 0x41004A00: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_41004A14;
    }
    // 0x41004A00: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x41004A04: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x41004A08: jal         0x410040A4
    // 0x41004A0C: nop

    ovl_item_main_40A4(rdram, ctx);
        goto after_5;
    // 0x41004A0C: nop

    after_5:
    // 0x41004A10: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
L_41004A14:
    // 0x41004A14: jal         0x4100490C
    // 0x41004A18: nop

    ovl_item_main_490C(rdram, ctx);
        goto after_6;
    // 0x41004A18: nop

    after_6:
    // 0x41004A1C: beq         $v0, $zero, L_41004A34
    if (ctx->r2 == 0) {
        // 0x41004A20: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_41004A34;
    }
    // 0x41004A20: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x41004A24: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x41004A28: jal         0x41001A14
    // 0x41004A2C: nop

    ovl_item_main_1A14(rdram, ctx);
        goto after_7;
    // 0x41004A2C: nop

    after_7:
    // 0x41004A30: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
L_41004A34:
    // 0x41004A34: jal         0x4100490C
    // 0x41004A38: nop

    ovl_item_main_490C(rdram, ctx);
        goto after_8;
    // 0x41004A38: nop

    after_8:
    // 0x41004A3C: beq         $v0, $zero, L_41004A54
    if (ctx->r2 == 0) {
        // 0x41004A40: lw          $t3, 0x40($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X40);
            goto L_41004A54;
    }
    // 0x41004A40: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x41004A44: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x41004A48: jal         0x4100476C
    // 0x41004A4C: nop

    ovl_item_main_476C(rdram, ctx);
        goto after_9;
    // 0x41004A4C: nop

    after_9:
    // 0x41004A50: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
L_41004A54:
    // 0x41004A54: nop

    // 0x41004A58: addiu       $t4, $t3, 0xA0
    ctx->r12 = ADD32(ctx->r11, 0XA0);
    // 0x41004A5C: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x41004A60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_41004A64:
    // 0x41004A64: bne         $s0, $s1, L_41004984
    if (ctx->r16 != ctx->r17) {
        // 0x41004A68: nop
    
            goto L_41004984;
    }
    // 0x41004A68: nop

L_41004A6C:
    // 0x41004A6C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x41004A70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41004A74: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x41004A78: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x41004A7C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x41004A80: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x41004A84: jr          $ra
    // 0x41004A88: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x41004A88: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_item_main_4A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41004A90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_41004A94:
    // 0x41004A94: jal         0x41004940
    // 0x41004A98: nop

    ovl_item_main_4940(rdram, ctx);
        goto after_0;
    // 0x41004A98: nop

    after_0:
    // 0x41004A9C: jal         0x4100085C
    // 0x41004AA0: nop

    ovl_item_main_85C(rdram, ctx);
        goto after_1;
    // 0x41004AA0: nop

    after_1:
    // 0x41004AA4: b           L_41004A94
    // 0x41004AA8: nop

        goto L_41004A94;
    // 0x41004AA8: nop

    // 0x41004AAC: nop

    // 0x41004AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004AB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41004AB8: jr          $ra
    // 0x41004ABC: nop

    return;
    // 0x41004ABC: nop

;}
RECOMP_FUNC void ovl_item_main_4AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41004AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004AC8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x41004ACC: jal         0x41001028
    // 0x41004AD0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_item_main_1028(rdram, ctx);
        goto after_0;
    // 0x41004AD0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x41004AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41004ADC: jr          $ra
    // 0x41004AE0: nop

    return;
    // 0x41004AE0: nop

;}
RECOMP_FUNC void ovl_item_main_4AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004AE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41004AE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x41004AEC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x41004AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004AF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x41004AF8: jal         0x41001028
    // 0x41004AFC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_item_main_1028(rdram, ctx);
        goto after_0;
    // 0x41004AFC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x41004B00: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x41004B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004B08: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x41004B0C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x41004B10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x41004B14: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x41004B18: jr          $ra
    // 0x41004B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x41004B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_item_main_4B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004B20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41004B24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x41004B28: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x41004B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x41004B34: jal         0x41001028
    // 0x41004B38: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_item_main_1028(rdram, ctx);
        goto after_0;
    // 0x41004B38: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x41004B3C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x41004B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004B44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x41004B48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x41004B4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x41004B50: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x41004B54: jr          $ra
    // 0x41004B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x41004B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_item_main_4B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004B5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41004B60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004B64: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x41004B68: jal         0x41001028
    // 0x41004B6C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_item_main_1028(rdram, ctx);
        goto after_0;
    // 0x41004B6C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_0:
    // 0x41004B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004B74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41004B78: jr          $ra
    // 0x41004B7C: nop

    return;
    // 0x41004B7C: nop

;}
RECOMP_FUNC void ovl_item_main_4B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004B80: jr          $ra
    // 0x41004B84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x41004B84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_item_main_4B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004B88: jr          $ra
    // 0x41004B8C: nop

    return;
    // 0x41004B8C: nop

;}
RECOMP_FUNC void ovl_item_main_4B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004B90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x41004B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004B98: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x41004B9C: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x41004BA0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x41004BA4: jal         0x410006C4
    // 0x41004BA8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x41004BA8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x41004BAC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x41004BB0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x41004BB4: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x41004BB8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x41004BBC: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x41004BC0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x41004BC4: jal         0x410006C4
    // 0x41004BC8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x41004BC8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x41004BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004BD0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x41004BD4: jr          $ra
    // 0x41004BD8: nop

    return;
    // 0x41004BD8: nop

;}
RECOMP_FUNC void ovl_item_main_4BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004BDC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x41004BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004BE4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x41004BE8: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x41004BEC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x41004BF0: jal         0x410006C4
    // 0x41004BF4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x41004BF4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x41004BF8: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x41004BFC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x41004C00: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x41004C04: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x41004C08: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x41004C0C: addiu       $t0, $zero, 0xBC
    ctx->r8 = ADD32(0, 0XBC);
    // 0x41004C10: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x41004C14: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x41004C18: lw          $a0, 0x10($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X10);
    // 0x41004C1C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x41004C20: jal         0x410006C4
    // 0x41004C24: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x41004C24: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x41004C28: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x41004C2C: jal         0x410010A8
    // 0x41004C30: nop

    ovl_item_main_10A8(rdram, ctx);
        goto after_2;
    // 0x41004C30: nop

    after_2:
    // 0x41004C34: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x41004C38: jal         0x41004B90
    // 0x41004C3C: nop

    ovl_item_main_4B90(rdram, ctx);
        goto after_3;
    // 0x41004C3C: nop

    after_3:
    // 0x41004C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004C44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x41004C48: jr          $ra
    // 0x41004C4C: nop

    return;
    // 0x41004C4C: nop

;}
RECOMP_FUNC void ovl_item_main_4C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004C50: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x41004C54: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x41004C58: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x41004C5C: beq         $t6, $zero, L_41004C78
    if (ctx->r14 == 0) {
        // 0x41004C60: ori         $t8, $v0, 0x1
        ctx->r24 = ctx->r2 | 0X1;
            goto L_41004C78;
    }
    // 0x41004C60: ori         $t8, $v0, 0x1
    ctx->r24 = ctx->r2 | 0X1;
    // 0x41004C64: bne         $a1, $at, L_41004C80
    if (ctx->r5 != ctx->r1) {
        // 0x41004C68: ori         $t7, $v0, 0x1
        ctx->r15 = ctx->r2 | 0X1;
            goto L_41004C80;
    }
    // 0x41004C68: ori         $t7, $v0, 0x1
    ctx->r15 = ctx->r2 | 0X1;
    // 0x41004C6C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x41004C70: jr          $ra
    // 0x41004C74: sw          $a1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r5;
    return;
    // 0x41004C74: sw          $a1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r5;
L_41004C78:
    // 0x41004C78: sw          $t8, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r24;
    // 0x41004C7C: sw          $a1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r5;
L_41004C80:
    // 0x41004C80: jr          $ra
    // 0x41004C84: nop

    return;
    // 0x41004C84: nop

;}
RECOMP_FUNC void ovl_item_main_4C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004C88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41004C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004C90: jal         0x41001120
    // 0x41004C94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_item_main_1120(rdram, ctx);
        goto after_0;
    // 0x41004C94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x41004C98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x41004C9C: jal         0x41004B80
    // 0x41004CA0: nop

    ovl_item_main_4B80(rdram, ctx);
        goto after_1;
    // 0x41004CA0: nop

    after_1:
    // 0x41004CA4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x41004CA8: nop

    // 0x41004CAC: sw          $zero, 0x74($t6)
    MEM_W(0X74, ctx->r14) = 0;
    // 0x41004CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41004CB8: jr          $ra
    // 0x41004CBC: nop

    return;
    // 0x41004CBC: nop

;}
RECOMP_FUNC void ovl_item_main_4CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004CC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41004CC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004CC8: jal         0x41004AC0
    // 0x41004CCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_4AC0(rdram, ctx);
        goto after_0;
    // 0x41004CCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x41004CD0: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x41004CD4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x41004CD8: bne         $a1, $t6, L_41004CF8
    if (ctx->r5 != ctx->r14) {
        // 0x41004CDC: lui         $v1, 0x4100
        ctx->r3 = S32(0X4100 << 16);
            goto L_41004CF8;
    }
    // 0x41004CDC: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41004CE0: addiu       $v1, $v1, 0x71F0
    ctx->r3 = ADD32(ctx->r3, 0X71F0);
    // 0x41004CE4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x41004CE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x41004CEC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x41004CF0: b           L_41004DF4
    // 0x41004CF4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_41004DF4;
    // 0x41004CF4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_41004CF8:
    // 0x41004CF8: addiu       $v1, $v0, 0xA0
    ctx->r3 = ADD32(ctx->r2, 0XA0);
    // 0x41004CFC: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x41004D00: nop

    // 0x41004D04: bne         $a1, $t9, L_41004D2C
    if (ctx->r5 != ctx->r25) {
        // 0x41004D08: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_41004D2C;
    }
    // 0x41004D08: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x41004D0C: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41004D10: addiu       $v1, $v1, 0x71F0
    ctx->r3 = ADD32(ctx->r3, 0X71F0);
    // 0x41004D14: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x41004D18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x41004D1C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x41004D20: b           L_41004DF4
    // 0x41004D24: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_41004DF4;
    // 0x41004D24: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x41004D28: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_41004D2C:
    // 0x41004D2C: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41004D30: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_41004D34:
    // 0x41004D34: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x41004D38: nop

    // 0x41004D3C: bne         $a1, $t2, L_41004D60
    if (ctx->r5 != ctx->r10) {
        // 0x41004D40: nop
    
            goto L_41004D60;
    }
    // 0x41004D40: nop

    // 0x41004D44: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41004D48: addiu       $v1, $v1, 0x71F0
    ctx->r3 = ADD32(ctx->r3, 0X71F0);
    // 0x41004D4C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x41004D50: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x41004D54: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x41004D58: b           L_41004DF4
    // 0x41004D5C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_41004DF4;
    // 0x41004D5C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_41004D60:
    // 0x41004D60: lw          $t5, 0xAC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XAC);
    // 0x41004D64: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41004D68: bne         $a1, $t5, L_41004D8C
    if (ctx->r5 != ctx->r13) {
        // 0x41004D6C: nop
    
            goto L_41004D8C;
    }
    // 0x41004D6C: nop

    // 0x41004D70: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41004D74: addiu       $v1, $v1, 0x71F0
    ctx->r3 = ADD32(ctx->r3, 0X71F0);
    // 0x41004D78: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x41004D7C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x41004D80: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x41004D84: b           L_41004DF4
    // 0x41004D88: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_41004DF4;
    // 0x41004D88: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_41004D8C:
    // 0x41004D8C: lw          $t8, 0xAC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XAC);
    // 0x41004D90: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41004D94: bne         $a1, $t8, L_41004DB8
    if (ctx->r5 != ctx->r24) {
        // 0x41004D98: nop
    
            goto L_41004DB8;
    }
    // 0x41004D98: nop

    // 0x41004D9C: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41004DA0: addiu       $v1, $v1, 0x71F0
    ctx->r3 = ADD32(ctx->r3, 0X71F0);
    // 0x41004DA4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x41004DA8: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x41004DAC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x41004DB0: b           L_41004DF4
    // 0x41004DB4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_41004DF4;
    // 0x41004DB4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_41004DB8:
    // 0x41004DB8: lw          $t1, 0xAC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XAC);
    // 0x41004DBC: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41004DC0: bne         $a1, $t1, L_41004DE4
    if (ctx->r5 != ctx->r9) {
        // 0x41004DC4: nop
    
            goto L_41004DE4;
    }
    // 0x41004DC4: nop

    // 0x41004DC8: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41004DCC: addiu       $v1, $v1, 0x71F0
    ctx->r3 = ADD32(ctx->r3, 0X71F0);
    // 0x41004DD0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x41004DD4: addiu       $v0, $a0, 0x3
    ctx->r2 = ADD32(ctx->r4, 0X3);
    // 0x41004DD8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x41004DDC: b           L_41004DF4
    // 0x41004DE0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_41004DF4;
    // 0x41004DE0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_41004DE4:
    // 0x41004DE4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x41004DE8: bne         $a0, $v0, L_41004D34
    if (ctx->r4 != ctx->r2) {
        // 0x41004DEC: addiu       $v1, $v1, 0xA0
        ctx->r3 = ADD32(ctx->r3, 0XA0);
            goto L_41004D34;
    }
    // 0x41004DEC: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41004DF0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_41004DF4:
    // 0x41004DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41004DFC: jr          $ra
    // 0x41004E00: nop

    return;
    // 0x41004E00: nop

;}
RECOMP_FUNC void ovl_item_main_4E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41004E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004E0C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x41004E10: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x41004E14: jal         0x41004AC0
    // 0x41004E18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_4AC0(rdram, ctx);
        goto after_0;
    // 0x41004E18: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x41004E1C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x41004E20: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x41004E24: bne         $a1, $a0, L_41004E34
    if (ctx->r5 != ctx->r4) {
        // 0x41004E28: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_41004E34;
    }
    // 0x41004E28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x41004E2C: b           L_41004F38
    // 0x41004E30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_41004F38;
    // 0x41004E30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_41004E34:
    // 0x41004E34: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x41004E38: nop

    // 0x41004E3C: beq         $a0, $t6, L_41004E5C
    if (ctx->r4 == ctx->r14) {
        // 0x41004E40: nop
    
            goto L_41004E5C;
    }
    // 0x41004E40: nop

    // 0x41004E44: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x41004E48: nop

    // 0x41004E4C: bne         $a1, $t7, L_41004E5C
    if (ctx->r5 != ctx->r15) {
        // 0x41004E50: nop
    
            goto L_41004E5C;
    }
    // 0x41004E50: nop

    // 0x41004E54: b           L_41004F38
    // 0x41004E58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_41004F38;
    // 0x41004E58: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_41004E5C:
    // 0x41004E5C: addiu       $v1, $v0, 0xA0
    ctx->r3 = ADD32(ctx->r2, 0XA0);
    // 0x41004E60: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x41004E64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x41004E68: beq         $a0, $t8, L_41004E88
    if (ctx->r4 == ctx->r24) {
        // 0x41004E6C: addiu       $a2, $zero, 0x1E
        ctx->r6 = ADD32(0, 0X1E);
            goto L_41004E88;
    }
    // 0x41004E6C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x41004E70: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x41004E74: nop

    // 0x41004E78: bne         $a1, $t9, L_41004E88
    if (ctx->r5 != ctx->r25) {
        // 0x41004E7C: nop
    
            goto L_41004E88;
    }
    // 0x41004E7C: nop

    // 0x41004E80: b           L_41004F38
    // 0x41004E84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_41004F38;
    // 0x41004E84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_41004E88:
    // 0x41004E88: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
L_41004E8C:
    // 0x41004E8C: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x41004E90: nop

    // 0x41004E94: beq         $a0, $t0, L_41004EB4
    if (ctx->r4 == ctx->r8) {
        // 0x41004E98: nop
    
            goto L_41004EB4;
    }
    // 0x41004E98: nop

    // 0x41004E9C: lw          $t1, 0x10($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X10);
    // 0x41004EA0: nop

    // 0x41004EA4: bne         $a1, $t1, L_41004EB4
    if (ctx->r5 != ctx->r9) {
        // 0x41004EA8: nop
    
            goto L_41004EB4;
    }
    // 0x41004EA8: nop

    // 0x41004EAC: b           L_41004F38
    // 0x41004EB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_41004F38;
    // 0x41004EB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_41004EB4:
    // 0x41004EB4: lw          $t2, 0xAC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XAC);
    // 0x41004EB8: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41004EBC: beq         $a0, $t2, L_41004EDC
    if (ctx->r4 == ctx->r10) {
        // 0x41004EC0: nop
    
            goto L_41004EDC;
    }
    // 0x41004EC0: nop

    // 0x41004EC4: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    // 0x41004EC8: nop

    // 0x41004ECC: bne         $a1, $t3, L_41004EDC
    if (ctx->r5 != ctx->r11) {
        // 0x41004ED0: nop
    
            goto L_41004EDC;
    }
    // 0x41004ED0: nop

    // 0x41004ED4: b           L_41004F38
    // 0x41004ED8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_41004F38;
    // 0x41004ED8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_41004EDC:
    // 0x41004EDC: lw          $t4, 0xAC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XAC);
    // 0x41004EE0: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41004EE4: beq         $a0, $t4, L_41004F04
    if (ctx->r4 == ctx->r12) {
        // 0x41004EE8: nop
    
            goto L_41004F04;
    }
    // 0x41004EE8: nop

    // 0x41004EEC: lw          $t5, 0x10($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X10);
    // 0x41004EF0: nop

    // 0x41004EF4: bne         $a1, $t5, L_41004F04
    if (ctx->r5 != ctx->r13) {
        // 0x41004EF8: nop
    
            goto L_41004F04;
    }
    // 0x41004EF8: nop

    // 0x41004EFC: b           L_41004F38
    // 0x41004F00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_41004F38;
    // 0x41004F00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_41004F04:
    // 0x41004F04: lw          $t6, 0xAC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XAC);
    // 0x41004F08: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41004F0C: beq         $a0, $t6, L_41004F2C
    if (ctx->r4 == ctx->r14) {
        // 0x41004F10: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_41004F2C;
    }
    // 0x41004F10: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x41004F14: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x41004F18: nop

    // 0x41004F1C: bne         $a1, $t7, L_41004F2C
    if (ctx->r5 != ctx->r15) {
        // 0x41004F20: nop
    
            goto L_41004F2C;
    }
    // 0x41004F20: nop

    // 0x41004F24: b           L_41004F38
    // 0x41004F28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_41004F38;
    // 0x41004F28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_41004F2C:
    // 0x41004F2C: bne         $v0, $a2, L_41004E8C
    if (ctx->r2 != ctx->r6) {
        // 0x41004F30: addiu       $v1, $v1, 0xA0
        ctx->r3 = ADD32(ctx->r3, 0XA0);
            goto L_41004E8C;
    }
    // 0x41004F30: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41004F34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_41004F38:
    // 0x41004F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004F3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41004F40: jr          $ra
    // 0x41004F44: nop

    return;
    // 0x41004F44: nop

;}
RECOMP_FUNC void ovl_item_main_4F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004F48: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x41004F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004F50: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x41004F54: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x41004F58: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x41004F5C: beq         $t6, $zero, L_41004F70
    if (ctx->r14 == 0) {
        // 0x41004F60: addiu       $t8, $a3, 0x1C
        ctx->r24 = ADD32(ctx->r7, 0X1C);
            goto L_41004F70;
    }
    // 0x41004F60: addiu       $t8, $a3, 0x1C
    ctx->r24 = ADD32(ctx->r7, 0X1C);
    // 0x41004F64: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x41004F68: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x41004F6C: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
L_41004F70:
    // 0x41004F70: lwc1        $f4, 0x20($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X20);
    // 0x41004F74: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x41004F78: swc1        $f4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f4.u32l;
    // 0x41004F7C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x41004F80: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x41004F84: jal         0x410006C4
    // 0x41004F88: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x41004F88: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x41004F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41004F90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x41004F94: jr          $ra
    // 0x41004F98: nop

    return;
    // 0x41004F98: nop

;}
RECOMP_FUNC void ovl_item_main_4F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41004F9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x41004FA0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x41004FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41004FA8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x41004FAC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x41004FB0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x41004FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x41004FB8: jal         0x41004AE4
    // 0x41004FBC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    ovl_item_main_4AE4(rdram, ctx);
        goto after_0;
    // 0x41004FBC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x41004FC0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x41004FC4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x41004FC8: jal         0x41004B20
    // 0x41004FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_item_main_4B20(rdram, ctx);
        goto after_1;
    // 0x41004FCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x41004FD0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x41004FD4: jal         0x41004B5C
    // 0x41004FD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_item_main_4B5C(rdram, ctx);
        goto after_2;
    // 0x41004FD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x41004FDC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x41004FE0: lui         $t9, 0x4100
    ctx->r25 = S32(0X4100 << 16);
    // 0x41004FE4: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x41004FE8: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x41004FEC: addiu       $t9, $t9, 0x6920
    ctx->r25 = ADD32(ctx->r25, 0X6920);
    // 0x41004FF0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x41004FF4: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x41004FF8: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x41004FFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x41005000: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x41005004: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
    // 0x41005008: sw          $t1, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r9;
    // 0x4100500C: sw          $a2, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r6;
    // 0x41005010: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x41005014: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x41005018: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x4100501C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x41005020: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x41005024: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x41005028: sw          $t2, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r10;
L_4100502C:
    // 0x4100502C: lw          $t3, 0x10($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X10);
    // 0x41005030: nop

    // 0x41005034: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x41005038: swc1        $f0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f0.u32l;
    // 0x4100503C: lw          $t5, 0x10($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X10);
    // 0x41005040: nop

    // 0x41005044: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x41005048: swc1        $f2, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f2.u32l;
    // 0x4100504C: lw          $t7, 0x10($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X10);
    // 0x41005050: nop

    // 0x41005054: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x41005058: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x4100505C: lw          $t9, 0x10($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X10);
    // 0x41005060: nop

    // 0x41005064: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x41005068: swc1        $f2, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f2.u32l;
    // 0x4100506C: lw          $t2, 0x10($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X10);
    // 0x41005070: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x41005074: addu        $t3, $t2, $v1
    ctx->r11 = ADD32(ctx->r10, ctx->r3);
    // 0x41005078: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x4100507C: slti        $at, $v1, 0x14
    ctx->r1 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x41005080: bne         $at, $zero, L_4100502C
    if (ctx->r1 != 0) {
        // 0x41005084: sw          $t1, 0x10($t3)
        MEM_W(0X10, ctx->r11) = ctx->r9;
            goto L_4100502C;
    }
    // 0x41005084: sw          $t1, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r9;
    // 0x41005088: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    // 0x4100508C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x41005090: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x41005094: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x41005098: lw          $t5, 0x14($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X14);
    // 0x4100509C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x410050A0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x410050A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x410050A8: sw          $a2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r6;
L_410050AC:
    // 0x410050AC: lw          $t6, 0x14($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X14);
    // 0x410050B0: nop

    // 0x410050B4: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x410050B8: nop

    // 0x410050BC: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x410050C0: swc1        $f0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f0.u32l;
    // 0x410050C4: lw          $t9, 0x14($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X14);
    // 0x410050C8: nop

    // 0x410050CC: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x410050D0: nop

    // 0x410050D4: addu        $t2, $t0, $v1
    ctx->r10 = ADD32(ctx->r8, ctx->r3);
    // 0x410050D8: swc1        $f2, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f2.u32l;
    // 0x410050DC: lw          $t1, 0x14($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X14);
    // 0x410050E0: nop

    // 0x410050E4: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x410050E8: nop

    // 0x410050EC: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x410050F0: swc1        $f0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f0.u32l;
    // 0x410050F4: lw          $t5, 0x14($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X14);
    // 0x410050F8: nop

    // 0x410050FC: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x41005100: nop

    // 0x41005104: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x41005108: swc1        $f2, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f2.u32l;
    // 0x4100510C: lw          $t9, 0x14($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X14);
    // 0x41005110: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x41005114: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x41005118: nop

    // 0x4100511C: addu        $t2, $t0, $v1
    ctx->r10 = ADD32(ctx->r8, ctx->r3);
    // 0x41005120: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x41005124: bne         $v1, $v0, L_410050AC
    if (ctx->r3 != ctx->r2) {
        // 0x41005128: sw          $t8, 0x10($t2)
        MEM_W(0X10, ctx->r10) = ctx->r24;
            goto L_410050AC;
    }
    // 0x41005128: sw          $t8, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r24;
    // 0x4100512C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005130: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x41005134: jr          $ra
    // 0x41005138: nop

    return;
    // 0x41005138: nop

;}
RECOMP_FUNC void ovl_item_main_513C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100513C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x41005140: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x41005144: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x41005148: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4100514C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x41005150: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41005154: jal         0x41004AC0
    // 0x41005158: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_4AC0(rdram, ctx);
        goto after_0;
    // 0x41005158: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x4100515C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41005160: sw          $zero, 0x71F0($at)
    MEM_W(0X71F0, ctx->r1) = 0;
    // 0x41005164: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41005168: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x4100516C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x41005170: sw          $t6, 0x71F4($at)
    MEM_W(0X71F4, ctx->r1) = ctx->r14;
    // 0x41005174: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x41005178: addiu       $s2, $zero, 0x1E
    ctx->r18 = ADD32(0, 0X1E);
    // 0x4100517C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_41005180:
    // 0x41005180: jal         0x41004C88
    // 0x41005184: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
    ovl_item_main_4C88(rdram, ctx);
        goto after_1;
    // 0x41005184: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
    after_1:
    // 0x41005188: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x4100518C: bne         $s1, $s2, L_41005180
    if (ctx->r17 != ctx->r18) {
        // 0x41005190: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41005180;
    }
    // 0x41005190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41005194: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41005198: lui         $a0, 0x4100
    ctx->r4 = S32(0X4100 << 16);
    // 0x4100519C: sw          $s0, 0x71FC($at)
    MEM_W(0X71FC, ctx->r1) = ctx->r16;
    // 0x410051A0: addiu       $a0, $a0, 0x669C
    ctx->r4 = ADD32(ctx->r4, 0X669C);
    // 0x410051A4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x410051A8: addiu       $a2, $zero, 0x1500
    ctx->r6 = ADD32(0, 0X1500);
    // 0x410051AC: jal         0x41000820
    // 0x410051B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_item_main_820(rdram, ctx);
        goto after_2;
    // 0x410051B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x410051B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x410051B8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410051BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x410051C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x410051C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x410051C8: sw          $v0, 0x71F8($at)
    MEM_W(0X71F8, ctx->r1) = ctx->r2;
    // 0x410051CC: jr          $ra
    // 0x410051D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x410051D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_item_main_51D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410051D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x410051D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410051DC: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x410051E0: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x410051E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x410051E8: jal         0x41004CC0
    // 0x410051EC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    ovl_item_main_4CC0(rdram, ctx);
        goto after_0;
    // 0x410051EC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x410051F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x410051F4: jal         0x41004AC0
    // 0x410051F8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_item_main_4AC0(rdram, ctx);
        goto after_1;
    // 0x410051F8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x410051FC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x41005200: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41005204: andi        $t7, $a2, 0xFFF
    ctx->r15 = ctx->r6 & 0XFFF;
    // 0x41005208: addiu       $v1, $v1, 0x71F4
    ctx->r3 = ADD32(ctx->r3, 0X71F4);
    // 0x4100520C: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x41005210: lui         $t9, 0x4100
    ctx->r25 = S32(0X4100 << 16);
    // 0x41005214: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x41005218: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x4100521C: lw          $t9, 0x6928($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6928);
    // 0x41005220: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x41005224: sw          $t9, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r25;
    // 0x41005228: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x4100522C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41005230: bne         $a2, $at, L_4100523C
    if (ctx->r6 != ctx->r1) {
        // 0x41005234: sw          $a1, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r5;
            goto L_4100523C;
    }
    // 0x41005234: sw          $a1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r5;
    // 0x41005238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_4100523C:
    // 0x4100523C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x41005240: jal         0x41004F9C
    // 0x41005244: nop

    ovl_item_main_4F9C(rdram, ctx);
        goto after_2;
    // 0x41005244: nop

    after_2:
    // 0x41005248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4100524C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x41005250: jr          $ra
    // 0x41005254: nop

    return;
    // 0x41005254: nop

;}
RECOMP_FUNC void ovl_item_main_5258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4100525C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x41005260: lui         $a0, 0x4100
    ctx->r4 = S32(0X4100 << 16);
    // 0x41005264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41005268: lw          $a0, 0x71F8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X71F8);
    // 0x4100526C: jal         0x4100082C
    // 0x41005270: nop

    ovl_item_main_82C(rdram, ctx);
        goto after_0;
    // 0x41005270: nop

    after_0:
    // 0x41005274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4100527C: jr          $ra
    // 0x41005280: nop

    return;
    // 0x41005280: nop

;}
RECOMP_FUNC void ovl_item_main_5284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41005288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4100528C: jal         0x41000340
    // 0x41005290: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_item_main_340(rdram, ctx);
        goto after_0;
    // 0x41005290: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x41005294: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41005298: lwc1        $f6, 0x7150($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7150);
    // 0x4100529C: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x410052A0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410052A4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x410052A8: lwc1        $f10, 0x7154($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7154);
    // 0x410052AC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x410052B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x410052B4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x410052B8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x410052BC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x410052C0: swc1        $f4, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f4.u32l;
    // 0x410052C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410052C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x410052CC: jr          $ra
    // 0x410052D0: nop

    return;
    // 0x410052D0: nop

;}
RECOMP_FUNC void ovl_item_main_52D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410052D4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x410052D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x410052DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410052E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410052E4: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x410052E8: jal         0x41000340
    // 0x410052EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_item_main_340(rdram, ctx);
        goto after_0;
    // 0x410052EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x410052F0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410052F4: lwc1        $f2, 0x6910($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6910);
    // 0x410052F8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x410052FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x41005300: cvt.s.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f6.fl = CVT_S_D(ctx->f0.d);
    // 0x41005304: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x41005308: sub.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x4100530C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x41005310: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x41005314: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x41005318: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x4100531C: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x41005320: add.s       $f2, $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x41005324: swc1        $f16, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f16.u32l;
    // 0x41005328: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x4100532C: swc1        $f2, 0x6910($at)
    MEM_W(0X6910, ctx->r1) = ctx->f2.u32l;
    // 0x41005330: bc1f        L_41005344
    if (!c1cs) {
        // 0x41005334: nop
    
            goto L_41005344;
    }
    // 0x41005334: nop

    // 0x41005338: sub.s       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x4100533C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41005340: swc1        $f2, 0x6910($at)
    MEM_W(0X6910, ctx->r1) = ctx->f2.u32l;
L_41005344:
    // 0x41005344: jal         0x41005284
    // 0x41005348: nop

    ovl_item_main_5284(rdram, ctx);
        goto after_1;
    // 0x41005348: nop

    after_1:
    // 0x4100534C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41005354: jr          $ra
    // 0x41005358: nop

    return;
    // 0x41005358: nop

;}
RECOMP_FUNC void ovl_item_main_535C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100535C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41005360: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x41005364: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x41005368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4100536C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x41005370: swc1        $f4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f4.u32l;
    // 0x41005374: jal         0x41005284
    // 0x41005378: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_item_main_5284(rdram, ctx);
        goto after_0;
    // 0x41005378: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4100537C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x41005380: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x41005384: nop

    // 0x41005388: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
    // 0x4100538C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41005390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41005394: jr          $ra
    // 0x41005398: nop

    return;
    // 0x41005398: nop

;}
RECOMP_FUNC void ovl_item_main_539C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100539C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x410053A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x410053A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x410053A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x410053AC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x410053B0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410053B4: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x410053B8: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    // 0x410053BC: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x410053C0: lwc1        $f4, 0x7158($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7158);
    // 0x410053C4: sra         $t6, $v0, 12
    ctx->r14 = S32(SIGNED(ctx->r2) >> 12);
    // 0x410053C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x410053CC: beq         $t6, $zero, L_410054A8
    if (ctx->r14 == 0) {
        // 0x410053D0: swc1        $f4, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
            goto L_410054A8;
    }
    // 0x410053D0: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x410053D4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x410053D8: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x410053DC: beq         $at, $zero, L_410054A8
    if (ctx->r1 == 0) {
        // 0x410053E0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_410054A8;
    }
    // 0x410053E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x410053E4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410053E8: addu        $at, $at, $t7
    gpr jr_addend_410053F4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x410053EC: lw          $t7, 0x715C($at)
    ctx->r15 = ADD32(ctx->r1, 0X715C);
    // 0x410053F0: nop

    // 0x410053F4: jr          $t7
    // 0x410053F8: nop

    switch (jr_addend_410053F4 >> 2) {
        case 0: goto L_4100540C; break;
        case 1: goto L_41005420; break;
        case 2: goto L_41005434; break;
        case 3: goto L_41005448; break;
        case 4: goto L_4100545C; break;
        case 5: goto L_41005470; break;
        case 6: goto L_41005484; break;
        case 7: goto L_41005498; break;
        case 8: goto L_410053FC; break;
        default: switch_error(__func__, 0x410053F4, 0x4100715C);
    }
    // 0x410053F8: nop

L_410053FC:
    // 0x410053FC: jal         0x410052D4
    // 0x41005400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_52D4(rdram, ctx);
        goto after_0;
    // 0x41005400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x41005404: b           L_410054AC
    // 0x41005408: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
        goto L_410054AC;
    // 0x41005408: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
L_4100540C:
    // 0x4100540C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x41005410: jal         0x4100535C
    // 0x41005414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_535C(rdram, ctx);
        goto after_1;
    // 0x41005414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x41005418: b           L_410054AC
    // 0x4100541C: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
        goto L_410054AC;
    // 0x4100541C: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
L_41005420:
    // 0x41005420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41005424: jal         0x4100535C
    // 0x41005428: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    ovl_item_main_535C(rdram, ctx);
        goto after_2;
    // 0x41005428: lui         $a1, 0x4234
    ctx->r5 = S32(0X4234 << 16);
    after_2:
    // 0x4100542C: b           L_410054AC
    // 0x41005430: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
        goto L_410054AC;
    // 0x41005430: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
L_41005434:
    // 0x41005434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41005438: jal         0x4100535C
    // 0x4100543C: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    ovl_item_main_535C(rdram, ctx);
        goto after_3;
    // 0x4100543C: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    after_3:
    // 0x41005440: b           L_410054AC
    // 0x41005444: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
        goto L_410054AC;
    // 0x41005444: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
L_41005448:
    // 0x41005448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4100544C: jal         0x4100535C
    // 0x41005450: lui         $a1, 0x4307
    ctx->r5 = S32(0X4307 << 16);
    ovl_item_main_535C(rdram, ctx);
        goto after_4;
    // 0x41005450: lui         $a1, 0x4307
    ctx->r5 = S32(0X4307 << 16);
    after_4:
    // 0x41005454: b           L_410054AC
    // 0x41005458: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
        goto L_410054AC;
    // 0x41005458: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
L_4100545C:
    // 0x4100545C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41005460: jal         0x4100535C
    // 0x41005464: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    ovl_item_main_535C(rdram, ctx);
        goto after_5;
    // 0x41005464: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_5:
    // 0x41005468: b           L_410054AC
    // 0x4100546C: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
        goto L_410054AC;
    // 0x4100546C: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
L_41005470:
    // 0x41005470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41005474: jal         0x4100535C
    // 0x41005478: lui         $a1, 0x4361
    ctx->r5 = S32(0X4361 << 16);
    ovl_item_main_535C(rdram, ctx);
        goto after_6;
    // 0x41005478: lui         $a1, 0x4361
    ctx->r5 = S32(0X4361 << 16);
    after_6:
    // 0x4100547C: b           L_410054AC
    // 0x41005480: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
        goto L_410054AC;
    // 0x41005480: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
L_41005484:
    // 0x41005484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41005488: jal         0x4100535C
    // 0x4100548C: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    ovl_item_main_535C(rdram, ctx);
        goto after_7;
    // 0x4100548C: lui         $a1, 0x4387
    ctx->r5 = S32(0X4387 << 16);
    after_7:
    // 0x41005490: b           L_410054AC
    // 0x41005494: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
        goto L_410054AC;
    // 0x41005494: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
L_41005498:
    // 0x41005498: lui         $a1, 0x439D
    ctx->r5 = S32(0X439D << 16);
    // 0x4100549C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x410054A0: jal         0x4100535C
    // 0x410054A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_535C(rdram, ctx);
        goto after_8;
    // 0x410054A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_410054A8:
    // 0x410054A8: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
L_410054AC:
    // 0x410054AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x410054B0: jal         0x41004C50
    // 0x410054B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_item_main_4C50(rdram, ctx);
        goto after_9;
    // 0x410054B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_9:
    // 0x410054B8: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x410054BC: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x410054C0: beq         $t8, $at, L_410054E8
    if (ctx->r24 == ctx->r1) {
        // 0x410054C4: addiu       $a1, $zero, 0x16
        ctx->r5 = ADD32(0, 0X16);
            goto L_410054E8;
    }
    // 0x410054C4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x410054C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x410054CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x410054D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x410054D4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x410054D8: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x410054DC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x410054E0: b           L_410054FC
    // 0x410054E4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
        goto L_410054FC;
    // 0x410054E4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
L_410054E8:
    // 0x410054E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x410054EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x410054F0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x410054F4: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x410054F8: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
L_410054FC:
    // 0x410054FC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x41005500: jal         0x410006C4
    // 0x41005504: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_item_main_6C4(rdram, ctx);
        goto after_10;
    // 0x41005504: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_10:
    // 0x41005508: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x4100550C: lui         $v0, 0x4100
    ctx->r2 = S32(0X4100 << 16);
    // 0x41005510: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x41005514: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x41005518: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x4100551C: lw          $v0, 0x6924($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6924);
    // 0x41005520: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41005524: beq         $v0, $at, L_4100553C
    if (ctx->r2 == ctx->r1) {
        // 0x41005528: addiu       $a1, $zero, 0x27
        ctx->r5 = ADD32(0, 0X27);
            goto L_4100553C;
    }
    // 0x41005528: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x4100552C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x41005530: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x41005534: jal         0x410006C4
    // 0x41005538: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_item_main_6C4(rdram, ctx);
        goto after_11;
    // 0x41005538: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_11:
L_4100553C:
    // 0x4100553C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x41005540: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x41005544: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x41005548: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x4100554C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x41005550: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x41005554: jal         0x410006C4
    // 0x41005558: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_item_main_6C4(rdram, ctx);
        goto after_12;
    // 0x41005558: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_12:
    // 0x4100555C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x41005560: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41005564: jr          $ra
    // 0x41005568: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x41005568: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_item_main_556C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100556C: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41005570: addiu       $v1, $v1, 0x71F4
    ctx->r3 = ADD32(ctx->r3, 0X71F4);
    // 0x41005574: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x41005578: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x4100557C: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x41005580: sw          $a1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r5;
    // 0x41005584: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x41005588: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x4100558C: jr          $ra
    // 0x41005590: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    return;
    // 0x41005590: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_item_main_5594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41005594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41005598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4100559C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x410055A0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x410055A4: jal         0x41004E04
    // 0x410055A8: nop

    ovl_item_main_4E04(rdram, ctx);
        goto after_0;
    // 0x410055A8: nop

    after_0:
    // 0x410055AC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x410055B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410055B4: lw          $v1, 0xC($t7)
    ctx->r3 = MEM_W(ctx->r15, 0XC);
    // 0x410055B8: beq         $v0, $at, L_410055F8
    if (ctx->r2 == ctx->r1) {
        // 0x410055BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_410055F8;
    }
    // 0x410055BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x410055C0: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x410055C4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x410055C8: bne         $t8, $at, L_410055FC
    if (ctx->r24 != ctx->r1) {
        // 0x410055CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410055FC;
    }
    // 0x410055CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410055D0: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x410055D4: nop

    // 0x410055D8: bne         $t9, $zero, L_410055FC
    if (ctx->r25 != 0) {
        // 0x410055DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410055FC;
    }
    // 0x410055DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410055E0: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x410055E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x410055E8: bne         $t0, $at, L_410055FC
    if (ctx->r8 != ctx->r1) {
        // 0x410055EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410055FC;
    }
    // 0x410055EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410055F0: jal         0x41004C50
    // 0x410055F4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_item_main_4C50(rdram, ctx);
        goto after_1;
    // 0x410055F4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_1:
L_410055F8:
    // 0x410055F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_410055FC:
    // 0x410055FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41005600: jr          $ra
    // 0x41005604: nop

    return;
    // 0x41005604: nop

;}
