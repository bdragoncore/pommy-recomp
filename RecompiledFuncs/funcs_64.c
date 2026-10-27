#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_item_main_12C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410012C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x410012C4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x410012C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410012CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x410012D0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x410012D4: bne         $a3, $zero, L_410012EC
    if (ctx->r7 != 0) {
        // 0x410012D8: sw          $t6, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r14;
            goto L_410012EC;
    }
    // 0x410012D8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x410012DC: lw          $t7, 0x90($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X90);
    // 0x410012E0: nop

    // 0x410012E4: bne         $t7, $zero, L_4100132C
    if (ctx->r15 != 0) {
        // 0x410012E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4100132C;
    }
    // 0x410012E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_410012EC:
    // 0x410012EC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x410012F0: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x410012F4: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x410012F8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x410012FC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x41001300: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x41001304: jal         0x410010E4
    // 0x41001308: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    ovl_item_main_10E4(rdram, ctx);
        goto after_0;
    // 0x41001308: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x4100130C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x41001310: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x41001314: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x41001318: sw          $t0, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r8;
    // 0x4100131C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x41001320: sw          $t2, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r10;
    // 0x41001324: sw          $t1, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r9;
    // 0x41001328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4100132C:
    // 0x4100132C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x41001330: jr          $ra
    // 0x41001334: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x41001334: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_item_main_1338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001338: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x4100133C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001340: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x41001344: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x41001348: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4100134C: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x41001350: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x41001354: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x41001358: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x4100135C: beq         $t7, $zero, L_41001438
    if (ctx->r15 == 0) {
        // 0x41001360: nop
    
            goto L_41001438;
    }
    // 0x41001360: nop

    // 0x41001364: bne         $a1, $zero, L_41001374
    if (ctx->r5 != 0) {
        // 0x41001368: addiu       $at, $zero, -0x5
        ctx->r1 = ADD32(0, -0X5);
            goto L_41001374;
    }
    // 0x41001368: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x4100136C: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x41001370: sw          $t9, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r25;
L_41001374:
    // 0x41001374: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x41001378: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x4100137C: jal         0x410006C4
    // 0x41001380: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x41001380: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x41001384: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x41001388: bne         $v0, $zero, L_41001428
    if (ctx->r2 != 0) {
        // 0x4100138C: lw          $t2, 0x54($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X54);
            goto L_41001428;
    }
    // 0x4100138C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x41001390: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x41001394: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x41001398: beq         $v0, $zero, L_410013A8
    if (ctx->r2 == 0) {
        // 0x4100139C: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_410013A8;
    }
    // 0x4100139C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x410013A0: bne         $v0, $at, L_41001428
    if (ctx->r2 != ctx->r1) {
        // 0x410013A4: lw          $t2, 0x54($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X54);
            goto L_41001428;
    }
    // 0x410013A4: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
L_410013A8:
    // 0x410013A8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x410013AC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x410013B0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x410013B4: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x410013B8: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x410013BC: lw          $t3, 0x4($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X4);
    // 0x410013C0: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x410013C4: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x410013C8: bne         $t1, $zero, L_41001400
    if (ctx->r9 != 0) {
        // 0x410013CC: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_41001400;
    }
    // 0x410013CC: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x410013D0: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x410013D4: addiu       $t7, $zero, 0x2A
    ctx->r15 = ADD32(0, 0X2A);
    // 0x410013D8: bne         $t5, $zero, L_410013EC
    if (ctx->r13 != 0) {
        // 0x410013DC: addiu       $t9, $sp, 0x4C
        ctx->r25 = ADD32(ctx->r29, 0X4C);
            goto L_410013EC;
    }
    // 0x410013DC: addiu       $t9, $sp, 0x4C
    ctx->r25 = ADD32(ctx->r29, 0X4C);
    // 0x410013E0: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x410013E4: b           L_41001408
    // 0x410013E8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
        goto L_41001408;
    // 0x410013E8: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_410013EC:
    // 0x410013EC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x410013F0: lw          $t8, 0x10($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X10);
    // 0x410013F4: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x410013F8: b           L_41001408
    // 0x410013FC: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
        goto L_41001408;
    // 0x410013FC: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
L_41001400:
    // 0x41001400: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x41001404: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_41001408:
    // 0x41001408: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4100140C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x41001410: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x41001414: jal         0x410010E4
    // 0x41001418: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    ovl_item_main_10E4(rdram, ctx);
        goto after_1;
    // 0x41001418: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    after_1:
    // 0x4100141C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x41001420: nop

    // 0x41001424: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
L_41001428:
    // 0x41001428: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x4100142C: bne         $t2, $zero, L_4100143C
    if (ctx->r10 != 0) {
        // 0x41001430: lw          $v0, 0x4C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X4C);
            goto L_4100143C;
    }
    // 0x41001430: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x41001434: sw          $t3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r11;
L_41001438:
    // 0x41001438: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
L_4100143C:
    // 0x4100143C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001440: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x41001444: sltiu       $v0, $t4, 0x1
    ctx->r2 = ctx->r12 < 0X1 ? 1 : 0;
    // 0x41001448: jr          $ra
    // 0x4100144C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4100144C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_item_main_1450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41001454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001458: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x4100145C: jal         0x41001028
    // 0x41001460: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_item_main_1028(rdram, ctx);
        goto after_0;
    // 0x41001460: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x41001464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4100146C: jr          $ra
    // 0x41001470: nop

    return;
    // 0x41001470: nop

;}
RECOMP_FUNC void ovl_item_main_1474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41001478: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4100147C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x41001480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001484: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x41001488: jal         0x41001028
    // 0x4100148C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_item_main_1028(rdram, ctx);
        goto after_0;
    // 0x4100148C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x41001490: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x41001494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001498: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x4100149C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x410014A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x410014A4: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x410014A8: jr          $ra
    // 0x410014AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x410014AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_item_main_14B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410014B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410014B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x410014B8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x410014BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410014C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x410014C4: jal         0x41001028
    // 0x410014C8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_item_main_1028(rdram, ctx);
        goto after_0;
    // 0x410014C8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x410014CC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x410014D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410014D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x410014D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x410014DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x410014E0: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x410014E4: jr          $ra
    // 0x410014E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x410014E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_item_main_14EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410014EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410014F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410014F4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x410014F8: jal         0x41001028
    // 0x410014FC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_item_main_1028(rdram, ctx);
        goto after_0;
    // 0x410014FC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
    // 0x41001500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41001508: jr          $ra
    // 0x4100150C: nop

    return;
    // 0x4100150C: nop

;}
RECOMP_FUNC void ovl_item_main_1510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001510: sra         $v0, $a0, 8
    ctx->r2 = S32(SIGNED(ctx->r4) >> 8);
    // 0x41001514: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x41001518: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4100151C: beq         $t6, $at, L_41001538
    if (ctx->r14 == ctx->r1) {
        // 0x41001520: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_41001538;
    }
    // 0x41001520: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x41001524: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x41001528: beq         $t6, $at, L_41001538
    if (ctx->r14 == ctx->r1) {
        // 0x4100152C: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_41001538;
    }
    // 0x4100152C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x41001530: bne         $t6, $at, L_4100153C
    if (ctx->r14 != ctx->r1) {
        // 0x41001534: nop
    
            goto L_4100153C;
    }
    // 0x41001534: nop

L_41001538:
    // 0x41001538: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4100153C:
    // 0x4100153C: jr          $ra
    // 0x41001540: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x41001540: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_item_main_1544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001544: sra         $v0, $a0, 8
    ctx->r2 = S32(SIGNED(ctx->r4) >> 8);
    // 0x41001548: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x4100154C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x41001550: beq         $t6, $at, L_41001564
    if (ctx->r14 == ctx->r1) {
        // 0x41001554: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_41001564;
    }
    // 0x41001554: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x41001558: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x4100155C: bne         $t6, $at, L_41001568
    if (ctx->r14 != ctx->r1) {
        // 0x41001560: nop
    
            goto L_41001568;
    }
    // 0x41001560: nop

L_41001564:
    // 0x41001564: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_41001568:
    // 0x41001568: jr          $ra
    // 0x4100156C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4100156C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_item_main_1570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001570: jr          $ra
    // 0x41001574: nop

    return;
    // 0x41001574: nop

;}
RECOMP_FUNC void ovl_item_main_1578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001578: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4100157C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001580: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x41001584: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x41001588: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4100158C: jal         0x410006C4
    // 0x41001590: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x41001590: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x41001594: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x41001598: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x4100159C: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x410015A0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x410015A4: lw          $a0, 0x10($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X10);
    // 0x410015A8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x410015AC: jal         0x410006C4
    // 0x410015B0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x410015B0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x410015B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410015B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x410015BC: jr          $ra
    // 0x410015C0: nop

    return;
    // 0x410015C0: nop

;}
RECOMP_FUNC void ovl_item_main_15C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410015C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x410015C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x410015CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x410015D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x410015D4: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x410015D8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x410015DC: jal         0x410006C4
    // 0x410015E0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x410015E0: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x410015E4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x410015E8: addiu       $t9, $zero, 0xBC
    ctx->r25 = ADD32(0, 0XBC);
    // 0x410015EC: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x410015F0: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x410015F4: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x410015F8: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x410015FC: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x41001600: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x41001604: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x41001608: jal         0x410006C4
    // 0x4100160C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4100160C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x41001610: jal         0x410010A8
    // 0x41001614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_10A8(rdram, ctx);
        goto after_2;
    // 0x41001614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x41001618: jal         0x41001578
    // 0x4100161C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_1578(rdram, ctx);
        goto after_3;
    // 0x4100161C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x41001620: lw          $t0, 0x60($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X60);
    // 0x41001624: nop

    // 0x41001628: ori         $t1, $t0, 0x10
    ctx->r9 = ctx->r8 | 0X10;
    // 0x4100162C: sw          $t1, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r9;
    // 0x41001630: ori         $t3, $t1, 0x20
    ctx->r11 = ctx->r9 | 0X20;
    // 0x41001634: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
    // 0x41001638: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4100163C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41001640: jr          $ra
    // 0x41001644: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x41001644: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_item_main_1648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001648: lw          $v1, 0x60($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X60);
    // 0x4100164C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x41001650: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x41001654: beq         $t6, $zero, L_4100168C
    if (ctx->r14 == 0) {
        // 0x41001658: addiu       $a3, $zero, 0x12
        ctx->r7 = ADD32(0, 0X12);
            goto L_4100168C;
    }
    // 0x41001658: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x4100165C: beq         $a1, $a3, L_41001684
    if (ctx->r5 == ctx->r7) {
        // 0x41001660: nop
    
            goto L_41001684;
    }
    // 0x41001660: nop

    // 0x41001664: lw          $a2, 0x64($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X64);
    // 0x41001668: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x4100166C: beq         $a3, $a2, L_4100167C
    if (ctx->r7 == ctx->r6) {
        // 0x41001670: nop
    
            goto L_4100167C;
    }
    // 0x41001670: nop

    // 0x41001674: beq         $a1, $at, L_41001684
    if (ctx->r5 == ctx->r1) {
        // 0x41001678: nop
    
            goto L_41001684;
    }
    // 0x41001678: nop

L_4100167C:
    // 0x4100167C: bne         $a2, $zero, L_41001690
    if (ctx->r6 != 0) {
        // 0x41001680: nop
    
            goto L_41001690;
    }
    // 0x41001680: nop

L_41001684:
    // 0x41001684: b           L_41001690
    // 0x41001688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_41001690;
    // 0x41001688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4100168C:
    // 0x4100168C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_41001690:
    // 0x41001690: beq         $v0, $zero, L_410016A0
    if (ctx->r2 == 0) {
        // 0x41001694: ori         $t7, $v1, 0x1
        ctx->r15 = ctx->r3 | 0X1;
            goto L_410016A0;
    }
    // 0x41001694: ori         $t7, $v1, 0x1
    ctx->r15 = ctx->r3 | 0X1;
    // 0x41001698: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
    // 0x4100169C: sw          $a1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r5;
L_410016A0:
    // 0x410016A0: jr          $ra
    // 0x410016A4: nop

    return;
    // 0x410016A4: nop

;}
RECOMP_FUNC void ovl_item_main_16A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410016A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410016AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410016B0: jal         0x41001120
    // 0x410016B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_item_main_1120(rdram, ctx);
        goto after_0;
    // 0x410016B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x410016B8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x410016BC: nop

    // 0x410016C0: sw          $zero, 0x74($t6)
    MEM_W(0X74, ctx->r14) = 0;
    // 0x410016C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410016C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x410016CC: jr          $ra
    // 0x410016D0: nop

    return;
    // 0x410016D0: nop

;}
RECOMP_FUNC void ovl_item_main_16D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410016D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410016D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410016DC: jal         0x41001450
    // 0x410016E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_1450(rdram, ctx);
        goto after_0;
    // 0x410016E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x410016E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x410016E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x410016EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x410016F0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
L_410016F4:
    // 0x410016F4: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x410016F8: nop

    // 0x410016FC: bne         $v0, $t6, L_41001720
    if (ctx->r2 != ctx->r14) {
        // 0x41001700: nop
    
            goto L_41001720;
    }
    // 0x41001700: nop

    // 0x41001704: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41001708: addiu       $v1, $v1, 0x71E0
    ctx->r3 = ADD32(ctx->r3, 0X71E0);
    // 0x4100170C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x41001710: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x41001714: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x41001718: b           L_410017B4
    // 0x4100171C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_410017B4;
    // 0x4100171C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_41001720:
    // 0x41001720: lw          $t9, 0xAC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XAC);
    // 0x41001724: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41001728: bne         $v0, $t9, L_4100174C
    if (ctx->r2 != ctx->r25) {
        // 0x4100172C: nop
    
            goto L_4100174C;
    }
    // 0x4100172C: nop

    // 0x41001730: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41001734: addiu       $v1, $v1, 0x71E0
    ctx->r3 = ADD32(ctx->r3, 0X71E0);
    // 0x41001738: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x4100173C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x41001740: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x41001744: b           L_410017B4
    // 0x41001748: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_410017B4;
    // 0x41001748: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_4100174C:
    // 0x4100174C: lw          $t2, 0xAC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XAC);
    // 0x41001750: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41001754: bne         $v0, $t2, L_41001778
    if (ctx->r2 != ctx->r10) {
        // 0x41001758: nop
    
            goto L_41001778;
    }
    // 0x41001758: nop

    // 0x4100175C: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41001760: addiu       $v1, $v1, 0x71E0
    ctx->r3 = ADD32(ctx->r3, 0X71E0);
    // 0x41001764: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x41001768: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x4100176C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x41001770: b           L_410017B4
    // 0x41001774: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_410017B4;
    // 0x41001774: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_41001778:
    // 0x41001778: lw          $t5, 0xAC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XAC);
    // 0x4100177C: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41001780: bne         $v0, $t5, L_410017A4
    if (ctx->r2 != ctx->r13) {
        // 0x41001784: nop
    
            goto L_410017A4;
    }
    // 0x41001784: nop

    // 0x41001788: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x4100178C: addiu       $v1, $v1, 0x71E0
    ctx->r3 = ADD32(ctx->r3, 0X71E0);
    // 0x41001790: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x41001794: addiu       $v0, $a0, 0x3
    ctx->r2 = ADD32(ctx->r4, 0X3);
    // 0x41001798: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x4100179C: b           L_410017B4
    // 0x410017A0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_410017B4;
    // 0x410017A0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_410017A4:
    // 0x410017A4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x410017A8: bne         $a0, $a1, L_410016F4
    if (ctx->r4 != ctx->r5) {
        // 0x410017AC: addiu       $v1, $v1, 0xA0
        ctx->r3 = ADD32(ctx->r3, 0XA0);
            goto L_410016F4;
    }
    // 0x410017AC: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x410017B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_410017B4:
    // 0x410017B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410017B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x410017BC: jr          $ra
    // 0x410017C0: nop

    return;
    // 0x410017C0: nop

