#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_menu_battle_1268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001268: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x6000126C: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x60001270: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x60001274: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x60001278: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x6000127C: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x60001280: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x60001284: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x60001288: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x6000128C: addiu       $t1, $zero, 0x3E
    ctx->r9 = ADD32(0, 0X3E);
    // 0x60001290: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_60001294:
    // 0x60001294: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
    // 0x60001298: addu        $a2, $t0, $a3
    ctx->r6 = ADD32(ctx->r8, ctx->r7);
L_6000129C:
    // 0x6000129C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x600012A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600012A4: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x600012A8: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x600012AC: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x600012B0: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x600012B4: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x600012B8: beq         $t1, $t9, L_600012D0
    if (ctx->r9 == ctx->r25) {
        // 0x600012BC: sll         $t6, $v1, 1
        ctx->r14 = S32(ctx->r3 << 1);
            goto L_600012D0;
    }
    // 0x600012BC: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x600012C0: srav        $t8, $t7, $t6
    ctx->r24 = S32(SIGNED(ctx->r15) >> (ctx->r14 & 31));
    // 0x600012C4: or          $t2, $t2, $t8
    ctx->r10 = ctx->r10 | ctx->r24;
    // 0x600012C8: andi        $t9, $t2, 0xFF
    ctx->r25 = ctx->r10 & 0XFF;
    // 0x600012CC: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
L_600012D0:
    // 0x600012D0: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x600012D4: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x600012D8: addu        $t8, $a1, $t6
    ctx->r24 = ADD32(ctx->r5, ctx->r14);
    // 0x600012DC: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x600012E0: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x600012E4: beq         $t1, $t9, L_60001300
    if (ctx->r9 == ctx->r25) {
        // 0x600012E8: addiu       $t6, $t7, 0x1
        ctx->r14 = ADD32(ctx->r15, 0X1);
            goto L_60001300;
    }
    // 0x600012E8: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x600012EC: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x600012F0: srav        $t9, $t8, $t6
    ctx->r25 = S32(SIGNED(ctx->r24) >> (ctx->r14 & 31));
    // 0x600012F4: or          $t2, $t2, $t9
    ctx->r10 = ctx->r10 | ctx->r25;
    // 0x600012F8: andi        $t7, $t2, 0xFF
    ctx->r15 = ctx->r10 & 0XFF;
    // 0x600012FC: or          $t2, $t7, $zero
    ctx->r10 = ctx->r15 | 0;
L_60001300:
    // 0x60001300: lbu         $a0, 0x7($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X7);
    // 0x60001304: nop

    // 0x60001308: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x6000130C: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x60001310: addu        $t9, $a1, $t6
    ctx->r25 = ADD32(ctx->r5, ctx->r14);
    // 0x60001314: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x60001318: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x6000131C: beq         $t1, $t7, L_60001334
    if (ctx->r9 == ctx->r15) {
        // 0x60001320: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_60001334;
    }
    // 0x60001320: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x60001324: sllv        $t9, $t6, $t8
    ctx->r25 = S32(ctx->r14 << (ctx->r24 & 31));
    // 0x60001328: or          $t3, $t3, $t9
    ctx->r11 = ctx->r11 | ctx->r25;
    // 0x6000132C: andi        $t7, $t3, 0xFF
    ctx->r15 = ctx->r11 & 0XFF;
    // 0x60001330: or          $t3, $t7, $zero
    ctx->r11 = ctx->r15 | 0;
L_60001334:
    // 0x60001334: sra         $t6, $a0, 4
    ctx->r14 = S32(SIGNED(ctx->r4) >> 4);
    // 0x60001338: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x6000133C: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x60001340: lhu         $t7, 0x0($t9)
    ctx->r15 = MEM_HU(ctx->r25, 0X0);
    // 0x60001344: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x60001348: beq         $t1, $t7, L_60001364
    if (ctx->r9 == ctx->r15) {
        // 0x6000134C: addiu       $t8, $t6, 0x1
        ctx->r24 = ADD32(ctx->r14, 0X1);
            goto L_60001364;
    }
    // 0x6000134C: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x60001350: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60001354: sllv        $t7, $t9, $t8
    ctx->r15 = S32(ctx->r25 << (ctx->r24 & 31));
    // 0x60001358: or          $t3, $t3, $t7
    ctx->r11 = ctx->r11 | ctx->r15;
    // 0x6000135C: andi        $t6, $t3, 0xFF
    ctx->r14 = ctx->r11 & 0XFF;
    // 0x60001360: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
L_60001364:
    // 0x60001364: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001368: bne         $v1, $t4, L_6000129C
    if (ctx->r3 != ctx->r12) {
        // 0x6000136C: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_6000129C;
    }
    // 0x6000136C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x60001370: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x60001374: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x60001378: bne         $at, $zero, L_60001294
    if (ctx->r1 != 0) {
        // 0x6000137C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001294;
    }
    // 0x6000137C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001380: andi        $t9, $t2, 0x80
    ctx->r25 = ctx->r10 & 0X80;
    // 0x60001384: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001388: bne         $t9, $zero, L_600013B0
    if (ctx->r25 != 0) {
        // 0x6000138C: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_600013B0;
    }
    // 0x6000138C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x60001390: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x60001394: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_60001398:
    // 0x60001398: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x6000139C: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x600013A0: bne         $t7, $zero, L_600013B0
    if (ctx->r15 != 0) {
        // 0x600013A4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_600013B0;
    }
    // 0x600013A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x600013A8: bne         $a0, $a2, L_60001398
    if (ctx->r4 != ctx->r6) {
        // 0x600013AC: sll         $t2, $v0, 1
        ctx->r10 = S32(ctx->r2 << 1);
            goto L_60001398;
    }
    // 0x600013AC: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
L_600013B0:
    // 0x600013B0: andi        $t6, $t3, 0x1
    ctx->r14 = ctx->r11 & 0X1;
    // 0x600013B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x600013B8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x600013BC: bne         $t6, $zero, L_600013E0
    if (ctx->r14 != 0) {
        // 0x600013C0: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_600013E0;
    }
    // 0x600013C0: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x600013C4: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_600013C8:
    // 0x600013C8: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x600013CC: andi        $t8, $v1, 0x1
    ctx->r24 = ctx->r3 & 0X1;
    // 0x600013D0: bne         $t8, $zero, L_600013E0
    if (ctx->r24 != 0) {
        // 0x600013D4: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_600013E0;
    }
    // 0x600013D4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x600013D8: bne         $t0, $a2, L_600013C8
    if (ctx->r8 != ctx->r6) {
        // 0x600013DC: srl         $t3, $v1, 1
        ctx->r11 = S32(U32(ctx->r3) >> 1);
            goto L_600013C8;
    }
    // 0x600013DC: srl         $t3, $v1, 1
    ctx->r11 = S32(U32(ctx->r3) >> 1);
L_600013E0:
    // 0x600013E0: bne         $v0, $zero, L_600013F8
    if (ctx->r2 != 0) {
        // 0x600013E4: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_600013F8;
    }
    // 0x600013E4: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x600013E8: bne         $v1, $zero, L_600013FC
    if (ctx->r3 != 0) {
        // 0x600013EC: subu        $t7, $t3, $a0
        ctx->r15 = SUB32(ctx->r11, ctx->r4);
            goto L_600013FC;
    }
    // 0x600013EC: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
    // 0x600013F0: b           L_60001578
    // 0x600013F4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
        goto L_60001578;
    // 0x600013F4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
L_600013F8:
    // 0x600013F8: subu        $t7, $t3, $a0
    ctx->r15 = SUB32(ctx->r11, ctx->r4);
L_600013FC:
    // 0x600013FC: andi        $t2, $a0, 0x1
    ctx->r10 = ctx->r4 & 0X1;
    // 0x60001400: sra         $a1, $a0, 1
    ctx->r5 = S32(SIGNED(ctx->r4) >> 1);
    // 0x60001404: subu        $t4, $t7, $t0
    ctx->r12 = SUB32(ctx->r15, ctx->r8);
    // 0x60001408: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x6000140C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_60001410:
    // 0x60001410: beq         $t2, $zero, L_60001480
    if (ctx->r10 == 0) {
        // 0x60001414: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001480;
    }
    // 0x60001414: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001418: sll         $t6, $t1, 3
    ctx->r14 = S32(ctx->r9 << 3);
    // 0x6000141C: addu        $v0, $t6, $a3
    ctx->r2 = ADD32(ctx->r14, ctx->r7);
L_60001420:
    // 0x60001420: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x60001424: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x60001428: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x6000142C: sra         $t9, $t0, 4
    ctx->r25 = S32(SIGNED(ctx->r8) >> 4);
    // 0x60001430: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x60001434: or          $t6, $t9, $t7
    ctx->r14 = ctx->r25 | ctx->r15;
    // 0x60001438: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x6000143C: sra         $t8, $t5, 4
    ctx->r24 = S32(SIGNED(ctx->r13) >> 4);
    // 0x60001440: lbu         $s0, 0x3($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X3);
    // 0x60001444: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x60001448: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x6000144C: sll         $t8, $t5, 4
    ctx->r24 = S32(ctx->r13 << 4);
    // 0x60001450: sra         $t6, $s0, 4
    ctx->r14 = S32(SIGNED(ctx->r16) >> 4);
    // 0x60001454: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x60001458: sb          $t7, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r15;
    // 0x6000145C: lbu         $t7, 0x4($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X4);
    // 0x60001460: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x60001464: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x60001468: sra         $t6, $t7, 4
    ctx->r14 = S32(SIGNED(ctx->r15) >> 4);
    // 0x6000146C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x60001470: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001474: sb          $t9, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r25;
    // 0x60001478: bne         $v1, $a2, L_60001420
    if (ctx->r3 != ctx->r6) {
        // 0x6000147C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_60001420;
    }
    // 0x6000147C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_60001480:
    // 0x60001480: beq         $a1, $zero, L_6000156C
    if (ctx->r5 == 0) {
        // 0x60001484: subu        $s0, $a2, $a1
        ctx->r16 = SUB32(ctx->r6, ctx->r5);
            goto L_6000156C;
    }
    // 0x60001484: subu        $s0, $a2, $a1
    ctx->r16 = SUB32(ctx->r6, ctx->r5);
    // 0x60001488: blez        $s0, L_6000150C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x6000148C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_6000150C;
    }
    // 0x6000148C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001490: andi        $s2, $s0, 0x3
    ctx->r18 = ctx->r16 & 0X3;
    // 0x60001494: beq         $s2, $zero, L_600014CC
    if (ctx->r18 == 0) {
        // 0x60001498: sll         $t0, $t1, 3
        ctx->r8 = S32(ctx->r9 << 3);
            goto L_600014CC;
    }
    // 0x60001498: sll         $t0, $t1, 3
    ctx->r8 = S32(ctx->r9 << 3);
    // 0x6000149C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x600014A0: addu        $t5, $t0, $zero
    ctx->r13 = ADD32(ctx->r8, 0);
    // 0x600014A4: addu        $v0, $t0, $a3
    ctx->r2 = ADD32(ctx->r8, ctx->r7);
L_600014A8:
    // 0x600014A8: addu        $t7, $t5, $a1
    ctx->r15 = ADD32(ctx->r13, ctx->r5);
    // 0x600014AC: addu        $t6, $t7, $a3
    ctx->r14 = ADD32(ctx->r15, ctx->r7);
    // 0x600014B0: lbu         $t8, 0x0($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X0);
    // 0x600014B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x600014B8: addiu       $t5, $t5, 0x1
    ctx->r13 = ADD32(ctx->r13, 0X1);
    // 0x600014BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600014C0: bne         $s1, $v1, L_600014A8
    if (ctx->r17 != ctx->r3) {
        // 0x600014C4: sb          $t8, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r24;
            goto L_600014A8;
    }
    // 0x600014C4: sb          $t8, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r24;
    // 0x600014C8: beq         $v1, $s0, L_6000150C
    if (ctx->r3 == ctx->r16) {
        // 0x600014CC: addu        $t5, $t0, $v1
        ctx->r13 = ADD32(ctx->r8, ctx->r3);
            goto L_6000150C;
    }
L_600014CC:
    // 0x600014CC: addu        $t5, $t0, $v1
    ctx->r13 = ADD32(ctx->r8, ctx->r3);
    // 0x600014D0: addu        $v0, $t5, $a3
    ctx->r2 = ADD32(ctx->r13, ctx->r7);
L_600014D4:
    // 0x600014D4: addu        $t9, $t5, $a1
    ctx->r25 = ADD32(ctx->r13, ctx->r5);
    // 0x600014D8: addu        $t0, $t9, $a3
    ctx->r8 = ADD32(ctx->r25, ctx->r7);
    // 0x600014DC: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x600014E0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x600014E4: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x600014E8: lbu         $t6, 0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X1);
    // 0x600014EC: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x600014F0: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
    // 0x600014F4: lbu         $t8, 0x2($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X2);
    // 0x600014F8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x600014FC: sb          $t8, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = ctx->r24;
    // 0x60001500: lbu         $t9, 0x3($t0)
    ctx->r25 = MEM_BU(ctx->r8, 0X3);
    // 0x60001504: bne         $v1, $s0, L_600014D4
    if (ctx->r3 != ctx->r16) {
        // 0x60001508: sb          $t9, -0x1($v0)
        MEM_B(-0X1, ctx->r2) = ctx->r25;
            goto L_600014D4;
    }
    // 0x60001508: sb          $t9, -0x1($v0)
    MEM_B(-0X1, ctx->r2) = ctx->r25;
L_6000150C:
    // 0x6000150C: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x60001510: beq         $at, $zero, L_6000156C
    if (ctx->r1 == 0) {
        // 0x60001514: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_6000156C;
    }
    // 0x60001514: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x60001518: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x6000151C: subu        $s1, $t6, $s0
    ctx->r17 = SUB32(ctx->r14, ctx->r16);
    // 0x60001520: andi        $t8, $s1, 0x3
    ctx->r24 = ctx->r17 & 0X3;
    // 0x60001524: sll         $t7, $t1, 3
    ctx->r15 = S32(ctx->r9 << 3);
    // 0x60001528: beq         $t8, $zero, L_6000154C
    if (ctx->r24 == 0) {
        // 0x6000152C: addu        $v0, $a3, $t7
        ctx->r2 = ADD32(ctx->r7, ctx->r15);
            goto L_6000154C;
    }
    // 0x6000152C: addu        $v0, $a3, $t7
    ctx->r2 = ADD32(ctx->r7, ctx->r15);
    // 0x60001530: addu        $t5, $t8, $s0
    ctx->r13 = ADD32(ctx->r24, ctx->r16);
    // 0x60001534: addu        $t0, $v0, $s0
    ctx->r8 = ADD32(ctx->r2, ctx->r16);
L_60001538:
    // 0x60001538: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x6000153C: sb          $a0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r4;
    // 0x60001540: bne         $t5, $v1, L_60001538
    if (ctx->r13 != ctx->r3) {
        // 0x60001544: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_60001538;
    }
    // 0x60001544: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x60001548: beq         $v1, $a2, L_6000156C
    if (ctx->r3 == ctx->r6) {
        // 0x6000154C: addu        $t0, $v0, $v1
        ctx->r8 = ADD32(ctx->r2, ctx->r3);
            goto L_6000156C;
    }
L_6000154C:
    // 0x6000154C: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
L_60001550:
    // 0x60001550: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60001554: sb          $a0, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r4;
    // 0x60001558: sb          $a0, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r4;
    // 0x6000155C: sb          $a0, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r4;
    // 0x60001560: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x60001564: bne         $v1, $a2, L_60001550
    if (ctx->r3 != ctx->r6) {
        // 0x60001568: sb          $a0, -0x4($t0)
        MEM_B(-0X4, ctx->r8) = ctx->r4;
            goto L_60001550;
    }
    // 0x60001568: sb          $a0, -0x4($t0)
    MEM_B(-0X4, ctx->r8) = ctx->r4;
L_6000156C:
    // 0x6000156C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x60001570: bne         $t1, $t3, L_60001410
    if (ctx->r9 != ctx->r11) {
        // 0x60001574: nop
    
            goto L_60001410;
    }
    // 0x60001574: nop

L_60001578:
    // 0x60001578: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x6000157C: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x60001580: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x60001584: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x60001588: jr          $ra
    // 0x6000158C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x6000158C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
;}
RECOMP_FUNC void ovl_menu_battle_1590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001590: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x60001594: beq         $t6, $zero, L_600015D0
    if (ctx->r14 == 0) {
        // 0x60001598: sra         $t7, $a3, 1
        ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
            goto L_600015D0;
    }
    // 0x60001598: sra         $t7, $a3, 1
    ctx->r15 = S32(SIGNED(ctx->r7) >> 1);
    // 0x6000159C: sra         $t9, $a3, 1
    ctx->r25 = S32(SIGNED(ctx->r7) >> 1);
    // 0x600015A0: multu       $t9, $a2
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600015A4: sra         $t7, $a1, 1
    ctx->r15 = S32(SIGNED(ctx->r5) >> 1);
    // 0x600015A8: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x600015AC: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x600015B0: mflo        $t0
    ctx->r8 = lo;
    // 0x600015B4: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x600015B8: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x600015BC: nop

    // 0x600015C0: andi        $t2, $t1, 0xF0
    ctx->r10 = ctx->r9 & 0XF0;
    // 0x600015C4: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x600015C8: jr          $ra
    // 0x600015CC: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    return;
    // 0x600015CC: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
L_600015D0:
    // 0x600015D0: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600015D4: sra         $t5, $a1, 1
    ctx->r13 = S32(SIGNED(ctx->r5) >> 1);
    // 0x600015D8: addu        $t6, $a0, $t5
    ctx->r14 = ADD32(ctx->r4, ctx->r13);
    // 0x600015DC: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x600015E0: nop

    // 0x600015E4: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x600015E8: mflo        $t9
    ctx->r25 = lo;
    // 0x600015EC: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x600015F0: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x600015F4: nop

    // 0x600015F8: andi        $t0, $t8, 0xF
    ctx->r8 = ctx->r24 & 0XF;
    // 0x600015FC: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x60001600: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x60001604: jr          $ra
    // 0x60001608: nop

    return;
    // 0x60001608: nop

;}
RECOMP_FUNC void ovl_menu_battle_160C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000160C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60001610: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60001614: lui         $s1, 0x6001
    ctx->r17 = S32(0X6001 << 16);
    // 0x60001618: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x6000161C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60001620: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x60001624: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x60001628: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x6000162C: addiu       $s1, $s1, -0x3F88
    ctx->r17 = ADD32(ctx->r17, -0X3F88);
    // 0x60001630: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x60001634: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x60001638: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x6000163C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x60001640: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x60001644: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x60001648: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x6000164C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x60001650: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60001654: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x60001658: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x6000165C: jal         0x600011A0
    // 0x60001660: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    ovl_menu_battle_11A0(rdram, ctx);
        goto after_0;
    // 0x60001660: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_0:
    // 0x60001664: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x60001668: jal         0x60001268
    // 0x6000166C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_menu_battle_1268(rdram, ctx);
        goto after_1;
    // 0x6000166C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x60001670: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x60001674: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x60001678: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x6000167C: addiu       $fp, $zero, 0x10
    ctx->r30 = ADD32(0, 0X10);
L_60001680:
    // 0x60001680: blez        $s5, L_60001704
    if (SIGNED(ctx->r21) <= 0) {
        // 0x60001684: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60001704;
    }
    // 0x60001684: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001688: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x6000168C: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60001690: addiu       $t7, $t7, -0x3F88
    ctx->r15 = ADD32(ctx->r15, -0X3F88);
    // 0x60001694: sll         $t6, $s7, 3
    ctx->r14 = S32(ctx->r23 << 3);
    // 0x60001698: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x6000169C: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x600016A0: addu        $s3, $t8, $s7
    ctx->r19 = ADD32(ctx->r24, ctx->r23);
L_600016A4:
    // 0x600016A4: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x600016A8: beq         $t9, $zero, L_600016CC
    if (ctx->r25 == 0) {
        // 0x600016AC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_600016CC;
    }
    // 0x600016AC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x600016B0: sra         $t0, $s0, 1
    ctx->r8 = S32(SIGNED(ctx->r16) >> 1);
    // 0x600016B4: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x600016B8: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x600016BC: nop

    // 0x600016C0: andi        $t2, $v0, 0xF
    ctx->r10 = ctx->r2 & 0XF;
    // 0x600016C4: b           L_600016E4
    // 0x600016C8: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_600016E4;
    // 0x600016C8: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_600016CC:
    // 0x600016CC: sra         $t3, $s0, 1
    ctx->r11 = S32(SIGNED(ctx->r16) >> 1);
    // 0x600016D0: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x600016D4: lbu         $v0, 0x0($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X0);
    // 0x600016D8: nop

    // 0x600016DC: sra         $t5, $v0, 4
    ctx->r13 = S32(SIGNED(ctx->r2) >> 4);
    // 0x600016E0: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_600016E4:
    // 0x600016E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x600016E8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x600016EC: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x600016F0: jal         0x60001590
    // 0x600016F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    ovl_menu_battle_1590(rdram, ctx);
        goto after_2;
    // 0x600016F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x600016F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600016FC: bne         $s0, $s5, L_600016A4
    if (ctx->r16 != ctx->r21) {
        // 0x60001700: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_600016A4;
    }
    // 0x60001700: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001704:
    // 0x60001704: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001708: bne         $s7, $fp, L_60001680
    if (ctx->r23 != ctx->r30) {
        // 0x6000170C: nop
    
            goto L_60001680;
    }
    // 0x6000170C: nop

    // 0x60001710: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x60001714: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x60001718: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x6000171C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60001720: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60001724: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60001728: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x6000172C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x60001730: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x60001734: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x60001738: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x6000173C: jr          $ra
    // 0x60001740: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60001740: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_menu_battle_1744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001744: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x60001748: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x6000174C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x60001750: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x60001754: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x60001758: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x6000175C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x60001760: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x60001764: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x60001768: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x6000176C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x60001770: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x60001774: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x60001778: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x6000177C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x60001780: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001784:
    // 0x60001784: jal         0x60000118
    // 0x60001788: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_battle_118(rdram, ctx);
        goto after_0;
    // 0x60001788: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_0:
    // 0x6000178C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001790: slti        $at, $s7, 0x4
    ctx->r1 = SIGNED(ctx->r23) < 0X4 ? 1 : 0;
    // 0x60001794: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60001798: bne         $at, $zero, L_60001784
    if (ctx->r1 != 0) {
        // 0x6000179C: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_60001784;
    }
    // 0x6000179C: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x600017A0: jal         0x60000118
    // 0x600017A4: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_battle_118(rdram, ctx);
        goto after_1;
    // 0x600017A4: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_1:
    // 0x600017A8: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x600017AC: lhu         $t6, 0x0($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X0);
    // 0x600017B0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x600017B4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x600017B8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x600017BC: beq         $t6, $at, L_6000184C
    if (ctx->r14 == ctx->r1) {
        // 0x600017C0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_6000184C;
    }
    // 0x600017C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600017C4: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x600017C8: lui         $s2, 0x6001
    ctx->r18 = S32(0X6001 << 16);
    // 0x600017CC: addiu       $s2, $s2, -0x3F08
    ctx->r18 = ADD32(ctx->r18, -0X3F08);
    // 0x600017D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x600017D4: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x600017D8: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
L_600017DC:
    // 0x600017DC: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x600017E0: bne         $v0, $at, L_600017F0
    if (ctx->r2 != ctx->r1) {
        // 0x600017E4: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_600017F0;
    }
    // 0x600017E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x600017E8: b           L_60001828
    // 0x600017EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_60001828;
    // 0x600017EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600017F0:
    // 0x600017F0: jal         0x600011A0
    // 0x600017F4: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    ovl_menu_battle_11A0(rdram, ctx);
        goto after_2;
    // 0x600017F4: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_2:
    // 0x600017F8: lhu         $t7, 0x0($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0X0);
    // 0x600017FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60001800: andi        $t8, $t7, 0xF00
    ctx->r24 = ctx->r15 & 0XF00;
    // 0x60001804: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x60001808: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x6000180C: addu        $t2, $fp, $t1
    ctx->r10 = ADD32(ctx->r30, ctx->r9);
    // 0x60001810: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x60001814: nop

    // 0x60001818: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x6000181C: jal         0x60001268
    // 0x60001820: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    ovl_menu_battle_1268(rdram, ctx);
        goto after_3;
    // 0x60001820: addu        $a1, $t3, $v1
    ctx->r5 = ADD32(ctx->r11, ctx->r3);
    after_3:
    // 0x60001824: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_60001828:
    // 0x60001828: slt         $at, $s3, $s0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x6000182C: beq         $at, $zero, L_60001838
    if (ctx->r1 == 0) {
        // 0x60001830: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_60001838;
    }
    // 0x60001830: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x60001834: or          $s3, $s0, $zero
    ctx->r19 = ctx->r16 | 0;
L_60001838:
    // 0x60001838: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x6000183C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x60001840: bne         $a0, $at, L_600017DC
    if (ctx->r4 != ctx->r1) {
        // 0x60001844: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_600017DC;
    }
    // 0x60001844: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60001848: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_6000184C:
    // 0x6000184C: andi        $t4, $s3, 0x1
    ctx->r12 = ctx->r19 & 0X1;
    // 0x60001850: beq         $t4, $zero, L_6000185C
    if (ctx->r12 == 0) {
        // 0x60001854: addiu       $fp, $sp, 0x70
        ctx->r30 = ADD32(ctx->r29, 0X70);
            goto L_6000185C;
    }
    // 0x60001854: addiu       $fp, $sp, 0x70
    ctx->r30 = ADD32(ctx->r29, 0X70);
    // 0x60001858: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_6000185C:
    // 0x6000185C: lw          $s1, 0xA0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA0);
    // 0x60001860: nop

    // 0x60001864: sll         $t5, $s1, 4
    ctx->r13 = S32(ctx->r17 << 4);
    // 0x60001868: multu       $t5, $s3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x6000186C: or          $s1, $t5, $zero
    ctx->r17 = ctx->r13 | 0;
    // 0x60001870: mflo        $s0
    ctx->r16 = lo;
    // 0x60001874: sra         $s2, $s0, 1
    ctx->r18 = S32(SIGNED(ctx->r16) >> 1);
    // 0x60001878: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x6000187C: jal         0x600000E8
    // 0x60001880: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    ovl_menu_battle_E8(rdram, ctx);
        goto after_4;
    // 0x60001880: addiu       $a0, $s2, 0x40
    ctx->r4 = ADD32(ctx->r18, 0X40);
    after_4:
    // 0x60001884: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x60001888: addiu       $a3, $s2, 0x20
    ctx->r7 = ADD32(ctx->r18, 0X20);
    // 0x6000188C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x60001890: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x60001894: sw          $a3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r7;
    // 0x60001898: sw          $t8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r24;
    // 0x6000189C: lhu         $t9, 0x0($s5)
    ctx->r25 = MEM_HU(ctx->r21, 0X0);
    // 0x600018A0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x600018A4: andi        $t1, $t9, 0xF00
    ctx->r9 = ctx->r25 & 0XF00;
    // 0x600018A8: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x600018AC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x600018B0: addu        $t4, $fp, $t3
    ctx->r12 = ADD32(ctx->r30, ctx->r11);
    // 0x600018B4: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x600018B8: addu        $a0, $v0, $a3
    ctx->r4 = ADD32(ctx->r2, ctx->r7);
    // 0x600018BC: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x600018C0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x600018C4: jal         0x60001134
    // 0x600018C8: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    ovl_menu_battle_1134(rdram, ctx);
        goto after_5;
    // 0x600018C8: addu        $a1, $t5, $v1
    ctx->r5 = ADD32(ctx->r13, ctx->r3);
    after_5:
    // 0x600018CC: lw          $t7, 0x4($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X4);
    // 0x600018D0: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x600018D4: sw          $s3, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r19;
    // 0x600018D8: sw          $s1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r17;
    // 0x600018DC: sw          $t6, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r14;
    // 0x600018E0: blez        $s0, L_60001930
    if (SIGNED(ctx->r16) <= 0) {
        // 0x600018E4: addu        $s6, $s4, $t7
        ctx->r22 = ADD32(ctx->r20, ctx->r15);
            goto L_60001930;
    }
    // 0x600018E4: addu        $s6, $s4, $t7
    ctx->r22 = ADD32(ctx->r20, ctx->r15);
    // 0x600018E8: andi        $a0, $s0, 0x3
    ctx->r4 = ctx->r16 & 0X3;
    // 0x600018EC: beq         $a0, $zero, L_6000190C
    if (ctx->r4 == 0) {
        // 0x600018F0: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_6000190C;
    }
    // 0x600018F0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x600018F4: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_600018F8:
    // 0x600018F8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x600018FC: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x60001900: bne         $v1, $s7, L_600018F8
    if (ctx->r3 != ctx->r23) {
        // 0x60001904: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_600018F8;
    }
    // 0x60001904: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x60001908: beq         $s7, $s0, L_6000192C
    if (ctx->r23 == ctx->r16) {
        // 0x6000190C: addu        $v0, $s6, $s7
        ctx->r2 = ADD32(ctx->r22, ctx->r23);
            goto L_6000192C;
    }
L_6000190C:
    // 0x6000190C: addu        $v0, $s6, $s7
    ctx->r2 = ADD32(ctx->r22, ctx->r23);
L_60001910:
    // 0x60001910: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x60001914: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x60001918: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x6000191C: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x60001920: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x60001924: bne         $s7, $s0, L_60001910
    if (ctx->r23 != ctx->r16) {
        // 0x60001928: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_60001910;
    }
    // 0x60001928: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
L_6000192C:
    // 0x6000192C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
L_60001930:
    // 0x60001930: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x60001934: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001938: blez        $t8, L_600019FC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x6000193C: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_600019FC;
    }
    // 0x6000193C: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x60001940: lhu         $s2, 0x0($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X0);
    // 0x60001944: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x60001948: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
L_6000194C:
    // 0x6000194C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60001950: blez        $t9, L_600019E0
    if (SIGNED(ctx->r25) <= 0) {
        // 0x60001954: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_600019E0;
    }
    // 0x60001954: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001958: sll         $s3, $v0, 4
    ctx->r19 = S32(ctx->r2 << 4);
    // 0x6000195C: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
L_60001960:
    // 0x60001960: lw          $t1, 0x10($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X10);
    // 0x60001964: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x60001968: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x6000196C: lw          $t2, 0x8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X8);
    // 0x60001970: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    // 0x60001974: addu        $t3, $s4, $t2
    ctx->r11 = ADD32(ctx->r20, ctx->r10);
    // 0x60001978: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x6000197C: andi        $a1, $s2, 0xFFFF
    ctx->r5 = ctx->r18 & 0XFFFF;
    // 0x60001980: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60001984: jal         0x6000160C
    // 0x60001988: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    ovl_menu_battle_160C(rdram, ctx);
        goto after_6;
    // 0x60001988: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_6:
    // 0x6000198C: lhu         $s2, 0x2($s5)
    ctx->r18 = MEM_HU(ctx->r21, 0X2);
    // 0x60001990: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x60001994: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x60001998: addiu       $s5, $s5, 0x2
    ctx->r21 = ADD32(ctx->r21, 0X2);
    // 0x6000199C: bne         $t0, $s2, L_600019B0
    if (ctx->r8 != ctx->r18) {
        // 0x600019A0: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_600019B0;
    }
    // 0x600019A0: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x600019A4: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x600019A8: b           L_600019E0
    // 0x600019AC: nop

        goto L_600019E0;
    // 0x600019AC: nop

L_600019B0:
    // 0x600019B0: ori         $at, $zero, 0xFF00
    ctx->r1 = 0 | 0XFF00;
    // 0x600019B4: bne         $v1, $at, L_600019CC
    if (ctx->r3 != ctx->r1) {
        // 0x600019B8: lw          $t4, 0x9C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X9C);
            goto L_600019CC;
    }
    // 0x600019B8: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
    // 0x600019BC: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x600019C0: b           L_600019E0
    // 0x600019C4: nop

        goto L_600019E0;
    // 0x600019C4: nop

    // 0x600019C8: lw          $t4, 0x9C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X9C);
L_600019CC:
    // 0x600019CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600019D0: bne         $s0, $t4, L_60001960
    if (ctx->r16 != ctx->r12) {
        // 0x600019D4: nop
    
            goto L_60001960;
    }
    // 0x600019D4: nop

    // 0x600019D8: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x600019DC: nop

L_600019E0:
    // 0x600019E0: beq         $t0, $s2, L_600019FC
    if (ctx->r8 == ctx->r18) {
        // 0x600019E4: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_600019FC;
    }
    // 0x600019E4: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x600019E8: lw          $t5, 0xA0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA0);
    // 0x600019EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x600019F0: bne         $v0, $t5, L_6000194C
    if (ctx->r2 != ctx->r13) {
        // 0x600019F4: lw          $t9, 0x9C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X9C);
            goto L_6000194C;
    }
    // 0x600019F4: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x600019F8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_600019FC:
    // 0x600019FC: jal         0x60000124
    // 0x60001A00: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    ovl_menu_battle_124(rdram, ctx);
        goto after_7;
    // 0x60001A00: addiu       $a0, $s7, 0x918
    ctx->r4 = ADD32(ctx->r23, 0X918);
    after_7:
    // 0x60001A04: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x60001A08: bne         $s7, $s0, L_600019FC
    if (ctx->r23 != ctx->r16) {
        // 0x60001A0C: nop
    
            goto L_600019FC;
    }
    // 0x60001A0C: nop

    // 0x60001A10: jal         0x60000124
    // 0x60001A14: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    ovl_menu_battle_124(rdram, ctx);
        goto after_8;
    // 0x60001A14: addiu       $a0, $zero, 0x903
    ctx->r4 = ADD32(0, 0X903);
    after_8:
    // 0x60001A18: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x60001A1C: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x60001A20: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60001A24: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60001A28: mflo        $a1
    ctx->r5 = lo;
    // 0x60001A2C: sll         $t8, $a1, 8
    ctx->r24 = S32(ctx->r5 << 8);
    // 0x60001A30: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x60001A34: jal         0x60000034
    // 0x60001A38: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    ovl_menu_battle_34(rdram, ctx);
        goto after_9;
    // 0x60001A38: addiu       $a1, $t9, 0x40
    ctx->r5 = ADD32(ctx->r25, 0X40);
    after_9:
    // 0x60001A3C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60001A40: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x60001A44: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x60001A48: jal         0x60000544
    // 0x60001A4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_544(rdram, ctx);
        goto after_10;
    // 0x60001A4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x60001A50: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x60001A54: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x60001A58: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x60001A5C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x60001A60: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x60001A64: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x60001A68: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x60001A6C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x60001A70: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x60001A74: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x60001A78: jr          $ra
    // 0x60001A7C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x60001A7C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_menu_battle_1A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001A88: jal         0x60000550
    // 0x60001A8C: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_0;
    // 0x60001A8C: nop

    after_0:
    // 0x60001A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001A94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001A98: jr          $ra
    // 0x60001A9C: nop

    return;
    // 0x60001A9C: nop

;}
RECOMP_FUNC void ovl_menu_battle_1AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001AA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001AA4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60001AA8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60001AAC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60001AB0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60001AB4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60001AB8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60001ABC: blez        $a1, L_60001BD0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60001AC0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001BD0;
    }
    // 0x60001AC0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001AC4: lui         $s3, 0x6001
    ctx->r19 = S32(0X6001 << 16);
    // 0x60001AC8: addiu       $s3, $s3, -0x3FC0
    ctx->r19 = ADD32(ctx->r19, -0X3FC0);
    // 0x60001ACC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001AD0:
    // 0x60001AD0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60001AD4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60001AD8: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60001ADC: beq         $t6, $zero, L_60001B28
    if (ctx->r14 == 0) {
        // 0x60001AE0: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_60001B28;
    }
    // 0x60001AE0: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x60001AE4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001AE8: jal         0x60000538
    // 0x60001AEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_538(rdram, ctx);
        goto after_0;
    // 0x60001AEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x60001AF0: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x60001AF4: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x60001AF8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x60001AFC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x60001B00: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001B04: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001B08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001B0C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60001B10: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60001B14: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60001B18: jal         0x6000055C
    // 0x60001B1C: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_1;
    // 0x60001B1C: nop

    after_1:
    // 0x60001B20: b           L_60001BA8
    // 0x60001B24: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
        goto L_60001BA8;
    // 0x60001B24: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_60001B28:
    // 0x60001B28: beq         $t9, $zero, L_60001B84
    if (ctx->r25 == 0) {
        // 0x60001B2C: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_60001B84;
    }
    // 0x60001B2C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60001B30: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001B34: jal         0x6000110C
    // 0x60001B38: nop

    ovl_menu_battle_110C(rdram, ctx);
        goto after_2;
    // 0x60001B38: nop

    after_2:
    // 0x60001B3C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60001B40: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60001B44: jal         0x60001744
    // 0x60001B48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1744(rdram, ctx);
        goto after_3;
    // 0x60001B48: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x60001B4C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x60001B50: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x60001B54: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x60001B58: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x60001B5C: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60001B60: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001B64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001B68: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60001B6C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60001B70: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x60001B74: jal         0x6000055C
    // 0x60001B78: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_4;
    // 0x60001B78: nop

    after_4:
    // 0x60001B7C: b           L_60001BA8
    // 0x60001B80: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
        goto L_60001BA8;
    // 0x60001B80: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_60001B84:
    // 0x60001B84: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x60001B88: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x60001B8C: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x60001B90: lw          $a2, 0x0($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X0);
    // 0x60001B94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60001B98: jal         0x600006B8
    // 0x60001B9C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    ovl_menu_battle_6B8(rdram, ctx);
        goto after_5;
    // 0x60001B9C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_5:
    // 0x60001BA0: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x60001BA4: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
L_60001BA8:
    // 0x60001BA8: nop

    // 0x60001BAC: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x60001BB0: bne         $t4, $zero, L_60001BC4
    if (ctx->r12 != 0) {
        // 0x60001BB4: nop
    
            goto L_60001BC4;
    }
    // 0x60001BB4: nop

    // 0x60001BB8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001BBC: jal         0x600005A4
    // 0x60001BC0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_6;
    // 0x60001BC0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_6:
L_60001BC4:
    // 0x60001BC4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001BC8: bne         $s1, $s2, L_60001AD0
    if (ctx->r17 != ctx->r18) {
        // 0x60001BCC: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60001AD0;
    }
    // 0x60001BCC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60001BD0:
    // 0x60001BD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001BD4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60001BD8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60001BDC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60001BE0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60001BE4: jr          $ra
    // 0x60001BE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60001BE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_menu_battle_1BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001BEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60001BF0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60001BF4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60001BF8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x60001BFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60001C00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001C04: blez        $a1, L_60001C6C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x60001C08: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60001C6C;
    }
    // 0x60001C08: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001C0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_60001C10:
    // 0x60001C10: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x60001C14: nop

    // 0x60001C18: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x60001C1C: beq         $t6, $zero, L_60001C38
    if (ctx->r14 == 0) {
        // 0x60001C20: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_60001C38;
    }
    // 0x60001C20: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x60001C24: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C28: jal         0x60000550
    // 0x60001C2C: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_0;
    // 0x60001C2C: nop

    after_0:
    // 0x60001C30: b           L_60001C64
    // 0x60001C34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60001C64;
    // 0x60001C34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001C38:
    // 0x60001C38: beq         $t7, $zero, L_60001C54
    if (ctx->r15 == 0) {
        // 0x60001C3C: nop
    
            goto L_60001C54;
    }
    // 0x60001C3C: nop

    // 0x60001C40: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C44: jal         0x60001A80
    // 0x60001C48: nop

    ovl_menu_battle_1A80(rdram, ctx);
        goto after_1;
    // 0x60001C48: nop

    after_1:
    // 0x60001C4C: b           L_60001C64
    // 0x60001C50: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60001C64;
    // 0x60001C50: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001C54:
    // 0x60001C54: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x60001C58: jal         0x600006AC
    // 0x60001C5C: nop

    ovl_menu_battle_6AC(rdram, ctx);
        goto after_2;
    // 0x60001C5C: nop

    after_2:
    // 0x60001C60: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60001C64:
    // 0x60001C64: bne         $s1, $s2, L_60001C10
    if (ctx->r17 != ctx->r18) {
        // 0x60001C68: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_60001C10;
    }
    // 0x60001C68: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_60001C6C:
    // 0x60001C6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001C70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001C74: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60001C78: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60001C7C: jr          $ra
    // 0x60001C80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60001C80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_menu_battle_1C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001C84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001C88: andi        $t6, $a2, 0x1
    ctx->r14 = ctx->r6 & 0X1;
    // 0x60001C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001C90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x60001C94: beq         $t6, $zero, L_60001CC0
    if (ctx->r14 == 0) {
        // 0x60001C98: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_60001CC0;
    }
    // 0x60001C98: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x60001C9C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x60001CA0: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x60001CA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60001CA8: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x60001CAC: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x60001CB0: jal         0x600005B0
    // 0x60001CB4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_battle_5B0(rdram, ctx);
        goto after_0;
    // 0x60001CB4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x60001CB8: b           L_60001CE8
    // 0x60001CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001CE8;
    // 0x60001CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001CC0:
    // 0x60001CC0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60001CC4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x60001CC8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x60001CCC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x60001CD0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60001CD4: addu        $t2, $a3, $t1
    ctx->r10 = ADD32(ctx->r7, ctx->r9);
    // 0x60001CD8: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x60001CDC: jal         0x600005A4
    // 0x60001CE0: nop

    ovl_menu_battle_5A4(rdram, ctx);
        goto after_1;
    // 0x60001CE0: nop

    after_1:
    // 0x60001CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001CE8:
    // 0x60001CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001CEC: jr          $ra
    // 0x60001CF0: nop

    return;
    // 0x60001CF0: nop

    // 0x60001CF4: jr          $ra
    // 0x60001CF8: nop

    return;
    // 0x60001CF8: nop

;}
RECOMP_FUNC void ovl_menu_battle_1CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001CFC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x60001D00: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60001D04: jal         0x60000C28
    // 0x60001D08: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    ovl_menu_battle_C28(rdram, ctx);
        goto after_0;
    // 0x60001D08: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    after_0:
    // 0x60001D0C: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x60001D10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60001D14: beq         $a3, $at, L_60001FEC
    if (ctx->r7 == ctx->r1) {
        // 0x60001D18: sw          $v0, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r2;
            goto L_60001FEC;
    }
    // 0x60001D18: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x60001D1C: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x60001D20: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60001D24: lw          $a1, -0x3E88($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E88);
    // 0x60001D28: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60001D2C: and         $t6, $a3, $at
    ctx->r14 = ctx->r7 & ctx->r1;
    // 0x60001D30: beq         $a1, $zero, L_60001D50
    if (ctx->r5 == 0) {
        // 0x60001D34: or          $a3, $t6, $zero
        ctx->r7 = ctx->r14 | 0;
            goto L_60001D50;
    }
    // 0x60001D34: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x60001D38: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60001D3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001D40: jal         0x60000F34
    // 0x60001D44: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_1;
    // 0x60001D44: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    after_1:
    // 0x60001D48: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x60001D4C: nop

L_60001D50:
    // 0x60001D50: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x60001D54: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x60001D58: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x60001D5C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60001D60: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x60001D64: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x60001D68: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x60001D6C: lw          $a0, -0x446C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X446C);
    // 0x60001D70: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x60001D74: jal         0x60000118
    // 0x60001D78: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    ovl_menu_battle_118(rdram, ctx);
        goto after_2;
    // 0x60001D78: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_2:
    // 0x60001D7C: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x60001D80: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x60001D84: swc1        $f4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f4.u32l;
    // 0x60001D88: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x60001D8C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x60001D90: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x60001D94: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x60001D98: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60001D9C: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x60001DA0: lwc1        $f10, 0x18($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X18);
    // 0x60001DA4: nop

    // 0x60001DA8: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    // 0x60001DAC: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x60001DB0: nop

    // 0x60001DB4: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x60001DB8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x60001DBC: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x60001DC0: lw          $a0, -0x446C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X446C);
    // 0x60001DC4: jal         0x60000124
    // 0x60001DC8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    ovl_menu_battle_124(rdram, ctx);
        goto after_3;
    // 0x60001DC8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_3:
    // 0x60001DCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001DD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001DD4: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60001DD8: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x60001DDC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60001DE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001DE4: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60001DE8: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x60001DEC: div.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x60001DF0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x60001DF4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x60001DF8: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x60001DFC: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60001E00: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x60001E04: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x60001E08: lw          $a2, -0x446C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X446C);
    // 0x60001E0C: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x60001E10: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x60001E14: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x60001E18: div.s       $f14, $f16, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x60001E1C: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60001E20: bne         $a2, $at, L_60001E38
    if (ctx->r6 != ctx->r1) {
        // 0x60001E24: mov.s       $f18, $f14
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
            goto L_60001E38;
    }
    // 0x60001E24: mov.s       $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    ctx->f18.fl = ctx->f14.fl;
    // 0x60001E28: lui         $at, 0x443E
    ctx->r1 = S32(0X443E << 16);
    // 0x60001E2C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60001E30: b           L_60001E60
    // 0x60001E34: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
        goto L_60001E60;
    // 0x60001E34: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_60001E38:
    // 0x60001E38: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x60001E3C: bne         $a2, $at, L_60001E50
    if (ctx->r6 != ctx->r1) {
        // 0x60001E40: lui         $at, 0x4443
        ctx->r1 = S32(0X4443 << 16);
            goto L_60001E50;
    }
    // 0x60001E40: lui         $at, 0x4443
    ctx->r1 = S32(0X4443 << 16);
    // 0x60001E44: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60001E48: b           L_60001E60
    // 0x60001E4C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
        goto L_60001E60;
    // 0x60001E4C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_60001E50:
    // 0x60001E50: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x60001E54: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60001E58: nop

    // 0x60001E5C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_60001E60:
    // 0x60001E60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001E64: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60001E68: div.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
    // 0x60001E6C: addiu       $a1, $a1, -0x3E88
    ctx->r5 = ADD32(ctx->r5, -0X3E88);
    // 0x60001E70: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60001E74: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x60001E78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60001E7C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60001E80: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x60001E84: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x60001E88: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    // 0x60001E8C: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x60001E90: swc1        $f18, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f18.u32l;
    // 0x60001E94: div.s       $f4, $f16, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x60001E98: jal         0x60000F34
    // 0x60001E9C: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_4;
    // 0x60001E9C: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x60001EA0: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x60001EA4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001EA8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001EAC: neg.s       $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = -ctx->f12.fl;
    // 0x60001EB0: mul.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x60001EB4: lwc1        $f18, 0x50($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X50);
    // 0x60001EB8: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x60001EBC: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x60001EC0: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x60001EC4: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x60001EC8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x60001ECC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x60001ED0: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x60001ED4: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x60001ED8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x60001EDC: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x60001EE0: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x60001EE4: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x60001EE8: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x60001EEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001EF0: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x60001EF4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x60001EF8: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60001EFC: lw          $a1, -0x3E88($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E88);
    // 0x60001F00: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x60001F04: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x60001F08: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x60001F0C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60001F10: jal         0x60000F34
    // 0x60001F14: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_5;
    // 0x60001F14: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_5:
    // 0x60001F18: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60001F1C: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60001F20: cvt.d.s     $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.d = CVT_D_S(ctx->f14.fl);
    // 0x60001F24: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x60001F28: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x60001F2C: lw          $a1, -0x3E88($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E88);
    // 0x60001F30: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x60001F34: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x60001F38: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x60001F3C: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x60001F40: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x60001F44: jal         0x60000F34
    // 0x60001F48: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_6;
    // 0x60001F48: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_6:
    // 0x60001F4C: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x60001F50: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60001F54: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x60001F58: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x60001F5C: bne         $v0, $at, L_60001F94
    if (ctx->r2 != ctx->r1) {
        // 0x60001F60: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_60001F94;
    }
    // 0x60001F60: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x60001F64: bne         $t2, $at, L_60001F94
    if (ctx->r10 != ctx->r1) {
        // 0x60001F68: addiu       $a0, $zero, 0x26
        ctx->r4 = ADD32(0, 0X26);
            goto L_60001F94;
    }
    // 0x60001F68: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x60001F6C: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60001F70: lw          $a1, -0x3E88($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E88);
    // 0x60001F74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x60001F78: ori         $a3, $zero, 0x8877
    ctx->r7 = 0 | 0X8877;
    // 0x60001F7C: jal         0x60000DC0
    // 0x60001F80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_DC0(rdram, ctx);
        goto after_7;
    // 0x60001F80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x60001F84: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x60001F88: nop

    // 0x60001F8C: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x60001F90: nop

L_60001F94:
    // 0x60001F94: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x60001F98: sll         $t5, $v0, 5
    ctx->r13 = S32(ctx->r2 << 5);
    // 0x60001F9C: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x60001FA0: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60001FA4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x60001FA8: addiu       $v1, $v1, -0x5158
    ctx->r3 = ADD32(ctx->r3, -0X5158);
    // 0x60001FAC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x60001FB0: lw          $t4, 0x70($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X70);
    // 0x60001FB4: lw          $t8, -0x51F8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X51F8);
    // 0x60001FB8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60001FBC: addiu       $a0, $a0, -0x50F4
    ctx->r4 = ADD32(ctx->r4, -0X50F4);
    // 0x60001FC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60001FC4: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x60001FC8: jal         0x60001AA0
    // 0x60001FCC: sw          $t8, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r24;
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_8;
    // 0x60001FCC: sw          $t8, 0x64($v1)
    MEM_W(0X64, ctx->r3) = ctx->r24;
    after_8:
    // 0x60001FD0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60001FD4: lw          $a0, -0x50E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X50E8);
    // 0x60001FD8: jal         0x60000640
    // 0x60001FDC: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    ovl_menu_battle_640(rdram, ctx);
        goto after_9;
    // 0x60001FDC: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_9:
    // 0x60001FE0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x60001FE4: jal         0x600006AC
    // 0x60001FE8: nop

    ovl_menu_battle_6AC(rdram, ctx);
        goto after_10;
    // 0x60001FE8: nop

    after_10:
L_60001FEC:
    // 0x60001FEC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60001FF0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x60001FF4: jr          $ra
    // 0x60001FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60001FF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_menu_battle_1FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002000: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x60002004: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60002008: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x6000200C: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x60002010: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x60002014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002018: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x6000201C: addu        $a2, $t6, $t8
    ctx->r6 = ADD32(ctx->r14, ctx->r24);
    // 0x60002020: addiu       $a2, $a2, 0x3EB
    ctx->r6 = ADD32(ctx->r6, 0X3EB);
    // 0x60002024: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60002028: jal         0x60000F34
    // 0x6000202C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_0;
    // 0x6000202C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60002030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002038: jr          $ra
    // 0x6000203C: nop

    return;
    // 0x6000203C: nop

;}
RECOMP_FUNC void ovl_menu_battle_2040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002040: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60002044: addiu       $t7, $t7, -0x3E30
    ctx->r15 = ADD32(ctx->r15, -0X3E30);
    // 0x60002048: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x6000204C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60002050: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x60002054: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x60002058: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x6000205C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x60002060: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x60002064: beq         $a1, $t9, L_6000229C
    if (ctx->r5 == ctx->r25) {
        // 0x60002068: sw          $a1, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r5;
            goto L_6000229C;
    }
    // 0x60002068: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x6000206C: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60002070: addiu       $t2, $t2, -0x3FB8
    ctx->r10 = ADD32(ctx->r10, -0X3FB8);
    // 0x60002074: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x60002078: addu        $s0, $t6, $t2
    ctx->r16 = ADD32(ctx->r14, ctx->r10);
    // 0x6000207C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x60002080: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60002084: beq         $a1, $zero, L_6000209C
    if (ctx->r5 == 0) {
        // 0x60002088: lw          $t3, 0x5C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X5C);
            goto L_6000209C;
    }
    // 0x60002088: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x6000208C: jal         0x60000F34
    // 0x60002090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_0;
    // 0x60002090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x60002094: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x60002098: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
L_6000209C:
    // 0x6000209C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x600020A0: beq         $t3, $at, L_6000229C
    if (ctx->r11 == ctx->r1) {
        // 0x600020A4: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_6000229C;
    }
    // 0x600020A4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600020A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x600020AC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x600020B0: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x600020B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x600020B8: jal         0x60000F34
    // 0x600020BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_1;
    // 0x600020BC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_1:
    // 0x600020C0: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x600020C4: lui         $at, 0x4298
    ctx->r1 = S32(0X4298 << 16);
    // 0x600020C8: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x600020CC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600020D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600020D4: lui         $at, 0x42E4
    ctx->r1 = S32(0X42E4 << 16);
    // 0x600020D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600020DC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x600020E0: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x600020E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600020E8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600020EC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x600020F0: lwc1        $f10, -0x4128($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4128);
    // 0x600020F4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x600020F8: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x600020FC: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x60002100: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x60002104: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x60002108: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x6000210C: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x60002110: swc1        $f17, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(17 - 1) * 2];
    // 0x60002114: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x60002118: swc1        $f9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x6000211C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60002120: jal         0x60000F34
    // 0x60002124: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_2;
    // 0x60002124: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_2:
    // 0x60002128: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000212C: lwc1        $f18, -0x4124($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4124);
    // 0x60002130: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x60002134: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x60002138: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x6000213C: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x60002140: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x60002144: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x60002148: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x6000214C: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x60002150: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x60002154: jal         0x60000F34
    // 0x60002158: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_3;
    // 0x60002158: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_3:
    // 0x6000215C: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x60002160: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002164: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x60002168: addiu       $a3, $zero, 0x544
    ctx->r7 = ADD32(0, 0X544);
    // 0x6000216C: jal         0x60000F34
    // 0x60002170: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_4;
    // 0x60002170: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x60002174: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x60002178: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x6000217C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x60002180: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x60002184: jal         0x60000F34
    // 0x60002188: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_5;
    // 0x60002188: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x6000218C: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x60002190: addiu       $at, $zero, 0x542
    ctx->r1 = ADD32(0, 0X542);
    // 0x60002194: bne         $t5, $at, L_60002274
    if (ctx->r13 != ctx->r1) {
        // 0x60002198: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_60002274;
    }
    // 0x60002198: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x6000219C: jal         0x60000C1C
    // 0x600021A0: nop

    ovl_menu_battle_C1C(rdram, ctx);
        goto after_6;
    // 0x600021A0: nop

    after_6:
    // 0x600021A4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600021A8: nop

    // 0x600021AC: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x600021B0: bne         $t7, $zero, L_60002274
    if (ctx->r15 != 0) {
        // 0x600021B4: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_60002274;
    }
    // 0x600021B4: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x600021B8: jal         0x60000C28
    // 0x600021BC: nop

    ovl_menu_battle_C28(rdram, ctx);
        goto after_7;
    // 0x600021BC: nop

    after_7:
    // 0x600021C0: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x600021C4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x600021C8: sll         $t8, $v1, 4
    ctx->r24 = S32(ctx->r3 << 4);
    // 0x600021CC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x600021D0: lw          $t1, 0x54($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X54);
    // 0x600021D4: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x600021D8: blez        $t1, L_60002208
    if (SIGNED(ctx->r9) <= 0) {
        // 0x600021DC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_60002208;
    }
    // 0x600021DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600021E0: addu        $t2, $v0, $t8
    ctx->r10 = ADD32(ctx->r2, ctx->r24);
    // 0x600021E4: lw          $a2, 0x54($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X54);
    // 0x600021E8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x600021EC: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x600021F0: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x600021F4: jal         0x60001FFC
    // 0x600021F8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    ovl_menu_battle_1FFC(rdram, ctx);
        goto after_8;
    // 0x600021F8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    after_8:
    // 0x600021FC: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x60002200: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x60002204: nop

L_60002208:
    // 0x60002208: addu        $t0, $a3, $v1
    ctx->r8 = ADD32(ctx->r7, ctx->r3);
    // 0x6000220C: lw          $v0, 0x58($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X58);
    // 0x60002210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002214: blez        $v0, L_60002230
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60002218: addiu       $a2, $v0, -0x1
        ctx->r6 = ADD32(ctx->r2, -0X1);
            goto L_60002230;
    }
    // 0x60002218: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    // 0x6000221C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002220: jal         0x60001FFC
    // 0x60002224: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    ovl_menu_battle_1FFC(rdram, ctx);
        goto after_9;
    // 0x60002224: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_9:
    // 0x60002228: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x6000222C: nop

L_60002230:
    // 0x60002230: lw          $v0, 0x5C($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X5C);
    // 0x60002234: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60002238: blez        $v0, L_60002254
    if (SIGNED(ctx->r2) <= 0) {
        // 0x6000223C: addiu       $a2, $v0, -0x1
        ctx->r6 = ADD32(ctx->r2, -0X1);
            goto L_60002254;
    }
    // 0x6000223C: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    // 0x60002240: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002244: jal         0x60001FFC
    // 0x60002248: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    ovl_menu_battle_1FFC(rdram, ctx);
        goto after_10;
    // 0x60002248: sw          $t0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r8;
    after_10:
    // 0x6000224C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x60002250: nop

L_60002254:
    // 0x60002254: lw          $v0, 0x60($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X60);
    // 0x60002258: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000225C: blez        $v0, L_60002274
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60002260: lw          $t3, 0x58($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X58);
            goto L_60002274;
    }
    // 0x60002260: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x60002264: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002268: jal         0x60001FFC
    // 0x6000226C: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    ovl_menu_battle_1FFC(rdram, ctx);
        goto after_11;
    // 0x6000226C: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    after_11:
    // 0x60002270: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
L_60002274:
    // 0x60002274: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x60002278: blez        $t3, L_6000229C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x6000227C: addiu       $at, $zero, 0x542
        ctx->r1 = ADD32(0, 0X542);
            goto L_6000229C;
    }
    // 0x6000227C: addiu       $at, $zero, 0x542
    ctx->r1 = ADD32(0, 0X542);
    // 0x60002280: bne         $t4, $at, L_6000229C
    if (ctx->r12 != ctx->r1) {
        // 0x60002284: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_6000229C;
    }
    // 0x60002284: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002288: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x6000228C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x60002290: addiu       $a3, $t3, 0x5BB
    ctx->r7 = ADD32(ctx->r11, 0X5BB);
    // 0x60002294: jal         0x60000F34
    // 0x60002298: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_12;
    // 0x60002298: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
L_6000229C:
    // 0x6000229C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x600022A0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x600022A4: jr          $ra
    // 0x600022A8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x600022A8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_menu_battle_22AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600022AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x600022B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600022B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600022B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600022BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600022C0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x600022C4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600022C8: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_600022CC:
    // 0x600022CC: jal         0x60000B2C
    // 0x600022D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_battle_B2C(rdram, ctx);
        goto after_0;
    // 0x600022D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x600022D4: beq         $v0, $zero, L_600022E8
    if (ctx->r2 == 0) {
        // 0x600022D8: nop
    
            goto L_600022E8;
    }
    // 0x600022D8: nop

    // 0x600022DC: jal         0x60000B20
    // 0x600022E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_battle_B20(rdram, ctx);
        goto after_1;
    // 0x600022E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x600022E4: or          $s1, $s1, $v0
    ctx->r17 = ctx->r17 | ctx->r2;
L_600022E8:
    // 0x600022E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600022EC: bne         $s0, $s2, L_600022CC
    if (ctx->r16 != ctx->r18) {
        // 0x600022F0: nop
    
            goto L_600022CC;
    }
    // 0x600022F0: nop

    // 0x600022F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600022F8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x600022FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60002300: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002304: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60002308: jr          $ra
    // 0x6000230C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x6000230C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_menu_battle_2310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002310: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60002314: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60002318: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x6000231C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60002320: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60002324: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002328: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x6000232C: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_60002330:
    // 0x60002330: jal         0x60000B2C
    // 0x60002334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_battle_B2C(rdram, ctx);
        goto after_0;
    // 0x60002334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x60002338: beq         $v0, $zero, L_6000234C
    if (ctx->r2 == 0) {
        // 0x6000233C: nop
    
            goto L_6000234C;
    }
    // 0x6000233C: nop

    // 0x60002340: jal         0x60000A9C
    // 0x60002344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_battle_A9C(rdram, ctx);
        goto after_1;
    // 0x60002344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x60002348: or          $s1, $s1, $v0
    ctx->r17 = ctx->r17 | ctx->r2;
L_6000234C:
    // 0x6000234C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002350: bne         $s0, $s2, L_60002330
    if (ctx->r16 != ctx->r18) {
        // 0x60002354: nop
    
            goto L_60002330;
    }
    // 0x60002354: nop

    // 0x60002358: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x6000235C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x60002360: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60002364: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002368: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x6000236C: jr          $ra
    // 0x60002370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60002370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_menu_battle_2374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002374: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60002378: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x6000237C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60002380: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60002384: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60002388: lui         $s4, 0x6001
    ctx->r20 = S32(0X6001 << 16);
    // 0x6000238C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x60002390: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x60002394: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x60002398: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x6000239C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x600023A0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x600023A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x600023A8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x600023AC: addiu       $s4, $s4, -0x4898
    ctx->r20 = ADD32(ctx->r20, -0X4898);
    // 0x600023B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x600023B4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
L_600023B8:
    // 0x600023B8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x600023BC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600023C0: bne         $t6, $zero, L_600023E0
    if (ctx->r14 != 0) {
        // 0x600023C4: addiu       $a1, $s1, 0xF
        ctx->r5 = ADD32(ctx->r17, 0XF);
            goto L_600023E0;
    }
    // 0x600023C4: addiu       $a1, $s1, 0xF
    ctx->r5 = ADD32(ctx->r17, 0XF);
    // 0x600023C8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600023CC: addiu       $a1, $s1, 0xF
    ctx->r5 = ADD32(ctx->r17, 0XF);
    // 0x600023D0: jal         0x60001C84
    // 0x600023D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_0;
    // 0x600023D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x600023D8: b           L_600023EC
    // 0x600023DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_600023EC;
    // 0x600023DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_600023E0:
    // 0x600023E0: jal         0x60001C84
    // 0x600023E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_1;
    // 0x600023E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x600023E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_600023EC:
    // 0x600023EC: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x600023F0: bne         $at, $zero, L_600023B8
    if (ctx->r1 != 0) {
        // 0x600023F4: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_600023B8;
    }
    // 0x600023F4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x600023F8: lui         $s3, 0x6001
    ctx->r19 = S32(0X6001 << 16);
    // 0x600023FC: addiu       $s3, $s3, -0x48A8
    ctx->r19 = ADD32(ctx->r19, -0X48A8);
    // 0x60002400: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002404: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x60002408: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x6000240C: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x60002410: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x60002414: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
L_60002418:
    // 0x60002418: lw          $a2, 0x0($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X0);
    // 0x6000241C: nop

    // 0x60002420: beq         $a2, $zero, L_60002448
    if (ctx->r6 == 0) {
        // 0x60002424: or          $v1, $a2, $zero
        ctx->r3 = ctx->r6 | 0;
            goto L_60002448;
    }
    // 0x60002424: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x60002428: beq         $v1, $s7, L_60002498
    if (ctx->r3 == ctx->r23) {
        // 0x6000242C: nop
    
            goto L_60002498;
    }
    // 0x6000242C: nop

    // 0x60002430: beq         $v1, $fp, L_600024E8
    if (ctx->r3 == ctx->r30) {
        // 0x60002434: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_600024E8;
    }
    // 0x60002434: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60002438: beq         $v1, $at, L_600024E8
    if (ctx->r3 == ctx->r1) {
        // 0x6000243C: nop
    
            goto L_600024E8;
    }
    // 0x6000243C: nop

    // 0x60002440: b           L_60002534
    // 0x60002444: nop

        goto L_60002534;
    // 0x60002444: nop

L_60002448:
    // 0x60002448: multu       $s1, $s5
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x6000244C: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x60002450: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x60002454: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x60002458: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x6000245C: mflo        $t7
    ctx->r15 = lo;
    // 0x60002460: addu        $v0, $s4, $t7
    ctx->r2 = ADD32(ctx->r20, ctx->r15);
    // 0x60002464: lw          $t8, 0xDC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XDC);
    // 0x60002468: addiu       $a0, $v0, 0xDC
    ctx->r4 = ADD32(ctx->r2, 0XDC);
    // 0x6000246C: beq         $t8, $t9, L_60002534
    if (ctx->r24 == ctx->r25) {
        // 0x60002470: nop
    
            goto L_60002534;
    }
    // 0x60002470: nop

    // 0x60002474: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x60002478: lw          $s0, 0xE8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XE8);
    // 0x6000247C: jal         0x60001AA0
    // 0x60002480: sw          $t2, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r10;
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_2;
    // 0x60002480: sw          $t2, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r10;
    after_2:
    // 0x60002484: jal         0x600006AC
    // 0x60002488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_battle_6AC(rdram, ctx);
        goto after_3;
    // 0x60002488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x6000248C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x60002490: b           L_60002534
    // 0x60002494: nop

        goto L_60002534;
    // 0x60002494: nop

L_60002498:
    // 0x60002498: multu       $s1, $s5
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x6000249C: lw          $t5, 0x4($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X4);
    // 0x600024A0: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x600024A4: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x600024A8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x600024AC: mflo        $t3
    ctx->r11 = lo;
    // 0x600024B0: addu        $v0, $s4, $t3
    ctx->r2 = ADD32(ctx->r20, ctx->r11);
    // 0x600024B4: lw          $t4, 0xDC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XDC);
    // 0x600024B8: addiu       $a0, $v0, 0xDC
    ctx->r4 = ADD32(ctx->r2, 0XDC);
    // 0x600024BC: beq         $t4, $t5, L_60002534
    if (ctx->r12 == ctx->r13) {
        // 0x600024C0: nop
    
            goto L_60002534;
    }
    // 0x600024C0: nop

    // 0x600024C4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x600024C8: lw          $s0, 0xE8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XE8);
    // 0x600024CC: jal         0x60001AA0
    // 0x600024D0: sw          $t8, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r24;
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_4;
    // 0x600024D0: sw          $t8, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r24;
    after_4:
    // 0x600024D4: jal         0x600006AC
    // 0x600024D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_battle_6AC(rdram, ctx);
        goto after_5;
    // 0x600024D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x600024DC: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x600024E0: b           L_60002534
    // 0x600024E4: nop

        goto L_60002534;
    // 0x600024E4: nop

L_600024E8:
    // 0x600024E8: multu       $s1, $s5
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600024EC: lw          $t1, 0x8($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X8);
    // 0x600024F0: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x600024F4: addu        $t3, $s3, $t2
    ctx->r11 = ADD32(ctx->r19, ctx->r10);
    // 0x600024F8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x600024FC: mflo        $t9
    ctx->r25 = lo;
    // 0x60002500: addu        $v0, $s4, $t9
    ctx->r2 = ADD32(ctx->r20, ctx->r25);
    // 0x60002504: lw          $t0, 0xDC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XDC);
    // 0x60002508: addiu       $a0, $v0, 0xDC
    ctx->r4 = ADD32(ctx->r2, 0XDC);
    // 0x6000250C: beq         $t0, $t1, L_60002534
    if (ctx->r8 == ctx->r9) {
        // 0x60002510: nop
    
            goto L_60002534;
    }
    // 0x60002510: nop

    // 0x60002514: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x60002518: lw          $s0, 0xE8($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XE8);
    // 0x6000251C: jal         0x60001AA0
    // 0x60002520: sw          $t4, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r12;
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_6;
    // 0x60002520: sw          $t4, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r12;
    after_6:
    // 0x60002524: jal         0x600006AC
    // 0x60002528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_menu_battle_6AC(rdram, ctx);
        goto after_7;
    // 0x60002528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x6000252C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x60002530: nop

L_60002534:
    // 0x60002534: beq         $v1, $s7, L_60002554
    if (ctx->r3 == ctx->r23) {
        // 0x60002538: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_60002554;
    }
    // 0x60002538: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x6000253C: beq         $v1, $fp, L_60002564
    if (ctx->r3 == ctx->r30) {
        // 0x60002540: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60002564;
    }
    // 0x60002540: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60002544: beq         $v1, $at, L_60002564
    if (ctx->r3 == ctx->r1) {
        // 0x60002548: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_60002564;
    }
    // 0x60002548: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x6000254C: b           L_60002584
    // 0x60002550: nop

        goto L_60002584;
    // 0x60002550: nop

L_60002554:
    // 0x60002554: jal         0x60002040
    // 0x60002558: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_8;
    // 0x60002558: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    after_8:
    // 0x6000255C: b           L_60002590
    // 0x60002560: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60002590;
    // 0x60002560: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002564:
    // 0x60002564: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x60002568: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x6000256C: addu        $t6, $t5, $s6
    ctx->r14 = ADD32(ctx->r13, ctx->r22);
    // 0x60002570: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x60002574: jal         0x60002040
    // 0x60002578: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_9;
    // 0x60002578: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    after_9:
    // 0x6000257C: b           L_60002590
    // 0x60002580: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_60002590;
    // 0x60002580: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002584:
    // 0x60002584: jal         0x60002040
    // 0x60002588: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_10;
    // 0x60002588: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_10:
    // 0x6000258C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_60002590:
    // 0x60002590: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60002594: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x60002598: bne         $s1, $at, L_60002418
    if (ctx->r17 != ctx->r1) {
        // 0x6000259C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_60002418;
    }
    // 0x6000259C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x600025A0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x600025A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600025A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x600025AC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x600025B0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x600025B4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x600025B8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x600025BC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x600025C0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x600025C4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x600025C8: jr          $ra
    // 0x600025CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x600025CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_menu_battle_25D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600025D0: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x600025D4: lw          $t6, -0x4318($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4318);
    // 0x600025D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x600025DC: bne         $a0, $t6, L_600025EC
    if (ctx->r4 != ctx->r14) {
        // 0x600025E0: lui         $v0, 0x6001
        ctx->r2 = S32(0X6001 << 16);
            goto L_600025EC;
    }
    // 0x600025E0: lui         $v0, 0x6001
    ctx->r2 = S32(0X6001 << 16);
    // 0x600025E4: jr          $ra
    // 0x600025E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x600025E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600025EC:
    // 0x600025EC: addiu       $v0, $v0, -0x4314
    ctx->r2 = ADD32(ctx->r2, -0X4314);
    // 0x600025F0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_600025F4:
    // 0x600025F4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x600025F8: nop

    // 0x600025FC: bne         $a0, $t7, L_6000260C
    if (ctx->r4 != ctx->r15) {
        // 0x60002600: nop
    
            goto L_6000260C;
    }
    // 0x60002600: nop

    // 0x60002604: jr          $ra
    // 0x60002608: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x60002608: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_6000260C:
    // 0x6000260C: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x60002610: nop

    // 0x60002614: bne         $a0, $t8, L_60002624
    if (ctx->r4 != ctx->r24) {
        // 0x60002618: nop
    
            goto L_60002624;
    }
    // 0x60002618: nop

    // 0x6000261C: jr          $ra
    // 0x60002620: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x60002620: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_60002624:
    // 0x60002624: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x60002628: nop

    // 0x6000262C: bne         $a0, $t9, L_6000263C
    if (ctx->r4 != ctx->r25) {
        // 0x60002630: nop
    
            goto L_6000263C;
    }
    // 0x60002630: nop

    // 0x60002634: jr          $ra
    // 0x60002638: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x60002638: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
L_6000263C:
    // 0x6000263C: lw          $t0, 0xC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XC);
    // 0x60002640: nop

    // 0x60002644: bne         $a0, $t0, L_60002654
    if (ctx->r4 != ctx->r8) {
        // 0x60002648: nop
    
            goto L_60002654;
    }
    // 0x60002648: nop

    // 0x6000264C: jr          $ra
    // 0x60002650: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x60002650: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_60002654:
    // 0x60002654: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60002658: bne         $v1, $a1, L_600025F4
    if (ctx->r3 != ctx->r5) {
        // 0x6000265C: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_600025F4;
    }
    // 0x6000265C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x60002660: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x60002664: jr          $ra
    // 0x60002668: nop

    return;
    // 0x60002668: nop

    // 0x6000266C: jr          $ra
    // 0x60002670: nop

    return;
    // 0x60002670: nop

;}
RECOMP_FUNC void ovl_menu_battle_2674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002674: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60002678: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x6000267C: addiu       $s2, $zero, 0x1C
    ctx->r18 = ADD32(0, 0X1C);
    // 0x60002680: multu       $a1, $s2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60002684: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60002688: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x6000268C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x60002690: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x60002694: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x60002698: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x6000269C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x600026A0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x600026A4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x600026A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600026AC: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x600026B0: mflo        $t6
    ctx->r14 = lo;
    // 0x600026B4: addu        $v0, $s1, $t6
    ctx->r2 = ADD32(ctx->r17, ctx->r14);
    // 0x600026B8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x600026BC: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x600026C0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x600026C4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x600026C8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600026CC: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x600026D0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x600026D4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x600026D8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x600026DC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x600026E0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x600026E4: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x600026E8: jal         0x6000055C
    // 0x600026EC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    ovl_menu_battle_55C(rdram, ctx);
        goto after_0;
    // 0x600026EC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    after_0:
    // 0x600026F0: jal         0x6000085C
    // 0x600026F4: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_1;
    // 0x600026F4: nop

    after_1:
    // 0x600026F8: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x600026FC: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x60002700: addiu       $fp, $zero, 0x3
    ctx->r30 = ADD32(0, 0X3);
    // 0x60002704: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
L_60002708:
    // 0x60002708: jal         0x600022AC
    // 0x6000270C: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_2;
    // 0x6000270C: nop

    after_2:
    // 0x60002710: andi        $t9, $v0, 0x8000
    ctx->r25 = ctx->r2 & 0X8000;
    // 0x60002714: bne         $t9, $zero, L_60002944
    if (ctx->r25 != 0) {
        // 0x60002718: andi        $t0, $v0, 0x4000
        ctx->r8 = ctx->r2 & 0X4000;
            goto L_60002944;
    }
    // 0x60002718: andi        $t0, $v0, 0x4000
    ctx->r8 = ctx->r2 & 0X4000;
    // 0x6000271C: beq         $t0, $zero, L_60002740
    if (ctx->r8 == 0) {
        // 0x60002720: andi        $t1, $v0, 0x200
        ctx->r9 = ctx->r2 & 0X200;
            goto L_60002740;
    }
    // 0x60002720: andi        $t1, $v0, 0x200
    ctx->r9 = ctx->r2 & 0X200;
    // 0x60002724: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x60002728: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x6000272C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60002730: jal         0x60002040
    // 0x60002734: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_3;
    // 0x60002734: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    after_3:
    // 0x60002738: b           L_60002948
    // 0x6000273C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_60002948;
    // 0x6000273C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_60002740:
    // 0x60002740: beq         $t1, $zero, L_600027B4
    if (ctx->r9 == 0) {
        // 0x60002744: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_600027B4;
    }
    // 0x60002744: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x60002748: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x6000274C: mflo        $t2
    ctx->r10 = lo;
    // 0x60002750: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x60002754: lw          $v1, 0x10($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X10);
    // 0x60002758: nop

    // 0x6000275C: beq         $s3, $v1, L_600027B4
    if (ctx->r19 == ctx->r3) {
        // 0x60002760: nop
    
            goto L_600027B4;
    }
    // 0x60002760: nop

    // 0x60002764: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60002768: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x6000276C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002770: mflo        $t4
    ctx->r12 = lo;
    // 0x60002774: addu        $v0, $s1, $t4
    ctx->r2 = ADD32(ctx->r17, ctx->r12);
    // 0x60002778: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x6000277C: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x60002780: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x60002784: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x60002788: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x6000278C: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60002790: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60002794: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x60002798: jal         0x6000055C
    // 0x6000279C: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_4;
    // 0x6000279C: nop

    after_4:
    // 0x600027A0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x600027A4: jal         0x60002040
    // 0x600027A8: addiu       $a1, $s0, 0x5EB
    ctx->r5 = ADD32(ctx->r16, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_5;
    // 0x600027A8: addiu       $a1, $s0, 0x5EB
    ctx->r5 = ADD32(ctx->r16, 0X5EB);
    after_5:
    // 0x600027AC: b           L_60002924
    // 0x600027B0: xor         $v0, $s6, $s0
    ctx->r2 = ctx->r22 ^ ctx->r16;
        goto L_60002924;
    // 0x600027B0: xor         $v0, $s6, $s0
    ctx->r2 = ctx->r22 ^ ctx->r16;
L_600027B4:
    // 0x600027B4: beq         $t7, $zero, L_60002840
    if (ctx->r15 == 0) {
        // 0x600027B8: andi        $t5, $v0, 0x800
        ctx->r13 = ctx->r2 & 0X800;
            goto L_60002840;
    }
    // 0x600027B8: andi        $t5, $v0, 0x800
    ctx->r13 = ctx->r2 & 0X800;
    // 0x600027BC: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600027C0: mflo        $t8
    ctx->r24 = lo;
    // 0x600027C4: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x600027C8: lw          $v1, 0x14($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X14);
    // 0x600027CC: nop

    // 0x600027D0: beq         $s3, $v1, L_60002840
    if (ctx->r19 == ctx->r3) {
        // 0x600027D4: nop
    
            goto L_60002840;
    }
    // 0x600027D4: nop

    // 0x600027D8: multu       $s7, $fp
    result = U64(U32(ctx->r23)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600027DC: mflo        $t0
    ctx->r8 = lo;
    // 0x600027E0: addiu       $t1, $t0, 0x3
    ctx->r9 = ADD32(ctx->r8, 0X3);
    // 0x600027E4: slt         $at, $v1, $t1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x600027E8: beq         $at, $zero, L_60002840
    if (ctx->r1 == 0) {
        // 0x600027EC: nop
    
            goto L_60002840;
    }
    // 0x600027EC: nop

    // 0x600027F0: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600027F4: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x600027F8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600027FC: mflo        $t2
    ctx->r10 = lo;
    // 0x60002800: addu        $v0, $s1, $t2
    ctx->r2 = ADD32(ctx->r17, ctx->r10);
    // 0x60002804: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x60002808: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x6000280C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x60002810: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x60002814: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60002818: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x6000281C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x60002820: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x60002824: jal         0x6000055C
    // 0x60002828: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_6;
    // 0x60002828: nop

    after_6:
    // 0x6000282C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60002830: jal         0x60002040
    // 0x60002834: addiu       $a1, $s0, 0x5EB
    ctx->r5 = ADD32(ctx->r16, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_7;
    // 0x60002834: addiu       $a1, $s0, 0x5EB
    ctx->r5 = ADD32(ctx->r16, 0X5EB);
    after_7:
    // 0x60002838: b           L_60002924
    // 0x6000283C: xor         $v0, $s6, $s0
    ctx->r2 = ctx->r22 ^ ctx->r16;
        goto L_60002924;
    // 0x6000283C: xor         $v0, $s6, $s0
    ctx->r2 = ctx->r22 ^ ctx->r16;
L_60002840:
    // 0x60002840: beq         $t5, $zero, L_600028B4
    if (ctx->r13 == 0) {
        // 0x60002844: andi        $t1, $v0, 0x400
        ctx->r9 = ctx->r2 & 0X400;
            goto L_600028B4;
    }
    // 0x60002844: andi        $t1, $v0, 0x400
    ctx->r9 = ctx->r2 & 0X400;
    // 0x60002848: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x6000284C: mflo        $t6
    ctx->r14 = lo;
    // 0x60002850: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x60002854: lw          $v1, 0x8($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X8);
    // 0x60002858: nop

    // 0x6000285C: beq         $s3, $v1, L_600028B4
    if (ctx->r19 == ctx->r3) {
        // 0x60002860: nop
    
            goto L_600028B4;
    }
    // 0x60002860: nop

    // 0x60002864: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60002868: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x6000286C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60002870: mflo        $t8
    ctx->r24 = lo;
    // 0x60002874: addu        $v0, $s1, $t8
    ctx->r2 = ADD32(ctx->r17, ctx->r24);
    // 0x60002878: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x6000287C: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x60002880: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x60002884: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x60002888: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x6000288C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60002890: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60002894: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60002898: jal         0x6000055C
    // 0x6000289C: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_8;
    // 0x6000289C: nop

    after_8:
    // 0x600028A0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x600028A4: jal         0x60002040
    // 0x600028A8: addiu       $a1, $s0, 0x5EB
    ctx->r5 = ADD32(ctx->r16, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_9;
    // 0x600028A8: addiu       $a1, $s0, 0x5EB
    ctx->r5 = ADD32(ctx->r16, 0X5EB);
    after_9:
    // 0x600028AC: b           L_60002924
    // 0x600028B0: xor         $v0, $s6, $s0
    ctx->r2 = ctx->r22 ^ ctx->r16;
        goto L_60002924;
    // 0x600028B0: xor         $v0, $s6, $s0
    ctx->r2 = ctx->r22 ^ ctx->r16;
L_600028B4:
    // 0x600028B4: beq         $t1, $zero, L_60002924
    if (ctx->r9 == 0) {
        // 0x600028B8: xor         $v0, $s6, $s0
        ctx->r2 = ctx->r22 ^ ctx->r16;
            goto L_60002924;
    }
    // 0x600028B8: xor         $v0, $s6, $s0
    ctx->r2 = ctx->r22 ^ ctx->r16;
    // 0x600028BC: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600028C0: mflo        $t2
    ctx->r10 = lo;
    // 0x600028C4: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x600028C8: lw          $v1, 0xC($t3)
    ctx->r3 = MEM_W(ctx->r11, 0XC);
    // 0x600028CC: nop

    // 0x600028D0: beq         $s3, $v1, L_60002924
    if (ctx->r19 == ctx->r3) {
        // 0x600028D4: xor         $v0, $s6, $s0
        ctx->r2 = ctx->r22 ^ ctx->r16;
            goto L_60002924;
    }
    // 0x600028D4: xor         $v0, $s6, $s0
    ctx->r2 = ctx->r22 ^ ctx->r16;
    // 0x600028D8: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600028DC: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x600028E0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600028E4: mflo        $t4
    ctx->r12 = lo;
    // 0x600028E8: addu        $v0, $s1, $t4
    ctx->r2 = ADD32(ctx->r17, ctx->r12);
    // 0x600028EC: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x600028F0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x600028F4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x600028F8: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x600028FC: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60002900: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60002904: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x60002908: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x6000290C: jal         0x6000055C
    // 0x60002910: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_10;
    // 0x60002910: nop

    after_10:
    // 0x60002914: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60002918: jal         0x60002040
    // 0x6000291C: addiu       $a1, $s0, 0x5EB
    ctx->r5 = ADD32(ctx->r16, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_11;
    // 0x6000291C: addiu       $a1, $s0, 0x5EB
    ctx->r5 = ADD32(ctx->r16, 0X5EB);
    after_11:
    // 0x60002920: xor         $v0, $s6, $s0
    ctx->r2 = ctx->r22 ^ ctx->r16;
L_60002924:
    // 0x60002924: beq         $v0, $zero, L_60002934
    if (ctx->r2 == 0) {
        // 0x60002928: or          $s6, $s0, $zero
        ctx->r22 = ctx->r16 | 0;
            goto L_60002934;
    }
    // 0x60002928: or          $s6, $s0, $zero
    ctx->r22 = ctx->r16 | 0;
    // 0x6000292C: jal         0x60000244
    // 0x60002930: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_12;
    // 0x60002930: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_12:
L_60002934:
    // 0x60002934: jal         0x6000085C
    // 0x60002938: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_13;
    // 0x60002938: nop

    after_13:
    // 0x6000293C: b           L_60002708
    // 0x60002940: nop

        goto L_60002708;
    // 0x60002940: nop

L_60002944:
    // 0x60002944: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_60002948:
    // 0x60002948: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x6000294C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002950: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60002954: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60002958: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x6000295C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60002960: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x60002964: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x60002968: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x6000296C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x60002970: jr          $ra
    // 0x60002974: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60002974: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_menu_battle_2978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002978: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x6000297C: swc1        $f28, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f28.u32l;
    // 0x60002980: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60002984: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x60002988: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000298C: swc1        $f30, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f30.u32l;
    // 0x60002990: swc1        $f27, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002994: swc1        $f26, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f26.u32l;
    // 0x60002998: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x6000299C: lwc1        $f26, -0x411C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X411C);
    // 0x600029A0: lwc1        $f27, -0x4120($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X4120);
    // 0x600029A4: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x600029A8: swc1        $f24, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f24.u32l;
    // 0x600029AC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600029B0: swc1        $f23, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600029B4: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x600029B8: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600029BC: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x600029C0: lui         $s0, 0x6001
    ctx->r16 = S32(0X6001 << 16);
    // 0x600029C4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x600029C8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x600029CC: swc1        $f31, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x600029D0: swc1        $f29, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x600029D4: swc1        $f25, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600029D8: addiu       $s0, $s0, -0x3FA8
    ctx->r16 = ADD32(ctx->r16, -0X3FA8);
    // 0x600029DC: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    // 0x600029E0: cvt.d.s     $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); 
    ctx->f22.d = CVT_D_S(ctx->f30.fl);
    // 0x600029E4: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
L_600029E8:
    // 0x600029E8: mul.d       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f26.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f26.d);
    // 0x600029EC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x600029F0: mfc1        $a2, $f23
    ctx->r6 = (int32_t)ctx->f_odd[(23 - 1) * 2];
    // 0x600029F4: mfc1        $a3, $f22
    ctx->r7 = (int32_t)ctx->f22.u32l;
    // 0x600029F8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x600029FC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x60002A00: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x60002A04: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60002A08: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60002A0C: jal         0x60000F34
    // 0x60002A10: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_0;
    // 0x60002A10: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_0:
    // 0x60002A14: add.s       $f0, $f20, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f28.fl;
    // 0x60002A18: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x60002A1C: nop

    // 0x60002A20: bc1f        L_60002A30
    if (!c1cs) {
        // 0x60002A24: nop
    
            goto L_60002A30;
    }
    // 0x60002A24: nop

    // 0x60002A28: b           L_60002A50
    // 0x60002A2C: sub.s       $f20, $f0, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f24.fl;
        goto L_60002A50;
    // 0x60002A2C: sub.s       $f20, $f0, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f24.fl;
L_60002A30:
    // 0x60002A30: c.lt.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl < ctx->f30.fl;
    // 0x60002A34: nop

    // 0x60002A38: bc1f        L_60002A48
    if (!c1cs) {
        // 0x60002A3C: nop
    
            goto L_60002A48;
    }
    // 0x60002A3C: nop

    // 0x60002A40: b           L_60002A4C
    // 0x60002A44: add.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f24.fl;
        goto L_60002A4C;
    // 0x60002A44: add.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f24.fl;
L_60002A48:
    // 0x60002A48: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60002A4C:
    // 0x60002A4C: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
L_60002A50:
    // 0x60002A50: jal         0x600009D0
    // 0x60002A54: nop

    ovl_menu_battle_9D0(rdram, ctx);
        goto after_1;
    // 0x60002A54: nop

    after_1:
    // 0x60002A58: b           L_600029E8
    // 0x60002A5C: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
        goto L_600029E8;
    // 0x60002A5C: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x60002A60: nop

    // 0x60002A64: nop

    // 0x60002A68: nop

    // 0x60002A6C: nop

    // 0x60002A70: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x60002A74: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002A78: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60002A7C: lwc1        $f23, 0x38($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60002A80: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60002A84: lwc1        $f25, 0x40($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60002A88: lwc1        $f24, 0x44($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60002A8C: lwc1        $f27, 0x48($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x60002A90: lwc1        $f26, 0x4C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x60002A94: lwc1        $f29, 0x50($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x60002A98: lwc1        $f28, 0x54($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X54);
    // 0x60002A9C: lwc1        $f31, 0x58($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x60002AA0: lwc1        $f30, 0x5C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60002AA4: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x60002AA8: jr          $ra
    // 0x60002AAC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x60002AAC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_menu_battle_2AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002AB0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x60002AB4: swc1        $f30, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f30.u32l;
    // 0x60002AB8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x60002ABC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x60002AC0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002AC4: swc1        $f29, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60002AC8: swc1        $f28, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f28.u32l;
    // 0x60002ACC: lwc1        $f28, -0x4114($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X4114);
    // 0x60002AD0: lwc1        $f29, -0x4118($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, -0X4118);
    // 0x60002AD4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002AD8: swc1        $f27, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002ADC: swc1        $f26, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f26.u32l;
    // 0x60002AE0: lwc1        $f26, -0x410C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X410C);
    // 0x60002AE4: lwc1        $f27, -0x4110($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X4110);
    // 0x60002AE8: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x60002AEC: swc1        $f24, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f24.u32l;
    // 0x60002AF0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60002AF4: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x60002AF8: lui         $s1, 0x6001
    ctx->r17 = S32(0X6001 << 16);
    // 0x60002AFC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60002B00: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x60002B04: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x60002B08: swc1        $f31, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60002B0C: swc1        $f25, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60002B10: swc1        $f23, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60002B14: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x60002B18: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002B1C: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x60002B20: addiu       $s1, $s1, -0x3FA8
    ctx->r17 = ADD32(ctx->r17, -0X3FA8);
    // 0x60002B24: addiu       $s2, $zero, 0x1E
    ctx->r18 = ADD32(0, 0X1E);
    // 0x60002B28: lui         $at, 0x42D8
    ctx->r1 = S32(0X42D8 << 16);
L_60002B2C:
    // 0x60002B2C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60002B30: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60002B34:
    // 0x60002B34: cvt.d.s     $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f4.d = CVT_D_S(ctx->f22.fl);
    // 0x60002B38: mul.d       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f28.d);
    // 0x60002B3C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002B40: lw          $a2, -0x4108($at)
    ctx->r6 = MEM_W(ctx->r1, -0X4108);
    // 0x60002B44: lw          $a3, -0x4104($at)
    ctx->r7 = MEM_W(ctx->r1, -0X4104);
    // 0x60002B48: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x60002B4C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x60002B50: swc1        $f7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x60002B54: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60002B58: swc1        $f27, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002B5C: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x60002B60: jal         0x60000F34
    // 0x60002B64: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_0;
    // 0x60002B64: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_0:
    // 0x60002B68: sub.s       $f0, $f24, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f24.fl - ctx->f22.fl;
    // 0x60002B6C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60002B70: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x60002B74: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002B78: bc1f        L_60002B88
    if (!c1cs) {
        // 0x60002B7C: nop
    
            goto L_60002B88;
    }
    // 0x60002B7C: nop

    // 0x60002B80: b           L_60002BA8
    // 0x60002B84: sub.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f24.fl;
        goto L_60002BA8;
    // 0x60002B84: sub.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f24.fl;
L_60002B88:
    // 0x60002B88: c.lt.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl < ctx->f22.fl;
    // 0x60002B8C: nop

    // 0x60002B90: bc1f        L_60002BA0
    if (!c1cs) {
        // 0x60002B94: nop
    
            goto L_60002BA0;
    }
    // 0x60002B94: nop

    // 0x60002B98: b           L_60002BA4
    // 0x60002B9C: add.s       $f12, $f0, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f24.fl;
        goto L_60002BA4;
    // 0x60002B9C: add.s       $f12, $f0, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f24.fl;
L_60002BA0:
    // 0x60002BA0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_60002BA4:
    // 0x60002BA4: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_60002BA8:
    // 0x60002BA8: cvt.d.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.d = CVT_D_S(ctx->f2.fl);
    // 0x60002BAC: mul.d       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f28.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f28.d);
    // 0x60002BB0: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x60002BB4: lw          $a2, -0x4100($at)
    ctx->r6 = MEM_W(ctx->r1, -0X4100);
    // 0x60002BB8: lw          $a3, -0x40FC($at)
    ctx->r7 = MEM_W(ctx->r1, -0X40FC);
    // 0x60002BBC: swc1        $f27, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002BC0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x60002BC4: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x60002BC8: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x60002BCC: jal         0x60000F34
    // 0x60002BD0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_1;
    // 0x60002BD0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_1:
    // 0x60002BD4: add.s       $f0, $f22, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f30.fl;
    // 0x60002BD8: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x60002BDC: nop

    // 0x60002BE0: bc1f        L_60002BF0
    if (!c1cs) {
        // 0x60002BE4: nop
    
            goto L_60002BF0;
    }
    // 0x60002BE4: nop

    // 0x60002BE8: b           L_60002C18
    // 0x60002BEC: sub.s       $f22, $f0, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f0.fl - ctx->f24.fl;
        goto L_60002C18;
    // 0x60002BEC: sub.s       $f22, $f0, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f0.fl - ctx->f24.fl;
L_60002BF0:
    // 0x60002BF0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60002BF4: nop

    // 0x60002BF8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x60002BFC: nop

    // 0x60002C00: bc1f        L_60002C10
    if (!c1cs) {
        // 0x60002C04: nop
    
            goto L_60002C10;
    }
    // 0x60002C04: nop

    // 0x60002C08: b           L_60002C14
    // 0x60002C0C: add.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f24.fl;
        goto L_60002C14;
    // 0x60002C0C: add.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f24.fl;
L_60002C10:
    // 0x60002C10: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60002C14:
    // 0x60002C14: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
L_60002C18:
    // 0x60002C18: jal         0x600009D0
    // 0x60002C1C: nop

    ovl_menu_battle_9D0(rdram, ctx);
        goto after_2;
    // 0x60002C1C: nop

    after_2:
    // 0x60002C20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002C24: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x60002C28: bne         $at, $zero, L_60002B34
    if (ctx->r1 != 0) {
        // 0x60002C2C: nop
    
            goto L_60002B34;
    }
    // 0x60002C2C: nop

    // 0x60002C30: lui         $at, 0x42D8
    ctx->r1 = S32(0X42D8 << 16);
    // 0x60002C34: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60002C38: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60002C3C:
    // 0x60002C3C: cvt.d.s     $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f18.d = CVT_D_S(ctx->f22.fl);
    // 0x60002C40: mul.d       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f28.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f28.d);
    // 0x60002C44: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002C48: lw          $a2, -0x40F8($at)
    ctx->r6 = MEM_W(ctx->r1, -0X40F8);
    // 0x60002C4C: lw          $a3, -0x40F4($at)
    ctx->r7 = MEM_W(ctx->r1, -0X40F4);
    // 0x60002C50: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x60002C54: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x60002C58: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x60002C5C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60002C60: swc1        $f27, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002C64: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x60002C68: jal         0x60000F34
    // 0x60002C6C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_3;
    // 0x60002C6C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_3:
    // 0x60002C70: sub.s       $f0, $f24, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f24.fl - ctx->f22.fl;
    // 0x60002C74: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60002C78: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x60002C7C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002C80: bc1f        L_60002C90
    if (!c1cs) {
        // 0x60002C84: nop
    
            goto L_60002C90;
    }
    // 0x60002C84: nop

    // 0x60002C88: b           L_60002CB0
    // 0x60002C8C: sub.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f24.fl;
        goto L_60002CB0;
    // 0x60002C8C: sub.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f24.fl;
L_60002C90:
    // 0x60002C90: c.lt.s      $f24, $f22
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f24.fl < ctx->f22.fl;
    // 0x60002C94: nop

    // 0x60002C98: bc1f        L_60002CA8
    if (!c1cs) {
        // 0x60002C9C: nop
    
            goto L_60002CA8;
    }
    // 0x60002C9C: nop

    // 0x60002CA0: b           L_60002CAC
    // 0x60002CA4: add.s       $f12, $f0, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f24.fl;
        goto L_60002CAC;
    // 0x60002CA4: add.s       $f12, $f0, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f24.fl;
L_60002CA8:
    // 0x60002CA8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_60002CAC:
    // 0x60002CAC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_60002CB0:
    // 0x60002CB0: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x60002CB4: mul.d       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f28.d);
    // 0x60002CB8: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x60002CBC: lw          $a2, -0x40F0($at)
    ctx->r6 = MEM_W(ctx->r1, -0X40F0);
    // 0x60002CC0: lw          $a3, -0x40EC($at)
    ctx->r7 = MEM_W(ctx->r1, -0X40EC);
    // 0x60002CC4: swc1        $f27, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002CC8: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x60002CCC: swc1        $f9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x60002CD0: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x60002CD4: jal         0x60000F34
    // 0x60002CD8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_4;
    // 0x60002CD8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_4:
    // 0x60002CDC: add.s       $f0, $f22, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f30.fl;
    // 0x60002CE0: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x60002CE4: nop

    // 0x60002CE8: bc1f        L_60002CF8
    if (!c1cs) {
        // 0x60002CEC: nop
    
            goto L_60002CF8;
    }
    // 0x60002CEC: nop

    // 0x60002CF0: b           L_60002D20
    // 0x60002CF4: sub.s       $f22, $f0, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f0.fl - ctx->f24.fl;
        goto L_60002D20;
    // 0x60002CF4: sub.s       $f22, $f0, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f0.fl - ctx->f24.fl;
L_60002CF8:
    // 0x60002CF8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60002CFC: nop

    // 0x60002D00: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x60002D04: nop

    // 0x60002D08: bc1f        L_60002D18
    if (!c1cs) {
        // 0x60002D0C: nop
    
            goto L_60002D18;
    }
    // 0x60002D0C: nop

    // 0x60002D10: b           L_60002D1C
    // 0x60002D14: add.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f24.fl;
        goto L_60002D1C;
    // 0x60002D14: add.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f24.fl;
L_60002D18:
    // 0x60002D18: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60002D1C:
    // 0x60002D1C: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
L_60002D20:
    // 0x60002D20: jal         0x600009D0
    // 0x60002D24: nop

    ovl_menu_battle_9D0(rdram, ctx);
        goto after_5;
    // 0x60002D24: nop

    after_5:
    // 0x60002D28: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002D2C: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x60002D30: bne         $at, $zero, L_60002C3C
    if (ctx->r1 != 0) {
        // 0x60002D34: nop
    
            goto L_60002C3C;
    }
    // 0x60002D34: nop

    // 0x60002D38: lui         $at, 0x42D8
    ctx->r1 = S32(0X42D8 << 16);
    // 0x60002D3C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60002D40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60002D44:
    // 0x60002D44: cvt.d.s     $f16, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f16.d = CVT_D_S(ctx->f22.fl);
    // 0x60002D48: mul.d       $f20, $f16, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f28.d); 
    ctx->f20.d = MUL_D(ctx->f16.d, ctx->f28.d);
    // 0x60002D4C: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x60002D50: mfc1        $a2, $f27
    ctx->r6 = (int32_t)ctx->f_odd[(27 - 1) * 2];
    // 0x60002D54: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x60002D58: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60002D5C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60002D60: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002D64: swc1        $f27, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002D68: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x60002D6C: jal         0x60000F34
    // 0x60002D70: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_6;
    // 0x60002D70: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_6:
    // 0x60002D74: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60002D78: lw          $a2, -0x40E8($at)
    ctx->r6 = MEM_W(ctx->r1, -0X40E8);
    // 0x60002D7C: lw          $a3, -0x40E4($at)
    ctx->r7 = MEM_W(ctx->r1, -0X40E4);
    // 0x60002D80: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x60002D84: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60002D88: swc1        $f27, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002D8C: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x60002D90: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002D94: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60002D98: jal         0x60000F34
    // 0x60002D9C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_7;
    // 0x60002D9C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_7:
    // 0x60002DA0: add.s       $f0, $f22, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = ctx->f22.fl + ctx->f30.fl;
    // 0x60002DA4: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x60002DA8: nop

    // 0x60002DAC: bc1f        L_60002DBC
    if (!c1cs) {
        // 0x60002DB0: nop
    
            goto L_60002DBC;
    }
    // 0x60002DB0: nop

    // 0x60002DB4: b           L_60002DE4
    // 0x60002DB8: sub.s       $f22, $f0, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f0.fl - ctx->f24.fl;
        goto L_60002DE4;
    // 0x60002DB8: sub.s       $f22, $f0, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = ctx->f0.fl - ctx->f24.fl;
L_60002DBC:
    // 0x60002DBC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60002DC0: nop

    // 0x60002DC4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60002DC8: nop

    // 0x60002DCC: bc1f        L_60002DDC
    if (!c1cs) {
        // 0x60002DD0: nop
    
            goto L_60002DDC;
    }
    // 0x60002DD0: nop

    // 0x60002DD4: b           L_60002DE0
    // 0x60002DD8: add.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f24.fl;
        goto L_60002DE0;
    // 0x60002DD8: add.s       $f2, $f0, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f24.fl;
L_60002DDC:
    // 0x60002DDC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60002DE0:
    // 0x60002DE0: mov.s       $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    ctx->f22.fl = ctx->f2.fl;
L_60002DE4:
    // 0x60002DE4: jal         0x600009D0
    // 0x60002DE8: nop

    ovl_menu_battle_9D0(rdram, ctx);
        goto after_8;
    // 0x60002DE8: nop

    after_8:
    // 0x60002DEC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002DF0: bne         $s0, $s2, L_60002D44
    if (ctx->r16 != ctx->r18) {
        // 0x60002DF4: nop
    
            goto L_60002D44;
    }
    // 0x60002DF4: nop

    // 0x60002DF8: b           L_60002B2C
    // 0x60002DFC: lui         $at, 0x42D8
    ctx->r1 = S32(0X42D8 << 16);
        goto L_60002B2C;
    // 0x60002DFC: lui         $at, 0x42D8
    ctx->r1 = S32(0X42D8 << 16);
    // 0x60002E00: nop

    // 0x60002E04: nop

    // 0x60002E08: nop

    // 0x60002E0C: nop

    // 0x60002E10: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x60002E14: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002E18: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60002E1C: lwc1        $f23, 0x38($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60002E20: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60002E24: lwc1        $f25, 0x40($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60002E28: lwc1        $f24, 0x44($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60002E2C: lwc1        $f27, 0x48($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x60002E30: lwc1        $f26, 0x4C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x60002E34: lwc1        $f29, 0x50($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x60002E38: lwc1        $f28, 0x54($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X54);
    // 0x60002E3C: lwc1        $f31, 0x58($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x60002E40: lwc1        $f30, 0x5C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60002E44: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x60002E48: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x60002E4C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x60002E50: jr          $ra
    // 0x60002E54: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x60002E54: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_menu_battle_2E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002E58: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60002E5C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x60002E60: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x60002E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002E68: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002E6C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60002E70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x60002E74: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x60002E78: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_60002E7C:
    // 0x60002E7C: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x60002E80: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x60002E84: bne         $a0, $v0, L_60002E90
    if (ctx->r4 != ctx->r2) {
        // 0x60002E88: nop
    
            goto L_60002E90;
    }
    // 0x60002E88: nop

    // 0x60002E8C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_60002E90:
    // 0x60002E90: beq         $v0, $zero, L_60002E9C
    if (ctx->r2 == 0) {
        // 0x60002E94: nop
    
            goto L_60002E9C;
    }
    // 0x60002E94: nop

    // 0x60002E98: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
L_60002E9C:
    // 0x60002E9C: bne         $v1, $a1, L_60002E7C
    if (ctx->r3 != ctx->r5) {
        // 0x60002EA0: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_60002E7C;
    }
    // 0x60002EA0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x60002EA4: bne         $a3, $t0, L_60002F30
    if (ctx->r7 != ctx->r8) {
        // 0x60002EA8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60002F30;
    }
    // 0x60002EA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60002EAC: jal         0x60000244
    // 0x60002EB0: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_battle_244(rdram, ctx);
        goto after_0;
    // 0x60002EB0: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_0:
    // 0x60002EB4: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x60002EB8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60002EBC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x60002EC0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60002EC4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x60002EC8: addiu       $a3, $zero, 0x26
    ctx->r7 = ADD32(0, 0X26);
    // 0x60002ECC: jal         0x600006B8
    // 0x60002ED0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_6B8(rdram, ctx);
        goto after_1;
    // 0x60002ED0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x60002ED4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x60002ED8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002EDC: jal         0x60000640
    // 0x60002EE0: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    ovl_menu_battle_640(rdram, ctx);
        goto after_2;
    // 0x60002EE0: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    after_2:
    // 0x60002EE4: jal         0x60000850
    // 0x60002EE8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_menu_battle_850(rdram, ctx);
        goto after_3;
    // 0x60002EE8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x60002EEC: jal         0x600022AC
    // 0x60002EF0: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_4;
    // 0x60002EF0: nop

    after_4:
    // 0x60002EF4: bne         $v0, $zero, L_60002F18
    if (ctx->r2 != 0) {
        // 0x60002EF8: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_60002F18;
    }
    // 0x60002EF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_60002EFC:
    // 0x60002EFC: jal         0x6000085C
    // 0x60002F00: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_5;
    // 0x60002F00: nop

    after_5:
    // 0x60002F04: jal         0x600022AC
    // 0x60002F08: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_6;
    // 0x60002F08: nop

    after_6:
    // 0x60002F0C: beq         $v0, $zero, L_60002EFC
    if (ctx->r2 == 0) {
        // 0x60002F10: nop
    
            goto L_60002EFC;
    }
    // 0x60002F10: nop

    // 0x60002F14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_60002F18:
    // 0x60002F18: jal         0x600006AC
    // 0x60002F1C: nop

    ovl_menu_battle_6AC(rdram, ctx);
        goto after_7;
    // 0x60002F1C: nop

    after_7:
    // 0x60002F20: jal         0x60000850
    // 0x60002F24: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_menu_battle_850(rdram, ctx);
        goto after_8;
    // 0x60002F24: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_8:
    // 0x60002F28: b           L_60002F30
    // 0x60002F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60002F30;
    // 0x60002F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60002F30:
    // 0x60002F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60002F34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x60002F38: jr          $ra
    // 0x60002F3C: nop

    return;
    // 0x60002F3C: nop

;}
RECOMP_FUNC void ovl_menu_battle_2F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002F40: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x60002F44: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x60002F48: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x60002F4C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x60002F50: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x60002F54: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60002F58: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60002F5C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60002F60: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x60002F64: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60002F68: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x60002F6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x60002F70: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x60002F74: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x60002F78: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x60002F7C: addiu       $s6, $sp, 0x6C
    ctx->r22 = ADD32(ctx->r29, 0X6C);
    // 0x60002F80: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
L_60002F84:
    // 0x60002F84: sll         $s1, $s2, 16
    ctx->r17 = S32(ctx->r18 << 16);
    // 0x60002F88: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x60002F8C: sll         $a0, $t6, 16
    ctx->r4 = S32(ctx->r14 << 16);
    // 0x60002F90: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x60002F94: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x60002F98: jal         0x60000904
    // 0x60002F9C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    ovl_menu_battle_904(rdram, ctx);
        goto after_0;
    // 0x60002F9C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    after_0:
    // 0x60002FA0: bne         $v0, $s5, L_60002FB4
    if (ctx->r2 != ctx->r21) {
        // 0x60002FA4: sll         $a0, $s1, 16
        ctx->r4 = S32(ctx->r17 << 16);
            goto L_60002FB4;
    }
    // 0x60002FA4: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x60002FA8: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x60002FAC: jal         0x60000904
    // 0x60002FB0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    ovl_menu_battle_904(rdram, ctx);
        goto after_1;
    // 0x60002FB0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_1:
L_60002FB4:
    // 0x60002FB4: sb          $zero, 0x50($sp)
    MEM_B(0X50, ctx->r29) = 0;
    // 0x60002FB8: sb          $zero, 0x51($sp)
    MEM_B(0X51, ctx->r29) = 0;
    // 0x60002FBC: sb          $zero, 0x52($sp)
    MEM_B(0X52, ctx->r29) = 0;
    // 0x60002FC0: bne         $v0, $zero, L_60003068
    if (ctx->r2 != 0) {
        // 0x60002FC4: sb          $zero, 0x53($sp)
        MEM_B(0X53, ctx->r29) = 0;
            goto L_60003068;
    }
    // 0x60002FC4: sb          $zero, 0x53($sp)
    MEM_B(0X53, ctx->r29) = 0;
    // 0x60002FC8: bne         $s4, $zero, L_60003014
    if (ctx->r20 != 0) {
        // 0x60002FCC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60003014;
    }
    // 0x60002FCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60002FD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002FD8: jal         0x60000220
    // 0x60002FDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_menu_battle_220(rdram, ctx);
        goto after_2;
    // 0x60002FDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x60002FE0: jal         0x60000118
    // 0x60002FE4: addiu       $a0, $zero, 0x7F0
    ctx->r4 = ADD32(0, 0X7F0);
    ovl_menu_battle_118(rdram, ctx);
        goto after_3;
    // 0x60002FE4: addiu       $a0, $zero, 0x7F0
    ctx->r4 = ADD32(0, 0X7F0);
    after_3:
    // 0x60002FE8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60002FEC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x60002FF0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60002FF4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x60002FF8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x60002FFC: addiu       $a3, $zero, 0x29
    ctx->r7 = ADD32(0, 0X29);
    // 0x60003000: jal         0x600006B8
    // 0x60003004: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_battle_6B8(rdram, ctx);
        goto after_4;
    // 0x60003004: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x60003008: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x6000300C: jal         0x60000124
    // 0x60003010: addiu       $a0, $zero, 0x7F0
    ctx->r4 = ADD32(0, 0X7F0);
    ovl_menu_battle_124(rdram, ctx);
        goto after_5;
    // 0x60003010: addiu       $a0, $zero, 0x7F0
    ctx->r4 = ADD32(0, 0X7F0);
    after_5:
L_60003014:
    // 0x60003014: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x60003018: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x6000301C: lui         $a2, 0x4E42
    ctx->r6 = S32(0X4E42 << 16);
    // 0x60003020: lui         $a3, 0x6001
    ctx->r7 = S32(0X6001 << 16);
    // 0x60003024: addiu       $a3, $a3, -0x5270
    ctx->r7 = ADD32(ctx->r7, -0X5270);
    // 0x60003028: ori         $a2, $a2, 0x5645
    ctx->r6 = ctx->r6 | 0X5645;
    // 0x6000302C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x60003030: addiu       $a1, $zero, 0x3550
    ctx->r5 = ADD32(0, 0X3550);
    // 0x60003034: jal         0x60000934
    // 0x60003038: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    ovl_menu_battle_934(rdram, ctx);
        goto after_6;
    // 0x60003038: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    after_6:
    // 0x6000303C: bne         $v0, $zero, L_6000306C
    if (ctx->r2 != 0) {
        // 0x60003040: lbu         $t2, 0x50($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X50);
            goto L_6000306C;
    }
    // 0x60003040: lbu         $t2, 0x50($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X50);
    // 0x60003044: jal         0x60000040
    // 0x60003048: nop

    ovl_menu_battle_40(rdram, ctx);
        goto after_7;
    // 0x60003048: nop

    after_7:
    // 0x6000304C: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x60003050: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x60003054: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x60003058: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x6000305C: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x60003060: jal         0x60000964
    // 0x60003064: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    ovl_menu_battle_964(rdram, ctx);
        goto after_8;
    // 0x60003064: addiu       $a3, $sp, 0x50
    ctx->r7 = ADD32(ctx->r29, 0X50);
    after_8:
L_60003068:
    // 0x60003068: lbu         $t2, 0x50($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X50);
L_6000306C:
    // 0x6000306C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x60003070: beq         $t2, $zero, L_60003080
    if (ctx->r10 == 0) {
        // 0x60003074: nop
    
            goto L_60003080;
    }
    // 0x60003074: nop

    // 0x60003078: b           L_60003084
    // 0x6000307C: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
        goto L_60003084;
    // 0x6000307C: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
L_60003080:
    // 0x60003080: sw          $s3, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r19;
L_60003084:
    // 0x60003084: lbu         $t3, 0x51($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X51);
    // 0x60003088: nop

    // 0x6000308C: beq         $t3, $zero, L_6000309C
    if (ctx->r11 == 0) {
        // 0x60003090: nop
    
            goto L_6000309C;
    }
    // 0x60003090: nop

    // 0x60003094: b           L_600030A0
    // 0x60003098: sw          $t3, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r11;
        goto L_600030A0;
    // 0x60003098: sw          $t3, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r11;
L_6000309C:
    // 0x6000309C: sw          $s3, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r19;
L_600030A0:
    // 0x600030A0: lbu         $t4, 0x52($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X52);
    // 0x600030A4: nop

    // 0x600030A8: beq         $t4, $zero, L_600030B8
    if (ctx->r12 == 0) {
        // 0x600030AC: nop
    
            goto L_600030B8;
    }
    // 0x600030AC: nop

    // 0x600030B0: b           L_600030BC
    // 0x600030B4: sw          $t4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r12;
        goto L_600030BC;
    // 0x600030B4: sw          $t4, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r12;
L_600030B8:
    // 0x600030B8: sw          $s3, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r19;
L_600030BC:
    // 0x600030BC: lbu         $t5, 0x53($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X53);
    // 0x600030C0: nop

    // 0x600030C4: beq         $t5, $zero, L_600030D4
    if (ctx->r13 == 0) {
        // 0x600030C8: nop
    
            goto L_600030D4;
    }
    // 0x600030C8: nop

    // 0x600030CC: b           L_600030D8
    // 0x600030D0: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
        goto L_600030D8;
    // 0x600030D0: sw          $t5, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r13;
L_600030D4:
    // 0x600030D4: sw          $s3, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r19;
L_600030D8:
    // 0x600030D8: bne         $s2, $s7, L_60002F84
    if (ctx->r18 != ctx->r23) {
        // 0x600030DC: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_60002F84;
    }
    // 0x600030DC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x600030E0: beq         $s4, $zero, L_60003104
    if (ctx->r20 == 0) {
        // 0x600030E4: nop
    
            goto L_60003104;
    }
    // 0x600030E4: nop

    // 0x600030E8: jal         0x600006AC
    // 0x600030EC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_menu_battle_6AC(rdram, ctx);
        goto after_9;
    // 0x600030EC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_9:
    // 0x600030F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600030F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600030F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600030FC: jal         0x60000238
    // 0x60003100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_menu_battle_238(rdram, ctx);
        goto after_10;
    // 0x60003100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
L_60003104:
    // 0x60003104: jal         0x6000085C
    // 0x60003108: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_11;
    // 0x60003108: nop

    after_11:
    // 0x6000310C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x60003110: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60003114: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60003118: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x6000311C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60003120: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x60003124: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x60003128: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x6000312C: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x60003130: jr          $ra
    // 0x60003134: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x60003134: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_menu_battle_3138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003138: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x6000313C: lui         $t6, 0xDB06
    ctx->r14 = S32(0XDB06 << 16);
    // 0x60003140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003144: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x60003148: ori         $t6, $t6, 0x10
    ctx->r14 = ctx->r14 | 0X10;
    // 0x6000314C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60003150: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x60003154: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60003158: lw          $t7, -0x3E0C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3E0C);
    // 0x6000315C: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x60003160: lui         $t8, 0xD9DD
    ctx->r24 = S32(0XD9DD << 16);
    // 0x60003164: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x60003168: ori         $t8, $t8, 0xFBFB
    ctx->r24 = ctx->r24 | 0XFBFB;
    // 0x6000316C: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x60003170: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x60003174: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x60003178: lui         $t9, 0xD9FF
    ctx->r25 = S32(0XD9FF << 16);
    // 0x6000317C: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x60003180: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x60003184: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x60003188: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x6000318C: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x60003190: lui         $t1, 0xFA00
    ctx->r9 = S32(0XFA00 << 16);
    // 0x60003194: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x60003198: addiu       $a0, $a2, 0x8
    ctx->r4 = ADD32(ctx->r6, 0X8);
    // 0x6000319C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x600031A0: jal         0x60000340
    // 0x600031A4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    ovl_menu_battle_340(rdram, ctx);
        goto after_0;
    // 0x600031A4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    after_0:
    // 0x600031A8: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x600031AC: jal         0x60000340
    // 0x600031B0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    ovl_menu_battle_340(rdram, ctx);
        goto after_1;
    // 0x600031B0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x600031B4: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x600031B8: jal         0x60000340
    // 0x600031BC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    ovl_menu_battle_340(rdram, ctx);
        goto after_2;
    // 0x600031BC: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x600031C0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600031C4: lwc1        $f3, -0x40E0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X40E0);
    // 0x600031C8: lwc1        $f2, -0x40DC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X40DC);
    // 0x600031CC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x600031D0: mul.d       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x600031D4: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x600031D8: lwc1        $f13, 0x18($sp)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600031DC: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600031E0: lwc1        $f15, 0x20($sp)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600031E4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x600031E8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x600031EC: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600031F0: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x600031F4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x600031F8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x600031FC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x60003200: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x60003204: beq         $t3, $zero, L_60003258
    if (ctx->r11 == 0) {
        // 0x60003208: addiu       $v1, $a0, 0x8
        ctx->r3 = ADD32(ctx->r4, 0X8);
            goto L_60003258;
    }
    // 0x60003208: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x6000320C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x60003210: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x60003214: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60003218: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x6000321C: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x60003220: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x60003224: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x60003228: nop

    // 0x6000322C: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x60003230: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x60003234: nop

    // 0x60003238: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x6000323C: bne         $t3, $zero, L_60003250
    if (ctx->r11 != 0) {
        // 0x60003240: nop
    
            goto L_60003250;
    }
    // 0x60003240: nop

    // 0x60003244: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x60003248: b           L_60003268
    // 0x6000324C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_60003268;
    // 0x6000324C: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_60003250:
    // 0x60003250: b           L_60003268
    // 0x60003254: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_60003268;
    // 0x60003254: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_60003258:
    // 0x60003258: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x6000325C: nop

    // 0x60003260: bltz        $t3, L_60003250
    if (SIGNED(ctx->r11) < 0) {
        // 0x60003264: nop
    
            goto L_60003250;
    }
    // 0x60003264: nop

L_60003268:
    // 0x60003268: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x6000326C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60003270: mul.d       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f14.d, ctx->f2.d);
    // 0x60003274: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x60003278: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x6000327C: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x60003280: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x60003284: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x60003288: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x6000328C: addiu       $a0, $a1, 0x8
    ctx->r4 = ADD32(ctx->r5, 0X8);
    // 0x60003290: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x60003294: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x60003298: nop

    // 0x6000329C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x600032A0: beq         $t7, $zero, L_600032F0
    if (ctx->r15 == 0) {
        // 0x600032A4: nop
    
            goto L_600032F0;
    }
    // 0x600032A4: nop

    // 0x600032A8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x600032AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x600032B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x600032B4: sub.d       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f8.d - ctx->f10.d;
    // 0x600032B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x600032BC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x600032C0: nop

    // 0x600032C4: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x600032C8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x600032CC: nop

    // 0x600032D0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x600032D4: bne         $t7, $zero, L_600032E8
    if (ctx->r15 != 0) {
        // 0x600032D8: nop
    
            goto L_600032E8;
    }
    // 0x600032D8: nop

    // 0x600032DC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x600032E0: b           L_60003300
    // 0x600032E4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_60003300;
    // 0x600032E4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_600032E8:
    // 0x600032E8: b           L_60003300
    // 0x600032EC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_60003300;
    // 0x600032EC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_600032F0:
    // 0x600032F0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x600032F4: nop

    // 0x600032F8: bltz        $t7, L_600032E8
    if (SIGNED(ctx->r15) < 0) {
        // 0x600032FC: nop
    
            goto L_600032E8;
    }
    // 0x600032FC: nop

L_60003300:
    // 0x60003300: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60003304: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60003308: mul.d       $f16, $f12, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f12.d, ctx->f2.d);
    // 0x6000330C: sll         $t9, $t7, 24
    ctx->r25 = S32(ctx->r15 << 24);
    // 0x60003310: or          $t0, $t5, $t9
    ctx->r8 = ctx->r13 | ctx->r25;
    // 0x60003314: lui         $t9, 0xFFFD
    ctx->r25 = S32(0XFFFD << 16);
    // 0x60003318: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x6000331C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x60003320: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x60003324: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x60003328: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x6000332C: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x60003330: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x60003334: ori         $t9, $t9, 0xF6FB
    ctx->r25 = ctx->r25 | 0XF6FB;
    // 0x60003338: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x6000333C: beq         $t2, $zero, L_6000338C
    if (ctx->r10 == 0) {
        // 0x60003340: nop
    
            goto L_6000338C;
    }
    // 0x60003340: nop

    // 0x60003344: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x60003348: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x6000334C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60003350: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x60003354: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x60003358: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x6000335C: nop

    // 0x60003360: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x60003364: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x60003368: nop

    // 0x6000336C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x60003370: bne         $t2, $zero, L_60003384
    if (ctx->r10 != 0) {
        // 0x60003374: nop
    
            goto L_60003384;
    }
    // 0x60003374: nop

    // 0x60003378: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x6000337C: b           L_6000339C
    // 0x60003380: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_6000339C;
    // 0x60003380: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_60003384:
    // 0x60003384: b           L_6000339C
    // 0x60003388: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_6000339C;
    // 0x60003388: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_6000338C:
    // 0x6000338C: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x60003390: nop

    // 0x60003394: bltz        $t2, L_60003384
    if (SIGNED(ctx->r10) < 0) {
        // 0x60003398: nop
    
            goto L_60003384;
    }
    // 0x60003398: nop

L_6000339C:
    // 0x6000339C: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x600033A0: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x600033A4: or          $t6, $t0, $t4
    ctx->r14 = ctx->r8 | ctx->r12;
    // 0x600033A8: ori         $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 | 0XFF;
    // 0x600033AC: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x600033B0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x600033B4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x600033B8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x600033BC: lui         $t1, 0xE200
    ctx->r9 = S32(0XE200 << 16);
    // 0x600033C0: lui         $t2, 0x55
    ctx->r10 = S32(0X55 << 16);
    // 0x600033C4: ori         $t2, $t2, 0x2078
    ctx->r10 = ctx->r10 | 0X2078;
    // 0x600033C8: ori         $t1, $t1, 0x1C
    ctx->r9 = ctx->r9 | 0X1C;
    // 0x600033CC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x600033D0: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
    // 0x600033D4: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x600033D8: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x600033DC: lui         $t3, 0xD700
    ctx->r11 = S32(0XD700 << 16);
    // 0x600033E0: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x600033E4: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x600033E8: lui         $t4, 0x100
    ctx->r12 = S32(0X100 << 16);
    // 0x600033EC: ori         $t4, $t4, 0x4008
    ctx->r12 = ctx->r12 | 0X4008;
    // 0x600033F0: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x600033F4: lui         $t6, 0x400
    ctx->r14 = S32(0X400 << 16);
    // 0x600033F8: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x600033FC: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x60003400: lui         $t7, 0x500
    ctx->r15 = S32(0X500 << 16);
    // 0x60003404: ori         $t7, $t7, 0x204
    ctx->r15 = ctx->r15 | 0X204;
    // 0x60003408: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x6000340C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x60003410: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x60003414: lui         $t8, 0x500
    ctx->r24 = S32(0X500 << 16);
    // 0x60003418: ori         $t8, $t8, 0x406
    ctx->r24 = ctx->r24 | 0X406;
    // 0x6000341C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x60003420: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x60003424: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    // 0x60003428: lui         $t5, 0xD9FF
    ctx->r13 = S32(0XD9FF << 16);
    // 0x6000342C: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x60003430: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x60003434: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
    // 0x60003438: sw          $t5, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r13;
    // 0x6000343C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003440: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x60003444: jr          $ra
    // 0x60003448: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60003448: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_menu_battle_344C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000344C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x60003450: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60003454: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x60003458: addiu       $t7, $t7, 0x3138
    ctx->r15 = ADD32(ctx->r15, 0X3138);
    // 0x6000345C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x60003460: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x60003464: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x60003468: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x6000346C: swc1        $f31, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60003470: swc1        $f30, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f30.u32l;
    // 0x60003474: swc1        $f29, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60003478: swc1        $f28, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f28.u32l;
    // 0x6000347C: swc1        $f27, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60003480: swc1        $f26, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f26.u32l;
    // 0x60003484: swc1        $f25, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60003488: swc1        $f24, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f24.u32l;
    // 0x6000348C: swc1        $f23, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60003490: swc1        $f22, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f22.u32l;
    // 0x60003494: swc1        $f21, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003498: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x6000349C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x600034A0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x600034A4: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x600034A8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x600034AC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x600034B0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600034B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600034B8: jal         0x60000DC0
    // 0x600034BC: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    ovl_menu_battle_DC0(rdram, ctx);
        goto after_0;
    // 0x600034BC: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x600034C0: jal         0x600009D0
    // 0x600034C4: nop

    ovl_menu_battle_9D0(rdram, ctx);
        goto after_1;
    // 0x600034C4: nop

    after_1:
    // 0x600034C8: jal         0x60000340
    // 0x600034CC: nop

    ovl_menu_battle_340(rdram, ctx);
        goto after_2;
    // 0x600034CC: nop

    after_2:
    // 0x600034D0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600034D4: lwc1        $f5, -0x40D8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X40D8);
    // 0x600034D8: lwc1        $f4, -0x40D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X40D4);
    // 0x600034DC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600034E0: lwc1        $f7, -0x40D0($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X40D0);
    // 0x600034E4: lwc1        $f6, -0x40CC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X40CC);
    // 0x600034E8: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x600034EC: mtc1        $at, $f27
    ctx->f_odd[(27 - 1) * 2] = ctx->r1;
    // 0x600034F0: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x600034F4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600034F8: lwc1        $f25, -0x40C8($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, -0X40C8);
    // 0x600034FC: lwc1        $f24, -0x40C4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X40C4);
    // 0x60003500: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003504: sub.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d - ctx->f8.d;
    // 0x60003508: lwc1        $f23, -0x40C0($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X40C0);
    // 0x6000350C: lwc1        $f22, -0x40BC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X40BC);
    // 0x60003510: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003514: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x60003518: lui         $s2, 0x6001
    ctx->r18 = S32(0X6001 << 16);
    // 0x6000351C: lwc1        $f21, -0x40B8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X40B8);
    // 0x60003520: lwc1        $f20, -0x40B4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X40B4);
    // 0x60003524: mtc1        $zero, $f29
    ctx->f_odd[(29 - 1) * 2] = 0;
    // 0x60003528: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x6000352C: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x60003530: swc1        $f16, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f16.u32l;
    // 0x60003534: addiu       $s2, $s2, -0x4270
    ctx->r18 = ADD32(ctx->r18, -0X4270);
    // 0x60003538: addiu       $s1, $sp, 0x90
    ctx->r17 = ADD32(ctx->r29, 0X90);
    // 0x6000353C: addiu       $s0, $sp, 0x9C
    ctx->r16 = ADD32(ctx->r29, 0X9C);
L_60003540:
    // 0x60003540: jal         0x60000340
    // 0x60003544: nop

    ovl_menu_battle_340(rdram, ctx);
        goto after_3;
    // 0x60003544: nop

    after_3:
    // 0x60003548: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000354C: lwc1        $f19, -0x40B0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X40B0);
    // 0x60003550: lwc1        $f18, -0x40AC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X40AC);
    // 0x60003554: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003558: mul.d       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x6000355C: lwc1        $f5, -0x40A8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X40A8);
    // 0x60003560: lwc1        $f4, -0x40A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X40A4);
    // 0x60003564: nop

    // 0x60003568: sub.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f6.d - ctx->f4.d;
    // 0x6000356C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x60003570: jal         0x60000340
    // 0x60003574: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    ovl_menu_battle_340(rdram, ctx);
        goto after_4;
    // 0x60003574: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x60003578: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x6000357C: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x60003580: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x60003584: nop

    // 0x60003588: mul.d       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x6000358C: add.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = ctx->f16.d + ctx->f2.d;
    // 0x60003590: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x60003594: jal         0x60000340
    // 0x60003598: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    ovl_menu_battle_340(rdram, ctx);
        goto after_5;
    // 0x60003598: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x6000359C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600035A0: lwc1        $f5, -0x40A0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X40A0);
    // 0x600035A4: lwc1        $f4, -0x409C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X409C);
    // 0x600035A8: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x600035AC: mul.d       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x600035B0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x600035B4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x600035B8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x600035BC: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x600035C0: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x600035C4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x600035C8: mul.d       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f22.d);
    // 0x600035CC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x600035D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600035D4: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    // 0x600035D8: swc1        $f2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f2.u32l;
    // 0x600035DC: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x600035E0: jal         0x60000DC0
    // 0x600035E4: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    ovl_menu_battle_DC0(rdram, ctx);
        goto after_6;
    // 0x600035E4: swc1        $f6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x600035E8: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x600035EC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x600035F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600035F4: jal         0x60000DC0
    // 0x600035F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_DC0(rdram, ctx);
        goto after_7;
    // 0x600035F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x600035FC: jal         0x60000340
    // 0x60003600: nop

    ovl_menu_battle_340(rdram, ctx);
        goto after_8;
    // 0x60003600: nop

    after_8:
    // 0x60003604: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x60003608: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x6000360C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60003610: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x60003614: mul.d       $f8, $f0, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x60003618: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x6000361C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60003620: nop

    // 0x60003624: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x60003628: cvt.s.d     $f30, $f16
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f30.fl = CVT_S_D(ctx->f16.d);
    // 0x6000362C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
L_60003630:
    // 0x60003630: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x60003634: beq         $t8, $zero, L_6000364C
    if (ctx->r24 == 0) {
        // 0x60003638: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_6000364C;
    }
    // 0x60003638: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x6000363C: jal         0x60000DC0
    // 0x60003640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_DC0(rdram, ctx);
        goto after_9;
    // 0x60003640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x60003644: jal         0x600009AC
    // 0x60003648: nop

    ovl_menu_battle_9AC(rdram, ctx);
        goto after_10;
    // 0x60003648: nop

    after_10:
L_6000364C:
    // 0x6000364C: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x60003650: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x60003654: sub.s       $f6, $f18, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f30.fl;
    // 0x60003658: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x6000365C: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x60003660: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60003664: jal         0x60000DC0
    // 0x60003668: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_DC0(rdram, ctx);
        goto after_11;
    // 0x60003668: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x6000366C: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x60003670: nop

    // 0x60003674: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x60003678: mul.d       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f24.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f24.d);
    // 0x6000367C: add.d       $f0, $f10, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f26.d); 
    ctx->f0.d = ctx->f10.d + ctx->f26.d;
    // 0x60003680: c.le.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d <= ctx->f0.d;
    // 0x60003684: nop

    // 0x60003688: bc1f        L_60003698
    if (!c1cs) {
        // 0x6000368C: nop
    
            goto L_60003698;
    }
    // 0x6000368C: nop

    // 0x60003690: b           L_600036B8
    // 0x60003694: sub.d       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f0.d - ctx->f20.d;
        goto L_600036B8;
    // 0x60003694: sub.d       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = ctx->f0.d - ctx->f20.d;
L_60003698:
    // 0x60003698: c.lt.d      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.d < ctx->f28.d;
    // 0x6000369C: nop

    // 0x600036A0: bc1f        L_600036B0
    if (!c1cs) {
        // 0x600036A4: nop
    
            goto L_600036B0;
    }
    // 0x600036A4: nop

    // 0x600036A8: b           L_600036B4
    // 0x600036AC: add.d       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f12.d = ctx->f0.d + ctx->f20.d;
        goto L_600036B4;
    // 0x600036AC: add.d       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f12.d = ctx->f0.d + ctx->f20.d;
L_600036B0:
    // 0x600036B0: mov.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.d = ctx->f0.d;
L_600036B4:
    // 0x600036B4: mov.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
L_600036B8:
    // 0x600036B8: mul.d       $f16, $f2, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f22.d); 
    ctx->f16.d = MUL_D(ctx->f2.d, ctx->f22.d);
    // 0x600036BC: lw          $a1, 0xAC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XAC);
    // 0x600036C0: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x600036C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600036C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600036CC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x600036D0: jal         0x60000DC0
    // 0x600036D4: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    ovl_menu_battle_DC0(rdram, ctx);
        goto after_12;
    // 0x600036D4: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    after_12:
    // 0x600036D8: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x600036DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600036E0: lwc1        $f6, 0xA0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x600036E4: nop

    // 0x600036E8: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x600036EC: nop

    // 0x600036F0: bc1f        L_60003704
    if (!c1cs) {
        // 0x600036F4: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_60003704;
    }
    // 0x600036F4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x600036F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600036FC: b           L_60003540
    // 0x60003700: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
        goto L_60003540;
    // 0x60003700: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
L_60003704:
    // 0x60003704: jal         0x600009D0
    // 0x60003708: nop

    ovl_menu_battle_9D0(rdram, ctx);
        goto after_13;
    // 0x60003708: nop

    after_13:
    // 0x6000370C: b           L_60003630
    // 0x60003710: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
        goto L_60003630;
    // 0x60003710: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x60003714: nop

    // 0x60003718: nop

    // 0x6000371C: nop

    // 0x60003720: nop

    // 0x60003724: nop

    // 0x60003728: nop

    // 0x6000372C: nop

    // 0x60003730: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x60003734: lwc1        $f21, 0x28($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60003738: lwc1        $f20, 0x2C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x6000373C: lwc1        $f23, 0x30($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60003740: lwc1        $f22, 0x34($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60003744: lwc1        $f25, 0x38($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60003748: lwc1        $f24, 0x3C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x6000374C: lwc1        $f27, 0x40($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60003750: lwc1        $f26, 0x44($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60003754: lwc1        $f29, 0x48($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x60003758: lwc1        $f28, 0x4C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x6000375C: lwc1        $f31, 0x50($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x60003760: lwc1        $f30, 0x54($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X54);
    // 0x60003764: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x60003768: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x6000376C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x60003770: jr          $ra
    // 0x60003774: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x60003774: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void ovl_menu_battle_3778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003778: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x6000377C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60003780: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60003784: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60003788: lui         $s1, 0x6001
    ctx->r17 = S32(0X6001 << 16);
    // 0x6000378C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60003790: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003794: addiu       $s1, $s1, -0x426C
    ctx->r17 = ADD32(ctx->r17, -0X426C);
    // 0x60003798: addiu       $s2, $zero, 0xC
    ctx->r18 = ADD32(0, 0XC);
L_6000379C:
    // 0x6000379C: jal         0x6000034C
    // 0x600037A0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_menu_battle_34C(rdram, ctx);
        goto after_0;
    // 0x600037A0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x600037A4: bne         $v0, $s0, L_600037BC
    if (ctx->r2 != ctx->r16) {
        // 0x600037A8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600037BC;
    }
    // 0x600037A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_600037AC:
    // 0x600037AC: jal         0x6000034C
    // 0x600037B0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_menu_battle_34C(rdram, ctx);
        goto after_1;
    // 0x600037B0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x600037B4: beq         $v0, $s0, L_600037AC
    if (ctx->r2 == ctx->r16) {
        // 0x600037B8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600037AC;
    }
    // 0x600037B8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_600037BC:
    // 0x600037BC: multu       $v1, $s2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x600037C0: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x600037C4: mflo        $t6
    ctx->r14 = lo;
    // 0x600037C8: addu        $v0, $s1, $t6
    ctx->r2 = ADD32(ctx->r17, ctx->r14);
    // 0x600037CC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x600037D0: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x600037D4: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x600037D8: jal         0x600001C0
    // 0x600037DC: nop

    ovl_menu_battle_1C0(rdram, ctx);
        goto after_2;
    // 0x600037DC: nop

    after_2:
    // 0x600037E0: jal         0x600009C4
    // 0x600037E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_menu_battle_9C4(rdram, ctx);
        goto after_3;
    // 0x600037E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_3:
    // 0x600037E8: b           L_6000379C
    // 0x600037EC: nop

        goto L_6000379C;
    // 0x600037EC: nop

    // 0x600037F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600037F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600037F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x600037FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60003800: jr          $ra
    // 0x60003804: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60003804: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_menu_battle_3808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003808: addiu       $sp, $sp, -0x270
    ctx->r29 = ADD32(ctx->r29, -0X270);
    // 0x6000380C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x60003810: sw          $a0, 0x270($sp)
    MEM_W(0X270, ctx->r29) = ctx->r4;
    // 0x60003814: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x60003818: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x6000381C: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003820: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x60003824: sw          $t6, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r14;
    // 0x60003828: sw          $zero, 0x24C($sp)
    MEM_W(0X24C, ctx->r29) = 0;
    // 0x6000382C: jal         0x60000118
    // 0x60003830: addiu       $a0, $zero, 0x7F0
    ctx->r4 = ADD32(0, 0X7F0);
    ovl_menu_battle_118(rdram, ctx);
        goto after_0;
    // 0x60003830: addiu       $a0, $zero, 0x7F0
    ctx->r4 = ADD32(0, 0X7F0);
    after_0:
    // 0x60003834: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003838: jal         0x60000C28
    // 0x6000383C: sw          $v0, -0x3FC0($at)
    MEM_W(-0X3FC0, ctx->r1) = ctx->r2;
    ovl_menu_battle_C28(rdram, ctx);
        goto after_1;
    // 0x6000383C: sw          $v0, -0x3FC0($at)
    MEM_W(-0X3FC0, ctx->r1) = ctx->r2;
    after_1:
    // 0x60003840: jal         0x60000BEC
    // 0x60003844: sw          $v0, 0x248($sp)
    MEM_W(0X248, ctx->r29) = ctx->r2;
    ovl_menu_battle_BEC(rdram, ctx);
        goto after_2;
    // 0x60003844: sw          $v0, 0x248($sp)
    MEM_W(0X248, ctx->r29) = ctx->r2;
    after_2:
    // 0x60003848: jal         0x60000C1C
    // 0x6000384C: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    ovl_menu_battle_C1C(rdram, ctx);
        goto after_3;
    // 0x6000384C: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    after_3:
    // 0x60003850: lw          $t7, 0x270($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X270);
    // 0x60003854: sw          $v0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r2;
    // 0x60003858: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x6000385C: sltiu       $at, $t8, 0x7
    ctx->r1 = ctx->r24 < 0X7 ? 1 : 0;
    // 0x60003860: beq         $at, $zero, L_6000AD54
    if (ctx->r1 == 0) {
        // 0x60003864: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_6000AD54;
    }
    // 0x60003864: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60003868: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000386C: addu        $at, $at, $t8
    gpr jr_addend_60003878 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x60003870: lw          $t8, -0x4098($at)
    ctx->r24 = ADD32(ctx->r1, -0X4098);
    // 0x60003874: nop

    // 0x60003878: jr          $t8
    // 0x6000387C: nop

    switch (jr_addend_60003878 >> 2) {
        case 0: goto L_60003880; break;
        case 1: goto L_60006078; break;
        case 2: goto L_60007560; break;
        case 3: goto L_6000AD54; break;
        case 4: goto L_60007C24; break;
        case 5: goto L_60008A00; break;
        case 6: goto L_60009B04; break;
        default: switch_error(__func__, 0x60003878, 0x6000BF68);
    }
    // 0x6000387C: nop

L_60003880:
    // 0x60003880: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003884: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000388C: jal         0x60000220
    // 0x60003890: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_220(rdram, ctx);
        goto after_4;
    // 0x60003890: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_4:
    // 0x60003894: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60003898:
    // 0x60003898: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x6000389C: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x600038A0: nop

    // 0x600038A4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x600038A8: lbu         $t2, 0x4($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X4);
    // 0x600038AC: nop

    // 0x600038B0: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x600038B4: bne         $at, $zero, L_600038E0
    if (ctx->r1 != 0) {
        // 0x600038B8: sll         $t3, $t0, 2
        ctx->r11 = S32(ctx->r8 << 2);
            goto L_600038E0;
    }
    // 0x600038B8: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x600038BC: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x600038C0: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x600038C4: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x600038C8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x600038CC: lw          $t4, -0x4F4C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4F4C);
    // 0x600038D0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x600038D4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600038D8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x600038DC: sw          $t4, -0x4EC4($at)
    MEM_W(-0X4EC4, ctx->r1) = ctx->r12;
L_600038E0:
    // 0x600038E0: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x600038E4: nop

    // 0x600038E8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x600038EC: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x600038F0: bne         $at, $zero, L_60003898
    if (ctx->r1 != 0) {
        // 0x600038F4: sw          $t7, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r15;
            goto L_60003898;
    }
    // 0x600038F4: sw          $t7, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r15;
    // 0x600038F8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600038FC: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60003900: jal         0x60001AA0
    // 0x60003904: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_5;
    // 0x60003904: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_5:
    // 0x60003908: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x6000390C: addiu       $t8, $t8, -0x4F3C
    ctx->r24 = ADD32(ctx->r24, -0X4F3C);
    // 0x60003910: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x60003914: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x60003918: jal         0x6000061C
    // 0x6000391C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_6;
    // 0x6000391C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_6:
    // 0x60003920: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60003924: addiu       $t9, $t9, -0x4F3C
    ctx->r25 = ADD32(ctx->r25, -0X4F3C);
    // 0x60003928: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x6000392C: jal         0x60000604
    // 0x60003930: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_battle_604(rdram, ctx);
        goto after_7;
    // 0x60003930: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x60003934: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60003938: addiu       $t1, $t1, -0x4F3C
    ctx->r9 = ADD32(ctx->r9, -0X4F3C);
    // 0x6000393C: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x60003940: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    // 0x60003944: jal         0x6000055C
    // 0x60003948: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    ovl_menu_battle_55C(rdram, ctx);
        goto after_8;
    // 0x60003948: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_8:
    // 0x6000394C: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60003950: addiu       $t2, $t2, -0x4F3C
    ctx->r10 = ADD32(ctx->r10, -0X4F3C);
    // 0x60003954: lw          $a0, 0xC($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC);
    // 0x60003958: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x6000395C: jal         0x60000574
    // 0x60003960: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_9;
    // 0x60003960: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_9:
    // 0x60003964: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60003968: addiu       $t3, $t3, -0x4F3C
    ctx->r11 = ADD32(ctx->r11, -0X4F3C);
    // 0x6000396C: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x60003970: jal         0x600005A4
    // 0x60003974: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_10;
    // 0x60003974: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_10:
    // 0x60003978: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x6000397C: addiu       $t0, $t0, -0x4F3C
    ctx->r8 = ADD32(ctx->r8, -0X4F3C);
    // 0x60003980: lw          $a0, 0x5C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X5C);
    // 0x60003984: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x60003988: jal         0x6000061C
    // 0x6000398C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_11;
    // 0x6000398C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_11:
    // 0x60003990: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60003994: addiu       $t4, $t4, -0x4F3C
    ctx->r12 = ADD32(ctx->r12, -0X4F3C);
    // 0x60003998: lw          $a0, 0x5C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X5C);
    // 0x6000399C: jal         0x60000604
    // 0x600039A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_battle_604(rdram, ctx);
        goto after_12;
    // 0x600039A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x600039A4: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x600039A8: addiu       $t5, $t5, -0x4F3C
    ctx->r13 = ADD32(ctx->r13, -0X4F3C);
    // 0x600039AC: lw          $a0, 0x5C($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X5C);
    // 0x600039B0: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x600039B4: jal         0x60000634
    // 0x600039B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_634(rdram, ctx);
        goto after_13;
    // 0x600039B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x600039BC: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x600039C0: addiu       $t6, $t6, -0x4F3C
    ctx->r14 = ADD32(ctx->r14, -0X4F3C);
    // 0x600039C4: lw          $a0, 0x160($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X160);
    // 0x600039C8: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x600039CC: jal         0x6000061C
    // 0x600039D0: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_14;
    // 0x600039D0: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_14:
    // 0x600039D4: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x600039D8: addiu       $t7, $t7, -0x4F3C
    ctx->r15 = ADD32(ctx->r15, -0X4F3C);
    // 0x600039DC: lw          $a0, 0x160($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X160);
    // 0x600039E0: jal         0x60000604
    // 0x600039E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_battle_604(rdram, ctx);
        goto after_15;
    // 0x600039E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x600039E8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x600039EC: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
L_600039F0:
    // 0x600039F0: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600039F4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600039F8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x600039FC: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x60003A00: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60003A04: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60003A08: lw          $a0, -0x4F30($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4F30);
    // 0x60003A0C: jal         0x60000640
    // 0x60003A10: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    ovl_menu_battle_640(rdram, ctx);
        goto after_16;
    // 0x60003A10: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    after_16:
    // 0x60003A14: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x60003A18: nop

    // 0x60003A1C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x60003A20: slti        $at, $t3, 0xF
    ctx->r1 = SIGNED(ctx->r11) < 0XF ? 1 : 0;
    // 0x60003A24: bne         $at, $zero, L_600039F0
    if (ctx->r1 != 0) {
        // 0x60003A28: sw          $t3, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r11;
            goto L_600039F0;
    }
    // 0x60003A28: sw          $t3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r11;
    // 0x60003A2C: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60003A30: addiu       $t0, $t0, -0x4F3C
    ctx->r8 = ADD32(ctx->r8, -0X4F3C);
    // 0x60003A34: lw          $a0, 0x5C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X5C);
    // 0x60003A38: jal         0x60000640
    // 0x60003A3C: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    ovl_menu_battle_640(rdram, ctx);
        goto after_17;
    // 0x60003A3C: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    after_17:
    // 0x60003A40: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60003A44: addiu       $t4, $t4, -0x4F3C
    ctx->r12 = ADD32(ctx->r12, -0X4F3C);
    // 0x60003A48: lw          $a0, 0x160($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X160);
    // 0x60003A4C: jal         0x60000640
    // 0x60003A50: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    ovl_menu_battle_640(rdram, ctx);
        goto after_18;
    // 0x60003A50: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    after_18:
    // 0x60003A54: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x60003A58: sw          $t5, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r13;
L_60003A5C:
    // 0x60003A5C: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60003A60: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003A64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x60003A68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x60003A6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60003A70: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60003A74: lw          $a0, -0x4F30($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4F30);
    // 0x60003A78: jal         0x600005A4
    // 0x60003A7C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_19;
    // 0x60003A7C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_19:
    // 0x60003A80: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x60003A84: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003A88: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x60003A8C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x60003A90: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60003A94: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x60003A98: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
    // 0x60003A9C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x60003AA0: lw          $a0, -0x4F30($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4F30);
    // 0x60003AA4: jal         0x60000574
    // 0x60003AA8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_20;
    // 0x60003AA8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_20:
    // 0x60003AAC: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x60003AB0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003AB4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x60003AB8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x60003ABC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60003AC0: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60003AC4: lw          $a0, -0x4F30($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4F30);
    // 0x60003AC8: jal         0x600005D4
    // 0x60003ACC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_21;
    // 0x60003ACC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_21:
    // 0x60003AD0: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x60003AD4: nop

    // 0x60003AD8: addiu       $t0, $t3, 0x1
    ctx->r8 = ADD32(ctx->r11, 0X1);
    // 0x60003ADC: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x60003AE0: bne         $at, $zero, L_60003A5C
    if (ctx->r1 != 0) {
        // 0x60003AE4: sw          $t0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r8;
            goto L_60003A5C;
    }
    // 0x60003AE4: sw          $t0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r8;
    // 0x60003AE8: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x60003AEC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003AF0: sw          $zero, -0x3E10($at)
    MEM_W(-0X3E10, ctx->r1) = 0;
    // 0x60003AF4: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x60003AF8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003AFC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x60003B00: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x60003B04: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60003B08: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x60003B0C: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60003B10: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60003B14: jal         0x600005D4
    // 0x60003B18: sw          $t5, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r13;
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_22;
    // 0x60003B18: sw          $t5, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r13;
    after_22:
    // 0x60003B1C: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x60003B20: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003B24: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x60003B28: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x60003B2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60003B30: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x60003B34: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60003B38: jal         0x60000640
    // 0x60003B3C: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    ovl_menu_battle_640(rdram, ctx);
        goto after_23;
    // 0x60003B3C: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_23:
L_60003B40:
    // 0x60003B40: jal         0x600022AC
    // 0x60003B44: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_24;
    // 0x60003B44: nop

    after_24:
    // 0x60003B48: andi        $t1, $v0, 0x4000
    ctx->r9 = ctx->r2 & 0X4000;
    // 0x60003B4C: beq         $t1, $zero, L_60003B68
    if (ctx->r9 == 0) {
        // 0x60003B50: sw          $v0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r2;
            goto L_60003B68;
    }
    // 0x60003B50: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    // 0x60003B54: jal         0x60000244
    // 0x60003B58: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_battle_244(rdram, ctx);
        goto after_25;
    // 0x60003B58: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_25:
    // 0x60003B5C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x60003B60: b           L_60003D6C
    // 0x60003B64: sw          $t2, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r10;
        goto L_60003D6C;
    // 0x60003B64: sw          $t2, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r10;
L_60003B68:
    // 0x60003B68: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x60003B6C: nop

    // 0x60003B70: andi        $t0, $t3, 0x9000
    ctx->r8 = ctx->r11 & 0X9000;
    // 0x60003B74: beq         $t0, $zero, L_60003B90
    if (ctx->r8 == 0) {
        // 0x60003B78: lw          $a0, 0x11C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X11C);
            goto L_60003B90;
    }
    // 0x60003B78: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x60003B7C: jal         0x60000244
    // 0x60003B80: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_26;
    // 0x60003B80: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_26:
    // 0x60003B84: b           L_60003D70
    // 0x60003B88: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
        goto L_60003D70;
    // 0x60003B88: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
    // 0x60003B8C: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_60003B90:
    // 0x60003B90: jal         0x600025D0
    // 0x60003B94: nop

    ovl_menu_battle_25D0(rdram, ctx);
        goto after_27;
    // 0x60003B94: nop

    after_27:
    // 0x60003B98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60003B9C: beq         $v0, $at, L_60003D5C
    if (ctx->r2 == ctx->r1) {
        // 0x60003BA0: sw          $v0, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r2;
            goto L_60003D5C;
    }
    // 0x60003BA0: sw          $v0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r2;
    // 0x60003BA4: lw          $t5, 0x250($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X250);
    // 0x60003BA8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x60003BAC: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x60003BB0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x60003BB4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60003BB8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x60003BBC: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60003BC0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x60003BC4: lw          $t9, -0x43CC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X43CC);
    // 0x60003BC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60003BCC: beq         $t9, $at, L_60003BF4
    if (ctx->r25 == ctx->r1) {
        // 0x60003BD0: sw          $t9, 0x104($sp)
        MEM_W(0X104, ctx->r29) = ctx->r25;
            goto L_60003BF4;
    }
    // 0x60003BD0: sw          $t9, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r25;
    // 0x60003BD4: jal         0x60000244
    // 0x60003BD8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_28;
    // 0x60003BD8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_28:
    // 0x60003BDC: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
    // 0x60003BE0: lw          $t2, 0x104($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X104);
    // 0x60003BE4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003BE8: sw          $t1, -0x3E10($at)
    MEM_W(-0X3E10, ctx->r1) = ctx->r9;
    // 0x60003BEC: b           L_60003CA4
    // 0x60003BF0: sw          $t2, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r10;
        goto L_60003CA4;
    // 0x60003BF0: sw          $t2, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r10;
L_60003BF4:
    // 0x60003BF4: lw          $t3, 0x250($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X250);
    // 0x60003BF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003BFC: bne         $t3, $at, L_60003CA8
    if (ctx->r11 != ctx->r1) {
        // 0x60003C00: addiu       $t1, $zero, 0x5
        ctx->r9 = ADD32(0, 0X5);
            goto L_60003CA8;
    }
    // 0x60003C00: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x60003C04: jal         0x60000244
    // 0x60003C08: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_29;
    // 0x60003C08: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_29:
    // 0x60003C0C: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60003C10: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60003C14: sra         $t5, $t0, 1
    ctx->r13 = S32(SIGNED(ctx->r8) >> 1);
    // 0x60003C18: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x60003C1C: subu        $t4, $t4, $t5
    ctx->r12 = SUB32(ctx->r12, ctx->r13);
    // 0x60003C20: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x60003C24: addiu       $t6, $t6, -0x42F4
    ctx->r14 = ADD32(ctx->r14, -0X42F4);
    // 0x60003C28: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x60003C2C: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60003C30: lw          $t9, -0x3E10($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3E10);
    // 0x60003C34: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x60003C38: nop

    // 0x60003C3C: beq         $t8, $t9, L_60003C58
    if (ctx->r24 == ctx->r25) {
        // 0x60003C40: lw          $t2, 0x108($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X108);
            goto L_60003C58;
    }
    // 0x60003C40: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x60003C44: lw          $t1, 0x4($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X4);
    // 0x60003C48: nop

    // 0x60003C4C: bne         $t1, $t9, L_60003C80
    if (ctx->r9 != ctx->r25) {
        // 0x60003C50: lw          $t4, 0x108($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X108);
            goto L_60003C80;
    }
    // 0x60003C50: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60003C54: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
L_60003C58:
    // 0x60003C58: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60003C5C: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x60003C60: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x60003C64: subu        $t0, $t0, $t3
    ctx->r8 = SUB32(ctx->r8, ctx->r11);
    // 0x60003C68: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60003C6C: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x60003C70: lw          $t5, -0x42F4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X42F4);
    // 0x60003C74: b           L_60003CA4
    // 0x60003C78: sw          $t5, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r13;
        goto L_60003CA4;
    // 0x60003C78: sw          $t5, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r13;
    // 0x60003C7C: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
L_60003C80:
    // 0x60003C80: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60003C84: sra         $t6, $t4, 1
    ctx->r14 = S32(SIGNED(ctx->r12) >> 1);
    // 0x60003C88: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x60003C8C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x60003C90: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60003C94: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x60003C98: lw          $t7, -0x42EC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42EC);
    // 0x60003C9C: nop

    // 0x60003CA0: sw          $t7, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r15;
L_60003CA4:
    // 0x60003CA4: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
L_60003CA8:
    // 0x60003CA8: sw          $t1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r9;
L_60003CAC:
    // 0x60003CAC: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x60003CB0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003CB4: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x60003CB8: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x60003CBC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60003CC0: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60003CC4: lw          $a0, -0x4F30($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4F30);
    // 0x60003CC8: jal         0x600005D4
    // 0x60003CCC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_30;
    // 0x60003CCC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_30:
    // 0x60003CD0: lw          $t3, 0x104($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X104);
    // 0x60003CD4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003CD8: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x60003CDC: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x60003CE0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60003CE4: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x60003CE8: lw          $a0, -0x4F30($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4F30);
    // 0x60003CEC: jal         0x60000640
    // 0x60003CF0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    ovl_menu_battle_640(rdram, ctx);
        goto after_31;
    // 0x60003CF0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_31:
    // 0x60003CF4: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
    // 0x60003CF8: nop

    // 0x60003CFC: addiu       $t4, $t5, 0x1
    ctx->r12 = ADD32(ctx->r13, 0X1);
    // 0x60003D00: slti        $at, $t4, 0xA
    ctx->r1 = SIGNED(ctx->r12) < 0XA ? 1 : 0;
    // 0x60003D04: bne         $at, $zero, L_60003CAC
    if (ctx->r1 != 0) {
        // 0x60003D08: sw          $t4, 0x104($sp)
        MEM_W(0X104, ctx->r29) = ctx->r12;
            goto L_60003CAC;
    }
    // 0x60003D08: sw          $t4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r12;
    // 0x60003D0C: lw          $t6, 0x250($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X250);
    // 0x60003D10: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003D14: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x60003D18: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x60003D1C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60003D20: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x60003D24: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60003D28: jal         0x600005D4
    // 0x60003D2C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_32;
    // 0x60003D2C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_32:
    // 0x60003D30: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x60003D34: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003D38: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x60003D3C: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x60003D40: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60003D44: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60003D48: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60003D4C: jal         0x60000640
    // 0x60003D50: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    ovl_menu_battle_640(rdram, ctx);
        goto after_33;
    // 0x60003D50: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_33:
    // 0x60003D54: jal         0x60000850
    // 0x60003D58: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_menu_battle_850(rdram, ctx);
        goto after_34;
    // 0x60003D58: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_34:
L_60003D5C:
    // 0x60003D5C: jal         0x6000085C
    // 0x60003D60: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_35;
    // 0x60003D60: nop

    after_35:
    // 0x60003D64: b           L_60003B40
    // 0x60003D68: nop

        goto L_60003B40;
    // 0x60003D68: nop

L_60003D6C:
    // 0x60003D6C: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
L_60003D70:
    // 0x60003D70: nop

    // 0x60003D74: bltz        $t9, L_60005FE8
    if (SIGNED(ctx->r25) < 0) {
        // 0x60003D78: lw          $t7, 0x250($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X250);
            goto L_60005FE8;
    }
    // 0x60003D78: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x60003D7C: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60003D80:
    // 0x60003D80: lw          $t2, 0x250($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X250);
    // 0x60003D84: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60003D88: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x60003D8C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x60003D90: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60003D94: addiu       $t0, $t0, -0x4F3C
    ctx->r8 = ADD32(ctx->r8, -0X4F3C);
    // 0x60003D98: addu        $t5, $t3, $t0
    ctx->r13 = ADD32(ctx->r11, ctx->r8);
    // 0x60003D9C: lw          $t4, 0x68($t5)
    ctx->r12 = MEM_W(ctx->r13, 0X68);
    // 0x60003DA0: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x60003DA4: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x60003DA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003DAC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60003DB0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x60003DB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60003DB8: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x60003DBC: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60003DC0: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x60003DC4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x60003DC8: lw          $t7, 0x6C($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X6C);
    // 0x60003DCC: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60003DD0: lui         $at, 0x42D8
    ctx->r1 = S32(0X42D8 << 16);
    // 0x60003DD4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003DD8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x60003DDC: lw          $a0, 0x70($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X70);
    // 0x60003DE0: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x60003DE4: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x60003DE8: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x60003DEC: cvt.s.w     $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60003DF0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x60003DF4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60003DF8: sub.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x60003DFC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x60003E00: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x60003E04: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60003E08: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x60003E0C: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x60003E10: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x60003E14: jal         0x6000055C
    // 0x60003E18: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_36;
    // 0x60003E18: nop

    after_36:
    // 0x60003E1C: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x60003E20: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003E24: mtc1        $t2, $f18
    ctx->f18.u32l = ctx->r10;
    // 0x60003E28: lwc1        $f10, -0x407C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X407C);
    // 0x60003E2C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60003E30: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
    // 0x60003E34: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60003E38: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x60003E3C: lwc1        $f8, -0x4078($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4078);
    // 0x60003E40: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x60003E44: addu        $t9, $t9, $t1
    ctx->r25 = ADD32(ctx->r25, ctx->r9);
    // 0x60003E48: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x60003E4C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60003E50: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003E54: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x60003E58: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60003E5C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x60003E60: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x60003E64: jal         0x60000574
    // 0x60003E68: nop

    ovl_menu_battle_574(rdram, ctx);
        goto after_37;
    // 0x60003E68: nop

    after_37:
    // 0x60003E6C: jal         0x6000085C
    // 0x60003E70: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_38;
    // 0x60003E70: nop

    after_38:
    // 0x60003E74: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x60003E78: nop

    // 0x60003E7C: addiu       $t0, $t3, 0x1
    ctx->r8 = ADD32(ctx->r11, 0X1);
    // 0x60003E80: slti        $at, $t0, 0xF
    ctx->r1 = SIGNED(ctx->r8) < 0XF ? 1 : 0;
    // 0x60003E84: bne         $at, $zero, L_60003D80
    if (ctx->r1 != 0) {
        // 0x60003E88: sw          $t0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r8;
            goto L_60003D80;
    }
    // 0x60003E88: sw          $t0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r8;
    // 0x60003E8C: lw          $t4, 0x250($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X250);
    // 0x60003E90: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003E94: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x60003E98: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x60003E9C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60003EA0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x60003EA4: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60003EA8: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x60003EAC: jal         0x6000055C
    // 0x60003EB0: lui         $a2, 0x42D8
    ctx->r6 = S32(0X42D8 << 16);
    ovl_menu_battle_55C(rdram, ctx);
        goto after_39;
    // 0x60003EB0: lui         $a2, 0x42D8
    ctx->r6 = S32(0X42D8 << 16);
    after_39:
    // 0x60003EB4: lw          $t8, 0x250($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X250);
    // 0x60003EB8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003EBC: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x60003EC0: addu        $t5, $t5, $t8
    ctx->r13 = ADD32(ctx->r13, ctx->r24);
    // 0x60003EC4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60003EC8: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x60003ECC: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60003ED0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x60003ED4: jal         0x60000574
    // 0x60003ED8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_40;
    // 0x60003ED8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_40:
L_60003EDC:
    // 0x60003EDC: jal         0x60000BEC
    // 0x60003EE0: nop

    ovl_menu_battle_BEC(rdram, ctx);
        goto after_41;
    // 0x60003EE0: nop

    after_41:
    // 0x60003EE4: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
    // 0x60003EE8: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x60003EEC: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
    // 0x60003EF0: addu        $t9, $v0, $t1
    ctx->r25 = ADD32(ctx->r2, ctx->r9);
    // 0x60003EF4: lbu         $t2, 0x4($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X4);
    // 0x60003EF8: nop

    // 0x60003EFC: blez        $t2, L_60003FB8
    if (SIGNED(ctx->r10) <= 0) {
        // 0x60003F00: nop
    
            goto L_60003FB8;
    }
    // 0x60003F00: nop

    // 0x60003F04: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
L_60003F08:
    // 0x60003F08: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003F0C: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60003F10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x60003F14: jal         0x60001C84
    // 0x60003F18: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_42;
    // 0x60003F18: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
    after_42:
    // 0x60003F1C: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x60003F20: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60003F24: bne         $t3, $at, L_60003F54
    if (ctx->r11 != ctx->r1) {
        // 0x60003F28: sll         $t0, $t3, 2
        ctx->r8 = S32(ctx->r11 << 2);
            goto L_60003F54;
    }
    // 0x60003F28: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x60003F2C: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x60003F30: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60003F34: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003F38: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x60003F3C: lw          $a0, -0x4E68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4E68);
    // 0x60003F40: lui         $a1, 0xEE
    ctx->r5 = S32(0XEE << 16);
    // 0x60003F44: jal         0x60000658
    // 0x60003F48: ori         $a1, $a1, 0x11FF
    ctx->r5 = ctx->r5 | 0X11FF;
    ovl_menu_battle_658(rdram, ctx);
        goto after_43;
    // 0x60003F48: ori         $a1, $a1, 0x11FF
    ctx->r5 = ctx->r5 | 0X11FF;
    after_43:
    // 0x60003F4C: b           L_60003F84
    // 0x60003F50: nop

        goto L_60003F84;
    // 0x60003F50: nop

L_60003F54:
    // 0x60003F54: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60003F58: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60003F5C: bne         $t4, $at, L_60003F84
    if (ctx->r12 != ctx->r1) {
        // 0x60003F60: sll         $t6, $t4, 2
        ctx->r14 = S32(ctx->r12 << 2);
            goto L_60003F84;
    }
    // 0x60003F60: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x60003F64: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x60003F68: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60003F6C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60003F70: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x60003F74: lw          $a0, -0x4E68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4E68);
    // 0x60003F78: lui         $a1, 0xFF00
    ctx->r5 = S32(0XFF00 << 16);
    // 0x60003F7C: jal         0x60000658
    // 0x60003F80: ori         $a1, $a1, 0x20FF
    ctx->r5 = ctx->r5 | 0X20FF;
    ovl_menu_battle_658(rdram, ctx);
        goto after_44;
    // 0x60003F80: ori         $a1, $a1, 0x20FF
    ctx->r5 = ctx->r5 | 0X20FF;
    after_44:
L_60003F84:
    // 0x60003F84: jal         0x6000085C
    // 0x60003F88: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_45;
    // 0x60003F88: nop

    after_45:
    // 0x60003F8C: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x60003F90: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x60003F94: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
    // 0x60003F98: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x60003F9C: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
    // 0x60003FA0: addu        $t9, $t7, $t1
    ctx->r25 = ADD32(ctx->r15, ctx->r9);
    // 0x60003FA4: lbu         $t2, 0x4($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X4);
    // 0x60003FA8: nop

    // 0x60003FAC: slt         $at, $t5, $t2
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x60003FB0: bne         $at, $zero, L_60003F08
    if (ctx->r1 != 0) {
        // 0x60003FB4: lw          $a1, 0x108($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X108);
            goto L_60003F08;
    }
    // 0x60003FB4: lw          $a1, 0x108($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X108);
L_60003FB8:
    // 0x60003FB8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003FBC: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60003FC0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60003FC4: jal         0x6000064C
    // 0x60003FC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_46;
    // 0x60003FC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_46:
    // 0x60003FCC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x60003FD0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60003FD4: sw          $v0, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r2;
    // 0x60003FD8: lui         $at, 0x433C
    ctx->r1 = S32(0X433C << 16);
    // 0x60003FDC: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x60003FE0: lw          $t0, 0x264($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X264);
    // 0x60003FE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003FE8: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x60003FEC: swc1        $f4, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f4.u32l;
    // 0x60003FF0: lw          $t6, 0x264($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X264);
    // 0x60003FF4: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x60003FF8: sw          $t4, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->r12;
    // 0x60003FFC: lw          $t7, 0x264($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X264);
    // 0x60004000: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x60004004: sw          $t8, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r24;
    // 0x60004008: lw          $t9, 0x264($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X264);
    // 0x6000400C: addiu       $t5, $zero, 0x7000
    ctx->r13 = ADD32(0, 0X7000);
    // 0x60004010: sw          $t1, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r9;
    // 0x60004014: lw          $t2, 0x264($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X264);
    // 0x60004018: nop

    // 0x6000401C: sw          $t5, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r13;
    // 0x60004020: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60004024:
    // 0x60004024: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x60004028: addiu       $t4, $zero, 0xBC
    ctx->r12 = ADD32(0, 0XBC);
    // 0x6000402C: sll         $t0, $t3, 1
    ctx->r8 = S32(ctx->r11 << 1);
    // 0x60004030: subu        $t6, $t4, $t0
    ctx->r14 = SUB32(ctx->r12, ctx->r8);
    // 0x60004034: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x60004038: lw          $t8, 0x264($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X264);
    // 0x6000403C: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60004040: swc1        $f6, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f6.u32l;
    // 0x60004044: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x60004048: lw          $t5, 0x264($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X264);
    // 0x6000404C: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x60004050: addiu       $t9, $t1, 0x8
    ctx->r25 = ADD32(ctx->r9, 0X8);
    // 0x60004054: jal         0x6000085C
    // 0x60004058: sw          $t9, 0x50($t5)
    MEM_W(0X50, ctx->r13) = ctx->r25;
    ovl_menu_battle_85C(rdram, ctx);
        goto after_47;
    // 0x60004058: sw          $t9, 0x50($t5)
    MEM_W(0X50, ctx->r13) = ctx->r25;
    after_47:
    // 0x6000405C: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x60004060: nop

    // 0x60004064: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x60004068: slti        $at, $t3, 0xA
    ctx->r1 = SIGNED(ctx->r11) < 0XA ? 1 : 0;
    // 0x6000406C: bne         $at, $zero, L_60004024
    if (ctx->r1 != 0) {
        // 0x60004070: sw          $t3, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r11;
            goto L_60004024;
    }
    // 0x60004070: sw          $t3, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r11;
    // 0x60004074: lw          $t4, 0x250($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X250);
    // 0x60004078: nop

    // 0x6000407C: beq         $t4, $zero, L_600040B0
    if (ctx->r12 == 0) {
        // 0x60004080: lw          $t1, 0x250($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X250);
            goto L_600040B0;
    }
    // 0x60004080: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
    // 0x60004084: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x60004088: nop

    // 0x6000408C: addu        $t6, $t0, $t4
    ctx->r14 = ADD32(ctx->r8, ctx->r12);
    // 0x60004090: lbu         $t8, 0x3($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X3);
    // 0x60004094: nop

    // 0x60004098: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x6000409C: beq         $at, $zero, L_600040AC
    if (ctx->r1 == 0) {
        // 0x600040A0: addiu       $t7, $zero, 0x20
        ctx->r15 = ADD32(0, 0X20);
            goto L_600040AC;
    }
    // 0x600040A0: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x600040A4: b           L_600040BC
    // 0x600040A8: sw          $t7, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r15;
        goto L_600040BC;
    // 0x600040A8: sw          $t7, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r15;
L_600040AC:
    // 0x600040AC: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
L_600040B0:
    // 0x600040B0: nop

    // 0x600040B4: addiu       $t9, $t1, 0x5
    ctx->r25 = ADD32(ctx->r9, 0X5);
    // 0x600040B8: sw          $t9, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r25;
L_600040BC:
    // 0x600040BC: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600040C0: lw          $a2, -0x3FC0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3FC0);
    // 0x600040C4: lw          $a3, 0x108($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X108);
    // 0x600040C8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x600040CC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x600040D0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x600040D4: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x600040D8: jal         0x600006B8
    // 0x600040DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_battle_6B8(rdram, ctx);
        goto after_48;
    // 0x600040DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_48:
    // 0x600040E0: lw          $t2, 0x250($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X250);
    // 0x600040E4: sw          $v0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r2;
    // 0x600040E8: beq         $t2, $zero, L_60004114
    if (ctx->r10 == 0) {
        // 0x600040EC: nop
    
            goto L_60004114;
    }
    // 0x600040EC: nop

    // 0x600040F0: beq         $t2, $zero, L_60004174
    if (ctx->r10 == 0) {
        // 0x600040F4: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_60004174;
    }
    // 0x600040F4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x600040F8: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    // 0x600040FC: nop

    // 0x60004100: addu        $t0, $t3, $t2
    ctx->r8 = ADD32(ctx->r11, ctx->r10);
    // 0x60004104: lbu         $t4, 0x3($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X3);
    // 0x60004108: nop

    // 0x6000410C: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x60004110: bne         $at, $zero, L_60004170
    if (ctx->r1 != 0) {
        // 0x60004114: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_60004170;
    }
L_60004114:
    // 0x60004114: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004118: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x6000411C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004120: jal         0x60001C84
    // 0x60004124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_49;
    // 0x60004124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_49:
    // 0x60004128: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000412C: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60004130: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60004134: jal         0x60001C84
    // 0x60004138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_50;
    // 0x60004138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_50:
    // 0x6000413C: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60004140: addiu       $t6, $t6, -0x4F3C
    ctx->r14 = ADD32(ctx->r14, -0X4F3C);
    // 0x60004144: lw          $a0, 0x160($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X160);
    // 0x60004148: jal         0x60000640
    // 0x6000414C: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    ovl_menu_battle_640(rdram, ctx);
        goto after_51;
    // 0x6000414C: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    after_51:
    // 0x60004150: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60004154: addiu       $t8, $t8, -0x4F3C
    ctx->r24 = ADD32(ctx->r24, -0X4F3C);
    // 0x60004158: lw          $a0, 0x160($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X160);
    // 0x6000415C: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x60004160: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x60004164: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x60004168: jal         0x60000574
    // 0x6000416C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    ovl_menu_battle_574(rdram, ctx);
        goto after_52;
    // 0x6000416C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_52:
L_60004170:
    // 0x60004170: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_60004174:
    // 0x60004174: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60004178: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x6000417C: swc1        $f8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f8.u32l;
    // 0x60004180: swc1        $f8, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f8.u32l;
    // 0x60004184: swc1        $f16, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f16.u32l;
L_60004188:
    // 0x60004188: jal         0x600022AC
    // 0x6000418C: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_53;
    // 0x6000418C: nop

    after_53:
    // 0x60004190: lwc1        $f12, 0xE4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x60004194: jal         0x60000310
    // 0x60004198: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    ovl_menu_battle_310(rdram, ctx);
        goto after_54;
    // 0x60004198: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    after_54:
    // 0x6000419C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600041A0: lwc1        $f18, -0x4074($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4074);
    // 0x600041A4: lwc1        $f12, 0xE4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x600041A8: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x600041AC: jal         0x6000031C
    // 0x600041B0: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    ovl_menu_battle_31C(rdram, ctx);
        goto after_55;
    // 0x600041B0: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    after_55:
    // 0x600041B4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600041B8: lwc1        $f10, -0x4070($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4070);
    // 0x600041BC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x600041C0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600041C4: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x600041C8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600041CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600041D0: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x600041D4: mul.s       $f6, $f0, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x600041D8: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x600041DC: nop

    // 0x600041E0: bc1f        L_60004200
    if (!c1cs) {
        // 0x600041E4: swc1        $f6, 0xEC($sp)
        MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
            goto L_60004200;
    }
    // 0x600041E4: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x600041E8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600041EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600041F0: nop

    // 0x600041F4: sub.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x600041F8: b           L_60004248
    // 0x600041FC: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
        goto L_60004248;
    // 0x600041FC: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
L_60004200:
    // 0x60004200: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60004204: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60004208: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x6000420C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60004210: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x60004214: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x60004218: nop

    // 0x6000421C: bc1f        L_60004230
    if (!c1cs) {
        // 0x60004220: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_60004230;
    }
    // 0x60004220: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60004224: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60004228: b           L_60004244
    // 0x6000422C: add.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f10.fl;
        goto L_60004244;
    // 0x6000422C: add.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f10.fl;
L_60004230:
    // 0x60004230: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60004234: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60004238: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x6000423C: nop

    // 0x60004240: add.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f6.fl + ctx->f8.fl;
L_60004244:
    // 0x60004244: swc1        $f20, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f20.u32l;
L_60004248:
    // 0x60004248: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000424C: lwc1        $f18, -0x406C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X406C);
    // 0x60004250: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60004254: lwc1        $f6, -0x4068($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4068);
    // 0x60004258: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x6000425C: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x60004260: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x60004264: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60004268: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x6000426C: addiu       $t7, $t7, -0x4F3C
    ctx->r15 = ADD32(ctx->r15, -0X4F3C);
    // 0x60004270: lw          $a0, 0x5C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X5C);
    // 0x60004274: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x60004278: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x6000427C: jal         0x60000574
    // 0x60004280: nop

    ovl_menu_battle_574(rdram, ctx);
        goto after_56;
    // 0x60004280: nop

    after_56:
    // 0x60004284: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60004288: lwc1        $f18, -0x4064($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4064);
    // 0x6000428C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60004290: lwc1        $f6, -0x4060($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4060);
    // 0x60004294: lwc1        $f16, 0xF0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x60004298: lwc1        $f10, 0xEC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x6000429C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x600042A0: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x600042A4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x600042A8: addiu       $t1, $t1, -0x4F3C
    ctx->r9 = ADD32(ctx->r9, -0X4F3C);
    // 0x600042AC: lw          $a0, 0x160($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X160);
    // 0x600042B0: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x600042B4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x600042B8: jal         0x60000574
    // 0x600042BC: nop

    ovl_menu_battle_574(rdram, ctx);
        goto after_57;
    // 0x600042BC: nop

    after_57:
    // 0x600042C0: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600042C4: nop

    // 0x600042C8: andi        $t5, $t9, 0xF030
    ctx->r13 = ctx->r25 & 0XF030;
    // 0x600042CC: bne         $t5, $zero, L_600042E4
    if (ctx->r13 != 0) {
        // 0x600042D0: nop
    
            goto L_600042E4;
    }
    // 0x600042D0: nop

    // 0x600042D4: jal         0x6000085C
    // 0x600042D8: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_58;
    // 0x600042D8: nop

    after_58:
    // 0x600042DC: b           L_60004188
    // 0x600042E0: nop

        goto L_60004188;
    // 0x600042E0: nop

L_600042E4:
    // 0x600042E4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600042E8: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x600042EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600042F0: jal         0x60001C84
    // 0x600042F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_59;
    // 0x600042F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_59:
    // 0x600042F8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600042FC: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60004300: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60004304: jal         0x60001C84
    // 0x60004308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_60;
    // 0x60004308: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_60:
    // 0x6000430C: lw          $a0, 0x268($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X268);
    // 0x60004310: jal         0x600006AC
    // 0x60004314: nop

    ovl_menu_battle_6AC(rdram, ctx);
        goto after_61;
    // 0x60004314: nop

    after_61:
    // 0x60004318: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x6000431C: nop

    // 0x60004320: andi        $t2, $t3, 0x4000
    ctx->r10 = ctx->r11 & 0X4000;
    // 0x60004324: beq         $t2, $zero, L_6000433C
    if (ctx->r10 == 0) {
        // 0x60004328: nop
    
            goto L_6000433C;
    }
    // 0x60004328: nop

    // 0x6000432C: jal         0x60000244
    // 0x60004330: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_battle_244(rdram, ctx);
        goto after_62;
    // 0x60004330: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_62:
    // 0x60004334: b           L_60004348
    // 0x60004338: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
        goto L_60004348;
    // 0x60004338: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
L_6000433C:
    // 0x6000433C: jal         0x60000244
    // 0x60004340: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_battle_244(rdram, ctx);
        goto after_63;
    // 0x60004340: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_63:
    // 0x60004344: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
L_60004348:
    // 0x60004348: sw          $t0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r8;
L_6000434C:
    // 0x6000434C: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60004350: addiu       $t8, $zero, 0xBC
    ctx->r24 = ADD32(0, 0XBC);
    // 0x60004354: sll         $t6, $t4, 1
    ctx->r14 = S32(ctx->r12 << 1);
    // 0x60004358: subu        $t7, $t8, $t6
    ctx->r15 = SUB32(ctx->r24, ctx->r14);
    // 0x6000435C: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x60004360: lw          $t1, 0x264($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X264);
    // 0x60004364: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60004368: swc1        $f18, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f18.u32l;
    // 0x6000436C: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x60004370: lw          $t2, 0x264($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X264);
    // 0x60004374: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x60004378: addiu       $t3, $t5, 0x8
    ctx->r11 = ADD32(ctx->r13, 0X8);
    // 0x6000437C: jal         0x6000085C
    // 0x60004380: sw          $t3, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r11;
    ovl_menu_battle_85C(rdram, ctx);
        goto after_64;
    // 0x60004380: sw          $t3, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r11;
    after_64:
    // 0x60004384: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60004388: nop

    // 0x6000438C: addiu       $t4, $t0, -0x1
    ctx->r12 = ADD32(ctx->r8, -0X1);
    // 0x60004390: bgez        $t4, L_6000434C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x60004394: sw          $t4, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r12;
            goto L_6000434C;
    }
    // 0x60004394: sw          $t4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r12;
    // 0x60004398: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x6000439C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x600043A0: beq         $t8, $at, L_60004410
    if (ctx->r24 == ctx->r1) {
        // 0x600043A4: addiu       $at, $zero, 0x2000
        ctx->r1 = ADD32(0, 0X2000);
            goto L_60004410;
    }
    // 0x600043A4: addiu       $at, $zero, 0x2000
    ctx->r1 = ADD32(0, 0X2000);
    // 0x600043A8: beq         $t8, $at, L_60004410
    if (ctx->r24 == ctx->r1) {
        // 0x600043AC: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_60004410;
    }
    // 0x600043AC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600043B0: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x600043B4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x600043B8: jal         0x60001C84
    // 0x600043BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_65;
    // 0x600043BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_65:
    // 0x600043C0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600043C4: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x600043C8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x600043CC: jal         0x60001C84
    // 0x600043D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_66;
    // 0x600043D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_66:
    // 0x600043D4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600043D8: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x600043DC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x600043E0: jal         0x60001C84
    // 0x600043E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_67;
    // 0x600043E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_67:
    // 0x600043E8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600043EC: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x600043F0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x600043F4: jal         0x60001C84
    // 0x600043F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_68;
    // 0x600043F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_68:
    // 0x600043FC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004400: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60004404: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x60004408: jal         0x60001C84
    // 0x6000440C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_69;
    // 0x6000440C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_69:
L_60004410:
    // 0x60004410: lw          $a0, 0x264($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X264);
    // 0x60004414: jal         0x60000550
    // 0x60004418: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_70;
    // 0x60004418: nop

    after_70:
    // 0x6000441C: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60004420: nop

    // 0x60004424: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x60004428: bne         $t7, $zero, L_60004460
    if (ctx->r15 != 0) {
        // 0x6000442C: addiu       $t2, $zero, 0xF
        ctx->r10 = ADD32(0, 0XF);
            goto L_60004460;
    }
    // 0x6000442C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x60004430: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
    // 0x60004434: nop

    // 0x60004438: beq         $t1, $zero, L_600045EC
    if (ctx->r9 == 0) {
        // 0x6000443C: lw          $t4, 0x11C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X11C);
            goto L_600045EC;
    }
    // 0x6000443C: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x60004440: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x60004444: nop

    // 0x60004448: addu        $t5, $t9, $t1
    ctx->r13 = ADD32(ctx->r25, ctx->r9);
    // 0x6000444C: lbu         $t3, 0x3($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X3);
    // 0x60004450: nop

    // 0x60004454: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x60004458: beq         $at, $zero, L_600045E8
    if (ctx->r1 == 0) {
        // 0x6000445C: addiu       $t2, $zero, 0xF
        ctx->r10 = ADD32(0, 0XF);
            goto L_600045E8;
    }
    // 0x6000445C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
L_60004460:
    // 0x60004460: sw          $t2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r10;
L_60004464:
    // 0x60004464: lw          $t0, 0x250($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X250);
    // 0x60004468: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x6000446C: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x60004470: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x60004474: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x60004478: addiu       $t8, $t8, -0x4F3C
    ctx->r24 = ADD32(ctx->r24, -0X4F3C);
    // 0x6000447C: addu        $t6, $t4, $t8
    ctx->r14 = ADD32(ctx->r12, ctx->r24);
    // 0x60004480: lw          $t7, 0x68($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X68);
    // 0x60004484: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x60004488: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x6000448C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60004490: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60004494: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x60004498: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x6000449C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x600044A0: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600044A4: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x600044A8: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x600044AC: lw          $t5, 0x6C($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X6C);
    // 0x600044B0: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x600044B4: lui         $at, 0x42D8
    ctx->r1 = S32(0X42D8 << 16);
    // 0x600044B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600044BC: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x600044C0: lw          $a0, 0x70($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X70);
    // 0x600044C4: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x600044C8: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x600044CC: add.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x600044D0: cvt.s.w     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.fl = CVT_S_W(ctx->f18.u32l);
    // 0x600044D4: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x600044D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600044DC: sub.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x600044E0: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x600044E4: div.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x600044E8: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600044EC: mul.s       $f10, $f18, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x600044F0: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x600044F4: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x600044F8: jal         0x6000055C
    // 0x600044FC: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_71;
    // 0x600044FC: nop

    after_71:
    // 0x60004500: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60004504: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60004508: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x6000450C: lwc1        $f8, -0x405C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X405C);
    // 0x60004510: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60004514: lw          $t3, 0x250($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X250);
    // 0x60004518: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000451C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x60004520: lwc1        $f6, -0x4058($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4058);
    // 0x60004524: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x60004528: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x6000452C: add.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x60004530: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60004534: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004538: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x6000453C: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60004540: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x60004544: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x60004548: jal         0x60000574
    // 0x6000454C: nop

    ovl_menu_battle_574(rdram, ctx);
        goto after_72;
    // 0x6000454C: nop

    after_72:
    // 0x60004550: jal         0x6000085C
    // 0x60004554: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_73;
    // 0x60004554: nop

    after_73:
    // 0x60004558: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x6000455C: nop

    // 0x60004560: addiu       $t8, $t4, -0x1
    ctx->r24 = ADD32(ctx->r12, -0X1);
    // 0x60004564: bgez        $t8, L_60004464
    if (SIGNED(ctx->r24) >= 0) {
        // 0x60004568: sw          $t8, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r24;
            goto L_60004464;
    }
    // 0x60004568: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
    // 0x6000456C: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x60004570: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60004574: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x60004578: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x6000457C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60004580: addiu       $t1, $t1, -0x4F3C
    ctx->r9 = ADD32(ctx->r9, -0X4F3C);
    // 0x60004584: addu        $t6, $t9, $t1
    ctx->r14 = ADD32(ctx->r25, ctx->r9);
    // 0x60004588: lw          $t5, 0x68($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X68);
    // 0x6000458C: lw          $t3, 0x6C($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X6C);
    // 0x60004590: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x60004594: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x60004598: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x6000459C: lw          $a0, 0x70($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X70);
    // 0x600045A0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600045A4: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x600045A8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x600045AC: jal         0x6000055C
    // 0x600045B0: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_74;
    // 0x600045B0: nop

    after_74:
    // 0x600045B4: lw          $t2, 0x250($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X250);
    // 0x600045B8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600045BC: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x600045C0: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x600045C4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x600045C8: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x600045CC: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
    // 0x600045D0: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x600045D4: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x600045D8: jal         0x60000574
    // 0x600045DC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_75;
    // 0x600045DC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_75:
    // 0x600045E0: b           L_60003B40
    // 0x600045E4: nop

        goto L_60003B40;
    // 0x600045E4: nop

L_600045E8:
    // 0x600045E8: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
L_600045EC:
    // 0x600045EC: nop

    // 0x600045F0: andi        $t8, $t4, 0x10
    ctx->r24 = ctx->r12 & 0X10;
    // 0x600045F4: beq         $t8, $zero, L_60005DC0
    if (ctx->r24 == 0) {
        // 0x600045F8: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_60005DC0;
    }
    // 0x600045F8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600045FC: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60004600: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x60004604: jal         0x60001C84
    // 0x60004608: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_76;
    // 0x60004608: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_76:
    // 0x6000460C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004610: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60004614: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004618: jal         0x60001C84
    // 0x6000461C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_77;
    // 0x6000461C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_77:
    // 0x60004620: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x60004624: sw          $t7, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r15;
L_60004628:
    // 0x60004628: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x6000462C: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60004630: addiu       $t9, $t9, -0x4F3C
    ctx->r25 = ADD32(ctx->r25, -0X4F3C);
    // 0x60004634: lw          $a0, 0x20($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X20);
    // 0x60004638: sll         $t1, $a1, 3
    ctx->r9 = S32(ctx->r5 << 3);
    // 0x6000463C: jal         0x600005D4
    // 0x60004640: addiu       $a1, $t1, 0xF
    ctx->r5 = ADD32(ctx->r9, 0XF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_78;
    // 0x60004640: addiu       $a1, $t1, 0xF
    ctx->r5 = ADD32(ctx->r9, 0XF);
    after_78:
    // 0x60004644: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x60004648: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x6000464C: addiu       $t5, $t5, -0x4F3C
    ctx->r13 = ADD32(ctx->r13, -0X4F3C);
    // 0x60004650: lw          $a0, 0x34($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X34);
    // 0x60004654: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x60004658: jal         0x600005D4
    // 0x6000465C: addiu       $a1, $t6, 0xF
    ctx->r5 = ADD32(ctx->r14, 0XF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_79;
    // 0x6000465C: addiu       $a1, $t6, 0xF
    ctx->r5 = ADD32(ctx->r14, 0XF);
    after_79:
    // 0x60004660: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x60004664: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60004668: addiu       $t3, $t3, -0x4F3C
    ctx->r11 = ADD32(ctx->r11, -0X4F3C);
    // 0x6000466C: lw          $a0, 0x48($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X48);
    // 0x60004670: sll         $t2, $a1, 3
    ctx->r10 = S32(ctx->r5 << 3);
    // 0x60004674: jal         0x600005D4
    // 0x60004678: addiu       $a1, $t2, 0xF
    ctx->r5 = ADD32(ctx->r10, 0XF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_80;
    // 0x60004678: addiu       $a1, $t2, 0xF
    ctx->r5 = ADD32(ctx->r10, 0XF);
    after_80:
    // 0x6000467C: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x60004680: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60004684: addiu       $t0, $t0, -0x4F3C
    ctx->r8 = ADD32(ctx->r8, -0X4F3C);
    // 0x60004688: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x6000468C: sll         $t4, $a1, 3
    ctx->r12 = S32(ctx->r5 << 3);
    // 0x60004690: lw          $a0, 0x138($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X138);
    // 0x60004694: jal         0x600005D4
    // 0x60004698: addiu       $a1, $t4, 0xFF
    ctx->r5 = ADD32(ctx->r12, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_81;
    // 0x60004698: addiu       $a1, $t4, 0xFF
    ctx->r5 = ADD32(ctx->r12, 0XFF);
    after_81:
    // 0x6000469C: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x600046A0: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x600046A4: addiu       $t8, $t8, -0x4F3C
    ctx->r24 = ADD32(ctx->r24, -0X4F3C);
    // 0x600046A8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x600046AC: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x600046B0: lw          $a0, 0x14C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14C);
    // 0x600046B4: jal         0x600005D4
    // 0x600046B8: addiu       $a1, $t7, 0xFF
    ctx->r5 = ADD32(ctx->r15, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_82;
    // 0x600046B8: addiu       $a1, $t7, 0xFF
    ctx->r5 = ADD32(ctx->r15, 0XFF);
    after_82:
    // 0x600046BC: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_600046C0:
    // 0x600046C0: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x600046C4: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
    // 0x600046C8: nop

    // 0x600046CC: beq         $t9, $t1, L_60004734
    if (ctx->r25 == ctx->r9) {
        // 0x600046D0: lw          $t0, 0x11C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X11C);
            goto L_60004734;
    }
    // 0x600046D0: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x600046D4: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x600046D8: nop

    // 0x600046DC: bne         $t5, $zero, L_600046FC
    if (ctx->r13 != 0) {
        // 0x600046E0: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_600046FC;
    }
    // 0x600046E0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600046E4: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x600046E8: addiu       $a1, $t9, 0x5
    ctx->r5 = ADD32(ctx->r25, 0X5);
    // 0x600046EC: jal         0x60001C84
    // 0x600046F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_83;
    // 0x600046F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_83:
    // 0x600046F4: b           L_6000483C
    // 0x600046F8: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
        goto L_6000483C;
    // 0x600046F8: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
L_600046FC:
    // 0x600046FC: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x60004700: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x60004704: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x60004708: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x6000470C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60004710: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004714: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x60004718: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x6000471C: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x60004720: jal         0x600005D4
    // 0x60004724: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_84;
    // 0x60004724: addiu       $a1, $t2, 0x8
    ctx->r5 = ADD32(ctx->r10, 0X8);
    after_84:
    // 0x60004728: b           L_6000483C
    // 0x6000472C: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
        goto L_6000483C;
    // 0x6000472C: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60004730: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
L_60004734:
    // 0x60004734: nop

    // 0x60004738: bne         $t0, $zero, L_600047A0
    if (ctx->r8 != 0) {
        // 0x6000473C: lw          $t6, 0x11C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X11C);
            goto L_600047A0;
    }
    // 0x6000473C: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60004740: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60004744: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004748: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x6000474C: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x60004750: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60004754: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x60004758: lui         $a1, 0x3F0C
    ctx->r5 = S32(0X3F0C << 16);
    // 0x6000475C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60004760: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60004764: jal         0x60000574
    // 0x60004768: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_85;
    // 0x60004768: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_85:
    // 0x6000476C: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x60004770: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004774: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x60004778: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x6000477C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60004780: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60004784: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60004788: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x6000478C: jal         0x6000055C
    // 0x60004790: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    ovl_menu_battle_55C(rdram, ctx);
        goto after_86;
    // 0x60004790: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_86:
    // 0x60004794: b           L_6000483C
    // 0x60004798: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
        goto L_6000483C;
    // 0x60004798: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x6000479C: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
L_600047A0:
    // 0x600047A0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600047A4: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x600047A8: lwc1        $f6, -0x4054($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4054);
    // 0x600047AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600047B0: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x600047B4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600047B8: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x600047BC: lwc1        $f18, -0x4050($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4050);
    // 0x600047C0: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x600047C4: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x600047C8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x600047CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x600047D0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600047D4: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x600047D8: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x600047DC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x600047E0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x600047E4: jal         0x60000574
    // 0x600047E8: nop

    ovl_menu_battle_574(rdram, ctx);
        goto after_87;
    // 0x600047E8: nop

    after_87:
    // 0x600047EC: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x600047F0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600047F4: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x600047F8: lwc1        $f6, -0x404C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X404C);
    // 0x600047FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60004800: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x60004804: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x60004808: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x6000480C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60004810: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x60004814: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x60004818: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x6000481C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60004820: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004824: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60004828: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x6000482C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x60004830: jal         0x6000055C
    // 0x60004834: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    ovl_menu_battle_55C(rdram, ctx);
        goto after_88;
    // 0x60004834: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_88:
    // 0x60004838: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
L_6000483C:
    // 0x6000483C: nop

    // 0x60004840: addiu       $t8, $t4, 0x1
    ctx->r24 = ADD32(ctx->r12, 0X1);
    // 0x60004844: slti        $at, $t8, 0x5
    ctx->r1 = SIGNED(ctx->r24) < 0X5 ? 1 : 0;
    // 0x60004848: bne         $at, $zero, L_600046C0
    if (ctx->r1 != 0) {
        // 0x6000484C: sw          $t8, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r24;
            goto L_600046C0;
    }
    // 0x6000484C: sw          $t8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r24;
    // 0x60004850: jal         0x6000085C
    // 0x60004854: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_89;
    // 0x60004854: nop

    after_89:
    // 0x60004858: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x6000485C: nop

    // 0x60004860: addiu       $t1, $t7, -0x1
    ctx->r9 = ADD32(ctx->r15, -0X1);
    // 0x60004864: bgez        $t1, L_60004628
    if (SIGNED(ctx->r9) >= 0) {
        // 0x60004868: sw          $t1, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r9;
            goto L_60004628;
    }
    // 0x60004868: sw          $t1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r9;
    // 0x6000486C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004870: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60004874: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60004878: jal         0x6000064C
    // 0x6000487C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_90;
    // 0x6000487C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_90:
    // 0x60004880: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x60004884: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60004888: sw          $v0, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r2;
    // 0x6000488C: lui         $at, 0x4326
    ctx->r1 = S32(0X4326 << 16);
    // 0x60004890: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x60004894: lw          $t9, 0x264($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X264);
    // 0x60004898: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000489C: addiu       $t6, $zero, 0x110
    ctx->r14 = ADD32(0, 0X110);
    // 0x600048A0: swc1        $f10, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f10.u32l;
    // 0x600048A4: lw          $t3, 0x264($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X264);
    // 0x600048A8: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x600048AC: sw          $t6, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r14;
    // 0x600048B0: lw          $t0, 0x264($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X264);
    // 0x600048B4: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x600048B8: sw          $t2, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r10;
    // 0x600048BC: lw          $t8, 0x264($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X264);
    // 0x600048C0: addiu       $t7, $zero, 0x7000
    ctx->r15 = ADD32(0, 0X7000);
    // 0x600048C4: sw          $t4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->r12;
    // 0x600048C8: lw          $t1, 0x264($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X264);
    // 0x600048CC: nop

    // 0x600048D0: sw          $t7, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->r15;
    // 0x600048D4: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_600048D8:
    // 0x600048D8: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x600048DC: addiu       $t6, $zero, 0xA6
    ctx->r14 = ADD32(0, 0XA6);
    // 0x600048E0: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x600048E4: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x600048E8: subu        $t3, $t6, $t9
    ctx->r11 = SUB32(ctx->r14, ctx->r25);
    // 0x600048EC: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x600048F0: lw          $t2, 0x264($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X264);
    // 0x600048F4: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x600048F8: swc1        $f16, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f16.u32l;
    // 0x600048FC: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60004900: lw          $t7, 0x264($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X264);
    // 0x60004904: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x60004908: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x6000490C: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x60004910: addiu       $t8, $t4, 0x4
    ctx->r24 = ADD32(ctx->r12, 0X4);
    // 0x60004914: jal         0x6000085C
    // 0x60004918: sw          $t8, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r24;
    ovl_menu_battle_85C(rdram, ctx);
        goto after_91;
    // 0x60004918: sw          $t8, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r24;
    after_91:
    // 0x6000491C: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x60004920: nop

    // 0x60004924: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x60004928: slti        $at, $t5, 0xB
    ctx->r1 = SIGNED(ctx->r13) < 0XB ? 1 : 0;
    // 0x6000492C: bne         $at, $zero, L_600048D8
    if (ctx->r1 != 0) {
        // 0x60004930: sw          $t5, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r13;
            goto L_600048D8;
    }
    // 0x60004930: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
    // 0x60004934: lw          $t6, 0x250($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X250);
    // 0x60004938: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000493C: beq         $t6, $at, L_6000494C
    if (ctx->r14 == ctx->r1) {
        // 0x60004940: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_6000494C;
    }
    // 0x60004940: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60004944: bne         $t6, $at, L_60004968
    if (ctx->r14 != ctx->r1) {
        // 0x60004948: nop
    
            goto L_60004968;
    }
    // 0x60004948: nop

L_6000494C:
    // 0x6000494C: lw          $t9, 0x248($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X248);
    // 0x60004950: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60004954: lw          $t3, 0x28($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X28);
    // 0x60004958: nop

    // 0x6000495C: bne         $t3, $at, L_60004968
    if (ctx->r11 != ctx->r1) {
        // 0x60004960: addiu       $t2, $zero, 0x2
        ctx->r10 = ADD32(0, 0X2);
            goto L_60004968;
    }
    // 0x60004960: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x60004964: sw          $t2, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r10;
L_60004968:
    // 0x60004968: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000496C: addiu       $a0, $a0, -0x4DD4
    ctx->r4 = ADD32(ctx->r4, -0X4DD4);
    // 0x60004970: jal         0x60001AA0
    // 0x60004974: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_92;
    // 0x60004974: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_92:
    // 0x60004978: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x6000497C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60004980: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60004984: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x60004988: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x6000498C: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x60004990: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x60004994: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
L_60004998:
    // 0x60004998: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x6000499C: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x600049A0: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x600049A4: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x600049A8: lw          $t8, -0x42C4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C4);
    // 0x600049AC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600049B0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x600049B4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x600049B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x600049BC: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x600049C0: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x600049C4: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x600049C8: lw          $a0, -0x4DC8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DC8);
    // 0x600049CC: lw          $a1, -0x419C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X419C);
    // 0x600049D0: jal         0x60000574
    // 0x600049D4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_93;
    // 0x600049D4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_93:
    // 0x600049D8: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x600049DC: nop

    // 0x600049E0: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x600049E4: slti        $at, $t5, 0x5
    ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
    // 0x600049E8: bne         $at, $zero, L_60004998
    if (ctx->r1 != 0) {
        // 0x600049EC: sw          $t5, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r13;
            goto L_60004998;
    }
    // 0x600049EC: sw          $t5, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r13;
    // 0x600049F0: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_600049F4:
    // 0x600049F4: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x600049F8: addiu       $t6, $t6, -0x42C4
    ctx->r14 = ADD32(ctx->r14, -0X42C4);
    // 0x600049FC: lw          $t3, 0x0($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X0);
    // 0x60004A00: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x60004A04: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004A08: addu        $t9, $t3, $t2
    ctx->r25 = ADD32(ctx->r11, ctx->r10);
    // 0x60004A0C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x60004A10: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x60004A14: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60004A18: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x60004A1C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004A20: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x60004A24: jal         0x60000574
    // 0x60004A28: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_94;
    // 0x60004A28: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_94:
    // 0x60004A2C: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60004A30: addiu       $t8, $t8, -0x42C4
    ctx->r24 = ADD32(ctx->r24, -0X42C4);
    // 0x60004A34: lw          $t7, 0x0($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X0);
    // 0x60004A38: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x60004A3C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004A40: addu        $t1, $t7, $t4
    ctx->r9 = ADD32(ctx->r15, ctx->r12);
    // 0x60004A44: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x60004A48: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x60004A4C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60004A50: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x60004A54: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004A58: jal         0x600005D4
    // 0x60004A5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_95;
    // 0x60004A5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_95:
    // 0x60004A60: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60004A64: nop

    // 0x60004A68: addiu       $t3, $t6, 0x1
    ctx->r11 = ADD32(ctx->r14, 0X1);
    // 0x60004A6C: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x60004A70: bne         $at, $zero, L_600049F4
    if (ctx->r1 != 0) {
        // 0x60004A74: sw          $t3, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r11;
            goto L_600049F4;
    }
    // 0x60004A74: sw          $t3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r11;
    // 0x60004A78: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x60004A7C: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60004A80: addiu       $t2, $t2, -0x42C4
    ctx->r10 = ADD32(ctx->r10, -0X42C4);
    // 0x60004A84: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x60004A88: lw          $t8, 0x28($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X28);
    // 0x60004A8C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004A90: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x60004A94: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x60004A98: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x60004A9C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x60004AA0: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x60004AA4: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x60004AA8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x60004AAC: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004AB0: jal         0x60000574
    // 0x60004AB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_96;
    // 0x60004AB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_96:
    // 0x60004AB8: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x60004ABC: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60004AC0: addiu       $t1, $t1, -0x42C4
    ctx->r9 = ADD32(ctx->r9, -0X42C4);
    // 0x60004AC4: lw          $t5, 0x0($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X0);
    // 0x60004AC8: lw          $t3, 0x28($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X28);
    // 0x60004ACC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004AD0: addu        $t2, $t5, $t3
    ctx->r10 = ADD32(ctx->r13, ctx->r11);
    // 0x60004AD4: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x60004AD8: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x60004ADC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60004AE0: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x60004AE4: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004AE8: jal         0x600005D4
    // 0x60004AEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_97;
    // 0x60004AEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_97:
    // 0x60004AF0: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60004AF4:
    // 0x60004AF4: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60004AF8: addiu       $t9, $t9, -0x42C4
    ctx->r25 = ADD32(ctx->r25, -0X42C4);
    // 0x60004AFC: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x60004B00: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x60004B04: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004B08: addu        $t4, $t8, $t7
    ctx->r12 = ADD32(ctx->r24, ctx->r15);
    // 0x60004B0C: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x60004B10: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x60004B14: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60004B18: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60004B1C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004B20: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x60004B24: jal         0x60000574
    // 0x60004B28: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_98;
    // 0x60004B28: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_98:
    // 0x60004B2C: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60004B30: addiu       $t6, $t6, -0x42C4
    ctx->r14 = ADD32(ctx->r14, -0X42C4);
    // 0x60004B34: lw          $t5, 0x4($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X4);
    // 0x60004B38: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x60004B3C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004B40: addu        $t2, $t5, $t3
    ctx->r10 = ADD32(ctx->r13, ctx->r11);
    // 0x60004B44: sll         $t0, $t2, 2
    ctx->r8 = S32(ctx->r10 << 2);
    // 0x60004B48: addu        $t0, $t0, $t2
    ctx->r8 = ADD32(ctx->r8, ctx->r10);
    // 0x60004B4C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60004B50: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x60004B54: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004B58: jal         0x600005D4
    // 0x60004B5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_99;
    // 0x60004B5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_99:
    // 0x60004B60: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60004B64: nop

    // 0x60004B68: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x60004B6C: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x60004B70: bne         $at, $zero, L_60004AF4
    if (ctx->r1 != 0) {
        // 0x60004B74: sw          $t8, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r24;
            goto L_60004AF4;
    }
    // 0x60004B74: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
    // 0x60004B78: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60004B7C: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60004B80: addiu       $t7, $t7, -0x42C4
    ctx->r15 = ADD32(ctx->r15, -0X42C4);
    // 0x60004B84: lw          $t4, 0x4($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X4);
    // 0x60004B88: lw          $t6, 0x24($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X24);
    // 0x60004B8C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004B90: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x60004B94: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x60004B98: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x60004B9C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60004BA0: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x60004BA4: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x60004BA8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x60004BAC: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004BB0: jal         0x60000574
    // 0x60004BB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_100;
    // 0x60004BB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_100:
    // 0x60004BB8: lw          $t9, 0x248($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X248);
    // 0x60004BBC: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60004BC0: addiu       $t2, $t2, -0x42C4
    ctx->r10 = ADD32(ctx->r10, -0X42C4);
    // 0x60004BC4: lw          $t0, 0x4($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X4);
    // 0x60004BC8: lw          $t8, 0x24($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X24);
    // 0x60004BCC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004BD0: addu        $t7, $t0, $t8
    ctx->r15 = ADD32(ctx->r8, ctx->r24);
    // 0x60004BD4: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x60004BD8: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x60004BDC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60004BE0: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60004BE4: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004BE8: jal         0x600005D4
    // 0x60004BEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_101;
    // 0x60004BEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_101:
    // 0x60004BF0: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60004BF4:
    // 0x60004BF4: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60004BF8: addiu       $t4, $t4, -0x42C4
    ctx->r12 = ADD32(ctx->r12, -0X42C4);
    // 0x60004BFC: lw          $t6, 0x8($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X8);
    // 0x60004C00: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60004C04: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004C08: addu        $t3, $t6, $t5
    ctx->r11 = ADD32(ctx->r14, ctx->r13);
    // 0x60004C0C: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x60004C10: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x60004C14: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60004C18: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60004C1C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004C20: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x60004C24: jal         0x60000574
    // 0x60004C28: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_102;
    // 0x60004C28: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_102:
    // 0x60004C2C: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60004C30: addiu       $t9, $t9, -0x42C4
    ctx->r25 = ADD32(ctx->r25, -0X42C4);
    // 0x60004C34: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x60004C38: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x60004C3C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004C40: addu        $t7, $t0, $t8
    ctx->r15 = ADD32(ctx->r8, ctx->r24);
    // 0x60004C44: sll         $t1, $t7, 2
    ctx->r9 = S32(ctx->r15 << 2);
    // 0x60004C48: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x60004C4C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60004C50: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60004C54: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004C58: jal         0x600005D4
    // 0x60004C5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_103;
    // 0x60004C5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_103:
    // 0x60004C60: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x60004C64: nop

    // 0x60004C68: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x60004C6C: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x60004C70: bne         $at, $zero, L_60004BF4
    if (ctx->r1 != 0) {
        // 0x60004C74: sw          $t6, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r14;
            goto L_60004BF4;
    }
    // 0x60004C74: sw          $t6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r14;
    // 0x60004C78: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x60004C7C: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60004C80: addiu       $t5, $t5, -0x42C4
    ctx->r13 = ADD32(ctx->r13, -0X42C4);
    // 0x60004C84: lw          $t3, 0x8($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X8);
    // 0x60004C88: lw          $t9, 0x3C($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X3C);
    // 0x60004C8C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004C90: addu        $t0, $t3, $t9
    ctx->r8 = ADD32(ctx->r11, ctx->r25);
    // 0x60004C94: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x60004C98: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x60004C9C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60004CA0: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x60004CA4: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x60004CA8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x60004CAC: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004CB0: jal         0x60000574
    // 0x60004CB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_104;
    // 0x60004CB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_104:
    // 0x60004CB8: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x60004CBC: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60004CC0: addiu       $t7, $t7, -0x42C4
    ctx->r15 = ADD32(ctx->r15, -0X42C4);
    // 0x60004CC4: lw          $t1, 0x8($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X8);
    // 0x60004CC8: lw          $t6, 0x3C($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X3C);
    // 0x60004CCC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004CD0: addu        $t5, $t1, $t6
    ctx->r13 = ADD32(ctx->r9, ctx->r14);
    // 0x60004CD4: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x60004CD8: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x60004CDC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60004CE0: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60004CE4: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004CE8: jal         0x600005D4
    // 0x60004CEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_105;
    // 0x60004CEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_105:
    // 0x60004CF0: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60004CF4:
    // 0x60004CF4: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60004CF8: addiu       $t3, $t3, -0x42C4
    ctx->r11 = ADD32(ctx->r11, -0X42C4);
    // 0x60004CFC: lw          $t9, 0xC($t3)
    ctx->r25 = MEM_W(ctx->r11, 0XC);
    // 0x60004D00: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60004D04: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004D08: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x60004D0C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x60004D10: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x60004D14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60004D18: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60004D1C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004D20: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x60004D24: jal         0x60000574
    // 0x60004D28: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_106;
    // 0x60004D28: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_106:
    // 0x60004D2C: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60004D30: addiu       $t4, $t4, -0x42C4
    ctx->r12 = ADD32(ctx->r12, -0X42C4);
    // 0x60004D34: lw          $t1, 0xC($t4)
    ctx->r9 = MEM_W(ctx->r12, 0XC);
    // 0x60004D38: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60004D3C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004D40: addu        $t5, $t1, $t6
    ctx->r13 = ADD32(ctx->r9, ctx->r14);
    // 0x60004D44: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x60004D48: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x60004D4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60004D50: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60004D54: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004D58: jal         0x600005D4
    // 0x60004D5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_107;
    // 0x60004D5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_107:
    // 0x60004D60: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x60004D64: nop

    // 0x60004D68: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x60004D6C: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x60004D70: bne         $at, $zero, L_60004CF4
    if (ctx->r1 != 0) {
        // 0x60004D74: sw          $t9, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r25;
            goto L_60004CF4;
    }
    // 0x60004D74: sw          $t9, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r25;
    // 0x60004D78: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x60004D7C: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60004D80: addiu       $t0, $t0, -0x42C4
    ctx->r8 = ADD32(ctx->r8, -0X42C4);
    // 0x60004D84: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x60004D88: lw          $t4, 0x38($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X38);
    // 0x60004D8C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004D90: addu        $t1, $t8, $t4
    ctx->r9 = ADD32(ctx->r24, ctx->r12);
    // 0x60004D94: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x60004D98: addu        $t6, $t6, $t1
    ctx->r14 = ADD32(ctx->r14, ctx->r9);
    // 0x60004D9C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60004DA0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x60004DA4: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x60004DA8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x60004DAC: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004DB0: jal         0x60000574
    // 0x60004DB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_108;
    // 0x60004DB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_108:
    // 0x60004DB8: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x60004DBC: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60004DC0: addiu       $t5, $t5, -0x42C4
    ctx->r13 = ADD32(ctx->r13, -0X42C4);
    // 0x60004DC4: lw          $t2, 0xC($t5)
    ctx->r10 = MEM_W(ctx->r13, 0XC);
    // 0x60004DC8: lw          $t9, 0x38($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X38);
    // 0x60004DCC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004DD0: addu        $t0, $t2, $t9
    ctx->r8 = ADD32(ctx->r10, ctx->r25);
    // 0x60004DD4: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x60004DD8: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x60004DDC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60004DE0: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60004DE4: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004DE8: jal         0x600005D4
    // 0x60004DEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_109;
    // 0x60004DEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_109:
    // 0x60004DF0: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60004DF4:
    // 0x60004DF4: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60004DF8: addiu       $t8, $t8, -0x42C4
    ctx->r24 = ADD32(ctx->r24, -0X42C4);
    // 0x60004DFC: lw          $t4, 0x10($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X10);
    // 0x60004E00: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x60004E04: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004E08: addu        $t6, $t4, $t1
    ctx->r14 = ADD32(ctx->r12, ctx->r9);
    // 0x60004E0C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x60004E10: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x60004E14: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60004E18: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x60004E1C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004E20: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x60004E24: jal         0x60000574
    // 0x60004E28: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_110;
    // 0x60004E28: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_110:
    // 0x60004E2C: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60004E30: addiu       $t3, $t3, -0x42C4
    ctx->r11 = ADD32(ctx->r11, -0X42C4);
    // 0x60004E34: lw          $t2, 0x10($t3)
    ctx->r10 = MEM_W(ctx->r11, 0X10);
    // 0x60004E38: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60004E3C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004E40: addu        $t0, $t2, $t9
    ctx->r8 = ADD32(ctx->r10, ctx->r25);
    // 0x60004E44: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x60004E48: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x60004E4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60004E50: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60004E54: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004E58: jal         0x600005D4
    // 0x60004E5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_111;
    // 0x60004E5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_111:
    // 0x60004E60: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x60004E64: nop

    // 0x60004E68: addiu       $t4, $t8, 0x1
    ctx->r12 = ADD32(ctx->r24, 0X1);
    // 0x60004E6C: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x60004E70: bne         $at, $zero, L_60004DF4
    if (ctx->r1 != 0) {
        // 0x60004E74: sw          $t4, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r12;
            goto L_60004DF4;
    }
    // 0x60004E74: sw          $t4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r12;
    // 0x60004E78: lw          $t5, 0x248($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X248);
    // 0x60004E7C: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60004E80: addiu       $t1, $t1, -0x42C4
    ctx->r9 = ADD32(ctx->r9, -0X42C4);
    // 0x60004E84: lw          $t6, 0x10($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X10);
    // 0x60004E88: lw          $t3, 0x40($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X40);
    // 0x60004E8C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004E90: addu        $t2, $t6, $t3
    ctx->r10 = ADD32(ctx->r14, ctx->r11);
    // 0x60004E94: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x60004E98: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x60004E9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60004EA0: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x60004EA4: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x60004EA8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x60004EAC: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004EB0: jal         0x60000574
    // 0x60004EB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_112;
    // 0x60004EB4: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_112:
    // 0x60004EB8: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x60004EBC: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60004EC0: addiu       $t0, $t0, -0x42C4
    ctx->r8 = ADD32(ctx->r8, -0X42C4);
    // 0x60004EC4: lw          $t7, 0x10($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X10);
    // 0x60004EC8: lw          $t4, 0x40($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X40);
    // 0x60004ECC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004ED0: addu        $t1, $t7, $t4
    ctx->r9 = ADD32(ctx->r15, ctx->r12);
    // 0x60004ED4: sll         $t5, $t1, 2
    ctx->r13 = S32(ctx->r9 << 2);
    // 0x60004ED8: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x60004EDC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60004EE0: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x60004EE4: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60004EE8: jal         0x600005D4
    // 0x60004EEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_113;
    // 0x60004EEC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_113:
    // 0x60004EF0: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60004EF4:
    // 0x60004EF4: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x60004EF8: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60004EFC: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x60004F00: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x60004F04: lw          $t2, -0x41B0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X41B0);
    // 0x60004F08: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x60004F0C: blez        $t2, L_60004FA4
    if (SIGNED(ctx->r10) <= 0) {
        // 0x60004F10: lw          $t7, 0x108($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X108);
            goto L_60004FA4;
    }
    // 0x60004F10: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
L_60004F14:
    // 0x60004F14: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
    // 0x60004F18: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x60004F1C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x60004F20: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x60004F24: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60004F28: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x60004F2C: addu        $t4, $t0, $t7
    ctx->r12 = ADD32(ctx->r8, ctx->r15);
    // 0x60004F30: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60004F34: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x60004F38: lw          $t1, -0x4214($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4214);
    // 0x60004F3C: nop

    // 0x60004F40: bne         $t1, $zero, L_60004F78
    if (ctx->r9 != 0) {
        // 0x60004F44: lui         $t5, 0x6001
        ctx->r13 = S32(0X6001 << 16);
            goto L_60004F78;
    }
    // 0x60004F44: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60004F48: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x60004F4C: lw          $t5, -0x42C4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X42C4);
    // 0x60004F50: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60004F54: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60004F58: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x60004F5C: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x60004F60: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x60004F64: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60004F68: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60004F6C: lw          $a0, -0x4DC8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DC8);
    // 0x60004F70: jal         0x600005D4
    // 0x60004F74: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_114;
    // 0x60004F74: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_114:
L_60004F78:
    // 0x60004F78: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60004F7C: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60004F80: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x60004F84: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60004F88: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x60004F8C: lw          $t1, -0x41B0($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X41B0);
    // 0x60004F90: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x60004F94: slt         $at, $t8, $t1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x60004F98: bne         $at, $zero, L_60004F14
    if (ctx->r1 != 0) {
        // 0x60004F9C: sw          $t8, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r24;
            goto L_60004F14;
    }
    // 0x60004F9C: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
    // 0x60004FA0: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
L_60004FA4:
    // 0x60004FA4: nop

    // 0x60004FA8: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x60004FAC: slti        $at, $t5, 0x5
    ctx->r1 = SIGNED(ctx->r13) < 0X5 ? 1 : 0;
    // 0x60004FB0: bne         $at, $zero, L_60004EF4
    if (ctx->r1 != 0) {
        // 0x60004FB4: sw          $t5, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r13;
            goto L_60004EF4;
    }
    // 0x60004FB4: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
L_60004FB8:
    // 0x60004FB8: jal         0x600022AC
    // 0x60004FBC: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_115;
    // 0x60004FBC: nop

    after_115:
    // 0x60004FC0: lwc1        $f12, 0xE4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x60004FC4: jal         0x6000031C
    // 0x60004FC8: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    ovl_menu_battle_31C(rdram, ctx);
        goto after_116;
    // 0x60004FC8: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    after_116:
    // 0x60004FCC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60004FD0: lwc1        $f8, -0x4048($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4048);
    // 0x60004FD4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60004FD8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60004FDC: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x60004FE0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60004FE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60004FE8: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x60004FEC: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x60004FF0: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x60004FF4: nop

    // 0x60004FF8: bc1f        L_60005018
    if (!c1cs) {
        // 0x60004FFC: swc1        $f10, 0xEC($sp)
        MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
            goto L_60005018;
    }
    // 0x60004FFC: swc1        $f10, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f10.u32l;
    // 0x60005000: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60005004: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60005008: nop

    // 0x6000500C: sub.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x60005010: b           L_60005060
    // 0x60005014: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
        goto L_60005060;
    // 0x60005014: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
L_60005018:
    // 0x60005018: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x6000501C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60005020: lwc1        $f6, 0xE4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x60005024: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60005028: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x6000502C: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x60005030: nop

    // 0x60005034: bc1f        L_60005048
    if (!c1cs) {
        // 0x60005038: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_60005048;
    }
    // 0x60005038: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x6000503C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60005040: b           L_6000505C
    // 0x60005044: add.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f8.fl;
        goto L_6000505C;
    // 0x60005044: add.s       $f20, $f4, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f8.fl;
L_60005048:
    // 0x60005048: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x6000504C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60005050: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x60005054: nop

    // 0x60005058: add.s       $f20, $f10, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f6.fl;
L_6000505C:
    // 0x6000505C: swc1        $f20, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f20.u32l;
L_60005060:
    // 0x60005060: lwc1        $f12, 0xE4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x60005064: jal         0x60000310
    // 0x60005068: nop

    ovl_menu_battle_310(rdram, ctx);
        goto after_117;
    // 0x60005068: nop

    after_117:
    // 0x6000506C: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x60005070: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60005074: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x60005078: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x6000507C: lwc1        $f16, -0x4188($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4188);
    // 0x60005080: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60005084: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60005088: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000508C: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x60005090: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60005094: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x60005098: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x6000509C: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x600050A0: lwc1        $f18, -0x419C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X419C);
    // 0x600050A4: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x600050A8: lw          $t2, -0x42C4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X42C4);
    // 0x600050AC: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x600050B0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600050B4: mul.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x600050B8: lwc1        $f8, -0x4044($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4044);
    // 0x600050BC: lwc1        $f4, 0xEC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x600050C0: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x600050C4: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x600050C8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x600050CC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x600050D0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600050D4: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x600050D8: lw          $a0, -0x4DC8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DC8);
    // 0x600050DC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x600050E0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x600050E4: jal         0x60000574
    // 0x600050E8: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    ovl_menu_battle_574(rdram, ctx);
        goto after_118;
    // 0x600050E8: swc1        $f6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f6.u32l;
    after_118:
    // 0x600050EC: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    // 0x600050F0: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x600050F4: addiu       $at, $zero, 0x400
    ctx->r1 = ADD32(0, 0X400);
    // 0x600050F8: bne         $t4, $at, L_600051A0
    if (ctx->r12 != ctx->r1) {
        // 0x600050FC: sw          $t0, 0xFC($sp)
        MEM_W(0XFC, ctx->r29) = ctx->r8;
            goto L_600051A0;
    }
    // 0x600050FC: sw          $t0, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r8;
    // 0x60005100: jal         0x60000244
    // 0x60005104: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_119;
    // 0x60005104: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_119:
    // 0x60005108: lw          $t8, 0x100($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X100);
L_6000510C:
    // 0x6000510C: nop

    // 0x60005110: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x60005114: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x60005118: bne         $at, $zero, L_60005124
    if (ctx->r1 != 0) {
        // 0x6000511C: sw          $t1, 0x100($sp)
        MEM_W(0X100, ctx->r29) = ctx->r9;
            goto L_60005124;
    }
    // 0x6000511C: sw          $t1, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r9;
    // 0x60005120: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
L_60005124:
    // 0x60005124: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x60005128: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x6000512C: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x60005130: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x60005134: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60005138: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x6000513C: addu        $t9, $t5, $t2
    ctx->r25 = ADD32(ctx->r13, ctx->r10);
    // 0x60005140: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60005144: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x60005148: lw          $t3, -0x4214($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4214);
    // 0x6000514C: nop

    // 0x60005150: beq         $t3, $zero, L_6000510C
    if (ctx->r11 == 0) {
        // 0x60005154: lw          $t8, 0x100($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X100);
            goto L_6000510C;
    }
    // 0x60005154: lw          $t8, 0x100($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X100);
    // 0x60005158: lw          $t0, 0xFC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XFC);
    // 0x6000515C: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60005160: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x60005164: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x60005168: lw          $t8, -0x42C4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X42C4);
    // 0x6000516C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005170: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x60005174: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x60005178: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x6000517C: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60005180: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x60005184: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60005188: lw          $a0, -0x4DC8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DC8);
    // 0x6000518C: lw          $a1, -0x419C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X419C);
    // 0x60005190: jal         0x60000574
    // 0x60005194: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_120;
    // 0x60005194: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_120:
    // 0x60005198: b           L_60005278
    // 0x6000519C: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
        goto L_60005278;
    // 0x6000519C: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
L_600051A0:
    // 0x600051A0: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x600051A4: addiu       $at, $zero, 0x800
    ctx->r1 = ADD32(0, 0X800);
    // 0x600051A8: bne         $t7, $at, L_60005254
    if (ctx->r15 != ctx->r1) {
        // 0x600051AC: lw          $t9, 0x11C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X11C);
            goto L_60005254;
    }
    // 0x600051AC: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600051B0: jal         0x60000244
    // 0x600051B4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_121;
    // 0x600051B4: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_121:
    // 0x600051B8: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
L_600051BC:
    // 0x600051BC: nop

    // 0x600051C0: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x600051C4: bgez        $t5, L_600051D4
    if (SIGNED(ctx->r13) >= 0) {
        // 0x600051C8: sw          $t5, 0x100($sp)
        MEM_W(0X100, ctx->r29) = ctx->r13;
            goto L_600051D4;
    }
    // 0x600051C8: sw          $t5, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r13;
    // 0x600051CC: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x600051D0: sw          $t2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r10;
L_600051D4:
    // 0x600051D4: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
    // 0x600051D8: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    // 0x600051DC: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x600051E0: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x600051E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x600051E8: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x600051EC: addu        $t1, $t3, $t8
    ctx->r9 = ADD32(ctx->r11, ctx->r24);
    // 0x600051F0: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x600051F4: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x600051F8: lw          $t4, -0x4214($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4214);
    // 0x600051FC: nop

    // 0x60005200: beq         $t4, $zero, L_600051BC
    if (ctx->r12 == 0) {
        // 0x60005204: lw          $t6, 0x100($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X100);
            goto L_600051BC;
    }
    // 0x60005204: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x60005208: lw          $t7, 0xFC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XFC);
    // 0x6000520C: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60005210: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x60005214: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x60005218: lw          $t5, -0x42C4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X42C4);
    // 0x6000521C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005220: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x60005224: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x60005228: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x6000522C: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60005230: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x60005234: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60005238: lw          $a0, -0x4DC8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DC8);
    // 0x6000523C: lw          $a1, -0x419C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X419C);
    // 0x60005240: jal         0x60000574
    // 0x60005244: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_122;
    // 0x60005244: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_122:
    // 0x60005248: b           L_60005278
    // 0x6000524C: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
        goto L_60005278;
    // 0x6000524C: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
    // 0x60005250: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
L_60005254:
    // 0x60005254: nop

    // 0x60005258: andi        $t0, $t9, 0xF030
    ctx->r8 = ctx->r25 & 0XF030;
    // 0x6000525C: beq         $t0, $zero, L_60005278
    if (ctx->r8 == 0) {
        // 0x60005260: lw          $t3, 0x100($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X100);
            goto L_60005278;
    }
    // 0x60005260: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
    // 0x60005264: jal         0x60000244
    // 0x60005268: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_battle_244(rdram, ctx);
        goto after_123;
    // 0x60005268: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_123:
    // 0x6000526C: b           L_60005A98
    // 0x60005270: nop

        goto L_60005A98;
    // 0x60005270: nop

    // 0x60005274: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
L_60005278:
    // 0x60005278: nop

    // 0x6000527C: sltiu       $at, $t3, 0x5
    ctx->r1 = ctx->r11 < 0X5 ? 1 : 0;
    // 0x60005280: beq         $at, $zero, L_60005A88
    if (ctx->r1 == 0) {
        // 0x60005284: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_60005A88;
    }
    // 0x60005284: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60005288: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000528C: addu        $at, $at, $t3
    gpr jr_addend_60005298 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x60005290: lw          $t3, -0x4040($at)
    ctx->r11 = ADD32(ctx->r1, -0X4040);
    // 0x60005294: nop

    // 0x60005298: jr          $t3
    // 0x6000529C: nop

    switch (jr_addend_60005298 >> 2) {
        case 0: goto L_600052A0; break;
        case 1: goto L_60005460; break;
        case 2: goto L_600055EC; break;
        case 3: goto L_60005778; break;
        case 4: goto L_60005904; break;
        default: switch_error(__func__, 0x60005298, 0x6000BFC0);
    }
    // 0x6000529C: nop

L_600052A0:
    // 0x600052A0: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x600052A4: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x600052A8: lw          $t1, 0x28($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X28);
    // 0x600052AC: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x600052B0: bne         $t4, $at, L_600052C8
    if (ctx->r12 != ctx->r1) {
        // 0x600052B4: sw          $t1, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r9;
            goto L_600052C8;
    }
    // 0x600052B4: sw          $t1, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r9;
    // 0x600052B8: beq         $t1, $zero, L_600052C8
    if (ctx->r9 == 0) {
        // 0x600052BC: addiu       $t7, $t1, -0x1
        ctx->r15 = ADD32(ctx->r9, -0X1);
            goto L_600052C8;
    }
    // 0x600052BC: addiu       $t7, $t1, -0x1
    ctx->r15 = ADD32(ctx->r9, -0X1);
    // 0x600052C0: b           L_60005320
    // 0x600052C4: sw          $t7, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r15;
        goto L_60005320;
    // 0x600052C4: sw          $t7, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r15;
L_600052C8:
    // 0x600052C8: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x600052CC: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x600052D0: bne         $t5, $at, L_60005324
    if (ctx->r13 != ctx->r1) {
        // 0x600052D4: lw          $t8, 0x248($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X248);
            goto L_60005324;
    }
    // 0x600052D4: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x600052D8: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x600052DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600052E0: beq         $t2, $at, L_60005324
    if (ctx->r10 == ctx->r1) {
        // 0x600052E4: lw          $t8, 0x248($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X248);
            goto L_60005324;
    }
    // 0x600052E4: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x600052E8: lw          $t6, 0x250($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X250);
    // 0x600052EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600052F0: beq         $t6, $at, L_60005300
    if (ctx->r14 == ctx->r1) {
        // 0x600052F4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_60005300;
    }
    // 0x600052F4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x600052F8: bne         $t6, $at, L_60005314
    if (ctx->r14 != ctx->r1) {
        // 0x600052FC: lw          $t0, 0x108($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X108);
            goto L_60005314;
    }
    // 0x600052FC: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
L_60005300:
    // 0x60005300: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x60005304: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60005308: beq         $t9, $at, L_60005324
    if (ctx->r25 == ctx->r1) {
        // 0x6000530C: lw          $t8, 0x248($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X248);
            goto L_60005324;
    }
    // 0x6000530C: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x60005310: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
L_60005314:
    // 0x60005314: nop

    // 0x60005318: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x6000531C: sw          $t3, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r11;
L_60005320:
    // 0x60005320: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
L_60005324:
    // 0x60005324: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x60005328: lw          $t4, 0x28($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X28);
    // 0x6000532C: nop

    // 0x60005330: beq         $t4, $t1, L_60005A88
    if (ctx->r12 == ctx->r9) {
        // 0x60005334: nop
    
            goto L_60005A88;
    }
    // 0x60005334: nop

    // 0x60005338: jal         0x60000244
    // 0x6000533C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_124;
    // 0x6000533C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_124:
    // 0x60005340: lw          $t7, 0x100($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X100);
    // 0x60005344: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x60005348: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x6000534C: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x60005350: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x60005354: lw          $t2, -0x42C4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X42C4);
    // 0x60005358: lw          $t9, 0x28($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X28);
    // 0x6000535C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005360: addu        $t0, $t2, $t9
    ctx->r8 = ADD32(ctx->r10, ctx->r25);
    // 0x60005364: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x60005368: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x6000536C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60005370: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x60005374: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005378: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x6000537C: jal         0x60000574
    // 0x60005380: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_125;
    // 0x60005380: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_125:
    // 0x60005384: lw          $t8, 0x100($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X100);
    // 0x60005388: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x6000538C: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60005390: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x60005394: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x60005398: lw          $t1, -0x42C4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X42C4);
    // 0x6000539C: lw          $t5, 0x28($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X28);
    // 0x600053A0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600053A4: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x600053A8: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x600053AC: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x600053B0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x600053B4: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x600053B8: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x600053BC: jal         0x600005D4
    // 0x600053C0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_126;
    // 0x600053C0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_126:
    // 0x600053C4: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x600053C8: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x600053CC: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x600053D0: sw          $t9, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r25;
    // 0x600053D4: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
    // 0x600053D8: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x600053DC: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x600053E0: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x600053E4: lw          $t4, -0x42C4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X42C4);
    // 0x600053E8: lw          $t1, 0x28($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X28);
    // 0x600053EC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600053F0: addu        $t5, $t4, $t1
    ctx->r13 = ADD32(ctx->r12, ctx->r9);
    // 0x600053F4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x600053F8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x600053FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x60005400: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x60005404: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x60005408: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x6000540C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005410: jal         0x60000574
    // 0x60005414: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_127;
    // 0x60005414: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_127:
    // 0x60005418: lw          $t2, 0x100($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X100);
    // 0x6000541C: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x60005420: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60005424: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x60005428: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x6000542C: lw          $t0, -0x42C4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X42C4);
    // 0x60005430: lw          $t8, 0x28($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X28);
    // 0x60005434: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005438: addu        $t7, $t0, $t8
    ctx->r15 = ADD32(ctx->r8, ctx->r24);
    // 0x6000543C: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x60005440: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x60005444: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x60005448: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x6000544C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005450: jal         0x600005D4
    // 0x60005454: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_128;
    // 0x60005454: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_128:
    // 0x60005458: b           L_60005A88
    // 0x6000545C: nop

        goto L_60005A88;
    // 0x6000545C: nop

L_60005460:
    // 0x60005460: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60005464: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60005468: lw          $t5, 0x24($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X24);
    // 0x6000546C: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x60005470: bne         $t6, $at, L_60005488
    if (ctx->r14 != ctx->r1) {
        // 0x60005474: sw          $t5, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r13;
            goto L_60005488;
    }
    // 0x60005474: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
    // 0x60005478: beq         $t5, $zero, L_60005488
    if (ctx->r13 == 0) {
        // 0x6000547C: addiu       $t2, $t5, -0x1
        ctx->r10 = ADD32(ctx->r13, -0X1);
            goto L_60005488;
    }
    // 0x6000547C: addiu       $t2, $t5, -0x1
    ctx->r10 = ADD32(ctx->r13, -0X1);
    // 0x60005480: b           L_600054AC
    // 0x60005484: sw          $t2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r10;
        goto L_600054AC;
    // 0x60005484: sw          $t2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r10;
L_60005488:
    // 0x60005488: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x6000548C: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x60005490: bne         $t9, $at, L_600054B0
    if (ctx->r25 != ctx->r1) {
        // 0x60005494: lw          $t8, 0x248($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X248);
            goto L_600054B0;
    }
    // 0x60005494: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x60005498: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x6000549C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600054A0: beq         $t3, $at, L_600054AC
    if (ctx->r11 == ctx->r1) {
        // 0x600054A4: addiu       $t0, $t3, 0x1
        ctx->r8 = ADD32(ctx->r11, 0X1);
            goto L_600054AC;
    }
    // 0x600054A4: addiu       $t0, $t3, 0x1
    ctx->r8 = ADD32(ctx->r11, 0X1);
    // 0x600054A8: sw          $t0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r8;
L_600054AC:
    // 0x600054AC: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
L_600054B0:
    // 0x600054B0: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x600054B4: lw          $t7, 0x24($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X24);
    // 0x600054B8: nop

    // 0x600054BC: beq         $t7, $t4, L_60005A88
    if (ctx->r15 == ctx->r12) {
        // 0x600054C0: nop
    
            goto L_60005A88;
    }
    // 0x600054C0: nop

    // 0x600054C4: jal         0x60000244
    // 0x600054C8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_129;
    // 0x600054C8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_129:
    // 0x600054CC: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x600054D0: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x600054D4: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x600054D8: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x600054DC: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x600054E0: lw          $t5, -0x42C4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X42C4);
    // 0x600054E4: lw          $t9, 0x24($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X24);
    // 0x600054E8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600054EC: addu        $t3, $t5, $t9
    ctx->r11 = ADD32(ctx->r13, ctx->r25);
    // 0x600054F0: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x600054F4: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x600054F8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x600054FC: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x60005500: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005504: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x60005508: jal         0x60000574
    // 0x6000550C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_130;
    // 0x6000550C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_130:
    // 0x60005510: lw          $t8, 0x100($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X100);
    // 0x60005514: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60005518: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x6000551C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x60005520: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x60005524: lw          $t4, -0x42C4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X42C4);
    // 0x60005528: lw          $t6, 0x24($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X24);
    // 0x6000552C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005530: addu        $t2, $t4, $t6
    ctx->r10 = ADD32(ctx->r12, ctx->r14);
    // 0x60005534: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x60005538: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x6000553C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60005540: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x60005544: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005548: jal         0x600005D4
    // 0x6000554C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_131;
    // 0x6000554C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_131:
    // 0x60005550: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x60005554: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x60005558: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x6000555C: sw          $t9, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->r25;
    // 0x60005560: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    // 0x60005564: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60005568: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x6000556C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x60005570: lw          $t7, -0x42C4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42C4);
    // 0x60005574: lw          $t4, 0x24($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X24);
    // 0x60005578: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000557C: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x60005580: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x60005584: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x60005588: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x6000558C: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60005590: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x60005594: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x60005598: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x6000559C: jal         0x60000574
    // 0x600055A0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_132;
    // 0x600055A0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_132:
    // 0x600055A4: lw          $t5, 0x100($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X100);
    // 0x600055A8: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x600055AC: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x600055B0: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x600055B4: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x600055B8: lw          $t3, -0x42C4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X42C4);
    // 0x600055BC: lw          $t8, 0x24($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X24);
    // 0x600055C0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600055C4: addu        $t1, $t3, $t8
    ctx->r9 = ADD32(ctx->r11, ctx->r24);
    // 0x600055C8: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x600055CC: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x600055D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x600055D4: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x600055D8: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x600055DC: jal         0x600005D4
    // 0x600055E0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_133;
    // 0x600055E0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_133:
    // 0x600055E4: b           L_60005A88
    // 0x600055E8: nop

        goto L_60005A88;
    // 0x600055E8: nop

L_600055EC:
    // 0x600055EC: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x600055F0: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x600055F4: lw          $t6, 0x3C($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X3C);
    // 0x600055F8: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x600055FC: bne         $t2, $at, L_60005614
    if (ctx->r10 != ctx->r1) {
        // 0x60005600: sw          $t6, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r14;
            goto L_60005614;
    }
    // 0x60005600: sw          $t6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r14;
    // 0x60005604: beq         $t6, $zero, L_60005614
    if (ctx->r14 == 0) {
        // 0x60005608: addiu       $t5, $t6, -0x1
        ctx->r13 = ADD32(ctx->r14, -0X1);
            goto L_60005614;
    }
    // 0x60005608: addiu       $t5, $t6, -0x1
    ctx->r13 = ADD32(ctx->r14, -0X1);
    // 0x6000560C: b           L_60005638
    // 0x60005610: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
        goto L_60005638;
    // 0x60005610: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
L_60005614:
    // 0x60005614: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60005618: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x6000561C: bne         $t9, $at, L_6000563C
    if (ctx->r25 != ctx->r1) {
        // 0x60005620: lw          $t8, 0x248($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X248);
            goto L_6000563C;
    }
    // 0x60005620: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x60005624: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60005628: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000562C: beq         $t0, $at, L_60005638
    if (ctx->r8 == ctx->r1) {
        // 0x60005630: addiu       $t3, $t0, 0x1
        ctx->r11 = ADD32(ctx->r8, 0X1);
            goto L_60005638;
    }
    // 0x60005630: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x60005634: sw          $t3, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r11;
L_60005638:
    // 0x60005638: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
L_6000563C:
    // 0x6000563C: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x60005640: lw          $t1, 0x3C($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X3C);
    // 0x60005644: nop

    // 0x60005648: beq         $t1, $t7, L_60005A88
    if (ctx->r9 == ctx->r15) {
        // 0x6000564C: nop
    
            goto L_60005A88;
    }
    // 0x6000564C: nop

    // 0x60005650: jal         0x60000244
    // 0x60005654: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_134;
    // 0x60005654: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_134:
    // 0x60005658: lw          $t4, 0x100($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X100);
    // 0x6000565C: lw          $t5, 0x248($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X248);
    // 0x60005660: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60005664: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x60005668: addu        $t6, $t6, $t2
    ctx->r14 = ADD32(ctx->r14, ctx->r10);
    // 0x6000566C: lw          $t6, -0x42C4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C4);
    // 0x60005670: lw          $t9, 0x3C($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X3C);
    // 0x60005674: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005678: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x6000567C: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x60005680: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x60005684: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60005688: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x6000568C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005690: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x60005694: jal         0x60000574
    // 0x60005698: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_135;
    // 0x60005698: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_135:
    // 0x6000569C: lw          $t8, 0x100($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X100);
    // 0x600056A0: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x600056A4: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x600056A8: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x600056AC: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x600056B0: lw          $t7, -0x42C4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42C4);
    // 0x600056B4: lw          $t2, 0x3C($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X3C);
    // 0x600056B8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600056BC: addu        $t5, $t7, $t2
    ctx->r13 = ADD32(ctx->r15, ctx->r10);
    // 0x600056C0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x600056C4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x600056C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x600056CC: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x600056D0: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x600056D4: jal         0x600005D4
    // 0x600056D8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_136;
    // 0x600056D8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_136:
    // 0x600056DC: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x600056E0: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x600056E4: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x600056E8: sw          $t9, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r25;
    // 0x600056EC: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
    // 0x600056F0: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x600056F4: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x600056F8: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x600056FC: lw          $t1, -0x42C4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X42C4);
    // 0x60005700: lw          $t7, 0x3C($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X3C);
    // 0x60005704: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005708: addu        $t2, $t1, $t7
    ctx->r10 = ADD32(ctx->r9, ctx->r15);
    // 0x6000570C: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x60005710: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x60005714: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60005718: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x6000571C: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x60005720: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x60005724: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005728: jal         0x60000574
    // 0x6000572C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_137;
    // 0x6000572C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_137:
    // 0x60005730: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x60005734: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x60005738: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x6000573C: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x60005740: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x60005744: lw          $t0, -0x42C4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X42C4);
    // 0x60005748: lw          $t8, 0x3C($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X3C);
    // 0x6000574C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005750: addu        $t4, $t0, $t8
    ctx->r12 = ADD32(ctx->r8, ctx->r24);
    // 0x60005754: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x60005758: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x6000575C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60005760: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60005764: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005768: jal         0x600005D4
    // 0x6000576C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_138;
    // 0x6000576C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_138:
    // 0x60005770: b           L_60005A88
    // 0x60005774: nop

        goto L_60005A88;
    // 0x60005774: nop

L_60005778:
    // 0x60005778: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x6000577C: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60005780: lw          $t2, 0x38($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X38);
    // 0x60005784: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x60005788: bne         $t5, $at, L_600057A0
    if (ctx->r13 != ctx->r1) {
        // 0x6000578C: sw          $t2, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r10;
            goto L_600057A0;
    }
    // 0x6000578C: sw          $t2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r10;
    // 0x60005790: beq         $t2, $zero, L_600057A0
    if (ctx->r10 == 0) {
        // 0x60005794: addiu       $t6, $t2, -0x1
        ctx->r14 = ADD32(ctx->r10, -0X1);
            goto L_600057A0;
    }
    // 0x60005794: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x60005798: b           L_600057C4
    // 0x6000579C: sw          $t6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r14;
        goto L_600057C4;
    // 0x6000579C: sw          $t6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r14;
L_600057A0:
    // 0x600057A0: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600057A4: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x600057A8: bne         $t9, $at, L_600057C8
    if (ctx->r25 != ctx->r1) {
        // 0x600057AC: lw          $t8, 0x248($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X248);
            goto L_600057C8;
    }
    // 0x600057AC: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x600057B0: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x600057B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600057B8: beq         $t3, $at, L_600057C4
    if (ctx->r11 == ctx->r1) {
        // 0x600057BC: addiu       $t0, $t3, 0x1
        ctx->r8 = ADD32(ctx->r11, 0X1);
            goto L_600057C4;
    }
    // 0x600057BC: addiu       $t0, $t3, 0x1
    ctx->r8 = ADD32(ctx->r11, 0X1);
    // 0x600057C0: sw          $t0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r8;
L_600057C4:
    // 0x600057C4: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
L_600057C8:
    // 0x600057C8: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x600057CC: lw          $t4, 0x38($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X38);
    // 0x600057D0: nop

    // 0x600057D4: beq         $t4, $t1, L_60005A88
    if (ctx->r12 == ctx->r9) {
        // 0x600057D8: nop
    
            goto L_60005A88;
    }
    // 0x600057D8: nop

    // 0x600057DC: jal         0x60000244
    // 0x600057E0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_139;
    // 0x600057E0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_139:
    // 0x600057E4: lw          $t7, 0x100($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X100);
    // 0x600057E8: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x600057EC: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x600057F0: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x600057F4: addu        $t2, $t2, $t5
    ctx->r10 = ADD32(ctx->r10, ctx->r13);
    // 0x600057F8: lw          $t2, -0x42C4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X42C4);
    // 0x600057FC: lw          $t9, 0x38($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X38);
    // 0x60005800: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005804: addu        $t3, $t2, $t9
    ctx->r11 = ADD32(ctx->r10, ctx->r25);
    // 0x60005808: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x6000580C: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x60005810: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60005814: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x60005818: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x6000581C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x60005820: jal         0x60000574
    // 0x60005824: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_140;
    // 0x60005824: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_140:
    // 0x60005828: lw          $t8, 0x100($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X100);
    // 0x6000582C: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x60005830: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60005834: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x60005838: addu        $t1, $t1, $t4
    ctx->r9 = ADD32(ctx->r9, ctx->r12);
    // 0x6000583C: lw          $t1, -0x42C4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X42C4);
    // 0x60005840: lw          $t5, 0x38($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X38);
    // 0x60005844: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005848: addu        $t6, $t1, $t5
    ctx->r14 = ADD32(ctx->r9, ctx->r13);
    // 0x6000584C: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x60005850: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x60005854: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60005858: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x6000585C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005860: jal         0x600005D4
    // 0x60005864: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_141;
    // 0x60005864: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_141:
    // 0x60005868: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x6000586C: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x60005870: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60005874: sw          $t9, 0x38($t3)
    MEM_W(0X38, ctx->r11) = ctx->r25;
    // 0x60005878: lw          $t0, 0x100($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X100);
    // 0x6000587C: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x60005880: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x60005884: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x60005888: lw          $t4, -0x42C4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X42C4);
    // 0x6000588C: lw          $t1, 0x38($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X38);
    // 0x60005890: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005894: addu        $t5, $t4, $t1
    ctx->r13 = ADD32(ctx->r12, ctx->r9);
    // 0x60005898: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x6000589C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x600058A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x600058A4: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x600058A8: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x600058AC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x600058B0: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x600058B4: jal         0x60000574
    // 0x600058B8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_142;
    // 0x600058B8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_142:
    // 0x600058BC: lw          $t2, 0x100($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X100);
    // 0x600058C0: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x600058C4: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x600058C8: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x600058CC: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x600058D0: lw          $t3, -0x42C4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X42C4);
    // 0x600058D4: lw          $t8, 0x38($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X38);
    // 0x600058D8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600058DC: addu        $t7, $t3, $t8
    ctx->r15 = ADD32(ctx->r11, ctx->r24);
    // 0x600058E0: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x600058E4: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x600058E8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x600058EC: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x600058F0: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x600058F4: jal         0x600005D4
    // 0x600058F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_143;
    // 0x600058F8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_143:
    // 0x600058FC: b           L_60005A88
    // 0x60005900: nop

        goto L_60005A88;
    // 0x60005900: nop

L_60005904:
    // 0x60005904: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60005908: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x6000590C: lw          $t5, 0x40($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X40);
    // 0x60005910: addiu       $at, $zero, 0x200
    ctx->r1 = ADD32(0, 0X200);
    // 0x60005914: bne         $t6, $at, L_6000592C
    if (ctx->r14 != ctx->r1) {
        // 0x60005918: sw          $t5, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r13;
            goto L_6000592C;
    }
    // 0x60005918: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
    // 0x6000591C: beq         $t5, $zero, L_6000592C
    if (ctx->r13 == 0) {
        // 0x60005920: addiu       $t2, $t5, -0x1
        ctx->r10 = ADD32(ctx->r13, -0X1);
            goto L_6000592C;
    }
    // 0x60005920: addiu       $t2, $t5, -0x1
    ctx->r10 = ADD32(ctx->r13, -0X1);
    // 0x60005924: b           L_60005950
    // 0x60005928: sw          $t2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r10;
        goto L_60005950;
    // 0x60005928: sw          $t2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r10;
L_6000592C:
    // 0x6000592C: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60005930: addiu       $at, $zero, 0x100
    ctx->r1 = ADD32(0, 0X100);
    // 0x60005934: bne         $t9, $at, L_60005954
    if (ctx->r25 != ctx->r1) {
        // 0x60005938: lw          $t8, 0x248($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X248);
            goto L_60005954;
    }
    // 0x60005938: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x6000593C: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60005940: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60005944: beq         $t0, $at, L_60005950
    if (ctx->r8 == ctx->r1) {
        // 0x60005948: addiu       $t3, $t0, 0x1
        ctx->r11 = ADD32(ctx->r8, 0X1);
            goto L_60005950;
    }
    // 0x60005948: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x6000594C: sw          $t3, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r11;
L_60005950:
    // 0x60005950: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
L_60005954:
    // 0x60005954: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60005958: lw          $t7, 0x40($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X40);
    // 0x6000595C: nop

    // 0x60005960: beq         $t7, $t4, L_60005A88
    if (ctx->r15 == ctx->r12) {
        // 0x60005964: nop
    
            goto L_60005A88;
    }
    // 0x60005964: nop

    // 0x60005968: jal         0x60000244
    // 0x6000596C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_144;
    // 0x6000596C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_144:
    // 0x60005970: lw          $t1, 0x100($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X100);
    // 0x60005974: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x60005978: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x6000597C: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x60005980: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x60005984: lw          $t5, -0x42C4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X42C4);
    // 0x60005988: lw          $t9, 0x40($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X40);
    // 0x6000598C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005990: addu        $t0, $t5, $t9
    ctx->r8 = ADD32(ctx->r13, ctx->r25);
    // 0x60005994: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x60005998: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x6000599C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x600059A0: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x600059A4: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x600059A8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x600059AC: jal         0x60000574
    // 0x600059B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_145;
    // 0x600059B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_145:
    // 0x600059B4: lw          $t8, 0x100($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X100);
    // 0x600059B8: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x600059BC: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x600059C0: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x600059C4: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x600059C8: lw          $t4, -0x42C4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X42C4);
    // 0x600059CC: lw          $t6, 0x40($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X40);
    // 0x600059D0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600059D4: addu        $t2, $t4, $t6
    ctx->r10 = ADD32(ctx->r12, ctx->r14);
    // 0x600059D8: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x600059DC: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x600059E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x600059E4: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x600059E8: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x600059EC: jal         0x600005D4
    // 0x600059F0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_146;
    // 0x600059F0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_146:
    // 0x600059F4: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x600059F8: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x600059FC: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60005A00: sw          $t9, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r25;
    // 0x60005A04: lw          $t3, 0x100($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X100);
    // 0x60005A08: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60005A0C: sll         $t8, $t3, 2
    ctx->r24 = S32(ctx->r11 << 2);
    // 0x60005A10: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x60005A14: lw          $t7, -0x42C4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X42C4);
    // 0x60005A18: lw          $t4, 0x40($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X40);
    // 0x60005A1C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005A20: addu        $t6, $t7, $t4
    ctx->r14 = ADD32(ctx->r15, ctx->r12);
    // 0x60005A24: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x60005A28: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x60005A2C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60005A30: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60005A34: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x60005A38: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x60005A3C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005A40: jal         0x60000574
    // 0x60005A44: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    ovl_menu_battle_574(rdram, ctx);
        goto after_147;
    // 0x60005A44: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    after_147:
    // 0x60005A48: lw          $t5, 0x100($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X100);
    // 0x60005A4C: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x60005A50: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60005A54: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x60005A58: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x60005A5C: lw          $t0, -0x42C4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X42C4);
    // 0x60005A60: lw          $t8, 0x40($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X40);
    // 0x60005A64: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005A68: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x60005A6C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x60005A70: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x60005A74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60005A78: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60005A7C: lw          $a0, -0x4DB4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DB4);
    // 0x60005A80: jal         0x600005D4
    // 0x60005A84: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_148;
    // 0x60005A84: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_148:
L_60005A88:
    // 0x60005A88: jal         0x6000085C
    // 0x60005A8C: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_149;
    // 0x60005A8C: nop

    after_149:
    // 0x60005A90: b           L_60004FB8
    // 0x60005A94: nop

        goto L_60004FB8;
    // 0x60005A94: nop

L_60005A98:
    // 0x60005A98: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005A9C: addiu       $a0, $a0, -0x4DD4
    ctx->r4 = ADD32(ctx->r4, -0X4DD4);
    // 0x60005AA0: jal         0x60001BEC
    // 0x60005AA4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_menu_battle_1BEC(rdram, ctx);
        goto after_150;
    // 0x60005AA4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_150:
    // 0x60005AA8: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x60005AAC: sw          $t4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r12;
L_60005AB0:
    // 0x60005AB0: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x60005AB4: addiu       $t5, $zero, 0xA6
    ctx->r13 = ADD32(0, 0XA6);
    // 0x60005AB8: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x60005ABC: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x60005AC0: subu        $t9, $t5, $t2
    ctx->r25 = SUB32(ctx->r13, ctx->r10);
    // 0x60005AC4: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x60005AC8: lw          $t3, 0x264($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X264);
    // 0x60005ACC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60005AD0: swc1        $f6, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f6.u32l;
    // 0x60005AD4: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60005AD8: lw          $t7, 0x264($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X264);
    // 0x60005ADC: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x60005AE0: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x60005AE4: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x60005AE8: addiu       $t1, $t8, 0x4
    ctx->r9 = ADD32(ctx->r24, 0X4);
    // 0x60005AEC: jal         0x6000085C
    // 0x60005AF0: sw          $t1, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r9;
    ovl_menu_battle_85C(rdram, ctx);
        goto after_151;
    // 0x60005AF0: sw          $t1, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r9;
    after_151:
    // 0x60005AF4: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60005AF8: nop

    // 0x60005AFC: addiu       $t6, $t4, -0x1
    ctx->r14 = ADD32(ctx->r12, -0X1);
    // 0x60005B00: bgez        $t6, L_60005AB0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x60005B04: sw          $t6, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r14;
            goto L_60005AB0;
    }
    // 0x60005B04: sw          $t6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r14;
    // 0x60005B08: lw          $a0, 0x264($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X264);
    // 0x60005B0C: jal         0x60000550
    // 0x60005B10: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_152;
    // 0x60005B10: nop

    after_152:
    // 0x60005B14: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60005B18:
    // 0x60005B18: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x60005B1C: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60005B20: addiu       $t5, $t5, -0x4F3C
    ctx->r13 = ADD32(ctx->r13, -0X4F3C);
    // 0x60005B24: lw          $a0, 0x20($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X20);
    // 0x60005B28: sll         $t2, $a1, 3
    ctx->r10 = S32(ctx->r5 << 3);
    // 0x60005B2C: jal         0x600005D4
    // 0x60005B30: addiu       $a1, $t2, 0xF
    ctx->r5 = ADD32(ctx->r10, 0XF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_153;
    // 0x60005B30: addiu       $a1, $t2, 0xF
    ctx->r5 = ADD32(ctx->r10, 0XF);
    after_153:
    // 0x60005B34: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x60005B38: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60005B3C: addiu       $t9, $t9, -0x4F3C
    ctx->r25 = ADD32(ctx->r25, -0X4F3C);
    // 0x60005B40: lw          $a0, 0x34($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X34);
    // 0x60005B44: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x60005B48: jal         0x600005D4
    // 0x60005B4C: addiu       $a1, $t3, 0xF
    ctx->r5 = ADD32(ctx->r11, 0XF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_154;
    // 0x60005B4C: addiu       $a1, $t3, 0xF
    ctx->r5 = ADD32(ctx->r11, 0XF);
    after_154:
    // 0x60005B50: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x60005B54: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60005B58: addiu       $t0, $t0, -0x4F3C
    ctx->r8 = ADD32(ctx->r8, -0X4F3C);
    // 0x60005B5C: lw          $a0, 0x48($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X48);
    // 0x60005B60: sll         $t8, $a1, 3
    ctx->r24 = S32(ctx->r5 << 3);
    // 0x60005B64: jal         0x600005D4
    // 0x60005B68: addiu       $a1, $t8, 0xF
    ctx->r5 = ADD32(ctx->r24, 0XF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_155;
    // 0x60005B68: addiu       $a1, $t8, 0xF
    ctx->r5 = ADD32(ctx->r24, 0XF);
    after_155:
    // 0x60005B6C: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x60005B70: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60005B74: addiu       $t1, $t1, -0x4F3C
    ctx->r9 = ADD32(ctx->r9, -0X4F3C);
    // 0x60005B78: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x60005B7C: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x60005B80: lw          $a0, 0x138($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X138);
    // 0x60005B84: jal         0x600005D4
    // 0x60005B88: addiu       $a1, $t7, 0xFF
    ctx->r5 = ADD32(ctx->r15, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_156;
    // 0x60005B88: addiu       $a1, $t7, 0xFF
    ctx->r5 = ADD32(ctx->r15, 0XFF);
    after_156:
    // 0x60005B8C: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x60005B90: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60005B94: addiu       $t4, $t4, -0x4F3C
    ctx->r12 = ADD32(ctx->r12, -0X4F3C);
    // 0x60005B98: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x60005B9C: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x60005BA0: lw          $a0, 0x14C($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X14C);
    // 0x60005BA4: jal         0x600005D4
    // 0x60005BA8: addiu       $a1, $t6, 0xFF
    ctx->r5 = ADD32(ctx->r14, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_157;
    // 0x60005BA8: addiu       $a1, $t6, 0xFF
    ctx->r5 = ADD32(ctx->r14, 0XFF);
    after_157:
    // 0x60005BAC: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60005BB0:
    // 0x60005BB0: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x60005BB4: lw          $t2, 0x250($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X250);
    // 0x60005BB8: nop

    // 0x60005BBC: beq         $t5, $t2, L_60005C58
    if (ctx->r13 == ctx->r10) {
        // 0x60005BC0: lw          $t6, 0x11C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X11C);
            goto L_60005C58;
    }
    // 0x60005BC0: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60005BC4: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60005BC8: nop

    // 0x60005BCC: bne         $t9, $zero, L_60005BE4
    if (ctx->r25 != 0) {
        // 0x60005BD0: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_60005BE4;
    }
    // 0x60005BD0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005BD4: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60005BD8: addiu       $a1, $t5, 0x5
    ctx->r5 = ADD32(ctx->r13, 0X5);
    // 0x60005BDC: jal         0x60001C84
    // 0x60005BE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_158;
    // 0x60005BE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_158:
L_60005BE4:
    // 0x60005BE4: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x60005BE8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x60005BEC: bne         $t3, $at, L_60005C24
    if (ctx->r11 != ctx->r1) {
        // 0x60005BF0: lw          $t1, 0x108($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X108);
            goto L_60005C24;
    }
    // 0x60005BF0: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x60005BF4: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60005BF8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005BFC: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x60005C00: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x60005C04: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60005C08: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x60005C0C: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60005C10: jal         0x600005D4
    // 0x60005C14: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_159;
    // 0x60005C14: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_159:
    // 0x60005C18: b           L_60005D5C
    // 0x60005C1C: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
        goto L_60005D5C;
    // 0x60005C1C: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x60005C20: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
L_60005C24:
    // 0x60005C24: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x60005C28: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x60005C2C: addu        $t7, $t7, $t1
    ctx->r15 = ADD32(ctx->r15, ctx->r9);
    // 0x60005C30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60005C34: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005C38: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60005C3C: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60005C40: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x60005C44: jal         0x600005D4
    // 0x60005C48: addiu       $a1, $t4, 0x8
    ctx->r5 = ADD32(ctx->r12, 0X8);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_160;
    // 0x60005C48: addiu       $a1, $t4, 0x8
    ctx->r5 = ADD32(ctx->r12, 0X8);
    after_160:
    // 0x60005C4C: b           L_60005D5C
    // 0x60005C50: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
        goto L_60005D5C;
    // 0x60005C50: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x60005C54: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
L_60005C58:
    // 0x60005C58: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x60005C5C: bne         $t6, $at, L_60005CC0
    if (ctx->r14 != ctx->r1) {
        // 0x60005C60: lw          $t1, 0x11C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X11C);
            goto L_60005CC0;
    }
    // 0x60005C60: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x60005C64: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x60005C68: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005C6C: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x60005C70: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x60005C74: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x60005C78: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x60005C7C: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60005C80: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x60005C84: jal         0x60000574
    // 0x60005C88: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_161;
    // 0x60005C88: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_161:
    // 0x60005C8C: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x60005C90: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005C94: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x60005C98: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x60005C9C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60005CA0: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x60005CA4: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60005CA8: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x60005CAC: jal         0x6000055C
    // 0x60005CB0: lui         $a2, 0x42D8
    ctx->r6 = S32(0X42D8 << 16);
    ovl_menu_battle_55C(rdram, ctx);
        goto after_162;
    // 0x60005CB0: lui         $a2, 0x42D8
    ctx->r6 = S32(0X42D8 << 16);
    after_162:
    // 0x60005CB4: b           L_60005D5C
    // 0x60005CB8: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
        goto L_60005D5C;
    // 0x60005CB8: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x60005CBC: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
L_60005CC0:
    // 0x60005CC0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60005CC4: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x60005CC8: lwc1        $f8, -0x402C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X402C);
    // 0x60005CCC: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60005CD0: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60005CD4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60005CD8: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x60005CDC: lwc1        $f18, -0x4028($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4028);
    // 0x60005CE0: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x60005CE4: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x60005CE8: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x60005CEC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60005CF0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005CF4: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x60005CF8: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60005CFC: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x60005D00: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60005D04: jal         0x60000574
    // 0x60005D08: nop

    ovl_menu_battle_574(rdram, ctx);
        goto after_163;
    // 0x60005D08: nop

    after_163:
    // 0x60005D0C: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60005D10: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60005D14: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x60005D18: lwc1        $f8, -0x4024($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4024);
    // 0x60005D1C: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60005D20: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x60005D24: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x60005D28: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x60005D2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60005D30: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x60005D34: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x60005D38: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x60005D3C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x60005D40: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005D44: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x60005D48: lw          $a0, -0x4ECC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4ECC);
    // 0x60005D4C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x60005D50: jal         0x6000055C
    // 0x60005D54: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    ovl_menu_battle_55C(rdram, ctx);
        goto after_164;
    // 0x60005D54: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    after_164:
    // 0x60005D58: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
L_60005D5C:
    // 0x60005D5C: nop

    // 0x60005D60: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x60005D64: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x60005D68: bne         $at, $zero, L_60005BB0
    if (ctx->r1 != 0) {
        // 0x60005D6C: sw          $t9, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r25;
            goto L_60005BB0;
    }
    // 0x60005D6C: sw          $t9, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r25;
    // 0x60005D70: jal         0x6000085C
    // 0x60005D74: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_165;
    // 0x60005D74: nop

    after_165:
    // 0x60005D78: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60005D7C: nop

    // 0x60005D80: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x60005D84: slti        $at, $t3, 0x1F
    ctx->r1 = SIGNED(ctx->r11) < 0X1F ? 1 : 0;
    // 0x60005D88: bne         $at, $zero, L_60005B18
    if (ctx->r1 != 0) {
        // 0x60005D8C: sw          $t3, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r11;
            goto L_60005B18;
    }
    // 0x60005D8C: sw          $t3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r11;
    // 0x60005D90: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005D94: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60005D98: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x60005D9C: jal         0x60001C84
    // 0x60005DA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_166;
    // 0x60005DA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_166:
    // 0x60005DA4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60005DA8: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60005DAC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60005DB0: jal         0x60001C84
    // 0x60005DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_167;
    // 0x60005DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_167:
    // 0x60005DB8: b           L_60003EDC
    // 0x60005DBC: nop

        goto L_60003EDC;
    // 0x60005DBC: nop

L_60005DC0:
    // 0x60005DC0: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60005DC4: nop

    // 0x60005DC8: andi        $t8, $t0, 0x2020
    ctx->r24 = ctx->r8 & 0X2020;
    // 0x60005DCC: beq         $t8, $zero, L_60005FB0
    if (ctx->r24 == 0) {
        // 0x60005DD0: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60005FB0;
    }
    // 0x60005DD0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005DD4: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60005DD8: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60005DDC: jal         0x6000064C
    // 0x60005DE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_168;
    // 0x60005DE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_168:
    // 0x60005DE4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x60005DE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60005DEC: sw          $v0, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r2;
    // 0x60005DF0: lui         $at, 0x433C
    ctx->r1 = S32(0X433C << 16);
    // 0x60005DF4: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    // 0x60005DF8: lw          $t7, 0x264($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X264);
    // 0x60005DFC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60005E00: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x60005E04: swc1        $f4, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f4.u32l;
    // 0x60005E08: lw          $t6, 0x264($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X264);
    // 0x60005E0C: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x60005E10: sw          $t4, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->r12;
    // 0x60005E14: lw          $t9, 0x264($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X264);
    // 0x60005E18: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x60005E1C: sw          $t2, 0x50($t9)
    MEM_W(0X50, ctx->r25) = ctx->r10;
    // 0x60005E20: lw          $t3, 0x264($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X264);
    // 0x60005E24: addiu       $t0, $zero, 0x7000
    ctx->r8 = ADD32(0, 0X7000);
    // 0x60005E28: sw          $t5, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r13;
    // 0x60005E2C: lw          $t8, 0x264($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X264);
    // 0x60005E30: nop

    // 0x60005E34: sw          $t0, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->r8;
    // 0x60005E38: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60005E3C:
    // 0x60005E3C: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x60005E40: addiu       $t4, $zero, 0xBC
    ctx->r12 = ADD32(0, 0XBC);
    // 0x60005E44: sll         $t7, $t1, 1
    ctx->r15 = S32(ctx->r9 << 1);
    // 0x60005E48: subu        $t6, $t4, $t7
    ctx->r14 = SUB32(ctx->r12, ctx->r15);
    // 0x60005E4C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x60005E50: lw          $t2, 0x264($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X264);
    // 0x60005E54: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x60005E58: swc1        $f10, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f10.u32l;
    // 0x60005E5C: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x60005E60: lw          $t0, 0x264($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X264);
    // 0x60005E64: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x60005E68: addiu       $t3, $t5, 0x8
    ctx->r11 = ADD32(ctx->r13, 0X8);
    // 0x60005E6C: jal         0x6000085C
    // 0x60005E70: sw          $t3, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r11;
    ovl_menu_battle_85C(rdram, ctx);
        goto after_169;
    // 0x60005E70: sw          $t3, 0x50($t0)
    MEM_W(0X50, ctx->r8) = ctx->r11;
    after_169:
    // 0x60005E74: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x60005E78: nop

    // 0x60005E7C: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x60005E80: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x60005E84: bne         $at, $zero, L_60005E3C
    if (ctx->r1 != 0) {
        // 0x60005E88: sw          $t1, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r9;
            goto L_60005E3C;
    }
    // 0x60005E88: sw          $t1, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r9;
    // 0x60005E8C: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x60005E90: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x60005E94: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x60005E98: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x60005E9C: lbu         $t2, 0x4($t6)
    ctx->r10 = MEM_BU(ctx->r14, 0X4);
    // 0x60005EA0: nop

    // 0x60005EA4: bne         $t2, $at, L_60005EB8
    if (ctx->r10 != ctx->r1) {
        // 0x60005EA8: lw          $t9, 0xCC($sp)
        ctx->r25 = MEM_W(ctx->r29, 0XCC);
            goto L_60005EB8;
    }
    // 0x60005EA8: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x60005EAC: b           L_60005ECC
    // 0x60005EB0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
        goto L_60005ECC;
    // 0x60005EB0: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x60005EB4: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
L_60005EB8:
    // 0x60005EB8: lw          $t5, 0x250($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X250);
    // 0x60005EBC: nop

    // 0x60005EC0: addu        $t3, $t9, $t5
    ctx->r11 = ADD32(ctx->r25, ctx->r13);
    // 0x60005EC4: lbu         $s0, 0x4($t3)
    ctx->r16 = MEM_BU(ctx->r11, 0X4);
    // 0x60005EC8: nop

L_60005ECC:
    // 0x60005ECC: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60005ED0: lw          $a2, -0x3FC0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3FC0);
    // 0x60005ED4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x60005ED8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x60005EDC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60005EE0: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x60005EE4: addiu       $a3, $s0, 0x21
    ctx->r7 = ADD32(ctx->r16, 0X21);
    // 0x60005EE8: jal         0x600006B8
    // 0x60005EEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_battle_6B8(rdram, ctx);
        goto after_170;
    // 0x60005EEC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_170:
    // 0x60005EF0: sw          $v0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r2;
L_60005EF4:
    // 0x60005EF4: jal         0x600022AC
    // 0x60005EF8: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_171;
    // 0x60005EF8: nop

    after_171:
    // 0x60005EFC: andi        $t1, $v0, 0xF030
    ctx->r9 = ctx->r2 & 0XF030;
    // 0x60005F00: bne         $t1, $zero, L_60005F18
    if (ctx->r9 != 0) {
        // 0x60005F04: sw          $v0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r2;
            goto L_60005F18;
    }
    // 0x60005F04: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    // 0x60005F08: jal         0x6000085C
    // 0x60005F0C: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_172;
    // 0x60005F0C: nop

    after_172:
    // 0x60005F10: b           L_60005EF4
    // 0x60005F14: nop

        goto L_60005EF4;
    // 0x60005F14: nop

L_60005F18:
    // 0x60005F18: lw          $a0, 0x268($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X268);
    // 0x60005F1C: jal         0x600006AC
    // 0x60005F20: nop

    ovl_menu_battle_6AC(rdram, ctx);
        goto after_173;
    // 0x60005F20: nop

    after_173:
    // 0x60005F24: addiu       $t4, $zero, 0x9
    ctx->r12 = ADD32(0, 0X9);
    // 0x60005F28: sw          $t4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r12;
L_60005F2C:
    // 0x60005F2C: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x60005F30: addiu       $t2, $zero, 0xBC
    ctx->r10 = ADD32(0, 0XBC);
    // 0x60005F34: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x60005F38: subu        $t9, $t2, $t6
    ctx->r25 = SUB32(ctx->r10, ctx->r14);
    // 0x60005F3C: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x60005F40: lw          $t5, 0x264($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X264);
    // 0x60005F44: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60005F48: swc1        $f6, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f6.u32l;
    // 0x60005F4C: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x60005F50: lw          $t1, 0x264($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X264);
    // 0x60005F54: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x60005F58: addiu       $t8, $t0, 0x8
    ctx->r24 = ADD32(ctx->r8, 0X8);
    // 0x60005F5C: jal         0x6000085C
    // 0x60005F60: sw          $t8, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r24;
    ovl_menu_battle_85C(rdram, ctx);
        goto after_174;
    // 0x60005F60: sw          $t8, 0x50($t1)
    MEM_W(0X50, ctx->r9) = ctx->r24;
    after_174:
    // 0x60005F64: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60005F68: nop

    // 0x60005F6C: addiu       $t7, $t4, -0x1
    ctx->r15 = ADD32(ctx->r12, -0X1);
    // 0x60005F70: bgez        $t7, L_60005F2C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x60005F74: sw          $t7, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r15;
            goto L_60005F2C;
    }
    // 0x60005F74: sw          $t7, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r15;
    // 0x60005F78: lw          $a0, 0x264($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X264);
    // 0x60005F7C: jal         0x60000550
    // 0x60005F80: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_175;
    // 0x60005F80: nop

    after_175:
    // 0x60005F84: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x60005F88: nop

    // 0x60005F8C: andi        $t6, $t2, 0x6030
    ctx->r14 = ctx->r10 & 0X6030;
    // 0x60005F90: bne         $t6, $zero, L_60003EDC
    if (ctx->r14 != 0) {
        // 0x60005F94: nop
    
            goto L_60003EDC;
    }
    // 0x60005F94: nop

    // 0x60005F98: lw          $t9, 0x120($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X120);
    // 0x60005F9C: nop

    // 0x60005FA0: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x60005FA4: nop

    // 0x60005FA8: ori         $t3, $t5, 0x8000
    ctx->r11 = ctx->r13 | 0X8000;
    // 0x60005FAC: sw          $t3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r11;
L_60005FB0:
    // 0x60005FB0: lw          $t0, 0x250($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X250);
    // 0x60005FB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60005FB8: beq         $t0, $at, L_60005FC8
    if (ctx->r8 == ctx->r1) {
        // 0x60005FBC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_60005FC8;
    }
    // 0x60005FBC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60005FC0: bne         $t0, $at, L_60005FE8
    if (ctx->r8 != ctx->r1) {
        // 0x60005FC4: lw          $t7, 0x250($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X250);
            goto L_60005FE8;
    }
    // 0x60005FC4: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
L_60005FC8:
    // 0x60005FC8: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x60005FCC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60005FD0: lw          $t1, 0x28($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X28);
    // 0x60005FD4: nop

    // 0x60005FD8: bne         $t1, $at, L_60005FE4
    if (ctx->r9 != ctx->r1) {
        // 0x60005FDC: addiu       $t4, $zero, 0x2
        ctx->r12 = ADD32(0, 0X2);
            goto L_60005FE4;
    }
    // 0x60005FDC: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x60005FE0: sw          $t4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->r12;
L_60005FE4:
    // 0x60005FE4: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
L_60005FE8:
    // 0x60005FE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60005FEC: bne         $t7, $at, L_60006004
    if (ctx->r15 != ctx->r1) {
        // 0x60005FF0: nop
    
            goto L_60006004;
    }
    // 0x60005FF0: nop

    // 0x60005FF4: jal         0x60000268
    // 0x60005FF8: nop

    ovl_menu_battle_268(rdram, ctx);
        goto after_176;
    // 0x60005FF8: nop

    after_176:
    // 0x60005FFC: b           L_60006048
    // 0x60006000: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60006048;
    // 0x60006000: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60006004:
    // 0x60006004: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60006008:
    // 0x60006008: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x6000600C: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x60006010: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x60006014: addu        $t3, $t2, $t5
    ctx->r11 = ADD32(ctx->r10, ctx->r13);
    // 0x60006018: lw          $t9, 0x4($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X4);
    // 0x6000601C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60006020: bne         $t9, $at, L_6000602C
    if (ctx->r25 != ctx->r1) {
        // 0x60006024: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_6000602C;
    }
    // 0x60006024: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x60006028: sw          $t0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r8;
L_6000602C:
    // 0x6000602C: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x60006030: nop

    // 0x60006034: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x60006038: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x6000603C: bne         $at, $zero, L_60006008
    if (ctx->r1 != 0) {
        // 0x60006040: sw          $t4, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r12;
            goto L_60006008;
    }
    // 0x60006040: sw          $t4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r12;
    // 0x60006044: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60006048:
    // 0x60006048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000604C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006050: jal         0x60000238
    // 0x60006054: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_238(rdram, ctx);
        goto after_177;
    // 0x60006054: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_177:
    // 0x60006058: jal         0x60000208
    // 0x6000605C: nop

    ovl_menu_battle_208(rdram, ctx);
        goto after_178;
    // 0x6000605C: nop

    after_178:
    // 0x60006060: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006064: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x60006068: jal         0x60001BEC
    // 0x6000606C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    ovl_menu_battle_1BEC(rdram, ctx);
        goto after_179;
    // 0x6000606C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_179:
    // 0x60006070: b           L_6000AD54
    // 0x60006074: nop

        goto L_6000AD54;
    // 0x60006074: nop

L_60006078:
    // 0x60006078: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000607C:
    // 0x6000607C: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60006080:
    // 0x60006080: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60006084: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x60006088: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x6000608C: sll         $t2, $t6, 4
    ctx->r10 = S32(ctx->r14 << 4);
    // 0x60006090: addu        $t5, $t7, $t2
    ctx->r13 = ADD32(ctx->r15, ctx->r10);
    // 0x60006094: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x60006098: addu        $t3, $t5, $t0
    ctx->r11 = ADD32(ctx->r13, ctx->r8);
    // 0x6000609C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x600060A0: sw          $t8, 0x54($t3)
    MEM_W(0X54, ctx->r11) = ctx->r24;
    // 0x600060A4: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x600060A8: nop

    // 0x600060AC: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x600060B0: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x600060B4: bne         $at, $zero, L_60006080
    if (ctx->r1 != 0) {
        // 0x600060B8: sw          $t4, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r12;
            goto L_60006080;
    }
    // 0x600060B8: sw          $t4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r12;
    // 0x600060BC: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x600060C0: nop

    // 0x600060C4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x600060C8: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x600060CC: bne         $at, $zero, L_6000607C
    if (ctx->r1 != 0) {
        // 0x600060D0: sw          $t7, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r15;
            goto L_6000607C;
    }
    // 0x600060D0: sw          $t7, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r15;
    // 0x600060D4: lw          $t2, 0x120($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X120);
    // 0x600060D8: nop

    // 0x600060DC: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x600060E0: nop

    // 0x600060E4: andi        $t5, $t9, 0x8000
    ctx->r13 = ctx->r25 & 0X8000;
    // 0x600060E8: bne         $t5, $zero, L_60006100
    if (ctx->r13 != 0) {
        // 0x600060EC: lw          $t0, 0x120($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X120);
            goto L_60006100;
    }
    // 0x600060EC: lw          $t0, 0x120($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X120);
    // 0x600060F0: lw          $a0, 0x248($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X248);
    // 0x600060F4: jal         0x60002F40
    // 0x600060F8: nop

    ovl_menu_battle_2F40(rdram, ctx);
        goto after_180;
    // 0x600060F8: nop

    after_180:
    // 0x600060FC: lw          $t0, 0x120($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X120);
L_60006100:
    // 0x60006100: nop

    // 0x60006104: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x60006108: nop

    // 0x6000610C: andi        $t3, $t8, 0x8000
    ctx->r11 = ctx->r24 & 0X8000;
    // 0x60006110: beq         $t3, $zero, L_60006284
    if (ctx->r11 == 0) {
        // 0x60006114: nop
    
            goto L_60006284;
    }
    // 0x60006114: nop

    // 0x60006118: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x6000611C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60006120: sw          $t1, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r9;
    // 0x60006124: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60006128:
    // 0x60006128: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x6000612C: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x60006130: lw          $t2, 0x0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X0);
    // 0x60006134: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x60006138: addu        $t9, $t6, $t2
    ctx->r25 = ADD32(ctx->r14, ctx->r10);
    // 0x6000613C: lbu         $t5, 0x4($t9)
    ctx->r13 = MEM_BU(ctx->r25, 0X4);
    // 0x60006140: nop

    // 0x60006144: bne         $t5, $at, L_60006158
    if (ctx->r13 != ctx->r1) {
        // 0x60006148: lw          $t8, 0x248($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X248);
            goto L_60006158;
    }
    // 0x60006148: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x6000614C: b           L_60006170
    // 0x60006150: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
        goto L_60006170;
    // 0x60006150: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x60006154: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
L_60006158:
    // 0x60006158: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x6000615C: lw          $t3, 0x0($t8)
    ctx->r11 = MEM_W(ctx->r24, 0X0);
    // 0x60006160: nop

    // 0x60006164: addu        $t1, $t0, $t3
    ctx->r9 = ADD32(ctx->r8, ctx->r11);
    // 0x60006168: lbu         $s0, 0x4($t1)
    ctx->r16 = MEM_BU(ctx->r9, 0X4);
    // 0x6000616C: nop

L_60006170:
    // 0x60006170: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x60006174: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x60006178: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x6000617C: subu        $t4, $t4, $s0
    ctx->r12 = SUB32(ctx->r12, ctx->r16);
    // 0x60006180: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x60006184: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x60006188: addu        $t5, $t2, $t9
    ctx->r13 = ADD32(ctx->r10, ctx->r25);
    // 0x6000618C: sw          $t6, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->r14;
    // 0x60006190: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x60006194: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x60006198: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x6000619C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x600061A0: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x600061A4: sw          $t8, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r24;
    // 0x600061A8: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x600061AC: nop

    // 0x600061B0: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x600061B4: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x600061B8: bne         $at, $zero, L_60006128
    if (ctx->r1 != 0) {
        // 0x600061BC: sw          $t2, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r10;
            goto L_60006128;
    }
    // 0x600061BC: sw          $t2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r10;
    // 0x600061C0: lw          $t9, 0x248($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X248);
    // 0x600061C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600061C8: lw          $t6, 0x0($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X0);
    // 0x600061CC: nop

    // 0x600061D0: bne         $t6, $at, L_60006220
    if (ctx->r14 != ctx->r1) {
        // 0x600061D4: lw          $t0, 0x248($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X248);
            goto L_60006220;
    }
    // 0x600061D4: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x600061D8: sw          $zero, 0x94($t9)
    MEM_W(0X94, ctx->r25) = 0;
    // 0x600061DC: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_600061E0:
    // 0x600061E0: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x600061E4: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x600061E8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x600061EC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x600061F0: addu        $t8, $t3, $t1
    ctx->r24 = ADD32(ctx->r11, ctx->r9);
    // 0x600061F4: sw          $t5, 0x98($t8)
    MEM_W(0X98, ctx->r24) = ctx->r13;
    // 0x600061F8: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x600061FC: nop

    // 0x60006200: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x60006204: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x60006208: bne         $at, $zero, L_600061E0
    if (ctx->r1 != 0) {
        // 0x6000620C: sw          $t7, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r15;
            goto L_600061E0;
    }
    // 0x6000620C: sw          $t7, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r15;
    // 0x60006210: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x60006214: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60006218: sw          $t2, 0x10C($t6)
    MEM_W(0X10C, ctx->r14) = ctx->r10;
    // 0x6000621C: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
L_60006220:
    // 0x60006220: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x60006224: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x60006228: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x6000622C: addu        $t1, $t9, $t3
    ctx->r9 = ADD32(ctx->r25, ctx->r11);
    // 0x60006230: lbu         $t5, 0x4($t1)
    ctx->r13 = MEM_BU(ctx->r9, 0X4);
    // 0x60006234: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60006238: sll         $t8, $t5, 2
    ctx->r24 = S32(ctx->r13 << 2);
    // 0x6000623C: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x60006240: lw          $t4, -0x46F4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X46F4);
    // 0x60006244: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60006248: sw          $t4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r12;
    // 0x6000624C: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x60006250: nop

    // 0x60006254: sw          $t7, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->r15;
    // 0x60006258: lw          $t9, 0x248($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X248);
    // 0x6000625C: nop

    // 0x60006260: sw          $t6, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->r14;
    // 0x60006264: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x60006268: nop

    // 0x6000626C: sw          $zero, 0x38($t3)
    MEM_W(0X38, ctx->r11) = 0;
    // 0x60006270: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60006274: nop

    // 0x60006278: sw          $zero, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = 0;
    // 0x6000627C: b           L_6000AD54
    // 0x60006280: sw          $zero, 0x250($sp)
    MEM_W(0X250, ctx->r29) = 0;
        goto L_6000AD54;
    // 0x60006280: sw          $zero, 0x250($sp)
    MEM_W(0X250, ctx->r29) = 0;
L_60006284:
    // 0x60006284: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60006288:
    // 0x60006288: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x6000628C: lw          $t5, 0x248($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X248);
    // 0x60006290: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x60006294: addu        $t0, $t5, $t4
    ctx->r8 = ADD32(ctx->r13, ctx->r12);
    // 0x60006298: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x6000629C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600062A0: beq         $t7, $at, L_600062B0
    if (ctx->r15 == ctx->r1) {
        // 0x600062A4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_600062B0;
    }
    // 0x600062A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600062A8: bne         $t7, $at, L_600062E0
    if (ctx->r15 != ctx->r1) {
        // 0x600062AC: lw          $t8, 0x11C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X11C);
            goto L_600062E0;
    }
    // 0x600062AC: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
L_600062B0:
    // 0x600062B0: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x600062B4: jal         0x60000B2C
    // 0x600062B8: nop

    ovl_menu_battle_B2C(rdram, ctx);
        goto after_181;
    // 0x600062B8: nop

    after_181:
    // 0x600062BC: bne         $v0, $zero, L_600062E0
    if (ctx->r2 != 0) {
        // 0x600062C0: lw          $t8, 0x11C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X11C);
            goto L_600062E0;
    }
    // 0x600062C0: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x600062C4: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600062C8: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x600062CC: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x600062D0: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x600062D4: addu        $t1, $t6, $t3
    ctx->r9 = ADD32(ctx->r14, ctx->r11);
    // 0x600062D8: sw          $t2, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r10;
    // 0x600062DC: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
L_600062E0:
    // 0x600062E0: nop

    // 0x600062E4: addiu       $t5, $t8, 0x1
    ctx->r13 = ADD32(ctx->r24, 0X1);
    // 0x600062E8: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x600062EC: bne         $at, $zero, L_60006288
    if (ctx->r1 != 0) {
        // 0x600062F0: sw          $t5, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r13;
            goto L_60006288;
    }
    // 0x600062F0: sw          $t5, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r13;
    // 0x600062F4: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
    // 0x600062F8: sw          $zero, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = 0;
L_600062FC:
    // 0x600062FC: lw          $t0, 0x90($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X90);
    // 0x60006300: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x60006304: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x60006308: addu        $t9, $t4, $t7
    ctx->r25 = ADD32(ctx->r12, ctx->r15);
    // 0x6000630C: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x60006310: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60006314: bne         $t6, $at, L_60006330
    if (ctx->r14 != ctx->r1) {
        // 0x60006318: lw          $t1, 0x90($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X90);
            goto L_60006330;
    }
    // 0x60006318: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
    // 0x6000631C: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x60006320: nop

    // 0x60006324: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x60006328: sw          $t2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r10;
    // 0x6000632C: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
L_60006330:
    // 0x60006330: nop

    // 0x60006334: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x60006338: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x6000633C: bne         $at, $zero, L_600062FC
    if (ctx->r1 != 0) {
        // 0x60006340: sw          $t8, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->r24;
            goto L_600062FC;
    }
    // 0x60006340: sw          $t8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r24;
    // 0x60006344: lw          $t5, 0x8C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8C);
    // 0x60006348: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x6000634C: bne         $t5, $at, L_6000637C
    if (ctx->r13 != ctx->r1) {
        // 0x60006350: nop
    
            goto L_6000637C;
    }
    // 0x60006350: nop

    // 0x60006354: jal         0x60000B2C
    // 0x60006358: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_menu_battle_B2C(rdram, ctx);
        goto after_182;
    // 0x60006358: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_182:
    // 0x6000635C: bne         $v0, $zero, L_60006374
    if (ctx->r2 != 0) {
        // 0x60006360: lw          $t7, 0x248($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X248);
            goto L_60006374;
    }
    // 0x60006360: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x60006364: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x60006368: b           L_6000637C
    // 0x6000636C: sw          $zero, 0x10($t0)
    MEM_W(0X10, ctx->r8) = 0;
        goto L_6000637C;
    // 0x6000636C: sw          $zero, 0x10($t0)
    MEM_W(0X10, ctx->r8) = 0;
    // 0x60006370: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
L_60006374:
    // 0x60006374: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x60006378: sw          $t4, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r12;
L_6000637C:
    // 0x6000637C: sw          $zero, 0x90($sp)
    MEM_W(0X90, ctx->r29) = 0;
L_60006380:
    // 0x60006380: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x60006384: lw          $t9, 0x248($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X248);
    // 0x60006388: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x6000638C: addu        $t2, $t9, $t3
    ctx->r10 = ADD32(ctx->r25, ctx->r11);
    // 0x60006390: lw          $t1, 0x4($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X4);
    // 0x60006394: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60006398: beq         $t1, $at, L_600063A8
    if (ctx->r9 == ctx->r1) {
        // 0x6000639C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_600063A8;
    }
    // 0x6000639C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600063A0: bne         $t1, $at, L_600064D4
    if (ctx->r9 != ctx->r1) {
        // 0x600063A4: lw          $t1, 0x90($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X90);
            goto L_600064D4;
    }
    // 0x600063A4: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
L_600063A8:
    // 0x600063A8: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_600063AC:
    // 0x600063AC: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x600063B0: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    // 0x600063B4: nop

    // 0x600063B8: beq         $t8, $t5, L_600064BC
    if (ctx->r24 == ctx->r13) {
        // 0x600063BC: lw          $t2, 0x108($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X108);
            goto L_600064BC;
    }
    // 0x600063BC: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x600063C0: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x600063C4: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x600063C8: addu        $t7, $t0, $t4
    ctx->r15 = ADD32(ctx->r8, ctx->r12);
    // 0x600063CC: lw          $t6, 0x4($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X4);
    // 0x600063D0: nop

    // 0x600063D4: xori        $t9, $t6, 0x2
    ctx->r25 = ctx->r14 ^ 0X2;
    // 0x600063D8: sltiu       $t9, $t9, 0x1
    ctx->r25 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x600063DC: bne         $t9, $zero, L_600063F0
    if (ctx->r25 != 0) {
        // 0x600063E0: lw          $t3, 0x248($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X248);
            goto L_600063F0;
    }
    // 0x600063E0: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x600063E4: beq         $t9, $zero, L_600064BC
    if (ctx->r25 == 0) {
        // 0x600063E8: lw          $t2, 0x108($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X108);
            goto L_600064BC;
    }
    // 0x600063E8: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x600063EC: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
L_600063F0:
    // 0x600063F0: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x600063F4: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x600063F8: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x600063FC: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x60006400: addu        $t7, $t3, $t4
    ctx->r15 = ADD32(ctx->r11, ctx->r12);
    // 0x60006404: addu        $t5, $t3, $t1
    ctx->r13 = ADD32(ctx->r11, ctx->r9);
    // 0x60006408: lw          $t8, 0x14($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X14);
    // 0x6000640C: lw          $t6, 0x14($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X14);
    // 0x60006410: nop

    // 0x60006414: bne         $t8, $t6, L_600064BC
    if (ctx->r24 != ctx->r14) {
        // 0x60006418: lw          $t2, 0x108($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X108);
            goto L_600064BC;
    }
    // 0x60006418: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x6000641C: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x60006420: sw          $zero, 0x84($sp)
    MEM_W(0X84, ctx->r29) = 0;
L_60006424:
    // 0x60006424: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
L_60006428:
    // 0x60006428: lw          $t2, 0x104($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X104);
    // 0x6000642C: lw          $t9, 0x248($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X248);
    // 0x60006430: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x60006434: addu        $t5, $t9, $t1
    ctx->r13 = ADD32(ctx->r25, ctx->r9);
    // 0x60006438: lw          $t0, 0x4($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X4);
    // 0x6000643C: nop

    // 0x60006440: xori        $t3, $t0, 0x2
    ctx->r11 = ctx->r8 ^ 0X2;
    // 0x60006444: sltiu       $t3, $t3, 0x1
    ctx->r11 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x60006448: bne         $t3, $zero, L_6000645C
    if (ctx->r11 != 0) {
        // 0x6000644C: lw          $t7, 0x104($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X104);
            goto L_6000645C;
    }
    // 0x6000644C: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x60006450: beq         $t3, $zero, L_60006488
    if (ctx->r11 == 0) {
        // 0x60006454: lw          $t5, 0x104($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X104);
            goto L_60006488;
    }
    // 0x60006454: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
    // 0x60006458: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
L_6000645C:
    // 0x6000645C: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x60006460: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x60006464: addu        $t6, $t4, $t8
    ctx->r14 = ADD32(ctx->r12, ctx->r24);
    // 0x60006468: lw          $t2, 0x14($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X14);
    // 0x6000646C: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x60006470: nop

    // 0x60006474: bne         $t2, $t9, L_60006484
    if (ctx->r10 != ctx->r25) {
        // 0x60006478: addiu       $t1, $t9, 0x1
        ctx->r9 = ADD32(ctx->r25, 0X1);
            goto L_60006484;
    }
    // 0x60006478: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x6000647C: b           L_60006424
    // 0x60006480: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
        goto L_60006424;
    // 0x60006480: sw          $t1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r9;
L_60006484:
    // 0x60006484: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
L_60006488:
    // 0x60006488: nop

    // 0x6000648C: addiu       $t0, $t5, 0x1
    ctx->r8 = ADD32(ctx->r13, 0X1);
    // 0x60006490: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x60006494: bne         $at, $zero, L_60006428
    if (ctx->r1 != 0) {
        // 0x60006498: sw          $t0, 0x104($sp)
        MEM_W(0X104, ctx->r29) = ctx->r8;
            goto L_60006428;
    }
    // 0x60006498: sw          $t0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r8;
    // 0x6000649C: lw          $t4, 0x90($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X90);
    // 0x600064A0: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x600064A4: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x600064A8: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x600064AC: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x600064B0: b           L_600064D0
    // 0x600064B4: sw          $t3, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r11;
        goto L_600064D0;
    // 0x600064B4: sw          $t3, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r11;
    // 0x600064B8: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
L_600064BC:
    // 0x600064BC: nop

    // 0x600064C0: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x600064C4: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x600064C8: bne         $at, $zero, L_600063AC
    if (ctx->r1 != 0) {
        // 0x600064CC: sw          $t9, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r25;
            goto L_600063AC;
    }
    // 0x600064CC: sw          $t9, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r25;
L_600064D0:
    // 0x600064D0: lw          $t1, 0x90($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X90);
L_600064D4:
    // 0x600064D4: nop

    // 0x600064D8: addiu       $t5, $t1, 0x1
    ctx->r13 = ADD32(ctx->r9, 0X1);
    // 0x600064DC: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x600064E0: bne         $at, $zero, L_60006380
    if (ctx->r1 != 0) {
        // 0x600064E4: sw          $t5, 0x90($sp)
        MEM_W(0X90, ctx->r29) = ctx->r13;
            goto L_60006380;
    }
    // 0x600064E4: sw          $t5, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r13;
    // 0x600064E8: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x600064EC: addiu       $t4, $sp, 0x124
    ctx->r12 = ADD32(ctx->r29, 0X124);
    // 0x600064F0: sw          $t4, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r12;
    // 0x600064F4: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x600064F8: sw          $t0, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r8;
L_600064FC:
    // 0x600064FC: lw          $t7, 0x258($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X258);
    // 0x60006500: lw          $t3, 0x254($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X254);
    // 0x60006504: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x60006508: nop

    // 0x6000650C: sb          $t8, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r24;
    // 0x60006510: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60006514: lw          $t9, 0x258($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X258);
    // 0x60006518: lw          $t6, 0x254($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X254);
    // 0x6000651C: addiu       $t0, $t5, 0x1
    ctx->r8 = ADD32(ctx->r13, 0X1);
    // 0x60006520: sltiu       $at, $t0, 0x124
    ctx->r1 = ctx->r8 < 0X124 ? 1 : 0;
    // 0x60006524: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x60006528: addiu       $t2, $t6, 0x1
    ctx->r10 = ADD32(ctx->r14, 0X1);
    // 0x6000652C: sw          $t0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r8;
    // 0x60006530: sw          $t2, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r10;
    // 0x60006534: bne         $at, $zero, L_600064FC
    if (ctx->r1 != 0) {
        // 0x60006538: sw          $t1, 0x258($sp)
        MEM_W(0X258, ctx->r29) = ctx->r9;
            goto L_600064FC;
    }
    // 0x60006538: sw          $t1, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r9;
    // 0x6000653C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006540: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60006544: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60006548: jal         0x6000064C
    // 0x6000654C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_183;
    // 0x6000654C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_183:
    // 0x60006550: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x60006554: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60006558: sw          $v0, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->r2;
    // 0x6000655C: lui         $at, 0x4318
    ctx->r1 = S32(0X4318 << 16);
    // 0x60006560: swc1        $f16, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f16.u32l;
    // 0x60006564: lw          $t7, 0x26C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X26C);
    // 0x60006568: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000656C: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x60006570: swc1        $f4, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f4.u32l;
    // 0x60006574: lw          $t3, 0x26C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X26C);
    // 0x60006578: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x6000657C: sw          $t8, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r24;
    // 0x60006580: lw          $t2, 0x26C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X26C);
    // 0x60006584: lui         $t9, 0xFF77
    ctx->r25 = S32(0XFF77 << 16);
    // 0x60006588: sw          $t6, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r14;
    // 0x6000658C: lw          $t1, 0x26C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X26C);
    // 0x60006590: ori         $t9, $t9, 0x80
    ctx->r25 = ctx->r25 | 0X80;
    // 0x60006594: sw          $t9, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->r25;
    // 0x60006598: lw          $t0, 0x26C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X26C);
    // 0x6000659C: addiu       $t5, $zero, 0x7000
    ctx->r13 = ADD32(0, 0X7000);
    // 0x600065A0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600065A4: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x600065A8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x600065AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600065B0: jal         0x6000064C
    // 0x600065B4: sw          $t5, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r13;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_184;
    // 0x600065B4: sw          $t5, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r13;
    after_184:
    // 0x600065B8: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x600065BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600065C0: sw          $v0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r2;
    // 0x600065C4: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x600065C8: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x600065CC: lw          $t7, 0x268($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X268);
    // 0x600065D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600065D4: addiu       $t8, $zero, 0x108
    ctx->r24 = ADD32(0, 0X108);
    // 0x600065D8: swc1        $f10, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f10.u32l;
    // 0x600065DC: lw          $t3, 0x268($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X268);
    // 0x600065E0: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x600065E4: sw          $t8, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r24;
    // 0x600065E8: lw          $t2, 0x268($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X268);
    // 0x600065EC: lui         $t9, 0x7777
    ctx->r25 = S32(0X7777 << 16);
    // 0x600065F0: sw          $t6, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r14;
    // 0x600065F4: lw          $t1, 0x268($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X268);
    // 0x600065F8: ori         $t9, $t9, 0x80
    ctx->r25 = ctx->r25 | 0X80;
    // 0x600065FC: sw          $t9, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->r25;
    // 0x60006600: lw          $t0, 0x268($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X268);
    // 0x60006604: addiu       $t5, $zero, 0x7000
    ctx->r13 = ADD32(0, 0X7000);
    // 0x60006608: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000660C: addiu       $a0, $a0, -0x4B90
    ctx->r4 = ADD32(ctx->r4, -0X4B90);
    // 0x60006610: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x60006614: jal         0x60001AA0
    // 0x60006618: sw          $t5, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r13;
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_185;
    // 0x60006618: sw          $t5, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r13;
    after_185:
    // 0x6000661C: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x60006620: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x60006624: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x60006628: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x6000662C: addu        $t3, $t4, $t8
    ctx->r11 = ADD32(ctx->r12, ctx->r24);
    // 0x60006630: lbu         $t6, 0x4($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X4);
    // 0x60006634: nop

    // 0x60006638: bne         $t6, $at, L_60006648
    if (ctx->r14 != ctx->r1) {
        // 0x6000663C: sw          $t6, 0xF4($sp)
        MEM_W(0XF4, ctx->r29) = ctx->r14;
            goto L_60006648;
    }
    // 0x6000663C: sw          $t6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r14;
    // 0x60006640: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x60006644: sw          $t2, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r10;
L_60006648:
    // 0x60006648: lw          $t9, 0xF4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF4);
    // 0x6000664C: nop

    // 0x60006650: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x60006654: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x60006658: beq         $at, $zero, L_600066C8
    if (ctx->r1 == 0) {
        // 0x6000665C: sw          $t1, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r9;
            goto L_600066C8;
    }
    // 0x6000665C: sw          $t1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r9;
L_60006660:
    // 0x60006660: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60006664:
    // 0x60006664: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60006668: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x6000666C: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x60006670: subu        $t0, $t0, $t5
    ctx->r8 = SUB32(ctx->r8, ctx->r13);
    // 0x60006674: addu        $t4, $t0, $t7
    ctx->r12 = ADD32(ctx->r8, ctx->r15);
    // 0x60006678: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x6000667C: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x60006680: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60006684: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006688: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x6000668C: lw          $a0, -0x4B84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4B84);
    // 0x60006690: jal         0x60000658
    // 0x60006694: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_658(rdram, ctx);
        goto after_186;
    // 0x60006694: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_186:
    // 0x60006698: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x6000669C: nop

    // 0x600066A0: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x600066A4: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x600066A8: bne         $at, $zero, L_60006664
    if (ctx->r1 != 0) {
        // 0x600066AC: sw          $t6, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r14;
            goto L_60006664;
    }
    // 0x600066AC: sw          $t6, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r14;
    // 0x600066B0: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x600066B4: nop

    // 0x600066B8: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x600066BC: slti        $at, $t9, 0x5
    ctx->r1 = SIGNED(ctx->r25) < 0X5 ? 1 : 0;
    // 0x600066C0: bne         $at, $zero, L_60006660
    if (ctx->r1 != 0) {
        // 0x600066C4: sw          $t9, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r25;
            goto L_60006660;
    }
    // 0x600066C4: sw          $t9, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r25;
L_600066C8:
    // 0x600066C8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600066CC: addiu       $a0, $a0, -0x4898
    ctx->r4 = ADD32(ctx->r4, -0X4898);
    // 0x600066D0: jal         0x60001AA0
    // 0x600066D4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_187;
    // 0x600066D4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_187:
    // 0x600066D8: jal         0x6000085C
    // 0x600066DC: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_188;
    // 0x600066DC: nop

    after_188:
    // 0x600066E0: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x600066E4: jal         0x60000E8C
    // 0x600066E8: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    ovl_menu_battle_E8C(rdram, ctx);
        goto after_189;
    // 0x600066E8: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    after_189:
    // 0x600066EC: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x600066F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600066F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x600066F8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x600066FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60006700: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60006704: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60006708: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000670C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006710: lw          $a0, -0x3F8C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F8C);
    // 0x60006714: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x60006718: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x6000671C: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    // 0x60006720: swc1        $f16, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f16.u32l;
    // 0x60006724: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x60006728: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    // 0x6000672C: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x60006730: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x60006734: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
    // 0x60006738: swc1        $f18, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f18.u32l;
    // 0x6000673C: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x60006740: jal         0x60000DB4
    // 0x60006744: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    ovl_menu_battle_DB4(rdram, ctx);
        goto after_190;
    // 0x60006744: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
    after_190:
    // 0x60006748: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000674C: sw          $v0, -0x3E84($at)
    MEM_W(-0X3E84, ctx->r1) = ctx->r2;
    // 0x60006750: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006754: lw          $a0, -0x3E84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E84);
    // 0x60006758: jal         0x60000DA8
    // 0x6000675C: nop

    ovl_menu_battle_DA8(rdram, ctx);
        goto after_191;
    // 0x6000675C: nop

    after_191:
    // 0x60006760: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x60006764: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x60006768: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x6000676C: jal         0x60000DB4
    // 0x60006770: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    ovl_menu_battle_DB4(rdram, ctx);
        goto after_192;
    // 0x60006770: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    after_192:
    // 0x60006774: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60006778: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x6000677C: sw          $v0, -0x3E84($at)
    MEM_W(-0X3E84, ctx->r1) = ctx->r2;
    // 0x60006780: addiu       $t1, $t1, -0x4898
    ctx->r9 = ADD32(ctx->r9, -0X4898);
    // 0x60006784: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x60006788: jal         0x600005A4
    // 0x6000678C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_193;
    // 0x6000678C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_193:
    // 0x60006790: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60006794: lwc1        $f18, -0x4020($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4020);
    // 0x60006798: lui         $at, 0x4439
    ctx->r1 = S32(0X4439 << 16);
    // 0x6000679C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600067A0: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x600067A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600067A8: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x600067AC: addiu       $t5, $t5, -0x4898
    ctx->r13 = ADD32(ctx->r13, -0X4898);
    // 0x600067B0: swc1        $f18, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f18.u32l;
    // 0x600067B4: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x600067B8: swc1        $f16, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f16.u32l;
    // 0x600067BC: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    // 0x600067C0: jal         0x6000058C
    // 0x600067C4: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    ovl_menu_battle_58C(rdram, ctx);
        goto after_194;
    // 0x600067C4: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    after_194:
    // 0x600067C8: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x600067CC: addiu       $t0, $t0, -0x4898
    ctx->r8 = ADD32(ctx->r8, -0X4898);
    // 0x600067D0: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    // 0x600067D4: jal         0x60000640
    // 0x600067D8: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_battle_640(rdram, ctx);
        goto after_195;
    // 0x600067D8: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_195:
    // 0x600067DC: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x600067E0: addiu       $t7, $t7, -0x4898
    ctx->r15 = ADD32(ctx->r15, -0X4898);
    // 0x600067E4: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x600067E8: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x600067EC: jal         0x6000061C
    // 0x600067F0: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_196;
    // 0x600067F0: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_196:
    // 0x600067F4: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x600067F8: addiu       $t4, $t4, -0x4898
    ctx->r12 = ADD32(ctx->r12, -0X4898);
    // 0x600067FC: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x60006800: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x60006804: jal         0x60000574
    // 0x60006808: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_197;
    // 0x60006808: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_197:
    // 0x6000680C: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60006810: addiu       $t8, $t8, -0x4898
    ctx->r24 = ADD32(ctx->r24, -0X4898);
    // 0x60006814: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x60006818: jal         0x600005A4
    // 0x6000681C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_198;
    // 0x6000681C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_198:
    // 0x60006820: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60006824: addiu       $t3, $t3, -0x4898
    ctx->r11 = ADD32(ctx->r11, -0X4898);
    // 0x60006828: lw          $a0, 0x188($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X188);
    // 0x6000682C: jal         0x60000640
    // 0x60006830: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    ovl_menu_battle_640(rdram, ctx);
        goto after_199;
    // 0x60006830: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_199:
    // 0x60006834: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60006838:
    // 0x60006838: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x6000683C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006840: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x60006844: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x60006848: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x6000684C: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60006850: lw          $a0, -0x4850($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4850);
    // 0x60006854: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60006858: jal         0x6000061C
    // 0x6000685C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_200;
    // 0x6000685C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_200:
    // 0x60006860: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60006864: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006868: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x6000686C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x60006870: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60006874: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60006878: lw          $a0, -0x4850($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4850);
    // 0x6000687C: jal         0x600005A4
    // 0x60006880: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_201;
    // 0x60006880: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_201:
    // 0x60006884: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60006888: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000688C: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x60006890: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x60006894: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x60006898: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x6000689C: lw          $a0, -0x4850($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4850);
    // 0x600068A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600068A4: jal         0x60000634
    // 0x600068A8: sll         $a1, $t5, 3
    ctx->r5 = S32(ctx->r13 << 3);
    ovl_menu_battle_634(rdram, ctx);
        goto after_202;
    // 0x600068A8: sll         $a1, $t5, 3
    ctx->r5 = S32(ctx->r13 << 3);
    after_202:
    // 0x600068AC: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x600068B0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600068B4: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x600068B8: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x600068BC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x600068C0: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x600068C4: lw          $a0, -0x4850($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4850);
    // 0x600068C8: jal         0x60000604
    // 0x600068CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_battle_604(rdram, ctx);
        goto after_203;
    // 0x600068CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_203:
    // 0x600068D0: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x600068D4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600068D8: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x600068DC: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x600068E0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x600068E4: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x600068E8: lw          $a0, -0x4800($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4800);
    // 0x600068EC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600068F0: jal         0x6000061C
    // 0x600068F4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_204;
    // 0x600068F4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_204:
    // 0x600068F8: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x600068FC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006900: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x60006904: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x60006908: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x6000690C: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x60006910: lw          $a0, -0x4800($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4800);
    // 0x60006914: jal         0x600005A4
    // 0x60006918: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_205;
    // 0x60006918: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_205:
    // 0x6000691C: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60006920: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006924: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x60006928: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x6000692C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x60006930: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x60006934: lw          $a0, -0x4800($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4800);
    // 0x60006938: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x6000693C: jal         0x60000634
    // 0x60006940: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_634(rdram, ctx);
        goto after_206;
    // 0x60006940: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_206:
    // 0x60006944: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60006948: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000694C: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x60006950: addu        $t5, $t5, $t0
    ctx->r13 = ADD32(ctx->r13, ctx->r8);
    // 0x60006954: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60006958: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x6000695C: lw          $a0, -0x4800($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4800);
    // 0x60006960: jal         0x60000604
    // 0x60006964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_battle_604(rdram, ctx);
        goto after_207;
    // 0x60006964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_207:
    // 0x60006968: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x6000696C: nop

    // 0x60006970: addiu       $t4, $t7, 0x1
    ctx->r12 = ADD32(ctx->r15, 0X1);
    // 0x60006974: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x60006978: bne         $at, $zero, L_60006838
    if (ctx->r1 != 0) {
        // 0x6000697C: sw          $t4, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r12;
            goto L_60006838;
    }
    // 0x6000697C: sw          $t4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r12;
    // 0x60006980: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60006984:
    // 0x60006984: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x60006988: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000698C: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x60006990: addu        $t3, $t3, $t8
    ctx->r11 = ADD32(ctx->r11, ctx->r24);
    // 0x60006994: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x60006998: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x6000699C: lw          $a0, -0x4B84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4B84);
    // 0x600069A0: jal         0x600005D4
    // 0x600069A4: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_208;
    // 0x600069A4: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    after_208:
    // 0x600069A8: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x600069AC: nop

    // 0x600069B0: addiu       $t2, $t6, 0x1
    ctx->r10 = ADD32(ctx->r14, 0X1);
    // 0x600069B4: slti        $at, $t2, 0xF
    ctx->r1 = SIGNED(ctx->r10) < 0XF ? 1 : 0;
    // 0x600069B8: bne         $at, $zero, L_60006984
    if (ctx->r1 != 0) {
        // 0x600069BC: sw          $t2, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r10;
            goto L_60006984;
    }
    // 0x600069BC: sw          $t2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r10;
    // 0x600069C0: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_600069C4:
    // 0x600069C4: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600069C8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600069CC: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x600069D0: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x600069D4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x600069D8: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x600069DC: sw          $zero, -0x3FB8($at)
    MEM_W(-0X3FB8, ctx->r1) = 0;
    // 0x600069E0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600069E4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x600069E8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x600069EC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x600069F0: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x600069F4: sw          $t0, -0x3E30($at)
    MEM_W(-0X3E30, ctx->r1) = ctx->r8;
    // 0x600069F8: addu        $s0, $sp, $t8
    ctx->r16 = ADD32(ctx->r29, ctx->r24);
    // 0x600069FC: lw          $s0, 0x128($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X128);
    // 0x60006A00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60006A04: beq         $s0, $at, L_60006A24
    if (ctx->r16 == ctx->r1) {
        // 0x60006A08: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60006A24;
    }
    // 0x60006A08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60006A0C: beq         $s0, $at, L_60006A38
    if (ctx->r16 == ctx->r1) {
        // 0x60006A10: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60006A38;
    }
    // 0x60006A10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60006A14: beq         $s0, $at, L_60006A3C
    if (ctx->r16 == ctx->r1) {
        // 0x60006A18: lw          $a0, 0x11C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X11C);
            goto L_60006A3C;
    }
    // 0x60006A18: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x60006A1C: b           L_60006A60
    // 0x60006A20: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
        goto L_60006A60;
    // 0x60006A20: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_60006A24:
    // 0x60006A24: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x60006A28: jal         0x60002040
    // 0x60006A2C: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_209;
    // 0x60006A2C: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    after_209:
    // 0x60006A30: b           L_60006A6C
    // 0x60006A34: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
        goto L_60006A6C;
    // 0x60006A34: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
L_60006A38:
    // 0x60006A38: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_60006A3C:
    // 0x60006A3C: nop

    // 0x60006A40: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x60006A44: addu        $a1, $sp, $t6
    ctx->r5 = ADD32(ctx->r29, ctx->r14);
    // 0x60006A48: lw          $a1, 0x138($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X138);
    // 0x60006A4C: jal         0x60002040
    // 0x60006A50: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_210;
    // 0x60006A50: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    after_210:
    // 0x60006A54: b           L_60006A6C
    // 0x60006A58: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
        goto L_60006A6C;
    // 0x60006A58: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x60006A5C: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_60006A60:
    // 0x60006A60: jal         0x60002040
    // 0x60006A64: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_211;
    // 0x60006A64: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_211:
    // 0x60006A68: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
L_60006A6C:
    // 0x60006A6C: nop

    // 0x60006A70: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x60006A74: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x60006A78: bne         $at, $zero, L_600069C4
    if (ctx->r1 != 0) {
        // 0x60006A7C: sw          $t9, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r25;
            goto L_600069C4;
    }
    // 0x60006A7C: sw          $t9, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r25;
    // 0x60006A80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60006A84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60006A88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006A8C: jal         0x60000220
    // 0x60006A90: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_220(rdram, ctx);
        goto after_212;
    // 0x60006A90: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_212:
    // 0x60006A94: sw          $zero, 0x118($sp)
    MEM_W(0X118, ctx->r29) = 0;
    // 0x60006A98: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
L_60006A9C:
    // 0x60006A9C: lw          $a0, 0x26C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X26C);
    // 0x60006AA0: sll         $t5, $t1, 4
    ctx->r13 = S32(ctx->r9 << 4);
    // 0x60006AA4: addu        $t5, $t5, $t1
    ctx->r13 = ADD32(ctx->r13, ctx->r9);
    // 0x60006AA8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60006AAC: addiu       $t0, $t5, 0x1C
    ctx->r8 = ADD32(ctx->r13, 0X1C);
    // 0x60006AB0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x60006AB4: lui         $a2, 0x4318
    ctx->r6 = S32(0X4318 << 16);
    // 0x60006AB8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60006ABC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x60006AC0: jal         0x6000055C
    // 0x60006AC4: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_213;
    // 0x60006AC4: nop

    after_213:
    // 0x60006AC8: addiu       $t7, $sp, 0x124
    ctx->r15 = ADD32(ctx->r29, 0X124);
    // 0x60006ACC: addiu       $a0, $t7, 0x4
    ctx->r4 = ADD32(ctx->r15, 0X4);
    // 0x60006AD0: jal         0x60002374
    // 0x60006AD4: addiu       $a1, $t7, 0x14
    ctx->r5 = ADD32(ctx->r15, 0X14);
    ovl_menu_battle_2374(rdram, ctx);
        goto after_214;
    // 0x60006AD4: addiu       $a1, $t7, 0x14
    ctx->r5 = ADD32(ctx->r15, 0X14);
    after_214:
L_60006AD8:
    // 0x60006AD8: jal         0x6000085C
    // 0x60006ADC: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_215;
    // 0x60006ADC: nop

    after_215:
    // 0x60006AE0: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60006AE4:
    // 0x60006AE4: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x60006AE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60006AEC: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x60006AF0: addu        $t3, $sp, $t8
    ctx->r11 = ADD32(ctx->r29, ctx->r24);
    // 0x60006AF4: lw          $t3, 0x128($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X128);
    // 0x60006AF8: nop

    // 0x60006AFC: beq         $t3, $at, L_60006B0C
    if (ctx->r11 == ctx->r1) {
        // 0x60006B00: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60006B0C;
    }
    // 0x60006B00: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60006B04: bne         $t3, $at, L_60006C50
    if (ctx->r11 != ctx->r1) {
        // 0x60006B08: lw          $t5, 0x11C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X11C);
            goto L_60006C50;
    }
    // 0x60006B08: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
L_60006B0C:
    // 0x60006B0C: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x60006B10: jal         0x60000B2C
    // 0x60006B14: nop

    ovl_menu_battle_B2C(rdram, ctx);
        goto after_216;
    // 0x60006B14: nop

    after_216:
    // 0x60006B18: bne         $v0, $zero, L_60006C50
    if (ctx->r2 != 0) {
        // 0x60006B1C: lw          $t5, 0x11C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X11C);
            goto L_60006C50;
    }
    // 0x60006B1C: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60006B20: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x60006B24: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x60006B28: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x60006B2C: addu        $t1, $sp, $t9
    ctx->r9 = ADD32(ctx->r29, ctx->r25);
    // 0x60006B30: sw          $t6, 0x128($t1)
    MEM_W(0X128, ctx->r9) = ctx->r14;
    // 0x60006B34: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60006B38:
    // 0x60006B38: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x60006B3C: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60006B40: nop

    // 0x60006B44: beq         $t5, $t0, L_60006C24
    if (ctx->r13 == ctx->r8) {
        // 0x60006B48: sll         $t7, $t5, 2
        ctx->r15 = S32(ctx->r13 << 2);
            goto L_60006C24;
    }
    // 0x60006B48: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x60006B4C: addu        $t4, $sp, $t7
    ctx->r12 = ADD32(ctx->r29, ctx->r15);
    // 0x60006B50: lw          $t4, 0x128($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X128);
    // 0x60006B54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60006B58: beq         $t4, $at, L_60006B68
    if (ctx->r12 == ctx->r1) {
        // 0x60006B5C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60006B68;
    }
    // 0x60006B5C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60006B60: bne         $t4, $at, L_60006C28
    if (ctx->r12 != ctx->r1) {
        // 0x60006B64: lw          $t1, 0x108($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X108);
            goto L_60006C28;
    }
    // 0x60006B64: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
L_60006B68:
    // 0x60006B68: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x60006B6C: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x60006B70: addiu       $t2, $sp, 0x124
    ctx->r10 = ADD32(ctx->r29, 0X124);
    // 0x60006B74: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x60006B78: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x60006B7C: addu        $t5, $t0, $t2
    ctx->r13 = ADD32(ctx->r8, ctx->r10);
    // 0x60006B80: addu        $t6, $t3, $t2
    ctx->r14 = ADD32(ctx->r11, ctx->r10);
    // 0x60006B84: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x60006B88: lw          $t7, 0x14($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X14);
    // 0x60006B8C: nop

    // 0x60006B90: bne         $t9, $t7, L_60006C28
    if (ctx->r25 != ctx->r15) {
        // 0x60006B94: lw          $t1, 0x108($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X108);
            goto L_60006C28;
    }
    // 0x60006B94: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x60006B98: sw          $zero, 0x80($sp)
    MEM_W(0X80, ctx->r29) = 0;
    // 0x60006B9C: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
L_60006BA0:
    // 0x60006BA0: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
L_60006BA4:
    // 0x60006BA4: lw          $t4, 0x104($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X104);
    // 0x60006BA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60006BAC: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x60006BB0: addu        $t3, $sp, $t8
    ctx->r11 = ADD32(ctx->r29, ctx->r24);
    // 0x60006BB4: lw          $t3, 0x128($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X128);
    // 0x60006BB8: nop

    // 0x60006BBC: beq         $t3, $at, L_60006BCC
    if (ctx->r11 == ctx->r1) {
        // 0x60006BC0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60006BCC;
    }
    // 0x60006BC0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60006BC4: bne         $t3, $at, L_60006BF8
    if (ctx->r11 != ctx->r1) {
        // 0x60006BC8: lw          $t9, 0x104($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X104);
            goto L_60006BF8;
    }
    // 0x60006BC8: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
L_60006BCC:
    // 0x60006BCC: lw          $t6, 0x104($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X104);
    // 0x60006BD0: lw          $t2, 0x80($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X80);
    // 0x60006BD4: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x60006BD8: addu        $t0, $sp, $t1
    ctx->r8 = ADD32(ctx->r29, ctx->r9);
    // 0x60006BDC: lw          $t0, 0x138($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X138);
    // 0x60006BE0: nop

    // 0x60006BE4: bne         $t0, $t2, L_60006BF4
    if (ctx->r8 != ctx->r10) {
        // 0x60006BE8: addiu       $t5, $t2, 0x1
        ctx->r13 = ADD32(ctx->r10, 0X1);
            goto L_60006BF4;
    }
    // 0x60006BE8: addiu       $t5, $t2, 0x1
    ctx->r13 = ADD32(ctx->r10, 0X1);
    // 0x60006BEC: b           L_60006BA0
    // 0x60006BF0: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
        goto L_60006BA0;
    // 0x60006BF0: sw          $t5, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r13;
L_60006BF4:
    // 0x60006BF4: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
L_60006BF8:
    // 0x60006BF8: nop

    // 0x60006BFC: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x60006C00: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x60006C04: bne         $at, $zero, L_60006BA4
    if (ctx->r1 != 0) {
        // 0x60006C08: sw          $t7, 0x104($sp)
        MEM_W(0X104, ctx->r29) = ctx->r15;
            goto L_60006BA4;
    }
    // 0x60006C08: sw          $t7, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r15;
    // 0x60006C0C: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x60006C10: lw          $t4, 0x80($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X80);
    // 0x60006C14: sll         $t3, $t8, 2
    ctx->r11 = S32(ctx->r24 << 2);
    // 0x60006C18: addu        $t6, $sp, $t3
    ctx->r14 = ADD32(ctx->r29, ctx->r11);
    // 0x60006C1C: b           L_60006C3C
    // 0x60006C20: sw          $t4, 0x138($t6)
    MEM_W(0X138, ctx->r14) = ctx->r12;
        goto L_60006C3C;
    // 0x60006C20: sw          $t4, 0x138($t6)
    MEM_W(0X138, ctx->r14) = ctx->r12;
L_60006C24:
    // 0x60006C24: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
L_60006C28:
    // 0x60006C28: nop

    // 0x60006C2C: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x60006C30: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x60006C34: bne         $at, $zero, L_60006B38
    if (ctx->r1 != 0) {
        // 0x60006C38: sw          $t0, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r8;
            goto L_60006B38;
    }
    // 0x60006C38: sw          $t0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r8;
L_60006C3C:
    // 0x60006C3C: addiu       $t2, $sp, 0x124
    ctx->r10 = ADD32(ctx->r29, 0X124);
    // 0x60006C40: addiu       $a0, $t2, 0x4
    ctx->r4 = ADD32(ctx->r10, 0X4);
    // 0x60006C44: jal         0x60002374
    // 0x60006C48: addiu       $a1, $t2, 0x14
    ctx->r5 = ADD32(ctx->r10, 0X14);
    ovl_menu_battle_2374(rdram, ctx);
        goto after_217;
    // 0x60006C48: addiu       $a1, $t2, 0x14
    ctx->r5 = ADD32(ctx->r10, 0X14);
    after_217:
    // 0x60006C4C: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
L_60006C50:
    // 0x60006C50: nop

    // 0x60006C54: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x60006C58: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x60006C5C: bne         $at, $zero, L_60006AE4
    if (ctx->r1 != 0) {
        // 0x60006C60: sw          $t9, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r25;
            goto L_60006AE4;
    }
    // 0x60006C60: sw          $t9, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r25;
    // 0x60006C64: jal         0x600022AC
    // 0x60006C68: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_218;
    // 0x60006C68: nop

    after_218:
    // 0x60006C6C: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x60006C70: beq         $t8, $zero, L_60006C94
    if (ctx->r24 == 0) {
        // 0x60006C74: sw          $v0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r2;
            goto L_60006C94;
    }
    // 0x60006C74: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    // 0x60006C78: jal         0x60000244
    // 0x60006C7C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_battle_244(rdram, ctx);
        goto after_219;
    // 0x60006C7C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_219:
    // 0x60006C80: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    // 0x60006C84: nop

    // 0x60006C88: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x60006C8C: b           L_60007450
    // 0x60006C90: sw          $t3, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r11;
        goto L_60007450;
    // 0x60006C90: sw          $t3, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r11;
L_60006C94:
    // 0x60006C94: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60006C98: nop

    // 0x60006C9C: andi        $t1, $t6, 0x8000
    ctx->r9 = ctx->r14 & 0X8000;
    // 0x60006CA0: beq         $t1, $zero, L_60007108
    if (ctx->r9 == 0) {
        // 0x60006CA4: lw          $t0, 0x11C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X11C);
            goto L_60007108;
    }
    // 0x60006CA4: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60006CA8: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
    // 0x60006CAC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60006CB0: bne         $t0, $at, L_60006CCC
    if (ctx->r8 != ctx->r1) {
        // 0x60006CB4: lui         $a1, 0x6001
        ctx->r5 = S32(0X6001 << 16);
            goto L_60006CCC;
    }
    // 0x60006CB4: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60006CB8: lw          $a1, -0x3FC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FC0);
    // 0x60006CBC: jal         0x60002E58
    // 0x60006CC0: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    ovl_menu_battle_2E58(rdram, ctx);
        goto after_220;
    // 0x60006CC0: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    after_220:
    // 0x60006CC4: bne         $v0, $zero, L_60006AD8
    if (ctx->r2 != 0) {
        // 0x60006CC8: nop
    
            goto L_60006AD8;
    }
    // 0x60006CC8: nop

L_60006CCC:
    // 0x60006CCC: jal         0x60002310
    // 0x60006CD0: nop

    ovl_menu_battle_2310(rdram, ctx);
        goto after_221;
    // 0x60006CD0: nop

    after_221:
    // 0x60006CD4: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x60006CD8: nop

    // 0x60006CDC: lbu         $t5, 0x3($t2)
    ctx->r13 = MEM_BU(ctx->r10, 0X3);
    // 0x60006CE0: nop

    // 0x60006CE4: andi        $t9, $t5, 0x2
    ctx->r25 = ctx->r13 & 0X2;
    // 0x60006CE8: beq         $t9, $zero, L_60006E50
    if (ctx->r25 == 0) {
        // 0x60006CEC: lw          $t0, 0x118($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X118);
            goto L_60006E50;
    }
    // 0x60006CEC: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
    // 0x60006CF0: jal         0x60002310
    // 0x60006CF4: nop

    ovl_menu_battle_2310(rdram, ctx);
        goto after_222;
    // 0x60006CF4: nop

    after_222:
    // 0x60006CF8: andi        $t7, $v0, 0x2000
    ctx->r15 = ctx->r2 & 0X2000;
    // 0x60006CFC: beq         $t7, $zero, L_60006E50
    if (ctx->r15 == 0) {
        // 0x60006D00: lw          $t0, 0x118($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X118);
            goto L_60006E50;
    }
    // 0x60006D00: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
    // 0x60006D04: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x60006D08: addiu       $t3, $sp, 0x124
    ctx->r11 = ADD32(ctx->r29, 0X124);
    // 0x60006D0C: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x60006D10: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x60006D14: lw          $t1, 0x4($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X4);
    // 0x60006D18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60006D1C: bne         $t1, $at, L_60006E4C
    if (ctx->r9 != ctx->r1) {
        // 0x60006D20: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_60006E4C;
    }
    // 0x60006D20: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x60006D24: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x60006D28: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60006D2C:
    // 0x60006D2C: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x60006D30: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x60006D34: nop

    // 0x60006D38: beq         $t2, $t5, L_60006E18
    if (ctx->r10 == ctx->r13) {
        // 0x60006D3C: sll         $t9, $t2, 2
        ctx->r25 = S32(ctx->r10 << 2);
            goto L_60006E18;
    }
    // 0x60006D3C: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x60006D40: addu        $t7, $sp, $t9
    ctx->r15 = ADD32(ctx->r29, ctx->r25);
    // 0x60006D44: lw          $t7, 0x128($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X128);
    // 0x60006D48: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60006D4C: beq         $t7, $at, L_60006D5C
    if (ctx->r15 == ctx->r1) {
        // 0x60006D50: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60006D5C;
    }
    // 0x60006D50: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60006D54: bne         $t7, $at, L_60006E1C
    if (ctx->r15 != ctx->r1) {
        // 0x60006D58: lw          $t6, 0x108($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X108);
            goto L_60006E1C;
    }
    // 0x60006D58: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
L_60006D5C:
    // 0x60006D5C: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x60006D60: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x60006D64: addiu       $t3, $sp, 0x124
    ctx->r11 = ADD32(ctx->r29, 0X124);
    // 0x60006D68: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x60006D6C: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x60006D70: addu        $t2, $t5, $t3
    ctx->r10 = ADD32(ctx->r13, ctx->r11);
    // 0x60006D74: addu        $t1, $t4, $t3
    ctx->r9 = ADD32(ctx->r12, ctx->r11);
    // 0x60006D78: lw          $t0, 0x14($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X14);
    // 0x60006D7C: lw          $t9, 0x14($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X14);
    // 0x60006D80: nop

    // 0x60006D84: bne         $t0, $t9, L_60006E1C
    if (ctx->r8 != ctx->r25) {
        // 0x60006D88: lw          $t6, 0x108($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X108);
            goto L_60006E1C;
    }
    // 0x60006D88: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x60006D8C: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x60006D90: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
L_60006D94:
    // 0x60006D94: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
L_60006D98:
    // 0x60006D98: lw          $t7, 0x104($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X104);
    // 0x60006D9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60006DA0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x60006DA4: addu        $t4, $sp, $t8
    ctx->r12 = ADD32(ctx->r29, ctx->r24);
    // 0x60006DA8: lw          $t4, 0x128($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X128);
    // 0x60006DAC: nop

    // 0x60006DB0: beq         $t4, $at, L_60006DC0
    if (ctx->r12 == ctx->r1) {
        // 0x60006DB4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60006DC0;
    }
    // 0x60006DB4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60006DB8: bne         $t4, $at, L_60006DEC
    if (ctx->r12 != ctx->r1) {
        // 0x60006DBC: lw          $t0, 0x104($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X104);
            goto L_60006DEC;
    }
    // 0x60006DBC: lw          $t0, 0x104($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X104);
L_60006DC0:
    // 0x60006DC0: lw          $t1, 0x104($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X104);
    // 0x60006DC4: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x60006DC8: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x60006DCC: addu        $t5, $sp, $t6
    ctx->r13 = ADD32(ctx->r29, ctx->r14);
    // 0x60006DD0: lw          $t5, 0x138($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X138);
    // 0x60006DD4: nop

    // 0x60006DD8: bne         $t5, $t3, L_60006DE8
    if (ctx->r13 != ctx->r11) {
        // 0x60006DDC: addiu       $t2, $t3, 0x1
        ctx->r10 = ADD32(ctx->r11, 0X1);
            goto L_60006DE8;
    }
    // 0x60006DDC: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x60006DE0: b           L_60006D94
    // 0x60006DE4: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
        goto L_60006D94;
    // 0x60006DE4: sw          $t2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r10;
L_60006DE8:
    // 0x60006DE8: lw          $t0, 0x104($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X104);
L_60006DEC:
    // 0x60006DEC: nop

    // 0x60006DF0: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x60006DF4: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x60006DF8: bne         $at, $zero, L_60006D98
    if (ctx->r1 != 0) {
        // 0x60006DFC: sw          $t9, 0x104($sp)
        MEM_W(0X104, ctx->r29) = ctx->r25;
            goto L_60006D98;
    }
    // 0x60006DFC: sw          $t9, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r25;
    // 0x60006E00: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x60006E04: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x60006E08: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x60006E0C: addu        $t1, $sp, $t4
    ctx->r9 = ADD32(ctx->r29, ctx->r12);
    // 0x60006E10: b           L_60006E30
    // 0x60006E14: sw          $t7, 0x138($t1)
    MEM_W(0X138, ctx->r9) = ctx->r15;
        goto L_60006E30;
    // 0x60006E14: sw          $t7, 0x138($t1)
    MEM_W(0X138, ctx->r9) = ctx->r15;
L_60006E18:
    // 0x60006E18: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
L_60006E1C:
    // 0x60006E1C: nop

    // 0x60006E20: addiu       $t5, $t6, 0x1
    ctx->r13 = ADD32(ctx->r14, 0X1);
    // 0x60006E24: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x60006E28: bne         $at, $zero, L_60006D2C
    if (ctx->r1 != 0) {
        // 0x60006E2C: sw          $t5, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r13;
            goto L_60006D2C;
    }
    // 0x60006E2C: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
L_60006E30:
    // 0x60006E30: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x60006E34: nop

    // 0x60006E38: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x60006E3C: addu        $a1, $sp, $t2
    ctx->r5 = ADD32(ctx->r29, ctx->r10);
    // 0x60006E40: lw          $a1, 0x138($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X138);
    // 0x60006E44: jal         0x60002040
    // 0x60006E48: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_223;
    // 0x60006E48: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    after_223:
L_60006E4C:
    // 0x60006E4C: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
L_60006E50:
    // 0x60006E50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60006E54: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x60006E58: addu        $t8, $sp, $t9
    ctx->r24 = ADD32(ctx->r29, ctx->r25);
    // 0x60006E5C: lw          $t8, 0x128($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X128);
    // 0x60006E60: nop

    // 0x60006E64: beq         $t8, $at, L_60006E74
    if (ctx->r24 == ctx->r1) {
        // 0x60006E68: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60006E74;
    }
    // 0x60006E68: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60006E6C: bne         $t8, $at, L_6000705C
    if (ctx->r24 != ctx->r1) {
        // 0x60006E70: lw          $t2, 0x118($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X118);
            goto L_6000705C;
    }
    // 0x60006E70: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
L_60006E74:
    // 0x60006E74: jal         0x60000244
    // 0x60006E78: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_224;
    // 0x60006E78: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_224:
    // 0x60006E7C: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60006E80:
    // 0x60006E80: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x60006E84: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006E88: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x60006E8C: addu        $t4, $t4, $t7
    ctx->r12 = ADD32(ctx->r12, ctx->r15);
    // 0x60006E90: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x60006E94: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x60006E98: lw          $a0, -0x4B84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4B84);
    // 0x60006E9C: jal         0x600005D4
    // 0x60006EA0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_225;
    // 0x60006EA0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_225:
    // 0x60006EA4: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x60006EA8: nop

    // 0x60006EAC: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
    // 0x60006EB0: slti        $at, $t6, 0xF
    ctx->r1 = SIGNED(ctx->r14) < 0XF ? 1 : 0;
    // 0x60006EB4: bne         $at, $zero, L_60006E80
    if (ctx->r1 != 0) {
        // 0x60006EB8: sw          $t6, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r14;
            goto L_60006E80;
    }
    // 0x60006EB8: sw          $t6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r14;
    // 0x60006EBC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006EC0: addiu       $a0, $a0, -0x4898
    ctx->r4 = ADD32(ctx->r4, -0X4898);
    // 0x60006EC4: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x60006EC8: jal         0x60001C84
    // 0x60006ECC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_226;
    // 0x60006ECC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_226:
    // 0x60006ED0: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x60006ED4: nop

    // 0x60006ED8: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x60006EDC: addu        $t2, $sp, $t3
    ctx->r10 = ADD32(ctx->r29, ctx->r11);
    // 0x60006EE0: lw          $t2, 0x138($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X138);
    // 0x60006EE4: nop

    // 0x60006EE8: sw          $t2, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r10;
L_60006EEC:
    // 0x60006EEC: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60006EF0: lw          $t9, 0xF4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF4);
    // 0x60006EF4: addiu       $t0, $t0, -0x4898
    ctx->r8 = ADD32(ctx->r8, -0X4898);
    // 0x60006EF8: lw          $a2, 0x188($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X188);
    // 0x60006EFC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006F00: lw          $a1, 0x250($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X250);
    // 0x60006F04: lw          $a3, 0x118($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X118);
    // 0x60006F08: addiu       $a0, $a0, -0x4A64
    ctx->r4 = ADD32(ctx->r4, -0X4A64);
    // 0x60006F0C: jal         0x60002674
    // 0x60006F10: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    ovl_menu_battle_2674(rdram, ctx);
        goto after_227;
    // 0x60006F10: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_227:
    // 0x60006F14: sw          $v0, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r2;
    // 0x60006F18: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60006F1C:
    // 0x60006F1C: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x60006F20: lw          $t7, 0x118($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X118);
    // 0x60006F24: nop

    // 0x60006F28: beq         $t8, $t7, L_60006F7C
    if (ctx->r24 == ctx->r15) {
        // 0x60006F2C: sll         $t4, $t8, 2
        ctx->r12 = S32(ctx->r24 << 2);
            goto L_60006F7C;
    }
    // 0x60006F2C: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x60006F30: addu        $t1, $sp, $t4
    ctx->r9 = ADD32(ctx->r29, ctx->r12);
    // 0x60006F34: lw          $t1, 0x128($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X128);
    // 0x60006F38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60006F3C: beq         $t1, $at, L_60006F4C
    if (ctx->r9 == ctx->r1) {
        // 0x60006F40: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60006F4C;
    }
    // 0x60006F40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60006F44: bne         $t1, $at, L_60006F80
    if (ctx->r9 != ctx->r1) {
        // 0x60006F48: lw          $t0, 0x11C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X11C);
            goto L_60006F80;
    }
    // 0x60006F48: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
L_60006F4C:
    // 0x60006F4C: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60006F50: lw          $t2, 0x250($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X250);
    // 0x60006F54: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x60006F58: addu        $t3, $sp, $t5
    ctx->r11 = ADD32(ctx->r29, ctx->r13);
    // 0x60006F5C: lw          $t3, 0x138($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X138);
    // 0x60006F60: nop

    // 0x60006F64: bne         $t3, $t2, L_60006F80
    if (ctx->r11 != ctx->r10) {
        // 0x60006F68: lw          $t0, 0x11C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X11C);
            goto L_60006F80;
    }
    // 0x60006F68: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60006F6C: jal         0x60000244
    // 0x60006F70: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_battle_244(rdram, ctx);
        goto after_228;
    // 0x60006F70: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_228:
    // 0x60006F74: b           L_60006EEC
    // 0x60006F78: nop

        goto L_60006EEC;
    // 0x60006F78: nop

L_60006F7C:
    // 0x60006F7C: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
L_60006F80:
    // 0x60006F80: nop

    // 0x60006F84: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x60006F88: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x60006F8C: bne         $at, $zero, L_60006F1C
    if (ctx->r1 != 0) {
        // 0x60006F90: sw          $t9, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r25;
            goto L_60006F1C;
    }
    // 0x60006F90: sw          $t9, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r25;
    // 0x60006F94: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006F98: addiu       $a0, $a0, -0x4898
    ctx->r4 = ADD32(ctx->r4, -0X4898);
    // 0x60006F9C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x60006FA0: jal         0x60001C84
    // 0x60006FA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_229;
    // 0x60006FA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_229:
    // 0x60006FA8: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60006FAC:
    // 0x60006FAC: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x60006FB0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006FB4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x60006FB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x60006FBC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60006FC0: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x60006FC4: lw          $a0, -0x4B84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4B84);
    // 0x60006FC8: jal         0x600005D4
    // 0x60006FCC: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    ovl_menu_battle_5D4(rdram, ctx);
        goto after_230;
    // 0x60006FCC: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    after_230:
    // 0x60006FD0: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x60006FD4: nop

    // 0x60006FD8: addiu       $t1, $t4, 0x1
    ctx->r9 = ADD32(ctx->r12, 0X1);
    // 0x60006FDC: slti        $at, $t1, 0xF
    ctx->r1 = SIGNED(ctx->r9) < 0XF ? 1 : 0;
    // 0x60006FE0: bne         $at, $zero, L_60006FAC
    if (ctx->r1 != 0) {
        // 0x60006FE4: sw          $t1, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r9;
            goto L_60006FAC;
    }
    // 0x60006FE4: sw          $t1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r9;
    // 0x60006FE8: lw          $t6, 0x250($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X250);
    // 0x60006FEC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60006FF0: bne         $t6, $at, L_60007048
    if (ctx->r14 != ctx->r1) {
        // 0x60006FF4: lw          $t1, 0x118($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X118);
            goto L_60007048;
    }
    // 0x60006FF4: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x60006FF8: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x60006FFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60007000: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x60007004: addu        $t2, $sp, $t3
    ctx->r10 = ADD32(ctx->r29, ctx->r11);
    // 0x60007008: lw          $t2, 0x128($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X128);
    // 0x6000700C: nop

    // 0x60007010: bne         $t2, $at, L_60007034
    if (ctx->r10 != ctx->r1) {
        // 0x60007014: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_60007034;
    }
    // 0x60007014: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x60007018: jal         0x60002040
    // 0x6000701C: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_231;
    // 0x6000701C: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    after_231:
    // 0x60007020: lw          $t9, 0x118($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X118);
    // 0x60007024: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x60007028: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x6000702C: addu        $t8, $sp, $t7
    ctx->r24 = ADD32(ctx->r29, ctx->r15);
    // 0x60007030: sw          $t0, 0x128($t8)
    MEM_W(0X128, ctx->r24) = ctx->r8;
L_60007034:
    // 0x60007034: jal         0x60000244
    // 0x60007038: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_battle_244(rdram, ctx);
        goto after_232;
    // 0x60007038: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_232:
    // 0x6000703C: b           L_60007454
    // 0x60007040: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
        goto L_60007454;
    // 0x60007040: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x60007044: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
L_60007048:
    // 0x60007048: lw          $t4, 0x250($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X250);
    // 0x6000704C: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x60007050: addu        $t3, $sp, $t6
    ctx->r11 = ADD32(ctx->r29, ctx->r14);
    // 0x60007054: sw          $t4, 0x138($t3)
    MEM_W(0X138, ctx->r11) = ctx->r12;
    // 0x60007058: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
L_6000705C:
    // 0x6000705C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60007060: bne         $t2, $at, L_600070E8
    if (ctx->r10 != ctx->r1) {
        // 0x60007064: nop
    
            goto L_600070E8;
    }
    // 0x60007064: nop

    // 0x60007068: sw          $zero, 0x110($sp)
    MEM_W(0X110, ctx->r29) = 0;
    // 0x6000706C: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
L_60007070:
    // 0x60007070: lw          $t5, 0x110($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X110);
    // 0x60007074: nop

    // 0x60007078: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x6000707C: addu        $t0, $sp, $t9
    ctx->r8 = ADD32(ctx->r29, ctx->r25);
    // 0x60007080: lw          $t0, 0x128($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X128);
    // 0x60007084: nop

    // 0x60007088: beq         $t0, $zero, L_600070A4
    if (ctx->r8 == 0) {
        // 0x6000708C: lw          $t1, 0x110($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X110);
            goto L_600070A4;
    }
    // 0x6000708C: lw          $t1, 0x110($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X110);
    // 0x60007090: lw          $t7, 0x10C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10C);
    // 0x60007094: nop

    // 0x60007098: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x6000709C: sw          $t8, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r24;
    // 0x600070A0: lw          $t1, 0x110($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X110);
L_600070A4:
    // 0x600070A4: nop

    // 0x600070A8: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x600070AC: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x600070B0: bne         $at, $zero, L_60007070
    if (ctx->r1 != 0) {
        // 0x600070B4: sw          $t4, 0x110($sp)
        MEM_W(0X110, ctx->r29) = ctx->r12;
            goto L_60007070;
    }
    // 0x600070B4: sw          $t4, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r12;
    // 0x600070B8: lw          $t6, 0x10C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10C);
    // 0x600070BC: nop

    // 0x600070C0: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x600070C4: bne         $at, $zero, L_60006AD8
    if (ctx->r1 != 0) {
        // 0x600070C8: nop
    
            goto L_60006AD8;
    }
    // 0x600070C8: nop

    // 0x600070CC: jal         0x60000244
    // 0x600070D0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_battle_244(rdram, ctx);
        goto after_233;
    // 0x600070D0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_233:
    // 0x600070D4: lw          $t3, 0x118($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X118);
    // 0x600070D8: nop

    // 0x600070DC: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x600070E0: b           L_60007450
    // 0x600070E4: sw          $t2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r10;
        goto L_60007450;
    // 0x600070E4: sw          $t2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r10;
L_600070E8:
    // 0x600070E8: jal         0x60000244
    // 0x600070EC: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_234;
    // 0x600070EC: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_234:
    // 0x600070F0: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x600070F4: nop

    // 0x600070F8: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x600070FC: b           L_60007450
    // 0x60007100: sw          $t9, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r25;
        goto L_60007450;
    // 0x60007100: sw          $t9, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r25;
    // 0x60007104: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
L_60007108:
    // 0x60007108: nop

    // 0x6000710C: andi        $t7, $t0, 0x200
    ctx->r15 = ctx->r8 & 0X200;
    // 0x60007110: beq         $t7, $zero, L_600071C8
    if (ctx->r15 == 0) {
        // 0x60007114: lw          $t0, 0x11C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X11C);
            goto L_600071C8;
    }
    // 0x60007114: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60007118: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x6000711C: addiu       $t4, $sp, 0x124
    ctx->r12 = ADD32(ctx->r29, 0X124);
    // 0x60007120: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x60007124: addu        $t6, $t1, $t4
    ctx->r14 = ADD32(ctx->r9, ctx->r12);
    // 0x60007128: lw          $t3, 0x4($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X4);
    // 0x6000712C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60007130: bne         $t3, $at, L_60007144
    if (ctx->r11 != ctx->r1) {
        // 0x60007134: lw          $t2, 0x118($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X118);
            goto L_60007144;
    }
    // 0x60007134: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x60007138: b           L_60007184
    // 0x6000713C: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
        goto L_60007184;
    // 0x6000713C: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x60007140: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
L_60007144:
    // 0x60007144: addiu       $t9, $sp, 0x124
    ctx->r25 = ADD32(ctx->r29, 0X124);
    // 0x60007148: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x6000714C: addu        $t0, $t5, $t9
    ctx->r8 = ADD32(ctx->r13, ctx->r25);
    // 0x60007150: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x60007154: addiu       $t3, $sp, 0x124
    ctx->r11 = ADD32(ctx->r29, 0X124);
    // 0x60007158: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x6000715C: sw          $t8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r24;
    // 0x60007160: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x60007164: nop

    // 0x60007168: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x6000716C: addu        $t6, $t4, $t3
    ctx->r14 = ADD32(ctx->r12, ctx->r11);
    // 0x60007170: lw          $t2, 0x4($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X4);
    // 0x60007174: nop

    // 0x60007178: bgez        $t2, L_60007188
    if (SIGNED(ctx->r10) >= 0) {
        // 0x6000717C: lw          $a0, 0x118($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X118);
            goto L_60007188;
    }
    // 0x6000717C: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x60007180: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
L_60007184:
    // 0x60007184: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
L_60007188:
    // 0x60007188: jal         0x60000B2C
    // 0x6000718C: nop

    ovl_menu_battle_B2C(rdram, ctx);
        goto after_235;
    // 0x6000718C: nop

    after_235:
    // 0x60007190: bne         $v0, $zero, L_600071B0
    if (ctx->r2 != 0) {
        // 0x60007194: addiu       $t8, $sp, 0x124
        ctx->r24 = ADD32(ctx->r29, 0X124);
            goto L_600071B0;
    }
    // 0x60007194: addiu       $t8, $sp, 0x124
    ctx->r24 = ADD32(ctx->r29, 0X124);
    // 0x60007198: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x6000719C: nop

    // 0x600071A0: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x600071A4: addu        $t7, $sp, $t9
    ctx->r15 = ADD32(ctx->r29, ctx->r25);
    // 0x600071A8: sw          $zero, 0x128($t7)
    MEM_W(0X128, ctx->r15) = 0;
    // 0x600071AC: addiu       $t8, $sp, 0x124
    ctx->r24 = ADD32(ctx->r29, 0X124);
L_600071B0:
    // 0x600071B0: addiu       $a0, $t8, 0x4
    ctx->r4 = ADD32(ctx->r24, 0X4);
    // 0x600071B4: jal         0x60002374
    // 0x600071B8: addiu       $a1, $t8, 0x14
    ctx->r5 = ADD32(ctx->r24, 0X14);
    ovl_menu_battle_2374(rdram, ctx);
        goto after_236;
    // 0x600071B8: addiu       $a1, $t8, 0x14
    ctx->r5 = ADD32(ctx->r24, 0X14);
    after_236:
    // 0x600071BC: b           L_60006AD8
    // 0x600071C0: nop

        goto L_60006AD8;
    // 0x600071C0: nop

    // 0x600071C4: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
L_600071C8:
    // 0x600071C8: nop

    // 0x600071CC: andi        $t1, $t0, 0x100
    ctx->r9 = ctx->r8 & 0X100;
    // 0x600071D0: beq         $t1, $zero, L_600073B4
    if (ctx->r9 == 0) {
        // 0x600071D4: lw          $t7, 0x11C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X11C);
            goto L_600073B4;
    }
    // 0x600071D4: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x600071D8: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    // 0x600071DC: addiu       $t2, $sp, 0x124
    ctx->r10 = ADD32(ctx->r29, 0X124);
    // 0x600071E0: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x600071E4: addu        $t6, $t3, $t2
    ctx->r14 = ADD32(ctx->r11, ctx->r10);
    // 0x600071E8: lw          $t5, 0x4($t6)
    ctx->r13 = MEM_W(ctx->r14, 0X4);
    // 0x600071EC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600071F0: bne         $t5, $at, L_60007200
    if (ctx->r13 != ctx->r1) {
        // 0x600071F4: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_60007200;
    }
    // 0x600071F4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x600071F8: b           L_60007248
    // 0x600071FC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
        goto L_60007248;
    // 0x600071FC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
L_60007200:
    // 0x60007200: lw          $t7, 0x118($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X118);
    // 0x60007204: addiu       $t0, $sp, 0x124
    ctx->r8 = ADD32(ctx->r29, 0X124);
    // 0x60007208: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x6000720C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x60007210: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x60007214: addiu       $t9, $sp, 0x124
    ctx->r25 = ADD32(ctx->r29, 0X124);
    // 0x60007218: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x6000721C: sw          $t3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r11;
    // 0x60007220: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x60007224: nop

    // 0x60007228: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x6000722C: addu        $t6, $t5, $t9
    ctx->r14 = ADD32(ctx->r13, ctx->r25);
    // 0x60007230: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x60007234: nop

    // 0x60007238: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x6000723C: bne         $at, $zero, L_60007248
    if (ctx->r1 != 0) {
        // 0x60007240: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_60007248;
    }
    // 0x60007240: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x60007244: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
L_60007248:
    // 0x60007248: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x6000724C: jal         0x60000B2C
    // 0x60007250: nop

    ovl_menu_battle_B2C(rdram, ctx);
        goto after_237;
    // 0x60007250: nop

    after_237:
    // 0x60007254: bne         $v0, $zero, L_60007274
    if (ctx->r2 != 0) {
        // 0x60007258: lw          $t2, 0x118($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X118);
            goto L_60007274;
    }
    // 0x60007258: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x6000725C: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    // 0x60007260: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x60007264: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x60007268: addu        $t1, $sp, $t3
    ctx->r9 = ADD32(ctx->r29, ctx->r11);
    // 0x6000726C: sw          $t0, 0x128($t1)
    MEM_W(0X128, ctx->r9) = ctx->r8;
    // 0x60007270: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
L_60007274:
    // 0x60007274: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60007278: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x6000727C: addu        $t9, $sp, $t5
    ctx->r25 = ADD32(ctx->r29, ctx->r13);
    // 0x60007280: lw          $t9, 0x128($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X128);
    // 0x60007284: nop

    // 0x60007288: bne         $t9, $at, L_6000739C
    if (ctx->r25 != ctx->r1) {
        // 0x6000728C: addiu       $t1, $sp, 0x124
        ctx->r9 = ADD32(ctx->r29, 0X124);
            goto L_6000739C;
    }
    // 0x6000728C: addiu       $t1, $sp, 0x124
    ctx->r9 = ADD32(ctx->r29, 0X124);
    // 0x60007290: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60007294:
    // 0x60007294: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x60007298: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x6000729C: nop

    // 0x600072A0: beq         $t7, $t8, L_60007380
    if (ctx->r15 == ctx->r24) {
        // 0x600072A4: sll         $t6, $t7, 2
        ctx->r14 = S32(ctx->r15 << 2);
            goto L_60007380;
    }
    // 0x600072A4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x600072A8: addu        $t4, $sp, $t6
    ctx->r12 = ADD32(ctx->r29, ctx->r14);
    // 0x600072AC: lw          $t4, 0x128($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X128);
    // 0x600072B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600072B4: beq         $t4, $at, L_600072C4
    if (ctx->r12 == ctx->r1) {
        // 0x600072B8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_600072C4;
    }
    // 0x600072B8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600072BC: bne         $t4, $at, L_60007384
    if (ctx->r12 != ctx->r1) {
        // 0x600072C0: lw          $t9, 0x108($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X108);
            goto L_60007384;
    }
    // 0x600072C0: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
L_600072C4:
    // 0x600072C4: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
    // 0x600072C8: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x600072CC: addiu       $t1, $sp, 0x124
    ctx->r9 = ADD32(ctx->r29, 0X124);
    // 0x600072D0: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x600072D4: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x600072D8: addu        $t7, $t8, $t1
    ctx->r15 = ADD32(ctx->r24, ctx->r9);
    // 0x600072DC: addu        $t2, $t3, $t1
    ctx->r10 = ADD32(ctx->r11, ctx->r9);
    // 0x600072E0: lw          $t5, 0x14($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X14);
    // 0x600072E4: lw          $t6, 0x14($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X14);
    // 0x600072E8: nop

    // 0x600072EC: bne         $t5, $t6, L_60007384
    if (ctx->r13 != ctx->r14) {
        // 0x600072F0: lw          $t9, 0x108($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X108);
            goto L_60007384;
    }
    // 0x600072F0: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x600072F4: sw          $zero, 0x70($sp)
    MEM_W(0X70, ctx->r29) = 0;
    // 0x600072F8: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
L_600072FC:
    // 0x600072FC: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
L_60007300:
    // 0x60007300: lw          $t4, 0x104($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X104);
    // 0x60007304: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60007308: sll         $t0, $t4, 2
    ctx->r8 = S32(ctx->r12 << 2);
    // 0x6000730C: addu        $t3, $sp, $t0
    ctx->r11 = ADD32(ctx->r29, ctx->r8);
    // 0x60007310: lw          $t3, 0x128($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X128);
    // 0x60007314: nop

    // 0x60007318: beq         $t3, $at, L_60007328
    if (ctx->r11 == ctx->r1) {
        // 0x6000731C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60007328;
    }
    // 0x6000731C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60007320: bne         $t3, $at, L_60007354
    if (ctx->r11 != ctx->r1) {
        // 0x60007324: lw          $t5, 0x104($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X104);
            goto L_60007354;
    }
    // 0x60007324: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
L_60007328:
    // 0x60007328: lw          $t2, 0x104($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X104);
    // 0x6000732C: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x60007330: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x60007334: addu        $t8, $sp, $t9
    ctx->r24 = ADD32(ctx->r29, ctx->r25);
    // 0x60007338: lw          $t8, 0x138($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X138);
    // 0x6000733C: nop

    // 0x60007340: bne         $t8, $t1, L_60007350
    if (ctx->r24 != ctx->r9) {
        // 0x60007344: addiu       $t7, $t1, 0x1
        ctx->r15 = ADD32(ctx->r9, 0X1);
            goto L_60007350;
    }
    // 0x60007344: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x60007348: b           L_600072FC
    // 0x6000734C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
        goto L_600072FC;
    // 0x6000734C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
L_60007350:
    // 0x60007350: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
L_60007354:
    // 0x60007354: nop

    // 0x60007358: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x6000735C: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x60007360: bne         $at, $zero, L_60007300
    if (ctx->r1 != 0) {
        // 0x60007364: sw          $t6, 0x104($sp)
        MEM_W(0X104, ctx->r29) = ctx->r14;
            goto L_60007300;
    }
    // 0x60007364: sw          $t6, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r14;
    // 0x60007368: lw          $t0, 0x118($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X118);
    // 0x6000736C: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x60007370: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x60007374: addu        $t2, $sp, $t3
    ctx->r10 = ADD32(ctx->r29, ctx->r11);
    // 0x60007378: b           L_60007398
    // 0x6000737C: sw          $t4, 0x138($t2)
    MEM_W(0X138, ctx->r10) = ctx->r12;
        goto L_60007398;
    // 0x6000737C: sw          $t4, 0x138($t2)
    MEM_W(0X138, ctx->r10) = ctx->r12;
L_60007380:
    // 0x60007380: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
L_60007384:
    // 0x60007384: nop

    // 0x60007388: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x6000738C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x60007390: bne         $at, $zero, L_60007294
    if (ctx->r1 != 0) {
        // 0x60007394: sw          $t8, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r24;
            goto L_60007294;
    }
    // 0x60007394: sw          $t8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r24;
L_60007398:
    // 0x60007398: addiu       $t1, $sp, 0x124
    ctx->r9 = ADD32(ctx->r29, 0X124);
L_6000739C:
    // 0x6000739C: addiu       $a0, $t1, 0x4
    ctx->r4 = ADD32(ctx->r9, 0X4);
    // 0x600073A0: jal         0x60002374
    // 0x600073A4: addiu       $a1, $t1, 0x14
    ctx->r5 = ADD32(ctx->r9, 0X14);
    ovl_menu_battle_2374(rdram, ctx);
        goto after_238;
    // 0x600073A4: addiu       $a1, $t1, 0x14
    ctx->r5 = ADD32(ctx->r9, 0X14);
    after_238:
    // 0x600073A8: b           L_60006AD8
    // 0x600073AC: nop

        goto L_60006AD8;
    // 0x600073AC: nop

    // 0x600073B0: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
L_600073B4:
    // 0x600073B4: nop

    // 0x600073B8: andi        $t5, $t7, 0x1000
    ctx->r13 = ctx->r15 & 0X1000;
    // 0x600073BC: beq         $t5, $zero, L_60006AD8
    if (ctx->r13 == 0) {
        // 0x600073C0: nop
    
            goto L_60006AD8;
    }
    // 0x600073C0: nop

    // 0x600073C4: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x600073C8: lw          $a1, -0x3FC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FC0);
    // 0x600073CC: jal         0x60002E58
    // 0x600073D0: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    ovl_menu_battle_2E58(rdram, ctx);
        goto after_239;
    // 0x600073D0: addiu       $a0, $sp, 0x124
    ctx->r4 = ADD32(ctx->r29, 0X124);
    after_239:
    // 0x600073D4: bne         $v0, $zero, L_60006AD8
    if (ctx->r2 != 0) {
        // 0x600073D8: nop
    
            goto L_60006AD8;
    }
    // 0x600073D8: nop

    // 0x600073DC: sw          $zero, 0x110($sp)
    MEM_W(0X110, ctx->r29) = 0;
    // 0x600073E0: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
L_600073E4:
    // 0x600073E4: lw          $t6, 0x110($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X110);
    // 0x600073E8: nop

    // 0x600073EC: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x600073F0: addu        $t4, $sp, $t0
    ctx->r12 = ADD32(ctx->r29, ctx->r8);
    // 0x600073F4: lw          $t4, 0x128($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X128);
    // 0x600073F8: nop

    // 0x600073FC: beq         $t4, $zero, L_60007418
    if (ctx->r12 == 0) {
        // 0x60007400: lw          $t9, 0x110($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X110);
            goto L_60007418;
    }
    // 0x60007400: lw          $t9, 0x110($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X110);
    // 0x60007404: lw          $t3, 0x10C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10C);
    // 0x60007408: nop

    // 0x6000740C: addiu       $t2, $t3, 0x1
    ctx->r10 = ADD32(ctx->r11, 0X1);
    // 0x60007410: sw          $t2, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r10;
    // 0x60007414: lw          $t9, 0x110($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X110);
L_60007418:
    // 0x60007418: nop

    // 0x6000741C: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x60007420: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x60007424: bne         $at, $zero, L_600073E4
    if (ctx->r1 != 0) {
        // 0x60007428: sw          $t8, 0x110($sp)
        MEM_W(0X110, ctx->r29) = ctx->r24;
            goto L_600073E4;
    }
    // 0x60007428: sw          $t8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r24;
    // 0x6000742C: lw          $t1, 0x10C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10C);
    // 0x60007430: nop

    // 0x60007434: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x60007438: bne         $at, $zero, L_60006AD8
    if (ctx->r1 != 0) {
        // 0x6000743C: nop
    
            goto L_60006AD8;
    }
    // 0x6000743C: nop

    // 0x60007440: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x60007444: sw          $t7, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r15;
    // 0x60007448: jal         0x60000244
    // 0x6000744C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_battle_244(rdram, ctx);
        goto after_240;
    // 0x6000744C: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_240:
L_60007450:
    // 0x60007450: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
L_60007454:
    // 0x60007454: nop

    // 0x60007458: bltz        $t5, L_60007468
    if (SIGNED(ctx->r13) < 0) {
        // 0x6000745C: slti        $at, $t5, 0x4
        ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
            goto L_60007468;
    }
    // 0x6000745C: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x60007460: bne         $at, $zero, L_60006A9C
    if (ctx->r1 != 0) {
        // 0x60007464: lw          $t1, 0x118($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X118);
            goto L_60006A9C;
    }
    // 0x60007464: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
L_60007468:
    // 0x60007468: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x6000746C: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x60007470: addiu       $t4, $sp, 0x124
    ctx->r12 = ADD32(ctx->r29, 0X124);
    // 0x60007474: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60007478: sw          $t4, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r12;
    // 0x6000747C: sw          $t6, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r14;
    // 0x60007480: beq         $t6, $at, L_600074CC
    if (ctx->r14 == ctx->r1) {
        // 0x60007484: sw          $t0, 0x258($sp)
        MEM_W(0X258, ctx->r29) = ctx->r8;
            goto L_600074CC;
    }
    // 0x60007484: sw          $t0, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r8;
    // 0x60007488: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000748C:
    // 0x6000748C: lw          $t3, 0x254($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X254);
    // 0x60007490: lw          $t9, 0x258($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X258);
    // 0x60007494: lbu         $t2, 0x0($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0X0);
    // 0x60007498: nop

    // 0x6000749C: sb          $t2, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r10;
    // 0x600074A0: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x600074A4: lw          $t7, 0x254($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X254);
    // 0x600074A8: lw          $t8, 0x258($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X258);
    // 0x600074AC: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x600074B0: sltiu       $at, $t4, 0x124
    ctx->r1 = ctx->r12 < 0X124 ? 1 : 0;
    // 0x600074B4: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x600074B8: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x600074BC: sw          $t4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r12;
    // 0x600074C0: sw          $t1, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r9;
    // 0x600074C4: bne         $at, $zero, L_6000748C
    if (ctx->r1 != 0) {
        // 0x600074C8: sw          $t5, 0x254($sp)
        MEM_W(0X254, ctx->r29) = ctx->r13;
            goto L_6000748C;
    }
    // 0x600074C8: sw          $t5, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r13;
L_600074CC:
    // 0x600074CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600074D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600074D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600074D8: jal         0x60000238
    // 0x600074DC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_238(rdram, ctx);
        goto after_241;
    // 0x600074DC: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_241:
    // 0x600074E0: jal         0x60000208
    // 0x600074E4: nop

    ovl_menu_battle_208(rdram, ctx);
        goto after_242;
    // 0x600074E4: nop

    after_242:
    // 0x600074E8: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_600074EC:
    // 0x600074EC: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x600074F0: jal         0x60002040
    // 0x600074F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_243;
    // 0x600074F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_243:
    // 0x600074F8: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x600074FC: nop

    // 0x60007500: addiu       $t3, $t6, 0x1
    ctx->r11 = ADD32(ctx->r14, 0X1);
    // 0x60007504: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x60007508: bne         $at, $zero, L_600074EC
    if (ctx->r1 != 0) {
        // 0x6000750C: sw          $t3, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r11;
            goto L_600074EC;
    }
    // 0x6000750C: sw          $t3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r11;
    // 0x60007510: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60007514: lw          $a0, -0x3E84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E84);
    // 0x60007518: jal         0x60000DA8
    // 0x6000751C: nop

    ovl_menu_battle_DA8(rdram, ctx);
        goto after_244;
    // 0x6000751C: nop

    after_244:
    // 0x60007520: lw          $a0, 0x26C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X26C);
    // 0x60007524: jal         0x60000550
    // 0x60007528: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_245;
    // 0x60007528: nop

    after_245:
    // 0x6000752C: lw          $a0, 0x268($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X268);
    // 0x60007530: jal         0x60000550
    // 0x60007534: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_246;
    // 0x60007534: nop

    after_246:
    // 0x60007538: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000753C: addiu       $a0, $a0, -0x4B90
    ctx->r4 = ADD32(ctx->r4, -0X4B90);
    // 0x60007540: jal         0x60001BEC
    // 0x60007544: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    ovl_menu_battle_1BEC(rdram, ctx);
        goto after_247;
    // 0x60007544: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_247:
    // 0x60007548: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000754C: addiu       $a0, $a0, -0x4898
    ctx->r4 = ADD32(ctx->r4, -0X4898);
    // 0x60007550: jal         0x60001BEC
    // 0x60007554: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_menu_battle_1BEC(rdram, ctx);
        goto after_248;
    // 0x60007554: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_248:
    // 0x60007558: b           L_6000AD54
    // 0x6000755C: nop

        goto L_6000AD54;
    // 0x6000755C: nop

L_60007560:
    // 0x60007560: lw          $t2, 0x120($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X120);
    // 0x60007564: nop

    // 0x60007568: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x6000756C: nop

    // 0x60007570: andi        $t8, $t9, 0x8000
    ctx->r24 = ctx->r25 & 0X8000;
    // 0x60007574: beq         $t8, $zero, L_600075E4
    if (ctx->r24 == 0) {
        // 0x60007578: nop
    
            goto L_600075E4;
    }
    // 0x60007578: nop

    // 0x6000757C: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x60007580: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x60007584: lw          $t5, 0x0($t7)
    ctx->r13 = MEM_W(ctx->r15, 0X0);
    // 0x60007588: nop

    // 0x6000758C: addu        $t0, $t1, $t5
    ctx->r8 = ADD32(ctx->r9, ctx->r13);
    // 0x60007590: lbu         $t4, 0x4($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X4);
    // 0x60007594: nop

    // 0x60007598: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x6000759C: bne         $at, $zero, L_600075AC
    if (ctx->r1 != 0) {
        // 0x600075A0: sw          $t4, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r12;
            goto L_600075AC;
    }
    // 0x600075A0: sw          $t4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r12;
    // 0x600075A4: b           L_600075B4
    // 0x600075A8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
        goto L_600075B4;
    // 0x600075A8: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_600075AC:
    // 0x600075AC: lw          $s0, 0x11C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X11C);
    // 0x600075B0: nop

L_600075B4:
    // 0x600075B4: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x600075B8: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x600075BC: lw          $t3, 0x0($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X0);
    // 0x600075C0: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x600075C4: sll         $t2, $t3, 2
    ctx->r10 = S32(ctx->r11 << 2);
    // 0x600075C8: addu        $t2, $t2, $t3
    ctx->r10 = ADD32(ctx->r10, ctx->r11);
    // 0x600075CC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x600075D0: addu        $t8, $t2, $t9
    ctx->r24 = ADD32(ctx->r10, ctx->r25);
    // 0x600075D4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x600075D8: lw          $t7, -0x525C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X525C);
    // 0x600075DC: b           L_6000AD54
    // 0x600075E0: sw          $t7, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r15;
        goto L_6000AD54;
    // 0x600075E0: sw          $t7, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r15;
L_600075E4:
    // 0x600075E4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600075E8: addiu       $a0, $a0, -0x5158
    ctx->r4 = ADD32(ctx->r4, -0X5158);
    // 0x600075EC: jal         0x60001AA0
    // 0x600075F0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_249;
    // 0x600075F0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_249:
    // 0x600075F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600075F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600075FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007600: jal         0x60000220
    // 0x60007604: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_220(rdram, ctx);
        goto after_250;
    // 0x60007604: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_250:
    // 0x60007608: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000760C: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60007610: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60007614: jal         0x6000064C
    // 0x60007618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_251;
    // 0x60007618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_251:
    // 0x6000761C: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x60007620: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60007624: sw          $v0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r2;
    // 0x60007628: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x6000762C: swc1        $f8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f8.u32l;
    // 0x60007630: lw          $t5, 0x268($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X268);
    // 0x60007634: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60007638: addiu       $t0, $zero, 0xE0
    ctx->r8 = ADD32(0, 0XE0);
    // 0x6000763C: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
    // 0x60007640: lw          $t4, 0x268($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X268);
    // 0x60007644: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x60007648: sw          $t0, 0x4C($t4)
    MEM_W(0X4C, ctx->r12) = ctx->r8;
    // 0x6000764C: lw          $t3, 0x268($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X268);
    // 0x60007650: lui         $t2, 0xFF77
    ctx->r10 = S32(0XFF77 << 16);
    // 0x60007654: sw          $t6, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r14;
    // 0x60007658: lw          $t9, 0x268($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X268);
    // 0x6000765C: ori         $t2, $t2, 0x80
    ctx->r10 = ctx->r10 | 0X80;
    // 0x60007660: sw          $t2, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r10;
    // 0x60007664: lw          $t7, 0x268($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X268);
    // 0x60007668: addiu       $t8, $zero, 0x7000
    ctx->r24 = ADD32(0, 0X7000);
    // 0x6000766C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60007670: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60007674: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60007678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000767C: jal         0x6000064C
    // 0x60007680: sw          $t8, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->r24;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_252;
    // 0x60007680: sw          $t8, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->r24;
    after_252:
    // 0x60007684: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x60007688: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000768C: sw          $v0, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r2;
    // 0x60007690: lui         $at, 0x4340
    ctx->r1 = S32(0X4340 << 16);
    // 0x60007694: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x60007698: lw          $t5, 0x264($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X264);
    // 0x6000769C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600076A0: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x600076A4: swc1        $f6, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f6.u32l;
    // 0x600076A8: lw          $t4, 0x264($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X264);
    // 0x600076AC: addiu       $t6, $zero, 0x18
    ctx->r14 = ADD32(0, 0X18);
    // 0x600076B0: sw          $t0, 0x4C($t4)
    MEM_W(0X4C, ctx->r12) = ctx->r8;
    // 0x600076B4: lw          $t3, 0x264($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X264);
    // 0x600076B8: lui         $t2, 0x77
    ctx->r10 = S32(0X77 << 16);
    // 0x600076BC: sw          $t6, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r14;
    // 0x600076C0: lw          $t9, 0x264($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X264);
    // 0x600076C4: ori         $t2, $t2, 0xFF80
    ctx->r10 = ctx->r10 | 0XFF80;
    // 0x600076C8: sw          $t2, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r10;
    // 0x600076CC: lw          $t8, 0x264($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X264);
    // 0x600076D0: jal         0x6000085C
    // 0x600076D4: sw          $zero, 0x40($t8)
    MEM_W(0X40, ctx->r24) = 0;
    ovl_menu_battle_85C(rdram, ctx);
        goto after_253;
    // 0x600076D4: sw          $zero, 0x40($t8)
    MEM_W(0X40, ctx->r24) = 0;
    after_253:
    // 0x600076D8: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x600076DC: addiu       $t7, $t7, -0x5158
    ctx->r15 = ADD32(ctx->r15, -0X5158);
    // 0x600076E0: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x600076E4: jal         0x600005A4
    // 0x600076E8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_254;
    // 0x600076E8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_254:
    // 0x600076EC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600076F0: lwc1        $f16, -0x401C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X401C);
    // 0x600076F4: lui         $at, 0x4439
    ctx->r1 = S32(0X4439 << 16);
    // 0x600076F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600076FC: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x60007700: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60007704: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60007708: addiu       $t1, $t1, -0x5158
    ctx->r9 = ADD32(ctx->r9, -0X5158);
    // 0x6000770C: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x60007710: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x60007714: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    // 0x60007718: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x6000771C: jal         0x6000058C
    // 0x60007720: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    ovl_menu_battle_58C(rdram, ctx);
        goto after_255;
    // 0x60007720: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    after_255:
    // 0x60007724: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60007728: addiu       $t5, $t5, -0x5158
    ctx->r13 = ADD32(ctx->r13, -0X5158);
    // 0x6000772C: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    // 0x60007730: jal         0x60000640
    // 0x60007734: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_640(rdram, ctx);
        goto after_256;
    // 0x60007734: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_256:
    // 0x60007738: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x6000773C: addiu       $t0, $t0, -0x5158
    ctx->r8 = ADD32(ctx->r8, -0X5158);
    // 0x60007740: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    // 0x60007744: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x60007748: jal         0x6000061C
    // 0x6000774C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_257;
    // 0x6000774C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_257:
    // 0x60007750: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60007754: addiu       $t4, $t4, -0x5158
    ctx->r12 = ADD32(ctx->r12, -0X5158);
    // 0x60007758: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x6000775C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x60007760: jal         0x60000574
    // 0x60007764: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_258;
    // 0x60007764: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_258:
    // 0x60007768: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x6000776C: addiu       $t6, $t6, -0x5158
    ctx->r14 = ADD32(ctx->r14, -0X5158);
    // 0x60007770: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x60007774: jal         0x600005A4
    // 0x60007778: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_259;
    // 0x60007778: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_259:
    // 0x6000777C: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60007780: addiu       $t3, $t3, -0x5158
    ctx->r11 = ADD32(ctx->r11, -0X5158);
    // 0x60007784: lw          $a0, 0x48($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X48);
    // 0x60007788: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000778C: jal         0x6000061C
    // 0x60007790: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_260;
    // 0x60007790: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_260:
    // 0x60007794: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60007798: addiu       $t2, $t2, -0x5158
    ctx->r10 = ADD32(ctx->r10, -0X5158);
    // 0x6000779C: lw          $a0, 0x48($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X48);
    // 0x600077A0: jal         0x60000604
    // 0x600077A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_battle_604(rdram, ctx);
        goto after_261;
    // 0x600077A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_261:
    // 0x600077A8: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x600077AC: addiu       $t9, $t9, -0x5158
    ctx->r25 = ADD32(ctx->r25, -0X5158);
    // 0x600077B0: lw          $a0, 0x5C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X5C);
    // 0x600077B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600077B8: jal         0x6000061C
    // 0x600077BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_262;
    // 0x600077BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_262:
    // 0x600077C0: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x600077C4: addiu       $t8, $t8, -0x5158
    ctx->r24 = ADD32(ctx->r24, -0X5158);
    // 0x600077C8: lw          $a0, 0x5C($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X5C);
    // 0x600077CC: jal         0x60000604
    // 0x600077D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_battle_604(rdram, ctx);
        goto after_263;
    // 0x600077D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_263:
    // 0x600077D4: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x600077D8: addiu       $t7, $t7, -0x5158
    ctx->r15 = ADD32(ctx->r15, -0X5158);
    // 0x600077DC: lw          $a0, 0x5C($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X5C);
    // 0x600077E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600077E4: jal         0x60000634
    // 0x600077E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_634(rdram, ctx);
        goto after_264;
    // 0x600077E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_264:
    // 0x600077EC: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x600077F0: addiu       $t1, $t1, -0x5158
    ctx->r9 = ADD32(ctx->r9, -0X5158);
    // 0x600077F4: lw          $a0, 0x70($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X70);
    // 0x600077F8: jal         0x60000640
    // 0x600077FC: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    ovl_menu_battle_640(rdram, ctx);
        goto after_265;
    // 0x600077FC: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_265:
    // 0x60007800: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x60007804: jal         0x60000E8C
    // 0x60007808: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    ovl_menu_battle_E8C(rdram, ctx);
        goto after_266;
    // 0x60007808: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    after_266:
    // 0x6000780C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x60007810: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60007814: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x60007818: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000781C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60007820: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60007824: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60007828: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x6000782C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60007830: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x60007834: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x60007838: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x6000783C: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    // 0x60007840: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    // 0x60007844: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x60007848: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x6000784C: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    // 0x60007850: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x60007854: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x60007858: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    // 0x6000785C: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x60007860: jal         0x60000DB4
    // 0x60007864: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    ovl_menu_battle_DB4(rdram, ctx);
        goto after_267;
    // 0x60007864: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    after_267:
    // 0x60007868: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000786C: sw          $v0, -0x3E84($at)
    MEM_W(-0X3E84, ctx->r1) = ctx->r2;
    // 0x60007870: lw          $t5, 0x248($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X248);
    // 0x60007874: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60007878: sw          $zero, -0x3E88($at)
    MEM_W(-0X3E88, ctx->r1) = 0;
    // 0x6000787C: lw          $a0, 0x120($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X120);
    // 0x60007880: jal         0x60001CFC
    // 0x60007884: sw          $a0, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r4;
    ovl_menu_battle_1CFC(rdram, ctx);
        goto after_268;
    // 0x60007884: sw          $a0, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r4;
    after_268:
    // 0x60007888: lw          $t4, 0x250($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X250);
    // 0x6000788C: nop

    // 0x60007890: bne         $t4, $zero, L_600078B0
    if (ctx->r12 != 0) {
        // 0x60007894: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_600078B0;
    }
    // 0x60007894: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60007898: addiu       $a0, $a0, -0x5158
    ctx->r4 = ADD32(ctx->r4, -0X5158);
    // 0x6000789C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600078A0: jal         0x60001C84
    // 0x600078A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_269;
    // 0x600078A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_269:
    // 0x600078A8: b           L_600078D0
    // 0x600078AC: nop

        goto L_600078D0;
    // 0x600078AC: nop

L_600078B0:
    // 0x600078B0: lw          $t6, 0x250($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X250);
    // 0x600078B4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x600078B8: bne         $t6, $at, L_600078D0
    if (ctx->r14 != ctx->r1) {
        // 0x600078BC: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_600078D0;
    }
    // 0x600078BC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600078C0: addiu       $a0, $a0, -0x5158
    ctx->r4 = ADD32(ctx->r4, -0X5158);
    // 0x600078C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600078C8: jal         0x60001C84
    // 0x600078CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_270;
    // 0x600078CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_270:
L_600078D0:
    // 0x600078D0: jal         0x600022AC
    // 0x600078D4: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_271;
    // 0x600078D4: nop

    after_271:
    // 0x600078D8: andi        $t2, $v0, 0x200
    ctx->r10 = ctx->r2 & 0X200;
    // 0x600078DC: beq         $t2, $zero, L_600079D8
    if (ctx->r10 == 0) {
        // 0x600078E0: sw          $v0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r2;
            goto L_600079D8;
    }
    // 0x600078E0: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    // 0x600078E4: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
    // 0x600078E8: nop

    // 0x600078EC: blez        $t9, L_60007BA4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x600078F0: nop
    
            goto L_60007BA4;
    }
    // 0x600078F0: nop

    // 0x600078F4: jal         0x60000244
    // 0x600078F8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_272;
    // 0x600078F8: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_272:
    // 0x600078FC: lw          $t8, 0x250($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X250);
    // 0x60007900: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60007904: bne         $t8, $at, L_6000791C
    if (ctx->r24 != ctx->r1) {
        // 0x60007908: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_6000791C;
    }
    // 0x60007908: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000790C: addiu       $a0, $a0, -0x5158
    ctx->r4 = ADD32(ctx->r4, -0X5158);
    // 0x60007910: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60007914: jal         0x60001C84
    // 0x60007918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_273;
    // 0x60007918: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_273:
L_6000791C:
    // 0x6000791C: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x60007920: nop

    // 0x60007924: addiu       $t1, $t7, -0x1
    ctx->r9 = ADD32(ctx->r15, -0X1);
    // 0x60007928: slti        $t5, $t1, 0x4
    ctx->r13 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x6000792C: xori        $t5, $t5, 0x1
    ctx->r13 = ctx->r13 ^ 0X1;
    // 0x60007930: beq         $t5, $zero, L_600079A4
    if (ctx->r13 == 0) {
        // 0x60007934: sw          $t1, 0x250($sp)
        MEM_W(0X250, ctx->r29) = ctx->r9;
            goto L_600079A4;
    }
    // 0x60007934: sw          $t1, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r9;
    // 0x60007938: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x6000793C: sll         $t0, $t1, 2
    ctx->r8 = S32(ctx->r9 << 2);
    // 0x60007940: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60007944: addu        $t4, $t4, $t0
    ctx->r12 = ADD32(ctx->r12, ctx->r8);
    // 0x60007948: lw          $t4, -0x4234($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4234);
    // 0x6000794C: lbu         $t3, 0x3($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X3);
    // 0x60007950: nop

    // 0x60007954: and         $t2, $t4, $t3
    ctx->r10 = ctx->r12 & ctx->r11;
    // 0x60007958: bne         $t2, $zero, L_600079A8
    if (ctx->r10 != 0) {
        // 0x6000795C: lw          $a0, 0x250($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X250);
            goto L_600079A8;
    }
    // 0x6000795C: lw          $a0, 0x250($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X250);
    // 0x60007960: beq         $t5, $zero, L_600079A8
    if (ctx->r13 == 0) {
        // 0x60007964: lw          $a0, 0x250($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X250);
            goto L_600079A8;
    }
    // 0x60007964: lw          $a0, 0x250($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X250);
    // 0x60007968: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
L_6000796C:
    // 0x6000796C: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x60007970: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x60007974: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x60007978: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x6000797C: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x60007980: sw          $t8, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r24;
    // 0x60007984: lw          $t0, -0x4234($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4234);
    // 0x60007988: lbu         $t4, 0x3($t6)
    ctx->r12 = MEM_BU(ctx->r14, 0X3);
    // 0x6000798C: nop

    // 0x60007990: and         $t3, $t0, $t4
    ctx->r11 = ctx->r8 & ctx->r12;
    // 0x60007994: bne         $t3, $zero, L_600079A4
    if (ctx->r11 != 0) {
        // 0x60007998: slti        $at, $t8, 0x4
        ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
            goto L_600079A4;
    }
    // 0x60007998: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x6000799C: beq         $at, $zero, L_6000796C
    if (ctx->r1 == 0) {
        // 0x600079A0: lw          $t9, 0x250($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X250);
            goto L_6000796C;
    }
    // 0x600079A0: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
L_600079A4:
    // 0x600079A4: lw          $a0, 0x250($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X250);
L_600079A8:
    // 0x600079A8: jal         0x60001CFC
    // 0x600079AC: nop

    ovl_menu_battle_1CFC(rdram, ctx);
        goto after_274;
    // 0x600079AC: nop

    after_274:
    // 0x600079B0: lw          $t2, 0x250($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X250);
    // 0x600079B4: nop

    // 0x600079B8: bne         $t2, $zero, L_60007BA4
    if (ctx->r10 != 0) {
        // 0x600079BC: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_60007BA4;
    }
    // 0x600079BC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600079C0: addiu       $a0, $a0, -0x5158
    ctx->r4 = ADD32(ctx->r4, -0X5158);
    // 0x600079C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600079C8: jal         0x60001C84
    // 0x600079CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_275;
    // 0x600079CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_275:
    // 0x600079D0: b           L_60007BA4
    // 0x600079D4: nop

        goto L_60007BA4;
    // 0x600079D4: nop

L_600079D8:
    // 0x600079D8: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x600079DC: nop

    // 0x600079E0: andi        $t9, $t5, 0x100
    ctx->r25 = ctx->r13 & 0X100;
    // 0x600079E4: beq         $t9, $zero, L_60007B5C
    if (ctx->r25 == 0) {
        // 0x600079E8: lw          $t5, 0x11C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X11C);
            goto L_60007B5C;
    }
    // 0x600079E8: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x600079EC: lw          $t8, 0x250($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X250);
    // 0x600079F0: nop

    // 0x600079F4: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x600079F8: beq         $at, $zero, L_60007BA4
    if (ctx->r1 == 0) {
        // 0x600079FC: nop
    
            goto L_60007BA4;
    }
    // 0x600079FC: nop

    // 0x60007A00: jal         0x60000244
    // 0x60007A04: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_276;
    // 0x60007A04: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_276:
    // 0x60007A08: lw          $t1, 0x250($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X250);
    // 0x60007A0C: nop

    // 0x60007A10: bne         $t1, $zero, L_60007A28
    if (ctx->r9 != 0) {
        // 0x60007A14: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_60007A28;
    }
    // 0x60007A14: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60007A18: addiu       $a0, $a0, -0x5158
    ctx->r4 = ADD32(ctx->r4, -0X5158);
    // 0x60007A1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60007A20: jal         0x60001C84
    // 0x60007A24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_277;
    // 0x60007A24: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_277:
L_60007A28:
    // 0x60007A28: lw          $t6, 0x250($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X250);
    // 0x60007A2C: nop

    // 0x60007A30: addiu       $t0, $t6, 0x1
    ctx->r8 = ADD32(ctx->r14, 0X1);
    // 0x60007A34: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x60007A38: bne         $at, $zero, L_60007B24
    if (ctx->r1 != 0) {
        // 0x60007A3C: sw          $t0, 0x250($sp)
        MEM_W(0X250, ctx->r29) = ctx->r8;
            goto L_60007B24;
    }
    // 0x60007A3C: sw          $t0, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r8;
    // 0x60007A40: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x60007A44: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x60007A48: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60007A4C: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x60007A50: lw          $t3, -0x4234($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X4234);
    // 0x60007A54: lbu         $t2, 0x3($t7)
    ctx->r10 = MEM_BU(ctx->r15, 0X3);
    // 0x60007A58: nop

    // 0x60007A5C: and         $t5, $t3, $t2
    ctx->r13 = ctx->r11 & ctx->r10;
    // 0x60007A60: bne         $t5, $zero, L_60007AAC
    if (ctx->r13 != 0) {
        // 0x60007A64: slti        $at, $t0, 0x7
        ctx->r1 = SIGNED(ctx->r8) < 0X7 ? 1 : 0;
            goto L_60007AAC;
    }
    // 0x60007A64: slti        $at, $t0, 0x7
    ctx->r1 = SIGNED(ctx->r8) < 0X7 ? 1 : 0;
    // 0x60007A68: beq         $at, $zero, L_60007AB0
    if (ctx->r1 == 0) {
        // 0x60007A6C: lw          $t5, 0x250($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X250);
            goto L_60007AB0;
    }
    // 0x60007A6C: lw          $t5, 0x250($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X250);
    // 0x60007A70: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
L_60007A74:
    // 0x60007A74: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x60007A78: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x60007A7C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x60007A80: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60007A84: addu        $t4, $t4, $t6
    ctx->r12 = ADD32(ctx->r12, ctx->r14);
    // 0x60007A88: sw          $t8, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r24;
    // 0x60007A8C: lw          $t4, -0x4234($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4234);
    // 0x60007A90: lbu         $t3, 0x3($t7)
    ctx->r11 = MEM_BU(ctx->r15, 0X3);
    // 0x60007A94: nop

    // 0x60007A98: and         $t2, $t4, $t3
    ctx->r10 = ctx->r12 & ctx->r11;
    // 0x60007A9C: bne         $t2, $zero, L_60007AAC
    if (ctx->r10 != 0) {
        // 0x60007AA0: slti        $at, $t8, 0x7
        ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
            goto L_60007AAC;
    }
    // 0x60007AA0: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x60007AA4: bne         $at, $zero, L_60007A74
    if (ctx->r1 != 0) {
        // 0x60007AA8: lw          $t9, 0x250($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X250);
            goto L_60007A74;
    }
    // 0x60007AA8: lw          $t9, 0x250($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X250);
L_60007AAC:
    // 0x60007AAC: lw          $t5, 0x250($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X250);
L_60007AB0:
    // 0x60007AB0: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x60007AB4: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60007AB8: sll         $t0, $t5, 2
    ctx->r8 = S32(ctx->r13 << 2);
    // 0x60007ABC: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x60007AC0: lw          $t9, -0x4234($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4234);
    // 0x60007AC4: lbu         $t6, 0x3($t8)
    ctx->r14 = MEM_BU(ctx->r24, 0X3);
    // 0x60007AC8: nop

    // 0x60007ACC: and         $t7, $t9, $t6
    ctx->r15 = ctx->r25 & ctx->r14;
    // 0x60007AD0: bne         $t7, $zero, L_60007B28
    if (ctx->r15 != 0) {
        // 0x60007AD4: lw          $a0, 0x250($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X250);
            goto L_60007B28;
    }
    // 0x60007AD4: lw          $a0, 0x250($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X250);
    // 0x60007AD8: bne         $t7, $zero, L_60007B24
    if (ctx->r15 != 0) {
        // 0x60007ADC: slti        $at, $t5, 0x4
        ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
            goto L_60007B24;
    }
    // 0x60007ADC: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x60007AE0: bne         $at, $zero, L_60007B28
    if (ctx->r1 != 0) {
        // 0x60007AE4: lw          $a0, 0x250($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X250);
            goto L_60007B28;
    }
    // 0x60007AE4: lw          $a0, 0x250($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X250);
    // 0x60007AE8: lw          $t4, 0x250($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X250);
L_60007AEC:
    // 0x60007AEC: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x60007AF0: addiu       $t3, $t4, -0x1
    ctx->r11 = ADD32(ctx->r12, -0X1);
    // 0x60007AF4: sll         $t1, $t3, 2
    ctx->r9 = S32(ctx->r11 << 2);
    // 0x60007AF8: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60007AFC: addu        $t0, $t0, $t1
    ctx->r8 = ADD32(ctx->r8, ctx->r9);
    // 0x60007B00: sw          $t3, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r11;
    // 0x60007B04: lw          $t0, -0x4234($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4234);
    // 0x60007B08: lbu         $t9, 0x3($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X3);
    // 0x60007B0C: nop

    // 0x60007B10: and         $t6, $t0, $t9
    ctx->r14 = ctx->r8 & ctx->r25;
    // 0x60007B14: bne         $t6, $zero, L_60007B24
    if (ctx->r14 != 0) {
        // 0x60007B18: slti        $at, $t3, 0x4
        ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
            goto L_60007B24;
    }
    // 0x60007B18: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x60007B1C: beq         $at, $zero, L_60007AEC
    if (ctx->r1 == 0) {
        // 0x60007B20: lw          $t4, 0x250($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X250);
            goto L_60007AEC;
    }
    // 0x60007B20: lw          $t4, 0x250($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X250);
L_60007B24:
    // 0x60007B24: lw          $a0, 0x250($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X250);
L_60007B28:
    // 0x60007B28: jal         0x60001CFC
    // 0x60007B2C: nop

    ovl_menu_battle_1CFC(rdram, ctx);
        goto after_278;
    // 0x60007B2C: nop

    after_278:
    // 0x60007B30: lw          $t7, 0x250($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X250);
    // 0x60007B34: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60007B38: bne         $t7, $at, L_60007BA4
    if (ctx->r15 != ctx->r1) {
        // 0x60007B3C: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_60007BA4;
    }
    // 0x60007B3C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60007B40: addiu       $a0, $a0, -0x5158
    ctx->r4 = ADD32(ctx->r4, -0X5158);
    // 0x60007B44: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60007B48: jal         0x60001C84
    // 0x60007B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_279;
    // 0x60007B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_279:
    // 0x60007B50: b           L_60007BA4
    // 0x60007B54: nop

        goto L_60007BA4;
    // 0x60007B54: nop

    // 0x60007B58: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
L_60007B5C:
    // 0x60007B5C: nop

    // 0x60007B60: andi        $t4, $t5, 0x9000
    ctx->r12 = ctx->r13 & 0X9000;
    // 0x60007B64: beq         $t4, $zero, L_60007B80
    if (ctx->r12 == 0) {
        // 0x60007B68: lw          $t3, 0x11C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X11C);
            goto L_60007B80;
    }
    // 0x60007B68: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x60007B6C: jal         0x60000244
    // 0x60007B70: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_battle_244(rdram, ctx);
        goto after_280;
    // 0x60007B70: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_280:
    // 0x60007B74: b           L_60007BB8
    // 0x60007B78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_60007BB8;
    // 0x60007B78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007B7C: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
L_60007B80:
    // 0x60007B80: nop

    // 0x60007B84: andi        $t1, $t3, 0x4000
    ctx->r9 = ctx->r11 & 0X4000;
    // 0x60007B88: beq         $t1, $zero, L_60007BA4
    if (ctx->r9 == 0) {
        // 0x60007B8C: nop
    
            goto L_60007BA4;
    }
    // 0x60007B8C: nop

    // 0x60007B90: jal         0x60000244
    // 0x60007B94: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_battle_244(rdram, ctx);
        goto after_281;
    // 0x60007B94: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_281:
    // 0x60007B98: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x60007B9C: b           L_60007BB4
    // 0x60007BA0: sw          $t8, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r24;
        goto L_60007BB4;
    // 0x60007BA0: sw          $t8, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r24;
L_60007BA4:
    // 0x60007BA4: jal         0x6000085C
    // 0x60007BA8: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_282;
    // 0x60007BA8: nop

    after_282:
    // 0x60007BAC: b           L_600078D0
    // 0x60007BB0: nop

        goto L_600078D0;
    // 0x60007BB0: nop

L_60007BB4:
    // 0x60007BB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60007BB8:
    // 0x60007BB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60007BBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007BC0: jal         0x60000238
    // 0x60007BC4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_238(rdram, ctx);
        goto after_283;
    // 0x60007BC4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_283:
    // 0x60007BC8: jal         0x60000208
    // 0x60007BCC: nop

    ovl_menu_battle_208(rdram, ctx);
        goto after_284;
    // 0x60007BCC: nop

    after_284:
    // 0x60007BD0: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60007BD4: lw          $a1, -0x3E88($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E88);
    // 0x60007BD8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60007BDC: jal         0x60000F34
    // 0x60007BE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_285;
    // 0x60007BE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_285:
    // 0x60007BE4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60007BE8: lw          $a0, -0x3E84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E84);
    // 0x60007BEC: jal         0x60000DA8
    // 0x60007BF0: nop

    ovl_menu_battle_DA8(rdram, ctx);
        goto after_286;
    // 0x60007BF0: nop

    after_286:
    // 0x60007BF4: lw          $a0, 0x268($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X268);
    // 0x60007BF8: jal         0x60000550
    // 0x60007BFC: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_287;
    // 0x60007BFC: nop

    after_287:
    // 0x60007C00: lw          $a0, 0x264($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X264);
    // 0x60007C04: jal         0x60000550
    // 0x60007C08: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_288;
    // 0x60007C08: nop

    after_288:
    // 0x60007C0C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60007C10: addiu       $a0, $a0, -0x5158
    ctx->r4 = ADD32(ctx->r4, -0X5158);
    // 0x60007C14: jal         0x60001BEC
    // 0x60007C18: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_menu_battle_1BEC(rdram, ctx);
        goto after_289;
    // 0x60007C18: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_289:
    // 0x60007C1C: b           L_6000AD54
    // 0x60007C20: nop

        goto L_6000AD54;
    // 0x60007C20: nop

L_60007C24:
    // 0x60007C24: lw          $t0, 0x120($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X120);
    // 0x60007C28: nop

    // 0x60007C2C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x60007C30: nop

    // 0x60007C34: andi        $t6, $t9, 0x8000
    ctx->r14 = ctx->r25 & 0X8000;
    // 0x60007C38: beq         $t6, $zero, L_60007C4C
    if (ctx->r14 == 0) {
        // 0x60007C3C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60007C4C;
    }
    // 0x60007C3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007C40: b           L_6000AD54
    // 0x60007C44: sw          $zero, 0x250($sp)
    MEM_W(0X250, ctx->r29) = 0;
        goto L_6000AD54;
    // 0x60007C44: sw          $zero, 0x250($sp)
    MEM_W(0X250, ctx->r29) = 0;
    // 0x60007C48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60007C4C:
    // 0x60007C4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60007C50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007C54: jal         0x60000220
    // 0x60007C58: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_220(rdram, ctx);
        goto after_290;
    // 0x60007C58: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_290:
    // 0x60007C5C: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x60007C60: addiu       $t7, $sp, 0x124
    ctx->r15 = ADD32(ctx->r29, 0X124);
    // 0x60007C64: sw          $t7, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r15;
    // 0x60007C68: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x60007C6C: sw          $t2, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r10;
L_60007C70:
    // 0x60007C70: lw          $t5, 0x258($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X258);
    // 0x60007C74: lw          $t3, 0x254($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X254);
    // 0x60007C78: lbu         $t4, 0x0($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X0);
    // 0x60007C7C: nop

    // 0x60007C80: sb          $t4, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r12;
    // 0x60007C84: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60007C88: lw          $t0, 0x258($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X258);
    // 0x60007C8C: lw          $t1, 0x254($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X254);
    // 0x60007C90: addiu       $t2, $t6, 0x1
    ctx->r10 = ADD32(ctx->r14, 0X1);
    // 0x60007C94: sltiu       $at, $t2, 0x124
    ctx->r1 = ctx->r10 < 0X124 ? 1 : 0;
    // 0x60007C98: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x60007C9C: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x60007CA0: sw          $t2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r10;
    // 0x60007CA4: sw          $t8, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r24;
    // 0x60007CA8: bne         $at, $zero, L_60007C70
    if (ctx->r1 != 0) {
        // 0x60007CAC: sw          $t9, 0x258($sp)
        MEM_W(0X258, ctx->r29) = ctx->r25;
            goto L_60007C70;
    }
    // 0x60007CAC: sw          $t9, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r25;
    // 0x60007CB0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60007CB4: addiu       $a0, $a0, -0x46A8
    ctx->r4 = ADD32(ctx->r4, -0X46A8);
    // 0x60007CB8: jal         0x60001AA0
    // 0x60007CBC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_291;
    // 0x60007CBC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_291:
    // 0x60007CC0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60007CC4: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60007CC8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60007CCC: jal         0x6000064C
    // 0x60007CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_292;
    // 0x60007CD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_292:
    // 0x60007CD4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x60007CD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60007CDC: sw          $v0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r2;
    // 0x60007CE0: lui         $at, 0x4240
    ctx->r1 = S32(0X4240 << 16);
    // 0x60007CE4: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
    // 0x60007CE8: lw          $t5, 0x268($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X268);
    // 0x60007CEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60007CF0: addiu       $t4, $zero, 0x108
    ctx->r12 = ADD32(0, 0X108);
    // 0x60007CF4: swc1        $f18, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f18.u32l;
    // 0x60007CF8: lw          $t3, 0x268($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X268);
    // 0x60007CFC: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x60007D00: sw          $t4, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r12;
    // 0x60007D04: lw          $t8, 0x268($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X268);
    // 0x60007D08: lui         $t0, 0x77
    ctx->r8 = S32(0X77 << 16);
    // 0x60007D0C: sw          $t1, 0x50($t8)
    MEM_W(0X50, ctx->r24) = ctx->r9;
    // 0x60007D10: lw          $t9, 0x268($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X268);
    // 0x60007D14: ori         $t0, $t0, 0xFF80
    ctx->r8 = ctx->r8 | 0XFF80;
    // 0x60007D18: sw          $t0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r8;
    // 0x60007D1C: lw          $t2, 0x268($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X268);
    // 0x60007D20: addiu       $t6, $zero, 0x7000
    ctx->r14 = ADD32(0, 0X7000);
    // 0x60007D24: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60007D28: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60007D2C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60007D30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007D34: jal         0x6000064C
    // 0x60007D38: sw          $t6, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r14;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_293;
    // 0x60007D38: sw          $t6, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r14;
    after_293:
    // 0x60007D3C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x60007D40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60007D44: sw          $v0, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r2;
    // 0x60007D48: lui         $at, 0x4308
    ctx->r1 = S32(0X4308 << 16);
    // 0x60007D4C: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x60007D50: lw          $t5, 0x264($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X264);
    // 0x60007D54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60007D58: addiu       $t4, $zero, 0x108
    ctx->r12 = ADD32(0, 0X108);
    // 0x60007D5C: swc1        $f16, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f16.u32l;
    // 0x60007D60: lw          $t3, 0x264($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X264);
    // 0x60007D64: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x60007D68: sw          $t4, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r12;
    // 0x60007D6C: lw          $t8, 0x264($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X264);
    // 0x60007D70: lui         $t0, 0xFF77
    ctx->r8 = S32(0XFF77 << 16);
    // 0x60007D74: sw          $t1, 0x50($t8)
    MEM_W(0X50, ctx->r24) = ctx->r9;
    // 0x60007D78: lw          $t9, 0x264($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X264);
    // 0x60007D7C: ori         $t0, $t0, 0x80
    ctx->r8 = ctx->r8 | 0X80;
    // 0x60007D80: sw          $t0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r8;
    // 0x60007D84: lw          $t2, 0x264($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X264);
    // 0x60007D88: addiu       $t6, $zero, 0x7000
    ctx->r14 = ADD32(0, 0X7000);
    // 0x60007D8C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60007D90: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60007D94: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60007D98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007D9C: jal         0x6000064C
    // 0x60007DA0: sw          $t6, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r14;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_294;
    // 0x60007DA0: sw          $t6, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r14;
    after_294:
    // 0x60007DA4: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x60007DA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60007DAC: sw          $v0, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r2;
    // 0x60007DB0: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x60007DB4: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x60007DB8: lw          $t5, 0x260($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X260);
    // 0x60007DBC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60007DC0: addiu       $t4, $zero, 0x34
    ctx->r12 = ADD32(0, 0X34);
    // 0x60007DC4: swc1        $f8, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f8.u32l;
    // 0x60007DC8: lw          $t3, 0x260($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X260);
    // 0x60007DCC: addiu       $t1, $zero, 0x98
    ctx->r9 = ADD32(0, 0X98);
    // 0x60007DD0: sw          $t4, 0x4C($t3)
    MEM_W(0X4C, ctx->r11) = ctx->r12;
    // 0x60007DD4: lw          $t8, 0x260($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X260);
    // 0x60007DD8: addiu       $t0, $zero, -0x80
    ctx->r8 = ADD32(0, -0X80);
    // 0x60007DDC: sw          $t1, 0x50($t8)
    MEM_W(0X50, ctx->r24) = ctx->r9;
    // 0x60007DE0: lw          $t9, 0x260($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X260);
    // 0x60007DE4: addiu       $t6, $zero, 0x7000
    ctx->r14 = ADD32(0, 0X7000);
    // 0x60007DE8: sw          $t0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->r8;
    // 0x60007DEC: lw          $t2, 0x260($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X260);
    // 0x60007DF0: jal         0x6000085C
    // 0x60007DF4: sw          $t6, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r14;
    ovl_menu_battle_85C(rdram, ctx);
        goto after_295;
    // 0x60007DF4: sw          $t6, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r14;
    after_295:
    // 0x60007DF8: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x60007DFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60007E00: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60007E04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60007E08: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60007E0C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60007E10: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60007E14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60007E18: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x60007E1C: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    // 0x60007E20: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x60007E24: swc1        $f16, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f16.u32l;
    // 0x60007E28: swc1        $f16, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f16.u32l;
    // 0x60007E2C: swc1        $f16, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f16.u32l;
    // 0x60007E30: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x60007E34: swc1        $f4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f4.u32l;
    // 0x60007E38: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    // 0x60007E3C: swc1        $f18, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f18.u32l;
    // 0x60007E40: jal         0x60000E8C
    // 0x60007E44: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    ovl_menu_battle_E8C(rdram, ctx);
        goto after_296;
    // 0x60007E44: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    after_296:
    // 0x60007E48: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60007E4C: lw          $a0, -0x3F8C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F8C);
    // 0x60007E50: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x60007E54: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x60007E58: jal         0x60000DB4
    // 0x60007E5C: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    ovl_menu_battle_DB4(rdram, ctx);
        goto after_297;
    // 0x60007E5C: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    after_297:
    // 0x60007E60: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60007E64: sw          $v0, -0x3E84($at)
    MEM_W(-0X3E84, ctx->r1) = ctx->r2;
    // 0x60007E68: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60007E6C: lw          $a0, -0x3E84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E84);
    // 0x60007E70: jal         0x60000DA8
    // 0x60007E74: nop

    ovl_menu_battle_DA8(rdram, ctx);
        goto after_298;
    // 0x60007E74: nop

    after_298:
    // 0x60007E78: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x60007E7C: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x60007E80: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x60007E84: jal         0x60000DB4
    // 0x60007E88: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    ovl_menu_battle_DB4(rdram, ctx);
        goto after_299;
    // 0x60007E88: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    after_299:
    // 0x60007E8C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60007E90: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60007E94: sw          $v0, -0x3E84($at)
    MEM_W(-0X3E84, ctx->r1) = ctx->r2;
    // 0x60007E98: addiu       $t7, $t7, -0x46A8
    ctx->r15 = ADD32(ctx->r15, -0X46A8);
    // 0x60007E9C: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x60007EA0: jal         0x600005A4
    // 0x60007EA4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_300;
    // 0x60007EA4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_300:
    // 0x60007EA8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60007EAC: lwc1        $f10, -0x4018($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4018);
    // 0x60007EB0: lui         $at, 0x4439
    ctx->r1 = S32(0X4439 << 16);
    // 0x60007EB4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60007EB8: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x60007EBC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60007EC0: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60007EC4: addiu       $t5, $t5, -0x46A8
    ctx->r13 = ADD32(ctx->r13, -0X46A8);
    // 0x60007EC8: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x60007ECC: swc1        $f18, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f18.u32l;
    // 0x60007ED0: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    // 0x60007ED4: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    // 0x60007ED8: jal         0x6000058C
    // 0x60007EDC: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    ovl_menu_battle_58C(rdram, ctx);
        goto after_301;
    // 0x60007EDC: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    after_301:
    // 0x60007EE0: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60007EE4: addiu       $t4, $t4, -0x46A8
    ctx->r12 = ADD32(ctx->r12, -0X46A8);
    // 0x60007EE8: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x60007EEC: jal         0x60000640
    // 0x60007EF0: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_battle_640(rdram, ctx);
        goto after_302;
    // 0x60007EF0: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_302:
    // 0x60007EF4: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60007EF8: addiu       $t3, $t3, -0x46A8
    ctx->r11 = ADD32(ctx->r11, -0X46A8);
    // 0x60007EFC: lw          $a0, 0x70($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X70);
    // 0x60007F00: jal         0x60000640
    // 0x60007F04: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    ovl_menu_battle_640(rdram, ctx);
        goto after_303;
    // 0x60007F04: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_303:
    // 0x60007F08: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60007F0C: addiu       $t1, $t1, -0x46A8
    ctx->r9 = ADD32(ctx->r9, -0X46A8);
    // 0x60007F10: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x60007F14: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x60007F18: jal         0x6000061C
    // 0x60007F1C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_304;
    // 0x60007F1C: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_304:
    // 0x60007F20: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60007F24: addiu       $t8, $t8, -0x46A8
    ctx->r24 = ADD32(ctx->r24, -0X46A8);
    // 0x60007F28: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x60007F2C: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x60007F30: jal         0x60000574
    // 0x60007F34: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_305;
    // 0x60007F34: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_305:
    // 0x60007F38: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60007F3C: addiu       $t0, $t0, -0x46A8
    ctx->r8 = ADD32(ctx->r8, -0X46A8);
    // 0x60007F40: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    // 0x60007F44: jal         0x600005A4
    // 0x60007F48: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_306;
    // 0x60007F48: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_306:
    // 0x60007F4C: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60007F50: addiu       $t9, $t9, -0x46A8
    ctx->r25 = ADD32(ctx->r25, -0X46A8);
    // 0x60007F54: lw          $a0, 0xAC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XAC);
    // 0x60007F58: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x60007F5C: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x60007F60: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x60007F64: jal         0x60000574
    // 0x60007F68: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    ovl_menu_battle_574(rdram, ctx);
        goto after_307;
    // 0x60007F68: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_307:
    // 0x60007F6C: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60007F70: addiu       $t6, $t6, -0x46A8
    ctx->r14 = ADD32(ctx->r14, -0X46A8);
    // 0x60007F74: lw          $a0, 0xC0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC0);
    // 0x60007F78: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x60007F7C: jal         0x6000061C
    // 0x60007F80: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_308;
    // 0x60007F80: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_308:
    // 0x60007F84: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60007F88: addiu       $t2, $t2, -0x46A8
    ctx->r10 = ADD32(ctx->r10, -0X46A8);
    // 0x60007F8C: lw          $a0, 0xC0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0XC0);
    // 0x60007F90: jal         0x60000604
    // 0x60007F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_battle_604(rdram, ctx);
        goto after_309;
    // 0x60007F94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_309:
    // 0x60007F98: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60007F9C: addiu       $t7, $t7, -0x46A8
    ctx->r15 = ADD32(ctx->r15, -0X46A8);
    // 0x60007FA0: lw          $a0, 0xD4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XD4);
    // 0x60007FA4: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x60007FA8: jal         0x6000061C
    // 0x60007FAC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    ovl_menu_battle_61C(rdram, ctx);
        goto after_310;
    // 0x60007FAC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_310:
    // 0x60007FB0: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60007FB4: addiu       $t5, $t5, -0x46A8
    ctx->r13 = ADD32(ctx->r13, -0X46A8);
    // 0x60007FB8: lw          $a0, 0xD4($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XD4);
    // 0x60007FBC: jal         0x60000604
    // 0x60007FC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_menu_battle_604(rdram, ctx);
        goto after_311;
    // 0x60007FC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_311:
    // 0x60007FC4: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60007FC8: addiu       $t4, $t4, -0x46A8
    ctx->r12 = ADD32(ctx->r12, -0X46A8);
    // 0x60007FCC: lw          $a0, 0xC0($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC0);
    // 0x60007FD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60007FD4: jal         0x60000634
    // 0x60007FD8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    ovl_menu_battle_634(rdram, ctx);
        goto after_312;
    // 0x60007FD8: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_312:
    // 0x60007FDC: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60007FE0: addiu       $t3, $t3, -0x46A8
    ctx->r11 = ADD32(ctx->r11, -0X46A8);
    // 0x60007FE4: lw          $a0, 0x84($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X84);
    // 0x60007FE8: jal         0x60000640
    // 0x60007FEC: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    ovl_menu_battle_640(rdram, ctx);
        goto after_313;
    // 0x60007FEC: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    after_313:
    // 0x60007FF0: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60007FF4: addiu       $t1, $t1, -0x46A8
    ctx->r9 = ADD32(ctx->r9, -0X46A8);
    // 0x60007FF8: lw          $a0, 0x98($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X98);
    // 0x60007FFC: jal         0x60000640
    // 0x60008000: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    ovl_menu_battle_640(rdram, ctx);
        goto after_314;
    // 0x60008000: addiu       $a1, $zero, 0x103
    ctx->r5 = ADD32(0, 0X103);
    after_314:
    // 0x60008004: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60008008: addiu       $t8, $t8, -0x46A8
    ctx->r24 = ADD32(ctx->r24, -0X46A8);
    // 0x6000800C: lw          $a0, 0xAC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XAC);
    // 0x60008010: jal         0x60000640
    // 0x60008014: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    ovl_menu_battle_640(rdram, ctx);
        goto after_315;
    // 0x60008014: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    after_315:
    // 0x60008018: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x6000801C: addiu       $t0, $t0, -0x46A8
    ctx->r8 = ADD32(ctx->r8, -0X46A8);
    // 0x60008020: lw          $a0, 0xE8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XE8);
    // 0x60008024: lui         $a1, 0x3FC9
    ctx->r5 = S32(0X3FC9 << 16);
    // 0x60008028: jal         0x600005BC
    // 0x6000802C: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    ovl_menu_battle_5BC(rdram, ctx);
        goto after_316;
    // 0x6000802C: ori         $a1, $a1, 0xFDB
    ctx->r5 = ctx->r5 | 0XFDB;
    after_316:
    // 0x60008030: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60008034:
    // 0x60008034: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60008038: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000803C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x60008040: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x60008044: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x60008048: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x6000804C: sw          $zero, -0x3FB8($at)
    MEM_W(-0X3FB8, ctx->r1) = 0;
    // 0x60008050: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008054: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x60008058: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x6000805C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x60008060: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x60008064: sw          $t2, -0x3E30($at)
    MEM_W(-0X3E30, ctx->r1) = ctx->r10;
    // 0x60008068: addu        $t1, $sp, $t3
    ctx->r9 = ADD32(ctx->r29, ctx->r11);
    // 0x6000806C: lw          $t1, 0x128($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X128);
    // 0x60008070: nop

    // 0x60008074: beq         $t1, $zero, L_600081D0
    if (ctx->r9 == 0) {
        // 0x60008078: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_600081D0;
    }
    // 0x60008078: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000807C: beq         $t1, $at, L_6000809C
    if (ctx->r9 == ctx->r1) {
        // 0x60008080: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_6000809C;
    }
    // 0x60008080: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60008084: beq         $t1, $at, L_600080B0
    if (ctx->r9 == ctx->r1) {
        // 0x60008088: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_600080B0;
    }
    // 0x60008088: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000808C: beq         $t1, $at, L_600080B4
    if (ctx->r9 == ctx->r1) {
        // 0x60008090: lw          $a0, 0x11C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X11C);
            goto L_600080B4;
    }
    // 0x60008090: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x60008094: b           L_600080D0
    // 0x60008098: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
        goto L_600080D0;
    // 0x60008098: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
L_6000809C:
    // 0x6000809C: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x600080A0: jal         0x60002040
    // 0x600080A4: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_317;
    // 0x600080A4: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    after_317:
    // 0x600080A8: b           L_600080D0
    // 0x600080AC: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
        goto L_600080D0;
    // 0x600080AC: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
L_600080B0:
    // 0x600080B0: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_600080B4:
    // 0x600080B4: nop

    // 0x600080B8: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x600080BC: addu        $a1, $sp, $t0
    ctx->r5 = ADD32(ctx->r29, ctx->r8);
    // 0x600080C0: lw          $a1, 0x138($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X138);
    // 0x600080C4: jal         0x60002040
    // 0x600080C8: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_318;
    // 0x600080C8: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    after_318:
    // 0x600080CC: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
L_600080D0:
    // 0x600080D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600080D4: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x600080D8: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x600080DC: lw          $t7, 0x1B8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1B8);
    // 0x600080E0: nop

    // 0x600080E4: bne         $t7, $at, L_60008164
    if (ctx->r15 != ctx->r1) {
        // 0x600080E8: lw          $t2, 0x11C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X11C);
            goto L_60008164;
    }
    // 0x600080E8: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x600080EC: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x600080F0: lui         $at, 0x4298
    ctx->r1 = S32(0X4298 << 16);
    // 0x600080F4: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x600080F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600080FC: lui         $at, 0x42E4
    ctx->r1 = S32(0X42E4 << 16);
    // 0x60008100: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x60008104: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60008108: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x6000810C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60008110: sub.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x60008114: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008118: lwc1        $f10, -0x4014($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4014);
    // 0x6000811C: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x60008120: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60008124: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x60008128: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x6000812C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x60008130: mfc1        $a2, $f17
    ctx->r6 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x60008134: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x60008138: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x6000813C: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x60008140: swc1        $f19, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x60008144: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x60008148: swc1        $f9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x6000814C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60008150: jal         0x60000F34
    // 0x60008154: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_319;
    // 0x60008154: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_319:
    // 0x60008158: b           L_600081D4
    // 0x6000815C: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
        goto L_600081D4;
    // 0x6000815C: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x60008160: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
L_60008164:
    // 0x60008164: lui         $at, 0x4298
    ctx->r1 = S32(0X4298 << 16);
    // 0x60008168: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x6000816C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60008170: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60008174: lui         $at, 0x42E4
    ctx->r1 = S32(0X42E4 << 16);
    // 0x60008178: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000817C: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x60008180: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008184: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60008188: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000818C: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x60008190: lwc1        $f8, -0x4010($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4010);
    // 0x60008194: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x60008198: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x6000819C: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x600081A0: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x600081A4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x600081A8: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x600081AC: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x600081B0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x600081B4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x600081B8: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x600081BC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x600081C0: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x600081C4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x600081C8: jal         0x60000F34
    // 0x600081CC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_320;
    // 0x600081CC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_320:
L_600081D0:
    // 0x600081D0: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
L_600081D4:
    // 0x600081D4: nop

    // 0x600081D8: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x600081DC: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x600081E0: bne         $at, $zero, L_60008034
    if (ctx->r1 != 0) {
        // 0x600081E4: sw          $t3, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r11;
            goto L_60008034;
    }
    // 0x600081E4: sw          $t3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r11;
    // 0x600081E8: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_600081EC:
    // 0x600081EC: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x600081F0: nop

    // 0x600081F4: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x600081F8: addu        $t0, $sp, $t8
    ctx->r8 = ADD32(ctx->r29, ctx->r24);
    // 0x600081FC: lw          $t0, 0x128($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X128);
    // 0x60008200: nop

    // 0x60008204: bne         $t0, $zero, L_60008218
    if (ctx->r8 != 0) {
        // 0x60008208: addiu       $t6, $t1, 0x1
        ctx->r14 = ADD32(ctx->r9, 0X1);
            goto L_60008218;
    }
    // 0x60008208: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
    // 0x6000820C: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x60008210: bne         $at, $zero, L_600081EC
    if (ctx->r1 != 0) {
        // 0x60008214: sw          $t6, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r14;
            goto L_600081EC;
    }
    // 0x60008214: sw          $t6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r14;
L_60008218:
    // 0x60008218: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x6000821C: nop

    // 0x60008220: sw          $t9, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r25;
L_60008224:
    // 0x60008224: jal         0x600022AC
    // 0x60008228: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_321;
    // 0x60008228: nop

    after_321:
    // 0x6000822C: andi        $t2, $v0, 0x9100
    ctx->r10 = ctx->r2 & 0X9100;
    // 0x60008230: beq         $t2, $zero, L_60008634
    if (ctx->r10 == 0) {
        // 0x60008234: sw          $v0, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r2;
            goto L_60008634;
    }
    // 0x60008234: sw          $v0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r2;
    // 0x60008238: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
L_6000823C:
    // 0x6000823C: nop

    // 0x60008240: andi        $t3, $t4, 0x1000
    ctx->r11 = ctx->r12 & 0X1000;
    // 0x60008244: bne         $t3, $zero, L_60008260
    if (ctx->r11 != 0) {
        // 0x60008248: lw          $t0, 0x108($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X108);
            goto L_60008260;
    }
    // 0x60008248: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x6000824C: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x60008250: nop

    // 0x60008254: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x60008258: sw          $t8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r24;
    // 0x6000825C: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
L_60008260:
    // 0x60008260: nop

    // 0x60008264: andi        $t7, $t0, 0x1000
    ctx->r15 = ctx->r8 & 0X1000;
    // 0x60008268: bne         $t7, $zero, L_60008284
    if (ctx->r15 != 0) {
        // 0x6000826C: nop
    
            goto L_60008284;
    }
    // 0x6000826C: nop

    // 0x60008270: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x60008274: nop

    // 0x60008278: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x6000827C: bne         $at, $zero, L_60008610
    if (ctx->r1 != 0) {
        // 0x60008280: lw          $t9, 0x118($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X118);
            goto L_60008610;
    }
    // 0x60008280: lw          $t9, 0x118($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X118);
L_60008284:
    // 0x60008284: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
    // 0x60008288: sw          $zero, 0x110($sp)
    MEM_W(0X110, ctx->r29) = 0;
    // 0x6000828C: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60008290:
    // 0x60008290: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60008294: addiu       $t2, $sp, 0x124
    ctx->r10 = ADD32(ctx->r29, 0X124);
    // 0x60008298: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x6000829C: addu        $t4, $t5, $t2
    ctx->r12 = ADD32(ctx->r13, ctx->r10);
    // 0x600082A0: lw          $t3, 0x4($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X4);
    // 0x600082A4: nop

    // 0x600082A8: beq         $t3, $zero, L_600082E8
    if (ctx->r11 == 0) {
        // 0x600082AC: lw          $t9, 0x11C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X11C);
            goto L_600082E8;
    }
    // 0x600082AC: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600082B0: lw          $t1, 0x94($t4)
    ctx->r9 = MEM_W(ctx->r12, 0X94);
    // 0x600082B4: nop

    // 0x600082B8: bne         $t1, $zero, L_600082D8
    if (ctx->r9 != 0) {
        // 0x600082BC: lw          $t7, 0x10C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X10C);
            goto L_600082D8;
    }
    // 0x600082BC: lw          $t7, 0x10C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10C);
    // 0x600082C0: lw          $t8, 0x110($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X110);
    // 0x600082C4: nop

    // 0x600082C8: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x600082CC: b           L_600082E4
    // 0x600082D0: sw          $t0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r8;
        goto L_600082E4;
    // 0x600082D0: sw          $t0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r8;
    // 0x600082D4: lw          $t7, 0x10C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10C);
L_600082D8:
    // 0x600082D8: nop

    // 0x600082DC: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x600082E0: sw          $t6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r14;
L_600082E4:
    // 0x600082E4: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
L_600082E8:
    // 0x600082E8: nop

    // 0x600082EC: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x600082F0: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x600082F4: bne         $at, $zero, L_60008290
    if (ctx->r1 != 0) {
        // 0x600082F8: sw          $t5, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r13;
            goto L_60008290;
    }
    // 0x600082F8: sw          $t5, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r13;
    // 0x600082FC: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x60008300: nop

    // 0x60008304: andi        $t3, $t2, 0x9000
    ctx->r11 = ctx->r10 & 0X9000;
    // 0x60008308: beq         $t3, $zero, L_600085BC
    if (ctx->r11 == 0) {
        // 0x6000830C: lw          $t4, 0x108($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X108);
            goto L_600085BC;
    }
    // 0x6000830C: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60008310: lw          $t4, 0x110($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X110);
    // 0x60008314: nop

    // 0x60008318: beq         $t4, $zero, L_600085BC
    if (ctx->r12 == 0) {
        // 0x6000831C: lw          $t4, 0x108($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X108);
            goto L_600085BC;
    }
    // 0x6000831C: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60008320: lw          $t1, 0x10C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10C);
    // 0x60008324: nop

    // 0x60008328: beq         $t1, $zero, L_600085BC
    if (ctx->r9 == 0) {
        // 0x6000832C: lw          $t4, 0x108($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X108);
            goto L_600085BC;
    }
    // 0x6000832C: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60008330: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x60008334: nop

    // 0x60008338: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x6000833C: bne         $at, $zero, L_60008348
    if (ctx->r1 != 0) {
        // 0x60008340: addiu       $t0, $t8, -0x1
        ctx->r8 = ADD32(ctx->r24, -0X1);
            goto L_60008348;
    }
    // 0x60008340: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x60008344: sw          $t0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r8;
L_60008348:
    // 0x60008348: jal         0x60000244
    // 0x6000834C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_322;
    // 0x6000834C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_322:
    // 0x60008350: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60008354: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60008358: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    // 0x6000835C: jal         0x6000064C
    // 0x60008360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_323;
    // 0x60008360: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_323:
    // 0x60008364: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60008368: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000836C: sw          $v0, 0x25C($sp)
    MEM_W(0X25C, ctx->r29) = ctx->r2;
    // 0x60008370: lui         $at, 0x42D0
    ctx->r1 = S32(0X42D0 << 16);
    // 0x60008374: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x60008378: lw          $t6, 0x25C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X25C);
    // 0x6000837C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60008380: addiu       $t9, $zero, 0x8C
    ctx->r25 = ADD32(0, 0X8C);
    // 0x60008384: swc1        $f6, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f6.u32l;
    // 0x60008388: lw          $t5, 0x25C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X25C);
    // 0x6000838C: addiu       $t2, $zero, 0x38
    ctx->r10 = ADD32(0, 0X38);
    // 0x60008390: sw          $t9, 0x4C($t5)
    MEM_W(0X4C, ctx->r13) = ctx->r25;
    // 0x60008394: lw          $t3, 0x25C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X25C);
    // 0x60008398: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x6000839C: sw          $t2, 0x50($t3)
    MEM_W(0X50, ctx->r11) = ctx->r10;
    // 0x600083A0: lw          $t1, 0x25C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X25C);
    // 0x600083A4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600083A8: sw          $t4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->r12;
    // 0x600083AC: lw          $t8, 0x25C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X25C);
    // 0x600083B0: addiu       $a0, $a0, -0x46A8
    ctx->r4 = ADD32(ctx->r4, -0X46A8);
    // 0x600083B4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600083B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x600083BC: jal         0x60001C84
    // 0x600083C0: sw          $zero, 0x40($t8)
    MEM_W(0X40, ctx->r24) = 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_324;
    // 0x600083C0: sw          $zero, 0x40($t8)
    MEM_W(0X40, ctx->r24) = 0;
    after_324:
    // 0x600083C4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600083C8: addiu       $a0, $a0, -0x46A8
    ctx->r4 = ADD32(ctx->r4, -0X46A8);
    // 0x600083CC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x600083D0: jal         0x60001C84
    // 0x600083D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_325;
    // 0x600083D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_325:
    // 0x600083D8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600083DC: addiu       $a0, $a0, -0x46A8
    ctx->r4 = ADD32(ctx->r4, -0X46A8);
    // 0x600083E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600083E4: jal         0x60001C84
    // 0x600083E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_326;
    // 0x600083E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_326:
L_600083EC:
    // 0x600083EC: lw          $t7, 0x230($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X230);
L_600083F0:
    // 0x600083F0: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x600083F4: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x600083F8: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x600083FC: lw          $t9, -0x4174($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4174);
    // 0x60008400: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60008404: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x60008408: addiu       $t0, $t0, -0x46A8
    ctx->r8 = ADD32(ctx->r8, -0X46A8);
    // 0x6000840C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60008410: lw          $a0, 0xAC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XAC);
    // 0x60008414: lui         $a2, 0x4310
    ctx->r6 = S32(0X4310 << 16);
    // 0x60008418: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x6000841C: jal         0x6000055C
    // 0x60008420: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_327;
    // 0x60008420: nop

    after_327:
    // 0x60008424: jal         0x6000085C
    // 0x60008428: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_328;
    // 0x60008428: nop

    after_328:
    // 0x6000842C: jal         0x600022AC
    // 0x60008430: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_329;
    // 0x60008430: nop

    after_329:
    // 0x60008434: andi        $t2, $v0, 0x9000
    ctx->r10 = ctx->r2 & 0X9000;
    // 0x60008438: beq         $t2, $zero, L_60008450
    if (ctx->r10 == 0) {
        // 0x6000843C: sw          $v0, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r2;
            goto L_60008450;
    }
    // 0x6000843C: sw          $v0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r2;
    // 0x60008440: jal         0x60000244
    // 0x60008444: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    ovl_menu_battle_244(rdram, ctx);
        goto after_330;
    // 0x60008444: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    after_330:
    // 0x60008448: b           L_600084FC
    // 0x6000844C: nop

        goto L_600084FC;
    // 0x6000844C: nop

L_60008450:
    // 0x60008450: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x60008454: nop

    // 0x60008458: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x6000845C: beq         $t4, $zero, L_60008478
    if (ctx->r12 == 0) {
        // 0x60008460: lw          $t1, 0x108($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X108);
            goto L_60008478;
    }
    // 0x60008460: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x60008464: jal         0x60000244
    // 0x60008468: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_battle_244(rdram, ctx);
        goto after_331;
    // 0x60008468: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_331:
    // 0x6000846C: b           L_600084FC
    // 0x60008470: nop

        goto L_600084FC;
    // 0x60008470: nop

    // 0x60008474: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
L_60008478:
    // 0x60008478: nop

    // 0x6000847C: andi        $t8, $t1, 0x100
    ctx->r24 = ctx->r9 & 0X100;
    // 0x60008480: beq         $t8, $zero, L_600084C0
    if (ctx->r24 == 0) {
        // 0x60008484: lw          $t9, 0x108($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X108);
            goto L_600084C0;
    }
    // 0x60008484: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x60008488: lw          $t0, 0x230($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X230);
    // 0x6000848C: nop

    // 0x60008490: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x60008494: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x60008498: bne         $at, $zero, L_600084AC
    if (ctx->r1 != 0) {
        // 0x6000849C: sw          $t7, 0x230($sp)
        MEM_W(0X230, ctx->r29) = ctx->r15;
            goto L_600084AC;
    }
    // 0x6000849C: sw          $t7, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->r15;
    // 0x600084A0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x600084A4: b           L_600083EC
    // 0x600084A8: sw          $t6, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->r14;
        goto L_600083EC;
    // 0x600084A8: sw          $t6, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->r14;
L_600084AC:
    // 0x600084AC: jal         0x60000244
    // 0x600084B0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_332;
    // 0x600084B0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_332:
    // 0x600084B4: b           L_600083F0
    // 0x600084B8: lw          $t7, 0x230($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X230);
        goto L_600083F0;
    // 0x600084B8: lw          $t7, 0x230($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X230);
    // 0x600084BC: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
L_600084C0:
    // 0x600084C0: nop

    // 0x600084C4: andi        $t5, $t9, 0x200
    ctx->r13 = ctx->r25 & 0X200;
    // 0x600084C8: beq         $t5, $zero, L_600083F0
    if (ctx->r13 == 0) {
        // 0x600084CC: lw          $t7, 0x230($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X230);
            goto L_600083F0;
    }
    // 0x600084CC: lw          $t7, 0x230($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X230);
    // 0x600084D0: lw          $t2, 0x230($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X230);
    // 0x600084D4: nop

    // 0x600084D8: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x600084DC: bgez        $t3, L_600084EC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x600084E0: sw          $t3, 0x230($sp)
        MEM_W(0X230, ctx->r29) = ctx->r11;
            goto L_600084EC;
    }
    // 0x600084E0: sw          $t3, 0x230($sp)
    MEM_W(0X230, ctx->r29) = ctx->r11;
    // 0x600084E4: b           L_600083EC
    // 0x600084E8: sw          $zero, 0x230($sp)
    MEM_W(0X230, ctx->r29) = 0;
        goto L_600083EC;
    // 0x600084E8: sw          $zero, 0x230($sp)
    MEM_W(0X230, ctx->r29) = 0;
L_600084EC:
    // 0x600084EC: jal         0x60000244
    // 0x600084F0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_333;
    // 0x600084F0: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_333:
    // 0x600084F4: b           L_600083F0
    // 0x600084F8: lw          $t7, 0x230($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X230);
        goto L_600083F0;
    // 0x600084F8: lw          $t7, 0x230($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X230);
L_600084FC:
    // 0x600084FC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008500: addiu       $a0, $a0, -0x46A8
    ctx->r4 = ADD32(ctx->r4, -0X46A8);
    // 0x60008504: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60008508: jal         0x60001C84
    // 0x6000850C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_334;
    // 0x6000850C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_334:
    // 0x60008510: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008514: addiu       $a0, $a0, -0x46A8
    ctx->r4 = ADD32(ctx->r4, -0X46A8);
    // 0x60008518: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x6000851C: jal         0x60001C84
    // 0x60008520: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_335;
    // 0x60008520: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_335:
    // 0x60008524: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008528: addiu       $a0, $a0, -0x46A8
    ctx->r4 = ADD32(ctx->r4, -0X46A8);
    // 0x6000852C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60008530: jal         0x60001C84
    // 0x60008534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_336;
    // 0x60008534: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_336:
    // 0x60008538: lw          $a0, 0x25C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X25C);
    // 0x6000853C: jal         0x60000550
    // 0x60008540: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_337;
    // 0x60008540: nop

    after_337:
    // 0x60008544: jal         0x6000085C
    // 0x60008548: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_338;
    // 0x60008548: nop

    after_338:
    // 0x6000854C: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60008550: nop

    // 0x60008554: andi        $t1, $t4, 0x4000
    ctx->r9 = ctx->r12 & 0X4000;
    // 0x60008558: beq         $t1, $zero, L_600085B0
    if (ctx->r9 == 0) {
        // 0x6000855C: nop
    
            goto L_600085B0;
    }
    // 0x6000855C: nop

    // 0x60008560: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
    // 0x60008564: nop

    // 0x60008568: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x6000856C: addu        $t7, $sp, $t0
    ctx->r15 = ADD32(ctx->r29, ctx->r8);
    // 0x60008570: lw          $t7, 0x128($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X128);
    // 0x60008574: nop

    // 0x60008578: bne         $t7, $zero, L_60008224
    if (ctx->r15 != 0) {
        // 0x6000857C: nop
    
            goto L_60008224;
    }
    // 0x6000857C: nop

    // 0x60008580: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
L_60008584:
    // 0x60008584: nop

    // 0x60008588: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x6000858C: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x60008590: addu        $t3, $sp, $t2
    ctx->r11 = ADD32(ctx->r29, ctx->r10);
    // 0x60008594: sw          $t9, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r25;
    // 0x60008598: lw          $t3, 0x128($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X128);
    // 0x6000859C: nop

    // 0x600085A0: beq         $t3, $zero, L_60008584
    if (ctx->r11 == 0) {
        // 0x600085A4: lw          $t6, 0x118($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X118);
            goto L_60008584;
    }
    // 0x600085A4: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x600085A8: b           L_60008224
    // 0x600085AC: nop

        goto L_60008224;
    // 0x600085AC: nop

L_600085B0:
    // 0x600085B0: b           L_6000890C
    // 0x600085B4: sw          $zero, 0x250($sp)
    MEM_W(0X250, ctx->r29) = 0;
        goto L_6000890C;
    // 0x600085B4: sw          $zero, 0x250($sp)
    MEM_W(0X250, ctx->r29) = 0;
    // 0x600085B8: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
L_600085BC:
    // 0x600085BC: nop

    // 0x600085C0: andi        $t1, $t4, 0x1000
    ctx->r9 = ctx->r12 & 0X1000;
    // 0x600085C4: bne         $t1, $zero, L_600085FC
    if (ctx->r9 != 0) {
        // 0x600085C8: nop
    
            goto L_600085FC;
    }
    // 0x600085C8: nop

    // 0x600085CC: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
L_600085D0:
    // 0x600085D0: nop

    // 0x600085D4: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x600085D8: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x600085DC: sw          $t0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r8;
    // 0x600085E0: addu        $t6, $sp, $t7
    ctx->r14 = ADD32(ctx->r29, ctx->r15);
    // 0x600085E4: lw          $t6, 0x128($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X128);
    // 0x600085E8: nop

    // 0x600085EC: bne         $t6, $zero, L_60008638
    if (ctx->r14 != 0) {
        // 0x600085F0: lw          $t3, 0x108($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X108);
            goto L_60008638;
    }
    // 0x600085F0: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x600085F4: b           L_600085D0
    // 0x600085F8: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
        goto L_600085D0;
    // 0x600085F8: lw          $t8, 0x118($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X118);
L_600085FC:
    // 0x600085FC: jal         0x60000244
    // 0x60008600: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    ovl_menu_battle_244(rdram, ctx);
        goto after_339;
    // 0x60008600: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_339:
    // 0x60008604: b           L_60008638
    // 0x60008608: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
        goto L_60008638;
    // 0x60008608: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x6000860C: lw          $t9, 0x118($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X118);
L_60008610:
    // 0x60008610: nop

    // 0x60008614: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x60008618: addu        $t2, $sp, $t5
    ctx->r10 = ADD32(ctx->r29, ctx->r13);
    // 0x6000861C: lw          $t2, 0x128($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X128);
    // 0x60008620: nop

    // 0x60008624: beq         $t2, $zero, L_6000823C
    if (ctx->r10 == 0) {
        // 0x60008628: lw          $t4, 0x108($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X108);
            goto L_6000823C;
    }
    // 0x60008628: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x6000862C: jal         0x60000244
    // 0x60008630: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_340;
    // 0x60008630: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_340:
L_60008634:
    // 0x60008634: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
L_60008638:
    // 0x60008638: nop

    // 0x6000863C: andi        $t4, $t3, 0x4200
    ctx->r12 = ctx->r11 & 0X4200;
    // 0x60008640: beq         $t4, $zero, L_60008710
    if (ctx->r12 == 0) {
        // 0x60008644: nop
    
            goto L_60008710;
    }
    // 0x60008644: nop

    // 0x60008648: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
L_6000864C:
    // 0x6000864C: nop

    // 0x60008650: addiu       $t8, $t1, -0x1
    ctx->r24 = ADD32(ctx->r9, -0X1);
    // 0x60008654: bgez        $t8, L_60008684
    if (SIGNED(ctx->r24) >= 0) {
        // 0x60008658: sw          $t8, 0x118($sp)
        MEM_W(0X118, ctx->r29) = ctx->r24;
            goto L_60008684;
    }
    // 0x60008658: sw          $t8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r24;
    // 0x6000865C: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60008660: sw          $zero, 0x118($sp)
    MEM_W(0X118, ctx->r29) = 0;
    // 0x60008664: andi        $t7, $t0, 0x4000
    ctx->r15 = ctx->r8 & 0X4000;
    // 0x60008668: beq         $t7, $zero, L_60008690
    if (ctx->r15 == 0) {
        // 0x6000866C: lw          $t9, 0x118($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X118);
            goto L_60008690;
    }
    // 0x6000866C: lw          $t9, 0x118($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X118);
    // 0x60008670: jal         0x60000244
    // 0x60008674: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    ovl_menu_battle_244(rdram, ctx);
        goto after_341;
    // 0x60008674: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_341:
    // 0x60008678: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x6000867C: b           L_6000890C
    // 0x60008680: sw          $t6, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r14;
        goto L_6000890C;
    // 0x60008680: sw          $t6, 0x250($sp)
    MEM_W(0X250, ctx->r29) = ctx->r14;
L_60008684:
    // 0x60008684: jal         0x60000244
    // 0x60008688: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    ovl_menu_battle_244(rdram, ctx);
        goto after_342;
    // 0x60008688: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_342:
    // 0x6000868C: lw          $t9, 0x118($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X118);
L_60008690:
    // 0x60008690: addiu       $t2, $sp, 0x124
    ctx->r10 = ADD32(ctx->r29, 0X124);
    // 0x60008694: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x60008698: addu        $t3, $t5, $t2
    ctx->r11 = ADD32(ctx->r13, ctx->r10);
    // 0x6000869C: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x600086A0: nop

    // 0x600086A4: bne         $t4, $zero, L_60008710
    if (ctx->r12 != 0) {
        // 0x600086A8: nop
    
            goto L_60008710;
    }
    // 0x600086A8: nop

    // 0x600086AC: bne         $t9, $zero, L_6000864C
    if (ctx->r25 != 0) {
        // 0x600086B0: lw          $t1, 0x118($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X118);
            goto L_6000864C;
    }
    // 0x600086B0: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x600086B4: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x600086B8: nop

    // 0x600086BC: andi        $t8, $t1, 0x4000
    ctx->r24 = ctx->r9 & 0X4000;
    // 0x600086C0: bne         $t8, $zero, L_6000864C
    if (ctx->r24 != 0) {
        // 0x600086C4: lw          $t1, 0x118($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X118);
            goto L_6000864C;
    }
    // 0x600086C4: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x600086C8: addiu       $s0, $t9, 0x1
    ctx->r16 = ADD32(ctx->r25, 0X1);
    // 0x600086CC: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x600086D0: addu        $t7, $t0, $t2
    ctx->r15 = ADD32(ctx->r8, ctx->r10);
    // 0x600086D4: sw          $s0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r16;
    // 0x600086D8: lw          $t6, 0x4($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X4);
    // 0x600086DC: nop

    // 0x600086E0: bne         $t6, $zero, L_60008710
    if (ctx->r14 != 0) {
        // 0x600086E4: nop
    
            goto L_60008710;
    }
    // 0x600086E4: nop

    // 0x600086E8: lw          $s0, 0x118($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X118);
L_600086EC:
    // 0x600086EC: nop

    // 0x600086F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600086F4: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x600086F8: addu        $t3, $sp, $t5
    ctx->r11 = ADD32(ctx->r29, ctx->r13);
    // 0x600086FC: sw          $s0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r16;
    // 0x60008700: lw          $t3, 0x128($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X128);
    // 0x60008704: nop

    // 0x60008708: beq         $t3, $zero, L_600086EC
    if (ctx->r11 == 0) {
        // 0x6000870C: lw          $s0, 0x118($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X118);
            goto L_600086EC;
    }
    // 0x6000870C: lw          $s0, 0x118($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X118);
L_60008710:
    // 0x60008710: jal         0x600022AC
    // 0x60008714: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_343;
    // 0x60008714: nop

    after_343:
    // 0x60008718: lw          $t4, 0x118($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X118);
    // 0x6000871C: sw          $v0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r2;
    // 0x60008720: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x60008724: addu        $t8, $sp, $t1
    ctx->r24 = ADD32(ctx->r29, ctx->r9);
    // 0x60008728: lw          $t8, 0x1B8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1B8);
    // 0x6000872C: nop

    // 0x60008730: bne         $t8, $zero, L_600087D4
    if (ctx->r24 != 0) {
        // 0x60008734: andi        $t0, $v0, 0x400
        ctx->r8 = ctx->r2 & 0X400;
            goto L_600087D4;
    }
    // 0x60008734: andi        $t0, $v0, 0x400
    ctx->r8 = ctx->r2 & 0X400;
    // 0x60008738: beq         $t0, $zero, L_600087D8
    if (ctx->r8 == 0) {
        // 0x6000873C: lw          $t1, 0x118($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X118);
            goto L_600087D8;
    }
    // 0x6000873C: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x60008740: jal         0x60000244
    // 0x60008744: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_344;
    // 0x60008744: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_344:
    // 0x60008748: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x6000874C: lui         $at, 0x4298
    ctx->r1 = S32(0X4298 << 16);
    // 0x60008750: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x60008754: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60008758: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x6000875C: lui         $at, 0x42E4
    ctx->r1 = S32(0X42E4 << 16);
    // 0x60008760: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60008764: mul.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x60008768: lui         $at, 0xC2B4
    ctx->r1 = S32(0XC2B4 << 16);
    // 0x6000876C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60008770: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008774: sub.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x60008778: lwc1        $f18, -0x400C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X400C);
    // 0x6000877C: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x60008780: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60008784: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x60008788: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x6000878C: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x60008790: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x60008794: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x60008798: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x6000879C: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x600087A0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x600087A4: swc1        $f7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x600087A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x600087AC: swc1        $f11, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x600087B0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x600087B4: jal         0x60000F34
    // 0x600087B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_345;
    // 0x600087B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_345:
    // 0x600087BC: lw          $t5, 0x118($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X118);
    // 0x600087C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600087C4: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x600087C8: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x600087CC: b           L_60008894
    // 0x600087D0: sw          $t6, 0x1B8($t4)
    MEM_W(0X1B8, ctx->r12) = ctx->r14;
        goto L_60008894;
    // 0x600087D0: sw          $t6, 0x1B8($t4)
    MEM_W(0X1B8, ctx->r12) = ctx->r14;
L_600087D4:
    // 0x600087D4: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
L_600087D8:
    // 0x600087D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600087DC: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x600087E0: addu        $t9, $sp, $t8
    ctx->r25 = ADD32(ctx->r29, ctx->r24);
    // 0x600087E4: lw          $t9, 0x1B8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1B8);
    // 0x600087E8: nop

    // 0x600087EC: bne         $t9, $at, L_60008898
    if (ctx->r25 != ctx->r1) {
        // 0x600087F0: lw          $t1, 0x118($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X118);
            goto L_60008898;
    }
    // 0x600087F0: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x600087F4: lw          $t0, 0x114($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X114);
    // 0x600087F8: nop

    // 0x600087FC: andi        $t7, $t0, 0x800
    ctx->r15 = ctx->r8 & 0X800;
    // 0x60008800: beq         $t7, $zero, L_60008898
    if (ctx->r15 == 0) {
        // 0x60008804: lw          $t1, 0x118($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X118);
            goto L_60008898;
    }
    // 0x60008804: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
    // 0x60008808: jal         0x60000244
    // 0x6000880C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_346;
    // 0x6000880C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_346:
    // 0x60008810: lw          $t2, 0x118($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X118);
    // 0x60008814: lui         $at, 0x4298
    ctx->r1 = S32(0X4298 << 16);
    // 0x60008818: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x6000881C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60008820: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60008824: lui         $at, 0x42E4
    ctx->r1 = S32(0X42E4 << 16);
    // 0x60008828: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000882C: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x60008830: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008834: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60008838: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000883C: sub.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x60008840: lwc1        $f10, -0x4008($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X4008);
    // 0x60008844: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x60008848: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x6000884C: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x60008850: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x60008854: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x60008858: mfc1        $a2, $f17
    ctx->r6 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x6000885C: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x60008860: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x60008864: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x60008868: swc1        $f19, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x6000886C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x60008870: swc1        $f9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x60008874: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60008878: jal         0x60000F34
    // 0x6000887C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_347;
    // 0x6000887C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_347:
    // 0x60008880: lw          $t6, 0x118($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X118);
    // 0x60008884: nop

    // 0x60008888: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x6000888C: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x60008890: sw          $zero, 0x1B8($t4)
    MEM_W(0X1B8, ctx->r12) = 0;
L_60008894:
    // 0x60008894: lw          $t1, 0x118($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X118);
L_60008898:
    // 0x60008898: lw          $a0, 0x260($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X260);
    // 0x6000889C: sll         $t8, $t1, 4
    ctx->r24 = S32(ctx->r9 << 4);
    // 0x600088A0: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x600088A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x600088A8: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x600088AC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x600088B0: lui         $a2, 0x4260
    ctx->r6 = S32(0X4260 << 16);
    // 0x600088B4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x600088B8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x600088BC: jal         0x6000055C
    // 0x600088C0: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_348;
    // 0x600088C0: nop

    after_348:
    // 0x600088C4: lw          $t7, 0x118($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X118);
    // 0x600088C8: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x600088CC: sll         $t5, $t7, 4
    ctx->r13 = S32(ctx->r15 << 4);
    // 0x600088D0: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x600088D4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x600088D8: addiu       $t2, $t5, 0x3A
    ctx->r10 = ADD32(ctx->r13, 0X3A);
    // 0x600088DC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x600088E0: addiu       $t0, $t0, -0x46A8
    ctx->r8 = ADD32(ctx->r8, -0X46A8);
    // 0x600088E4: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x600088E8: lw          $a0, 0xE8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XE8);
    // 0x600088EC: lui         $a2, 0x4304
    ctx->r6 = S32(0X4304 << 16);
    // 0x600088F0: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x600088F4: jal         0x6000055C
    // 0x600088F8: nop

    ovl_menu_battle_55C(rdram, ctx);
        goto after_349;
    // 0x600088F8: nop

    after_349:
    // 0x600088FC: jal         0x6000085C
    // 0x60008900: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_350;
    // 0x60008900: nop

    after_350:
    // 0x60008904: b           L_60008224
    // 0x60008908: nop

        goto L_60008224;
    // 0x60008908: nop

L_6000890C:
    // 0x6000890C: lw          $t6, 0x250($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X250);
    // 0x60008910: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60008914: beq         $t6, $at, L_60008974
    if (ctx->r14 == ctx->r1) {
        // 0x60008918: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60008974;
    }
    // 0x60008918: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000891C: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x60008920: addiu       $t4, $sp, 0x124
    ctx->r12 = ADD32(ctx->r29, 0X124);
    // 0x60008924: sw          $t4, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r12;
    // 0x60008928: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x6000892C: sw          $t3, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r11;
L_60008930:
    // 0x60008930: lw          $t1, 0x254($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X254);
    // 0x60008934: lw          $t9, 0x258($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X258);
    // 0x60008938: lbu         $t8, 0x0($t1)
    ctx->r24 = MEM_BU(ctx->r9, 0X0);
    // 0x6000893C: nop

    // 0x60008940: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x60008944: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60008948: lw          $t5, 0x254($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X254);
    // 0x6000894C: lw          $t0, 0x258($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X258);
    // 0x60008950: addiu       $t3, $t6, 0x1
    ctx->r11 = ADD32(ctx->r14, 0X1);
    // 0x60008954: sltiu       $at, $t3, 0x124
    ctx->r1 = ctx->r11 < 0X124 ? 1 : 0;
    // 0x60008958: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x6000895C: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x60008960: sw          $t3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r11;
    // 0x60008964: sw          $t7, 0x258($sp)
    MEM_W(0X258, ctx->r29) = ctx->r15;
    // 0x60008968: bne         $at, $zero, L_60008930
    if (ctx->r1 != 0) {
        // 0x6000896C: sw          $t2, 0x254($sp)
        MEM_W(0X254, ctx->r29) = ctx->r10;
            goto L_60008930;
    }
    // 0x6000896C: sw          $t2, 0x254($sp)
    MEM_W(0X254, ctx->r29) = ctx->r10;
    // 0x60008970: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_60008974:
    // 0x60008974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60008978: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000897C: jal         0x60000238
    // 0x60008980: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_238(rdram, ctx);
        goto after_351;
    // 0x60008980: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_351:
    // 0x60008984: jal         0x60000208
    // 0x60008988: nop

    ovl_menu_battle_208(rdram, ctx);
        goto after_352;
    // 0x60008988: nop

    after_352:
    // 0x6000898C: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60008990:
    // 0x60008990: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x60008994: jal         0x60002040
    // 0x60008998: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_353;
    // 0x60008998: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_353:
    // 0x6000899C: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x600089A0: nop

    // 0x600089A4: addiu       $t1, $t4, 0x1
    ctx->r9 = ADD32(ctx->r12, 0X1);
    // 0x600089A8: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x600089AC: bne         $at, $zero, L_60008990
    if (ctx->r1 != 0) {
        // 0x600089B0: sw          $t1, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r9;
            goto L_60008990;
    }
    // 0x600089B0: sw          $t1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r9;
    // 0x600089B4: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600089B8: lw          $a0, -0x3E84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E84);
    // 0x600089BC: jal         0x60000DA8
    // 0x600089C0: nop

    ovl_menu_battle_DA8(rdram, ctx);
        goto after_354;
    // 0x600089C0: nop

    after_354:
    // 0x600089C4: lw          $a0, 0x268($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X268);
    // 0x600089C8: jal         0x60000550
    // 0x600089CC: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_355;
    // 0x600089CC: nop

    after_355:
    // 0x600089D0: lw          $a0, 0x264($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X264);
    // 0x600089D4: jal         0x60000550
    // 0x600089D8: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_356;
    // 0x600089D8: nop

    after_356:
    // 0x600089DC: lw          $a0, 0x260($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X260);
    // 0x600089E0: jal         0x60000550
    // 0x600089E4: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_357;
    // 0x600089E4: nop

    after_357:
    // 0x600089E8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600089EC: addiu       $a0, $a0, -0x46A8
    ctx->r4 = ADD32(ctx->r4, -0X46A8);
    // 0x600089F0: jal         0x60001BEC
    // 0x600089F4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    ovl_menu_battle_1BEC(rdram, ctx);
        goto after_358;
    // 0x600089F4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_358:
    // 0x600089F8: b           L_6000AD54
    // 0x600089FC: nop

        goto L_6000AD54;
    // 0x600089FC: nop

L_60008A00:
    // 0x60008A00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60008A04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60008A08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60008A0C: jal         0x60000220
    // 0x60008A10: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_220(rdram, ctx);
        goto after_359;
    // 0x60008A10: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_359:
    // 0x60008A14: jal         0x6000025C
    // 0x60008A18: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    ovl_menu_battle_25C(rdram, ctx);
        goto after_360;
    // 0x60008A18: addiu       $a0, $zero, 0x42
    ctx->r4 = ADD32(0, 0X42);
    after_360:
    // 0x60008A1C: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x60008A20: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60008A24: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x60008A28: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60008A2C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x60008A30: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x60008A34: lw          $t7, -0x4708($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4708);
    // 0x60008A38: addiu       $t2, $t2, -0x4528
    ctx->r10 = ADD32(ctx->r10, -0X4528);
    // 0x60008A3C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008A40: addiu       $t5, $t7, 0x400
    ctx->r13 = ADD32(ctx->r15, 0X400);
    // 0x60008A44: sh          $t5, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r13;
    // 0x60008A48: addiu       $a0, $a0, -0x4510
    ctx->r4 = ADD32(ctx->r4, -0X4510);
    // 0x60008A4C: jal         0x60001AA0
    // 0x60008A50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_361;
    // 0x60008A50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_361:
    // 0x60008A54: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x60008A58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60008A5C: lw          $t3, 0x0($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X0);
    // 0x60008A60: nop

    // 0x60008A64: bne         $t3, $at, L_60008B3C
    if (ctx->r11 != ctx->r1) {
        // 0x60008A68: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60008B3C;
    }
    // 0x60008A68: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60008A6C: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60008A70: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60008A74: jal         0x6000064C
    // 0x60008A78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_362;
    // 0x60008A78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_362:
    // 0x60008A7C: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x60008A80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60008A84: sw          $v0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r2;
    // 0x60008A88: lui         $at, 0x4288
    ctx->r1 = S32(0X4288 << 16);
    // 0x60008A8C: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x60008A90: lw          $t1, 0x268($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X268);
    // 0x60008A94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60008A98: addiu       $t8, $zero, 0xE0
    ctx->r24 = ADD32(0, 0XE0);
    // 0x60008A9C: swc1        $f8, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f8.u32l;
    // 0x60008AA0: lw          $t9, 0x268($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X268);
    // 0x60008AA4: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x60008AA8: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x60008AAC: lw          $t7, 0x268($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X268);
    // 0x60008AB0: lui         $t5, 0xFFFF
    ctx->r13 = S32(0XFFFF << 16);
    // 0x60008AB4: sw          $t0, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r8;
    // 0x60008AB8: lw          $t2, 0x268($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X268);
    // 0x60008ABC: ori         $t5, $t5, 0x80
    ctx->r13 = ctx->r13 | 0X80;
    // 0x60008AC0: sw          $t5, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r13;
    // 0x60008AC4: lw          $t3, 0x268($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X268);
    // 0x60008AC8: addiu       $t6, $zero, 0x7800
    ctx->r14 = ADD32(0, 0X7800);
    // 0x60008ACC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60008AD0: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60008AD4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60008AD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60008ADC: jal         0x6000064C
    // 0x60008AE0: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_363;
    // 0x60008AE0: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
    after_363:
    // 0x60008AE4: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x60008AE8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60008AEC: sw          $v0, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r2;
    // 0x60008AF0: lui         $at, 0x431C
    ctx->r1 = S32(0X431C << 16);
    // 0x60008AF4: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
    // 0x60008AF8: lw          $t1, 0x260($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X260);
    // 0x60008AFC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60008B00: addiu       $t8, $zero, 0xE0
    ctx->r24 = ADD32(0, 0XE0);
    // 0x60008B04: swc1        $f18, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f18.u32l;
    // 0x60008B08: lw          $t9, 0x260($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X260);
    // 0x60008B0C: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x60008B10: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x60008B14: lw          $t7, 0x260($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X260);
    // 0x60008B18: lui         $t5, 0xFF
    ctx->r13 = S32(0XFF << 16);
    // 0x60008B1C: sw          $t0, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r8;
    // 0x60008B20: lw          $t2, 0x260($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X260);
    // 0x60008B24: ori         $t5, $t5, 0x80
    ctx->r13 = ctx->r13 | 0X80;
    // 0x60008B28: sw          $t5, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r13;
    // 0x60008B2C: lw          $t3, 0x260($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X260);
    // 0x60008B30: addiu       $t6, $zero, 0x7800
    ctx->r14 = ADD32(0, 0X7800);
    // 0x60008B34: b           L_60008CD4
    // 0x60008B38: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
        goto L_60008CD4;
    // 0x60008B38: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
L_60008B3C:
    // 0x60008B3C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60008B40: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60008B44: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60008B48: jal         0x6000064C
    // 0x60008B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_364;
    // 0x60008B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_364:
    // 0x60008B50: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x60008B54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60008B58: sw          $v0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r2;
    // 0x60008B5C: lui         $at, 0x4230
    ctx->r1 = S32(0X4230 << 16);
    // 0x60008B60: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x60008B64: lw          $t1, 0x268($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X268);
    // 0x60008B68: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60008B6C: addiu       $t8, $zero, 0xE0
    ctx->r24 = ADD32(0, 0XE0);
    // 0x60008B70: swc1        $f16, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f16.u32l;
    // 0x60008B74: lw          $t9, 0x268($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X268);
    // 0x60008B78: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x60008B7C: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x60008B80: lw          $t7, 0x268($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X268);
    // 0x60008B84: addiu       $t5, $zero, -0x80
    ctx->r13 = ADD32(0, -0X80);
    // 0x60008B88: sw          $t0, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r8;
    // 0x60008B8C: lw          $t2, 0x268($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X268);
    // 0x60008B90: addiu       $t6, $zero, 0x7800
    ctx->r14 = ADD32(0, 0X7800);
    // 0x60008B94: sw          $t5, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r13;
    // 0x60008B98: lw          $t3, 0x268($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X268);
    // 0x60008B9C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60008BA0: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60008BA4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60008BA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60008BAC: jal         0x6000064C
    // 0x60008BB0: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_365;
    // 0x60008BB0: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
    after_365:
    // 0x60008BB4: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x60008BB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60008BBC: sw          $v0, 0x264($sp)
    MEM_W(0X264, ctx->r29) = ctx->r2;
    // 0x60008BC0: lui         $at, 0x42B0
    ctx->r1 = S32(0X42B0 << 16);
    // 0x60008BC4: swc1        $f4, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f4.u32l;
    // 0x60008BC8: lw          $t1, 0x264($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X264);
    // 0x60008BCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60008BD0: addiu       $t8, $zero, 0xE0
    ctx->r24 = ADD32(0, 0XE0);
    // 0x60008BD4: swc1        $f8, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f8.u32l;
    // 0x60008BD8: lw          $t9, 0x264($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X264);
    // 0x60008BDC: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x60008BE0: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x60008BE4: lw          $t7, 0x264($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X264);
    // 0x60008BE8: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x60008BEC: sw          $t0, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r8;
    // 0x60008BF0: lw          $t2, 0x264($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X264);
    // 0x60008BF4: addiu       $t6, $zero, 0x7800
    ctx->r14 = ADD32(0, 0X7800);
    // 0x60008BF8: sw          $t5, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r13;
    // 0x60008BFC: lw          $t3, 0x264($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X264);
    // 0x60008C00: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60008C04: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60008C08: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60008C0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60008C10: jal         0x6000064C
    // 0x60008C14: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_366;
    // 0x60008C14: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
    after_366:
    // 0x60008C18: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x60008C1C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60008C20: sw          $v0, 0x260($sp)
    MEM_W(0X260, ctx->r29) = ctx->r2;
    // 0x60008C24: lui         $at, 0x4304
    ctx->r1 = S32(0X4304 << 16);
    // 0x60008C28: swc1        $f10, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f10.u32l;
    // 0x60008C2C: lw          $t1, 0x260($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X260);
    // 0x60008C30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60008C34: addiu       $t8, $zero, 0xE0
    ctx->r24 = ADD32(0, 0XE0);
    // 0x60008C38: swc1        $f18, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f18.u32l;
    // 0x60008C3C: lw          $t9, 0x260($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X260);
    // 0x60008C40: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x60008C44: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x60008C48: lw          $t7, 0x260($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X260);
    // 0x60008C4C: lui         $t5, 0xFF00
    ctx->r13 = S32(0XFF00 << 16);
    // 0x60008C50: sw          $t0, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r8;
    // 0x60008C54: lw          $t2, 0x260($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X260);
    // 0x60008C58: ori         $t5, $t5, 0x80
    ctx->r13 = ctx->r13 | 0X80;
    // 0x60008C5C: sw          $t5, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r13;
    // 0x60008C60: lw          $t3, 0x260($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X260);
    // 0x60008C64: addiu       $t6, $zero, 0x7800
    ctx->r14 = ADD32(0, 0X7800);
    // 0x60008C68: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60008C6C: addiu       $a0, $a0, 0xF50
    ctx->r4 = ADD32(ctx->r4, 0XF50);
    // 0x60008C70: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60008C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60008C78: jal         0x6000064C
    // 0x60008C7C: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
    ovl_menu_battle_64C(rdram, ctx);
        goto after_367;
    // 0x60008C7C: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
    after_367:
    // 0x60008C80: lui         $at, 0x4290
    ctx->r1 = S32(0X4290 << 16);
    // 0x60008C84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60008C88: sw          $v0, 0x25C($sp)
    MEM_W(0X25C, ctx->r29) = ctx->r2;
    // 0x60008C8C: lui         $at, 0x4330
    ctx->r1 = S32(0X4330 << 16);
    // 0x60008C90: swc1        $f6, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f6.u32l;
    // 0x60008C94: lw          $t1, 0x25C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X25C);
    // 0x60008C98: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60008C9C: addiu       $t8, $zero, 0xE0
    ctx->r24 = ADD32(0, 0XE0);
    // 0x60008CA0: swc1        $f16, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f16.u32l;
    // 0x60008CA4: lw          $t9, 0x25C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X25C);
    // 0x60008CA8: addiu       $t0, $zero, 0x28
    ctx->r8 = ADD32(0, 0X28);
    // 0x60008CAC: sw          $t8, 0x4C($t9)
    MEM_W(0X4C, ctx->r25) = ctx->r24;
    // 0x60008CB0: lw          $t7, 0x25C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X25C);
    // 0x60008CB4: ori         $t5, $zero, 0xFF80
    ctx->r13 = 0 | 0XFF80;
    // 0x60008CB8: sw          $t0, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r8;
    // 0x60008CBC: lw          $t2, 0x25C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X25C);
    // 0x60008CC0: addiu       $t6, $zero, 0x7800
    ctx->r14 = ADD32(0, 0X7800);
    // 0x60008CC4: sw          $t5, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r13;
    // 0x60008CC8: lw          $t3, 0x25C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X25C);
    // 0x60008CCC: nop

    // 0x60008CD0: sw          $t6, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->r14;
L_60008CD4:
    // 0x60008CD4: jal         0x6000085C
    // 0x60008CD8: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_368;
    // 0x60008CD8: nop

    after_368:
    // 0x60008CDC: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x60008CE0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60008CE4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60008CE8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60008CEC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60008CF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60008CF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60008CF8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60008CFC: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x60008D00: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    // 0x60008D04: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x60008D08: swc1        $f18, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f18.u32l;
    // 0x60008D0C: swc1        $f18, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f18.u32l;
    // 0x60008D10: swc1        $f18, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f18.u32l;
    // 0x60008D14: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x60008D18: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x60008D1C: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x60008D20: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x60008D24: jal         0x60000E8C
    // 0x60008D28: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    ovl_menu_battle_E8C(rdram, ctx);
        goto after_369;
    // 0x60008D28: swc1        $f16, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f16.u32l;
    after_369:
    // 0x60008D2C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008D30: lw          $a0, -0x3F8C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F8C);
    // 0x60008D34: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x60008D38: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x60008D3C: jal         0x60000DB4
    // 0x60008D40: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    ovl_menu_battle_DB4(rdram, ctx);
        goto after_370;
    // 0x60008D40: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    after_370:
    // 0x60008D44: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008D48: sw          $v0, -0x3E84($at)
    MEM_W(-0X3E84, ctx->r1) = ctx->r2;
    // 0x60008D4C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008D50: lw          $a0, -0x3E84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E84);
    // 0x60008D54: jal         0x60000DA8
    // 0x60008D58: nop

    ovl_menu_battle_DA8(rdram, ctx);
        goto after_371;
    // 0x60008D58: nop

    after_371:
    // 0x60008D5C: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x60008D60: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x60008D64: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x60008D68: jal         0x60000DB4
    // 0x60008D6C: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    ovl_menu_battle_DB4(rdram, ctx);
        goto after_372;
    // 0x60008D6C: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    after_372:
    // 0x60008D70: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008D74: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60008D78: sw          $v0, -0x3E84($at)
    MEM_W(-0X3E84, ctx->r1) = ctx->r2;
    // 0x60008D7C: addiu       $t4, $t4, -0x4510
    ctx->r12 = ADD32(ctx->r12, -0X4510);
    // 0x60008D80: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x60008D84: jal         0x600005A4
    // 0x60008D88: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_373;
    // 0x60008D88: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_373:
    // 0x60008D8C: lui         $at, 0xC4FA
    ctx->r1 = S32(0XC4FA << 16);
    // 0x60008D90: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60008D94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60008D98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60008D9C: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60008DA0: addiu       $t1, $t1, -0x4510
    ctx->r9 = ADD32(ctx->r9, -0X4510);
    // 0x60008DA4: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x60008DA8: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
    // 0x60008DAC: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    // 0x60008DB0: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x60008DB4: jal         0x6000058C
    // 0x60008DB8: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    ovl_menu_battle_58C(rdram, ctx);
        goto after_374;
    // 0x60008DB8: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    after_374:
    // 0x60008DBC: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60008DC0: addiu       $t8, $t8, -0x4510
    ctx->r24 = ADD32(ctx->r24, -0X4510);
    // 0x60008DC4: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x60008DC8: jal         0x60000640
    // 0x60008DCC: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    ovl_menu_battle_640(rdram, ctx);
        goto after_375;
    // 0x60008DCC: addiu       $a1, $zero, 0xFE
    ctx->r5 = ADD32(0, 0XFE);
    after_375:
    // 0x60008DD0: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60008DD4: addiu       $t9, $t9, -0x4510
    ctx->r25 = ADD32(ctx->r25, -0X4510);
    // 0x60008DD8: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x60008DDC: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    // 0x60008DE0: jal         0x60000574
    // 0x60008DE4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_376;
    // 0x60008DE4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_376:
    // 0x60008DE8: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60008DEC: addiu       $t0, $t0, -0x4510
    ctx->r8 = ADD32(ctx->r8, -0X4510);
    // 0x60008DF0: lw          $a0, 0xC($t0)
    ctx->r4 = MEM_W(ctx->r8, 0XC);
    // 0x60008DF4: jal         0x600005A4
    // 0x60008DF8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_menu_battle_5A4(rdram, ctx);
        goto after_377;
    // 0x60008DF8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_377:
    // 0x60008DFC: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60008E00:
    // 0x60008E00: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60008E04:
    // 0x60008E04: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x60008E08: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x60008E0C: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x60008E10: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x60008E14: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x60008E18: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x60008E1C: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60008E20: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x60008E24: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008E28: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x60008E2C: sw          $zero, -0x3E80($at)
    MEM_W(-0X3E80, ctx->r1) = 0;
    // 0x60008E30: addiu       $t1, $t4, 0x1
    ctx->r9 = ADD32(ctx->r12, 0X1);
    // 0x60008E34: slti        $at, $t1, 0x5
    ctx->r1 = SIGNED(ctx->r9) < 0X5 ? 1 : 0;
    // 0x60008E38: bne         $at, $zero, L_60008E04
    if (ctx->r1 != 0) {
        // 0x60008E3C: sw          $t1, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r9;
            goto L_60008E04;
    }
    // 0x60008E3C: sw          $t1, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r9;
    // 0x60008E40: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x60008E44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60008E48: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x60008E4C: nop

    // 0x60008E50: bne         $t9, $at, L_60008E70
    if (ctx->r25 != ctx->r1) {
        // 0x60008E54: lw          $t7, 0x248($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X248);
            goto L_60008E70;
    }
    // 0x60008E54: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x60008E58: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60008E5C: nop

    // 0x60008E60: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x60008E64: bne         $at, $zero, L_60008EA8
    if (ctx->r1 != 0) {
        // 0x60008E68: lw          $t8, 0x11C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X11C);
            goto L_60008EA8;
    }
    // 0x60008E68: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x60008E6C: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
L_60008E70:
    // 0x60008E70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60008E74: lw          $t2, 0x0($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X0);
    // 0x60008E78: nop

    // 0x60008E7C: beq         $t2, $at, L_6000912C
    if (ctx->r10 == ctx->r1) {
        // 0x60008E80: lw          $t5, 0x11C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X11C);
            goto L_6000912C;
    }
    // 0x60008E80: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60008E84: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60008E88: nop

    // 0x60008E8C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x60008E90: addu        $t3, $t7, $t6
    ctx->r11 = ADD32(ctx->r15, ctx->r14);
    // 0x60008E94: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x60008E98: nop

    // 0x60008E9C: beq         $t4, $zero, L_6000912C
    if (ctx->r12 == 0) {
        // 0x60008EA0: lw          $t5, 0x11C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X11C);
            goto L_6000912C;
    }
    // 0x60008EA0: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60008EA4: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
L_60008EA8:
    // 0x60008EA8: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60008EAC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x60008EB0: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
    // 0x60008EB4: addu        $t0, $t1, $t9
    ctx->r8 = ADD32(ctx->r9, ctx->r25);
    // 0x60008EB8: lw          $t2, 0xB8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XB8);
    // 0x60008EBC: nop

    // 0x60008EC0: blez        $t2, L_6000912C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x60008EC4: lw          $t5, 0x11C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X11C);
            goto L_6000912C;
    }
    // 0x60008EC4: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60008EC8: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
L_60008ECC:
    // 0x60008ECC: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x60008ED0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x60008ED4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x60008ED8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x60008EDC: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60008EE0: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x60008EE4: addu        $t4, $t7, $t3
    ctx->r12 = ADD32(ctx->r15, ctx->r11);
    // 0x60008EE8: addiu       $t8, $t8, -0x3E80
    ctx->r24 = ADD32(ctx->r24, -0X3E80);
    // 0x60008EEC: addu        $a1, $t4, $t8
    ctx->r5 = ADD32(ctx->r12, ctx->r24);
    // 0x60008EF0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60008EF4: addiu       $a2, $zero, 0x98B
    ctx->r6 = ADD32(0, 0X98B);
    // 0x60008EF8: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x60008EFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60008F00: jal         0x60000F34
    // 0x60008F04: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_378;
    // 0x60008F04: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_378:
    // 0x60008F08: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60008F0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60008F10: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x60008F14: nop

    // 0x60008F18: bne         $t9, $at, L_60008FDC
    if (ctx->r25 != ctx->r1) {
        // 0x60008F1C: lw          $t1, 0x108($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X108);
            goto L_60008FDC;
    }
    // 0x60008F1C: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x60008F20: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x60008F24: lui         $at, 0x4244
    ctx->r1 = S32(0X4244 << 16);
    // 0x60008F28: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x60008F2C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x60008F30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60008F34: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60008F38: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60008F3C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x60008F40: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x60008F44: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60008F48: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x60008F4C: lui         $at, 0xC2D5
    ctx->r1 = S32(0XC2D5 << 16);
    // 0x60008F50: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x60008F54: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x60008F58: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x60008F5C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x60008F60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60008F64: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
    // 0x60008F68: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x60008F6C: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x60008F70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60008F74: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60008F78: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60008F7C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x60008F80: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x60008F84: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x60008F88: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008F8C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60008F90: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x60008F94: lwc1        $f8, -0x4004($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4004);
    // 0x60008F98: sub.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x60008F9C: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x60008FA0: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60008FA4: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x60008FA8: lw          $a1, -0x3E80($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E80);
    // 0x60008FAC: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x60008FB0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x60008FB4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x60008FB8: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x60008FBC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x60008FC0: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x60008FC4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60008FC8: jal         0x60000F34
    // 0x60008FCC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_379;
    // 0x60008FCC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_379:
    // 0x60008FD0: b           L_6000908C
    // 0x60008FD4: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
        goto L_6000908C;
    // 0x60008FD4: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x60008FD8: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
L_60008FDC:
    // 0x60008FDC: lui         $at, 0x4244
    ctx->r1 = S32(0X4244 << 16);
    // 0x60008FE0: addiu       $t6, $t1, 0x1
    ctx->r14 = ADD32(ctx->r9, 0X1);
    // 0x60008FE4: mtc1        $t6, $f18
    ctx->f18.u32l = ctx->r14;
    // 0x60008FE8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60008FEC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x60008FF0: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x60008FF4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x60008FF8: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x60008FFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60009000: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x60009004: lui         $at, 0xC24E
    ctx->r1 = S32(0XC24E << 16);
    // 0x60009008: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x6000900C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x60009010: addu        $t8, $t8, $t4
    ctx->r24 = ADD32(ctx->r24, ctx->r12);
    // 0x60009014: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x60009018: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000901C: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
    // 0x60009020: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x60009024: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x60009028: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000902C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x60009030: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60009034: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x60009038: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x6000903C: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x60009040: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009044: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60009048: sll         $t9, $t1, 2
    ctx->r25 = S32(ctx->r9 << 2);
    // 0x6000904C: lwc1        $f8, -0x4000($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4000);
    // 0x60009050: add.s       $f16, $f18, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x60009054: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x60009058: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000905C: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x60009060: lw          $a1, -0x3E80($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E80);
    // 0x60009064: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x60009068: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x6000906C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x60009070: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x60009074: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x60009078: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x6000907C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60009080: jal         0x60000F34
    // 0x60009084: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_380;
    // 0x60009084: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_380:
    // 0x60009088: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
L_6000908C:
    // 0x6000908C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009090: lwc1        $f18, -0x3FFC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3FFC);
    // 0x60009094: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x60009098: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000909C: sll         $t5, $t7, 2
    ctx->r13 = S32(ctx->r15 << 2);
    // 0x600090A0: lwc1        $f16, -0x3FF8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3FF8);
    // 0x600090A4: addu        $t5, $t5, $t7
    ctx->r13 = ADD32(ctx->r13, ctx->r15);
    // 0x600090A8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x600090AC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600090B0: sll         $t0, $t3, 2
    ctx->r8 = S32(ctx->r11 << 2);
    // 0x600090B4: lwc1        $f8, -0x3FF4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3FF4);
    // 0x600090B8: addu        $t8, $t5, $t0
    ctx->r24 = ADD32(ctx->r13, ctx->r8);
    // 0x600090BC: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x600090C0: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x600090C4: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x600090C8: lw          $a1, -0x3E80($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E80);
    // 0x600090CC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x600090D0: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x600090D4: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x600090D8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x600090DC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x600090E0: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x600090E4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x600090E8: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x600090EC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x600090F0: jal         0x60000F34
    // 0x600090F4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_381;
    // 0x600090F4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_381:
    // 0x600090F8: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x600090FC: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60009100: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60009104: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x60009108: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x6000910C: sw          $t2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r10;
    // 0x60009110: addu        $t7, $t1, $t4
    ctx->r15 = ADD32(ctx->r9, ctx->r12);
    // 0x60009114: lw          $t3, 0xB8($t7)
    ctx->r11 = MEM_W(ctx->r15, 0XB8);
    // 0x60009118: nop

    // 0x6000911C: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x60009120: bne         $at, $zero, L_60008ECC
    if (ctx->r1 != 0) {
        // 0x60009124: lw          $t5, 0x11C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X11C);
            goto L_60008ECC;
    }
    // 0x60009124: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x60009128: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
L_6000912C:
    // 0x6000912C: nop

    // 0x60009130: addiu       $t0, $t5, 0x1
    ctx->r8 = ADD32(ctx->r13, 0X1);
    // 0x60009134: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x60009138: bne         $at, $zero, L_60008E00
    if (ctx->r1 != 0) {
        // 0x6000913C: sw          $t0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r8;
            goto L_60008E00;
    }
    // 0x6000913C: sw          $t0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r8;
    // 0x60009140: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x60009144: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60009148: lui         $at, 0x4434
    ctx->r1 = S32(0X4434 << 16);
    // 0x6000914C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60009150: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60009154: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60009158: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x6000915C: swc1        $f16, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f16.u32l;
    // 0x60009160: swc1        $f18, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f18.u32l;
    // 0x60009164: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x60009168: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x6000916C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x60009170: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60009174: bne         $t9, $at, L_60009398
    if (ctx->r25 != ctx->r1) {
        // 0x60009178: nop
    
            goto L_60009398;
    }
    // 0x60009178: nop

    // 0x6000917C: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x60009180: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60009184:
    // 0x60009184: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x60009188: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x6000918C: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x60009190: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x60009194: lw          $t2, 0x4($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X4);
    // 0x60009198: nop

    // 0x6000919C: beq         $t2, $zero, L_600091C8
    if (ctx->r10 == 0) {
        // 0x600091A0: lw          $t8, 0x11C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X11C);
            goto L_600091C8;
    }
    // 0x600091A0: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x600091A4: lw          $t3, 0x94($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X94);
    // 0x600091A8: nop

    // 0x600091AC: bne         $t3, $zero, L_600091C8
    if (ctx->r11 != 0) {
        // 0x600091B0: lw          $t8, 0x11C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X11C);
            goto L_600091C8;
    }
    // 0x600091B0: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x600091B4: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x600091B8: nop

    // 0x600091BC: addiu       $t0, $t5, 0x1
    ctx->r8 = ADD32(ctx->r13, 0X1);
    // 0x600091C0: sw          $t0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r8;
    // 0x600091C4: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
L_600091C8:
    // 0x600091C8: nop

    // 0x600091CC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x600091D0: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x600091D4: bne         $at, $zero, L_60009184
    if (ctx->r1 != 0) {
        // 0x600091D8: sw          $t9, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r25;
            goto L_60009184;
    }
    // 0x600091D8: sw          $t9, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r25;
    // 0x600091DC: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x600091E0: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x600091E4: addiu       $t6, $t1, -0x1
    ctx->r14 = ADD32(ctx->r9, -0X1);
    // 0x600091E8: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x600091EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600091F0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600091F4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x600091F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600091FC: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x60009200: lui         $at, 0x4168
    ctx->r1 = S32(0X4168 << 16);
    // 0x60009204: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60009208: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x6000920C: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x60009210: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x60009214: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
L_60009218:
    // 0x60009218: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x6000921C: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x60009220: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x60009224: addu        $t3, $t4, $t7
    ctx->r11 = ADD32(ctx->r12, ctx->r15);
    // 0x60009228: lw          $t5, 0x4($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X4);
    // 0x6000922C: nop

    // 0x60009230: beq         $t5, $zero, L_60009270
    if (ctx->r13 == 0) {
        // 0x60009234: lw          $t9, 0x11C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X11C);
            goto L_60009270;
    }
    // 0x60009234: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60009238: lw          $t0, 0x94($t3)
    ctx->r8 = MEM_W(ctx->r11, 0X94);
    // 0x6000923C: nop

    // 0x60009240: bne         $t0, $zero, L_60009270
    if (ctx->r8 != 0) {
        // 0x60009244: lw          $t9, 0x11C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X11C);
            goto L_60009270;
    }
    // 0x60009244: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x60009248: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x6000924C: addu        $t8, $sp, $t7
    ctx->r24 = ADD32(ctx->r29, ctx->r15);
    // 0x60009250: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x60009254: swc1        $f18, 0xD0($t8)
    MEM_W(0XD0, ctx->r24) = ctx->f18.u32l;
    // 0x60009258: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x6000925C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60009260: nop

    // 0x60009264: sub.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x60009268: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x6000926C: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
L_60009270:
    // 0x60009270: nop

    // 0x60009274: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x60009278: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x6000927C: bne         $at, $zero, L_60009218
    if (ctx->r1 != 0) {
        // 0x60009280: sw          $t1, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r9;
            goto L_60009218;
    }
    // 0x60009280: sw          $t1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r9;
    // 0x60009284: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x60009288: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_6000928C:
    // 0x6000928C: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x60009290: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x60009294: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x60009298: addu        $t5, $t6, $t4
    ctx->r13 = ADD32(ctx->r14, ctx->r12);
    // 0x6000929C: lw          $t3, 0x4($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X4);
    // 0x600092A0: nop

    // 0x600092A4: beq         $t3, $zero, L_600092D0
    if (ctx->r11 == 0) {
        // 0x600092A8: lw          $t9, 0x11C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X11C);
            goto L_600092D0;
    }
    // 0x600092A8: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600092AC: lw          $t0, 0x94($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X94);
    // 0x600092B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600092B4: bne         $t0, $at, L_600092D0
    if (ctx->r8 != ctx->r1) {
        // 0x600092B8: lw          $t9, 0x11C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X11C);
            goto L_600092D0;
    }
    // 0x600092B8: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600092BC: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x600092C0: nop

    // 0x600092C4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x600092C8: sw          $t8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r24;
    // 0x600092CC: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
L_600092D0:
    // 0x600092D0: nop

    // 0x600092D4: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x600092D8: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x600092DC: bne         $at, $zero, L_6000928C
    if (ctx->r1 != 0) {
        // 0x600092E0: sw          $t1, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r9;
            goto L_6000928C;
    }
    // 0x600092E0: sw          $t1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r9;
    // 0x600092E4: lw          $t2, 0x108($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X108);
    // 0x600092E8: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x600092EC: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x600092F0: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x600092F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600092F8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600092FC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60009300: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60009304: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x60009308: lui         $at, 0xC2A7
    ctx->r1 = S32(0XC2A7 << 16);
    // 0x6000930C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60009310: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
    // 0x60009314: mul.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f16.fl);
    // 0x60009318: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x6000931C: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x60009320: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
L_60009324:
    // 0x60009324: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x60009328: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x6000932C: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x60009330: addu        $t0, $t4, $t5
    ctx->r8 = ADD32(ctx->r12, ctx->r13);
    // 0x60009334: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x60009338: nop

    // 0x6000933C: beq         $t7, $zero, L_6000937C
    if (ctx->r15 == 0) {
        // 0x60009340: lw          $t1, 0x11C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X11C);
            goto L_6000937C;
    }
    // 0x60009340: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x60009344: lw          $t8, 0x94($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X94);
    // 0x60009348: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000934C: bne         $t8, $at, L_6000937C
    if (ctx->r24 != ctx->r1) {
        // 0x60009350: lw          $t1, 0x11C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X11C);
            goto L_6000937C;
    }
    // 0x60009350: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x60009354: lwc1        $f18, 0xE0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x60009358: addu        $t9, $sp, $t5
    ctx->r25 = ADD32(ctx->r29, ctx->r13);
    // 0x6000935C: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x60009360: swc1        $f18, 0xD0($t9)
    MEM_W(0XD0, ctx->r25) = ctx->f18.u32l;
    // 0x60009364: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x60009368: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x6000936C: nop

    // 0x60009370: sub.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x60009374: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x60009378: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
L_6000937C:
    // 0x6000937C: nop

    // 0x60009380: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x60009384: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x60009388: bne         $at, $zero, L_60009324
    if (ctx->r1 != 0) {
        // 0x6000938C: sw          $t2, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r10;
            goto L_60009324;
    }
    // 0x6000938C: sw          $t2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r10;
    // 0x60009390: b           L_60009400
    // 0x60009394: lw          $t2, 0x270($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X270);
        goto L_60009400;
    // 0x60009394: lw          $t2, 0x270($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X270);
L_60009398:
    // 0x60009398: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000939C:
    // 0x6000939C: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x600093A0: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x600093A4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x600093A8: addu        $t7, $t6, $t4
    ctx->r15 = ADD32(ctx->r14, ctx->r12);
    // 0x600093AC: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x600093B0: nop

    // 0x600093B4: beq         $t0, $zero, L_600093E8
    if (ctx->r8 == 0) {
        // 0x600093B8: lw          $t5, 0x11C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X11C);
            goto L_600093E8;
    }
    // 0x600093B8: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x600093BC: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x600093C0: lui         $at, 0xC244
    ctx->r1 = S32(0XC244 << 16);
    // 0x600093C4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x600093C8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600093CC: lui         $at, 0x421C
    ctx->r1 = S32(0X421C << 16);
    // 0x600093D0: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x600093D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600093D8: addu        $t8, $sp, $t4
    ctx->r24 = ADD32(ctx->r29, ctx->r12);
    // 0x600093DC: add.s       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x600093E0: swc1        $f4, 0xD0($t8)
    MEM_W(0XD0, ctx->r24) = ctx->f4.u32l;
    // 0x600093E4: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
L_600093E8:
    // 0x600093E8: nop

    // 0x600093EC: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x600093F0: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x600093F4: bne         $at, $zero, L_6000939C
    if (ctx->r1 != 0) {
        // 0x600093F8: sw          $t9, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r25;
            goto L_6000939C;
    }
    // 0x600093F8: sw          $t9, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r25;
    // 0x600093FC: lw          $t2, 0x270($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X270);
L_60009400:
    // 0x60009400: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x60009404: sra         $t6, $t2, 16
    ctx->r14 = S32(SIGNED(ctx->r10) >> 16);
    // 0x60009408: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x6000940C: addu        $t0, $t1, $t7
    ctx->r8 = ADD32(ctx->r9, ctx->r15);
    // 0x60009410: lw          $t3, 0xB8($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XB8);
    // 0x60009414: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x60009418: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x6000941C: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x60009420: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60009424: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x60009428: addu        $t5, $t8, $t4
    ctx->r13 = ADD32(ctx->r24, ctx->r12);
    // 0x6000942C: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60009430: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x60009434: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x60009438: addu        $t9, $t9, $t5
    ctx->r25 = ADD32(ctx->r25, ctx->r13);
    // 0x6000943C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x60009440: lw          $a1, -0x3E84($t9)
    ctx->r5 = MEM_W(ctx->r25, -0X3E84);
    // 0x60009444: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009448: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x6000944C: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x60009450: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x60009454: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x60009458: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x6000945C: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x60009460: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x60009464: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x60009468: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x6000946C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60009470: jal         0x60000F34
    // 0x60009474: sw          $a1, -0x3E88($at)
    MEM_W(-0X3E88, ctx->r1) = ctx->r5;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_382;
    // 0x60009474: sw          $a1, -0x3E88($at)
    MEM_W(-0X3E88, ctx->r1) = ctx->r5;
    after_382:
    // 0x60009478: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000947C:
    // 0x6000947C: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x60009480: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009484: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x60009488: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x6000948C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x60009490: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x60009494: sw          $zero, -0x3FB8($at)
    MEM_W(-0X3FB8, ctx->r1) = 0;
    // 0x60009498: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x6000949C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600094A0: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x600094A4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x600094A8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x600094AC: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x600094B0: sw          $t7, -0x3E30($at)
    MEM_W(-0X3E30, ctx->r1) = ctx->r15;
    // 0x600094B4: addu        $t5, $t6, $t4
    ctx->r13 = ADD32(ctx->r14, ctx->r12);
    // 0x600094B8: lw          $s0, 0x4($t5)
    ctx->r16 = MEM_W(ctx->r13, 0X4);
    // 0x600094BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600094C0: beq         $s0, $at, L_600094E0
    if (ctx->r16 == ctx->r1) {
        // 0x600094C4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_600094E0;
    }
    // 0x600094C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600094C8: beq         $s0, $at, L_600094F4
    if (ctx->r16 == ctx->r1) {
        // 0x600094CC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_600094F4;
    }
    // 0x600094CC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600094D0: beq         $s0, $at, L_600094F8
    if (ctx->r16 == ctx->r1) {
        // 0x600094D4: lw          $a0, 0x11C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X11C);
            goto L_600094F8;
    }
    // 0x600094D4: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x600094D8: b           L_6000951C
    // 0x600094DC: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
        goto L_6000951C;
    // 0x600094DC: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_600094E0:
    // 0x600094E0: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x600094E4: jal         0x60002040
    // 0x600094E8: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_383;
    // 0x600094E8: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    after_383:
    // 0x600094EC: b           L_60009528
    // 0x600094F0: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
        goto L_60009528;
    // 0x600094F0: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
L_600094F4:
    // 0x600094F4: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_600094F8:
    // 0x600094F8: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x600094FC: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x60009500: addu        $t0, $t2, $t1
    ctx->r8 = ADD32(ctx->r10, ctx->r9);
    // 0x60009504: lw          $a1, 0x14($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X14);
    // 0x60009508: jal         0x60002040
    // 0x6000950C: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_384;
    // 0x6000950C: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    after_384:
    // 0x60009510: b           L_60009528
    // 0x60009514: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
        goto L_60009528;
    // 0x60009514: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x60009518: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_6000951C:
    // 0x6000951C: jal         0x60002040
    // 0x60009520: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_385;
    // 0x60009520: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_385:
    // 0x60009524: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
L_60009528:
    // 0x60009528: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x6000952C: sll         $t3, $t7, 2
    ctx->r11 = S32(ctx->r15 << 2);
    // 0x60009530: addu        $t8, $t8, $t3
    ctx->r24 = ADD32(ctx->r24, ctx->r11);
    // 0x60009534: lw          $t8, -0x3FB8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3FB8);
    // 0x60009538: nop

    // 0x6000953C: beq         $t8, $zero, L_6000960C
    if (ctx->r24 == 0) {
        // 0x60009540: lui         $at, 0x6001
        ctx->r1 = S32(0X6001 << 16);
            goto L_6000960C;
    }
    // 0x60009540: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009544: lwc1        $f8, -0x3FF0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3FF0);
    // 0x60009548: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000954C: lwc1        $f18, -0x3FEC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3FEC);
    // 0x60009550: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009554: lwc1        $f16, -0x3FE8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3FE8);
    // 0x60009558: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x6000955C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x60009560: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x60009564: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x60009568: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x6000956C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x60009570: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x60009574: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x60009578: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x6000957C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x60009580: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x60009584: jal         0x60000F34
    // 0x60009588: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_386;
    // 0x60009588: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_386:
    // 0x6000958C: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60009590: lui         $at, 0xC302
    ctx->r1 = S32(0XC302 << 16);
    // 0x60009594: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x60009598: addu        $t5, $sp, $t4
    ctx->r13 = ADD32(ctx->r29, ctx->r12);
    // 0x6000959C: lwc1        $f18, 0xD0($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0XD0);
    // 0x600095A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600095A4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600095A8: lwc1        $f16, -0x3FE4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3FE4);
    // 0x600095AC: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x600095B0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x600095B4: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x600095B8: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x600095BC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x600095C0: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x600095C4: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x600095C8: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x600095CC: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x600095D0: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x600095D4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x600095D8: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x600095DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x600095E0: jal         0x60000F34
    // 0x600095E4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_387;
    // 0x600095E4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_387:
    // 0x600095E8: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x600095EC: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x600095F0: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x600095F4: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x600095F8: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x600095FC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60009600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60009604: jal         0x60000F34
    // 0x60009608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_388;
    // 0x60009608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_388:
L_6000960C:
    // 0x6000960C: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x60009610: nop

    // 0x60009614: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x60009618: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x6000961C: bne         $at, $zero, L_6000947C
    if (ctx->r1 != 0) {
        // 0x60009620: sw          $t0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r8;
            goto L_6000947C;
    }
    // 0x60009620: sw          $t0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r8;
    // 0x60009624: jal         0x60000208
    // 0x60009628: nop

    ovl_menu_battle_208(rdram, ctx);
        goto after_389;
    // 0x60009628: nop

    after_389:
    // 0x6000962C: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60009630:
    // 0x60009630: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x60009634: lwc1        $f18, 0xEC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x60009638: lwc1        $f16, 0xE8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x6000963C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x60009640: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60009644: lw          $a1, -0x3E88($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E88);
    // 0x60009648: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x6000964C: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x60009650: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x60009654: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x60009658: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x6000965C: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x60009660: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x60009664: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x60009668: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x6000966C: jal         0x60000F34
    // 0x60009670: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_390;
    // 0x60009670: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_390:
    // 0x60009674: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009678: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x6000967C: lwc1        $f17, -0x3FE0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X3FE0);
    // 0x60009680: lwc1        $f16, -0x3FDC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3FDC);
    // 0x60009684: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60009688: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x6000968C: mul.d       $f4, $f6, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f16.d);
    // 0x60009690: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x60009694: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60009698: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x6000969C: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x600096A0: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x600096A4: lw          $a1, -0x3E88($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E88);
    // 0x600096A8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x600096AC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x600096B0: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x600096B4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x600096B8: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x600096BC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x600096C0: jal         0x60000F34
    // 0x600096C4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_391;
    // 0x600096C4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_391:
    // 0x600096C8: lw          $t3, 0x270($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X270);
    // 0x600096CC: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x600096D0: sra         $t8, $t3, 16
    ctx->r24 = S32(SIGNED(ctx->r11) >> 16);
    // 0x600096D4: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x600096D8: addu        $t4, $t7, $t6
    ctx->r12 = ADD32(ctx->r15, ctx->r14);
    // 0x600096DC: lw          $t5, 0xB8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XB8);
    // 0x600096E0: lui         $at, 0x4244
    ctx->r1 = S32(0X4244 << 16);
    // 0x600096E4: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x600096E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600096EC: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x600096F0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x600096F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600096F8: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x600096FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60009700: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60009704: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60009708: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x6000970C: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x60009710: sub.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x60009714: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60009718: div.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x6000971C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x60009720: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x60009724: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x60009728: nop

    // 0x6000972C: bne         $t9, $at, L_60009788
    if (ctx->r25 != ctx->r1) {
        // 0x60009730: lw          $t2, 0x270($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X270);
            goto L_60009788;
    }
    // 0x60009730: lw          $t2, 0x270($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X270);
    // 0x60009734: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x60009738: lui         $at, 0xC2D4
    ctx->r1 = S32(0XC2D4 << 16);
    // 0x6000973C: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x60009740: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60009744: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
    // 0x60009748: mul.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x6000974C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60009750: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60009754: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60009758: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x6000975C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60009760: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x60009764: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60009768: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000976C: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x60009770: lwc1        $f16, 0xEC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x60009774: div.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x60009778: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x6000977C: b           L_600097D8
    // 0x60009780: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
        goto L_600097D8;
    // 0x60009780: swc1        $f18, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f18.u32l;
    // 0x60009784: lw          $t2, 0x270($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X270);
L_60009788:
    // 0x60009788: lui         $at, 0xC24C
    ctx->r1 = S32(0XC24C << 16);
    // 0x6000978C: sra         $t1, $t2, 16
    ctx->r9 = S32(SIGNED(ctx->r10) >> 16);
    // 0x60009790: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x60009794: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60009798: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x6000979C: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
    // 0x600097A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600097A4: mul.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x600097A8: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x600097AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600097B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x600097B4: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x600097B8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600097BC: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x600097C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600097C4: sub.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x600097C8: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x600097CC: div.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x600097D0: add.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x600097D4: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
L_600097D8:
    // 0x600097D8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600097DC: lwc1        $f16, -0x3FD8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3FD8);
    // 0x600097E0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x600097E4: lwc1        $f4, 0xE8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x600097E8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600097EC: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x600097F0: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x600097F4: sub.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x600097F8: swc1        $f10, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f10.u32l;
    // 0x600097FC: jal         0x6000085C
    // 0x60009800: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    ovl_menu_battle_85C(rdram, ctx);
        goto after_392;
    // 0x60009800: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    after_392:
    // 0x60009804: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x60009808: nop

    // 0x6000980C: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x60009810: slti        $at, $t3, 0x2D
    ctx->r1 = SIGNED(ctx->r11) < 0X2D ? 1 : 0;
    // 0x60009814: bne         $at, $zero, L_60009630
    if (ctx->r1 != 0) {
        // 0x60009818: sw          $t3, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r11;
            goto L_60009630;
    }
    // 0x60009818: sw          $t3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r11;
    // 0x6000981C: jal         0x60000244
    // 0x60009820: addiu       $a0, $zero, 0x362
    ctx->r4 = ADD32(0, 0X362);
    ovl_menu_battle_244(rdram, ctx);
        goto after_393;
    // 0x60009820: addiu       $a0, $zero, 0x362
    ctx->r4 = ADD32(0, 0X362);
    after_393:
    // 0x60009824: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60009828: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x6000982C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60009830: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x60009834: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60009838: lw          $a1, -0x3E88($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E88);
    // 0x6000983C: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x60009840: mfc1        $a2, $f17
    ctx->r6 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x60009844: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x60009848: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x6000984C: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x60009850: swc1        $f7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x60009854: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x60009858: swc1        $f9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x6000985C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60009860: jal         0x60000F34
    // 0x60009864: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_394;
    // 0x60009864: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_394:
    // 0x60009868: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x6000986C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60009870: lw          $t4, 0x0($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X0);
    // 0x60009874: nop

    // 0x60009878: bne         $t4, $at, L_60009924
    if (ctx->r12 != ctx->r1) {
        // 0x6000987C: nop
    
            goto L_60009924;
    }
    // 0x6000987C: nop

    // 0x60009880: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60009884:
    // 0x60009884: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x60009888: lw          $t5, 0x248($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X248);
    // 0x6000988C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x60009890: addu        $t8, $t5, $t9
    ctx->r24 = ADD32(ctx->r13, ctx->r25);
    // 0x60009894: lw          $t2, 0x4($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X4);
    // 0x60009898: nop

    // 0x6000989C: beq         $t2, $zero, L_60009908
    if (ctx->r10 == 0) {
        // 0x600098A0: lw          $t7, 0x108($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X108);
            goto L_60009908;
    }
    // 0x600098A0: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
    // 0x600098A4: lw          $t0, 0x270($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X270);
    // 0x600098A8: lw          $t1, 0x94($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X94);
    // 0x600098AC: sra         $t3, $t0, 16
    ctx->r11 = S32(SIGNED(ctx->r8) >> 16);
    // 0x600098B0: bne         $t1, $t3, L_600098DC
    if (ctx->r9 != ctx->r11) {
        // 0x600098B4: lui         $a2, 0x6001
        ctx->r6 = S32(0X6001 << 16);
            goto L_600098DC;
    }
    // 0x600098B4: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600098B8: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x600098BC: lw          $a2, -0x3FB8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3FB8);
    // 0x600098C0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600098C4: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x600098C8: addiu       $a3, $zero, 0x557
    ctx->r7 = ADD32(0, 0X557);
    // 0x600098CC: jal         0x60000F34
    // 0x600098D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_395;
    // 0x600098D0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_395:
    // 0x600098D4: b           L_60009908
    // 0x600098D8: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
        goto L_60009908;
    // 0x600098D8: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
L_600098DC:
    // 0x600098DC: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x600098E0: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600098E4: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x600098E8: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x600098EC: lw          $a2, -0x3FB8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3FB8);
    // 0x600098F0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600098F4: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x600098F8: addiu       $a3, $zero, 0x552
    ctx->r7 = ADD32(0, 0X552);
    // 0x600098FC: jal         0x60000F34
    // 0x60009900: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_396;
    // 0x60009900: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_396:
    // 0x60009904: lw          $t7, 0x108($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X108);
L_60009908:
    // 0x60009908: nop

    // 0x6000990C: addiu       $t5, $t7, 0x1
    ctx->r13 = ADD32(ctx->r15, 0X1);
    // 0x60009910: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x60009914: bne         $at, $zero, L_60009884
    if (ctx->r1 != 0) {
        // 0x60009918: sw          $t5, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r13;
            goto L_60009884;
    }
    // 0x60009918: sw          $t5, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r13;
    // 0x6000991C: b           L_600099C0
    // 0x60009920: nop

        goto L_600099C0;
    // 0x60009920: nop

L_60009924:
    // 0x60009924: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60009928:
    // 0x60009928: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x6000992C: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x60009930: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x60009934: addu        $t1, $t2, $t0
    ctx->r9 = ADD32(ctx->r10, ctx->r8);
    // 0x60009938: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x6000993C: nop

    // 0x60009940: beq         $t3, $zero, L_600099AC
    if (ctx->r11 == 0) {
        // 0x60009944: lw          $t5, 0x108($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X108);
            goto L_600099AC;
    }
    // 0x60009944: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x60009948: lw          $t9, 0x270($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X270);
    // 0x6000994C: nop

    // 0x60009950: sra         $t6, $t9, 16
    ctx->r14 = S32(SIGNED(ctx->r25) >> 16);
    // 0x60009954: bne         $t6, $t8, L_60009980
    if (ctx->r14 != ctx->r24) {
        // 0x60009958: lui         $a2, 0x6001
        ctx->r6 = S32(0X6001 << 16);
            goto L_60009980;
    }
    // 0x60009958: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x6000995C: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x60009960: lw          $a2, -0x3FB8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3FB8);
    // 0x60009964: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60009968: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x6000996C: addiu       $a3, $zero, 0x557
    ctx->r7 = ADD32(0, 0X557);
    // 0x60009970: jal         0x60000F34
    // 0x60009974: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_397;
    // 0x60009974: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_397:
    // 0x60009978: b           L_600099AC
    // 0x6000997C: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
        goto L_600099AC;
    // 0x6000997C: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
L_60009980:
    // 0x60009980: lw          $t4, 0x108($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X108);
    // 0x60009984: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x60009988: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x6000998C: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x60009990: lw          $a2, -0x3FB8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3FB8);
    // 0x60009994: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60009998: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x6000999C: addiu       $a3, $zero, 0x552
    ctx->r7 = ADD32(0, 0X552);
    // 0x600099A0: jal         0x60000F34
    // 0x600099A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_398;
    // 0x600099A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_398:
    // 0x600099A8: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
L_600099AC:
    // 0x600099AC: nop

    // 0x600099B0: addiu       $t2, $t5, 0x1
    ctx->r10 = ADD32(ctx->r13, 0X1);
    // 0x600099B4: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x600099B8: bne         $at, $zero, L_60009928
    if (ctx->r1 != 0) {
        // 0x600099BC: sw          $t2, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r10;
            goto L_60009928;
    }
    // 0x600099BC: sw          $t2, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r10;
L_600099C0:
    // 0x600099C0: jal         0x600022AC
    // 0x600099C4: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_399;
    // 0x600099C4: nop

    after_399:
    // 0x600099C8: bne         $v0, $zero, L_600099E0
    if (ctx->r2 != 0) {
        // 0x600099CC: sw          $v0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r2;
            goto L_600099E0;
    }
    // 0x600099CC: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    // 0x600099D0: jal         0x6000085C
    // 0x600099D4: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_400;
    // 0x600099D4: nop

    after_400:
    // 0x600099D8: b           L_600099C0
    // 0x600099DC: nop

        goto L_600099C0;
    // 0x600099DC: nop

L_600099E0:
    // 0x600099E0: jal         0x60000268
    // 0x600099E4: nop

    ovl_menu_battle_268(rdram, ctx);
        goto after_401;
    // 0x600099E4: nop

    after_401:
    // 0x600099E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600099EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600099F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600099F4: jal         0x60000238
    // 0x600099F8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_238(rdram, ctx);
        goto after_402;
    // 0x600099F8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_402:
    // 0x600099FC: jal         0x60000208
    // 0x60009A00: nop

    ovl_menu_battle_208(rdram, ctx);
        goto after_403;
    // 0x60009A00: nop

    after_403:
    // 0x60009A04: lw          $a0, 0x268($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X268);
    // 0x60009A08: jal         0x60000550
    // 0x60009A0C: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_404;
    // 0x60009A0C: nop

    after_404:
    // 0x60009A10: lw          $a0, 0x260($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X260);
    // 0x60009A14: jal         0x60000550
    // 0x60009A18: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_405;
    // 0x60009A18: nop

    after_405:
    // 0x60009A1C: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x60009A20: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60009A24: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x60009A28: nop

    // 0x60009A2C: beq         $t9, $at, L_60009A4C
    if (ctx->r25 == ctx->r1) {
        // 0x60009A30: nop
    
            goto L_60009A4C;
    }
    // 0x60009A30: nop

    // 0x60009A34: lw          $a0, 0x264($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X264);
    // 0x60009A38: jal         0x60000550
    // 0x60009A3C: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_406;
    // 0x60009A3C: nop

    after_406:
    // 0x60009A40: lw          $a0, 0x25C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X25C);
    // 0x60009A44: jal         0x60000550
    // 0x60009A48: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_407;
    // 0x60009A48: nop

    after_407:
L_60009A4C:
    // 0x60009A4C: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60009A50:
    // 0x60009A50: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x60009A54: jal         0x60002040
    // 0x60009A58: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_408;
    // 0x60009A58: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_408:
    // 0x60009A5C: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_60009A60:
    // 0x60009A60: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x60009A64: lw          $t0, 0x108($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X108);
    // 0x60009A68: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x60009A6C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x60009A70: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60009A74: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60009A78: sll         $t4, $t0, 2
    ctx->r12 = S32(ctx->r8 << 2);
    // 0x60009A7C: addu        $t7, $t8, $t4
    ctx->r15 = ADD32(ctx->r24, ctx->r12);
    // 0x60009A80: addiu       $t5, $t5, -0x3E80
    ctx->r13 = ADD32(ctx->r13, -0X3E80);
    // 0x60009A84: addu        $t2, $t7, $t5
    ctx->r10 = ADD32(ctx->r15, ctx->r13);
    // 0x60009A88: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x60009A8C: nop

    // 0x60009A90: beq         $t1, $zero, L_60009AAC
    if (ctx->r9 == 0) {
        // 0x60009A94: addu        $t3, $t8, $t4
        ctx->r11 = ADD32(ctx->r24, ctx->r12);
            goto L_60009AAC;
    }
    // 0x60009A94: addu        $t3, $t8, $t4
    ctx->r11 = ADD32(ctx->r24, ctx->r12);
    // 0x60009A98: addu        $t9, $t3, $t5
    ctx->r25 = ADD32(ctx->r11, ctx->r13);
    // 0x60009A9C: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x60009AA0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60009AA4: jal         0x60000F34
    // 0x60009AA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_409;
    // 0x60009AA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_409:
L_60009AAC:
    // 0x60009AAC: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x60009AB0: nop

    // 0x60009AB4: addiu       $t0, $t6, 0x1
    ctx->r8 = ADD32(ctx->r14, 0X1);
    // 0x60009AB8: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x60009ABC: bne         $at, $zero, L_60009A60
    if (ctx->r1 != 0) {
        // 0x60009AC0: sw          $t0, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r8;
            goto L_60009A60;
    }
    // 0x60009AC0: sw          $t0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r8;
    // 0x60009AC4: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x60009AC8: nop

    // 0x60009ACC: addiu       $t2, $t7, 0x1
    ctx->r10 = ADD32(ctx->r15, 0X1);
    // 0x60009AD0: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x60009AD4: bne         $at, $zero, L_60009A50
    if (ctx->r1 != 0) {
        // 0x60009AD8: sw          $t2, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r10;
            goto L_60009A50;
    }
    // 0x60009AD8: sw          $t2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r10;
    // 0x60009ADC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60009AE0: lw          $a0, -0x3E84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E84);
    // 0x60009AE4: jal         0x60000DA8
    // 0x60009AE8: nop

    ovl_menu_battle_DA8(rdram, ctx);
        goto after_410;
    // 0x60009AE8: nop

    after_410:
    // 0x60009AEC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60009AF0: addiu       $a0, $a0, -0x4510
    ctx->r4 = ADD32(ctx->r4, -0X4510);
    // 0x60009AF4: jal         0x60001BEC
    // 0x60009AF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_menu_battle_1BEC(rdram, ctx);
        goto after_411;
    // 0x60009AF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_411:
    // 0x60009AFC: b           L_6000AD54
    // 0x60009B00: nop

        goto L_6000AD54;
    // 0x60009B00: nop

L_60009B04:
    // 0x60009B04: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60009B08: sw          $zero, 0x24C($sp)
    MEM_W(0X24C, ctx->r29) = 0;
    // 0x60009B0C: addiu       $a0, $a0, 0x3778
    ctx->r4 = ADD32(ctx->r4, 0X3778);
    // 0x60009B10: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60009B14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60009B18: jal         0x60000994
    // 0x60009B1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_994(rdram, ctx);
        goto after_412;
    // 0x60009B1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_412:
    // 0x60009B20: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009B24: sw          $v0, -0x3E08($at)
    MEM_W(-0X3E08, ctx->r1) = ctx->r2;
    // 0x60009B28: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_60009B2C:
    // 0x60009B2C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60009B30: addiu       $a0, $a0, 0x344C
    ctx->r4 = ADD32(ctx->r4, 0X344C);
    // 0x60009B34: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60009B38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60009B3C: jal         0x60000994
    // 0x60009B40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_994(rdram, ctx);
        goto after_413;
    // 0x60009B40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_413:
    // 0x60009B44: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x60009B48: nop

    // 0x60009B4C: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x60009B50: slti        $at, $t8, 0x14
    ctx->r1 = SIGNED(ctx->r24) < 0X14 ? 1 : 0;
    // 0x60009B54: bne         $at, $zero, L_60009B2C
    if (ctx->r1 != 0) {
        // 0x60009B58: sw          $t8, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r24;
            goto L_60009B2C;
    }
    // 0x60009B58: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
    // 0x60009B5C: jal         0x600000E8
    // 0x60009B60: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    ovl_menu_battle_E8(rdram, ctx);
        goto after_414;
    // 0x60009B60: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_414:
    // 0x60009B64: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009B68: sw          $v0, -0x3E0C($at)
    MEM_W(-0X3E0C, ctx->r1) = ctx->r2;
    // 0x60009B6C: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x60009B70: lw          $t3, -0x3E0C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3E0C);
    // 0x60009B74: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x60009B78: addiu       $t4, $t4, -0x42B0
    ctx->r12 = ADD32(ctx->r12, -0X42B0);
    // 0x60009B7C: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x60009B80: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x60009B84: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
L_60009B88:
    // 0x60009B88: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x60009B8C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x60009B90: lbu         $t9, 0x0($t5)
    ctx->r25 = MEM_BU(ctx->r13, 0X0);
    // 0x60009B94: nop

    // 0x60009B98: sb          $t9, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r25;
    // 0x60009B9C: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x60009BA0: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x60009BA4: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x60009BA8: addiu       $t4, $t8, 0x1
    ctx->r12 = ADD32(ctx->r24, 0X1);
    // 0x60009BAC: sltiu       $at, $t4, 0x40
    ctx->r1 = ctx->r12 < 0X40 ? 1 : 0;
    // 0x60009BB0: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x60009BB4: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x60009BB8: sw          $t4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r12;
    // 0x60009BBC: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x60009BC0: bne         $at, $zero, L_60009B88
    if (ctx->r1 != 0) {
        // 0x60009BC4: sw          $t1, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r9;
            goto L_60009B88;
    }
    // 0x60009BC4: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x60009BC8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60009BCC: lw          $a0, -0x3E0C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E0C);
    // 0x60009BD0: jal         0x60000034
    // 0x60009BD4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    ovl_menu_battle_34(rdram, ctx);
        goto after_415;
    // 0x60009BD4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_415:
    // 0x60009BD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60009BDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60009BE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60009BE4: jal         0x60000220
    // 0x60009BE8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_220(rdram, ctx);
        goto after_416;
    // 0x60009BE8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_416:
    // 0x60009BEC: lw          $t3, 0x120($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X120);
    // 0x60009BF0: nop

    // 0x60009BF4: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x60009BF8: nop

    // 0x60009BFC: andi        $t9, $t5, 0x8000
    ctx->r25 = ctx->r13 & 0X8000;
    // 0x60009C00: beq         $t9, $zero, L_60009D48
    if (ctx->r25 == 0) {
        // 0x60009C04: nop
    
            goto L_60009D48;
    }
    // 0x60009C04: nop

    // 0x60009C08: lw          $t6, 0x270($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X270);
    // 0x60009C0C: nop

    // 0x60009C10: sra         $t0, $t6, 16
    ctx->r8 = S32(SIGNED(ctx->r14) >> 16);
    // 0x60009C14: bne         $t0, $zero, L_60009D40
    if (ctx->r8 != 0) {
        // 0x60009C18: lw          $t7, 0x248($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X248);
            goto L_60009D40;
    }
    // 0x60009C18: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x60009C1C: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x60009C20: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x60009C24: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x60009C28: nop

    // 0x60009C2C: addu        $t8, $t7, $t1
    ctx->r24 = ADD32(ctx->r15, ctx->r9);
    // 0x60009C30: lbu         $t4, 0x4($t8)
    ctx->r12 = MEM_BU(ctx->r24, 0X4);
    // 0x60009C34: nop

    // 0x60009C38: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x60009C3C: beq         $at, $zero, L_60009D3C
    if (ctx->r1 == 0) {
        // 0x60009C40: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_60009D3C;
    }
    // 0x60009C40: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x60009C44: sw          $t3, 0x24C($sp)
    MEM_W(0X24C, ctx->r29) = ctx->r11;
    // 0x60009C48: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x60009C4C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x60009C50: addu        $t9, $t7, $t5
    ctx->r25 = ADD32(ctx->r15, ctx->r13);
    // 0x60009C54: lbu         $t6, 0x4($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X4);
    // 0x60009C58: nop

    // 0x60009C5C: addiu       $t0, $t6, 0x1
    ctx->r8 = ADD32(ctx->r14, 0X1);
    // 0x60009C60: sb          $t0, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r8;
    // 0x60009C64: lw          $t8, 0x248($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X248);
    // 0x60009C68: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x60009C6C: lw          $t4, 0x0($t8)
    ctx->r12 = MEM_W(ctx->r24, 0X0);
    // 0x60009C70: nop

    // 0x60009C74: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x60009C78: lbu         $t2, 0x4($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0X4);
    // 0x60009C7C: nop

    // 0x60009C80: bne         $t2, $at, L_60009CE8
    if (ctx->r10 != ctx->r1) {
        // 0x60009C84: lw          $t6, 0x248($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X248);
            goto L_60009CE8;
    }
    // 0x60009C84: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x60009C88: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
    // 0x60009C8C: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
L_60009C90:
    // 0x60009C90: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x60009C94: lw          $t5, 0x108($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X108);
    // 0x60009C98: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x60009C9C: addu        $t6, $t7, $t5
    ctx->r14 = ADD32(ctx->r15, ctx->r13);
    // 0x60009CA0: lbu         $t0, 0x4($t6)
    ctx->r8 = MEM_BU(ctx->r14, 0X4);
    // 0x60009CA4: lw          $t9, 0x104($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X104);
    // 0x60009CA8: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x60009CAC: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x60009CB0: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x60009CB4: sw          $t4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r12;
    // 0x60009CB8: bne         $at, $zero, L_60009C90
    if (ctx->r1 != 0) {
        // 0x60009CBC: sw          $t8, 0x104($sp)
        MEM_W(0X104, ctx->r29) = ctx->r24;
            goto L_60009C90;
    }
    // 0x60009CBC: sw          $t8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r24;
    // 0x60009CC0: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x60009CC4: bne         $t8, $at, L_60009CE8
    if (ctx->r24 != ctx->r1) {
        // 0x60009CC8: lw          $t6, 0x248($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X248);
            goto L_60009CE8;
    }
    // 0x60009CC8: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x60009CCC: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x60009CD0: nop

    // 0x60009CD4: lbu         $t7, 0x3($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X3);
    // 0x60009CD8: nop

    // 0x60009CDC: ori         $t5, $t7, 0x2
    ctx->r13 = ctx->r15 | 0X2;
    // 0x60009CE0: sb          $t5, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r13;
    // 0x60009CE4: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
L_60009CE8:
    // 0x60009CE8: nop

    // 0x60009CEC: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x60009CF0: nop

    // 0x60009CF4: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x60009CF8: beq         $at, $zero, L_60009D2C
    if (ctx->r1 == 0) {
        // 0x60009CFC: nop
    
            goto L_60009D2C;
    }
    // 0x60009CFC: nop

    // 0x60009D00: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x60009D04: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60009D08: addu        $t8, $t0, $t9
    ctx->r24 = ADD32(ctx->r8, ctx->r25);
    // 0x60009D0C: lbu         $t1, 0x4($t8)
    ctx->r9 = MEM_BU(ctx->r24, 0X4);
    // 0x60009D10: nop

    // 0x60009D14: bne         $t1, $at, L_60009D2C
    if (ctx->r9 != ctx->r1) {
        // 0x60009D18: nop
    
            goto L_60009D2C;
    }
    // 0x60009D18: nop

    // 0x60009D1C: lw          $t4, 0x24C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24C);
    // 0x60009D20: nop

    // 0x60009D24: ori         $t3, $t4, 0x2
    ctx->r11 = ctx->r12 | 0X2;
    // 0x60009D28: sw          $t3, 0x24C($sp)
    MEM_W(0X24C, ctx->r29) = ctx->r11;
L_60009D2C:
    // 0x60009D2C: jal         0x60000B38
    // 0x60009D30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_menu_battle_B38(rdram, ctx);
        goto after_417;
    // 0x60009D30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_417:
    // 0x60009D34: jal         0x60000B5C
    // 0x60009D38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_menu_battle_B5C(rdram, ctx);
        goto after_418;
    // 0x60009D38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_418:
L_60009D3C:
    // 0x60009D3C: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
L_60009D40:
    // 0x60009D40: nop

    // 0x60009D44: sw          $zero, 0x24($t7)
    MEM_W(0X24, ctx->r15) = 0;
L_60009D48:
    // 0x60009D48: jal         0x6000025C
    // 0x60009D4C: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    ovl_menu_battle_25C(rdram, ctx);
        goto after_419;
    // 0x60009D4C: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_419:
    // 0x60009D50: lui         $at, 0xC316
    ctx->r1 = S32(0XC316 << 16);
    // 0x60009D54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60009D58: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x60009D5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60009D60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60009D64: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60009D68: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60009D6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60009D70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60009D74: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60009D78: swc1        $f4, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f4.u32l;
    // 0x60009D7C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60009D80: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x60009D84: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    // 0x60009D88: swc1        $f16, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f16.u32l;
    // 0x60009D8C: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x60009D90: swc1        $f18, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f18.u32l;
    // 0x60009D94: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x60009D98: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x60009D9C: swc1        $f6, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f6.u32l;
    // 0x60009DA0: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x60009DA4: jal         0x60000E8C
    // 0x60009DA8: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    ovl_menu_battle_E8C(rdram, ctx);
        goto after_420;
    // 0x60009DA8: swc1        $f4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f4.u32l;
    after_420:
    // 0x60009DAC: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x60009DB0: addiu       $a1, $sp, 0xB8
    ctx->r5 = ADD32(ctx->r29, 0XB8);
    // 0x60009DB4: addiu       $a2, $sp, 0xAC
    ctx->r6 = ADD32(ctx->r29, 0XAC);
    // 0x60009DB8: jal         0x60000DB4
    // 0x60009DBC: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    ovl_menu_battle_DB4(rdram, ctx);
        goto after_421;
    // 0x60009DBC: addiu       $a3, $sp, 0xA0
    ctx->r7 = ADD32(ctx->r29, 0XA0);
    after_421:
    // 0x60009DC0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009DC4: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60009DC8: sw          $v0, -0x3E84($at)
    MEM_W(-0X3E84, ctx->r1) = ctx->r2;
    // 0x60009DCC: addiu       $a1, $a1, -0x3FA8
    ctx->r5 = ADD32(ctx->r5, -0X3FA8);
    // 0x60009DD0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60009DD4: addiu       $a2, $zero, 0x98A
    ctx->r6 = ADD32(0, 0X98A);
    // 0x60009DD8: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x60009DDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60009DE0: jal         0x60000F34
    // 0x60009DE4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_422;
    // 0x60009DE4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_422:
    // 0x60009DE8: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x60009DEC: addiu       $t5, $t5, -0x3FA8
    ctx->r13 = ADD32(ctx->r13, -0X3FA8);
    // 0x60009DF0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60009DF4: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x60009DF8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60009DFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60009E00: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x60009E04: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x60009E08: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x60009E0C: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x60009E10: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x60009E14: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x60009E18: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x60009E1C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x60009E20: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x60009E24: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x60009E28: jal         0x60000F34
    // 0x60009E2C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_423;
    // 0x60009E2C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_423:
    // 0x60009E30: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60009E34: addiu       $a1, $a1, -0x3FA8
    ctx->r5 = ADD32(ctx->r5, -0X3FA8);
    // 0x60009E38: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x60009E3C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60009E40: addiu       $a2, $zero, 0x989
    ctx->r6 = ADD32(0, 0X989);
    // 0x60009E44: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x60009E48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60009E4C: jal         0x60000F34
    // 0x60009E50: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_424;
    // 0x60009E50: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_424:
    // 0x60009E54: lui         $t2, 0x6001
    ctx->r10 = S32(0X6001 << 16);
    // 0x60009E58: addiu       $t2, $t2, -0x3FA8
    ctx->r10 = ADD32(ctx->r10, -0X3FA8);
    // 0x60009E5C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60009E60: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    // 0x60009E64: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60009E68: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60009E6C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60009E70: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x60009E74: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x60009E78: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x60009E7C: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x60009E80: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x60009E84: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x60009E88: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x60009E8C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x60009E90: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x60009E94: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x60009E98: jal         0x60000F34
    // 0x60009E9C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_425;
    // 0x60009E9C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_425:
    // 0x60009EA0: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60009EA4: addiu       $a1, $a1, -0x3FA8
    ctx->r5 = ADD32(ctx->r5, -0X3FA8);
    // 0x60009EA8: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x60009EAC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60009EB0: addiu       $a2, $zero, 0x988
    ctx->r6 = ADD32(0, 0X988);
    // 0x60009EB4: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x60009EB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60009EBC: jal         0x60000F34
    // 0x60009EC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_426;
    // 0x60009EC0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_426:
    // 0x60009EC4: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x60009EC8: addiu       $t6, $t6, -0x3FA8
    ctx->r14 = ADD32(ctx->r14, -0X3FA8);
    // 0x60009ECC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009ED0: lwc1        $f8, -0x3FD4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X3FD4);
    // 0x60009ED4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60009ED8: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x60009EDC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60009EE0: lwc1        $f6, -0x3FD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3FD0);
    // 0x60009EE4: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x60009EE8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x60009EEC: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x60009EF0: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x60009EF4: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x60009EF8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x60009EFC: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x60009F00: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x60009F04: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x60009F08: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x60009F0C: jal         0x60000F34
    // 0x60009F10: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_427;
    // 0x60009F10: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_427:
    // 0x60009F14: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x60009F18: addiu       $t0, $t0, -0x3FA8
    ctx->r8 = ADD32(ctx->r8, -0X3FA8);
    // 0x60009F1C: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x60009F20: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60009F24: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60009F28: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x60009F2C: jal         0x60000F34
    // 0x60009F30: addiu       $a3, $zero, 0x981
    ctx->r7 = ADD32(0, 0X981);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_428;
    // 0x60009F30: addiu       $a3, $zero, 0x981
    ctx->r7 = ADD32(0, 0X981);
    after_428:
    // 0x60009F34: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x60009F38: addiu       $t9, $t9, -0x3FA8
    ctx->r25 = ADD32(ctx->r25, -0X3FA8);
    // 0x60009F3C: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x60009F40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60009F44: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60009F48: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x60009F4C: jal         0x60000F34
    // 0x60009F50: addiu       $a3, $zero, 0x982
    ctx->r7 = ADD32(0, 0X982);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_429;
    // 0x60009F50: addiu       $a3, $zero, 0x982
    ctx->r7 = ADD32(0, 0X982);
    after_429:
    // 0x60009F54: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x60009F58: addiu       $t8, $t8, -0x3FA8
    ctx->r24 = ADD32(ctx->r24, -0X3FA8);
    // 0x60009F5C: lw          $a2, 0x8($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X8);
    // 0x60009F60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60009F64: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60009F68: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x60009F6C: jal         0x60000F34
    // 0x60009F70: addiu       $a3, $zero, 0x983
    ctx->r7 = ADD32(0, 0X983);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_430;
    // 0x60009F70: addiu       $a3, $zero, 0x983
    ctx->r7 = ADD32(0, 0X983);
    after_430:
    // 0x60009F74: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60009F78: addiu       $a1, $a1, -0x3FA8
    ctx->r5 = ADD32(ctx->r5, -0X3FA8);
    // 0x60009F7C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x60009F80: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60009F84: addiu       $a2, $zero, 0x987
    ctx->r6 = ADD32(0, 0X987);
    // 0x60009F88: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x60009F8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x60009F90: jal         0x60000F34
    // 0x60009F94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_431;
    // 0x60009F94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_431:
    // 0x60009F98: lui         $t1, 0x6001
    ctx->r9 = S32(0X6001 << 16);
    // 0x60009F9C: addiu       $t1, $t1, -0x3FA8
    ctx->r9 = ADD32(ctx->r9, -0X3FA8);
    // 0x60009FA0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60009FA4: lw          $a1, 0xC($t1)
    ctx->r5 = MEM_W(ctx->r9, 0XC);
    // 0x60009FA8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60009FAC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60009FB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60009FB4: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x60009FB8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x60009FBC: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x60009FC0: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x60009FC4: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x60009FC8: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x60009FCC: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x60009FD0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x60009FD4: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x60009FD8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x60009FDC: jal         0x60000F34
    // 0x60009FE0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_432;
    // 0x60009FE0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_432:
    // 0x60009FE4: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60009FE8: addiu       $a1, $a1, -0x3FA8
    ctx->r5 = ADD32(ctx->r5, -0X3FA8);
    // 0x60009FEC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x60009FF0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60009FF4: addiu       $a2, $zero, 0x987
    ctx->r6 = ADD32(0, 0X987);
    // 0x60009FF8: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x60009FFC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x6000A000: jal         0x60000F34
    // 0x6000A004: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_433;
    // 0x6000A004: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_433:
    // 0x6000A008: lui         $t4, 0x6001
    ctx->r12 = S32(0X6001 << 16);
    // 0x6000A00C: addiu       $t4, $t4, -0x3FA8
    ctx->r12 = ADD32(ctx->r12, -0X3FA8);
    // 0x6000A010: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x6000A014: lw          $a1, 0x10($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X10);
    // 0x6000A018: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x6000A01C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x6000A020: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x6000A024: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x6000A028: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x6000A02C: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x6000A030: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x6000A034: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x6000A038: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x6000A03C: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x6000A040: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x6000A044: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x6000A048: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x6000A04C: jal         0x60000F34
    // 0x6000A050: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_434;
    // 0x6000A050: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_434:
    // 0x6000A054: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000A058: addiu       $a0, $a0, 0x2978
    ctx->r4 = ADD32(ctx->r4, 0X2978);
    // 0x6000A05C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000A060: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000A064: jal         0x60000994
    // 0x6000A068: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_994(rdram, ctx);
        goto after_435;
    // 0x6000A068: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_435:
    // 0x6000A06C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000A070: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000A074: sw          $v0, -0x3F94($at)
    MEM_W(-0X3F94, ctx->r1) = ctx->r2;
    // 0x6000A078: addiu       $a0, $a0, 0x2AB0
    ctx->r4 = ADD32(ctx->r4, 0X2AB0);
    // 0x6000A07C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000A080: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000A084: jal         0x60000994
    // 0x6000A088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_994(rdram, ctx);
        goto after_436;
    // 0x6000A088: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_436:
    // 0x6000A08C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000A090: sw          $v0, -0x3F90($at)
    MEM_W(-0X3F90, ctx->r1) = ctx->r2;
    // 0x6000A094: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000A098:
    // 0x6000A098: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A09C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000A0A0: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x6000A0A4: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A0A8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x6000A0AC: sw          $zero, -0x3FB8($at)
    MEM_W(-0X3FB8, ctx->r1) = 0;
    // 0x6000A0B0: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000A0B4: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x6000A0B8: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x6000A0BC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x6000A0C0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x6000A0C4: sw          $t5, -0x3E30($at)
    MEM_W(-0X3E30, ctx->r1) = ctx->r13;
    // 0x6000A0C8: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x6000A0CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x6000A0D0: bne         $t9, $at, L_6000A16C
    if (ctx->r25 != ctx->r1) {
        // 0x6000A0D4: nop
    
            goto L_6000A16C;
    }
    // 0x6000A0D4: nop

    // 0x6000A0D8: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A0DC: lw          $t7, 0x270($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X270);
    // 0x6000A0E0: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x6000A0E4: addu        $t4, $t0, $t1
    ctx->r12 = ADD32(ctx->r8, ctx->r9);
    // 0x6000A0E8: lw          $t3, 0x94($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X94);
    // 0x6000A0EC: sra         $t2, $t7, 16
    ctx->r10 = S32(SIGNED(ctx->r15) >> 16);
    // 0x6000A0F0: bne         $t3, $t2, L_6000A1FC
    if (ctx->r11 != ctx->r10) {
        // 0x6000A0F4: lw          $t0, 0x11C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X11C);
            goto L_6000A1FC;
    }
    // 0x6000A0F4: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A0F8: lw          $s0, 0x4($t4)
    ctx->r16 = MEM_W(ctx->r12, 0X4);
    // 0x6000A0FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000A100: beq         $s0, $at, L_6000A120
    if (ctx->r16 == ctx->r1) {
        // 0x6000A104: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_6000A120;
    }
    // 0x6000A104: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x6000A108: beq         $s0, $at, L_6000A134
    if (ctx->r16 == ctx->r1) {
        // 0x6000A10C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_6000A134;
    }
    // 0x6000A10C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000A110: beq         $s0, $at, L_6000A138
    if (ctx->r16 == ctx->r1) {
        // 0x6000A114: lw          $a0, 0x11C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X11C);
            goto L_6000A138;
    }
    // 0x6000A114: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A118: b           L_6000A15C
    // 0x6000A11C: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
        goto L_6000A15C;
    // 0x6000A11C: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_6000A120:
    // 0x6000A120: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A124: jal         0x60002040
    // 0x6000A128: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_437;
    // 0x6000A128: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    after_437:
    // 0x6000A12C: b           L_6000A1FC
    // 0x6000A130: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
        goto L_6000A1FC;
    // 0x6000A130: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
L_6000A134:
    // 0x6000A134: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_6000A138:
    // 0x6000A138: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x6000A13C: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x6000A140: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x6000A144: lw          $a1, 0x14($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X14);
    // 0x6000A148: jal         0x60002040
    // 0x6000A14C: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_438;
    // 0x6000A14C: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    after_438:
    // 0x6000A150: b           L_6000A1FC
    // 0x6000A154: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
        goto L_6000A1FC;
    // 0x6000A154: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A158: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_6000A15C:
    // 0x6000A15C: jal         0x60002040
    // 0x6000A160: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_439;
    // 0x6000A160: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_439:
    // 0x6000A164: b           L_6000A1FC
    // 0x6000A168: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
        goto L_6000A1FC;
    // 0x6000A168: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
L_6000A16C:
    // 0x6000A16C: lw          $t0, 0x270($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X270);
    // 0x6000A170: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A174: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x6000A178: bne         $t1, $t7, L_6000A1FC
    if (ctx->r9 != ctx->r15) {
        // 0x6000A17C: lw          $t0, 0x11C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X11C);
            goto L_6000A1FC;
    }
    // 0x6000A17C: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A180: lw          $t3, 0x248($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X248);
    // 0x6000A184: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x6000A188: addu        $t4, $t3, $t2
    ctx->r12 = ADD32(ctx->r11, ctx->r10);
    // 0x6000A18C: lw          $s0, 0x4($t4)
    ctx->r16 = MEM_W(ctx->r12, 0X4);
    // 0x6000A190: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000A194: beq         $s0, $at, L_6000A1B4
    if (ctx->r16 == ctx->r1) {
        // 0x6000A198: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_6000A1B4;
    }
    // 0x6000A198: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x6000A19C: beq         $s0, $at, L_6000A1C8
    if (ctx->r16 == ctx->r1) {
        // 0x6000A1A0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_6000A1C8;
    }
    // 0x6000A1A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000A1A4: beq         $s0, $at, L_6000A1CC
    if (ctx->r16 == ctx->r1) {
        // 0x6000A1A8: lw          $a0, 0x11C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X11C);
            goto L_6000A1CC;
    }
    // 0x6000A1A8: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A1AC: b           L_6000A1F0
    // 0x6000A1B0: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
        goto L_6000A1F0;
    // 0x6000A1B0: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_6000A1B4:
    // 0x6000A1B4: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A1B8: jal         0x60002040
    // 0x6000A1BC: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_440;
    // 0x6000A1BC: addiu       $a1, $zero, 0x542
    ctx->r5 = ADD32(0, 0X542);
    after_440:
    // 0x6000A1C0: b           L_6000A1FC
    // 0x6000A1C4: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
        goto L_6000A1FC;
    // 0x6000A1C4: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
L_6000A1C8:
    // 0x6000A1C8: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_6000A1CC:
    // 0x6000A1CC: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x6000A1D0: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x6000A1D4: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x6000A1D8: lw          $a1, 0x14($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X14);
    // 0x6000A1DC: jal         0x60002040
    // 0x6000A1E0: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_441;
    // 0x6000A1E0: addiu       $a1, $a1, 0x5EB
    ctx->r5 = ADD32(ctx->r5, 0X5EB);
    after_441:
    // 0x6000A1E4: b           L_6000A1FC
    // 0x6000A1E8: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
        goto L_6000A1FC;
    // 0x6000A1E8: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A1EC: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
L_6000A1F0:
    // 0x6000A1F0: jal         0x60002040
    // 0x6000A1F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_442;
    // 0x6000A1F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_442:
    // 0x6000A1F8: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
L_6000A1FC:
    // 0x6000A1FC: nop

    // 0x6000A200: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x6000A204: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x6000A208: bne         $at, $zero, L_6000A098
    if (ctx->r1 != 0) {
        // 0x6000A20C: sw          $t1, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r9;
            goto L_6000A098;
    }
    // 0x6000A20C: sw          $t1, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r9;
    // 0x6000A210: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x6000A214: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x6000A218: lw          $t3, 0x0($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X0);
    // 0x6000A21C: nop

    // 0x6000A220: bne         $t3, $at, L_6000A5AC
    if (ctx->r11 != ctx->r1) {
        // 0x6000A224: lw          $t1, 0x270($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X270);
            goto L_6000A5AC;
    }
    // 0x6000A224: lw          $t1, 0x270($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X270);
    // 0x6000A228: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x6000A22C: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
L_6000A230:
    // 0x6000A230: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A234: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x6000A238: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x6000A23C: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x6000A240: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x6000A244: nop

    // 0x6000A248: beq         $t9, $zero, L_6000A278
    if (ctx->r25 == 0) {
        // 0x6000A24C: lw          $t4, 0x11C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X11C);
            goto L_6000A278;
    }
    // 0x6000A24C: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A250: lw          $t0, 0x270($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X270);
    // 0x6000A254: lw          $t8, 0x94($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X94);
    // 0x6000A258: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x6000A25C: bne         $t8, $t1, L_6000A278
    if (ctx->r24 != ctx->r9) {
        // 0x6000A260: lw          $t4, 0x11C($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X11C);
            goto L_6000A278;
    }
    // 0x6000A260: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A264: lw          $t7, 0xF8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF8);
    // 0x6000A268: nop

    // 0x6000A26C: addiu       $t3, $t7, 0x1
    ctx->r11 = ADD32(ctx->r15, 0X1);
    // 0x6000A270: sw          $t3, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r11;
    // 0x6000A274: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
L_6000A278:
    // 0x6000A278: nop

    // 0x6000A27C: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x6000A280: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x6000A284: bne         $at, $zero, L_6000A230
    if (ctx->r1 != 0) {
        // 0x6000A288: sw          $t2, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r10;
            goto L_6000A230;
    }
    // 0x6000A288: sw          $t2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r10;
    // 0x6000A28C: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
    // 0x6000A290: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_6000A294:
    // 0x6000A294: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A298: lw          $t5, 0x248($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X248);
    // 0x6000A29C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x6000A2A0: lw          $t1, 0x270($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X270);
    // 0x6000A2A4: addu        $t0, $t5, $t6
    ctx->r8 = ADD32(ctx->r13, ctx->r14);
    // 0x6000A2A8: lw          $t8, 0x94($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X94);
    // 0x6000A2AC: sra         $t7, $t1, 16
    ctx->r15 = S32(SIGNED(ctx->r9) >> 16);
    // 0x6000A2B0: bne         $t8, $t7, L_6000A3F0
    if (ctx->r24 != ctx->r15) {
        // 0x6000A2B4: lui         $t3, 0x6001
        ctx->r11 = S32(0X6001 << 16);
            goto L_6000A3F0;
    }
    // 0x6000A2B4: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x6000A2B8: addu        $t3, $t3, $t6
    ctx->r11 = ADD32(ctx->r11, ctx->r14);
    // 0x6000A2BC: lw          $t3, -0x3FB8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3FB8);
    // 0x6000A2C0: nop

    // 0x6000A2C4: beq         $t3, $zero, L_6000A3F4
    if (ctx->r11 == 0) {
        // 0x6000A2C8: lw          $t1, 0x11C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X11C);
            goto L_6000A3F4;
    }
    // 0x6000A2C8: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A2CC: lw          $t4, 0xF8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XF8);
    // 0x6000A2D0: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x6000A2D4: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x6000A2D8: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x6000A2DC: addiu       $t9, $t9, -0x448C
    ctx->r25 = ADD32(ctx->r25, -0X448C);
    // 0x6000A2E0: addu        $t5, $t2, $t9
    ctx->r13 = ADD32(ctx->r10, ctx->r25);
    // 0x6000A2E4: addu        $t6, $t2, $t9
    ctx->r14 = ADD32(ctx->r10, ctx->r25);
    // 0x6000A2E8: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x6000A2EC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x6000A2F0: lw          $t3, -0x4($t6)
    ctx->r11 = MEM_W(ctx->r14, -0X4);
    // 0x6000A2F4: lw          $t0, -0x4($t5)
    ctx->r8 = MEM_W(ctx->r13, -0X4);
    // 0x6000A2F8: subu        $t4, $t4, $t1
    ctx->r12 = SUB32(ctx->r12, ctx->r9);
    // 0x6000A2FC: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x6000A300: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x6000A304: subu        $t8, $t8, $t1
    ctx->r24 = SUB32(ctx->r24, ctx->r9);
    // 0x6000A308: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x6000A30C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x6000A310: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x6000A314: addu        $t7, $t0, $t8
    ctx->r15 = ADD32(ctx->r8, ctx->r24);
    // 0x6000A318: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x6000A31C: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x6000A320: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x6000A324: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x6000A328: addu        $t0, $t2, $t9
    ctx->r8 = ADD32(ctx->r10, ctx->r25);
    // 0x6000A32C: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x6000A330: lw          $t8, -0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, -0X4);
    // 0x6000A334: subu        $t7, $t7, $t1
    ctx->r15 = SUB32(ctx->r15, ctx->r9);
    // 0x6000A338: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x6000A33C: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x6000A340: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x6000A344: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x6000A348: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x6000A34C: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x6000A350: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x6000A354: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x6000A358: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x6000A35C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x6000A360: jal         0x60000F34
    // 0x6000A364: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_443;
    // 0x6000A364: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_443:
    // 0x6000A368: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x6000A36C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x6000A370: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A374: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x6000A378: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000A37C: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000A380: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x6000A384: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x6000A388: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x6000A38C: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x6000A390: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x6000A394: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x6000A398: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x6000A39C: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x6000A3A0: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x6000A3A4: swc1        $f5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x6000A3A8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x6000A3AC: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x6000A3B0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x6000A3B4: jal         0x60000F34
    // 0x6000A3B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_444;
    // 0x6000A3B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_444:
    // 0x6000A3BC: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A3C0: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000A3C4: sll         $t2, $t5, 2
    ctx->r10 = S32(ctx->r13 << 2);
    // 0x6000A3C8: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x6000A3CC: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x6000A3D0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x6000A3D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000A3D8: jal         0x60000F34
    // 0x6000A3DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_445;
    // 0x6000A3DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_445:
    // 0x6000A3E0: lw          $t9, 0x108($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X108);
    // 0x6000A3E4: nop

    // 0x6000A3E8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x6000A3EC: sw          $t0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r8;
L_6000A3F0:
    // 0x6000A3F0: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
L_6000A3F4:
    // 0x6000A3F4: nop

    // 0x6000A3F8: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x6000A3FC: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x6000A400: bne         $at, $zero, L_6000A294
    if (ctx->r1 != 0) {
        // 0x6000A404: sw          $t8, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r24;
            goto L_6000A294;
    }
    // 0x6000A404: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
    // 0x6000A408: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_6000A40C:
    // 0x6000A40C: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
    // 0x6000A410: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000A414:
    // 0x6000A414: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A418: lw          $t7, 0x248($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X248);
    // 0x6000A41C: sll         $t3, $t6, 2
    ctx->r11 = S32(ctx->r14 << 2);
    // 0x6000A420: lw          $t2, 0x270($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X270);
    // 0x6000A424: addu        $t4, $t7, $t3
    ctx->r12 = ADD32(ctx->r15, ctx->r11);
    // 0x6000A428: lw          $t5, 0x94($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X94);
    // 0x6000A42C: sra         $t9, $t2, 16
    ctx->r25 = S32(SIGNED(ctx->r10) >> 16);
    // 0x6000A430: bne         $t5, $t9, L_6000A500
    if (ctx->r13 != ctx->r25) {
        // 0x6000A434: lui         $t0, 0x6001
        ctx->r8 = S32(0X6001 << 16);
            goto L_6000A500;
    }
    // 0x6000A434: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x6000A438: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x6000A43C: lw          $t0, -0x3FB8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3FB8);
    // 0x6000A440: nop

    // 0x6000A444: beq         $t0, $zero, L_6000A504
    if (ctx->r8 == 0) {
        // 0x6000A448: lw          $t3, 0x11C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X11C);
            goto L_6000A504;
    }
    // 0x6000A448: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A44C: lw          $t1, 0xF8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF8);
    // 0x6000A450: lw          $t2, 0x104($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X104);
    // 0x6000A454: lui         $t6, 0x6001
    ctx->r14 = S32(0X6001 << 16);
    // 0x6000A458: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x6000A45C: addiu       $t6, $t6, -0x448C
    ctx->r14 = ADD32(ctx->r14, -0X448C);
    // 0x6000A460: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x6000A464: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x6000A468: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x6000A46C: lw          $t4, -0x4($t7)
    ctx->r12 = MEM_W(ctx->r15, -0X4);
    // 0x6000A470: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x6000A474: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x6000A478: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x6000A47C: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x6000A480: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000A484: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x6000A488: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x6000A48C: lwc1        $f6, -0x3FCC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3FCC);
    // 0x6000A490: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x6000A494: mul.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f6.fl);
    // 0x6000A498: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x6000A49C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x6000A4A0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x6000A4A4: mfc1        $a2, $f11
    ctx->r6 = (int32_t)ctx->f_odd[(11 - 1) * 2];
    // 0x6000A4A8: add.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x6000A4AC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x6000A4B0: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x6000A4B4: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x6000A4B8: swc1        $f9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x6000A4BC: addu        $t0, $t8, $t6
    ctx->r8 = ADD32(ctx->r24, ctx->r14);
    // 0x6000A4C0: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x6000A4C4: lw          $t1, -0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, -0X4);
    // 0x6000A4C8: subu        $t7, $t7, $t2
    ctx->r15 = SUB32(ctx->r15, ctx->r10);
    // 0x6000A4CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x6000A4D0: addu        $t4, $t1, $t7
    ctx->r12 = ADD32(ctx->r9, ctx->r15);
    // 0x6000A4D4: lwc1        $f18, 0x8($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X8);
    // 0x6000A4D8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x6000A4DC: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x6000A4E0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x6000A4E4: swc1        $f7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x6000A4E8: jal         0x60000F34
    // 0x6000A4EC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_menu_battle_F34(rdram, ctx);
        goto after_446;
    // 0x6000A4EC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_446:
    // 0x6000A4F0: lw          $t5, 0x104($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X104);
    // 0x6000A4F4: nop

    // 0x6000A4F8: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x6000A4FC: sw          $t9, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r25;
L_6000A500:
    // 0x6000A500: lw          $t3, 0x11C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X11C);
L_6000A504:
    // 0x6000A504: nop

    // 0x6000A508: addiu       $t8, $t3, 0x1
    ctx->r24 = ADD32(ctx->r11, 0X1);
    // 0x6000A50C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x6000A510: bne         $at, $zero, L_6000A414
    if (ctx->r1 != 0) {
        // 0x6000A514: sw          $t8, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r24;
            goto L_6000A414;
    }
    // 0x6000A514: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
    // 0x6000A518: jal         0x6000085C
    // 0x6000A51C: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_447;
    // 0x6000A51C: nop

    after_447:
    // 0x6000A520: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x6000A524: nop

    // 0x6000A528: addiu       $t0, $t6, 0x1
    ctx->r8 = ADD32(ctx->r14, 0X1);
    // 0x6000A52C: slti        $at, $t0, 0x3C
    ctx->r1 = SIGNED(ctx->r8) < 0X3C ? 1 : 0;
    // 0x6000A530: bne         $at, $zero, L_6000A40C
    if (ctx->r1 != 0) {
        // 0x6000A534: sw          $t0, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r8;
            goto L_6000A40C;
    }
    // 0x6000A534: sw          $t0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r8;
    // 0x6000A538: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000A53C:
    // 0x6000A53C: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A540: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x6000A544: sll         $t7, $t1, 2
    ctx->r15 = S32(ctx->r9 << 2);
    // 0x6000A548: lw          $t9, 0x270($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X270);
    // 0x6000A54C: addu        $t4, $t2, $t7
    ctx->r12 = ADD32(ctx->r10, ctx->r15);
    // 0x6000A550: lw          $t5, 0x94($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X94);
    // 0x6000A554: sra         $t3, $t9, 16
    ctx->r11 = S32(SIGNED(ctx->r25) >> 16);
    // 0x6000A558: bne         $t5, $t3, L_6000A588
    if (ctx->r13 != ctx->r11) {
        // 0x6000A55C: lui         $t8, 0x6001
        ctx->r24 = S32(0X6001 << 16);
            goto L_6000A588;
    }
    // 0x6000A55C: lui         $t8, 0x6001
    ctx->r24 = S32(0X6001 << 16);
    // 0x6000A560: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x6000A564: lw          $t8, -0x3FB8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3FB8);
    // 0x6000A568: nop

    // 0x6000A56C: beq         $t8, $zero, L_6000A588
    if (ctx->r24 == 0) {
        // 0x6000A570: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_6000A588;
    }
    // 0x6000A570: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x6000A574: addiu       $a1, $sp, 0x108
    ctx->r5 = ADD32(ctx->r29, 0X108);
    // 0x6000A578: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x6000A57C: addiu       $a3, $zero, 0x557
    ctx->r7 = ADD32(0, 0X557);
    // 0x6000A580: jal         0x60000F34
    // 0x6000A584: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_448;
    // 0x6000A584: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_448:
L_6000A588:
    // 0x6000A588: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A58C: nop

    // 0x6000A590: addiu       $t0, $t6, 0x1
    ctx->r8 = ADD32(ctx->r14, 0X1);
    // 0x6000A594: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x6000A598: bne         $at, $zero, L_6000A53C
    if (ctx->r1 != 0) {
        // 0x6000A59C: sw          $t0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r8;
            goto L_6000A53C;
    }
    // 0x6000A59C: sw          $t0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r8;
    // 0x6000A5A0: b           L_6000A74C
    // 0x6000A5A4: nop

        goto L_6000A74C;
    // 0x6000A5A4: nop

    // 0x6000A5A8: lw          $t1, 0x270($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X270);
L_6000A5AC:
    // 0x6000A5AC: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x6000A5B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000A5B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x6000A5B8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x6000A5BC: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x6000A5C0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000A5C4: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x6000A5C8: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000A5CC: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x6000A5D0: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x6000A5D4: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x6000A5D8: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x6000A5DC: mfc1        $a2, $f17
    ctx->r6 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x6000A5E0: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x6000A5E4: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x6000A5E8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x6000A5EC: swc1        $f7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x6000A5F0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x6000A5F4: swc1        $f9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x6000A5F8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x6000A5FC: jal         0x60000F34
    // 0x6000A600: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_449;
    // 0x6000A600: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_449:
    // 0x6000A604: lw          $t9, 0x270($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X270);
    // 0x6000A608: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x6000A60C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000A610: sra         $t5, $t9, 16
    ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
    // 0x6000A614: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000A618: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000A61C: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x6000A620: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000A624: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x6000A628: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x6000A62C: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x6000A630: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x6000A634: mfc1        $a2, $f17
    ctx->r6 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x6000A638: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x6000A63C: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x6000A640: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x6000A644: swc1        $f7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x6000A648: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x6000A64C: swc1        $f9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x6000A650: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x6000A654: jal         0x60000F34
    // 0x6000A658: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_450;
    // 0x6000A658: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_450:
    // 0x6000A65C: lw          $t7, 0x270($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X270);
    // 0x6000A660: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000A664: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x6000A668: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x6000A66C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x6000A670: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x6000A674: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x6000A678: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000A67C: jal         0x60000F34
    // 0x6000A680: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_451;
    // 0x6000A680: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_451:
    // 0x6000A684: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000A688:
    // 0x6000A688: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A68C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000A690: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x6000A694: lwc1        $f18, -0x3FC8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3FC8);
    // 0x6000A698: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x6000A69C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x6000A6A0: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x6000A6A4: mul.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x6000A6A8: cvt.d.s     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f16.d = CVT_D_S(ctx->f4.fl);
    // 0x6000A6AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000A6B0: lw          $t0, 0x270($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X270);
    // 0x6000A6B4: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x6000A6B8: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x6000A6BC: mfc1        $a2, $f17
    ctx->r6 = (int32_t)ctx->f_odd[(17 - 1) * 2];
    // 0x6000A6C0: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x6000A6C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x6000A6C8: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x6000A6CC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x6000A6D0: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000A6D4: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x6000A6D8: lw          $a1, -0x3FB8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB8);
    // 0x6000A6DC: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x6000A6E0: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x6000A6E4: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x6000A6E8: swc1        $f19, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x6000A6EC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x6000A6F0: swc1        $f11, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x6000A6F4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x6000A6F8: jal         0x60000F34
    // 0x6000A6FC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_452;
    // 0x6000A6FC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_452:
    // 0x6000A700: jal         0x6000085C
    // 0x6000A704: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_453;
    // 0x6000A704: nop

    after_453:
    // 0x6000A708: lw          $t9, 0x11C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A70C: nop

    // 0x6000A710: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x6000A714: slti        $at, $t5, 0x3C
    ctx->r1 = SIGNED(ctx->r13) < 0X3C ? 1 : 0;
    // 0x6000A718: bne         $at, $zero, L_6000A688
    if (ctx->r1 != 0) {
        // 0x6000A71C: sw          $t5, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r13;
            goto L_6000A688;
    }
    // 0x6000A71C: sw          $t5, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r13;
    // 0x6000A720: lw          $t3, 0x270($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X270);
    // 0x6000A724: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x6000A728: sra         $t7, $t3, 16
    ctx->r15 = S32(SIGNED(ctx->r11) >> 16);
    // 0x6000A72C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x6000A730: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x6000A734: lw          $a2, -0x3FB8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3FB8);
    // 0x6000A738: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x6000A73C: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x6000A740: addiu       $a3, $zero, 0x557
    ctx->r7 = ADD32(0, 0X557);
    // 0x6000A744: jal         0x60000F34
    // 0x6000A748: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_454;
    // 0x6000A748: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_454:
L_6000A74C:
    // 0x6000A74C: jal         0x60000850
    // 0x6000A750: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_menu_battle_850(rdram, ctx);
        goto after_455;
    // 0x6000A750: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_455:
    // 0x6000A754: addiu       $a0, $zero, 0x973
    ctx->r4 = ADD32(0, 0X973);
    // 0x6000A758: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x6000A75C: jal         0x60000538
    // 0x6000A760: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_538(rdram, ctx);
        goto after_456;
    // 0x6000A760: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_456:
    // 0x6000A764: sw          $v0, 0x268($sp)
    MEM_W(0X268, ctx->r29) = ctx->r2;
    // 0x6000A768: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000A76C: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x6000A770: jal         0x6000055C
    // 0x6000A774: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    ovl_menu_battle_55C(rdram, ctx);
        goto after_457;
    // 0x6000A774: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    after_457:
    // 0x6000A778: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x6000A77C: sw          $t6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r14;
L_6000A780:
    // 0x6000A780: lw          $t0, 0x11C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A784: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000A788: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x6000A78C: lwc1        $f16, -0x3FC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X3FC4);
    // 0x6000A790: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x6000A794: lw          $a0, 0x268($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X268);
    // 0x6000A798: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x6000A79C: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x6000A7A0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x6000A7A4: jal         0x60000574
    // 0x6000A7A8: nop

    ovl_menu_battle_574(rdram, ctx);
        goto after_458;
    // 0x6000A7A8: nop

    after_458:
    // 0x6000A7AC: jal         0x6000085C
    // 0x6000A7B0: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_459;
    // 0x6000A7B0: nop

    after_459:
    // 0x6000A7B4: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A7B8: nop

    // 0x6000A7BC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x6000A7C0: slti        $at, $t2, 0xF
    ctx->r1 = SIGNED(ctx->r10) < 0XF ? 1 : 0;
    // 0x6000A7C4: bne         $at, $zero, L_6000A780
    if (ctx->r1 != 0) {
        // 0x6000A7C8: sw          $t2, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r10;
            goto L_6000A780;
    }
    // 0x6000A7C8: sw          $t2, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r10;
    // 0x6000A7CC: lw          $a0, 0x268($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X268);
    // 0x6000A7D0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x6000A7D4: jal         0x60000574
    // 0x6000A7D8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    ovl_menu_battle_574(rdram, ctx);
        goto after_460;
    // 0x6000A7D8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_460:
L_6000A7DC:
    // 0x6000A7DC: jal         0x600022AC
    // 0x6000A7E0: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_461;
    // 0x6000A7E0: nop

    after_461:
    // 0x6000A7E4: bne         $v0, $zero, L_6000A7FC
    if (ctx->r2 != 0) {
        // 0x6000A7E8: sw          $v0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r2;
            goto L_6000A7FC;
    }
    // 0x6000A7E8: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    // 0x6000A7EC: jal         0x6000085C
    // 0x6000A7F0: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_462;
    // 0x6000A7F0: nop

    after_462:
    // 0x6000A7F4: b           L_6000A7DC
    // 0x6000A7F8: nop

        goto L_6000A7DC;
    // 0x6000A7F8: nop

L_6000A7FC:
    // 0x6000A7FC: lw          $t9, 0x120($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X120);
    // 0x6000A800: nop

    // 0x6000A804: lw          $t5, 0x0($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X0);
    // 0x6000A808: nop

    // 0x6000A80C: andi        $t3, $t5, 0x8000
    ctx->r11 = ctx->r13 & 0X8000;
    // 0x6000A810: beq         $t3, $zero, L_6000AA5C
    if (ctx->r11 == 0) {
        // 0x6000A814: nop
    
            goto L_6000AA5C;
    }
    // 0x6000A814: nop

    // 0x6000A818: lw          $t7, 0x24C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24C);
    // 0x6000A81C: nop

    // 0x6000A820: beq         $t7, $zero, L_6000AA5C
    if (ctx->r15 == 0) {
        // 0x6000A824: nop
    
            goto L_6000AA5C;
    }
    // 0x6000A824: nop

    // 0x6000A828: jal         0x60000244
    // 0x6000A82C: addiu       $a0, $zero, 0x362
    ctx->r4 = ADD32(0, 0X362);
    ovl_menu_battle_244(rdram, ctx);
        goto after_463;
    // 0x6000A82C: addiu       $a0, $zero, 0x362
    ctx->r4 = ADD32(0, 0X362);
    after_463:
    // 0x6000A830: lw          $t8, 0x24C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24C);
    // 0x6000A834: nop

    // 0x6000A838: andi        $t6, $t8, 0x1
    ctx->r14 = ctx->r24 & 0X1;
    // 0x6000A83C: beq         $t6, $zero, L_6000A9C8
    if (ctx->r14 == 0) {
        // 0x6000A840: lui         $a2, 0x6001
        ctx->r6 = S32(0X6001 << 16);
            goto L_6000A9C8;
    }
    // 0x6000A840: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x6000A844: lw          $a2, -0x3FC0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3FC0);
    // 0x6000A848: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x6000A84C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x6000A850: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x6000A854: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x6000A858: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x6000A85C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x6000A860: jal         0x600006B8
    // 0x6000A864: addiu       $a3, $zero, 0x27
    ctx->r7 = ADD32(0, 0X27);
    ovl_menu_battle_6B8(rdram, ctx);
        goto after_464;
    // 0x6000A864: addiu       $a3, $zero, 0x27
    ctx->r7 = ADD32(0, 0X27);
    after_464:
    // 0x6000A868: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x6000A86C: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x6000A870: lw          $t2, 0xCC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XCC);
    // 0x6000A874: lw          $t9, 0x0($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X0);
    // 0x6000A878: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x6000A87C: addu        $t5, $t2, $t9
    ctx->r13 = ADD32(ctx->r10, ctx->r25);
    // 0x6000A880: lbu         $t3, 0x4($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X4);
    // 0x6000A884: addiu       $t0, $t0, -0x4F3C
    ctx->r8 = ADD32(ctx->r8, -0X4F3C);
    // 0x6000A888: addiu       $t7, $t3, -0x1
    ctx->r15 = ADD32(ctx->r11, -0X1);
    // 0x6000A88C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x6000A890: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x6000A894: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x6000A898: addiu       $t6, $t8, 0xC8
    ctx->r14 = ADD32(ctx->r24, 0XC8);
    // 0x6000A89C: sw          $t7, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r15;
    // 0x6000A8A0: addu        $a0, $t6, $t0
    ctx->r4 = ADD32(ctx->r14, ctx->r8);
    // 0x6000A8A4: jal         0x60001AA0
    // 0x6000A8A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_battle_1AA0(rdram, ctx);
        goto after_465;
    // 0x6000A8A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_465:
    // 0x6000A8AC: lw          $a1, 0x11C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A8B0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000A8B4: addiu       $a0, $a0, -0x4F3C
    ctx->r4 = ADD32(ctx->r4, -0X4F3C);
    // 0x6000A8B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x6000A8BC: jal         0x60001C84
    // 0x6000A8C0: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
    ovl_menu_battle_1C84(rdram, ctx);
        goto after_466;
    // 0x6000A8C0: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
    after_466:
    // 0x6000A8C4: lw          $t1, 0x11C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A8C8: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000A8CC: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x6000A8D0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x6000A8D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x6000A8D8: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x6000A8DC: lw          $a0, -0x4E68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4E68);
    // 0x6000A8E0: lui         $a1, 0x4349
    ctx->r5 = S32(0X4349 << 16);
    // 0x6000A8E4: jal         0x6000055C
    // 0x6000A8E8: lui         $a2, 0x4308
    ctx->r6 = S32(0X4308 << 16);
    ovl_menu_battle_55C(rdram, ctx);
        goto after_467;
    // 0x6000A8E8: lui         $a2, 0x4308
    ctx->r6 = S32(0X4308 << 16);
    after_467:
    // 0x6000A8EC: lw          $t2, 0x11C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A8F0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000A8F4: bne         $t2, $at, L_6000A924
    if (ctx->r10 != ctx->r1) {
        // 0x6000A8F8: sll         $t9, $t2, 2
        ctx->r25 = S32(ctx->r10 << 2);
            goto L_6000A924;
    }
    // 0x6000A8F8: sll         $t9, $t2, 2
    ctx->r25 = S32(ctx->r10 << 2);
    // 0x6000A8FC: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x6000A900: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x6000A904: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000A908: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x6000A90C: lw          $a0, -0x4E68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4E68);
    // 0x6000A910: lui         $a1, 0xEE
    ctx->r5 = S32(0XEE << 16);
    // 0x6000A914: jal         0x60000658
    // 0x6000A918: ori         $a1, $a1, 0x11FF
    ctx->r5 = ctx->r5 | 0X11FF;
    ovl_menu_battle_658(rdram, ctx);
        goto after_468;
    // 0x6000A918: ori         $a1, $a1, 0x11FF
    ctx->r5 = ctx->r5 | 0X11FF;
    after_468:
    // 0x6000A91C: b           L_6000A954
    // 0x6000A920: nop

        goto L_6000A954;
    // 0x6000A920: nop

L_6000A924:
    // 0x6000A924: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x6000A928: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x6000A92C: bne         $t5, $at, L_6000A954
    if (ctx->r13 != ctx->r1) {
        // 0x6000A930: sll         $t3, $t5, 2
        ctx->r11 = S32(ctx->r13 << 2);
            goto L_6000A954;
    }
    // 0x6000A930: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x6000A934: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x6000A938: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x6000A93C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000A940: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x6000A944: lw          $a0, -0x4E68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4E68);
    // 0x6000A948: lui         $a1, 0xFF00
    ctx->r5 = S32(0XFF00 << 16);
    // 0x6000A94C: jal         0x60000658
    // 0x6000A950: ori         $a1, $a1, 0x20FF
    ctx->r5 = ctx->r5 | 0X20FF;
    ovl_menu_battle_658(rdram, ctx);
        goto after_469;
    // 0x6000A950: ori         $a1, $a1, 0x20FF
    ctx->r5 = ctx->r5 | 0X20FF;
    after_469:
L_6000A954:
    // 0x6000A954: jal         0x60000850
    // 0x6000A958: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_battle_850(rdram, ctx);
        goto after_470;
    // 0x6000A958: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_470:
L_6000A95C:
    // 0x6000A95C: jal         0x600022AC
    // 0x6000A960: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_471;
    // 0x6000A960: nop

    after_471:
    // 0x6000A964: bne         $v0, $zero, L_6000A97C
    if (ctx->r2 != 0) {
        // 0x6000A968: sw          $v0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r2;
            goto L_6000A97C;
    }
    // 0x6000A968: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    // 0x6000A96C: jal         0x6000085C
    // 0x6000A970: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_472;
    // 0x6000A970: nop

    after_472:
    // 0x6000A974: b           L_6000A95C
    // 0x6000A978: nop

        goto L_6000A95C;
    // 0x6000A978: nop

L_6000A97C:
    // 0x6000A97C: jal         0x60000244
    // 0x6000A980: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_473;
    // 0x6000A980: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_473:
    // 0x6000A984: lw          $t6, 0x248($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X248);
    // 0x6000A988: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x6000A98C: lw          $t0, 0x0($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X0);
    // 0x6000A990: lui         $t5, 0x6001
    ctx->r13 = S32(0X6001 << 16);
    // 0x6000A994: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x6000A998: lbu         $t4, 0x4($t1)
    ctx->r12 = MEM_BU(ctx->r9, 0X4);
    // 0x6000A99C: addiu       $t5, $t5, -0x4F3C
    ctx->r13 = ADD32(ctx->r13, -0X4F3C);
    // 0x6000A9A0: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x6000A9A4: addu        $t2, $t2, $t4
    ctx->r10 = ADD32(ctx->r10, ctx->r12);
    // 0x6000A9A8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x6000A9AC: addiu       $t9, $t2, 0xB4
    ctx->r25 = ADD32(ctx->r10, 0XB4);
    // 0x6000A9B0: addu        $a0, $t9, $t5
    ctx->r4 = ADD32(ctx->r25, ctx->r13);
    // 0x6000A9B4: jal         0x60001BEC
    // 0x6000A9B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_menu_battle_1BEC(rdram, ctx);
        goto after_474;
    // 0x6000A9B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_474:
    // 0x6000A9BC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x6000A9C0: jal         0x600006AC
    // 0x6000A9C4: nop

    ovl_menu_battle_6AC(rdram, ctx);
        goto after_475;
    // 0x6000A9C4: nop

    after_475:
L_6000A9C8:
    // 0x6000A9C8: jal         0x60000850
    // 0x6000A9CC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_battle_850(rdram, ctx);
        goto after_476;
    // 0x6000A9CC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_476:
    // 0x6000A9D0: lw          $t3, 0x24C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24C);
    // 0x6000A9D4: nop

    // 0x6000A9D8: andi        $t7, $t3, 0x2
    ctx->r15 = ctx->r11 & 0X2;
    // 0x6000A9DC: beq         $t7, $zero, L_6000AA5C
    if (ctx->r15 == 0) {
        // 0x6000A9E0: nop
    
            goto L_6000AA5C;
    }
    // 0x6000A9E0: nop

    // 0x6000A9E4: jal         0x60000244
    // 0x6000A9E8: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_menu_battle_244(rdram, ctx);
        goto after_477;
    // 0x6000A9E8: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_477:
    // 0x6000A9EC: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x6000A9F0: lw          $a2, -0x3FC0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3FC0);
    // 0x6000A9F4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x6000A9F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x6000A9FC: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x6000AA00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x6000AA04: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x6000AA08: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x6000AA0C: jal         0x600006B8
    // 0x6000AA10: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    ovl_menu_battle_6B8(rdram, ctx);
        goto after_478;
    // 0x6000AA10: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_478:
    // 0x6000AA14: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x6000AA18: jal         0x60000850
    // 0x6000AA1C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_battle_850(rdram, ctx);
        goto after_479;
    // 0x6000AA1C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_479:
L_6000AA20:
    // 0x6000AA20: jal         0x600022AC
    // 0x6000AA24: nop

    ovl_menu_battle_22AC(rdram, ctx);
        goto after_480;
    // 0x6000AA24: nop

    after_480:
    // 0x6000AA28: bne         $v0, $zero, L_6000AA40
    if (ctx->r2 != 0) {
        // 0x6000AA2C: sw          $v0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r2;
            goto L_6000AA40;
    }
    // 0x6000AA2C: sw          $v0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r2;
    // 0x6000AA30: jal         0x6000085C
    // 0x6000AA34: nop

    ovl_menu_battle_85C(rdram, ctx);
        goto after_481;
    // 0x6000AA34: nop

    after_481:
    // 0x6000AA38: b           L_6000AA20
    // 0x6000AA3C: nop

        goto L_6000AA20;
    // 0x6000AA3C: nop

L_6000AA40:
    // 0x6000AA40: jal         0x60000244
    // 0x6000AA44: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    ovl_menu_battle_244(rdram, ctx);
        goto after_482;
    // 0x6000AA44: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_482:
    // 0x6000AA48: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x6000AA4C: jal         0x600006AC
    // 0x6000AA50: nop

    ovl_menu_battle_6AC(rdram, ctx);
        goto after_483;
    // 0x6000AA50: nop

    after_483:
    // 0x6000AA54: jal         0x60000850
    // 0x6000AA58: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_menu_battle_850(rdram, ctx);
        goto after_484;
    // 0x6000AA58: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_484:
L_6000AA5C:
    // 0x6000AA5C: jal         0x60000268
    // 0x6000AA60: nop

    ovl_menu_battle_268(rdram, ctx);
        goto after_485;
    // 0x6000AA60: nop

    after_485:
    // 0x6000AA64: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x6000AA68: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000AA6C: sw          $t1, -0x4270($at)
    MEM_W(-0X4270, ctx->r1) = ctx->r9;
    // 0x6000AA70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000AA74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000AA78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000AA7C: jal         0x60000238
    // 0x6000AA80: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    ovl_menu_battle_238(rdram, ctx);
        goto after_486;
    // 0x6000AA80: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_486:
    // 0x6000AA84: jal         0x60000208
    // 0x6000AA88: nop

    ovl_menu_battle_208(rdram, ctx);
        goto after_487;
    // 0x6000AA88: nop

    after_487:
    // 0x6000AA8C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000AA90: lw          $a0, -0x3E84($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E84);
    // 0x6000AA94: jal         0x60000DA8
    // 0x6000AA98: nop

    ovl_menu_battle_DA8(rdram, ctx);
        goto after_488;
    // 0x6000AA98: nop

    after_488:
    // 0x6000AA9C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000AAA0: lw          $a0, -0x3F94($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F94);
    // 0x6000AAA4: jal         0x600009A0
    // 0x6000AAA8: nop

    ovl_menu_battle_9A0(rdram, ctx);
        goto after_489;
    // 0x6000AAA8: nop

    after_489:
    // 0x6000AAAC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000AAB0: lw          $a0, -0x3F90($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F90);
    // 0x6000AAB4: jal         0x600009A0
    // 0x6000AAB8: nop

    ovl_menu_battle_9A0(rdram, ctx);
        goto after_490;
    // 0x6000AAB8: nop

    after_490:
    // 0x6000AABC: lw          $a0, 0x268($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X268);
    // 0x6000AAC0: jal         0x60000550
    // 0x6000AAC4: nop

    ovl_menu_battle_550(rdram, ctx);
        goto after_491;
    // 0x6000AAC4: nop

    after_491:
    // 0x6000AAC8: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000AACC:
    // 0x6000AACC: lw          $t4, 0x11C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X11C);
    // 0x6000AAD0: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x6000AAD4: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x6000AAD8: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x6000AADC: lw          $t9, -0x3FB8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3FB8);
    // 0x6000AAE0: nop

    // 0x6000AAE4: beq         $t9, $zero, L_6000AAF4
    if (ctx->r25 == 0) {
        // 0x6000AAE8: or          $a0, $t4, $zero
        ctx->r4 = ctx->r12 | 0;
            goto L_6000AAF4;
    }
    // 0x6000AAE8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x6000AAEC: jal         0x60002040
    // 0x6000AAF0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_menu_battle_2040(rdram, ctx);
        goto after_492;
    // 0x6000AAF0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_492:
L_6000AAF4:
    // 0x6000AAF4: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x6000AAF8: nop

    // 0x6000AAFC: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x6000AB00: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x6000AB04: bne         $at, $zero, L_6000AACC
    if (ctx->r1 != 0) {
        // 0x6000AB08: sw          $t3, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r11;
            goto L_6000AACC;
    }
    // 0x6000AB08: sw          $t3, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r11;
    // 0x6000AB0C: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000AB10:
    // 0x6000AB10: lw          $t7, 0x11C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X11C);
    // 0x6000AB14: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000AB18: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x6000AB1C: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x6000AB20: lw          $a1, -0x3FA8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FA8);
    // 0x6000AB24: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x6000AB28: jal         0x60000F34
    // 0x6000AB2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_F34(rdram, ctx);
        goto after_493;
    // 0x6000AB2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_493:
    // 0x6000AB30: lw          $t8, 0x11C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X11C);
    // 0x6000AB34: nop

    // 0x6000AB38: addiu       $t0, $t8, 0x1
    ctx->r8 = ADD32(ctx->r24, 0X1);
    // 0x6000AB3C: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x6000AB40: bne         $at, $zero, L_6000AB10
    if (ctx->r1 != 0) {
        // 0x6000AB44: sw          $t0, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r8;
            goto L_6000AB10;
    }
    // 0x6000AB44: sw          $t0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r8;
    // 0x6000AB48: lw          $t1, 0x120($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X120);
    // 0x6000AB4C: nop

    // 0x6000AB50: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x6000AB54: nop

    // 0x6000AB58: andi        $t9, $t2, 0x8000
    ctx->r25 = ctx->r10 & 0X8000;
    // 0x6000AB5C: beq         $t9, $zero, L_6000AD1C
    if (ctx->r25 == 0) {
        // 0x6000AB60: nop
    
            goto L_6000AD1C;
    }
    // 0x6000AB60: nop

    // 0x6000AB64: sw          $zero, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = 0;
L_6000AB68:
    // 0x6000AB68: lw          $t5, 0x11C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X11C);
    // 0x6000AB6C: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x6000AB70: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x6000AB74: addu        $t7, $t4, $t3
    ctx->r15 = ADD32(ctx->r12, ctx->r11);
    // 0x6000AB78: sw          $zero, 0x14($t7)
    MEM_W(0X14, ctx->r15) = 0;
    // 0x6000AB7C: lw          $t6, 0x11C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X11C);
    // 0x6000AB80: nop

    // 0x6000AB84: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x6000AB88: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x6000AB8C: bne         $at, $zero, L_6000AB68
    if (ctx->r1 != 0) {
        // 0x6000AB90: sw          $t8, 0x11C($sp)
        MEM_W(0X11C, ctx->r29) = ctx->r24;
            goto L_6000AB68;
    }
    // 0x6000AB90: sw          $t8, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r24;
    // 0x6000AB94: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x6000AB98: lw          $t2, 0x250($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X250);
    // 0x6000AB9C: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x6000ABA0: nop

    // 0x6000ABA4: beq         $t1, $t2, L_6000ABB0
    if (ctx->r9 == ctx->r10) {
        // 0x6000ABA8: nop
    
            goto L_6000ABB0;
    }
    // 0x6000ABA8: nop

    // 0x6000ABAC: sw          $zero, 0x120($t0)
    MEM_W(0X120, ctx->r8) = 0;
L_6000ABB0:
    // 0x6000ABB0: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_6000ABB4:
    // 0x6000ABB4: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x6000ABB8: lw          $t9, 0x248($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X248);
    // 0x6000ABBC: sll         $t4, $t5, 2
    ctx->r12 = S32(ctx->r13 << 2);
    // 0x6000ABC0: addu        $t3, $t9, $t4
    ctx->r11 = ADD32(ctx->r25, ctx->r12);
    // 0x6000ABC4: lw          $t7, 0x4($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X4);
    // 0x6000ABC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x6000ABCC: beq         $t7, $at, L_6000ABDC
    if (ctx->r15 == ctx->r1) {
        // 0x6000ABD0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_6000ABDC;
    }
    // 0x6000ABD0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000ABD4: bne         $t7, $at, L_6000AD08
    if (ctx->r15 != ctx->r1) {
        // 0x6000ABD8: lw          $t7, 0x54($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X54);
            goto L_6000AD08;
    }
    // 0x6000ABD8: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
L_6000ABDC:
    // 0x6000ABDC: sw          $zero, 0x108($sp)
    MEM_W(0X108, ctx->r29) = 0;
L_6000ABE0:
    // 0x6000ABE0: lw          $t6, 0x108($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X108);
    // 0x6000ABE4: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x6000ABE8: nop

    // 0x6000ABEC: beq         $t6, $t8, L_6000ACF0
    if (ctx->r14 == ctx->r24) {
        // 0x6000ABF0: lw          $t3, 0x108($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X108);
            goto L_6000ACF0;
    }
    // 0x6000ABF0: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x6000ABF4: lw          $t1, 0x248($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X248);
    // 0x6000ABF8: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x6000ABFC: addu        $t0, $t1, $t2
    ctx->r8 = ADD32(ctx->r9, ctx->r10);
    // 0x6000AC00: lw          $t5, 0x4($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X4);
    // 0x6000AC04: nop

    // 0x6000AC08: xori        $t9, $t5, 0x2
    ctx->r25 = ctx->r13 ^ 0X2;
    // 0x6000AC0C: sltiu       $t9, $t9, 0x1
    ctx->r25 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x6000AC10: bne         $t9, $zero, L_6000AC24
    if (ctx->r25 != 0) {
        // 0x6000AC14: lw          $t4, 0x248($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X248);
            goto L_6000AC24;
    }
    // 0x6000AC14: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
    // 0x6000AC18: beq         $t9, $zero, L_6000ACF0
    if (ctx->r25 == 0) {
        // 0x6000AC1C: lw          $t3, 0x108($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X108);
            goto L_6000ACF0;
    }
    // 0x6000AC1C: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x6000AC20: lw          $t4, 0x248($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X248);
L_6000AC24:
    // 0x6000AC24: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x6000AC28: lw          $t1, 0x108($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X108);
    // 0x6000AC2C: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x6000AC30: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x6000AC34: addu        $t0, $t4, $t2
    ctx->r8 = ADD32(ctx->r12, ctx->r10);
    // 0x6000AC38: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x6000AC3C: lw          $t6, 0x14($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X14);
    // 0x6000AC40: lw          $t5, 0x14($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X14);
    // 0x6000AC44: nop

    // 0x6000AC48: bne         $t6, $t5, L_6000ACF0
    if (ctx->r14 != ctx->r13) {
        // 0x6000AC4C: lw          $t3, 0x108($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X108);
            goto L_6000ACF0;
    }
    // 0x6000AC4C: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    // 0x6000AC50: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x6000AC54: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_6000AC58:
    // 0x6000AC58: sw          $zero, 0x104($sp)
    MEM_W(0X104, ctx->r29) = 0;
L_6000AC5C:
    // 0x6000AC5C: lw          $t3, 0x104($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X104);
    // 0x6000AC60: lw          $t9, 0x248($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X248);
    // 0x6000AC64: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x6000AC68: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x6000AC6C: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x6000AC70: nop

    // 0x6000AC74: xori        $t4, $t1, 0x2
    ctx->r12 = ctx->r9 ^ 0X2;
    // 0x6000AC78: sltiu       $t4, $t4, 0x1
    ctx->r12 = ctx->r12 < 0X1 ? 1 : 0;
    // 0x6000AC7C: bne         $t4, $zero, L_6000AC90
    if (ctx->r12 != 0) {
        // 0x6000AC80: lw          $t0, 0x104($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X104);
            goto L_6000AC90;
    }
    // 0x6000AC80: lw          $t0, 0x104($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X104);
    // 0x6000AC84: beq         $t4, $zero, L_6000ACBC
    if (ctx->r12 == 0) {
        // 0x6000AC88: lw          $t8, 0x104($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X104);
            goto L_6000ACBC;
    }
    // 0x6000AC88: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
    // 0x6000AC8C: lw          $t0, 0x104($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X104);
L_6000AC90:
    // 0x6000AC90: lw          $t2, 0x248($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X248);
    // 0x6000AC94: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x6000AC98: addu        $t5, $t2, $t6
    ctx->r13 = ADD32(ctx->r10, ctx->r14);
    // 0x6000AC9C: lw          $t3, 0x14($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X14);
    // 0x6000ACA0: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x6000ACA4: nop

    // 0x6000ACA8: bne         $t3, $t9, L_6000ACB8
    if (ctx->r11 != ctx->r25) {
        // 0x6000ACAC: addiu       $t7, $t9, 0x1
        ctx->r15 = ADD32(ctx->r25, 0X1);
            goto L_6000ACB8;
    }
    // 0x6000ACAC: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x6000ACB0: b           L_6000AC58
    // 0x6000ACB4: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
        goto L_6000AC58;
    // 0x6000ACB4: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
L_6000ACB8:
    // 0x6000ACB8: lw          $t8, 0x104($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X104);
L_6000ACBC:
    // 0x6000ACBC: nop

    // 0x6000ACC0: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x6000ACC4: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x6000ACC8: bne         $at, $zero, L_6000AC5C
    if (ctx->r1 != 0) {
        // 0x6000ACCC: sw          $t1, 0x104($sp)
        MEM_W(0X104, ctx->r29) = ctx->r9;
            goto L_6000AC5C;
    }
    // 0x6000ACCC: sw          $t1, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r9;
    // 0x6000ACD0: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x6000ACD4: lw          $t0, 0x248($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X248);
    // 0x6000ACD8: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x6000ACDC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x6000ACE0: addu        $t5, $t0, $t6
    ctx->r13 = ADD32(ctx->r8, ctx->r14);
    // 0x6000ACE4: b           L_6000AD04
    // 0x6000ACE8: sw          $t4, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->r12;
        goto L_6000AD04;
    // 0x6000ACE8: sw          $t4, 0x14($t5)
    MEM_W(0X14, ctx->r13) = ctx->r12;
    // 0x6000ACEC: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
L_6000ACF0:
    // 0x6000ACF0: nop

    // 0x6000ACF4: addiu       $t9, $t3, 0x1
    ctx->r25 = ADD32(ctx->r11, 0X1);
    // 0x6000ACF8: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x6000ACFC: bne         $at, $zero, L_6000ABE0
    if (ctx->r1 != 0) {
        // 0x6000AD00: sw          $t9, 0x108($sp)
        MEM_W(0X108, ctx->r29) = ctx->r25;
            goto L_6000ABE0;
    }
    // 0x6000AD00: sw          $t9, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r25;
L_6000AD04:
    // 0x6000AD04: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
L_6000AD08:
    // 0x6000AD08: nop

    // 0x6000AD0C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x6000AD10: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x6000AD14: bne         $at, $zero, L_6000ABB4
    if (ctx->r1 != 0) {
        // 0x6000AD18: sw          $t8, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r24;
            goto L_6000ABB4;
    }
    // 0x6000AD18: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
L_6000AD1C:
    // 0x6000AD1C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000AD20: lw          $a0, -0x3E08($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E08);
    // 0x6000AD24: jal         0x600009A0
    // 0x6000AD28: nop

    ovl_menu_battle_9A0(rdram, ctx);
        goto after_494;
    // 0x6000AD28: nop

    after_494:
    // 0x6000AD2C: jal         0x60000850
    // 0x6000AD30: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_menu_battle_850(rdram, ctx);
        goto after_495;
    // 0x6000AD30: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_495:
    // 0x6000AD34: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x6000AD38: lw          $a0, -0x3E0C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E0C);
    // 0x6000AD3C: jal         0x600000F4
    // 0x6000AD40: nop

    ovl_menu_battle_F4(rdram, ctx);
        goto after_496;
    // 0x6000AD40: nop

    after_496:
    // 0x6000AD44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000AD48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000AD4C: jal         0x600001C0
    // 0x6000AD50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_menu_battle_1C0(rdram, ctx);
        goto after_497;
    // 0x6000AD50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_497:
L_6000AD54:
    // 0x6000AD54: jal         0x60000124
    // 0x6000AD58: addiu       $a0, $zero, 0x7F0
    ctx->r4 = ADD32(0, 0X7F0);
    ovl_menu_battle_124(rdram, ctx);
        goto after_498;
    // 0x6000AD58: addiu       $a0, $zero, 0x7F0
    ctx->r4 = ADD32(0, 0X7F0);
    after_498:
    // 0x6000AD5C: jal         0x60000F40
    // 0x6000AD60: nop

    ovl_menu_battle_F40(rdram, ctx);
        goto after_499;
    // 0x6000AD60: nop

    after_499:
    // 0x6000AD64: jal         0x60000130
    // 0x6000AD68: nop

    ovl_menu_battle_130(rdram, ctx);
        goto after_500;
    // 0x6000AD68: nop

    after_500:
    // 0x6000AD6C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x6000AD70: lw          $v0, 0x250($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X250);
    // 0x6000AD74: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x6000AD78: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x6000AD7C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x6000AD80: jr          $ra
    // 0x6000AD84: addiu       $sp, $sp, 0x270
    ctx->r29 = ADD32(ctx->r29, 0X270);
    return;
    // 0x6000AD84: addiu       $sp, $sp, 0x270
    ctx->r29 = ADD32(ctx->r29, 0X270);
;}
RECOMP_FUNC void ovl_stage_world1_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x3DD4
    ctx->r2 = ADD32(ctx->r2, 0X3DD4);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x3DD4
    ctx->r2 = ADD32(ctx->r2, 0X3DD4);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_stage_world1_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000014: jr          $t1
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_stage_world1_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000020: jr          $t1
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_stage_world1_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000002C: jr          $t1
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_stage_world1_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000038: jr          $t1
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_stage_world1_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000044: jr          $t1
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_stage_world1_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000050: jr          $t1
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_stage_world1_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000005C: jr          $t1
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_stage_world1_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000068: jr          $t1
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_stage_world1_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000074: jr          $t1
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_stage_world1_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000080: jr          $t1
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_stage_world1_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000008C: jr          $t1
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_stage_world1_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000098: jr          $t1
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_stage_world1_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000A4: jr          $t1
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_stage_world1_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000B0: jr          $t1
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_stage_world1_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000BC: jr          $t1
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_stage_world1_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000C8: jr          $t1
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_stage_world1_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000D4: jr          $t1
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_stage_world1_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000E0: jr          $t1
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_stage_world1_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000EC: jr          $t1
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_stage_world1_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000F8: jr          $t1
    // 0x600000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_stage_world1_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000104: jr          $t1
    // 0x60000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_stage_world1_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000110: jr          $t1
    // 0x60000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_stage_world1_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000011C: jr          $t1
    // 0x60000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_stage_world1_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000128: jr          $t1
    // 0x6000012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_stage_world1_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000134: jr          $t1
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