;}
RECOMP_FUNC void ovl_item_main_17C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410017C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410017C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410017CC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x410017D0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x410017D4: jal         0x41001450
    // 0x410017D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_1450(rdram, ctx);
        goto after_0;
    // 0x410017D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x410017DC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x410017E0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x410017E4: bne         $a1, $a0, L_410017F4
    if (ctx->r5 != ctx->r4) {
        // 0x410017E8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_410017F4;
    }
    // 0x410017E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x410017EC: b           L_410018A8
    // 0x410017F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_410018A8;
    // 0x410017F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_410017F4:
    // 0x410017F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x410017F8: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
L_410017FC:
    // 0x410017FC: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x41001800: nop

    // 0x41001804: beq         $a0, $t6, L_41001824
    if (ctx->r4 == ctx->r14) {
        // 0x41001808: nop
    
            goto L_41001824;
    }
    // 0x41001808: nop

    // 0x4100180C: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x41001810: nop

    // 0x41001814: bne         $a1, $t7, L_41001824
    if (ctx->r5 != ctx->r15) {
        // 0x41001818: nop
    
            goto L_41001824;
    }
    // 0x41001818: nop

    // 0x4100181C: b           L_410018A8
    // 0x41001820: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_410018A8;
    // 0x41001820: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_41001824:
    // 0x41001824: lw          $t8, 0xAC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XAC);
    // 0x41001828: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x4100182C: beq         $a0, $t8, L_4100184C
    if (ctx->r4 == ctx->r24) {
        // 0x41001830: nop
    
            goto L_4100184C;
    }
    // 0x41001830: nop

    // 0x41001834: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x41001838: nop

    // 0x4100183C: bne         $a1, $t9, L_4100184C
    if (ctx->r5 != ctx->r25) {
        // 0x41001840: nop
    
            goto L_4100184C;
    }
    // 0x41001840: nop

    // 0x41001844: b           L_410018A8
    // 0x41001848: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_410018A8;
    // 0x41001848: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4100184C:
    // 0x4100184C: lw          $t0, 0xAC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XAC);
    // 0x41001850: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41001854: beq         $a0, $t0, L_41001874
    if (ctx->r4 == ctx->r8) {
        // 0x41001858: nop
    
            goto L_41001874;
    }
    // 0x41001858: nop

    // 0x4100185C: lw          $t1, 0x10($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X10);
    // 0x41001860: nop

    // 0x41001864: bne         $a1, $t1, L_41001874
    if (ctx->r5 != ctx->r9) {
        // 0x41001868: nop
    
            goto L_41001874;
    }
    // 0x41001868: nop

    // 0x4100186C: b           L_410018A8
    // 0x41001870: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_410018A8;
    // 0x41001870: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_41001874:
    // 0x41001874: lw          $t2, 0xAC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XAC);
    // 0x41001878: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x4100187C: beq         $a0, $t2, L_4100189C
    if (ctx->r4 == ctx->r10) {
        // 0x41001880: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_4100189C;
    }
    // 0x41001880: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x41001884: lw          $t3, 0x10($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X10);
    // 0x41001888: nop

    // 0x4100188C: bne         $a1, $t3, L_4100189C
    if (ctx->r5 != ctx->r11) {
        // 0x41001890: nop
    
            goto L_4100189C;
    }
    // 0x41001890: nop

    // 0x41001894: b           L_410018A8
    // 0x41001898: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_410018A8;
    // 0x41001898: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4100189C:
    // 0x4100189C: bne         $v0, $a2, L_410017FC
    if (ctx->r2 != ctx->r6) {
        // 0x410018A0: addiu       $v1, $v1, 0xA0
        ctx->r3 = ADD32(ctx->r3, 0XA0);
            goto L_410017FC;
    }
    // 0x410018A0: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x410018A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_410018A8:
    // 0x410018A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410018AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x410018B0: jr          $ra
    // 0x410018B4: nop

    return;
    // 0x410018B4: nop

;}
RECOMP_FUNC void ovl_item_main_18B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410018B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x410018BC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x410018C0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x410018C4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x410018C8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x410018CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x410018D0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x410018D4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x410018D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x410018DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x410018E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x410018E4: addiu       $s4, $zero, -0x7001
    ctx->r20 = ADD32(0, -0X7001);
    // 0x410018E8: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_410018EC:
    // 0x410018EC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x410018F0: jal         0x410014B0
    // 0x410018F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_item_main_14B0(rdram, ctx);
        goto after_0;
    // 0x410018F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x410018F8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x410018FC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x41001900: jal         0x41001474
    // 0x41001904: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_item_main_1474(rdram, ctx);
        goto after_1;
    // 0x41001904: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x41001908: lw          $t6, 0x10($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X10);
    // 0x4100190C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x41001910: and         $t7, $t6, $s4
    ctx->r15 = ctx->r14 & ctx->r20;
    // 0x41001914: sw          $t7, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r15;
    // 0x41001918: or          $t9, $t7, $s3
    ctx->r25 = ctx->r15 | ctx->r19;
    // 0x4100191C: sw          $t9, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r25;
    // 0x41001920: lw          $t0, 0x10($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X10);
    // 0x41001924: nop

    // 0x41001928: and         $t1, $t0, $s4
    ctx->r9 = ctx->r8 & ctx->r20;
    // 0x4100192C: sw          $t1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r9;
    // 0x41001930: or          $t3, $t1, $s3
    ctx->r11 = ctx->r9 | ctx->r19;
    // 0x41001934: bne         $s0, $s5, L_410018EC
    if (ctx->r16 != ctx->r21) {
        // 0x41001938: sw          $t3, 0x10($v0)
        MEM_W(0X10, ctx->r2) = ctx->r11;
            goto L_410018EC;
    }
    // 0x41001938: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    // 0x4100193C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x41001940: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x41001944: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x41001948: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x4100194C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x41001950: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x41001954: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x41001958: jr          $ra
    // 0x4100195C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4100195C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_item_main_1960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001960: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x41001964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001968: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4100196C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x41001970: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x41001974: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x41001978: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4100197C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x41001980: jal         0x410006C4
    // 0x41001984: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x41001984: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x41001988: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x4100198C: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x41001990: lwc1        $f4, 0x34($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X34);
    // 0x41001994: lwc1        $f6, 0x30($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X30);
    // 0x41001998: nop

    // 0x4100199C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x410019A0: nop

    // 0x410019A4: bc1f        L_41001A08
    if (!c1cs) {
        // 0x410019A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41001A08;
    }
    // 0x410019A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410019AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x410019B0: lwc1        $f10, 0x38($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X38);
    // 0x410019B4: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x410019B8: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x410019BC: nop

    // 0x410019C0: bc1f        L_41001A08
    if (!c1cs) {
        // 0x410019C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41001A08;
    }
    // 0x410019C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410019C8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x410019CC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x410019D0: bc1f        L_41001A08
    if (!c1cs) {
        // 0x410019D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41001A08;
    }
    // 0x410019D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410019D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x410019DC: sub.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x410019E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x410019E4: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x410019E8: nop

    // 0x410019EC: bc1f        L_41001A08
    if (!c1cs) {
        // 0x410019F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41001A08;
    }
    // 0x410019F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410019F4: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x410019F8: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x410019FC: jal         0x410006C4
    // 0x41001A00: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x41001A00: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x41001A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41001A08:
    // 0x41001A08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x41001A0C: jr          $ra
    // 0x41001A10: nop

    return;
    // 0x41001A10: nop

;}
RECOMP_FUNC void ovl_item_main_1A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001A14: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x41001A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001A1C: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x41001A20: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x41001A24: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x41001A28: bne         $t6, $zero, L_41001A84
    if (ctx->r14 != 0) {
        // 0x41001A2C: andi        $t7, $v0, 0x200
        ctx->r15 = ctx->r2 & 0X200;
            goto L_41001A84;
    }
    // 0x41001A2C: andi        $t7, $v0, 0x200
    ctx->r15 = ctx->r2 & 0X200;
    // 0x41001A30: bne         $t7, $zero, L_41001A84
    if (ctx->r15 != 0) {
        // 0x41001A34: nop
    
            goto L_41001A84;
    }
    // 0x41001A34: nop

    // 0x41001A38: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41001A3C: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x41001A40: nop

    // 0x41001A44: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x41001A48: nop

    // 0x41001A4C: bc1f        L_41001A84
    if (!c1cs) {
        // 0x41001A50: nop
    
            goto L_41001A84;
    }
    // 0x41001A50: nop

    // 0x41001A54: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x41001A58: nop

    // 0x41001A5C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x41001A60: nop

    // 0x41001A64: bc1f        L_41001A84
    if (!c1cs) {
        // 0x41001A68: nop
    
            goto L_41001A84;
    }
    // 0x41001A68: nop

    // 0x41001A6C: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x41001A70: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x41001A74: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x41001A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x41001A7C: bc1t        L_41001AA0
    if (c1cs) {
        // 0x41001A80: nop
    
            goto L_41001AA0;
    }
    // 0x41001A80: nop

L_41001A84:
    // 0x41001A84: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x41001A88: addiu       $a1, $zero, 0x5000
    ctx->r5 = ADD32(0, 0X5000);
    // 0x41001A8C: jal         0x410018B8
    // 0x41001A90: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_item_main_18B8(rdram, ctx);
        goto after_0;
    // 0x41001A90: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x41001A94: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x41001A98: b           L_41001AB4
    // 0x41001A9C: lwc1        $f10, 0x20($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X20);
        goto L_41001AB4;
    // 0x41001A9C: lwc1        $f10, 0x20($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X20);
L_41001AA0:
    // 0x41001AA0: jal         0x410018B8
    // 0x41001AA4: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_item_main_18B8(rdram, ctx);
        goto after_1;
    // 0x41001AA4: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x41001AA8: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x41001AAC: nop

    // 0x41001AB0: lwc1        $f10, 0x20($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X20);
L_41001AB4:
    // 0x41001AB4: addiu       $t8, $a3, 0x1C
    ctx->r24 = ADD32(ctx->r7, 0X1C);
    // 0x41001AB8: swc1        $f10, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f10.u32l;
    // 0x41001ABC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x41001AC0: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x41001AC4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x41001AC8: jal         0x410006C4
    // 0x41001ACC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_item_main_6C4(rdram, ctx);
        goto after_2;
    // 0x41001ACC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x41001AD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001AD4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x41001AD8: jr          $ra
    // 0x41001ADC: nop

    return;
    // 0x41001ADC: nop

;}
RECOMP_FUNC void ovl_item_main_1AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001AE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41001AE4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x41001AE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001AEC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x41001AF0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x41001AF4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x41001AF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x41001AFC: jal         0x41001474
    // 0x41001B00: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_item_main_1474(rdram, ctx);
        goto after_0;
    // 0x41001B00: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x41001B04: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x41001B08: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x41001B0C: jal         0x410014B0
    // 0x41001B10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_item_main_14B0(rdram, ctx);
        goto after_1;
    // 0x41001B10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x41001B14: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x41001B18: jal         0x410014EC
    // 0x41001B1C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    ovl_item_main_14EC(rdram, ctx);
        goto after_2;
    // 0x41001B1C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x41001B20: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x41001B24: lui         $t8, 0x4100
    ctx->r24 = S32(0X4100 << 16);
    // 0x41001B28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x41001B2C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x41001B30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x41001B34: addiu       $t8, $t8, 0x67D0
    ctx->r24 = ADD32(ctx->r24, 0X67D0);
    // 0x41001B38: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x41001B3C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x41001B40: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x41001B44: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x41001B48: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x41001B4C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x41001B50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x41001B54: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x41001B58: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
    // 0x41001B5C: sw          $t0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r8;
    // 0x41001B60: sw          $a0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r4;
    // 0x41001B64: sw          $a1, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r5;
    // 0x41001B68: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x41001B6C: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x41001B70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41001B74: lw          $t1, 0x10($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X10);
    // 0x41001B78: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x41001B7C: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    // 0x41001B80: lw          $t2, 0x10($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X10);
    // 0x41001B84: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x41001B88: swc1        $f2, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f2.u32l;
    // 0x41001B8C: lw          $t3, 0x10($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X10);
    // 0x41001B90: nop

    // 0x41001B94: swc1        $f0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f0.u32l;
    // 0x41001B98: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x41001B9C: lw          $t5, 0x10($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X10);
    // 0x41001BA0: nop

    // 0x41001BA4: sw          $t4, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->r12;
    // 0x41001BA8: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    // 0x41001BAC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x41001BB0: nop

    // 0x41001BB4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x41001BB8: lw          $t7, 0x14($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X14);
    // 0x41001BBC: nop

    // 0x41001BC0: sw          $a0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r4;
    // 0x41001BC4: lw          $t8, 0x14($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X14);
    // 0x41001BC8: nop

    // 0x41001BCC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x41001BD0: nop

    // 0x41001BD4: swc1        $f12, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f12.u32l;
    // 0x41001BD8: lw          $t0, 0x14($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X14);
    // 0x41001BDC: nop

    // 0x41001BE0: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x41001BE4: nop

    // 0x41001BE8: swc1        $f0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f0.u32l;
    // 0x41001BEC: lw          $t2, 0x14($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X14);
    // 0x41001BF0: nop

    // 0x41001BF4: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x41001BF8: nop

    // 0x41001BFC: swc1        $f12, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f12.u32l;
    // 0x41001C00: lw          $t4, 0x14($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X14);
    // 0x41001C04: nop

    // 0x41001C08: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x41001C0C: nop

    // 0x41001C10: swc1        $f0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f0.u32l;
    // 0x41001C14: lw          $t7, 0x14($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X14);
    // 0x41001C18: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x41001C1C: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x41001C20: nop

    // 0x41001C24: sw          $t6, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r14;
    // 0x41001C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001C2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x41001C30: jr          $ra
    // 0x41001C34: nop

    return;
    // 0x41001C34: nop

;}
RECOMP_FUNC void ovl_item_main_1C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001C38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x41001C3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x41001C40: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x41001C44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x41001C48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x41001C4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41001C50: jal         0x41001450
    // 0x41001C54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_1450(rdram, ctx);
        goto after_0;
    // 0x41001C54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x41001C58: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41001C5C: sw          $zero, 0x71E0($at)
    MEM_W(0X71E0, ctx->r1) = 0;
    // 0x41001C60: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41001C64: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x41001C68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x41001C6C: sw          $t6, 0x71E4($at)
    MEM_W(0X71E4, ctx->r1) = ctx->r14;
    // 0x41001C70: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x41001C74: addiu       $s2, $zero, 0x14
    ctx->r18 = ADD32(0, 0X14);
    // 0x41001C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_41001C7C:
    // 0x41001C7C: jal         0x410016A8
    // 0x41001C80: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
    ovl_item_main_16A8(rdram, ctx);
        goto after_1;
    // 0x41001C80: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
    after_1:
    // 0x41001C84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x41001C88: bne         $s1, $s2, L_41001C7C
    if (ctx->r17 != ctx->r18) {
        // 0x41001C8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41001C7C;
    }
    // 0x41001C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41001C90: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41001C94: lui         $a0, 0x4100
    ctx->r4 = S32(0X4100 << 16);
    // 0x41001C98: sw          $s0, 0x71EC($at)
    MEM_W(0X71EC, ctx->r1) = ctx->r16;
    // 0x41001C9C: addiu       $a0, $a0, 0x4A8C
    ctx->r4 = ADD32(ctx->r4, 0X4A8C);
    // 0x41001CA0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x41001CA4: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    // 0x41001CA8: jal         0x41000820
    // 0x41001CAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_item_main_820(rdram, ctx);
        goto after_2;
    // 0x41001CAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x41001CB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x41001CB4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41001CB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41001CBC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x41001CC0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x41001CC4: sw          $v0, 0x71E8($at)
    MEM_W(0X71E8, ctx->r1) = ctx->r2;
    // 0x41001CC8: jr          $ra
    // 0x41001CCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x41001CCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_item_main_1CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001CD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x41001CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001CD8: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x41001CDC: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x41001CE0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x41001CE4: jal         0x410016D4
    // 0x41001CE8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    ovl_item_main_16D4(rdram, ctx);
        goto after_0;
    // 0x41001CE8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x41001CEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x41001CF0: jal         0x41001450
    // 0x41001CF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_item_main_1450(rdram, ctx);
        goto after_1;
    // 0x41001CF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x41001CF8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x41001CFC: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41001D00: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x41001D04: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x41001D08: addiu       $v1, $v1, 0x71E4
    ctx->r3 = ADD32(ctx->r3, 0X71E4);
    // 0x41001D0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x41001D10: lui         $t8, 0x4100
    ctx->r24 = S32(0X4100 << 16);
    // 0x41001D14: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x41001D18: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x41001D1C: lw          $t8, 0x67D4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X67D4);
    // 0x41001D20: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x41001D24: sw          $t8, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r24;
    // 0x41001D28: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x41001D2C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41001D30: bne         $a2, $at, L_41001D3C
    if (ctx->r6 != ctx->r1) {
        // 0x41001D34: sw          $a1, 0x0($t0)
        MEM_W(0X0, ctx->r8) = ctx->r5;
            goto L_41001D3C;
    }
    // 0x41001D34: sw          $a1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r5;
    // 0x41001D38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_41001D3C:
    // 0x41001D3C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x41001D40: jal         0x41001AE0
    // 0x41001D44: nop

    ovl_item_main_1AE0(rdram, ctx);
        goto after_2;
    // 0x41001D44: nop

    after_2:
    // 0x41001D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001D4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x41001D50: jr          $ra
    // 0x41001D54: nop

    return;
    // 0x41001D54: nop

;}
RECOMP_FUNC void ovl_item_main_1D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001D58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41001D5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x41001D60: lui         $a0, 0x4100
    ctx->r4 = S32(0X4100 << 16);
    // 0x41001D64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001D68: lw          $a0, 0x71E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X71E8);
    // 0x41001D6C: jal         0x4100082C
    // 0x41001D70: nop

    ovl_item_main_82C(rdram, ctx);
        goto after_0;
    // 0x41001D70: nop

    after_0:
    // 0x41001D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41001D7C: jr          $ra
    // 0x41001D80: nop

    return;
    // 0x41001D80: nop

;}
RECOMP_FUNC void ovl_item_main_1D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001D84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x41001D88: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x41001D8C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x41001D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001D94: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x41001D98: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x41001D9C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x41001DA0: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x41001DA4: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x41001DA8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x41001DAC: jal         0x410006C4
    // 0x41001DB0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x41001DB0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_0:
    // 0x41001DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001DB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x41001DBC: jr          $ra
    // 0x41001DC0: nop

    return;
    // 0x41001DC0: nop

;}
RECOMP_FUNC void ovl_item_main_1DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001DC4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x41001DC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41001DCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41001DD0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41001DD4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x41001DD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x41001DDC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x41001DE0: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    // 0x41001DE4: beq         $v0, $at, L_41001DF8
    if (ctx->r2 == ctx->r1) {
        // 0x41001DE8: swc1        $f0, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
            goto L_41001DF8;
    }
    // 0x41001DE8: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x41001DEC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x41001DF0: bne         $v0, $at, L_41001E18
    if (ctx->r2 != ctx->r1) {
        // 0x41001DF4: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_41001E18;
    }
    // 0x41001DF4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_41001DF8:
    // 0x41001DF8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x41001DFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41001E00: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x41001E04: jal         0x41001D84
    // 0x41001E08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_item_main_1D84(rdram, ctx);
        goto after_0;
    // 0x41001E08: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x41001E0C: b           L_41001E44
    // 0x41001E10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_41001E44;
    // 0x41001E10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x41001E14: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_41001E18:
    // 0x41001E18: beq         $v0, $at, L_41001E2C
    if (ctx->r2 == ctx->r1) {
        // 0x41001E1C: addiu       $t6, $zero, 0x6FC
        ctx->r14 = ADD32(0, 0X6FC);
            goto L_41001E2C;
    }
    // 0x41001E1C: addiu       $t6, $zero, 0x6FC
    ctx->r14 = ADD32(0, 0X6FC);
    // 0x41001E20: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x41001E24: bne         $v0, $at, L_41001E44
    if (ctx->r2 != ctx->r1) {
        // 0x41001E28: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41001E44;
    }
    // 0x41001E28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41001E2C:
    // 0x41001E2C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x41001E30: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x41001E34: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x41001E38: jal         0x410006C4
    // 0x41001E3C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x41001E3C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x41001E40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41001E44:
    // 0x41001E44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41001E48: jr          $ra
    // 0x41001E4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x41001E4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_item_main_1E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001E50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41001E54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001E58: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x41001E5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x41001E60: jal         0x410041EC
    // 0x41001E64: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_item_main_41EC(rdram, ctx);
        goto after_0;
    // 0x41001E64: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x41001E68: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x41001E6C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x41001E70: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x41001E74: blez        $v1, L_41001EAC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x41001E78: slti        $at, $v1, 0x8
        ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_41001EAC;
    }
    // 0x41001E78: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x41001E7C: beq         $at, $zero, L_41001EAC
    if (ctx->r1 == 0) {
        // 0x41001E80: sll         $t6, $v1, 4
        ctx->r14 = S32(ctx->r3 << 4);
            goto L_41001EAC;
    }
    // 0x41001E80: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x41001E84: lw          $t7, 0x74($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X74);
    // 0x41001E88: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x41001E8C: sra         $t8, $t7, 12
    ctx->r24 = S32(SIGNED(ctx->r15) >> 12);
    // 0x41001E90: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x41001E94: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x41001E98: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x41001E9C: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x41001EA0: lw          $a1, 0x66C0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X66C0);
    // 0x41001EA4: b           L_41001ED4
    // 0x41001EA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_41001ED4;
    // 0x41001EA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_41001EAC:
    // 0x41001EAC: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x41001EB0: bne         $at, $zero, L_41001ED0
    if (ctx->r1 != 0) {
        // 0x41001EB4: slti        $at, $v1, 0xF
        ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
            goto L_41001ED0;
    }
    // 0x41001EB4: slti        $at, $v1, 0xF
    ctx->r1 = SIGNED(ctx->r3) < 0XF ? 1 : 0;
    // 0x41001EB8: beq         $at, $zero, L_41001ED0
    if (ctx->r1 == 0) {
        // 0x41001EBC: sll         $t2, $v1, 2
        ctx->r10 = S32(ctx->r3 << 2);
            goto L_41001ED0;
    }
    // 0x41001EBC: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x41001EC0: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x41001EC4: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x41001EC8: lw          $a1, 0x6720($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6720);
    // 0x41001ECC: nop

L_41001ED0:
    // 0x41001ED0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_41001ED4:
    // 0x41001ED4: beq         $a1, $at, L_41001EE4
    if (ctx->r5 == ctx->r1) {
        // 0x41001ED8: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_41001EE4;
    }
    // 0x41001ED8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x41001EDC: jal         0x410012C0
    // 0x41001EE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_item_main_12C0(rdram, ctx);
        goto after_1;
    // 0x41001EE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_41001EE4:
    // 0x41001EE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001EE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x41001EEC: jr          $ra
    // 0x41001EF0: nop

    return;
    // 0x41001EF0: nop

;}
RECOMP_FUNC void ovl_item_main_1EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001EF4: lui         $v1, 0x4100
    ctx->r3 = S32(0X4100 << 16);
    // 0x41001EF8: addiu       $v1, $v1, 0x71E4
    ctx->r3 = ADD32(ctx->r3, 0X71E4);
    // 0x41001EFC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x41001F00: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x41001F04: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x41001F08: sw          $a1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r5;
    // 0x41001F0C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x41001F10: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x41001F14: jr          $ra
    // 0x41001F18: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    return;
    // 0x41001F18: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_item_main_1F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001F1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41001F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001F24: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x41001F28: jal         0x410017C4
    // 0x41001F2C: nop

    ovl_item_main_17C4(rdram, ctx);
        goto after_0;
    // 0x41001F2C: nop

    after_0:
    // 0x41001F30: lw          $t6, 0x74($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X74);
    // 0x41001F34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x41001F38: sll         $t7, $t6, 15
    ctx->r15 = S32(ctx->r14 << 15);
    // 0x41001F3C: bgez        $t7, L_41001F5C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x41001F40: addiu       $a1, $zero, 0x36
        ctx->r5 = ADD32(0, 0X36);
            goto L_41001F5C;
    }
    // 0x41001F40: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x41001F44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x41001F48: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x41001F4C: jal         0x410012C0
    // 0x41001F50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_item_main_12C0(rdram, ctx);
        goto after_1;
    // 0x41001F50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x41001F54: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x41001F58: nop

L_41001F5C:
    // 0x41001F5C: lw          $t8, 0x74($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X74);
    // 0x41001F60: nop

    // 0x41001F64: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x41001F68: sw          $t9, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r25;
    // 0x41001F6C: jal         0x41001DC4
    // 0x41001F70: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_item_main_1DC4(rdram, ctx);
        goto after_2;
    // 0x41001F70: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_2:
    // 0x41001F74: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x41001F78: jal         0x410015C4
    // 0x41001F7C: nop

    ovl_item_main_15C4(rdram, ctx);
        goto after_3;
    // 0x41001F7C: nop

    after_3:
    // 0x41001F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x41001F88: jr          $ra
    // 0x41001F8C: nop

    return;
    // 0x41001F8C: nop

;}
RECOMP_FUNC void ovl_item_main_1F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41001F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001F98: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x41001F9C: jal         0x410017C4
    // 0x41001FA0: nop

    ovl_item_main_17C4(rdram, ctx);
        goto after_0;
    // 0x41001FA0: nop

    after_0:
    // 0x41001FA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41001FA8: beq         $v0, $at, L_41001FB8
    if (ctx->r2 == ctx->r1) {
        // 0x41001FAC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_41001FB8;
    }
    // 0x41001FAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x41001FB0: jal         0x41001648
    // 0x41001FB4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_item_main_1648(rdram, ctx);
        goto after_1;
    // 0x41001FB4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_1:
L_41001FB8:
    // 0x41001FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41001FC0: jr          $ra
    // 0x41001FC4: nop

    return;
    // 0x41001FC4: nop

;}
RECOMP_FUNC void ovl_item_main_1FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41001FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41001FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41001FD0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x41001FD4: jal         0x410017C4
    // 0x41001FD8: nop

    ovl_item_main_17C4(rdram, ctx);
        goto after_0;
    // 0x41001FD8: nop

    after_0:
    // 0x41001FDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41001FE0: beq         $v0, $at, L_41001FF0
    if (ctx->r2 == ctx->r1) {
        // 0x41001FE4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_41001FF0;
    }
    // 0x41001FE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x41001FE8: jal         0x41001648
    // 0x41001FEC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_item_main_1648(rdram, ctx);
        goto after_1;
    // 0x41001FEC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_1:
L_41001FF0:
    // 0x41001FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41001FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41001FF8: jr          $ra
    // 0x41001FFC: nop

    return;
    // 0x41001FFC: nop

;}
RECOMP_FUNC void ovl_item_main_2000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002000: lui         $v0, 0x4100
    ctx->r2 = S32(0X4100 << 16);
    // 0x41002004: lw          $v0, 0x71E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X71E0);
    // 0x41002008: jr          $ra
    // 0x4100200C: nop

    return;
    // 0x4100200C: nop

;}
RECOMP_FUNC void ovl_item_main_2010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41002014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41002018: jal         0x410041EC
    // 0x4100201C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_item_main_41EC(rdram, ctx);
        goto after_0;
    // 0x4100201C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x41002020: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x41002024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41002028: blez        $v1, L_41002084
    if (SIGNED(ctx->r3) <= 0) {
        // 0x4100202C: slti        $at, $v1, 0x8
        ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_41002084;
    }
    // 0x4100202C: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x41002030: beq         $at, $zero, L_41002084
    if (ctx->r1 == 0) {
        // 0x41002034: nop
    
            goto L_41002084;
    }
    // 0x41002034: nop

    // 0x41002038: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x4100203C: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x41002040: lw          $t8, 0x74($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X74);
    // 0x41002044: lui         $t3, 0x4100
    ctx->r11 = S32(0X4100 << 16);
    // 0x41002048: sra         $t9, $t8, 12
    ctx->r25 = S32(SIGNED(ctx->r24) >> 12);
    // 0x4100204C: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x41002050: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x41002054: addu        $t2, $t6, $t1
    ctx->r10 = ADD32(ctx->r14, ctx->r9);
    // 0x41002058: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x4100205C: lhu         $t3, 0x6754($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X6754);
    // 0x41002060: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x41002064: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x41002068: bgez        $t3, L_4100208C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x4100206C: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_4100208C;
    }
    // 0x4100206C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x41002070: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x41002074: nop

    // 0x41002078: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x4100207C: b           L_4100208C
    // 0x41002080: nop

        goto L_4100208C;
    // 0x41002080: nop

L_41002084:
    // 0x41002084: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41002088: nop

L_4100208C:
    // 0x4100208C: jr          $ra
    // 0x41002090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x41002090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_item_main_2094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x41002098: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x4100209C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410020A0: beq         $a0, $at, L_410020B4
    if (ctx->r4 == ctx->r1) {
        // 0x410020A4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_410020B4;
    }
    // 0x410020A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410020A8: jal         0x41002010
    // 0x410020AC: nop

    ovl_item_main_2010(rdram, ctx);
        goto after_0;
    // 0x410020AC: nop

    after_0:
    // 0x410020B0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_410020B4:
    // 0x410020B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410020B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x410020BC: jr          $ra
    // 0x410020C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x410020C0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void ovl_item_main_20C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410020C4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x410020C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410020CC: lw          $a3, 0xC($a0)
    ctx->r7 = MEM_W(ctx->r4, 0XC);
    // 0x410020D0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x410020D4: jal         0x410017C4
    // 0x410020D8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    ovl_item_main_17C4(rdram, ctx);
        goto after_0;
    // 0x410020D8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_0:
    // 0x410020DC: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x410020E0: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x410020E4: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x410020E8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x410020EC: bne         $v1, $at, L_41002110
    if (ctx->r3 != ctx->r1) {
        // 0x410020F0: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_41002110;
    }
    // 0x410020F0: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x410020F4: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
    // 0x410020F8: jal         0x41002000
    // 0x410020FC: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    ovl_item_main_2000(rdram, ctx);
        goto after_1;
    // 0x410020FC: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    after_1:
    // 0x41002100: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x41002104: b           L_4100239C
    // 0x41002108: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
        goto L_4100239C;
    // 0x41002108: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x4100210C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
L_41002110:
    // 0x41002110: bne         $v1, $at, L_4100213C
    if (ctx->r3 != ctx->r1) {
        // 0x41002114: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4100213C;
    }
    // 0x41002114: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41002118: beq         $v0, $at, L_410023A0
    if (ctx->r2 == ctx->r1) {
        // 0x4100211C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410023A0;
    }
    // 0x4100211C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41002120: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x41002124: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x41002128: jal         0x41002094
    // 0x4100212C: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    ovl_item_main_2094(rdram, ctx);
        goto after_2;
    // 0x4100212C: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    after_2:
    // 0x41002130: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x41002134: b           L_4100239C
    // 0x41002138: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
        goto L_4100239C;
    // 0x41002138: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
L_4100213C:
    // 0x4100213C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x41002140: bne         $v1, $at, L_41002174
    if (ctx->r3 != ctx->r1) {
        // 0x41002144: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_41002174;
    }
    // 0x41002144: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41002148: beq         $v0, $at, L_410023A0
    if (ctx->r2 == ctx->r1) {
        // 0x4100214C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410023A0;
    }
    // 0x4100214C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41002150: lw          $t0, 0x60($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X60);
    // 0x41002154: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x41002158: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x4100215C: beq         $t1, $zero, L_4100216C
    if (ctx->r9 == 0) {
        // 0x41002160: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_4100216C;
    }
    // 0x41002160: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x41002164: b           L_4100239C
    // 0x41002168: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
        goto L_4100239C;
    // 0x41002168: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_4100216C:
    // 0x4100216C: b           L_4100239C
    // 0x41002170: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_4100239C;
    // 0x41002170: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_41002174:
    // 0x41002174: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x41002178: bne         $v1, $at, L_410021C0
    if (ctx->r3 != ctx->r1) {
        // 0x4100217C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_410021C0;
    }
    // 0x4100217C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41002180: beq         $v0, $at, L_410023A0
    if (ctx->r2 == ctx->r1) {
        // 0x41002184: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410023A0;
    }
    // 0x41002184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41002188: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x4100218C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x41002190: bne         $v1, $at, L_410021AC
    if (ctx->r3 != ctx->r1) {
        // 0x41002194: nop
    
            goto L_410021AC;
    }
    // 0x41002194: nop

    // 0x41002198: lw          $t3, 0x60($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X60);
    // 0x4100219C: nop

    // 0x410021A0: ori         $t4, $t3, 0x40
    ctx->r12 = ctx->r11 | 0X40;
    // 0x410021A4: b           L_4100239C
    // 0x410021A8: sw          $t4, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r12;
        goto L_4100239C;
    // 0x410021A8: sw          $t4, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r12;
L_410021AC:
    // 0x410021AC: lw          $t5, 0x60($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X60);
    // 0x410021B0: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x410021B4: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x410021B8: b           L_4100239C
    // 0x410021BC: sw          $t6, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r14;
        goto L_4100239C;
    // 0x410021BC: sw          $t6, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r14;
L_410021C0:
    // 0x410021C0: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x410021C4: bne         $v1, $at, L_410021E0
    if (ctx->r3 != ctx->r1) {
        // 0x410021C8: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_410021E0;
    }
    // 0x410021C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410021CC: beq         $v0, $at, L_4100239C
    if (ctx->r2 == ctx->r1) {
        // 0x410021D0: addiu       $t7, $v0, 0x1C
        ctx->r15 = ADD32(ctx->r2, 0X1C);
            goto L_4100239C;
    }
    // 0x410021D0: addiu       $t7, $v0, 0x1C
    ctx->r15 = ADD32(ctx->r2, 0X1C);
    // 0x410021D4: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x410021D8: b           L_4100239C
    // 0x410021DC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_4100239C;
    // 0x410021DC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_410021E0:
    // 0x410021E0: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x410021E4: bne         $v1, $at, L_4100220C
    if (ctx->r3 != ctx->r1) {
        // 0x410021E8: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4100220C;
    }
    // 0x410021E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410021EC: beq         $v0, $at, L_410023A0
    if (ctx->r2 == ctx->r1) {
        // 0x410021F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410023A0;
    }
    // 0x410021F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410021F4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x410021F8: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x410021FC: jal         0x410023F8
    // 0x41002200: nop

    ovl_item_main_23F8(rdram, ctx);
        goto after_3;
    // 0x41002200: nop

    after_3:
    // 0x41002204: b           L_410023A0
    // 0x41002208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_410023A0;
    // 0x41002208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4100220C:
    // 0x4100220C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x41002210: bne         $v1, $at, L_41002244
    if (ctx->r3 != ctx->r1) {
        // 0x41002214: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_41002244;
    }
    // 0x41002214: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41002218: beq         $v0, $at, L_410023A0
    if (ctx->r2 == ctx->r1) {
        // 0x4100221C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410023A0;
    }
    // 0x4100221C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41002220: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x41002224: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x41002228: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x4100222C: lw          $a0, 0x74($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X74);
    // 0x41002230: jal         0x41001544
    // 0x41002234: nop

    ovl_item_main_1544(rdram, ctx);
        goto after_4;
    // 0x41002234: nop

    after_4:
    // 0x41002238: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x4100223C: b           L_4100239C
    // 0x41002240: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
        goto L_4100239C;
    // 0x41002240: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
L_41002244:
    // 0x41002244: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x41002248: bne         $v1, $at, L_410022DC
    if (ctx->r3 != ctx->r1) {
        // 0x4100224C: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_410022DC;
    }
    // 0x4100224C: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x41002250: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x41002254: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41002258: beq         $v0, $at, L_410022D0
    if (ctx->r2 == ctx->r1) {
        // 0x4100225C: addiu       $t3, $zero, -0x1
        ctx->r11 = ADD32(0, -0X1);
            goto L_410022D0;
    }
    // 0x4100225C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x41002260: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x41002264: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x41002268: bne         $t1, $zero, L_410022C8
    if (ctx->r9 != 0) {
        // 0x4100226C: nop
    
            goto L_410022C8;
    }
    // 0x4100226C: nop

    // 0x41002270: lw          $a0, 0x74($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X74);
    // 0x41002274: jal         0x41001510
    // 0x41002278: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    ovl_item_main_1510(rdram, ctx);
        goto after_5;
    // 0x41002278: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_5:
    // 0x4100227C: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x41002280: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x41002284: beq         $v0, $zero, L_410022C8
    if (ctx->r2 == 0) {
        // 0x41002288: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_410022C8;
    }
    // 0x41002288: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x4100228C: lw          $a0, 0x74($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X74);
    // 0x41002290: sw          $zero, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = 0;
    // 0x41002294: sra         $t4, $a0, 8
    ctx->r12 = S32(SIGNED(ctx->r4) >> 8);
    // 0x41002298: addiu       $a1, $t4, -0x1
    ctx->r5 = ADD32(ctx->r12, -0X1);
    // 0x4100229C: sra         $t3, $a0, 12
    ctx->r11 = S32(SIGNED(ctx->r4) >> 12);
    // 0x410022A0: andi        $t5, $t3, 0xF
    ctx->r13 = ctx->r11 & 0XF;
    // 0x410022A4: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x410022A8: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x410022AC: sll         $t6, $t5, 12
    ctx->r14 = S32(ctx->r13 << 12);
    // 0x410022B0: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x410022B4: andi        $t0, $a0, 0xFF
    ctx->r8 = ctx->r4 & 0XFF;
    // 0x410022B8: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x410022BC: sw          $t1, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->r9;
    // 0x410022C0: b           L_4100239C
    // 0x410022C4: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
        goto L_4100239C;
    // 0x410022C4: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
L_410022C8:
    // 0x410022C8: b           L_4100239C
    // 0x410022CC: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_4100239C;
    // 0x410022CC: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_410022D0:
    // 0x410022D0: b           L_4100239C
    // 0x410022D4: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
        goto L_4100239C;
    // 0x410022D4: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x410022D8: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
L_410022DC:
    // 0x410022DC: bne         $v1, $at, L_41002338
    if (ctx->r3 != ctx->r1) {
        // 0x410022E0: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_41002338;
    }
    // 0x410022E0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x410022E4: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x410022E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410022EC: beq         $v0, $at, L_4100232C
    if (ctx->r2 == ctx->r1) {
        // 0x410022F0: addiu       $t6, $zero, -0x1
        ctx->r14 = ADD32(0, -0X1);
            goto L_4100232C;
    }
    // 0x410022F0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x410022F4: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x410022F8: nop

    // 0x410022FC: lw          $a0, 0x74($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X74);
    // 0x41002300: jal         0x41001510
    // 0x41002304: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    ovl_item_main_1510(rdram, ctx);
        goto after_6;
    // 0x41002304: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_6:
    // 0x41002308: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x4100230C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x41002310: beq         $v0, $zero, L_41002320
    if (ctx->r2 == 0) {
        // 0x41002314: addiu       $t5, $zero, -0x2
        ctx->r13 = ADD32(0, -0X2);
            goto L_41002320;
    }
    // 0x41002314: addiu       $t5, $zero, -0x2
    ctx->r13 = ADD32(0, -0X2);
    // 0x41002318: b           L_4100239C
    // 0x4100231C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_4100239C;
    // 0x4100231C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_41002320:
    // 0x41002320: lw          $t7, 0x6C($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X6C);
    // 0x41002324: b           L_4100239C
    // 0x41002328: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_4100239C;
    // 0x41002328: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_4100232C:
    // 0x4100232C: b           L_4100239C
    // 0x41002330: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_4100239C;
    // 0x41002330: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x41002334: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
L_41002338:
    // 0x41002338: bne         $v1, $at, L_410023A0
    if (ctx->r3 != ctx->r1) {
        // 0x4100233C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410023A0;
    }
    // 0x4100233C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41002340: jal         0x41001450
    // 0x41002344: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_1450(rdram, ctx);
        goto after_7;
    // 0x41002344: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x41002348: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_4100234C:
    // 0x4100234C: jal         0x410048A8
    // 0x41002350: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    ovl_item_main_48A8(rdram, ctx);
        goto after_8;
    // 0x41002350: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_8:
    // 0x41002354: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x41002358: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4100235C: beq         $t8, $at, L_410023A0
    if (ctx->r24 == ctx->r1) {
        // 0x41002360: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_410023A0;
    }
    // 0x41002360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41002364: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x41002368: jal         0x4100419C
    // 0x4100236C: nop

    ovl_item_main_419C(rdram, ctx);
        goto after_9;
    // 0x4100236C: nop

    after_9:
    // 0x41002370: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x41002374: nop

    // 0x41002378: lw          $t0, 0x60($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X60);
    // 0x4100237C: nop

    // 0x41002380: ori         $t1, $t0, 0x2000
    ctx->r9 = ctx->r8 | 0X2000;
    // 0x41002384: sw          $t1, 0x60($t9)
    MEM_W(0X60, ctx->r25) = ctx->r9;
    // 0x41002388: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x4100238C: nop

    // 0x41002390: addiu       $t3, $t2, 0xA0
    ctx->r11 = ADD32(ctx->r10, 0XA0);
    // 0x41002394: b           L_4100234C
    // 0x41002398: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
        goto L_4100234C;
    // 0x41002398: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
L_4100239C:
    // 0x4100239C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_410023A0:
    // 0x410023A0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x410023A4: jr          $ra
    // 0x410023A8: nop

    return;
    // 0x410023A8: nop

;}
RECOMP_FUNC void ovl_item_main_23AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410023AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410023B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410023B4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x410023B8: jal         0x410017C4
    // 0x410023BC: nop

    ovl_item_main_17C4(rdram, ctx);
        goto after_0;
    // 0x410023BC: nop

    after_0:
    // 0x410023C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410023C4: beq         $v0, $at, L_410023E8
    if (ctx->r2 == ctx->r1) {
        // 0x410023C8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_410023E8;
    }
    // 0x410023C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x410023CC: lui         $v0, 0x4100
    ctx->r2 = S32(0X4100 << 16);
    // 0x410023D0: addiu       $v0, $v0, 0x71E0
    ctx->r2 = ADD32(ctx->r2, 0X71E0);
    // 0x410023D4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x410023D8: nop

    // 0x410023DC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x410023E0: jal         0x410016A8
    // 0x410023E4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_item_main_16A8(rdram, ctx);
        goto after_1;
    // 0x410023E4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_1:
L_410023E8:
    // 0x410023E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410023EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x410023F0: jr          $ra
    // 0x410023F4: nop

    return;
    // 0x410023F4: nop

;}
RECOMP_FUNC void ovl_item_main_23F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410023F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x410023FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41002400: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41002404: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x41002408: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4100240C: beq         $a0, $at, L_410024F0
    if (ctx->r4 == ctx->r1) {
        // 0x41002410: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_410024F0;
    }
    // 0x41002410: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x41002414: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x41002418: nop

    // 0x4100241C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x41002420: bne         $t7, $zero, L_4100243C
    if (ctx->r15 != 0) {
        // 0x41002424: nop
    
            goto L_4100243C;
    }
    // 0x41002424: nop

    // 0x41002428: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x4100242C: jal         0x41001544
    // 0x41002430: nop

    ovl_item_main_1544(rdram, ctx);
        goto after_0;
    // 0x41002430: nop

    after_0:
    // 0x41002434: bne         $v0, $zero, L_410024F4
    if (ctx->r2 != 0) {
        // 0x41002438: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_410024F4;
    }
    // 0x41002438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4100243C:
    // 0x4100243C: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x41002440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41002444: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x41002448: beq         $t9, $zero, L_41002460
    if (ctx->r25 == 0) {
        // 0x4100244C: nop
    
            goto L_41002460;
    }
    // 0x4100244C: nop

    // 0x41002450: jal         0x41001338
    // 0x41002454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_item_main_1338(rdram, ctx);
        goto after_1;
    // 0x41002454: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x41002458: jal         0x41001094
    // 0x4100245C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_1094(rdram, ctx);
        goto after_2;
    // 0x4100245C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_41002460:
    // 0x41002460: jal         0x410010A8
    // 0x41002464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_item_main_10A8(rdram, ctx);
        goto after_3;
    // 0x41002464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x41002468: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x4100246C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41002470: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x41002474: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x41002478: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x4100247C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x41002480: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x41002484: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x41002488: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x4100248C: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x41002490: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x41002494: sw          $t4, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r12;
    // 0x41002498: and         $t6, $t4, $at
    ctx->r14 = ctx->r12 & ctx->r1;
    // 0x4100249C: sw          $t2, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r10;
    // 0x410024A0: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x410024A4: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x410024A8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x410024AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x410024B0: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x410024B4: nop

    // 0x410024B8: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x410024BC: nop

    // 0x410024C0: bc1t        L_410024E0
    if (c1cs) {
        // 0x410024C4: nop
    
            goto L_410024E0;
    }
    // 0x410024C4: nop

    // 0x410024C8: jal         0x41001648
    // 0x410024CC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_item_main_1648(rdram, ctx);
        goto after_4;
    // 0x410024CC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
    // 0x410024D0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410024D4: lwc1        $f10, 0x70A0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X70A0);
    // 0x410024D8: b           L_410024F0
    // 0x410024DC: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
        goto L_410024F0;
    // 0x410024DC: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
L_410024E0:
    // 0x410024E0: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x410024E4: nop

    // 0x410024E8: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x410024EC: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
L_410024F0:
    // 0x410024F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_410024F4:
    // 0x410024F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x410024F8: jr          $ra
    // 0x410024FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x410024FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_item_main_2500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002500: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41002504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41002508: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4100250C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41002510: jal         0x41001450
    // 0x41002514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_1450(rdram, ctx);
        goto after_0;
    // 0x41002514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x41002518: lui         $t1, 0x4100
    ctx->r9 = S32(0X4100 << 16);
    // 0x4100251C: lw          $t1, 0x71E0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X71E0);
    // 0x41002520: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x41002524: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x41002528: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x4100252C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x41002530: blez        $t1, L_410025D8
    if (SIGNED(ctx->r9) <= 0) {
        // 0x41002534: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_410025D8;
    }
    // 0x41002534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x41002538: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4100253C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x41002540: slti        $at, $a0, 0x14
    ctx->r1 = SIGNED(ctx->r4) < 0X14 ? 1 : 0;
L_41002544:
    // 0x41002544: beq         $at, $zero, L_410025D0
    if (ctx->r1 == 0) {
        // 0x41002548: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_410025D0;
    }
    // 0x41002548: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_4100254C:
    // 0x4100254C: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x41002550: nop

    // 0x41002554: beq         $v0, $t6, L_410025C0
    if (ctx->r2 == ctx->r14) {
        // 0x41002558: nop
    
            goto L_410025C0;
    }
    // 0x41002558: nop

    // 0x4100255C: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x41002560: nop

    // 0x41002564: bne         $s0, $t7, L_410025B8
    if (ctx->r16 != ctx->r15) {
        // 0x41002568: nop
    
            goto L_410025B8;
    }
    // 0x41002568: nop

    // 0x4100256C: lwc1        $f4, 0x38($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X38);
    // 0x41002570: nop

    // 0x41002574: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x41002578: nop

    // 0x4100257C: bc1f        L_410025B8
    if (!c1cs) {
        // 0x41002580: nop
    
            goto L_410025B8;
    }
    // 0x41002580: nop

    // 0x41002584: lwc1        $f6, 0x28($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X28);
    // 0x41002588: nop

    // 0x4100258C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x41002590: nop

    // 0x41002594: bc1t        L_410025B8
    if (c1cs) {
        // 0x41002598: nop
    
            goto L_410025B8;
    }
    // 0x41002598: nop

    // 0x4100259C: lw          $a1, 0x70($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X70);
    // 0x410025A0: nop

    // 0x410025A4: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x410025A8: beq         $at, $zero, L_410025B8
    if (ctx->r1 == 0) {
        // 0x410025AC: nop
    
            goto L_410025B8;
    }
    // 0x410025AC: nop

    // 0x410025B0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x410025B4: or          $t0, $v1, $zero
    ctx->r8 = ctx->r3 | 0;
L_410025B8:
    // 0x410025B8: b           L_410025D0
    // 0x410025BC: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
        goto L_410025D0;
    // 0x410025BC: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
L_410025C0:
    // 0x410025C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x410025C4: slti        $at, $a0, 0x14
    ctx->r1 = SIGNED(ctx->r4) < 0X14 ? 1 : 0;
    // 0x410025C8: bne         $at, $zero, L_4100254C
    if (ctx->r1 != 0) {
        // 0x410025CC: addiu       $v1, $v1, 0xA0
        ctx->r3 = ADD32(ctx->r3, 0XA0);
            goto L_4100254C;
    }
    // 0x410025CC: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
L_410025D0:
    // 0x410025D0: bne         $a2, $t1, L_41002544
    if (ctx->r6 != ctx->r9) {
        // 0x410025D4: slti        $at, $a0, 0x14
        ctx->r1 = SIGNED(ctx->r4) < 0X14 ? 1 : 0;
            goto L_41002544;
    }
    // 0x410025D4: slti        $at, $a0, 0x14
    ctx->r1 = SIGNED(ctx->r4) < 0X14 ? 1 : 0;
L_410025D8:
    // 0x410025D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x410025DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410025E0: beq         $t0, $at, L_410025F4
    if (ctx->r8 == ctx->r1) {
        // 0x410025E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_410025F4;
    }
    // 0x410025E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x410025E8: swc1        $f0, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f0.u32l;
    // 0x410025EC: sw          $zero, 0x70($t0)
    MEM_W(0X70, ctx->r8) = 0;
    // 0x410025F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_410025F4:
    // 0x410025F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x410025F8: jr          $ra
    // 0x410025FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x410025FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_item_main_2600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002600: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41002604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41002608: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x4100260C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x41002610: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x41002614: jal         0x41001510
    // 0x41002618: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    ovl_item_main_1510(rdram, ctx);
        goto after_0;
    // 0x41002618: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x4100261C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x41002620: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x41002624: beq         $v0, $zero, L_41002630
    if (ctx->r2 == 0) {
        // 0x41002628: lui         $t7, 0x4100
        ctx->r15 = S32(0X4100 << 16);
            goto L_41002630;
    }
    // 0x41002628: lui         $t7, 0x4100
    ctx->r15 = S32(0X4100 << 16);
    // 0x4100262C: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
L_41002630:
    // 0x41002630: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x41002634: addiu       $t7, $t7, 0x67D0
    ctx->r15 = ADD32(ctx->r15, 0X67D0);
    // 0x41002638: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x4100263C: blez        $v0, L_41002658
    if (SIGNED(ctx->r2) <= 0) {
        // 0x41002640: sra         $t2, $a0, 12
        ctx->r10 = S32(SIGNED(ctx->r4) >> 12);
            goto L_41002658;
    }
    // 0x41002640: sra         $t2, $a0, 12
    ctx->r10 = S32(SIGNED(ctx->r4) >> 12);
    // 0x41002644: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x41002648: beq         $at, $zero, L_4100265C
    if (ctx->r1 == 0) {
        // 0x4100264C: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_4100265C;
    }
    // 0x4100264C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x41002650: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x41002654: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_41002658:
    // 0x41002658: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
L_4100265C:
    // 0x4100265C: subu        $t6, $t6, $v1
    ctx->r14 = SUB32(ctx->r14, ctx->r3);
    // 0x41002660: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x41002664: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x41002668: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x4100266C: sra         $t7, $a0, 8
    ctx->r15 = S32(SIGNED(ctx->r4) >> 8);
    // 0x41002670: andi        $t3, $t2, 0xF
    ctx->r11 = ctx->r10 & 0XF;
    // 0x41002674: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x41002678: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x4100267C: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x41002680: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x41002684: or          $t5, $t0, $t4
    ctx->r13 = ctx->r8 | ctx->r12;
    // 0x41002688: or          $t1, $t5, $t9
    ctx->r9 = ctx->r13 | ctx->r25;
    // 0x4100268C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x41002690: lw          $t2, 0x0($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X0);
    // 0x41002694: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x41002698: sll         $t3, $t2, 15
    ctx->r11 = S32(ctx->r10 << 15);
    // 0x4100269C: bgez        $t3, L_410026A8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x410026A0: or          $t4, $t1, $a2
        ctx->r12 = ctx->r9 | ctx->r6;
            goto L_410026A8;
    }
    // 0x410026A0: or          $t4, $t1, $a2
    ctx->r12 = ctx->r9 | ctx->r6;
    // 0x410026A4: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
L_410026A8:
    // 0x410026A8: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x410026AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410026B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x410026B4: jr          $ra
    // 0x410026B8: nop

    return;
    // 0x410026B8: nop

;}
RECOMP_FUNC void ovl_item_main_26BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410026BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x410026C0: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x410026C4: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x410026C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x410026CC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x410026D0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x410026D4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x410026D8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x410026DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x410026E0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x410026E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x410026E8: jal         0x41001450
    // 0x410026EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_1450(rdram, ctx);
        goto after_0;
    // 0x410026EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x410026F0: lui         $s5, 0x4100
    ctx->r21 = S32(0X4100 << 16);
    // 0x410026F4: lw          $s5, 0x71E0($s5)
    ctx->r21 = MEM_W(ctx->r21, 0X71E0);
    // 0x410026F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x410026FC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x41002700: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x41002704: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x41002708: blez        $s5, L_410027A8
    if (SIGNED(ctx->r21) <= 0) {
        // 0x4100270C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_410027A8;
    }
    // 0x4100270C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x41002710: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x41002714: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
L_41002718:
    // 0x41002718: beq         $at, $zero, L_4100279C
    if (ctx->r1 == 0) {
        // 0x4100271C: nop
    
            goto L_4100279C;
    }
    // 0x4100271C: nop

L_41002720:
    // 0x41002720: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x41002724: nop

    // 0x41002728: beq         $s2, $t6, L_4100278C
    if (ctx->r18 == ctx->r14) {
        // 0x4100272C: nop
    
            goto L_4100278C;
    }
    // 0x4100272C: nop

    // 0x41002730: lw          $t7, 0x9C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X9C);
    // 0x41002734: nop

    // 0x41002738: bne         $s7, $t7, L_41002784
    if (ctx->r23 != ctx->r15) {
        // 0x4100273C: nop
    
            goto L_41002784;
    }
    // 0x4100273C: nop

    // 0x41002740: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x41002744: jal         0x41001510
    // 0x41002748: nop

    ovl_item_main_1510(rdram, ctx);
        goto after_1;
    // 0x41002748: nop

    after_1:
    // 0x4100274C: beq         $v0, $zero, L_41002784
    if (ctx->r2 == 0) {
        // 0x41002750: nop
    
            goto L_41002784;
    }
    // 0x41002750: nop

    // 0x41002754: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x41002758: nop

    // 0x4100275C: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x41002760: bne         $t9, $zero, L_41002784
    if (ctx->r25 != 0) {
        // 0x41002764: nop
    
            goto L_41002784;
    }
    // 0x41002764: nop

    // 0x41002768: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x4100276C: nop

    // 0x41002770: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x41002774: beq         $at, $zero, L_41002784
    if (ctx->r1 == 0) {
        // 0x41002778: nop
    
            goto L_41002784;
    }
    // 0x41002778: nop

    // 0x4100277C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x41002780: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
L_41002784:
    // 0x41002784: b           L_4100279C
    // 0x41002788: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
        goto L_4100279C;
    // 0x41002788: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
L_4100278C:
    // 0x4100278C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x41002790: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x41002794: bne         $at, $zero, L_41002720
    if (ctx->r1 != 0) {
        // 0x41002798: addiu       $s0, $s0, 0xA0
        ctx->r16 = ADD32(ctx->r16, 0XA0);
            goto L_41002720;
    }
    // 0x41002798: addiu       $s0, $s0, 0xA0
    ctx->r16 = ADD32(ctx->r16, 0XA0);
L_4100279C:
    // 0x4100279C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x410027A0: bne         $s3, $s5, L_41002718
    if (ctx->r19 != ctx->r21) {
        // 0x410027A4: slti        $at, $s1, 0x14
        ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
            goto L_41002718;
    }
    // 0x410027A4: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
L_410027A8:
    // 0x410027A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410027AC: beq         $s6, $at, L_410027BC
    if (ctx->r22 == ctx->r1) {
        // 0x410027B0: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_410027BC;
    }
    // 0x410027B0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x410027B4: jal         0x41001648
    // 0x410027B8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_item_main_1648(rdram, ctx);
        goto after_2;
    // 0x410027B8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_2:
L_410027BC:
    // 0x410027BC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x410027C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x410027C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x410027C8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x410027CC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x410027D0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x410027D4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x410027D8: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x410027DC: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x410027E0: jr          $ra
    // 0x410027E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x410027E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_item_main_27E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410027E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x410027EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x410027F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410027F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x410027F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x410027FC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x41002800: beq         $a0, $at, L_4100283C
    if (ctx->r4 == ctx->r1) {
        // 0x41002804: sw          $zero, 0x24($sp)
        MEM_W(0X24, ctx->r29) = 0;
            goto L_4100283C;
    }
    // 0x41002804: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x41002808: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    // 0x4100280C: jal         0x41001544
    // 0x41002810: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    ovl_item_main_1544(rdram, ctx);
        goto after_0;
    // 0x41002810: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x41002814: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x41002818: bne         $v0, $zero, L_4100283C
    if (ctx->r2 != 0) {
        // 0x4100281C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_4100283C;
    }
    // 0x4100281C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x41002820: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x41002824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41002828: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4100282C: jal         0x41001338
    // 0x41002830: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    ovl_item_main_1338(rdram, ctx);
        goto after_1;
    // 0x41002830: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x41002834: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x41002838: nop

L_4100283C:
    // 0x4100283C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x41002840: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x41002844: beq         $t7, $zero, L_4100288C
    if (ctx->r15 == 0) {
        // 0x41002848: nop
    
            goto L_4100288C;
    }
    // 0x41002848: nop

    // 0x4100284C: lw          $t8, 0x60($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X60);
    // 0x41002850: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x41002854: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x41002858: sw          $t9, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r25;
    // 0x4100285C: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x41002860: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x41002864: lw          $t1, 0x10($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X10);
    // 0x41002868: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x4100286C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x41002870: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x41002874: jal         0x41001510
    // 0x41002878: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    ovl_item_main_1510(rdram, ctx);
        goto after_2;
    // 0x41002878: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    after_2:
    // 0x4100287C: bne         $v0, $zero, L_41002894
    if (ctx->r2 != 0) {
        // 0x41002880: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41002894;
    }
    // 0x41002880: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x41002884: b           L_41002890
    // 0x41002888: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
        goto L_41002890;
    // 0x41002888: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
L_4100288C:
    // 0x4100288C: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
L_41002890:
    // 0x41002890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41002894:
    // 0x41002894: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41002898: jr          $ra
    // 0x4100289C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4100289C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_item_main_28A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x410028A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x410028A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410028A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x410028AC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x410028B0: beq         $a0, $at, L_41002950
    if (ctx->r4 == ctx->r1) {
        // 0x410028B4: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_41002950;
    }
    // 0x410028B4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x410028B8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x410028BC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x410028C0: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x410028C4: beq         $t7, $zero, L_410028D4
    if (ctx->r15 == 0) {
        // 0x410028C8: nop
    
            goto L_410028D4;
    }
    // 0x410028C8: nop

    // 0x410028CC: b           L_41002958
    // 0x410028D0: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
        goto L_41002958;
    // 0x410028D0: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
L_410028D4:
    // 0x410028D4: lw          $a0, 0x74($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X74);
    // 0x410028D8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x410028DC: jal         0x41001544
    // 0x410028E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_item_main_1544(rdram, ctx);
        goto after_0;
    // 0x410028E0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x410028E4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x410028E8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x410028EC: bne         $v0, $zero, L_41002948
    if (ctx->r2 != 0) {
        // 0x410028F0: nop
    
            goto L_41002948;
    }
    // 0x410028F0: nop

    // 0x410028F4: lw          $t9, 0x4($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4);
    // 0x410028F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x410028FC: bne         $t9, $at, L_41002924
    if (ctx->r25 != ctx->r1) {
        // 0x41002900: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_41002924;
    }
    // 0x41002900: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x41002904: lui         $a1, 0x3D36
    ctx->r5 = S32(0X3D36 << 16);
    // 0x41002908: ori         $a1, $a1, 0xB60
    ctx->r5 = ctx->r5 | 0XB60;
    // 0x4100290C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x41002910: jal         0x41004590
    // 0x41002914: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_item_main_4590(rdram, ctx);
        goto after_1;
    // 0x41002914: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x41002918: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x4100291C: b           L_41002940
    // 0x41002920: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_41002940;
    // 0x41002920: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_41002924:
    // 0x41002924: lui         $a1, 0x3C11
    ctx->r5 = S32(0X3C11 << 16);
    // 0x41002928: ori         $a1, $a1, 0xA2B3
    ctx->r5 = ctx->r5 | 0XA2B3;
    // 0x4100292C: jal         0x41004590
    // 0x41002930: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_item_main_4590(rdram, ctx);
        goto after_2;
    // 0x41002930: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x41002934: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x41002938: nop

    // 0x4100293C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_41002940:
    // 0x41002940: b           L_41002958
    // 0x41002944: sw          $t0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r8;
        goto L_41002958;
    // 0x41002944: sw          $t0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r8;
L_41002948:
    // 0x41002948: b           L_41002958
    // 0x4100294C: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
        goto L_41002958;
    // 0x4100294C: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
L_41002950:
    // 0x41002950: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x41002954: sw          $t1, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r9;
L_41002958:
    // 0x41002958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4100295C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x41002960: jr          $ra
    // 0x41002964: nop

    return;
    // 0x41002964: nop

;}
RECOMP_FUNC void ovl_item_main_2968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002968: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4100296C: beq         $a0, $at, L_41002978
    if (ctx->r4 == ctx->r1) {
        // 0x41002970: nop
    
            goto L_41002978;
    }
    // 0x41002970: nop

    // 0x41002974: sw          $a1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r5;
L_41002978:
    // 0x41002978: jr          $ra
    // 0x4100297C: nop

    return;
    // 0x4100297C: nop

;}
RECOMP_FUNC void ovl_item_main_2980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002980: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x41002984: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41002988: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4100298C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41002990: jal         0x41001450
    // 0x41002994: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_item_main_1450(rdram, ctx);
        goto after_0;
    // 0x41002994: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x41002998: lui         $a3, 0x4100
    ctx->r7 = S32(0X4100 << 16);
    // 0x4100299C: lw          $a3, 0x71E0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X71E0);
    // 0x410029A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x410029A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x410029A8: blez        $a3, L_41002A20
    if (SIGNED(ctx->r7) <= 0) {
        // 0x410029AC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_41002A20;
    }
    // 0x410029AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x410029B0: lui         $a0, 0x4100
    ctx->r4 = S32(0X4100 << 16);
    // 0x410029B4: lw          $a0, 0x71EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X71EC);
    // 0x410029B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x410029BC: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
L_410029C0:
    // 0x410029C0: beq         $at, $zero, L_41002A18
    if (ctx->r1 == 0) {
        // 0x410029C4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_41002A18;
    }
    // 0x410029C4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_410029C8:
    // 0x410029C8: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x410029CC: nop

    // 0x410029D0: beq         $v0, $t6, L_41002A08
    if (ctx->r2 == ctx->r14) {
        // 0x410029D4: nop
    
            goto L_41002A08;
    }
    // 0x410029D4: nop

    // 0x410029D8: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x410029DC: nop

    // 0x410029E0: beq         $v0, $t7, L_41002A08
    if (ctx->r2 == ctx->r15) {
        // 0x410029E4: nop
    
            goto L_41002A08;
    }
    // 0x410029E4: nop

    // 0x410029E8: lw          $t8, 0x9C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X9C);
    // 0x410029EC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x410029F0: nop

    // 0x410029F4: bne         $t8, $t9, L_41002A00
    if (ctx->r24 != ctx->r25) {
        // 0x410029F8: nop
    
            goto L_41002A00;
    }
    // 0x410029F8: nop

    // 0x410029FC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_41002A00:
    // 0x41002A00: b           L_41002A18
    // 0x41002A04: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
        goto L_41002A18;
    // 0x41002A04: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
L_41002A08:
    // 0x41002A08: addiu       $v1, $v1, 0xA0
    ctx->r3 = ADD32(ctx->r3, 0XA0);
    // 0x41002A0C: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x41002A10: bne         $at, $zero, L_410029C8
    if (ctx->r1 != 0) {
        // 0x41002A14: nop
    
            goto L_410029C8;
    }
    // 0x41002A14: nop

L_41002A18:
    // 0x41002A18: bne         $a1, $a3, L_410029C0
    if (ctx->r5 != ctx->r7) {
        // 0x41002A1C: sltu        $at, $v1, $a0
        ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
            goto L_410029C0;
    }
    // 0x41002A1C: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
L_41002A20:
    // 0x41002A20: sw          $a2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r6;
    // 0x41002A24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x41002A28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x41002A2C: jr          $ra
    // 0x41002A30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x41002A30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_item_main_2A34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002A34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x41002A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41002A3C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x41002A40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41002A44: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x41002A48: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x41002A4C: beq         $a1, $at, L_41002A64
    if (ctx->r5 == ctx->r1) {
        // 0x41002A50: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_41002A64;
    }
    // 0x41002A50: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x41002A54: jal         0x410017C4
    // 0x41002A58: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    ovl_item_main_17C4(rdram, ctx);
        goto after_0;
    // 0x41002A58: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x41002A5C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x41002A60: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_41002A64:
    // 0x41002A64: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x41002A68: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x41002A6C: beq         $v0, $zero, L_41002A8C
    if (ctx->r2 == 0) {
        // 0x41002A70: nop
    
            goto L_41002A8C;
    }
    // 0x41002A70: nop

    // 0x41002A74: beq         $v0, $at, L_41002B80
    if (ctx->r2 == ctx->r1) {
        // 0x41002A78: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_41002B80;
    }
    // 0x41002A78: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x41002A7C: beq         $v0, $at, L_41002BC8
    if (ctx->r2 == ctx->r1) {
        // 0x41002A80: nop
    
            goto L_41002BC8;
    }
    // 0x41002A80: nop

    // 0x41002A84: b           L_41002BE8
    // 0x41002A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002A8C:
    // 0x41002A8C: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x41002A90: nop

    // 0x41002A94: sltiu       $at, $t6, 0x1A
    ctx->r1 = ctx->r14 < 0X1A ? 1 : 0;
    // 0x41002A98: beq         $at, $zero, L_41002BE4
    if (ctx->r1 == 0) {
        // 0x41002A9C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_41002BE4;
    }
    // 0x41002A9C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x41002AA0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41002AA4: addu        $at, $at, $t6
    gpr jr_addend_41002AB0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x41002AA8: lw          $t6, 0x70A4($at)
    ctx->r14 = ADD32(ctx->r1, 0X70A4);
    // 0x41002AAC: nop

    // 0x41002AB0: jr          $t6
    // 0x41002AB4: nop

    switch (jr_addend_41002AB0 >> 2) {
        case 0: goto L_41002AB8; break;
        case 1: goto L_41002BE4; break;
        case 2: goto L_41002ACC; break;
        case 3: goto L_41002AE0; break;
        case 4: goto L_41002AF4; break;
        case 5: goto L_41002B08; break;
        case 6: goto L_41002B1C; break;
        case 7: goto L_41002BE4; break;
        case 8: goto L_41002B58; break;
        case 9: goto L_41002BE4; break;
        case 10: goto L_41002BE4; break;
        case 11: goto L_41002BE4; break;
        case 12: goto L_41002BE4; break;
        case 13: goto L_41002BE4; break;
        case 14: goto L_41002BE4; break;
        case 15: goto L_41002BE4; break;
        case 16: goto L_41002BE4; break;
        case 17: goto L_41002BE4; break;
        case 18: goto L_41002BE4; break;
        case 19: goto L_41002BE4; break;
        case 20: goto L_41002BE4; break;
        case 21: goto L_41002BE4; break;
        case 22: goto L_41002BE4; break;
        case 23: goto L_41002BE4; break;
        case 24: goto L_41002BE4; break;
        case 25: goto L_41002B6C; break;
        default: switch_error(__func__, 0x41002AB0, 0x410070A4);
    }
    // 0x41002AB4: nop

L_41002AB8:
    // 0x41002AB8: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x41002ABC: jal         0x410023F8
    // 0x41002AC0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_23F8(rdram, ctx);
        goto after_1;
    // 0x41002AC0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x41002AC4: b           L_41002BE8
    // 0x41002AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002ACC:
    // 0x41002ACC: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x41002AD0: jal         0x41002500
    // 0x41002AD4: nop

    ovl_item_main_2500(rdram, ctx);
        goto after_2;
    // 0x41002AD4: nop

    after_2:
    // 0x41002AD8: b           L_41002BE8
    // 0x41002ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002AE0:
    // 0x41002AE0: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x41002AE4: jal         0x41002600
    // 0x41002AE8: nop

    ovl_item_main_2600(rdram, ctx);
        goto after_3;
    // 0x41002AE8: nop

    after_3:
    // 0x41002AEC: b           L_41002BE8
    // 0x41002AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002AF4:
    // 0x41002AF4: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x41002AF8: jal         0x410026BC
    // 0x41002AFC: nop

    ovl_item_main_26BC(rdram, ctx);
        goto after_4;
    // 0x41002AFC: nop

    after_4:
    // 0x41002B00: b           L_41002BE8
    // 0x41002B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002B04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002B08:
    // 0x41002B08: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x41002B0C: jal         0x410027E8
    // 0x41002B10: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_27E8(rdram, ctx);
        goto after_5;
    // 0x41002B10: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_5:
    // 0x41002B14: b           L_41002BE8
    // 0x41002B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002B1C:
    // 0x41002B1C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x41002B20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41002B24: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x41002B28: nop

    // 0x41002B2C: beq         $t7, $at, L_41002B44
    if (ctx->r15 == ctx->r1) {
        // 0x41002B30: nop
    
            goto L_41002B44;
    }
    // 0x41002B30: nop

    // 0x41002B34: jal         0x41002980
    // 0x41002B38: nop

    ovl_item_main_2980(rdram, ctx);
        goto after_6;
    // 0x41002B38: nop

    after_6:
    // 0x41002B3C: b           L_41002BE8
    // 0x41002B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002B44:
    // 0x41002B44: jal         0x41002000
    // 0x41002B48: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_item_main_2000(rdram, ctx);
        goto after_7;
    // 0x41002B48: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_7:
    // 0x41002B4C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x41002B50: b           L_41002BE4
    // 0x41002B54: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_41002BE4;
    // 0x41002B54: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_41002B58:
    // 0x41002B58: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x41002B5C: jal         0x410028A0
    // 0x41002B60: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_28A0(rdram, ctx);
        goto after_8;
    // 0x41002B60: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_8:
    // 0x41002B64: b           L_41002BE8
    // 0x41002B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002B6C:
    // 0x41002B6C: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x41002B70: jal         0x41002968
    // 0x41002B74: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_2968(rdram, ctx);
        goto after_9;
    // 0x41002B74: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_9:
    // 0x41002B78: b           L_41002BE8
    // 0x41002B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002B80:
    // 0x41002B80: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x41002B84: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x41002B88: beq         $v0, $at, L_41002BA0
    if (ctx->r2 == ctx->r1) {
        // 0x41002B8C: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_41002BA0;
    }
    // 0x41002B8C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x41002B90: beq         $v0, $at, L_41002BB4
    if (ctx->r2 == ctx->r1) {
        // 0x41002B94: nop
    
            goto L_41002BB4;
    }
    // 0x41002B94: nop

    // 0x41002B98: b           L_41002BE8
    // 0x41002B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002B9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002BA0:
    // 0x41002BA0: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x41002BA4: jal         0x410027E8
    // 0x41002BA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_27E8(rdram, ctx);
        goto after_10;
    // 0x41002BA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_10:
    // 0x41002BAC: b           L_41002BE8
    // 0x41002BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002BB4:
    // 0x41002BB4: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x41002BB8: jal         0x410023F8
    // 0x41002BBC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_23F8(rdram, ctx);
        goto after_11;
    // 0x41002BBC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_11:
    // 0x41002BC0: b           L_41002BE8
    // 0x41002BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41002BE8;
    // 0x41002BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002BC8:
    // 0x41002BC8: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x41002BCC: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x41002BD0: bne         $t8, $at, L_41002BE8
    if (ctx->r24 != ctx->r1) {
        // 0x41002BD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41002BE8;
    }
    // 0x41002BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41002BD8: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x41002BDC: jal         0x410023F8
    // 0x41002BE0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_item_main_23F8(rdram, ctx);
        goto after_12;
    // 0x41002BE0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_12:
L_41002BE4:
    // 0x41002BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002BE8:
    // 0x41002BE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x41002BEC: jr          $ra
    // 0x41002BF0: nop

    return;
    // 0x41002BF0: nop

;}
RECOMP_FUNC void ovl_item_main_2BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002BF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x41002BF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x41002BFC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x41002C00: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x41002C04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41002C08: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x41002C0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x41002C10: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x41002C14: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x41002C18: bc1f        L_41002CC4
    if (!c1cs) {
        // 0x41002C1C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_41002CC4;
    }
    // 0x41002C1C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x41002C20: lwc1        $f6, 0x38($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X38);
    // 0x41002C24: nop

    // 0x41002C28: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x41002C2C: nop

    // 0x41002C30: bc1f        L_41002CC8
    if (!c1cs) {
        // 0x41002C34: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_41002CC8;
    }
    // 0x41002C34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x41002C38: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x41002C3C: nop

    // 0x41002C40: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x41002C44: nop

    // 0x41002C48: bc1t        L_41002CC8
    if (c1cs) {
        // 0x41002C4C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_41002CC8;
    }
    // 0x41002C4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x41002C50: lw          $a0, 0x74($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X74);
    // 0x41002C54: jal         0x41001544
    // 0x41002C58: nop

    ovl_item_main_1544(rdram, ctx);
        goto after_0;
    // 0x41002C58: nop

    after_0:
    // 0x41002C5C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41002C60: bne         $v0, $zero, L_41002C8C
    if (ctx->r2 != 0) {
        // 0x41002C64: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_41002C8C;
    }
    // 0x41002C64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x41002C68: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x41002C6C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x41002C70: swc1        $f10, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f10.u32l;
    // 0x41002C74: lwc1        $f16, 0x20($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X20);
    // 0x41002C78: nop

    // 0x41002C7C: swc1        $f16, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f16.u32l;
    // 0x41002C80: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x41002C84: sw          $t7, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->r15;
    // 0x41002C88: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
L_41002C8C:
    // 0x41002C8C: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x41002C90: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x41002C94: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x41002C98: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x41002C9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x41002CA0: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x41002CA4: jal         0x41001240
    // 0x41002CA8: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    ovl_item_main_1240(rdram, ctx);
        goto after_1;
    // 0x41002CA8: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    after_1:
    // 0x41002CAC: lw          $t8, 0x10($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X10);
    // 0x41002CB0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x41002CB4: sw          $t8, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r24;
    // 0x41002CB8: lwc1        $f18, 0x20($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X20);
    // 0x41002CBC: nop

    // 0x41002CC0: swc1        $f18, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->f18.u32l;
L_41002CC4:
    // 0x41002CC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_41002CC8:
    // 0x41002CC8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x41002CCC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x41002CD0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x41002CD4: jr          $ra
    // 0x41002CD8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x41002CD8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_item_main_2CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002CDC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x41002CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41002CE4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x41002CE8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x41002CEC: beq         $v0, $zero, L_41002CFC
    if (ctx->r2 == 0) {
        // 0x41002CF0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_41002CFC;
    }
    // 0x41002CF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x41002CF4: bne         $v0, $at, L_41002D4C
    if (ctx->r2 != ctx->r1) {
        // 0x41002CF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41002D4C;
    }
    // 0x41002CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002CFC:
    // 0x41002CFC: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x41002D00: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x41002D04: addiu       $t1, $zero, 0x2C
    ctx->r9 = ADD32(0, 0X2C);
    // 0x41002D08: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x41002D0C: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x41002D10: addiu       $t2, $zero, 0x2D
    ctx->r10 = ADD32(0, 0X2D);
    // 0x41002D14: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x41002D18: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x41002D1C: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x41002D20: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x41002D24: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x41002D28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x41002D2C: bne         $t0, $zero, L_41002D3C
    if (ctx->r8 != 0) {
        // 0x41002D30: nop
    
            goto L_41002D3C;
    }
    // 0x41002D30: nop

    // 0x41002D34: b           L_41002D40
    // 0x41002D38: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
        goto L_41002D40;
    // 0x41002D38: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_41002D3C:
    // 0x41002D3C: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
L_41002D40:
    // 0x41002D40: jal         0x410010E4
    // 0x41002D44: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_item_main_10E4(rdram, ctx);
        goto after_0;
    // 0x41002D44: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x41002D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41002D4C:
    // 0x41002D4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x41002D50: jr          $ra
    // 0x41002D54: nop

    return;
    // 0x41002D54: nop

;}
RECOMP_FUNC void ovl_item_main_2D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41002D58: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x41002D5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x41002D60: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x41002D64: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x41002D68: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x41002D6C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x41002D70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x41002D74: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x41002D78: bne         $t7, $zero, L_41002DCC
    if (ctx->r15 != 0) {
        // 0x41002D7C: addiu       $a2, $sp, 0x3C
        ctx->r6 = ADD32(ctx->r29, 0X3C);
            goto L_41002DCC;
    }
    // 0x41002D7C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x41002D80: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x41002D84: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x41002D88: jal         0x410006C4
    // 0x41002D8C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x41002D8C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x41002D90: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x41002D94: bne         $v0, $zero, L_41002DCC
    if (ctx->r2 != 0) {
        // 0x41002D98: nop
    
            goto L_41002DCC;
    }
    // 0x41002D98: nop

    // 0x41002D9C: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x41002DA0: nop

    // 0x41002DA4: andi        $t1, $t9, 0x4
    ctx->r9 = ctx->r25 & 0X4;
    // 0x41002DA8: bne         $t1, $zero, L_41002DCC
    if (ctx->r9 != 0) {
        // 0x41002DAC: nop
    
            goto L_41002DCC;
    }
    // 0x41002DAC: nop

    // 0x41002DB0: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x41002DB4: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x41002DB8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x41002DBC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x41002DC0: nop

    // 0x41002DC4: bc1f        L_41002DD4
    if (!c1cs) {
        // 0x41002DC8: nop
    
            goto L_41002DD4;
    }
    // 0x41002DC8: nop

L_41002DCC:
    // 0x41002DCC: b           L_4100306C
    // 0x41002DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4100306C;
    // 0x41002DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_41002DD4:
    // 0x41002DD4: beq         $v0, $zero, L_41002DF8
    if (ctx->r2 == 0) {
        // 0x41002DD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41002DF8;
    }
    // 0x41002DD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41002DDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x41002DE0: beq         $v0, $at, L_41002E70
    if (ctx->r2 == ctx->r1) {
        // 0x41002DE4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_41002E70;
    }
    // 0x41002DE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x41002DE8: beq         $v0, $at, L_41002E68
    if (ctx->r2 == ctx->r1) {
        // 0x41002DEC: nop
    
            goto L_41002E68;
    }
    // 0x41002DEC: nop

    // 0x41002DF0: b           L_41002E84
    // 0x41002DF4: nop

        goto L_41002E84;
    // 0x41002DF4: nop

L_41002DF8:
    // 0x41002DF8: jal         0x410010A8
    // 0x41002DFC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_item_main_10A8(rdram, ctx);
        goto after_1;
    // 0x41002DFC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x41002E00: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x41002E04: ori         $v1, $zero, 0x8040
    ctx->r3 = 0 | 0X8040;
    // 0x41002E08: lw          $v0, 0xC($t2)
    ctx->r2 = MEM_W(ctx->r10, 0XC);
    // 0x41002E0C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x41002E10: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x41002E14: beq         $at, $zero, L_41002E4C
    if (ctx->r1 == 0) {
        // 0x41002E18: nop
    
            goto L_41002E4C;
    }
    // 0x41002E18: nop

    // 0x41002E1C: lw          $t3, 0x60($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X60);
    // 0x41002E20: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x41002E24: andi        $t4, $t3, 0x20
    ctx->r12 = ctx->r11 & 0X20;
    // 0x41002E28: beq         $t4, $zero, L_41002E44
    if (ctx->r12 == 0) {
        // 0x41002E2C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_41002E44;
    }
    // 0x41002E2C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x41002E30: lw          $t5, 0x8($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X8);
    // 0x41002E34: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x41002E38: nop

    // 0x41002E3C: beq         $t5, $t6, L_41002E4C
    if (ctx->r13 == ctx->r14) {
        // 0x41002E40: nop
    
            goto L_41002E4C;
    }
    // 0x41002E40: nop

L_41002E44:
    // 0x41002E44: bne         $t7, $at, L_41002E58
    if (ctx->r15 != ctx->r1) {
        // 0x41002E48: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_41002E58;
    }
    // 0x41002E48: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_41002E4C:
    // 0x41002E4C: b           L_4100306C
    // 0x41002E50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4100306C;
    // 0x41002E50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x41002E54: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_41002E58:
    // 0x41002E58: beq         $at, $zero, L_41002E84
    if (ctx->r1 == 0) {
        // 0x41002E5C: nop
    
            goto L_41002E84;
    }
    // 0x41002E5C: nop

    // 0x41002E60: b           L_41002E84
    // 0x41002E64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_41002E84;
    // 0x41002E64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_41002E68:
    // 0x41002E68: b           L_41002E84
    // 0x41002E6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_41002E84;
    // 0x41002E6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_41002E70:
    // 0x41002E70: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x41002E74: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x41002E78: bne         $t8, $at, L_41002E84
    if (ctx->r24 != ctx->r1) {
        // 0x41002E7C: nop
    
            goto L_41002E84;
    }
    // 0x41002E7C: nop

    // 0x41002E80: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_41002E84:
    // 0x41002E84: bne         $a3, $zero, L_41002E94
    if (ctx->r7 != 0) {
        // 0x41002E88: nop
    
            goto L_41002E94;
    }
    // 0x41002E88: nop

    // 0x41002E8C: b           L_4100306C
    // 0x41002E90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4100306C;
    // 0x41002E90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_41002E94:
    // 0x41002E94: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x41002E98: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x41002E9C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x41002EA0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x41002EA4: nop

    // 0x41002EA8: bc1t        L_41002FD0
    if (c1cs) {
        // 0x41002EAC: lw          $t7, 0x54($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X54);
            goto L_41002FD0;
    }
    // 0x41002EAC: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x41002EB0: lw          $t9, 0x10($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X10);
    // 0x41002EB4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x41002EB8: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x41002EBC: nop

    // 0x41002EC0: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x41002EC4: nop

    // 0x41002EC8: bc1f        L_41002FC4
    if (!c1cs) {
        // 0x41002ECC: nop
    
            goto L_41002FC4;
    }
    // 0x41002ECC: nop

    // 0x41002ED0: bne         $a3, $at, L_41002F24
    if (ctx->r7 != ctx->r1) {
        // 0x41002ED4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_41002F24;
    }
    // 0x41002ED4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x41002ED8: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x41002EDC: jal         0x410017C4
    // 0x41002EE0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    ovl_item_main_17C4(rdram, ctx);
        goto after_2;
    // 0x41002EE0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_2:
    // 0x41002EE4: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x41002EE8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x41002EEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x41002EF0: beq         $v0, $at, L_41002F20
    if (ctx->r2 == ctx->r1) {
        // 0x41002EF4: lw          $t0, 0x5C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X5C);
            goto L_41002F20;
    }
    // 0x41002EF4: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x41002EF8: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x41002EFC: lw          $t4, 0x7C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X7C);
    // 0x41002F00: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x41002F04: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x41002F08: bne         $t3, $t4, L_41002F14
    if (ctx->r11 != ctx->r12) {
        // 0x41002F0C: nop
    
            goto L_41002F14;
    }
    // 0x41002F0C: nop

    // 0x41002F10: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_41002F14:
    // 0x41002F14: b           L_41002F24
    // 0x41002F18: nop

        goto L_41002F24;
    // 0x41002F18: nop

    // 0x41002F1C: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
L_41002F20:
    // 0x41002F20: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_41002F24:
    // 0x41002F24: beq         $v1, $zero, L_41002FCC
    if (ctx->r3 == 0) {
        // 0x41002F28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41002FCC;
    }
    // 0x41002F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41002F2C: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x41002F30: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x41002F34: c.eq.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl == ctx->f10.fl;
    // 0x41002F38: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x41002F3C: bc1t        L_41002F50
    if (c1cs) {
        // 0x41002F40: sw          $t2, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r10;
            goto L_41002F50;
    }
    // 0x41002F40: sw          $t2, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r10;
    // 0x41002F44: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x41002F48: nop

    // 0x41002F4C: swc1        $f16, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f16.u32l;
L_41002F50:
    // 0x41002F50: lw          $t5, 0x10($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X10);
    // 0x41002F54: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x41002F58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x41002F5C: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x41002F60: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x41002F64: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x41002F68: nop

    // 0x41002F6C: bc1f        L_41002FB0
    if (!c1cs) {
        // 0x41002F70: nop
    
            goto L_41002FB0;
    }
    // 0x41002F70: nop

    // 0x41002F74: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x41002F78: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x41002F7C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x41002F80: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x41002F84: nop

    // 0x41002F88: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x41002F8C: swc1        $f10, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f10.u32l;
    // 0x41002F90: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x41002F94: nop

    // 0x41002F98: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x41002F9C: nop

    // 0x41002FA0: bc1f        L_41002FB0
    if (!c1cs) {
        // 0x41002FA4: nop
    
            goto L_41002FB0;
    }
    // 0x41002FA4: nop

    // 0x41002FA8: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x41002FAC: swc1        $f16, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f16.u32l;
L_41002FB0:
    // 0x41002FB0: jal         0x41001648
    // 0x41002FB4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_item_main_1648(rdram, ctx);
        goto after_3;
    // 0x41002FB4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x41002FB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x41002FBC: b           L_41002FCC
    // 0x41002FC0: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
        goto L_41002FCC;
    // 0x41002FC0: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
L_41002FC4:
    // 0x41002FC4: swc1        $f2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f2.u32l;
    // 0x41002FC8: swc1        $f2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f2.u32l;
L_41002FCC:
    // 0x41002FCC: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
L_41002FD0:
    // 0x41002FD0: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x41002FD4: beq         $t7, $zero, L_41003054
    if (ctx->r15 == 0) {
        // 0x41002FD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_41003054;
    }
    // 0x41002FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41002FDC: lw          $v0, 0x10($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X10);
    // 0x41002FE0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x41002FE4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x41002FE8: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x41002FEC: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x41002FF0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x41002FF4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x41002FF8: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x41002FFC: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x41003000: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x41003004: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x41003008: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x4100300C: jal         0x41001240
    // 0x41003010: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    ovl_item_main_1240(rdram, ctx);
        goto after_4;
    // 0x41003010: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_4:
    // 0x41003014: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x41003018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4100301C: jal         0x41002CDC
    // 0x41003020: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    ovl_item_main_2CDC(rdram, ctx);
        goto after_5;
    // 0x41003020: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_5:
    // 0x41003024: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x41003028: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x4100302C: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x41003030: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x41003034: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x41003038: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4100303C: jal         0x410006C4
    // 0x41003040: nop

    ovl_item_main_6C4(rdram, ctx);
        goto after_6;
    // 0x41003040: nop

    after_6:
    // 0x41003044: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x41003048: nop

    // 0x4100304C: ori         $t3, $t1, 0x200
    ctx->r11 = ctx->r9 | 0X200;
    // 0x41003050: sw          $t3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r11;
L_41003054:
    // 0x41003054: lw          $t4, 0x60($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X60);
    // 0x41003058: nop

    // 0x4100305C: ori         $t2, $t4, 0x400
    ctx->r10 = ctx->r12 | 0X400;
    // 0x41003060: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    // 0x41003064: lw          $v0, 0x54($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X54);
    // 0x41003068: nop

L_4100306C:
    // 0x4100306C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x41003070: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x41003074: jr          $ra
    // 0x41003078: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x41003078: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_item_main_307C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100307C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x41003080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41003084: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x41003088: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4100308C: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x41003090: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x41003094: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x41003098: jal         0x410006C4
    // 0x4100309C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4100309C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x410030A0: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x410030A4: bne         $v0, $zero, L_41003140
    if (ctx->r2 != 0) {
        // 0x410030A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003140;
    }
    // 0x410030A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410030AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x410030B0: lwc1        $f4, 0x38($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X38);
    // 0x410030B4: nop

    // 0x410030B8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x410030BC: nop

    // 0x410030C0: bc1f        L_41003140
    if (!c1cs) {
        // 0x410030C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003140;
    }
    // 0x410030C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410030C8: lw          $t7, 0x60($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X60);
    // 0x410030CC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x410030D0: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x410030D4: bne         $t8, $zero, L_41003140
    if (ctx->r24 != 0) {
        // 0x410030D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003140;
    }
    // 0x410030D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410030DC: bne         $v0, $zero, L_410030F8
    if (ctx->r2 != 0) {
        // 0x410030E0: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_410030F8;
    }
    // 0x410030E0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x410030E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x410030E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x410030EC: beq         $v1, $at, L_41003140
    if (ctx->r3 == ctx->r1) {
        // 0x410030F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003140;
    }
    // 0x410030F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410030F4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_410030F8:
    // 0x410030F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x410030FC: bne         $v0, $at, L_4100310C
    if (ctx->r2 != ctx->r1) {
        // 0x41003100: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_4100310C;
    }
    // 0x41003100: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x41003104: beq         $v1, $at, L_41003140
    if (ctx->r3 == ctx->r1) {
        // 0x41003108: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003140;
    }
    // 0x41003108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4100310C:
    // 0x4100310C: bne         $v0, $zero, L_41003138
    if (ctx->r2 != 0) {
        // 0x41003110: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_41003138;
    }
    // 0x41003110: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x41003114: bne         $v1, $at, L_41003138
    if (ctx->r3 != ctx->r1) {
        // 0x41003118: nop
    
            goto L_41003138;
    }
    // 0x41003118: nop

    // 0x4100311C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x41003120: ori         $at, $zero, 0x8040
    ctx->r1 = 0 | 0X8040;
    // 0x41003124: lw          $t0, 0xC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC);
    // 0x41003128: nop

    // 0x4100312C: slt         $at, $t0, $at
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x41003130: beq         $at, $zero, L_41003140
    if (ctx->r1 == 0) {
        // 0x41003134: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003140;
    }
    // 0x41003134: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41003138:
    // 0x41003138: swc1        $f0, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f0.u32l;
    // 0x4100313C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41003140:
    // 0x41003140: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x41003144: jr          $ra
    // 0x41003148: nop

    return;
    // 0x41003148: nop

;}
RECOMP_FUNC void ovl_item_main_314C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100314C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x41003150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x41003154: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x41003158: jal         0x41002D58
    // 0x4100315C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    ovl_item_main_2D58(rdram, ctx);
        goto after_0;
    // 0x4100315C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x41003160: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x41003164: bne         $v0, $zero, L_4100326C
    if (ctx->r2 != 0) {
        // 0x41003168: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_4100326C;
    }
    // 0x41003168: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4100316C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x41003170: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x41003174: lw          $a0, 0x8($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X8);
    // 0x41003178: jal         0x410006C4
    // 0x4100317C: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4100317C: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_1:
    // 0x41003180: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x41003184: bne         $v0, $zero, L_41003270
    if (ctx->r2 != 0) {
        // 0x41003188: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003270;
    }
    // 0x41003188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4100318C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x41003190: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x41003194: bne         $t7, $at, L_41003264
    if (ctx->r15 != ctx->r1) {
        // 0x41003198: lw          $a1, 0x44($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X44);
            goto L_41003264;
    }
    // 0x41003198: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x4100319C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x410031A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x410031A4: bne         $t8, $at, L_41003264
    if (ctx->r24 != ctx->r1) {
        // 0x410031A8: lw          $a1, 0x44($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X44);
            goto L_41003264;
    }
    // 0x410031A8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x410031AC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x410031B0: nop

    // 0x410031B4: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x410031B8: jal         0x410017C4
    // 0x410031BC: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_item_main_17C4(rdram, ctx);
        goto after_2;
    // 0x410031BC: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_2:
    // 0x410031C0: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x410031C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x410031C8: beq         $v0, $at, L_41003270
    if (ctx->r2 == ctx->r1) {
        // 0x410031CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003270;
    }
    // 0x410031CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410031D0: lw          $t0, 0x60($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X60);
    // 0x410031D4: nop

    // 0x410031D8: andi        $t1, $t0, 0x4
    ctx->r9 = ctx->r8 & 0X4;
    // 0x410031DC: bne         $t1, $zero, L_41003270
    if (ctx->r9 != 0) {
        // 0x410031E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003270;
    }
    // 0x410031E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410031E4: lw          $t2, 0x60($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X60);
    // 0x410031E8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x410031EC: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x410031F0: bne         $t3, $zero, L_4100326C
    if (ctx->r11 != 0) {
        // 0x410031F4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_4100326C;
    }
    // 0x410031F4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x410031F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x410031FC: lwc1        $f6, 0x14($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X14);
    // 0x41003200: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x41003204: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x41003208: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4100320C: bc1f        L_41003220
    if (!c1cs) {
        // 0x41003210: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_41003220;
    }
    // 0x41003210: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x41003214: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x41003218: b           L_41003220
    // 0x4100321C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
        goto L_41003220;
    // 0x4100321C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_41003220:
    // 0x41003220: lwc1        $f8, 0x28($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X28);
    // 0x41003224: nop

    // 0x41003228: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x4100322C: nop

    // 0x41003230: bc1f        L_41003250
    if (!c1cs) {
        // 0x41003234: nop
    
            goto L_41003250;
    }
    // 0x41003234: nop

    // 0x41003238: lwc1        $f10, 0x28($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X28);
    // 0x4100323C: nop

    // 0x41003240: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x41003244: nop

    // 0x41003248: bc1t        L_41003270
    if (c1cs) {
        // 0x4100324C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003270;
    }
    // 0x4100324C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41003250:
    // 0x41003250: jal         0x41002BF4
    // 0x41003254: nop

    ovl_item_main_2BF4(rdram, ctx);
        goto after_3;
    // 0x41003254: nop

    after_3:
    // 0x41003258: b           L_41003270
    // 0x4100325C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_41003270;
    // 0x4100325C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x41003260: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
L_41003264:
    // 0x41003264: jal         0x4100307C
    // 0x41003268: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_item_main_307C(rdram, ctx);
        goto after_4;
    // 0x41003268: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
L_4100326C:
    // 0x4100326C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41003270:
    // 0x41003270: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x41003274: jr          $ra
    // 0x41003278: nop

    return;
    // 0x41003278: nop

;}
RECOMP_FUNC void ovl_item_main_327C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4100327C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x41003280: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x41003284: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x41003288: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x4100328C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x41003290: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x41003294: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x41003298: nop

    // 0x4100329C: bc1f        L_410032B8
    if (!c1cs) {
        // 0x410032A0: nop
    
            goto L_410032B8;
    }
    // 0x410032A0: nop

    // 0x410032A4: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x410032A8: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x410032AC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x410032B0: b           L_41003354
    // 0x410032B4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
        goto L_41003354;
    // 0x410032B4: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
L_410032B8:
    // 0x410032B8: lw          $t8, 0x70($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X70);
    // 0x410032BC: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x410032C0: slti        $at, $t8, 0x6
    ctx->r1 = SIGNED(ctx->r24) < 0X6 ? 1 : 0;
    // 0x410032C4: bne         $at, $zero, L_41003358
    if (ctx->r1 != 0) {
        // 0x410032C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41003358;
    }
    // 0x410032C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x410032CC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x410032D0: jal         0x410006C4
    // 0x410032D4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_item_main_6C4(rdram, ctx);
        goto after_0;
    // 0x410032D4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_0:
    // 0x410032D8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x410032DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x410032E0: jal         0x410006C4
    // 0x410032E4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_item_main_6C4(rdram, ctx);
        goto after_1;
    // 0x410032E4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x410032E8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x410032EC: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x410032F0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x410032F4: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x410032F8: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x410032FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x41003300: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x41003304: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x41003308: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x4100330C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x41003310: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x41003314: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x41003318: jal         0x410010E4
    // 0x4100331C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    ovl_item_main_10E4(rdram, ctx);
        goto after_2;
    // 0x4100331C: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x41003320: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x41003324: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x41003328: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4100332C: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x41003330: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x41003334: nop

    // 0x41003338: bc1f        L_41003358
    if (!c1cs) {
        // 0x4100333C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_41003358;
    }
    // 0x4100333C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x41003340: lw          $t9, 0x60($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X60);
    // 0x41003344: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x41003348: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x4100334C: sw          $t0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r8;
    // 0x41003350: swc1        $f18, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f18.u32l;
L_41003354:
    // 0x41003354: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_41003358:
    // 0x41003358: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4100335C: jr          $ra
    // 0x41003360: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x41003360: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_item_main_3364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x41003364: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x41003368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4100336C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x41003370: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x41003374: lwc1        $f2, 0x20($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X20);
    // 0x41003378: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x4100337C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x41003380: bc1t        L_4100348C
    if (c1cs) {
        // 0x41003384: mov.s       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
            goto L_4100348C;
    }
    // 0x41003384: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x41003388: lwc1        $f6, 0x710C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X710C);
    // 0x4100338C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x41003390: c.eq.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl == ctx->f2.fl;
    // 0x41003394: nop

    // 0x41003398: bc1t        L_41003490
    if (c1cs) {
        // 0x4100339C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003490;
    }
    // 0x4100339C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410033A0: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x410033A4: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x410033A8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x410033AC: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x410033B0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x410033B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x410033B8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x410033BC: jal         0x410010E4
    // 0x410033C0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    ovl_item_main_10E4(rdram, ctx);
        goto after_0;
    // 0x410033C0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x410033C4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x410033C8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x410033CC: lwc1        $f16, 0x7110($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X7110);
    // 0x410033D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x410033D4: c.eq.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl == ctx->f16.fl;
    // 0x410033D8: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x410033DC: bc1t        L_41003490
    if (c1cs) {
        // 0x410033E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_41003490;
    }
    // 0x410033E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x410033E4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x410033E8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x410033EC: bc1f        L_41003428
    if (!c1cs) {
        // 0x410033F0: nop
    
            goto L_41003428;
    }
    // 0x410033F0: nop

    // 0x410033F4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x410033F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x410033FC: nop

    // 0x41003400: add.s       $f2, $f12, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f18.fl;
    // 0x41003404: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x41003408: nop

    // 0x4100340C: bc1f        L_41003420
    if (!c1cs) {
        // 0x41003410: nop
    
            goto L_41003420;
    }
    // 0x41003410: nop

    // 0x41003414: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x41003418: b           L_41003454
    // 0x4100341C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_41003454;
    // 0x4100341C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_41003420:
    // 0x41003420: b           L_41003454
    // 0x41003424: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
        goto L_41003454;
    // 0x41003424: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
L_41003428:
    // 0x41003428: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4100342C: nop

    // 0x41003430: add.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x41003434: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x41003438: nop

    // 0x4100343C: bc1f        L_41003450
    if (!c1cs) {
        // 0x41003440: nop
    
            goto L_41003450;
    }
    // 0x41003440: nop

    // 0x41003444: sub.s       $f14, $f12, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x41003448: b           L_41003454
    // 0x4100344C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_41003454;
    // 0x4100344C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_41003450:
    // 0x41003450: sub.s       $f14, $f12, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f12.fl - ctx->f2.fl;
L_41003454:
    // 0x41003454: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x41003458: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4100345C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x41003460: c.le.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl <= ctx->f6.fl;
    // 0x41003464: nop

    // 0x41003468: bc1f        L_4100347C
    if (!c1cs) {
        // 0x4100346C: nop
    
            goto L_4100347C;
    }
    // 0x4100346C: nop

    // 0x41003470: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x41003474: b           L_4100348C
    // 0x41003478: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
        goto L_4100348C;
    // 0x41003478: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
L_4100347C:
    // 0x4100347C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x41003480: nop

    // 0x41003484: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x41003488: sw          $t7, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r15;
L_4100348C:
    // 0x4100348C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_41003490:
    // 0x41003490: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x41003494: jr          $ra
    // 0x41003498: nop

    return;
    // 0x41003498: nop

;}
