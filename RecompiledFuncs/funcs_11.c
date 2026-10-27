#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8001D420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D420: beq         $a0, $zero, L_8001D45C
    if (ctx->r4 == 0) {
        // 0x8001D424: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8001D45C;
    }
    // 0x8001D424: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8001D428: lw          $v0, -0xD48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XD48);
    // 0x8001D42C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001D430: beq         $v0, $zero, L_8001D448
    if (ctx->r2 == 0) {
        // 0x8001D434: addiu       $a0, $a0, -0x48E4
        ctx->r4 = ADD32(ctx->r4, -0X48E4);
            goto L_8001D448;
    }
    // 0x8001D434: addiu       $a0, $a0, -0x48E4
    ctx->r4 = ADD32(ctx->r4, -0X48E4);
    // 0x8001D438: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8001D43C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8001D440: jr          $ra
    // 0x8001D444: sw          $v0, -0xD48($at)
    MEM_W(-0XD48, ctx->r1) = ctx->r2;
    return;
    // 0x8001D444: sw          $v0, -0xD48($at)
    MEM_W(-0XD48, ctx->r1) = ctx->r2;
L_8001D448:
    // 0x8001D448: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8001D44C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8001D450: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8001D454: jr          $ra
    // 0x8001D458: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x8001D458: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
L_8001D45C:
    // 0x8001D45C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001D460: addiu       $a0, $a0, -0x48E4
    ctx->r4 = ADD32(ctx->r4, -0X48E4);
    // 0x8001D464: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8001D468: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8001D46C: andi        $t8, $v1, 0x10
    ctx->r24 = ctx->r3 & 0X10;
    // 0x8001D470: beq         $t8, $zero, L_8001D488
    if (ctx->r24 == 0) {
        // 0x8001D474: ori         $t9, $v1, 0x10
        ctx->r25 = ctx->r3 | 0X10;
            goto L_8001D488;
    }
    // 0x8001D474: ori         $t9, $v1, 0x10
    ctx->r25 = ctx->r3 | 0X10;
    // 0x8001D478: lw          $v0, -0xD48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XD48);
    // 0x8001D47C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8001D480: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001D484: sw          $v0, -0xD48($at)
    MEM_W(-0XD48, ctx->r1) = ctx->r2;
L_8001D488:
    // 0x8001D488: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8001D48C: jr          $ra
    // 0x8001D490: nop

    return;
    // 0x8001D490: nop

;}
RECOMP_FUNC void func_8001D494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D498: sll         $t1, $a0, 24
    ctx->r9 = S32(ctx->r4 << 24);
    // 0x8001D49C: sra         $t6, $t1, 24
    ctx->r14 = S32(SIGNED(ctx->r9) >> 24);
    // 0x8001D4A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D4A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001D4A8: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x8001D4AC: jal         0x8001D420
    // 0x8001D4B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001D4B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001D4B4: bgez        $t1, L_8001D4C0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8001D4B8: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_8001D4C0;
    }
    // 0x8001D4B8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001D4BC: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_8001D4C0:
    // 0x8001D4C0: lw          $a1, -0x48EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48EC);
    // 0x8001D4C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8001D4C8: blez        $a1, L_8001D57C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8001D4CC: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8001D57C;
    }
    // 0x8001D4CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8001D4D0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8001D4D4: addiu       $a3, $a3, -0x48F4
    ctx->r7 = ADD32(ctx->r7, -0X48F4);
L_8001D4D8:
    // 0x8001D4D8: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x8001D4DC: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x8001D4E0: addu        $v0, $a2, $t7
    ctx->r2 = ADD32(ctx->r6, ctx->r15);
    // 0x8001D4E4: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x8001D4E8: addiu       $a2, $a2, 0x2C
    ctx->r6 = ADD32(ctx->r6, 0X2C);
    // 0x8001D4EC: beq         $t0, $t8, L_8001D504
    if (ctx->r8 == ctx->r24) {
        // 0x8001D4F0: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_8001D504;
    }
    // 0x8001D4F0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D4F4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8001D4F8: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D4FC: b           L_8001D570
    // 0x8001D500: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8001D570;
    // 0x8001D500: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8001D504:
    // 0x8001D504: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x8001D508: nop

    // 0x8001D50C: andi        $t9, $v1, 0x10
    ctx->r25 = ctx->r3 & 0X10;
    // 0x8001D510: beq         $t9, $zero, L_8001D530
    if (ctx->r25 == 0) {
        // 0x8001D514: andi        $t6, $v1, 0x1000
        ctx->r14 = ctx->r3 & 0X1000;
            goto L_8001D530;
    }
    // 0x8001D514: andi        $t6, $v1, 0x1000
    ctx->r14 = ctx->r3 & 0X1000;
    // 0x8001D518: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x8001D51C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D520: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8001D524: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D528: b           L_8001D570
    // 0x8001D52C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8001D570;
    // 0x8001D52C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8001D530:
    // 0x8001D530: bne         $t6, $zero, L_8001D54C
    if (ctx->r14 != 0) {
        // 0x8001D534: or          $a0, $t1, $zero
        ctx->r4 = ctx->r9 | 0;
            goto L_8001D54C;
    }
    // 0x8001D534: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8001D538: lbu         $t8, 0x23($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X23);
    // 0x8001D53C: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x8001D540: beq         $t7, $t8, L_8001D54C
    if (ctx->r15 == ctx->r24) {
        // 0x8001D544: ori         $t9, $v1, 0x8
        ctx->r25 = ctx->r3 | 0X8;
            goto L_8001D54C;
    }
    // 0x8001D544: ori         $t9, $v1, 0x8
    ctx->r25 = ctx->r3 | 0X8;
    // 0x8001D548: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
L_8001D54C:
    // 0x8001D54C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001D550: sb          $a0, 0x23($v0)
    MEM_B(0X23, ctx->r2) = ctx->r4;
    // 0x8001D554: lw          $a1, -0x48EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48EC);
    // 0x8001D558: nop

    // 0x8001D55C: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x8001D560: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D564: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8001D568: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D56C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8001D570:
    // 0x8001D570: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8001D574: bne         $at, $zero, L_8001D4D8
    if (ctx->r1 != 0) {
        // 0x8001D578: nop
    
            goto L_8001D4D8;
    }
    // 0x8001D578: nop

L_8001D57C:
    // 0x8001D57C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001D580: sb          $t1, -0x48CE($at)
    MEM_B(-0X48CE, ctx->r1) = ctx->r9;
    // 0x8001D584: jal         0x8001D420
    // 0x8001D588: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x8001D588: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8001D58C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D594: jr          $ra
    // 0x8001D598: nop

    return;
    // 0x8001D598: nop

;}
RECOMP_FUNC void func_8001D59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D59C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D5A0: sll         $a2, $a0, 16
    ctx->r6 = S32(ctx->r4 << 16);
    // 0x8001D5A4: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8001D5A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D5AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001D5B0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8001D5B4: jal         0x8001D420
    // 0x8001D5B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001D5B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001D5BC: slti        $at, $a2, 0x4B1
    ctx->r1 = SIGNED(ctx->r6) < 0X4B1 ? 1 : 0;
    // 0x8001D5C0: bne         $at, $zero, L_8001D5CC
    if (ctx->r1 != 0) {
        // 0x8001D5C4: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_8001D5CC;
    }
    // 0x8001D5C4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001D5C8: addiu       $a2, $zero, 0x4B0
    ctx->r6 = ADD32(0, 0X4B0);
L_8001D5CC:
    // 0x8001D5CC: lw          $a1, -0x48EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48EC);
    // 0x8001D5D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001D5D4: blez        $a1, L_8001D664
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8001D5D8: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8001D664;
    }
    // 0x8001D5D8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8001D5DC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8001D5E0: addiu       $a3, $a3, -0x48F4
    ctx->r7 = ADD32(ctx->r7, -0X48F4);
L_8001D5E4:
    // 0x8001D5E4: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x8001D5E8: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x8001D5EC: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x8001D5F0: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x8001D5F4: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x8001D5F8: beq         $t0, $t8, L_8001D610
    if (ctx->r8 == ctx->r24) {
        // 0x8001D5FC: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_8001D610;
    }
    // 0x8001D5FC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D600: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8001D604: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D608: b           L_8001D658
    // 0x8001D60C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8001D658;
    // 0x8001D60C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8001D610:
    // 0x8001D610: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x8001D614: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001D618: andi        $t9, $v1, 0x1000
    ctx->r25 = ctx->r3 & 0X1000;
    // 0x8001D61C: bne         $t9, $zero, L_8001D638
    if (ctx->r25 != 0) {
        // 0x8001D620: nop
    
            goto L_8001D638;
    }
    // 0x8001D620: nop

    // 0x8001D624: lh          $t6, 0x16($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X16);
    // 0x8001D628: ori         $t7, $v1, 0x1
    ctx->r15 = ctx->r3 | 0X1;
    // 0x8001D62C: beq         $a2, $t6, L_8001D638
    if (ctx->r6 == ctx->r14) {
        // 0x8001D630: nop
    
            goto L_8001D638;
    }
    // 0x8001D630: nop

    // 0x8001D634: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
L_8001D638:
    // 0x8001D638: sh          $a2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r6;
    // 0x8001D63C: lw          $a1, -0x48EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48EC);
    // 0x8001D640: nop

    // 0x8001D644: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x8001D648: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D64C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8001D650: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D654: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8001D658:
    // 0x8001D658: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8001D65C: bne         $at, $zero, L_8001D5E4
    if (ctx->r1 != 0) {
        // 0x8001D660: nop
    
            goto L_8001D5E4;
    }
    // 0x8001D660: nop

L_8001D664:
    // 0x8001D664: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001D668: sh          $a2, -0x48D4($at)
    MEM_H(-0X48D4, ctx->r1) = ctx->r6;
    // 0x8001D66C: jal         0x8001D420
    // 0x8001D670: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x8001D670: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8001D674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D67C: jr          $ra
    // 0x8001D680: nop

    return;
    // 0x8001D680: nop

;}
RECOMP_FUNC void func_8001D684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D68C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001D690: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8001D694: jal         0x8001D420
    // 0x8001D698: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001D698: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001D69C: slti        $at, $a2, 0x80
    ctx->r1 = SIGNED(ctx->r6) < 0X80 ? 1 : 0;
    // 0x8001D6A0: bne         $at, $zero, L_8001D6AC
    if (ctx->r1 != 0) {
        // 0x8001D6A4: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_8001D6AC;
    }
    // 0x8001D6A4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001D6A8: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
L_8001D6AC:
    // 0x8001D6AC: lw          $a1, -0x48EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48EC);
    // 0x8001D6B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001D6B4: blez        $a1, L_8001D744
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8001D6B8: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8001D744;
    }
    // 0x8001D6B8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8001D6BC: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8001D6C0: addiu       $a3, $a3, -0x48F4
    ctx->r7 = ADD32(ctx->r7, -0X48F4);
L_8001D6C4:
    // 0x8001D6C4: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x8001D6C8: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x8001D6CC: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x8001D6D0: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x8001D6D4: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x8001D6D8: beq         $t0, $t7, L_8001D6F0
    if (ctx->r8 == ctx->r15) {
        // 0x8001D6DC: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_8001D6F0;
    }
    // 0x8001D6DC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D6E0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8001D6E4: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D6E8: b           L_8001D738
    // 0x8001D6EC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8001D738;
    // 0x8001D6EC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8001D6F0:
    // 0x8001D6F0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x8001D6F4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001D6F8: andi        $t8, $v1, 0x1000
    ctx->r24 = ctx->r3 & 0X1000;
    // 0x8001D6FC: bne         $t8, $zero, L_8001D718
    if (ctx->r24 != 0) {
        // 0x8001D700: nop
    
            goto L_8001D718;
    }
    // 0x8001D700: nop

    // 0x8001D704: lbu         $t9, 0x22($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X22);
    // 0x8001D708: ori         $t6, $v1, 0x4
    ctx->r14 = ctx->r3 | 0X4;
    // 0x8001D70C: beq         $a2, $t9, L_8001D718
    if (ctx->r6 == ctx->r25) {
        // 0x8001D710: nop
    
            goto L_8001D718;
    }
    // 0x8001D710: nop

    // 0x8001D714: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_8001D718:
    // 0x8001D718: sb          $a2, 0x22($v0)
    MEM_B(0X22, ctx->r2) = ctx->r6;
    // 0x8001D71C: lw          $a1, -0x48EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48EC);
    // 0x8001D720: nop

    // 0x8001D724: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x8001D728: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D72C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8001D730: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D734: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8001D738:
    // 0x8001D738: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8001D73C: bne         $at, $zero, L_8001D6C4
    if (ctx->r1 != 0) {
        // 0x8001D740: nop
    
            goto L_8001D6C4;
    }
    // 0x8001D740: nop

L_8001D744:
    // 0x8001D744: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001D748: sb          $a2, -0x48CF($at)
    MEM_B(-0X48CF, ctx->r1) = ctx->r6;
    // 0x8001D74C: jal         0x8001D420
    // 0x8001D750: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x8001D750: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8001D754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D75C: jr          $ra
    // 0x8001D760: nop

    return;
    // 0x8001D760: nop

;}
RECOMP_FUNC void func_8001D764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D768: sll         $a3, $a0, 24
    ctx->r7 = S32(ctx->r4 << 24);
    // 0x8001D76C: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8001D770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D774: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001D778: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8001D77C: jal         0x8001D420
    // 0x8001D780: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001D780: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001D784: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8001D788: addiu       $a2, $a2, -0x48D0
    ctx->r6 = ADD32(ctx->r6, -0X48D0);
    // 0x8001D78C: sb          $a3, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r7;
    // 0x8001D790: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001D794: lw          $a1, -0x48EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48EC);
    // 0x8001D798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001D79C: blez        $a1, L_8001D838
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8001D7A0: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8001D838;
    }
    // 0x8001D7A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8001D7A4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8001D7A8: addiu       $a3, $a3, -0x48F4
    ctx->r7 = ADD32(ctx->r7, -0X48F4);
L_8001D7AC:
    // 0x8001D7AC: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x8001D7B0: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x8001D7B4: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x8001D7B8: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x8001D7BC: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x8001D7C0: beq         $t0, $t8, L_8001D7D8
    if (ctx->r8 == ctx->r24) {
        // 0x8001D7C4: subu        $v1, $v1, $a1
        ctx->r3 = SUB32(ctx->r3, ctx->r5);
            goto L_8001D7D8;
    }
    // 0x8001D7C4: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D7C8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8001D7CC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D7D0: b           L_8001D82C
    // 0x8001D7D4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8001D82C;
    // 0x8001D7D4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8001D7D8:
    // 0x8001D7D8: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x8001D7DC: nop

    // 0x8001D7E0: andi        $t9, $v1, 0x1000
    ctx->r25 = ctx->r3 & 0X1000;
    // 0x8001D7E4: bne         $t9, $zero, L_8001D804
    if (ctx->r25 != 0) {
        // 0x8001D7E8: nop
    
            goto L_8001D804;
    }
    // 0x8001D7E8: nop

    // 0x8001D7EC: lb          $t6, 0x0($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X0);
    // 0x8001D7F0: lb          $t7, 0x1E($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X1E);
    // 0x8001D7F4: ori         $t8, $v1, 0x2
    ctx->r24 = ctx->r3 | 0X2;
    // 0x8001D7F8: beq         $t6, $t7, L_8001D804
    if (ctx->r14 == ctx->r15) {
        // 0x8001D7FC: nop
    
            goto L_8001D804;
    }
    // 0x8001D7FC: nop

    // 0x8001D800: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
L_8001D804:
    // 0x8001D804: lb          $t9, 0x0($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X0);
    // 0x8001D808: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001D80C: sb          $t9, 0x1E($v0)
    MEM_B(0X1E, ctx->r2) = ctx->r25;
    // 0x8001D810: lw          $a1, -0x48EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48EC);
    // 0x8001D814: nop

    // 0x8001D818: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x8001D81C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D820: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8001D824: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8001D828: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8001D82C:
    // 0x8001D82C: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8001D830: bne         $at, $zero, L_8001D7AC
    if (ctx->r1 != 0) {
        // 0x8001D834: nop
    
            goto L_8001D7AC;
    }
    // 0x8001D834: nop

L_8001D838:
    // 0x8001D838: jal         0x8001D420
    // 0x8001D83C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x8001D83C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8001D840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D848: jr          $ra
    // 0x8001D84C: nop

    return;
    // 0x8001D84C: nop

;}
RECOMP_FUNC void func_8001D850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D850: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001D854: lw          $v1, -0x48EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X48EC);
    // 0x8001D858: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001D85C: blez        $v1, L_8001D8D0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8001D860: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_8001D8D0;
    }
    // 0x8001D860: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8001D864: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8001D868: addiu       $a2, $a2, -0x48F4
    ctx->r6 = ADD32(ctx->r6, -0X48F4);
L_8001D86C:
    // 0x8001D86C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8001D870: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8001D874: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x8001D878: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x8001D87C: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x8001D880: beq         $a3, $t7, L_8001D898
    if (ctx->r7 == ctx->r15) {
        // 0x8001D884: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_8001D898;
    }
    // 0x8001D884: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8001D888: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8001D88C: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8001D890: b           L_8001D8C4
    // 0x8001D894: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
        goto L_8001D8C4;
    // 0x8001D894: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
L_8001D898:
    // 0x8001D898: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8001D89C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001D8A0: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8001D8A4: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x8001D8A8: lw          $v1, -0x48EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X48EC);
    // 0x8001D8AC: nop

    // 0x8001D8B0: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8001D8B4: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8001D8B8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8001D8BC: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8001D8C0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
L_8001D8C4:
    // 0x8001D8C4: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8001D8C8: bne         $at, $zero, L_8001D86C
    if (ctx->r1 != 0) {
        // 0x8001D8CC: nop
    
            goto L_8001D86C;
    }
    // 0x8001D8CC: nop

L_8001D8D0:
    // 0x8001D8D0: jr          $ra
    // 0x8001D8D4: nop

    return;
    // 0x8001D8D4: nop

;}
RECOMP_FUNC void func_8001D8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D8D8: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8001D8DC: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8001D8E0: blez        $t7, L_8001D900
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8001D8E4: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8001D900;
    }
    // 0x8001D8E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001D8E8: sll         $v1, $t7, 8
    ctx->r3 = S32(ctx->r15 << 8);
    // 0x8001D8EC: addiu       $v1, $v1, 0xFF
    ctx->r3 = ADD32(ctx->r3, 0XFF);
    // 0x8001D8F0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8001D8F4: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8001D8F8: jr          $ra
    // 0x8001D8FC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x8001D8FC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8001D900:
    // 0x8001D900: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001D904: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8001D908: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8001D90C: jr          $ra
    // 0x8001D910: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x8001D910: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_8001D914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001D918: sll         $a1, $a0, 24
    ctx->r5 = S32(ctx->r4 << 24);
    // 0x8001D91C: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8001D920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D924: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001D928: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8001D92C: jal         0x8001D420
    // 0x8001D930: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001D930: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001D934: sll         $a0, $a1, 24
    ctx->r4 = S32(ctx->r5 << 24);
    // 0x8001D938: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8001D93C: jal         0x8001D8D8
    // 0x8001D940: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8001D8D8(rdram, ctx);
        goto after_1;
    // 0x8001D940: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x8001D944: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001D948: addiu       $v1, $v1, -0x48D6
    ctx->r3 = ADD32(ctx->r3, -0X48D6);
    // 0x8001D94C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8001D950: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x8001D954: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001D958: jal         0x8001D850
    // 0x8001D95C: sh          $t8, -0x48D8($at)
    MEM_H(-0X48D8, ctx->r1) = ctx->r24;
    func_8001D850(rdram, ctx);
        goto after_2;
    // 0x8001D95C: sh          $t8, -0x48D8($at)
    MEM_H(-0X48D8, ctx->r1) = ctx->r24;
    after_2:
    // 0x8001D960: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001D964: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001D968: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001D96C: jal         0x8001D420
    // 0x8001D970: swc1        $f4, -0x48E0($at)
    MEM_W(-0X48E0, ctx->r1) = ctx->f4.u32l;
    func_8001D420(rdram, ctx);
        goto after_3;
    // 0x8001D970: swc1        $f4, -0x48E0($at)
    MEM_W(-0X48E0, ctx->r1) = ctx->f4.u32l;
    after_3:
    // 0x8001D974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001D97C: jr          $ra
    // 0x8001D980: nop

    return;
    // 0x8001D980: nop

    // 0x8001D984: jr          $ra
    // 0x8001D988: nop

    return;
    // 0x8001D988: nop

;}
RECOMP_FUNC void func_8001D98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D98C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001D990: lw          $t8, 0x8($zero)
    ctx->r24 = MEM_W(0, 0X8);
    // 0x8001D994: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8001D998: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001D99C: sll         $s5, $a0, 16
    ctx->r21 = S32(ctx->r4 << 16);
    // 0x8001D9A0: sll         $s6, $a1, 24
    ctx->r22 = S32(ctx->r5 << 24);
    // 0x8001D9A4: sra         $t7, $s6, 24
    ctx->r15 = S32(SIGNED(ctx->r22) >> 24);
    // 0x8001D9A8: sra         $t6, $s5, 16
    ctx->r14 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8001D9AC: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x8001D9B0: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x8001D9B4: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    // 0x8001D9B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001D9BC: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8001D9C0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8001D9C4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001D9C8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001D9CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001D9D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001D9D4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8001D9D8: bne         $t9, $zero, L_8001DADC
    if (ctx->r25 != 0) {
        // 0x8001D9DC: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_8001DADC;
    }
    // 0x8001D9DC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8001D9E0: jal         0x8001D420
    // 0x8001D9E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001D9E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001D9E8: sll         $t6, $s5, 2
    ctx->r14 = S32(ctx->r21 << 2);
    // 0x8001D9EC: subu        $t6, $t6, $s5
    ctx->r14 = SUB32(ctx->r14, ctx->r21);
    // 0x8001D9F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001D9F4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8001D9F8: lw          $t7, -0x48F4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48F4);
    // 0x8001D9FC: subu        $t6, $t6, $s5
    ctx->r14 = SUB32(ctx->r14, ctx->r21);
    // 0x8001DA00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001DA04: addu        $s7, $t6, $t7
    ctx->r23 = ADD32(ctx->r14, ctx->r15);
    // 0x8001DA08: lw          $t8, 0xC($s7)
    ctx->r24 = MEM_W(ctx->r23, 0XC);
    // 0x8001DA0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001DA10: beq         $t8, $at, L_8001DA28
    if (ctx->r24 == ctx->r1) {
        // 0x8001DA14: nop
    
            goto L_8001DA28;
    }
    // 0x8001DA14: nop

    // 0x8001DA18: jal         0x8001D420
    // 0x8001DA1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x8001DA1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8001DA20: b           L_8001DAE0
    // 0x8001DA24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8001DAE0;
    // 0x8001DA24: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8001DA28:
    // 0x8001DA28: bgez        $s6, L_8001DA34
    if (SIGNED(ctx->r22) >= 0) {
        // 0x8001DA2C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8001DA34;
    }
    // 0x8001DA2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001DA30: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_8001DA34:
    // 0x8001DA34: lw          $v0, 0x8($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X8);
    // 0x8001DA38: nop

    // 0x8001DA3C: andi        $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 & 0X1000;
    // 0x8001DA40: bne         $t9, $zero, L_8001DAD0
    if (ctx->r25 != 0) {
        // 0x8001DA44: nop
    
            goto L_8001DAD0;
    }
    // 0x8001DA44: nop

    // 0x8001DA48: lb          $t7, 0x25($s7)
    ctx->r15 = MEM_B(ctx->r23, 0X25);
    // 0x8001DA4C: ori         $t6, $v0, 0x8
    ctx->r14 = ctx->r2 | 0X8;
    // 0x8001DA50: bne         $t7, $at, L_8001DAD0
    if (ctx->r15 != ctx->r1) {
        // 0x8001DA54: sw          $t6, 0x8($s7)
        MEM_W(0X8, ctx->r23) = ctx->r14;
            goto L_8001DAD0;
    }
    // 0x8001DA54: sw          $t6, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r14;
    // 0x8001DA58: addiu       $s3, $zero, 0x58
    ctx->r19 = ADD32(0, 0X58);
    // 0x8001DA5C: multu       $s5, $s3
    result = U64(U32(ctx->r21)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DA60: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8001DA64: addiu       $s4, $s4, -0x48C8
    ctx->r20 = ADD32(ctx->r20, -0X48C8);
    // 0x8001DA68: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8001DA6C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001DA70: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8001DA74: mflo        $t8
    ctx->r24 = lo;
    // 0x8001DA78: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8001DA7C: lb          $t6, 0x17($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X17);
    // 0x8001DA80: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8001DA84: beq         $t6, $zero, L_8001DAD0
    if (ctx->r14 == 0) {
        // 0x8001DA88: nop
    
            goto L_8001DAD0;
    }
    // 0x8001DA88: nop

L_8001DA8C:
    // 0x8001DA8C: lb          $v0, 0x14($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X14);
    // 0x8001DA90: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8001DA94: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DA98: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8001DA9C: sll         $a1, $s6, 24
    ctx->r5 = S32(ctx->r22 << 24);
    // 0x8001DAA0: mflo        $t8
    ctx->r24 = lo;
    // 0x8001DAA4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001DAA8: lh          $t6, 0xA($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XA);
    // 0x8001DAAC: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001DAB0: bne         $s5, $t6, L_8001DAC4
    if (ctx->r21 != ctx->r14) {
        // 0x8001DAB4: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_8001DAC4;
    }
    // 0x8001DAB4: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8001DAB8: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8001DABC: jal         0x8001D98C
    // 0x8001DAC0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8001D98C(rdram, ctx);
        goto after_2;
    // 0x8001DAC0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_2:
L_8001DAC4:
    // 0x8001DAC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001DAC8: bne         $s0, $s2, L_8001DA8C
    if (ctx->r16 != ctx->r18) {
        // 0x8001DACC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8001DA8C;
    }
    // 0x8001DACC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8001DAD0:
    // 0x8001DAD0: sb          $s6, 0x23($s7)
    MEM_B(0X23, ctx->r23) = ctx->r22;
    // 0x8001DAD4: jal         0x8001D420
    // 0x8001DAD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_3;
    // 0x8001DAD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
L_8001DADC:
    // 0x8001DADC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8001DAE0:
    // 0x8001DAE0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001DAE4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001DAE8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DAEC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001DAF0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8001DAF4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001DAF8: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8001DAFC: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8001DB00: jr          $ra
    // 0x8001DB04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001DB04: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001DB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DB08: jr          $ra
    // 0x8001DB0C: nop

    return;
    // 0x8001DB0C: nop

;}
RECOMP_FUNC void func_8001DB10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DB10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001DB14: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8001DB18: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001DB1C: sll         $s5, $a0, 16
    ctx->r21 = S32(ctx->r4 << 16);
    // 0x8001DB20: sll         $s6, $a1, 16
    ctx->r22 = S32(ctx->r5 << 16);
    // 0x8001DB24: sra         $t7, $s6, 16
    ctx->r15 = S32(SIGNED(ctx->r22) >> 16);
    // 0x8001DB28: sra         $t6, $s5, 16
    ctx->r14 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8001DB2C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001DB30: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8001DB34: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x8001DB38: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    // 0x8001DB3C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8001DB40: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8001DB44: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001DB48: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001DB4C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001DB50: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001DB54: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8001DB58: jal         0x8001D420
    // 0x8001DB5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001DB5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001DB60: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x8001DB64: subu        $t8, $t8, $s5
    ctx->r24 = SUB32(ctx->r24, ctx->r21);
    // 0x8001DB68: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001DB6C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001DB70: lw          $t9, -0x48F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48F4);
    // 0x8001DB74: subu        $t8, $t8, $s5
    ctx->r24 = SUB32(ctx->r24, ctx->r21);
    // 0x8001DB78: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001DB7C: addu        $s7, $t8, $t9
    ctx->r23 = ADD32(ctx->r24, ctx->r25);
    // 0x8001DB80: lw          $t6, 0xC($s7)
    ctx->r14 = MEM_W(ctx->r23, 0XC);
    // 0x8001DB84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001DB88: beq         $t6, $at, L_8001DBA4
    if (ctx->r14 == ctx->r1) {
        // 0x8001DB8C: slti        $at, $s6, 0x4B1
        ctx->r1 = SIGNED(ctx->r22) < 0X4B1 ? 1 : 0;
            goto L_8001DBA4;
    }
    // 0x8001DB8C: slti        $at, $s6, 0x4B1
    ctx->r1 = SIGNED(ctx->r22) < 0X4B1 ? 1 : 0;
    // 0x8001DB90: jal         0x8001D420
    // 0x8001DB94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x8001DB94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8001DB98: b           L_8001DC5C
    // 0x8001DB9C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8001DC5C;
    // 0x8001DB9C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001DBA0: slti        $at, $s6, 0x4B1
    ctx->r1 = SIGNED(ctx->r22) < 0X4B1 ? 1 : 0;
L_8001DBA4:
    // 0x8001DBA4: bne         $at, $zero, L_8001DBB0
    if (ctx->r1 != 0) {
        // 0x8001DBA8: nop
    
            goto L_8001DBB0;
    }
    // 0x8001DBA8: nop

    // 0x8001DBAC: addiu       $s6, $zero, 0x4B0
    ctx->r22 = ADD32(0, 0X4B0);
L_8001DBB0:
    // 0x8001DBB0: lw          $v0, 0x8($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X8);
    // 0x8001DBB4: nop

    // 0x8001DBB8: andi        $t7, $v0, 0x1000
    ctx->r15 = ctx->r2 & 0X1000;
    // 0x8001DBBC: bne         $t7, $zero, L_8001DC4C
    if (ctx->r15 != 0) {
        // 0x8001DBC0: ori         $t8, $v0, 0x1
        ctx->r24 = ctx->r2 | 0X1;
            goto L_8001DC4C;
    }
    // 0x8001DBC0: ori         $t8, $v0, 0x1
    ctx->r24 = ctx->r2 | 0X1;
    // 0x8001DBC4: lb          $t9, 0x25($s7)
    ctx->r25 = MEM_B(ctx->r23, 0X25);
    // 0x8001DBC8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001DBCC: bne         $t9, $at, L_8001DC4C
    if (ctx->r25 != ctx->r1) {
        // 0x8001DBD0: sw          $t8, 0x8($s7)
        MEM_W(0X8, ctx->r23) = ctx->r24;
            goto L_8001DC4C;
    }
    // 0x8001DBD0: sw          $t8, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r24;
    // 0x8001DBD4: addiu       $s3, $zero, 0x58
    ctx->r19 = ADD32(0, 0X58);
    // 0x8001DBD8: multu       $s5, $s3
    result = U64(U32(ctx->r21)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DBDC: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8001DBE0: addiu       $s4, $s4, -0x48C8
    ctx->r20 = ADD32(ctx->r20, -0X48C8);
    // 0x8001DBE4: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8001DBE8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001DBEC: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8001DBF0: mflo        $t6
    ctx->r14 = lo;
    // 0x8001DBF4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8001DBF8: lb          $t8, 0x17($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X17);
    // 0x8001DBFC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8001DC00: beq         $t8, $zero, L_8001DC4C
    if (ctx->r24 == 0) {
        // 0x8001DC04: nop
    
            goto L_8001DC4C;
    }
    // 0x8001DC04: nop

L_8001DC08:
    // 0x8001DC08: lb          $v0, 0x14($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X14);
    // 0x8001DC0C: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8001DC10: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DC14: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8001DC18: sll         $a1, $s6, 16
    ctx->r5 = S32(ctx->r22 << 16);
    // 0x8001DC1C: mflo        $t6
    ctx->r14 = lo;
    // 0x8001DC20: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8001DC24: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x8001DC28: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001DC2C: bne         $s5, $t8, L_8001DC40
    if (ctx->r21 != ctx->r24) {
        // 0x8001DC30: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_8001DC40;
    }
    // 0x8001DC30: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8001DC34: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001DC38: jal         0x8001DB10
    // 0x8001DC3C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8001DB10(rdram, ctx);
        goto after_2;
    // 0x8001DC3C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
L_8001DC40:
    // 0x8001DC40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001DC44: bne         $s0, $s2, L_8001DC08
    if (ctx->r16 != ctx->r18) {
        // 0x8001DC48: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8001DC08;
    }
    // 0x8001DC48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8001DC4C:
    // 0x8001DC4C: sh          $s6, 0x16($s7)
    MEM_H(0X16, ctx->r23) = ctx->r22;
    // 0x8001DC50: jal         0x8001D420
    // 0x8001DC54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_3;
    // 0x8001DC54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8001DC58: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8001DC5C:
    // 0x8001DC5C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001DC60: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001DC64: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DC68: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001DC6C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8001DC70: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001DC74: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8001DC78: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8001DC7C: jr          $ra
    // 0x8001DC80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001DC80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001DC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DC84: jr          $ra
    // 0x8001DC88: nop

    return;
    // 0x8001DC88: nop

;}
RECOMP_FUNC void func_8001DC8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DC8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001DC90: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001DC94: sll         $s5, $a0, 16
    ctx->r21 = S32(ctx->r4 << 16);
    // 0x8001DC98: sra         $t6, $s5, 16
    ctx->r14 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8001DC9C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001DCA0: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8001DCA4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8001DCA8: andi        $s6, $a1, 0xFF
    ctx->r22 = ctx->r5 & 0XFF;
    // 0x8001DCAC: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x8001DCB0: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8001DCB4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8001DCB8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001DCBC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001DCC0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001DCC4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001DCC8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8001DCCC: jal         0x8001D420
    // 0x8001DCD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001DCD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001DCD4: sll         $t7, $s5, 2
    ctx->r15 = S32(ctx->r21 << 2);
    // 0x8001DCD8: subu        $t7, $t7, $s5
    ctx->r15 = SUB32(ctx->r15, ctx->r21);
    // 0x8001DCDC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001DCE0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001DCE4: lw          $t8, -0x48F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48F4);
    // 0x8001DCE8: subu        $t7, $t7, $s5
    ctx->r15 = SUB32(ctx->r15, ctx->r21);
    // 0x8001DCEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001DCF0: addu        $s7, $t7, $t8
    ctx->r23 = ADD32(ctx->r15, ctx->r24);
    // 0x8001DCF4: lw          $t9, 0xC($s7)
    ctx->r25 = MEM_W(ctx->r23, 0XC);
    // 0x8001DCF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001DCFC: beq         $t9, $at, L_8001DD18
    if (ctx->r25 == ctx->r1) {
        // 0x8001DD00: slti        $at, $s6, 0x80
        ctx->r1 = SIGNED(ctx->r22) < 0X80 ? 1 : 0;
            goto L_8001DD18;
    }
    // 0x8001DD00: slti        $at, $s6, 0x80
    ctx->r1 = SIGNED(ctx->r22) < 0X80 ? 1 : 0;
    // 0x8001DD04: jal         0x8001D420
    // 0x8001DD08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x8001DD08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8001DD0C: b           L_8001DDC8
    // 0x8001DD10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8001DDC8;
    // 0x8001DD10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8001DD14: slti        $at, $s6, 0x80
    ctx->r1 = SIGNED(ctx->r22) < 0X80 ? 1 : 0;
L_8001DD18:
    // 0x8001DD18: bne         $at, $zero, L_8001DD24
    if (ctx->r1 != 0) {
        // 0x8001DD1C: nop
    
            goto L_8001DD24;
    }
    // 0x8001DD1C: nop

    // 0x8001DD20: addiu       $s6, $zero, 0x7F
    ctx->r22 = ADD32(0, 0X7F);
L_8001DD24:
    // 0x8001DD24: lw          $v0, 0x8($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X8);
    // 0x8001DD28: nop

    // 0x8001DD2C: andi        $t6, $v0, 0x1000
    ctx->r14 = ctx->r2 & 0X1000;
    // 0x8001DD30: bne         $t6, $zero, L_8001DDB8
    if (ctx->r14 != 0) {
        // 0x8001DD34: ori         $t7, $v0, 0x4
        ctx->r15 = ctx->r2 | 0X4;
            goto L_8001DDB8;
    }
    // 0x8001DD34: ori         $t7, $v0, 0x4
    ctx->r15 = ctx->r2 | 0X4;
    // 0x8001DD38: lb          $t8, 0x25($s7)
    ctx->r24 = MEM_B(ctx->r23, 0X25);
    // 0x8001DD3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001DD40: bne         $t8, $at, L_8001DDB8
    if (ctx->r24 != ctx->r1) {
        // 0x8001DD44: sw          $t7, 0x8($s7)
        MEM_W(0X8, ctx->r23) = ctx->r15;
            goto L_8001DDB8;
    }
    // 0x8001DD44: sw          $t7, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r15;
    // 0x8001DD48: addiu       $s3, $zero, 0x58
    ctx->r19 = ADD32(0, 0X58);
    // 0x8001DD4C: multu       $s5, $s3
    result = U64(U32(ctx->r21)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DD50: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8001DD54: addiu       $s4, $s4, -0x48C8
    ctx->r20 = ADD32(ctx->r20, -0X48C8);
    // 0x8001DD58: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8001DD5C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001DD60: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8001DD64: mflo        $t9
    ctx->r25 = lo;
    // 0x8001DD68: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x8001DD6C: lb          $t7, 0x17($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X17);
    // 0x8001DD70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8001DD74: beq         $t7, $zero, L_8001DDB8
    if (ctx->r15 == 0) {
        // 0x8001DD78: nop
    
            goto L_8001DDB8;
    }
    // 0x8001DD78: nop

L_8001DD7C:
    // 0x8001DD7C: lb          $v0, 0x14($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X14);
    // 0x8001DD80: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x8001DD84: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DD88: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8001DD8C: mflo        $t9
    ctx->r25 = lo;
    // 0x8001DD90: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8001DD94: lh          $t7, 0xA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA);
    // 0x8001DD98: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001DD9C: bne         $s5, $t7, L_8001DDAC
    if (ctx->r21 != ctx->r15) {
        // 0x8001DDA0: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_8001DDAC;
    }
    // 0x8001DDA0: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8001DDA4: jal         0x8001DC8C
    // 0x8001DDA8: andi        $a1, $s6, 0xFF
    ctx->r5 = ctx->r22 & 0XFF;
    func_8001DC8C(rdram, ctx);
        goto after_2;
    // 0x8001DDA8: andi        $a1, $s6, 0xFF
    ctx->r5 = ctx->r22 & 0XFF;
    after_2:
L_8001DDAC:
    // 0x8001DDAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001DDB0: bne         $s0, $s2, L_8001DD7C
    if (ctx->r16 != ctx->r18) {
        // 0x8001DDB4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8001DD7C;
    }
    // 0x8001DDB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8001DDB8:
    // 0x8001DDB8: sb          $s6, 0x22($s7)
    MEM_B(0X22, ctx->r23) = ctx->r22;
    // 0x8001DDBC: jal         0x8001D420
    // 0x8001DDC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_3;
    // 0x8001DDC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8001DDC4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8001DDC8:
    // 0x8001DDC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001DDCC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001DDD0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DDD4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001DDD8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8001DDDC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001DDE0: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8001DDE4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8001DDE8: jr          $ra
    // 0x8001DDEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001DDEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001DDF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DDF0: jr          $ra
    // 0x8001DDF4: nop

    return;
    // 0x8001DDF4: nop

;}
RECOMP_FUNC void func_8001DDF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DDF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001DDFC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8001DE00: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001DE04: sll         $s5, $a0, 16
    ctx->r21 = S32(ctx->r4 << 16);
    // 0x8001DE08: sll         $s6, $a1, 24
    ctx->r22 = S32(ctx->r5 << 24);
    // 0x8001DE0C: sra         $t7, $s6, 24
    ctx->r15 = S32(SIGNED(ctx->r22) >> 24);
    // 0x8001DE10: sra         $t6, $s5, 16
    ctx->r14 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8001DE14: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8001DE18: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8001DE1C: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x8001DE20: or          $s6, $t7, $zero
    ctx->r22 = ctx->r15 | 0;
    // 0x8001DE24: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8001DE28: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8001DE2C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001DE30: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001DE34: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001DE38: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001DE3C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8001DE40: jal         0x8001D420
    // 0x8001DE44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001DE44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001DE48: sll         $t8, $s5, 2
    ctx->r24 = S32(ctx->r21 << 2);
    // 0x8001DE4C: subu        $t8, $t8, $s5
    ctx->r24 = SUB32(ctx->r24, ctx->r21);
    // 0x8001DE50: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001DE54: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001DE58: lw          $t9, -0x48F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48F4);
    // 0x8001DE5C: subu        $t8, $t8, $s5
    ctx->r24 = SUB32(ctx->r24, ctx->r21);
    // 0x8001DE60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001DE64: addu        $s7, $t8, $t9
    ctx->r23 = ADD32(ctx->r24, ctx->r25);
    // 0x8001DE68: lw          $t6, 0xC($s7)
    ctx->r14 = MEM_W(ctx->r23, 0XC);
    // 0x8001DE6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001DE70: beq         $t6, $at, L_8001DE88
    if (ctx->r14 == ctx->r1) {
        // 0x8001DE74: nop
    
            goto L_8001DE88;
    }
    // 0x8001DE74: nop

    // 0x8001DE78: jal         0x8001D420
    // 0x8001DE7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x8001DE7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8001DE80: b           L_8001DF34
    // 0x8001DE84: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8001DF34;
    // 0x8001DE84: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8001DE88:
    // 0x8001DE88: lw          $v0, 0x8($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X8);
    // 0x8001DE8C: nop

    // 0x8001DE90: andi        $t7, $v0, 0x1000
    ctx->r15 = ctx->r2 & 0X1000;
    // 0x8001DE94: bne         $t7, $zero, L_8001DF24
    if (ctx->r15 != 0) {
        // 0x8001DE98: ori         $t8, $v0, 0x2
        ctx->r24 = ctx->r2 | 0X2;
            goto L_8001DF24;
    }
    // 0x8001DE98: ori         $t8, $v0, 0x2
    ctx->r24 = ctx->r2 | 0X2;
    // 0x8001DE9C: lb          $t9, 0x25($s7)
    ctx->r25 = MEM_B(ctx->r23, 0X25);
    // 0x8001DEA0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001DEA4: bne         $t9, $at, L_8001DF24
    if (ctx->r25 != ctx->r1) {
        // 0x8001DEA8: sw          $t8, 0x8($s7)
        MEM_W(0X8, ctx->r23) = ctx->r24;
            goto L_8001DF24;
    }
    // 0x8001DEA8: sw          $t8, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r24;
    // 0x8001DEAC: addiu       $s3, $zero, 0x58
    ctx->r19 = ADD32(0, 0X58);
    // 0x8001DEB0: multu       $s5, $s3
    result = U64(U32(ctx->r21)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DEB4: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8001DEB8: addiu       $s4, $s4, -0x48C8
    ctx->r20 = ADD32(ctx->r20, -0X48C8);
    // 0x8001DEBC: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x8001DEC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001DEC4: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8001DEC8: mflo        $t6
    ctx->r14 = lo;
    // 0x8001DECC: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8001DED0: lb          $t8, 0x17($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X17);
    // 0x8001DED4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8001DED8: beq         $t8, $zero, L_8001DF24
    if (ctx->r24 == 0) {
        // 0x8001DEDC: nop
    
            goto L_8001DF24;
    }
    // 0x8001DEDC: nop

L_8001DEE0:
    // 0x8001DEE0: lb          $v0, 0x14($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X14);
    // 0x8001DEE4: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8001DEE8: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001DEEC: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8001DEF0: sll         $a1, $s6, 24
    ctx->r5 = S32(ctx->r22 << 24);
    // 0x8001DEF4: mflo        $t6
    ctx->r14 = lo;
    // 0x8001DEF8: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8001DEFC: lh          $t8, 0xA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA);
    // 0x8001DF00: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001DF04: bne         $s5, $t8, L_8001DF18
    if (ctx->r21 != ctx->r24) {
        // 0x8001DF08: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_8001DF18;
    }
    // 0x8001DF08: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8001DF0C: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8001DF10: jal         0x8001DDF8
    // 0x8001DF14: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8001DDF8(rdram, ctx);
        goto after_2;
    // 0x8001DF14: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
L_8001DF18:
    // 0x8001DF18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001DF1C: bne         $s0, $s2, L_8001DEE0
    if (ctx->r16 != ctx->r18) {
        // 0x8001DF20: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8001DEE0;
    }
    // 0x8001DF20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8001DF24:
    // 0x8001DF24: sb          $s6, 0x1E($s7)
    MEM_B(0X1E, ctx->r23) = ctx->r22;
    // 0x8001DF28: jal         0x8001D420
    // 0x8001DF2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_3;
    // 0x8001DF2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8001DF30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8001DF34:
    // 0x8001DF34: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001DF38: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001DF3C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DF40: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001DF44: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8001DF48: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001DF4C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8001DF50: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8001DF54: jr          $ra
    // 0x8001DF58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001DF58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001DF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DF5C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001DF60: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8001DF64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001DF68: addiu       $v1, $v1, -0x48C4
    ctx->r3 = ADD32(ctx->r3, -0X48C4);
    // 0x8001DF6C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001DF70: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8001DF74: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001DF78: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001DF7C: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x8001DF80: sll         $v0, $t7, 4
    ctx->r2 = S32(ctx->r15 << 4);
    // 0x8001DF84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001DF88: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8001DF8C: bc1f        L_8001DFA8
    if (!c1cs) {
        // 0x8001DF90: swc1        $f12, 0x0($t9)
        MEM_W(0X0, ctx->r25) = ctx->f12.u32l;
            goto L_8001DFA8;
    }
    // 0x8001DF90: swc1        $f12, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f12.u32l;
    // 0x8001DF94: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8001DF98: neg.s       $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = -ctx->f14.fl;
    // 0x8001DF9C: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x8001DFA0: jr          $ra
    // 0x8001DFA4: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
    return;
    // 0x8001DFA4: swc1        $f6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f6.u32l;
L_8001DFA8:
    // 0x8001DFA8: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8001DFAC: nop

    // 0x8001DFB0: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x8001DFB4: swc1        $f14, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f14.u32l;
    // 0x8001DFB8: jr          $ra
    // 0x8001DFBC: nop

    return;
    // 0x8001DFBC: nop

    // 0x8001DFC0: jr          $ra
    // 0x8001DFC4: nop

    return;
    // 0x8001DFC4: nop

    // 0x8001DFC8: jr          $ra
    // 0x8001DFCC: nop

    return;
    // 0x8001DFCC: nop

;}
RECOMP_FUNC void func_8001DFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DFD0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8001DFD4: sll         $t4, $a0, 16
    ctx->r12 = S32(ctx->r4 << 16);
    // 0x8001DFD8: sra         $t6, $t4, 16
    ctx->r14 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8001DFDC: or          $t4, $t6, $zero
    ctx->r12 = ctx->r14 | 0;
    // 0x8001DFE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001DFE4: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8001DFE8: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8001DFEC: bltz        $t6, L_8001E578
    if (SIGNED(ctx->r14) < 0) {
        // 0x8001DFF0: sw          $a2, 0x70($sp)
        MEM_W(0X70, ctx->r29) = ctx->r6;
            goto L_8001E578;
    }
    // 0x8001DFF0: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8001DFF4: jal         0x8001D420
    // 0x8001DFF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001DFF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001DFFC: addiu       $t5, $zero, 0x2C
    ctx->r13 = ADD32(0, 0X2C);
    // 0x8001E000: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E004: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8001E008: addiu       $t0, $t0, -0x48F4
    ctx->r8 = ADD32(ctx->r8, -0X48F4);
    // 0x8001E00C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x8001E010: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001E014: lwc1        $f14, 0x70($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8001E018: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001E01C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001E020: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E024: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8001E028: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    // 0x8001E02C: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x8001E030: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x8001E034: beq         $t6, $at, L_8001E04C
    if (ctx->r14 == ctx->r1) {
        // 0x8001E038: nop
    
            goto L_8001E04C;
    }
    // 0x8001E038: nop

    // 0x8001E03C: jal         0x8001D420
    // 0x8001E040: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x8001E040: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8001E044: b           L_8001E57C
    // 0x8001E048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001E57C;
    // 0x8001E048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E04C:
    // 0x8001E04C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8001E050: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E054: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8001E058: nop

    // 0x8001E05C: bc1f        L_8001E068
    if (!c1cs) {
        // 0x8001E060: nop
    
            goto L_8001E068;
    }
    // 0x8001E060: nop

    // 0x8001E064: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_8001E068:
    // 0x8001E068: lwc1        $f4, -0x48C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X48C0);
    // 0x8001E06C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E070: sub.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8001E074: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8001E078: nop

    // 0x8001E07C: bc1f        L_8001E08C
    if (!c1cs) {
        // 0x8001E080: nop
    
            goto L_8001E08C;
    }
    // 0x8001E080: nop

    // 0x8001E084: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001E088: nop

L_8001E08C:
    // 0x8001E08C: lwc1        $f2, -0x48BC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X48BC);
    // 0x8001E090: lw          $t8, -0x48C4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48C4);
    // 0x8001E094: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x8001E098: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001E09C: bc1f        L_8001E12C
    if (!c1cs) {
        // 0x8001E0A0: sw          $t9, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r25;
            goto L_8001E12C;
    }
    // 0x8001E0A0: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x8001E0A4: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8001E0A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001E0AC: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8001E0B0: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x8001E0B4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8001E0B8: nop

    // 0x8001E0BC: div.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8001E0C0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8001E0C4: nop

    // 0x8001E0C8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8001E0CC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001E0D0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001E0D4: nop

    // 0x8001E0D8: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8001E0DC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8001E0E0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8001E0E4: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x8001E0E8: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8001E0EC: slti        $at, $a3, 0x80
    ctx->r1 = SIGNED(ctx->r7) < 0X80 ? 1 : 0;
    // 0x8001E0F0: bne         $at, $zero, L_8001E0FC
    if (ctx->r1 != 0) {
        // 0x8001E0F4: nop
    
            goto L_8001E0FC;
    }
    // 0x8001E0F4: nop

    // 0x8001E0F8: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
L_8001E0FC:
    // 0x8001E0FC: lb          $v0, 0xE($t9)
    ctx->r2 = MEM_B(ctx->r25, 0XE);
    // 0x8001E100: nop

    // 0x8001E104: andi        $v1, $v0, 0x7F
    ctx->r3 = ctx->r2 & 0X7F;
    // 0x8001E108: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8001E10C: beq         $at, $zero, L_8001E12C
    if (ctx->r1 == 0) {
        // 0x8001E110: andi        $t6, $v0, 0x80
        ctx->r14 = ctx->r2 & 0X80;
            goto L_8001E12C;
    }
    // 0x8001E110: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x8001E114: beq         $t6, $zero, L_8001E12C
    if (ctx->r14 == 0) {
        // 0x8001E118: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8001E12C;
    }
    // 0x8001E118: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001E11C: sll         $a3, $v1, 16
    ctx->r7 = S32(ctx->r3 << 16);
    // 0x8001E120: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8001E124: b           L_8001E12C
    // 0x8001E128: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
        goto L_8001E12C;
    // 0x8001E128: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
L_8001E12C:
    // 0x8001E12C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8001E130: or          $ra, $a0, $zero
    ctx->r31 = ctx->r4 | 0;
    // 0x8001E134: andi        $t8, $v0, 0x1000
    ctx->r24 = ctx->r2 & 0X1000;
    // 0x8001E138: bne         $t8, $zero, L_8001E1E4
    if (ctx->r24 != 0) {
        // 0x8001E13C: ori         $t9, $v0, 0x2
        ctx->r25 = ctx->r2 | 0X2;
            goto L_8001E1E4;
    }
    // 0x8001E13C: ori         $t9, $v0, 0x2
    ctx->r25 = ctx->r2 | 0X2;
    // 0x8001E140: lb          $t6, 0x25($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X25);
    // 0x8001E144: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001E148: bne         $t6, $at, L_8001E1E4
    if (ctx->r14 != ctx->r1) {
        // 0x8001E14C: sw          $t9, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r25;
            goto L_8001E1E4;
    }
    // 0x8001E14C: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x8001E150: addiu       $t2, $zero, 0x58
    ctx->r10 = ADD32(0, 0X58);
    // 0x8001E154: multu       $t4, $t2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E158: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8001E15C: addiu       $t3, $t3, -0x48C8
    ctx->r11 = ADD32(ctx->r11, -0X48C8);
    // 0x8001E160: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x8001E164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001E168: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8001E16C: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E170: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8001E174: lb          $t9, 0x17($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X17);
    // 0x8001E178: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8001E17C: beq         $t9, $zero, L_8001E1E8
    if (ctx->r25 == 0) {
        // 0x8001E180: lh          $v1, 0x6E($sp)
        ctx->r3 = MEM_H(ctx->r29, 0X6E);
            goto L_8001E1E8;
    }
    // 0x8001E180: lh          $v1, 0x6E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X6E);
L_8001E184:
    // 0x8001E184: lb          $a2, 0x14($a1)
    ctx->r6 = MEM_B(ctx->r5, 0X14);
    // 0x8001E188: lw          $t6, 0x0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X0);
    // 0x8001E18C: multu       $a2, $t2
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E190: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001E194: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E198: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8001E19C: lh          $t9, 0xA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA);
    // 0x8001E1A0: nop

    // 0x8001E1A4: bne         $t4, $t9, L_8001E1DC
    if (ctx->r12 != ctx->r25) {
        // 0x8001E1A8: nop
    
            goto L_8001E1DC;
    }
    // 0x8001E1A8: nop

    // 0x8001E1AC: multu       $a2, $t5
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E1B0: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x8001E1B4: mflo        $v0
    ctx->r2 = lo;
    // 0x8001E1B8: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8001E1BC: sb          $a3, 0x1F($t7)
    MEM_B(0X1F, ctx->r15) = ctx->r7;
    // 0x8001E1C0: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x8001E1C4: nop

    // 0x8001E1C8: addu        $v1, $t8, $v0
    ctx->r3 = ADD32(ctx->r24, ctx->r2);
    // 0x8001E1CC: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x8001E1D0: nop

    // 0x8001E1D4: ori         $t6, $t9, 0x2
    ctx->r14 = ctx->r25 | 0X2;
    // 0x8001E1D8: sw          $t6, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r14;
L_8001E1DC:
    // 0x8001E1DC: bne         $a0, $t1, L_8001E184
    if (ctx->r4 != ctx->r9) {
        // 0x8001E1E0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8001E184;
    }
    // 0x8001E1E0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8001E1E4:
    // 0x8001E1E4: lh          $v1, 0x6E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X6E);
L_8001E1E8:
    // 0x8001E1E8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8001E1EC: sb          $a3, 0x1F($ra)
    MEM_B(0X1F, ctx->r31) = ctx->r7;
    // 0x8001E1F0: lh          $t7, -0x48B0($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X48B0);
    // 0x8001E1F4: sll         $a0, $t4, 16
    ctx->r4 = S32(ctx->r12 << 16);
    // 0x8001E1F8: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x8001E1FC: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x8001E200: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8001E204: slti        $at, $t9, 0x168
    ctx->r1 = SIGNED(ctx->r25) < 0X168 ? 1 : 0;
    // 0x8001E208: bne         $at, $zero, L_8001E21C
    if (ctx->r1 != 0) {
        // 0x8001E20C: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_8001E21C;
    }
    // 0x8001E20C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x8001E210: addiu       $v1, $t9, -0x168
    ctx->r3 = ADD32(ctx->r25, -0X168);
    // 0x8001E214: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8001E218: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
L_8001E21C:
    // 0x8001E21C: slti        $at, $v1, 0xB5
    ctx->r1 = SIGNED(ctx->r3) < 0XB5 ? 1 : 0;
    // 0x8001E220: bne         $at, $zero, L_8001E234
    if (ctx->r1 != 0) {
        // 0x8001E224: addiu       $t8, $zero, 0x168
        ctx->r24 = ADD32(0, 0X168);
            goto L_8001E234;
    }
    // 0x8001E224: addiu       $t8, $zero, 0x168
    ctx->r24 = ADD32(0, 0X168);
    // 0x8001E228: subu        $v1, $t8, $v1
    ctx->r3 = SUB32(ctx->r24, ctx->r3);
    // 0x8001E22C: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x8001E230: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
L_8001E234:
    // 0x8001E234: sll         $v0, $v1, 7
    ctx->r2 = S32(ctx->r3 << 7);
    // 0x8001E238: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x8001E23C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x8001E240: mflo        $t7
    ctx->r15 = lo;
    // 0x8001E244: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8001E248: slti        $at, $t8, 0x80
    ctx->r1 = SIGNED(ctx->r24) < 0X80 ? 1 : 0;
    // 0x8001E24C: bne         $at, $zero, L_8001E258
    if (ctx->r1 != 0) {
        // 0x8001E250: andi        $a1, $t7, 0xFF
        ctx->r5 = ctx->r15 & 0XFF;
            goto L_8001E258;
    }
    // 0x8001E250: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x8001E254: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
L_8001E258:
    // 0x8001E258: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E25C: lwc1        $f2, -0x48B4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X48B4);
    // 0x8001E260: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E264: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8001E268: nop

    // 0x8001E26C: bc1t        L_8001E358
    if (c1cs) {
        // 0x8001E270: sra         $t9, $a0, 16
        ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
            goto L_8001E358;
    }
    // 0x8001E270: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001E274: lwc1        $f8, -0x48B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X48B8);
    // 0x8001E278: nop

    // 0x8001E27C: sub.s       $f0, $f14, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f8.fl;
    // 0x8001E280: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8001E284: nop

    // 0x8001E288: bc1f        L_8001E294
    if (!c1cs) {
        // 0x8001E28C: nop
    
            goto L_8001E294;
    }
    // 0x8001E28C: nop

    // 0x8001E290: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8001E294:
    // 0x8001E294: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x8001E298: nop

    // 0x8001E29C: bc1f        L_8001E354
    if (!c1cs) {
        // 0x8001E2A0: nop
    
            goto L_8001E354;
    }
    // 0x8001E2A0: nop

    // 0x8001E2A4: div.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8001E2A8: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x8001E2AC: subu        $t6, $t9, $a1
    ctx->r14 = SUB32(ctx->r25, ctx->r5);
    // 0x8001E2B0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8001E2B4: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x8001E2B8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001E2BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001E2C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8001E2C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8001E2C8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8001E2CC: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8001E2D0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001E2D4: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8001E2D8: nop

    // 0x8001E2DC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8001E2E0: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8001E2E4: nop

    // 0x8001E2E8: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8001E2EC: beq         $a1, $zero, L_8001E338
    if (ctx->r5 == 0) {
        // 0x8001E2F0: nop
    
            goto L_8001E338;
    }
    // 0x8001E2F0: nop

    // 0x8001E2F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8001E2F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8001E2FC: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8001E300: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001E304: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x8001E308: nop

    // 0x8001E30C: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8001E310: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x8001E314: nop

    // 0x8001E318: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x8001E31C: bne         $a1, $zero, L_8001E330
    if (ctx->r5 != 0) {
        // 0x8001E320: nop
    
            goto L_8001E330;
    }
    // 0x8001E320: nop

    // 0x8001E324: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8001E328: b           L_8001E348
    // 0x8001E32C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_8001E348;
    // 0x8001E32C: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_8001E330:
    // 0x8001E330: b           L_8001E348
    // 0x8001E334: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_8001E348;
    // 0x8001E334: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_8001E338:
    // 0x8001E338: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8001E33C: nop

    // 0x8001E340: bltz        $a1, L_8001E330
    if (SIGNED(ctx->r5) < 0) {
        // 0x8001E344: nop
    
            goto L_8001E330;
    }
    // 0x8001E344: nop

L_8001E348:
    // 0x8001E348: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001E34C: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x8001E350: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_8001E354:
    // 0x8001E354: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
L_8001E358:
    // 0x8001E358: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8001E35C: sh          $t4, 0x6A($sp)
    MEM_H(0X6A, ctx->r29) = ctx->r12;
    // 0x8001E360: jal         0x8001DC8C
    // 0x8001E364: swc1        $f14, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f14.u32l;
    func_8001DC8C(rdram, ctx);
        goto after_2;
    // 0x8001E364: swc1        $f14, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f14.u32l;
    after_2:
    // 0x8001E368: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x8001E36C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001E370: lwc1        $f16, 0x0($ra)
    ctx->f16.u32l = MEM_W(ctx->r31, 0X0);
    // 0x8001E374: lwc1        $f18, 0x4($ra)
    ctx->f18.u32l = MEM_W(ctx->r31, 0X4);
    // 0x8001E378: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8001E37C: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8001E380: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8001E384: c.eq.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl == ctx->f8.fl;
    // 0x8001E388: lh          $t4, 0x6A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X6A);
    // 0x8001E38C: addiu       $t3, $t3, -0x48C8
    ctx->r11 = ADD32(ctx->r11, -0X48C8);
    // 0x8001E390: addiu       $t0, $t0, -0x48F4
    ctx->r8 = ADD32(ctx->r8, -0X48F4);
    // 0x8001E394: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8001E398: addiu       $t2, $zero, 0x58
    ctx->r10 = ADD32(0, 0X58);
    // 0x8001E39C: bc1t        L_8001E564
    if (c1cs) {
        // 0x8001E3A0: addiu       $t5, $zero, 0x2C
        ctx->r13 = ADD32(0, 0X2C);
            goto L_8001E564;
    }
    // 0x8001E3A0: addiu       $t5, $zero, 0x2C
    ctx->r13 = ADD32(0, 0X2C);
    // 0x8001E3A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E3A8: lwc1        $f2, -0x48A8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X48A8);
    // 0x8001E3AC: lwc1        $f14, 0x8($ra)
    ctx->f14.u32l = MEM_W(ctx->r31, 0X8);
    // 0x8001E3B0: mul.s       $f0, $f16, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x8001E3B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001E3B8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8001E3BC: c.le.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl <= ctx->f14.fl;
    // 0x8001E3C0: mul.s       $f12, $f18, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x8001E3C4: bc1f        L_8001E478
    if (!c1cs) {
        // 0x8001E3C8: nop
    
            goto L_8001E478;
    }
    // 0x8001E3C8: nop

    // 0x8001E3CC: c.lt.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl < ctx->f6.fl;
    // 0x8001E3D0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8001E3D4: bc1f        L_8001E478
    if (!c1cs) {
        // 0x8001E3D8: nop
    
            goto L_8001E478;
    }
    // 0x8001E3D8: nop

    // 0x8001E3DC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8001E3E0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001E3E4: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8001E3E8: addiu       $a0, $a0, -0x48AE
    ctx->r4 = ADD32(ctx->r4, -0X48AE);
    // 0x8001E3EC: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8001E3F0: lh          $v1, 0xC($ra)
    ctx->r3 = MEM_H(ctx->r31, 0XC);
    // 0x8001E3F4: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8001E3F8: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8001E3FC: beq         $at, $zero, L_8001E47C
    if (ctx->r1 == 0) {
        // 0x8001E400: nop
    
            goto L_8001E47C;
    }
    // 0x8001E400: nop

    // 0x8001E404: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x8001E408: sub.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x8001E40C: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001E410: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8001E414: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001E418: nop

    // 0x8001E41C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8001E420: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001E424: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001E428: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8001E42C: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8001E430: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001E434: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8001E438: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001E43C: sh          $t8, 0xC($ra)
    MEM_H(0XC, ctx->r31) = ctx->r24;
    // 0x8001E440: lh          $t9, 0xC($ra)
    ctx->r25 = MEM_H(ctx->r31, 0XC);
    // 0x8001E444: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8001E448: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
    // 0x8001E44C: subu        $t6, $v0, $t9
    ctx->r14 = SUB32(ctx->r2, ctx->r25);
    // 0x8001E450: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8001E454: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8001E458: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8001E45C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001E460: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001E464: nop

    // 0x8001E468: div.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8001E46C: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8001E470: b           L_8001E47C
    // 0x8001E474: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
        goto L_8001E47C;
    // 0x8001E474: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
L_8001E478:
    // 0x8001E478: sh          $zero, 0xC($ra)
    MEM_H(0XC, ctx->r31) = 0;
L_8001E47C:
    // 0x8001E47C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E480: lwc1        $f2, -0x48AC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X48AC);
    // 0x8001E484: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001E488: sub.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8001E48C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E490: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8001E494: nop

    // 0x8001E498: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8001E49C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8001E4A0: nop

    // 0x8001E4A4: bc1t        L_8001E564
    if (c1cs) {
        // 0x8001E4A8: nop
    
            goto L_8001E564;
    }
    // 0x8001E4A8: nop

    // 0x8001E4AC: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x8001E4B0: nop

    // 0x8001E4B4: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x8001E4B8: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x8001E4BC: nop

    // 0x8001E4C0: andi        $t9, $v0, 0x1000
    ctx->r25 = ctx->r2 & 0X1000;
    // 0x8001E4C4: bne         $t9, $zero, L_8001E560
    if (ctx->r25 != 0) {
        // 0x8001E4C8: ori         $t6, $v0, 0x1
        ctx->r14 = ctx->r2 | 0X1;
            goto L_8001E560;
    }
    // 0x8001E4C8: ori         $t6, $v0, 0x1
    ctx->r14 = ctx->r2 | 0X1;
    // 0x8001E4CC: lb          $t7, 0x25($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X25);
    // 0x8001E4D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001E4D4: bne         $t7, $at, L_8001E560
    if (ctx->r15 != ctx->r1) {
        // 0x8001E4D8: sw          $t6, 0x8($a3)
        MEM_W(0X8, ctx->r7) = ctx->r14;
            goto L_8001E560;
    }
    // 0x8001E4D8: sw          $t6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r14;
    // 0x8001E4DC: multu       $t4, $t2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E4E0: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x8001E4E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001E4E8: mflo        $t8
    ctx->r24 = lo;
    // 0x8001E4EC: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8001E4F0: lb          $t6, 0x17($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X17);
    // 0x8001E4F4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8001E4F8: beq         $t6, $zero, L_8001E560
    if (ctx->r14 == 0) {
        // 0x8001E4FC: nop
    
            goto L_8001E560;
    }
    // 0x8001E4FC: nop

L_8001E500:
    // 0x8001E500: lb          $a2, 0x14($a1)
    ctx->r6 = MEM_B(ctx->r5, 0X14);
    // 0x8001E504: lw          $t7, 0x0($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X0);
    // 0x8001E508: multu       $a2, $t2
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E50C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8001E510: mflo        $t8
    ctx->r24 = lo;
    // 0x8001E514: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001E518: lh          $t6, 0xA($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XA);
    // 0x8001E51C: nop

    // 0x8001E520: bne         $t4, $t6, L_8001E558
    if (ctx->r12 != ctx->r14) {
        // 0x8001E524: nop
    
            goto L_8001E558;
    }
    // 0x8001E524: nop

    // 0x8001E528: multu       $a2, $t5
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E52C: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x8001E530: mflo        $v0
    ctx->r2 = lo;
    // 0x8001E534: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8001E538: swc1        $f0, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f0.u32l;
    // 0x8001E53C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x8001E540: nop

    // 0x8001E544: addu        $v1, $t9, $v0
    ctx->r3 = ADD32(ctx->r25, ctx->r2);
    // 0x8001E548: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x8001E54C: nop

    // 0x8001E550: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x8001E554: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
L_8001E558:
    // 0x8001E558: bne         $a0, $t1, L_8001E500
    if (ctx->r4 != ctx->r9) {
        // 0x8001E55C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8001E500;
    }
    // 0x8001E55C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8001E560:
    // 0x8001E560: swc1        $f0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f0.u32l;
L_8001E564:
    // 0x8001E564: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8001E568: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001E56C: swc1        $f8, 0x8($ra)
    MEM_W(0X8, ctx->r31) = ctx->f8.u32l;
    // 0x8001E570: jal         0x8001D420
    // 0x8001E574: nop

    func_8001D420(rdram, ctx);
        goto after_3;
    // 0x8001E574: nop

    after_3:
L_8001E578:
    // 0x8001E578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E57C:
    // 0x8001E57C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8001E580: jr          $ra
    // 0x8001E584: nop

    return;
    // 0x8001E584: nop

;}
RECOMP_FUNC void func_8001E588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E588: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8001E58C: addiu       $t1, $t1, -0x48E4
    ctx->r9 = ADD32(ctx->r9, -0X48E4);
    // 0x8001E590: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8001E594: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x8001E598: sra         $t6, $t0, 16
    ctx->r14 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8001E59C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E5A0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8001E5A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E5A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001E5AC: beq         $t8, $zero, L_8001E6C4
    if (ctx->r24 == 0) {
        // 0x8001E5B0: or          $t0, $t6, $zero
        ctx->r8 = ctx->r14 | 0;
            goto L_8001E6C4;
    }
    // 0x8001E5B0: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x8001E5B4: jal         0x8001D420
    // 0x8001E5B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001E5B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001E5BC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001E5C0: lw          $a1, -0x48EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48EC);
    // 0x8001E5C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001E5C8: blez        $a1, L_8001E63C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8001E5CC: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_8001E63C;
    }
    // 0x8001E5CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8001E5D0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8001E5D4: addiu       $a2, $a2, -0x48F4
    ctx->r6 = ADD32(ctx->r6, -0X48F4);
L_8001E5D8:
    // 0x8001E5D8: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x8001E5DC: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x8001E5E0: addu        $v1, $v0, $t9
    ctx->r3 = ADD32(ctx->r2, ctx->r25);
    // 0x8001E5E4: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x8001E5E8: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x8001E5EC: beq         $a3, $t6, L_8001E604
    if (ctx->r7 == ctx->r14) {
        // 0x8001E5F0: subu        $a0, $a0, $a1
        ctx->r4 = SUB32(ctx->r4, ctx->r5);
            goto L_8001E604;
    }
    // 0x8001E5F0: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x8001E5F4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8001E5F8: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x8001E5FC: b           L_8001E630
    // 0x8001E600: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
        goto L_8001E630;
    // 0x8001E600: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
L_8001E604:
    // 0x8001E604: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x8001E608: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001E60C: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x8001E610: sw          $t8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r24;
    // 0x8001E614: lw          $a1, -0x48EC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48EC);
    // 0x8001E618: nop

    // 0x8001E61C: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x8001E620: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x8001E624: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8001E628: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x8001E62C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
L_8001E630:
    // 0x8001E630: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8001E634: bne         $at, $zero, L_8001E5D8
    if (ctx->r1 != 0) {
        // 0x8001E638: nop
    
            goto L_8001E5D8;
    }
    // 0x8001E638: nop

L_8001E63C:
    // 0x8001E63C: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x8001E640: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8001E644: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x8001E648: beq         $t0, $zero, L_8001E674
    if (ctx->r8 == 0) {
        // 0x8001E64C: sw          $t6, 0x0($t1)
        MEM_W(0X0, ctx->r9) = ctx->r14;
            goto L_8001E674;
    }
    // 0x8001E64C: sw          $t6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r14;
    // 0x8001E650: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8001E654: addiu       $t1, $t1, -0x48E0
    ctx->r9 = ADD32(ctx->r9, -0X48E0);
    // 0x8001E658: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8001E65C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001E660: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E664: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8001E668: nop

    // 0x8001E66C: bc1f        L_8001E684
    if (!c1cs) {
        // 0x8001E670: nop
    
            goto L_8001E684;
    }
    // 0x8001E670: nop

L_8001E674:
    // 0x8001E674: jal         0x8001D420
    // 0x8001E678: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_1;
    // 0x8001E678: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8001E67C: b           L_8001E6C8
    // 0x8001E680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8001E6C8;
    // 0x8001E680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E684:
    // 0x8001E684: swc1        $f0, -0x48DC($at)
    MEM_W(-0X48DC, ctx->r1) = ctx->f0.u32l;
    // 0x8001E688: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E68C: jal         0x8001D850
    // 0x8001E690: sh          $zero, -0x48D6($at)
    MEM_H(-0X48D6, ctx->r1) = 0;
    func_8001D850(rdram, ctx);
        goto after_2;
    // 0x8001E690: sh          $zero, -0x48D6($at)
    MEM_H(-0X48D6, ctx->r1) = 0;
    after_2:
    // 0x8001E694: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8001E698: lh          $t7, -0x48D8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X48D8);
    // 0x8001E69C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8001E6A0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8001E6A4: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001E6A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001E6AC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001E6B0: nop

    // 0x8001E6B4: div.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8001E6B8: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x8001E6BC: jal         0x8001D420
    // 0x8001E6C0: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
    func_8001D420(rdram, ctx);
        goto after_3;
    // 0x8001E6C0: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
    after_3:
L_8001E6C4:
    // 0x8001E6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E6C8:
    // 0x8001E6C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E6CC: jr          $ra
    // 0x8001E6D0: nop

    return;
    // 0x8001E6D0: nop

    // 0x8001E6D4: jr          $ra
    // 0x8001E6D8: nop

    return;
    // 0x8001E6D8: nop

;}
RECOMP_FUNC void func_8001E6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E6DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001E6E0: sw          $s3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r19;
    // 0x8001E6E4: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x8001E6E8: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001E6EC: addiu       $s4, $zero, 0x58
    ctx->r20 = ADD32(0, 0X58);
    // 0x8001E6F0: multu       $s3, $s4
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E6F4: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8001E6F8: addiu       $s5, $s5, -0x48C8
    ctx->r21 = ADD32(ctx->r21, -0X48C8);
    // 0x8001E6FC: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x8001E700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001E704: mflo        $t8
    ctx->r24 = lo;
    // 0x8001E708: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8001E70C: lb          $t6, 0x17($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X17);
    // 0x8001E710: nop

    // 0x8001E714: beq         $t6, $zero, L_8001E768
    if (ctx->r14 == 0) {
        // 0x8001E718: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8001E768;
    }
    // 0x8001E718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001E71C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001E720: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8001E724: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
L_8001E728:
    // 0x8001E728: lb          $v0, 0x14($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X14);
    // 0x8001E72C: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x8001E730: multu       $v0, $s4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E734: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8001E738: mflo        $t8
    ctx->r24 = lo;
    // 0x8001E73C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001E740: lh          $t6, 0xA($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XA);
    // 0x8001E744: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001E748: bne         $s3, $t6, L_8001E758
    if (ctx->r19 != ctx->r14) {
        // 0x8001E74C: nop
    
            goto L_8001E758;
    }
    // 0x8001E74C: nop

    // 0x8001E750: jal         0x8001E774
    // 0x8001E754: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8001E774(rdram, ctx);
        goto after_0;
    // 0x8001E754: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
L_8001E758:
    // 0x8001E758: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001E75C: bne         $s0, $s2, L_8001E728
    if (ctx->r16 != ctx->r18) {
        // 0x8001E760: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8001E728;
    }
    // 0x8001E760: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001E764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8001E768:
    // 0x8001E768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001E76C: jr          $ra
    // 0x8001E770: nop

    return;
    // 0x8001E770: nop

;}
RECOMP_FUNC void func_8001E774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E774: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001E778: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8001E77C: lh          $t6, 0x3A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X3A);
    // 0x8001E780: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001E784: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8001E788: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001E78C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001E790: lw          $t8, -0x48F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48F4);
    // 0x8001E794: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8001E798: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001E79C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001E7A0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001E7A4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8001E7A8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001E7AC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001E7B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001E7B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001E7B8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8001E7BC: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x8001E7C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001E7C4: bne         $t9, $at, L_8001E88C
    if (ctx->r25 != ctx->r1) {
        // 0x8001E7C8: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8001E88C;
    }
    // 0x8001E7C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8001E7CC: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x8001E7D0: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x8001E7D4: andi        $t6, $v1, 0x1000
    ctx->r14 = ctx->r3 & 0X1000;
    // 0x8001E7D8: beq         $t6, $zero, L_8001E7E8
    if (ctx->r14 == 0) {
        // 0x8001E7DC: and         $t7, $v1, $at
        ctx->r15 = ctx->r3 & ctx->r1;
            goto L_8001E7E8;
    }
    // 0x8001E7DC: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x8001E7E0: b           L_8001E840
    // 0x8001E7E4: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
        goto L_8001E840;
    // 0x8001E7E4: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
L_8001E7E8:
    // 0x8001E7E8: lb          $t8, 0x25($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X25);
    // 0x8001E7EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001E7F0: bne         $t8, $at, L_8001E80C
    if (ctx->r24 != ctx->r1) {
        // 0x8001E7F4: nop
    
            goto L_8001E80C;
    }
    // 0x8001E7F4: nop

    // 0x8001E7F8: lh          $s3, 0x3A($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X3A);
    // 0x8001E7FC: jal         0x8001E6DC
    // 0x8001E800: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_8001E6DC(rdram, ctx);
        goto after_0;
    // 0x8001E800: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x8001E804: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8001E808: nop

L_8001E80C:
    // 0x8001E80C: lh          $a1, 0x12($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X12);
    // 0x8001E810: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001E814: bltz        $a1, L_8001E844
    if (SIGNED(ctx->r5) < 0) {
        // 0x8001E818: addiu       $t9, $zero, 0x2
        ctx->r25 = ADD32(0, 0X2);
            goto L_8001E844;
    }
    // 0x8001E818: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8001E81C: lw          $a0, -0x48FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48FC);
    // 0x8001E820: jal         0x8007D930
    // 0x8001E824: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    alSndpSetSound(rdram, ctx);
        goto after_1;
    // 0x8001E824: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x8001E828: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001E82C: lw          $a0, -0x48FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48FC);
    // 0x8001E830: jal         0x8007DBC0
    // 0x8001E834: nop

    alSndpStop(rdram, ctx);
        goto after_2;
    // 0x8001E834: nop

    after_2:
    // 0x8001E838: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8001E83C: nop

L_8001E840:
    // 0x8001E840: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
L_8001E844:
    // 0x8001E844: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x8001E848: sb          $zero, 0x25($v0)
    MEM_B(0X25, ctx->r2) = 0;
    // 0x8001E84C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001E850: lw          $t6, -0x48CC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48CC);
    // 0x8001E854: lh          $t7, 0x3A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3A);
    // 0x8001E858: beq         $t6, $zero, L_8001E888
    if (ctx->r14 == 0) {
        // 0x8001E85C: sll         $t8, $t7, 2
        ctx->r24 = S32(ctx->r15 << 2);
            goto L_8001E888;
    }
    // 0x8001E85C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8001E860: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001E864: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001E868: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001E86C: lw          $t9, -0x48C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48C8);
    // 0x8001E870: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001E874: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8001E878: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8001E87C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8001E880: sh          $t6, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r14;
    // 0x8001E884: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_8001E888:
    // 0x8001E888: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8001E88C:
    // 0x8001E88C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001E890: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001E894: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E898: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001E89C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8001E8A0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001E8A4: jr          $ra
    // 0x8001E8A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8001E8A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8001E8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E8AC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001E8B0: addiu       $a1, $a1, -0x48E4
    ctx->r5 = ADD32(ctx->r5, -0X48E4);
    // 0x8001E8B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001E8B8: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8001E8BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001E8C0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8001E8C4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001E8C8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001E8CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001E8D0: bne         $t7, $zero, L_8001E980
    if (ctx->r15 != 0) {
        // 0x8001E8D4: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8001E980;
    }
    // 0x8001E8D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001E8D8: jal         0x8001D420
    // 0x8001E8DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001E8DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001E8E0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x8001E8E4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001E8E8: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x8001E8EC: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8001E8F0: lw          $v1, -0x48EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X48EC);
    // 0x8001E8F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001E8F8: blez        $v1, L_8001E96C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8001E8FC: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_8001E96C;
    }
    // 0x8001E8FC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8001E900: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8001E904: addiu       $s2, $s2, -0x48F4
    ctx->r18 = ADD32(ctx->r18, -0X48F4);
    // 0x8001E908: addiu       $s1, $zero, 0x2C
    ctx->r17 = ADD32(0, 0X2C);
L_8001E90C:
    // 0x8001E90C: multu       $s0, $s1
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001E910: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8001E914: mflo        $t6
    ctx->r14 = lo;
    // 0x8001E918: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8001E91C: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x8001E920: nop

    // 0x8001E924: bne         $s3, $t8, L_8001E954
    if (ctx->r19 != ctx->r24) {
        // 0x8001E928: nop
    
            goto L_8001E954;
    }
    // 0x8001E928: nop

    // 0x8001E92C: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x8001E930: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x8001E934: andi        $t6, $t9, 0x40
    ctx->r14 = ctx->r25 & 0X40;
    // 0x8001E938: beq         $t6, $zero, L_8001E954
    if (ctx->r14 == 0) {
        // 0x8001E93C: sra         $t7, $a0, 16
        ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
            goto L_8001E954;
    }
    // 0x8001E93C: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001E940: jal         0x8001E774
    // 0x8001E944: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8001E774(rdram, ctx);
        goto after_1;
    // 0x8001E944: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x8001E948: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8001E94C: lw          $v1, -0x48EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X48EC);
    // 0x8001E950: nop

L_8001E954:
    // 0x8001E954: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001E958: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x8001E95C: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8001E960: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8001E964: bne         $at, $zero, L_8001E90C
    if (ctx->r1 != 0) {
        // 0x8001E968: nop
    
            goto L_8001E90C;
    }
    // 0x8001E968: nop

L_8001E96C:
    // 0x8001E96C: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x8001E970: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E974: sh          $t6, -0x48D2($at)
    MEM_H(-0X48D2, ctx->r1) = ctx->r14;
    // 0x8001E978: jal         0x8001D420
    // 0x8001E97C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_2;
    // 0x8001E97C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
L_8001E980:
    // 0x8001E980: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8001E984: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001E988: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001E98C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001E990: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001E994: jr          $ra
    // 0x8001E998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001E998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001E99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E99C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E9A0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8001E9A4: lwc1        $f0, -0x48E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X48E0);
    // 0x8001E9A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001E9AC: c.eq.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl == ctx->f0.fl;
    // 0x8001E9B0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001E9B4: bc1f        L_8001E9C4
    if (!c1cs) {
        // 0x8001E9B8: nop
    
            goto L_8001E9C4;
    }
    // 0x8001E9B8: nop

    // 0x8001E9BC: jr          $ra
    // 0x8001E9C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8001E9C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001E9C4:
    // 0x8001E9C4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8001E9C8: nop

    // 0x8001E9CC: bc1f        L_8001E9DC
    if (!c1cs) {
        // 0x8001E9D0: nop
    
            goto L_8001E9DC;
    }
    // 0x8001E9D0: nop

    // 0x8001E9D4: b           L_8001E9E0
    // 0x8001E9D8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_8001E9E0;
    // 0x8001E9D8: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_8001E9DC:
    // 0x8001E9DC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8001E9E0:
    // 0x8001E9E0: lh          $t6, -0x48D8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X48D8);
    // 0x8001E9E4: lwc1        $f10, -0x48DC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X48DC);
    // 0x8001E9E8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8001E9EC: div.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8001E9F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001E9F4: nop

    // 0x8001E9F8: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8001E9FC: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8001EA00: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8001EA04: nop

    // 0x8001EA08: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8001EA0C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001EA10: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001EA14: nop

    // 0x8001EA18: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8001EA1C: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x8001EA20: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8001EA24: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x8001EA28: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x8001EA2C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8001EA30: bc1f        L_8001EA44
    if (!c1cs) {
        // 0x8001EA34: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_8001EA44;
    }
    // 0x8001EA34: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x8001EA38: negu        $v1, $t9
    ctx->r3 = SUB32(0, ctx->r25);
    // 0x8001EA3C: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x8001EA40: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
L_8001EA44:
    // 0x8001EA44: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001EA48: jr          $ra
    // 0x8001EA4C: nop

    return;
    // 0x8001EA4C: nop

;}
RECOMP_FUNC void func_8001EA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EA50: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001EA54: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001EA58: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001EA5C: bgez        $a0, L_8001EA68
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8001EA60: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8001EA68;
    }
    // 0x8001EA60: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001EA64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8001EA68:
    // 0x8001EA68: lh          $t8, -0x48D8($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X48D8);
    // 0x8001EA6C: mtc1        $a0, $f10
    ctx->f10.u32l = ctx->r4;
    // 0x8001EA70: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8001EA74: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001EA78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001EA7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001EA80: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001EA84: swc1        $f4, -0x48DC($at)
    MEM_W(-0X48DC, ctx->r1) = ctx->f4.u32l;
    // 0x8001EA88: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001EA8C: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8001EA90: jr          $ra
    // 0x8001EA94: swc1        $f18, -0x48E0($at)
    MEM_W(-0X48E0, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x8001EA94: swc1        $f18, -0x48E0($at)
    MEM_W(-0X48E0, ctx->r1) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_8001EA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EA98: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8001EA9C: lw          $t7, -0x48E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48E4);
    // 0x8001EAA0: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x8001EAA4: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001EAA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001EAAC: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8001EAB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001EAB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001EAB8: beq         $t8, $zero, L_8001EAE0
    if (ctx->r24 == 0) {
        // 0x8001EABC: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_8001EAE0;
    }
    // 0x8001EABC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8001EAC0: jal         0x8001D420
    // 0x8001EAC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001EAC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001EAC8: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x8001EACC: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001EAD0: jal         0x8001E774
    // 0x8001EAD4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8001E774(rdram, ctx);
        goto after_1;
    // 0x8001EAD4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_1:
    // 0x8001EAD8: jal         0x8001D420
    // 0x8001EADC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_2;
    // 0x8001EADC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
L_8001EAE0:
    // 0x8001EAE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001EAE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001EAE8: jr          $ra
    // 0x8001EAEC: nop

    return;
    // 0x8001EAEC: nop

;}
RECOMP_FUNC void func_8001EAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EAF0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001EAF4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001EAF8: lw          $t6, -0x48E4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48E4);
    // 0x8001EAFC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001EB00: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8001EB04: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001EB08: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001EB0C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001EB10: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001EB14: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001EB18: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001EB1C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001EB20: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001EB24: beq         $t7, $zero, L_8001EC38
    if (ctx->r15 == 0) {
        // 0x8001EB28: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8001EC38;
    }
    // 0x8001EB28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001EB2C: jal         0x8001D420
    // 0x8001EB30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001EB30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001EB34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001EB38: lw          $v0, -0x48EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48EC);
    // 0x8001EB3C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8001EB40: blez        $v0, L_8001EC30
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8001EB44: addiu       $s7, $zero, 0x2
        ctx->r23 = ADD32(0, 0X2);
            goto L_8001EC30;
    }
    // 0x8001EB44: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    // 0x8001EB48: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x8001EB4C: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8001EB50: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8001EB54: addiu       $s2, $s2, -0x48FC
    ctx->r18 = ADD32(ctx->r18, -0X48FC);
    // 0x8001EB58: addiu       $s4, $s4, -0x48F4
    ctx->r20 = ADD32(ctx->r20, -0X48F4);
    // 0x8001EB5C: addiu       $fp, $fp, -0x48CC
    ctx->r30 = ADD32(ctx->r30, -0X48CC);
    // 0x8001EB60: addiu       $s6, $zero, -0x1001
    ctx->r22 = ADD32(0, -0X1001);
    // 0x8001EB64: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8001EB68: addiu       $s3, $zero, 0x2C
    ctx->r19 = ADD32(0, 0X2C);
L_8001EB6C:
    // 0x8001EB6C: multu       $s1, $s3
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001EB70: lw          $t9, 0x0($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X0);
    // 0x8001EB74: mflo        $t8
    ctx->r24 = lo;
    // 0x8001EB78: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x8001EB7C: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x8001EB80: nop

    // 0x8001EB84: bne         $s5, $t6, L_8001EC18
    if (ctx->r21 != ctx->r14) {
        // 0x8001EB88: nop
    
            goto L_8001EC18;
    }
    // 0x8001EB88: nop

    // 0x8001EB8C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8001EB90: nop

    // 0x8001EB94: andi        $t7, $v0, 0x1000
    ctx->r15 = ctx->r2 & 0X1000;
    // 0x8001EB98: beq         $t7, $zero, L_8001EBA8
    if (ctx->r15 == 0) {
        // 0x8001EB9C: and         $t8, $v0, $s6
        ctx->r24 = ctx->r2 & ctx->r22;
            goto L_8001EBA8;
    }
    // 0x8001EB9C: and         $t8, $v0, $s6
    ctx->r24 = ctx->r2 & ctx->r22;
    // 0x8001EBA0: b           L_8001EBD0
    // 0x8001EBA4: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
        goto L_8001EBD0;
    // 0x8001EBA4: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
L_8001EBA8:
    // 0x8001EBA8: lh          $a1, 0x12($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X12);
    // 0x8001EBAC: nop

    // 0x8001EBB0: bltz        $a1, L_8001EBD0
    if (SIGNED(ctx->r5) < 0) {
        // 0x8001EBB4: nop
    
            goto L_8001EBD0;
    }
    // 0x8001EBB4: nop

    // 0x8001EBB8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8001EBBC: jal         0x8007D930
    // 0x8001EBC0: nop

    alSndpSetSound(rdram, ctx);
        goto after_1;
    // 0x8001EBC0: nop

    after_1:
    // 0x8001EBC4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8001EBC8: jal         0x8007DBC0
    // 0x8001EBCC: nop

    alSndpStop(rdram, ctx);
        goto after_2;
    // 0x8001EBCC: nop

    after_2:
L_8001EBD0:
    // 0x8001EBD0: sw          $s7, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r23;
    // 0x8001EBD4: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8001EBD8: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8001EBDC: beq         $t9, $zero, L_8001EC08
    if (ctx->r25 == 0) {
        // 0x8001EBE0: subu        $t6, $t6, $s1
        ctx->r14 = SUB32(ctx->r14, ctx->r17);
            goto L_8001EC08;
    }
    // 0x8001EBE0: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x8001EBE4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001EBE8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8001EBEC: lw          $t7, -0x48C8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48C8);
    // 0x8001EBF0: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x8001EBF4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8001EBF8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8001EBFC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8001EC00: sh          $t8, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r24;
    // 0x8001EC04: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_8001EC08:
    // 0x8001EC08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001EC0C: sb          $zero, 0x25($s0)
    MEM_B(0X25, ctx->r16) = 0;
    // 0x8001EC10: lw          $v0, -0x48EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48EC);
    // 0x8001EC14: nop

L_8001EC18:
    // 0x8001EC18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001EC1C: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x8001EC20: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8001EC24: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8001EC28: bne         $at, $zero, L_8001EB6C
    if (ctx->r1 != 0) {
        // 0x8001EC2C: nop
    
            goto L_8001EB6C;
    }
    // 0x8001EC2C: nop

L_8001EC30:
    // 0x8001EC30: jal         0x8001D420
    // 0x8001EC34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_3;
    // 0x8001EC34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
L_8001EC38:
    // 0x8001EC38: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001EC3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001EC40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001EC44: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001EC48: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001EC4C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001EC50: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EC54: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001EC58: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001EC5C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001EC60: jr          $ra
    // 0x8001EC64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8001EC64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001EC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EC68: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001EC6C: lw          $t6, -0x48E4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48E4);
    // 0x8001EC70: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001EC74: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8001EC78: bne         $t7, $zero, L_8001EC88
    if (ctx->r15 != 0) {
        // 0x8001EC7C: nop
    
            goto L_8001EC88;
    }
    // 0x8001EC7C: nop

    // 0x8001EC80: jr          $ra
    // 0x8001EC84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8001EC84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001EC88:
    // 0x8001EC88: lw          $t8, -0x48F8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48F8);
    // 0x8001EC8C: nop

    // 0x8001EC90: lh          $v0, 0x2($t8)
    ctx->r2 = MEM_H(ctx->r24, 0X2);
    // 0x8001EC94: nop

    // 0x8001EC98: jr          $ra
    // 0x8001EC9C: nop

    return;
    // 0x8001EC9C: nop

;}
RECOMP_FUNC void func_8001ECA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ECA0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001ECA4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001ECA8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8001ECAC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001ECB0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8001ECB4: lw          $t0, -0x48E4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X48E4);
    // 0x8001ECB8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001ECBC: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001ECC0: lw          $t9, -0x48F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48F4);
    // 0x8001ECC4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001ECC8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001ECCC: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8001ECD0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001ECD4: beq         $t1, $zero, L_8001ECF4
    if (ctx->r9 == 0) {
        // 0x8001ECD8: addu        $v1, $t8, $t9
        ctx->r3 = ADD32(ctx->r24, ctx->r25);
            goto L_8001ECF4;
    }
    // 0x8001ECD8: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8001ECDC: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x8001ECE0: nop

    // 0x8001ECE4: beq         $t2, $zero, L_8001ECF4
    if (ctx->r10 == 0) {
        // 0x8001ECE8: nop
    
            goto L_8001ECF4;
    }
    // 0x8001ECE8: nop

    // 0x8001ECEC: jr          $ra
    // 0x8001ECF0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    return;
    // 0x8001ECF0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8001ECF4:
    // 0x8001ECF4: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x8001ECF8: nop

    // 0x8001ECFC: andi        $t4, $t3, 0x1000
    ctx->r12 = ctx->r11 & 0X1000;
    // 0x8001ED00: beq         $t4, $zero, L_8001ED10
    if (ctx->r12 == 0) {
        // 0x8001ED04: nop
    
            goto L_8001ED10;
    }
    // 0x8001ED04: nop

    // 0x8001ED08: jr          $ra
    // 0x8001ED0C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    return;
    // 0x8001ED0C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_8001ED10:
    // 0x8001ED10: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x8001ED14: nop

    // 0x8001ED18: jr          $ra
    // 0x8001ED1C: nop

    return;
    // 0x8001ED1C: nop

;}
RECOMP_FUNC void func_8001ED20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ED20: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001ED24: lw          $v0, -0x48E8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48E8);
    // 0x8001ED28: jr          $ra
    return;
;}
RECOMP_FUNC void func_8001ED30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ED30: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001ED34: lw          $v0, -0x48EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48EC);
    // 0x8001ED38: sll         $a2, $a0, 16
    ctx->r6 = S32(ctx->r4 << 16);
    // 0x8001ED3C: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8001ED40: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8001ED44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001ED48: blez        $v0, L_8001EDA8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8001ED4C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8001EDA8;
    }
    // 0x8001ED4C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001ED50: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001ED54: lw          $a1, -0x48F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48F4);
    // 0x8001ED58: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
L_8001ED5C:
    // 0x8001ED5C: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001ED60: mflo        $t7
    ctx->r15 = lo;
    // 0x8001ED64: addu        $a0, $t7, $a1
    ctx->r4 = ADD32(ctx->r15, ctx->r5);
    // 0x8001ED68: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x8001ED6C: nop

    // 0x8001ED70: beq         $t8, $zero, L_8001ED90
    if (ctx->r24 == 0) {
        // 0x8001ED74: nop
    
            goto L_8001ED90;
    }
    // 0x8001ED74: nop

    // 0x8001ED78: lh          $t9, 0x10($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X10);
    // 0x8001ED7C: nop

    // 0x8001ED80: bne         $a2, $t9, L_8001ED90
    if (ctx->r6 != ctx->r25) {
        // 0x8001ED84: nop
    
            goto L_8001ED90;
    }
    // 0x8001ED84: nop

    // 0x8001ED88: jr          $ra
    // 0x8001ED8C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8001ED8C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001ED90:
    // 0x8001ED90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001ED94: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x8001ED98: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8001ED9C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8001EDA0: bne         $at, $zero, L_8001ED5C
    if (ctx->r1 != 0) {
        // 0x8001EDA4: nop
    
            goto L_8001ED5C;
    }
    // 0x8001EDA4: nop

L_8001EDA8:
    // 0x8001EDA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8001EDAC: jr          $ra
    // 0x8001EDB0: nop

    return;
    // 0x8001EDB0: nop

    // 0x8001EDB4: jr          $ra
    // 0x8001EDB8: nop

    return;
    // 0x8001EDB8: nop

    // 0x8001EDBC: jr          $ra
    // 0x8001EDC0: nop

    return;
    // 0x8001EDC0: nop

;}
RECOMP_FUNC void func_8001EDC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EDC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8001EDC8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8001EDCC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8001EDD0: sll         $s3, $a2, 16
    ctx->r19 = S32(ctx->r6 << 16);
    // 0x8001EDD4: sll         $s4, $a3, 16
    ctx->r20 = S32(ctx->r7 << 16);
    // 0x8001EDD8: sra         $t7, $s4, 16
    ctx->r15 = S32(SIGNED(ctx->r20) >> 16);
    // 0x8001EDDC: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8001EDE0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8001EDE4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001EDE8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001EDEC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8001EDF0: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8001EDF4: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x8001EDF8: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8001EDFC: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x8001EE00: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8001EE04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001EE08: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8001EE0C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8001EE10: slt         $at, $s3, $s4
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8001EE14: beq         $at, $zero, L_8001EEF4
    if (ctx->r1 == 0) {
        // 0x8001EE18: slt         $at, $s3, $s4
        ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_8001EEF4;
    }
    // 0x8001EE18: slt         $at, $s3, $s4
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
L_8001EE1C:
    // 0x8001EE1C: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x8001EE20: beq         $at, $zero, L_8001EEB0
    if (ctx->r1 == 0) {
        // 0x8001EE24: or          $t3, $s4, $zero
        ctx->r11 = ctx->r20 | 0;
            goto L_8001EEB0;
    }
    // 0x8001EE24: or          $t3, $s4, $zero
    ctx->r11 = ctx->r20 | 0;
    // 0x8001EE28: sll         $t1, $t3, 1
    ctx->r9 = S32(ctx->r11 << 1);
    // 0x8001EE2C: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    // 0x8001EE30: addu        $t0, $s5, $t2
    ctx->r8 = ADD32(ctx->r21, ctx->r10);
    // 0x8001EE34: addu        $a3, $s5, $t1
    ctx->r7 = ADD32(ctx->r21, ctx->r9);
L_8001EE38:
    // 0x8001EE38: lhu         $a1, 0x0($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X0);
    // 0x8001EE3C: lhu         $a2, 0x0($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X0);
    // 0x8001EE40: addu        $v1, $s2, $t2
    ctx->r3 = ADD32(ctx->r18, ctx->r10);
    // 0x8001EE44: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8001EE48: beq         $at, $zero, L_8001EE7C
    if (ctx->r1 == 0) {
        // 0x8001EE4C: addu        $a0, $s2, $t1
        ctx->r4 = ADD32(ctx->r18, ctx->r9);
            goto L_8001EE7C;
    }
    // 0x8001EE4C: addu        $a0, $s2, $t1
    ctx->r4 = ADD32(ctx->r18, ctx->r9);
    // 0x8001EE50: sh          $a1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r5;
    // 0x8001EE54: sh          $a2, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r6;
    // 0x8001EE58: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8001EE5C: lh          $t9, 0x0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X0);
    // 0x8001EE60: nop

    // 0x8001EE64: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x8001EE68: beq         $s1, $zero, L_8001EE78
    if (ctx->r17 == 0) {
        // 0x8001EE6C: sh          $v0, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r2;
            goto L_8001EE78;
    }
    // 0x8001EE6C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8001EE70: b           L_8001EE7C
    // 0x8001EE74: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_8001EE7C;
    // 0x8001EE74: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8001EE78:
    // 0x8001EE78: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8001EE7C:
    // 0x8001EE7C: beq         $s1, $zero, L_8001EE94
    if (ctx->r17 == 0) {
        // 0x8001EE80: nop
    
            goto L_8001EE94;
    }
    // 0x8001EE80: nop

    // 0x8001EE84: addiu       $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x8001EE88: addiu       $t1, $t1, -0x2
    ctx->r9 = ADD32(ctx->r9, -0X2);
    // 0x8001EE8C: b           L_8001EEA0
    // 0x8001EE90: addiu       $a3, $a3, -0x2
    ctx->r7 = ADD32(ctx->r7, -0X2);
        goto L_8001EEA0;
    // 0x8001EE90: addiu       $a3, $a3, -0x2
    ctx->r7 = ADD32(ctx->r7, -0X2);
L_8001EE94:
    // 0x8001EE94: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001EE98: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x8001EE9C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
L_8001EEA0:
    // 0x8001EEA0: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8001EEA4: bne         $at, $zero, L_8001EE38
    if (ctx->r1 != 0) {
        // 0x8001EEA8: nop
    
            goto L_8001EE38;
    }
    // 0x8001EEA8: nop

    // 0x8001EEAC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8001EEB0:
    // 0x8001EEB0: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x8001EEB4: addiu       $a3, $s0, -0x1
    ctx->r7 = ADD32(ctx->r16, -0X1);
    // 0x8001EEB8: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x8001EEBC: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8001EEC0: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8001EEC4: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8001EEC8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8001EECC: jal         0x8001EDC4
    // 0x8001EED0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8001EDC4(rdram, ctx);
        goto after_0;
    // 0x8001EED0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x8001EED4: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    // 0x8001EED8: sll         $t7, $s3, 16
    ctx->r15 = S32(ctx->r19 << 16);
    // 0x8001EEDC: sll         $t9, $s4, 16
    ctx->r25 = S32(ctx->r20 << 16);
    // 0x8001EEE0: sra         $s4, $t9, 16
    ctx->r20 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8001EEE4: sra         $s3, $t7, 16
    ctx->r19 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8001EEE8: slt         $at, $s3, $s4
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8001EEEC: bne         $at, $zero, L_8001EE1C
    if (ctx->r1 != 0) {
        // 0x8001EEF0: slt         $at, $s3, $s4
        ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_8001EE1C;
    }
    // 0x8001EEF0: slt         $at, $s3, $s4
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
L_8001EEF4:
    // 0x8001EEF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8001EEF8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8001EEFC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8001EF00: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001EF04: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8001EF08: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8001EF0C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8001EF10: jr          $ra
    // 0x8001EF14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8001EF14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8001EF18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EF18: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8001EF1C: sw          $s1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r17;
    // 0x8001EF20: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x8001EF24: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8001EF28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001EF2C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001EF30: blez        $s6, L_8001EF9C
    if (SIGNED(ctx->r22) <= 0) {
        // 0x8001EF34: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8001EF9C;
    }
    // 0x8001EF34: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8001EF38: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001EF3C: lw          $a0, -0x48F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48F4);
    // 0x8001EF40: addiu       $s7, $zero, 0x2C
    ctx->r23 = ADD32(0, 0X2C);
    // 0x8001EF44: addiu       $s5, $sp, 0x38
    ctx->r21 = ADD32(ctx->r29, 0X38);
    // 0x8001EF48: addiu       $s4, $sp, 0x58
    ctx->r20 = ADD32(ctx->r29, 0X58);
    // 0x8001EF4C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_8001EF50:
    // 0x8001EF50: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001EF54: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x8001EF58: addu        $t6, $s4, $v0
    ctx->r14 = ADD32(ctx->r20, ctx->r2);
    // 0x8001EF5C: mflo        $t7
    ctx->r15 = lo;
    // 0x8001EF60: addu        $s0, $t7, $a0
    ctx->r16 = ADD32(ctx->r15, ctx->r4);
    // 0x8001EF64: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x8001EF68: nop

    // 0x8001EF6C: bne         $s3, $t8, L_8001EF9C
    if (ctx->r19 != ctx->r24) {
        // 0x8001EF70: nop
    
            goto L_8001EF9C;
    }
    // 0x8001EF70: nop

    // 0x8001EF74: lhu         $t9, 0x28($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X28);
    // 0x8001EF78: addu        $t7, $s5, $v0
    ctx->r15 = ADD32(ctx->r21, ctx->r2);
    // 0x8001EF7C: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x8001EF80: sh          $s2, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r18;
    // 0x8001EF84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8001EF88: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x8001EF8C: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8001EF90: slt         $at, $s2, $s6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8001EF94: bne         $at, $zero, L_8001EF50
    if (ctx->r1 != 0) {
        // 0x8001EF98: nop
    
            goto L_8001EF50;
    }
    // 0x8001EF98: nop

L_8001EF9C:
    // 0x8001EF9C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8001EFA0: addiu       $s4, $sp, 0x58
    ctx->r20 = ADD32(ctx->r29, 0X58);
    // 0x8001EFA4: addiu       $s5, $sp, 0x38
    ctx->r21 = ADD32(ctx->r29, 0X38);
    // 0x8001EFA8: bne         $s2, $s6, L_8001F02C
    if (ctx->r18 != ctx->r22) {
        // 0x8001EFAC: addiu       $s7, $zero, 0x2C
        ctx->r23 = ADD32(0, 0X2C);
            goto L_8001F02C;
    }
    // 0x8001EFAC: addiu       $s7, $zero, 0x2C
    ctx->r23 = ADD32(0, 0X2C);
    // 0x8001EFB0: addiu       $a3, $s6, -0x1
    ctx->r7 = ADD32(ctx->r22, -0X1);
    // 0x8001EFB4: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x8001EFB8: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001EFBC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8001EFC0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8001EFC4: jal         0x8001EDC4
    // 0x8001EFC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001EDC4(rdram, ctx);
        goto after_0;
    // 0x8001EFC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8001EFCC: blez        $s6, L_8001F018
    if (SIGNED(ctx->r22) <= 0) {
        // 0x8001EFD0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8001F018;
    }
    // 0x8001EFD0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001EFD4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001EFD8: lw          $a0, -0x48F4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48F4);
    // 0x8001EFDC: addiu       $v0, $sp, 0x38
    ctx->r2 = ADD32(ctx->r29, 0X38);
    // 0x8001EFE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
L_8001EFE4:
    // 0x8001EFE4: lh          $s2, 0x0($v0)
    ctx->r18 = MEM_H(ctx->r2, 0X0);
    // 0x8001EFE8: nop

    // 0x8001EFEC: multu       $s2, $s7
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001EFF0: mflo        $t8
    ctx->r24 = lo;
    // 0x8001EFF4: addu        $s0, $t8, $a0
    ctx->r16 = ADD32(ctx->r24, ctx->r4);
    // 0x8001EFF8: lbu         $t9, 0x24($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X24);
    // 0x8001EFFC: nop

    // 0x8001F000: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8001F004: beq         $at, $zero, L_8001F018
    if (ctx->r1 == 0) {
        // 0x8001F008: nop
    
            goto L_8001F018;
    }
    // 0x8001F008: nop

    // 0x8001F00C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001F010: bne         $v1, $s6, L_8001EFE4
    if (ctx->r3 != ctx->r22) {
        // 0x8001F014: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_8001EFE4;
    }
    // 0x8001F014: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8001F018:
    // 0x8001F018: bne         $v1, $s6, L_8001F028
    if (ctx->r3 != ctx->r22) {
        // 0x8001F01C: nop
    
            goto L_8001F028;
    }
    // 0x8001F01C: nop

    // 0x8001F020: b           L_8001F2BC
    // 0x8001F024: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001F2BC;
    // 0x8001F024: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001F028:
    // 0x8001F028: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8001F02C:
    // 0x8001F02C: bne         $fp, $zero, L_8001F2B8
    if (ctx->r30 != 0) {
        // 0x8001F030: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8001F2B8;
    }
    // 0x8001F030: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8001F034: lhu         $v0, -0xD4C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0XD4C);
    // 0x8001F038: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8001F03C: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x8001F040: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001F044: andi        $t6, $v0, 0xFFFF
    ctx->r14 = ctx->r2 & 0XFFFF;
    // 0x8001F048: bne         $t6, $zero, L_8001F2B8
    if (ctx->r14 != 0) {
        // 0x8001F04C: sh          $t6, -0xD4C($at)
        MEM_H(-0XD4C, ctx->r1) = ctx->r14;
            goto L_8001F2B8;
    }
    // 0x8001F04C: sh          $t6, -0xD4C($at)
    MEM_H(-0XD4C, ctx->r1) = ctx->r14;
    // 0x8001F050: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8001F054: bne         $s1, $at, L_8001F0B8
    if (ctx->r17 != ctx->r1) {
        // 0x8001F058: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8001F0B8;
    }
    // 0x8001F058: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001F05C: addiu       $v0, $s6, -0x1
    ctx->r2 = ADD32(ctx->r22, -0X1);
    // 0x8001F060: sh          $s6, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r22;
    // 0x8001F064: bltz        $v0, L_8001F2B8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8001F068: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8001F2B8;
    }
    // 0x8001F068: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8001F06C: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8001F070: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x8001F074: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001F078: addiu       $a1, $a1, -0x48F4
    ctx->r5 = ADD32(ctx->r5, -0X48F4);
    // 0x8001F07C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8001F080:
    // 0x8001F080: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8001F084: nop

    // 0x8001F088: beq         $s2, $a0, L_8001F0A4
    if (ctx->r18 == ctx->r4) {
        // 0x8001F08C: nop
    
            goto L_8001F0A4;
    }
    // 0x8001F08C: nop

    // 0x8001F090: multu       $a0, $s7
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F094: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8001F098: mflo        $t6
    ctx->r14 = lo;
    // 0x8001F09C: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8001F0A0: sh          $v1, 0x28($t7)
    MEM_H(0X28, ctx->r15) = ctx->r3;
L_8001F0A4:
    // 0x8001F0A4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8001F0A8: bgez        $v1, L_8001F080
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8001F0AC: addiu       $v0, $v0, -0x2
        ctx->r2 = ADD32(ctx->r2, -0X2);
            goto L_8001F080;
    }
    // 0x8001F0AC: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8001F0B0: b           L_8001F2BC
    // 0x8001F0B4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
        goto L_8001F2BC;
    // 0x8001F0B4: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_8001F0B8:
    // 0x8001F0B8: sll         $fp, $s2, 2
    ctx->r30 = S32(ctx->r18 << 2);
    // 0x8001F0BC: subu        $fp, $fp, $s2
    ctx->r30 = SUB32(ctx->r30, ctx->r18);
    // 0x8001F0C0: sll         $fp, $fp, 2
    ctx->r30 = S32(ctx->r30 << 2);
    // 0x8001F0C4: subu        $fp, $fp, $s2
    ctx->r30 = SUB32(ctx->r30, ctx->r18);
    // 0x8001F0C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8001F0CC: blez        $s6, L_8001F248
    if (SIGNED(ctx->r22) <= 0) {
        // 0x8001F0D0: sll         $fp, $fp, 2
        ctx->r30 = S32(ctx->r30 << 2);
            goto L_8001F248;
    }
    // 0x8001F0D0: sll         $fp, $fp, 2
    ctx->r30 = S32(ctx->r30 << 2);
    // 0x8001F0D4: andi        $v0, $s6, 0x3
    ctx->r2 = ctx->r22 & 0X3;
    // 0x8001F0D8: beq         $v0, $zero, L_8001F13C
    if (ctx->r2 == 0) {
        // 0x8001F0DC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8001F13C;
    }
    // 0x8001F0DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8001F0E0: sll         $t8, $zero, 2
    ctx->r24 = S32(0 << 2);
    // 0x8001F0E4: subu        $t8, $t8, $zero
    ctx->r24 = SUB32(ctx->r24, 0);
    // 0x8001F0E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F0EC: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001F0F0: lw          $t9, -0x48F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48F4);
    // 0x8001F0F4: subu        $t8, $t8, $zero
    ctx->r24 = SUB32(ctx->r24, 0);
    // 0x8001F0F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F0FC: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
L_8001F100:
    // 0x8001F100: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x8001F104: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8001F108: bne         $s3, $t6, L_8001F12C
    if (ctx->r19 != ctx->r14) {
        // 0x8001F10C: addu        $t8, $s4, $v0
        ctx->r24 = ADD32(ctx->r20, ctx->r2);
            goto L_8001F12C;
    }
    // 0x8001F10C: addu        $t8, $s4, $v0
    ctx->r24 = ADD32(ctx->r20, ctx->r2);
    // 0x8001F110: lhu         $t7, 0x28($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X28);
    // 0x8001F114: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001F118: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x8001F11C: addu        $t9, $s5, $v0
    ctx->r25 = ADD32(ctx->r21, ctx->r2);
    // 0x8001F120: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x8001F124: sh          $v1, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r3;
    // 0x8001F128: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
L_8001F12C:
    // 0x8001F12C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001F130: bne         $a1, $v1, L_8001F100
    if (ctx->r5 != ctx->r3) {
        // 0x8001F134: addiu       $a0, $a0, 0x2C
        ctx->r4 = ADD32(ctx->r4, 0X2C);
            goto L_8001F100;
    }
    // 0x8001F134: addiu       $a0, $a0, 0x2C
    ctx->r4 = ADD32(ctx->r4, 0X2C);
    // 0x8001F138: beq         $v1, $s6, L_8001F248
    if (ctx->r3 == ctx->r22) {
        // 0x8001F13C: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_8001F248;
    }
L_8001F13C:
    // 0x8001F13C: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8001F140: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8001F144: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001F148: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001F14C: lw          $t8, -0x48F4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48F4);
    // 0x8001F150: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8001F154: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001F158: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8001F15C: addiu       $a1, $a0, 0x2C
    ctx->r5 = ADD32(ctx->r4, 0X2C);
    // 0x8001F160: addiu       $a2, $a0, 0x58
    ctx->r6 = ADD32(ctx->r4, 0X58);
    // 0x8001F164: addiu       $a3, $a0, 0x84
    ctx->r7 = ADD32(ctx->r4, 0X84);
L_8001F168:
    // 0x8001F168: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x8001F16C: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8001F170: bne         $s3, $t9, L_8001F194
    if (ctx->r19 != ctx->r25) {
        // 0x8001F174: addu        $t7, $s4, $v0
        ctx->r15 = ADD32(ctx->r20, ctx->r2);
            goto L_8001F194;
    }
    // 0x8001F174: addu        $t7, $s4, $v0
    ctx->r15 = ADD32(ctx->r20, ctx->r2);
    // 0x8001F178: lhu         $t6, 0x28($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X28);
    // 0x8001F17C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001F180: addu        $t8, $s5, $v0
    ctx->r24 = ADD32(ctx->r21, ctx->r2);
    // 0x8001F184: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x8001F188: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x8001F18C: sh          $v1, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r3;
    // 0x8001F190: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_8001F194:
    // 0x8001F194: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x8001F198: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8001F19C: bne         $s3, $t6, L_8001F1CC
    if (ctx->r19 != ctx->r14) {
        // 0x8001F1A0: addiu       $a0, $a0, 0xB0
        ctx->r4 = ADD32(ctx->r4, 0XB0);
            goto L_8001F1CC;
    }
    // 0x8001F1A0: addiu       $a0, $a0, 0xB0
    ctx->r4 = ADD32(ctx->r4, 0XB0);
    // 0x8001F1A4: lhu         $t7, 0x28($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X28);
    // 0x8001F1A8: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8001F1AC: addu        $t8, $s4, $v0
    ctx->r24 = ADD32(ctx->r20, ctx->r2);
    // 0x8001F1B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001F1B4: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x8001F1B8: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x8001F1BC: addu        $t6, $s5, $v0
    ctx->r14 = ADD32(ctx->r21, ctx->r2);
    // 0x8001F1C0: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x8001F1C4: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x8001F1C8: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_8001F1CC:
    // 0x8001F1CC: lw          $t8, 0xC($a2)
    ctx->r24 = MEM_W(ctx->r6, 0XC);
    // 0x8001F1D0: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x8001F1D4: bne         $s3, $t8, L_8001F204
    if (ctx->r19 != ctx->r24) {
        // 0x8001F1D8: addiu       $a1, $a1, 0xB0
        ctx->r5 = ADD32(ctx->r5, 0XB0);
            goto L_8001F204;
    }
    // 0x8001F1D8: addiu       $a1, $a1, 0xB0
    ctx->r5 = ADD32(ctx->r5, 0XB0);
    // 0x8001F1DC: lhu         $t9, 0x28($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X28);
    // 0x8001F1E0: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8001F1E4: addu        $t6, $s4, $v0
    ctx->r14 = ADD32(ctx->r20, ctx->r2);
    // 0x8001F1E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001F1EC: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x8001F1F0: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x8001F1F4: addu        $t8, $s5, $v0
    ctx->r24 = ADD32(ctx->r21, ctx->r2);
    // 0x8001F1F8: addiu       $t7, $v1, 0x2
    ctx->r15 = ADD32(ctx->r3, 0X2);
    // 0x8001F1FC: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x8001F200: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_8001F204:
    // 0x8001F204: lw          $t6, 0xC($a3)
    ctx->r14 = MEM_W(ctx->r7, 0XC);
    // 0x8001F208: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x8001F20C: bne         $s3, $t6, L_8001F23C
    if (ctx->r19 != ctx->r14) {
        // 0x8001F210: addiu       $a2, $a2, 0xB0
        ctx->r6 = ADD32(ctx->r6, 0XB0);
            goto L_8001F23C;
    }
    // 0x8001F210: addiu       $a2, $a2, 0xB0
    ctx->r6 = ADD32(ctx->r6, 0XB0);
    // 0x8001F214: lhu         $t7, 0x28($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X28);
    // 0x8001F218: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8001F21C: addu        $t8, $s4, $v0
    ctx->r24 = ADD32(ctx->r20, ctx->r2);
    // 0x8001F220: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8001F224: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x8001F228: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x8001F22C: addu        $t6, $s5, $v0
    ctx->r14 = ADD32(ctx->r21, ctx->r2);
    // 0x8001F230: addiu       $t9, $v1, 0x3
    ctx->r25 = ADD32(ctx->r3, 0X3);
    // 0x8001F234: sh          $t9, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r25;
    // 0x8001F238: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_8001F23C:
    // 0x8001F23C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001F240: bne         $v1, $s6, L_8001F168
    if (ctx->r3 != ctx->r22) {
        // 0x8001F244: addiu       $a3, $a3, 0xB0
        ctx->r7 = ADD32(ctx->r7, 0XB0);
            goto L_8001F168;
    }
    // 0x8001F244: addiu       $a3, $a3, 0xB0
    ctx->r7 = ADD32(ctx->r7, 0XB0);
L_8001F248:
    // 0x8001F248: addiu       $s0, $s1, -0x1
    ctx->r16 = ADD32(ctx->r17, -0X1);
    // 0x8001F24C: sll         $a3, $s0, 16
    ctx->r7 = S32(ctx->r16 << 16);
    // 0x8001F250: sra         $t8, $a3, 16
    ctx->r24 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8001F254: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8001F258: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8001F25C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8001F260: jal         0x8001EDC4
    // 0x8001F264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001EDC4(rdram, ctx);
        goto after_1;
    // 0x8001F264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8001F268: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8001F26C: addiu       $a1, $a1, -0x48F4
    ctx->r5 = ADD32(ctx->r5, -0X48F4);
    // 0x8001F270: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8001F274: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8001F278: addu        $t6, $t9, $fp
    ctx->r14 = ADD32(ctx->r25, ctx->r30);
    // 0x8001F27C: bltz        $s0, L_8001F2B8
    if (SIGNED(ctx->r16) < 0) {
        // 0x8001F280: sh          $s1, 0x28($t6)
        MEM_H(0X28, ctx->r14) = ctx->r17;
            goto L_8001F2B8;
    }
    // 0x8001F280: sh          $s1, 0x28($t6)
    MEM_H(0X28, ctx->r14) = ctx->r17;
    // 0x8001F284: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x8001F288: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x8001F28C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
L_8001F290:
    // 0x8001F290: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x8001F294: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x8001F298: multu       $t6, $s7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F29C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8001F2A0: mflo        $t7
    ctx->r15 = lo;
    // 0x8001F2A4: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8001F2A8: sh          $v1, 0x28($t8)
    MEM_H(0X28, ctx->r24) = ctx->r3;
    // 0x8001F2AC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8001F2B0: bgez        $v1, L_8001F290
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8001F2B4: nop
    
            goto L_8001F290;
    }
    // 0x8001F2B4: nop

L_8001F2B8:
    // 0x8001F2B8: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_8001F2BC:
    // 0x8001F2BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F2C0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x8001F2C4: jr          $ra
    // 0x8001F2C8: nop

    return;
    // 0x8001F2C8: nop

;}
RECOMP_FUNC void func_8001F2CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F2CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001F2D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F2D4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8001F2D8: lbu         $v0, 0x13($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X13);
    // 0x8001F2DC: lui         $a3, 0x8009
    ctx->r7 = S32(0X8009 << 16);
    // 0x8001F2E0: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8001F2E4: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x8001F2E8: addiu       $a3, $a3, -0xDD0
    ctx->r7 = ADD32(ctx->r7, -0XDD0);
    // 0x8001F2EC: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8001F2F0: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8001F2F4: lw          $t8, 0x6C($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X6C);
    // 0x8001F2F8: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001F2FC: sra         $t6, $v0, 4
    ctx->r14 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8001F300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8001F304: bne         $t8, $zero, L_8001F310
    if (ctx->r24 != 0) {
        // 0x8001F308: andi        $s1, $t6, 0xF
        ctx->r17 = ctx->r14 & 0XF;
            goto L_8001F310;
    }
    // 0x8001F308: andi        $s1, $t6, 0xF
    ctx->r17 = ctx->r14 & 0XF;
    // 0x8001F30C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8001F310:
    // 0x8001F310: bne         $v1, $zero, L_8001F32C
    if (ctx->r3 != 0) {
        // 0x8001F314: nop
    
            goto L_8001F32C;
    }
    // 0x8001F314: nop

    // 0x8001F318: lw          $s6, 0x68($a3)
    ctx->r22 = MEM_W(ctx->r7, 0X68);
    // 0x8001F31C: nop

    // 0x8001F320: slti        $at, $s6, 0x2
    ctx->r1 = SIGNED(ctx->r22) < 0X2 ? 1 : 0;
    // 0x8001F324: beq         $at, $zero, L_8001F3F0
    if (ctx->r1 == 0) {
        // 0x8001F328: slti        $at, $s6, 0x3
        ctx->r1 = SIGNED(ctx->r22) < 0X3 ? 1 : 0;
            goto L_8001F3F0;
    }
    // 0x8001F328: slti        $at, $s6, 0x3
    ctx->r1 = SIGNED(ctx->r22) < 0X3 ? 1 : 0;
L_8001F32C:
    // 0x8001F32C: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x8001F330: lw          $s6, -0xD68($s6)
    ctx->r22 = MEM_W(ctx->r22, -0XD68);
    // 0x8001F334: blez        $a2, L_8001F364
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8001F338: nop
    
            goto L_8001F364;
    }
    // 0x8001F338: nop

    // 0x8001F33C: lb          $v0, 0x17($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X17);
    // 0x8001F340: nop

    // 0x8001F344: andi        $t9, $v0, 0xF
    ctx->r25 = ctx->r2 & 0XF;
    // 0x8001F348: beq         $t9, $zero, L_8001F364
    if (ctx->r25 == 0) {
        // 0x8001F34C: andi        $t6, $v0, 0xF0
        ctx->r14 = ctx->r2 & 0XF0;
            goto L_8001F364;
    }
    // 0x8001F34C: andi        $t6, $v0, 0xF0
    ctx->r14 = ctx->r2 & 0XF0;
    // 0x8001F350: sra         $t7, $t6, 4
    ctx->r15 = S32(SIGNED(ctx->r14) >> 4);
    // 0x8001F354: multu       $t7, $a2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F358: mflo        $a0
    ctx->r4 = lo;
    // 0x8001F35C: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x8001F360: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
L_8001F364:
    // 0x8001F364: beq         $s6, $zero, L_8001F378
    if (ctx->r22 == 0) {
        // 0x8001F368: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8001F378;
    }
    // 0x8001F368: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001F36C: addu        $v0, $v1, $s6
    ctx->r2 = ADD32(ctx->r3, ctx->r22);
    // 0x8001F370: b           L_8001F37C
    // 0x8001F374: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8001F37C;
    // 0x8001F374: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8001F378:
    // 0x8001F378: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001F37C:
    // 0x8001F37C: addu        $v1, $v0, $a0
    ctx->r3 = ADD32(ctx->r2, ctx->r4);
    // 0x8001F380: lw          $t8, -0x48EC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48EC);
    // 0x8001F384: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8001F388: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001F38C: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001F390: bne         $at, $zero, L_8001F3A0
    if (ctx->r1 != 0) {
        // 0x8001F394: addiu       $a1, $zero, 0x2C
        ctx->r5 = ADD32(0, 0X2C);
            goto L_8001F3A0;
    }
    // 0x8001F394: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x8001F398: b           L_8001F4FC
    // 0x8001F39C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001F4FC;
    // 0x8001F39C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001F3A0:
    // 0x8001F3A0: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F3A4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001F3A8: lw          $t6, -0x48F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48F4);
    // 0x8001F3AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001F3B0: mflo        $t9
    ctx->r25 = lo;
    // 0x8001F3B4: addu        $v0, $t9, $t6
    ctx->r2 = ADD32(ctx->r25, ctx->r14);
    // 0x8001F3B8: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x8001F3BC: nop

    // 0x8001F3C0: bne         $a0, $t7, L_8001F3E4
    if (ctx->r4 != ctx->r15) {
        // 0x8001F3C4: nop
    
            goto L_8001F3E4;
    }
    // 0x8001F3C4: nop

    // 0x8001F3C8: lbu         $t8, 0x24($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X24);
    // 0x8001F3CC: nop

    // 0x8001F3D0: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001F3D4: beq         $at, $zero, L_8001F3E4
    if (ctx->r1 == 0) {
        // 0x8001F3D8: nop
    
            goto L_8001F3E4;
    }
    // 0x8001F3D8: nop

    // 0x8001F3DC: b           L_8001F4FC
    // 0x8001F3E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001F4FC;
    // 0x8001F3E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001F3E4:
    // 0x8001F3E4: b           L_8001F4FC
    // 0x8001F3E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8001F4FC;
    // 0x8001F3E8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8001F3EC: slti        $at, $s6, 0x3
    ctx->r1 = SIGNED(ctx->r22) < 0X3 ? 1 : 0;
L_8001F3F0:
    // 0x8001F3F0: bne         $at, $zero, L_8001F410
    if (ctx->r1 != 0) {
        // 0x8001F3F4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8001F410;
    }
    // 0x8001F3F4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001F3F8: jal         0x8001EF18
    // 0x8001F3FC: nop

    func_8001EF18(rdram, ctx);
        goto after_0;
    // 0x8001F3FC: nop

    after_0:
    // 0x8001F400: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8001F404: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8001F408: b           L_8001F4F8
    // 0x8001F40C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
        goto L_8001F4F8;
    // 0x8001F40C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_8001F410:
    // 0x8001F410: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8001F414: lw          $a2, -0x48F4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X48F4);
    // 0x8001F418: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8001F41C: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_8001F420:
    // 0x8001F420: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x8001F424: nop

    // 0x8001F428: bne         $a0, $t6, L_8001F444
    if (ctx->r4 != ctx->r14) {
        // 0x8001F42C: addiu       $a3, $zero, 0x2
        ctx->r7 = ADD32(0, 0X2);
            goto L_8001F444;
    }
    // 0x8001F42C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8001F430: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001F434: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8001F438: bne         $at, $zero, L_8001F420
    if (ctx->r1 != 0) {
        // 0x8001F43C: addiu       $v0, $v0, 0x2C
        ctx->r2 = ADD32(ctx->r2, 0X2C);
            goto L_8001F420;
    }
    // 0x8001F43C: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
    // 0x8001F440: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_8001F444:
    // 0x8001F444: bne         $v1, $a3, L_8001F4A8
    if (ctx->r3 != ctx->r7) {
        // 0x8001F448: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001F4A8;
    }
    // 0x8001F448: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001F44C: lhu         $t7, 0x28($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X28);
    // 0x8001F450: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8001F454: beq         $t7, $zero, L_8001F464
    if (ctx->r15 == 0) {
        // 0x8001F458: addiu       $a1, $zero, 0x2C
        ctx->r5 = ADD32(0, 0X2C);
            goto L_8001F464;
    }
    // 0x8001F458: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x8001F45C: b           L_8001F468
    // 0x8001F460: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8001F468;
    // 0x8001F460: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8001F464:
    // 0x8001F464: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8001F468:
    // 0x8001F468: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F46C: xori        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 ^ 0X1;
    // 0x8001F470: mflo        $t8
    ctx->r24 = lo;
    // 0x8001F474: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x8001F478: lbu         $t6, 0x24($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X24);
    // 0x8001F47C: nop

    // 0x8001F480: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8001F484: beq         $at, $zero, L_8001F498
    if (ctx->r1 == 0) {
        // 0x8001F488: nop
    
            goto L_8001F498;
    }
    // 0x8001F488: nop

    // 0x8001F48C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8001F490: bne         $v0, $a3, L_8001F468
    if (ctx->r2 != ctx->r7) {
        // 0x8001F494: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_8001F468;
    }
    // 0x8001F494: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_8001F498:
    // 0x8001F498: bne         $v0, $a3, L_8001F4A8
    if (ctx->r2 != ctx->r7) {
        // 0x8001F49C: nop
    
            goto L_8001F4A8;
    }
    // 0x8001F49C: nop

    // 0x8001F4A0: b           L_8001F4EC
    // 0x8001F4A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001F4EC;
    // 0x8001F4A4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001F4A8:
    // 0x8001F4A8: bne         $fp, $zero, L_8001F4E0
    if (ctx->r30 != 0) {
        // 0x8001F4AC: addiu       $a1, $zero, 0x2C
        ctx->r5 = ADD32(0, 0X2C);
            goto L_8001F4E0;
    }
    // 0x8001F4AC: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x8001F4B0: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F4B4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001F4B8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8001F4BC: mflo        $t9
    ctx->r25 = lo;
    // 0x8001F4C0: addu        $t6, $a2, $t9
    ctx->r14 = ADD32(ctx->r6, ctx->r25);
    // 0x8001F4C4: xori        $t9, $v1, 0x1
    ctx->r25 = ctx->r3 ^ 0X1;
    // 0x8001F4C8: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8001F4CC: sh          $t8, 0x28($t6)
    MEM_H(0X28, ctx->r14) = ctx->r24;
    // 0x8001F4D0: lw          $t7, -0x48F4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48F4);
    // 0x8001F4D4: mflo        $t8
    ctx->r24 = lo;
    // 0x8001F4D8: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x8001F4DC: sh          $zero, 0x28($t6)
    MEM_H(0X28, ctx->r14) = 0;
L_8001F4E0:
    // 0x8001F4E0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8001F4E4: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8001F4E8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8001F4EC:
    // 0x8001F4EC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8001F4F0: sra         $t7, $v1, 16
    ctx->r15 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8001F4F4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_8001F4F8:
    // 0x8001F4F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8001F4FC:
    // 0x8001F4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001F500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001F504: jr          $ra
    // 0x8001F508: nop

    return;
    // 0x8001F508: nop

    // 0x8001F50C: jr          $ra
    // 0x8001F510: nop

    return;
    // 0x8001F510: nop

    // 0x8001F514: jr          $ra
    // 0x8001F518: nop

    return;
    // 0x8001F518: nop

;}
RECOMP_FUNC void func_8001F51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F51C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8001F520: sw          $s1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r17;
    // 0x8001F524: sw          $s0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r16;
    // 0x8001F528: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8001F52C: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x8001F530: addiu       $t2, $t2, -0x48F8
    ctx->r10 = ADD32(ctx->r10, -0X48F8);
    // 0x8001F534: sb          $zero, 0x17($a1)
    MEM_B(0X17, ctx->r5) = 0;
    // 0x8001F538: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x8001F53C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001F540: lh          $t0, 0x0($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X0);
    // 0x8001F544: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001F548: addiu       $t3, $zero, 0x5431
    ctx->r11 = ADD32(0, 0X5431);
    // 0x8001F54C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8001F550: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001F554: beq         $t0, $t3, L_8001F594
    if (ctx->r8 == ctx->r11) {
        // 0x8001F558: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8001F594;
    }
    // 0x8001F558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001F55C: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x8001F560: beq         $t0, $at, L_8001F594
    if (ctx->r8 == ctx->r1) {
        // 0x8001F564: addiu       $at, $zero, 0x5433
        ctx->r1 = ADD32(0, 0X5433);
            goto L_8001F594;
    }
    // 0x8001F564: addiu       $at, $zero, 0x5433
    ctx->r1 = ADD32(0, 0X5433);
    // 0x8001F568: bne         $t0, $at, L_8001F5B0
    if (ctx->r8 != ctx->r1) {
        // 0x8001F56C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8001F5B0;
    }
    // 0x8001F56C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8001F570: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001F574: lw          $t8, -0x48F0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48F0);
    // 0x8001F578: sll         $t9, $t7, 3
    ctx->r25 = S32(ctx->r15 << 3);
    // 0x8001F57C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8001F580: lb          $t6, 0x2($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X2);
    // 0x8001F584: nop

    // 0x8001F588: sb          $t6, 0x17($a1)
    MEM_B(0X17, ctx->r5) = ctx->r14;
    // 0x8001F58C: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x8001F590: nop

L_8001F594:
    // 0x8001F594: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x8001F598: addu        $v1, $t1, $t7
    ctx->r3 = ADD32(ctx->r9, ctx->r15);
    // 0x8001F59C: lbu         $t8, 0x7($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X7);
    // 0x8001F5A0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8001F5A4: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x8001F5A8: b           L_8001F5B8
    // 0x8001F5AC: sb          $t8, 0x13($a1)
    MEM_B(0X13, ctx->r5) = ctx->r24;
        goto L_8001F5B8;
    // 0x8001F5AC: sb          $t8, 0x13($a1)
    MEM_B(0X13, ctx->r5) = ctx->r24;
L_8001F5B0:
    // 0x8001F5B0: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x8001F5B4: sb          $t9, 0x13($a1)
    MEM_B(0X13, ctx->r5) = ctx->r25;
L_8001F5B8:
    // 0x8001F5B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001F5BC: bne         $a2, $at, L_8001F5CC
    if (ctx->r6 != ctx->r1) {
        // 0x8001F5C0: addiu       $t6, $zero, 0x7F
        ctx->r14 = ADD32(0, 0X7F);
            goto L_8001F5CC;
    }
    // 0x8001F5C0: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x8001F5C4: b           L_8001F90C
    // 0x8001F5C8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
        goto L_8001F90C;
    // 0x8001F5C8: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8001F5CC:
    // 0x8001F5CC: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x8001F5D0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8001F5D4: sh          $a0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r4;
    // 0x8001F5D8: sh          $t6, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r14;
    // 0x8001F5DC: sb          $t7, 0x12($a1)
    MEM_B(0X12, ctx->r5) = ctx->r15;
    // 0x8001F5E0: sh          $t8, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r24;
    // 0x8001F5E4: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x8001F5E8: sb          $zero, 0x15($a1)
    MEM_B(0X15, ctx->r5) = 0;
    // 0x8001F5EC: sb          $zero, 0x16($a1)
    MEM_B(0X16, ctx->r5) = 0;
    // 0x8001F5F0: sb          $zero, 0x14($a1)
    MEM_B(0X14, ctx->r5) = 0;
    // 0x8001F5F4: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x8001F5F8: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x8001F5FC: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x8001F600: nop

    // 0x8001F604: beq         $t0, $t3, L_8001F628
    if (ctx->r8 == ctx->r11) {
        // 0x8001F608: nop
    
            goto L_8001F628;
    }
    // 0x8001F608: nop

    // 0x8001F60C: beq         $t0, $at, L_8001F710
    if (ctx->r8 == ctx->r1) {
        // 0x8001F610: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8001F710;
    }
    // 0x8001F610: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001F614: addiu       $at, $zero, 0x5433
    ctx->r1 = ADD32(0, 0X5433);
    // 0x8001F618: beq         $t0, $at, L_8001F6F8
    if (ctx->r8 == ctx->r1) {
        // 0x8001F61C: nop
    
            goto L_8001F6F8;
    }
    // 0x8001F61C: nop

    // 0x8001F620: b           L_8001F848
    // 0x8001F624: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
        goto L_8001F848;
    // 0x8001F624: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
L_8001F628:
    // 0x8001F628: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001F62C: lw          $v0, -0x4900($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4900);
    // 0x8001F630: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8001F634: lh          $t2, 0x2($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X2);
    // 0x8001F638: lbu         $t0, 0x1($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X1);
    // 0x8001F63C: lbu         $t1, 0x2($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X2);
    // 0x8001F640: slt         $at, $t2, $a0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8001F644: beq         $at, $zero, L_8001F654
    if (ctx->r1 == 0) {
        // 0x8001F648: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_8001F654;
    }
    // 0x8001F648: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001F64C: b           L_8001F6A8
    // 0x8001F650: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001F6A8;
    // 0x8001F650: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001F654:
    // 0x8001F654: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8001F658: lw          $t2, 0x4($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X4);
    // 0x8001F65C: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x8001F660: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x8001F664: addu        $t9, $t2, $t8
    ctx->r25 = ADD32(ctx->r10, ctx->r24);
    // 0x8001F668: slt         $at, $t3, $t0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8001F66C: beq         $at, $zero, L_8001F67C
    if (ctx->r1 == 0) {
        // 0x8001F670: nop
    
            goto L_8001F67C;
    }
    // 0x8001F670: nop

    // 0x8001F674: b           L_8001F6A8
    // 0x8001F678: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001F6A8;
    // 0x8001F678: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001F67C:
    // 0x8001F67C: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x8001F680: sll         $t6, $t1, 2
    ctx->r14 = S32(ctx->r9 << 2);
    // 0x8001F684: lh          $v0, 0xE($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XE);
    // 0x8001F688: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8001F68C: slt         $at, $v0, $t1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8001F690: beq         $at, $zero, L_8001F6A0
    if (ctx->r1 == 0) {
        // 0x8001F694: nop
    
            goto L_8001F6A0;
    }
    // 0x8001F694: nop

    // 0x8001F698: b           L_8001F6A8
    // 0x8001F69C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001F6A8;
    // 0x8001F69C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001F6A0:
    // 0x8001F6A0: lw          $v0, 0x10($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X10);
    // 0x8001F6A4: nop

L_8001F6A8:
    // 0x8001F6A8: bne         $a2, $zero, L_8001F908
    if (ctx->r6 != 0) {
        // 0x8001F6AC: sw          $v0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r2;
            goto L_8001F908;
    }
    // 0x8001F6AC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8001F6B0: lhu         $t8, 0x6($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X6);
    // 0x8001F6B4: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8001F6B8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8001F6BC: bgez        $t8, L_8001F6D4
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8001F6C0: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001F6D4;
    }
    // 0x8001F6C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001F6C4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001F6C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001F6CC: nop

    // 0x8001F6D0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8001F6D4:
    // 0x8001F6D4: lw          $t9, -0xD9C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0XD9C);
    // 0x8001F6D8: nop

    // 0x8001F6DC: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8001F6E0: nop

    // 0x8001F6E4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8001F6E8: nop

    // 0x8001F6EC: div.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f6.fl, ctx->f16.fl);
    // 0x8001F6F0: b           L_8001F908
    // 0x8001F6F4: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
        goto L_8001F908;
    // 0x8001F6F4: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
L_8001F6F8:
    // 0x8001F6F8: lb          $t6, 0x0($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X0);
    // 0x8001F6FC: nop

    // 0x8001F700: sb          $t6, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r14;
    // 0x8001F704: lb          $t7, 0x1($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X1);
    // 0x8001F708: nop

    // 0x8001F70C: sb          $t7, 0x16($a1)
    MEM_B(0X16, ctx->r5) = ctx->r15;
L_8001F710:
    // 0x8001F710: lhu         $t9, 0x4($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X4);
    // 0x8001F714: lw          $t8, -0x4900($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4900);
    // 0x8001F718: andi        $t6, $t9, 0x1FFF
    ctx->r14 = ctx->r25 & 0X1FFF;
    // 0x8001F71C: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8001F720: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8001F724: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8001F728: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x8001F72C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001F730: bgez        $v0, L_8001F758
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8001F734: nop
    
            goto L_8001F758;
    }
    // 0x8001F734: nop

    // 0x8001F738: lw          $t6, -0x48CC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48CC);
    // 0x8001F73C: andi        $t8, $v0, 0x7F
    ctx->r24 = ctx->r2 & 0X7F;
    // 0x8001F740: beq         $t6, $zero, L_8001F758
    if (ctx->r14 == 0) {
        // 0x8001F744: nop
    
            goto L_8001F758;
    }
    // 0x8001F744: nop

    // 0x8001F748: lbu         $t9, 0x1($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X1);
    // 0x8001F74C: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x8001F750: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x8001F754: sh          $t6, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r14;
L_8001F758:
    // 0x8001F758: bne         $a2, $zero, L_8001F90C
    if (ctx->r6 != 0) {
        // 0x8001F75C: or          $v0, $a3, $zero
        ctx->r2 = ctx->r7 | 0;
            goto L_8001F90C;
    }
    // 0x8001F75C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x8001F760: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8001F764: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8001F768: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x8001F76C: beq         $t8, $zero, L_8001F790
    if (ctx->r24 == 0) {
        // 0x8001F770: andi        $t6, $v0, 0x4000
        ctx->r14 = ctx->r2 & 0X4000;
            goto L_8001F790;
    }
    // 0x8001F770: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8001F774: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x8001F778: nop

    // 0x8001F77C: ori         $t9, $t7, 0x10
    ctx->r25 = ctx->r15 | 0X10;
    // 0x8001F780: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
    // 0x8001F784: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8001F788: nop

    // 0x8001F78C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
L_8001F790:
    // 0x8001F790: beq         $t6, $zero, L_8001F7A8
    if (ctx->r14 == 0) {
        // 0x8001F794: nop
    
            goto L_8001F7A8;
    }
    // 0x8001F794: nop

    // 0x8001F798: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x8001F79C: nop

    // 0x8001F7A0: ori         $t7, $t8, 0x40
    ctx->r15 = ctx->r24 | 0X40;
    // 0x8001F7A4: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
L_8001F7A8:
    // 0x8001F7A8: lh          $t9, 0xE($a1)
    ctx->r25 = MEM_H(ctx->r5, 0XE);
    // 0x8001F7AC: nop

    // 0x8001F7B0: bgez        $t9, L_8001F7F8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8001F7B4: nop
    
            goto L_8001F7F8;
    }
    // 0x8001F7B4: nop

    // 0x8001F7B8: lb          $t6, 0x1($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X1);
    // 0x8001F7BC: nop

    // 0x8001F7C0: andi        $t8, $t6, 0x7F
    ctx->r24 = ctx->r14 & 0X7F;
    // 0x8001F7C4: sh          $t8, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r24;
    // 0x8001F7C8: lb          $t7, 0x0($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X0);
    // 0x8001F7CC: nop

    // 0x8001F7D0: andi        $t9, $t7, 0x7F
    ctx->r25 = ctx->r15 & 0X7F;
    // 0x8001F7D4: sb          $t9, 0x12($a1)
    MEM_B(0X12, ctx->r5) = ctx->r25;
    // 0x8001F7D8: lb          $t6, 0x1($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X1);
    // 0x8001F7DC: nop

    // 0x8001F7E0: bgez        $t6, L_8001F7F8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001F7E4: nop
    
            goto L_8001F7F8;
    }
    // 0x8001F7E4: nop

    // 0x8001F7E8: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x8001F7EC: nop

    // 0x8001F7F0: ori         $t7, $t8, 0x100
    ctx->r15 = ctx->r24 | 0X100;
    // 0x8001F7F4: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
L_8001F7F8:
    // 0x8001F7F8: lb          $t9, 0x2($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X2);
    // 0x8001F7FC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8001F800: sb          $t9, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r25;
    // 0x8001F804: lhu         $t6, 0x6($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X6);
    // 0x8001F808: nop

    // 0x8001F80C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8001F810: bgez        $t6, L_8001F824
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001F814: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8001F824;
    }
    // 0x8001F814: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8001F818: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001F81C: nop

    // 0x8001F820: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8001F824:
    // 0x8001F824: lw          $t8, -0xD9C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0XD9C);
    // 0x8001F828: nop

    // 0x8001F82C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8001F830: nop

    // 0x8001F834: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001F838: nop

    // 0x8001F83C: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8001F840: b           L_8001F908
    // 0x8001F844: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
        goto L_8001F908;
    // 0x8001F844: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
L_8001F848:
    // 0x8001F848: lw          $v0, -0x4900($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4900);
    // 0x8001F84C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001F850: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8001F854: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8001F858: blez        $a2, L_8001F8F4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8001F85C: sll         $t7, $t0, 2
        ctx->r15 = S32(ctx->r8 << 2);
            goto L_8001F8F4;
    }
    // 0x8001F85C: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
L_8001F860:
    // 0x8001F860: addu        $t9, $v0, $t7
    ctx->r25 = ADD32(ctx->r2, ctx->r15);
    // 0x8001F864: lw          $t1, 0x4($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X4);
    // 0x8001F868: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8001F86C: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x8001F870: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x8001F874: blez        $t2, L_8001F8E0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8001F878: sll         $t6, $t3, 2
        ctx->r14 = S32(ctx->r11 << 2);
            goto L_8001F8E0;
    }
    // 0x8001F878: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
L_8001F87C:
    // 0x8001F87C: addu        $t8, $t1, $t6
    ctx->r24 = ADD32(ctx->r9, ctx->r14);
    // 0x8001F880: lw          $t4, 0xC($t8)
    ctx->r12 = MEM_W(ctx->r24, 0XC);
    // 0x8001F884: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8001F888: lh          $t5, 0xE($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE);
    // 0x8001F88C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001F890: blez        $t5, L_8001F8CC
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8001F894: sll         $t7, $s0, 2
        ctx->r15 = S32(ctx->r16 << 2);
            goto L_8001F8CC;
    }
L_8001F894:
    // 0x8001F894: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8001F898: addu        $t9, $t4, $t7
    ctx->r25 = ADD32(ctx->r12, ctx->r15);
    // 0x8001F89C: lw          $s1, 0x10($t9)
    ctx->r17 = MEM_W(ctx->r25, 0X10);
    // 0x8001F8A0: bne         $v1, $a0, L_8001F8B0
    if (ctx->r3 != ctx->r4) {
        // 0x8001F8A4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8001F8B0;
    }
    // 0x8001F8A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8001F8A8: b           L_8001F8F8
    // 0x8001F8AC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8001F8F8;
    // 0x8001F8AC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8001F8B0:
    // 0x8001F8B0: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x8001F8B4: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8001F8B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001F8BC: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8001F8C0: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8001F8C4: bne         $at, $zero, L_8001F894
    if (ctx->r1 != 0) {
        // 0x8001F8C8: sra         $v1, $t6, 16
        ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
            goto L_8001F894;
    }
    // 0x8001F8C8: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
L_8001F8CC:
    // 0x8001F8CC: sll         $t6, $t3, 16
    ctx->r14 = S32(ctx->r11 << 16);
    // 0x8001F8D0: sra         $t3, $t6, 16
    ctx->r11 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001F8D4: slt         $at, $t3, $t2
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8001F8D8: bne         $at, $zero, L_8001F87C
    if (ctx->r1 != 0) {
        // 0x8001F8DC: sll         $t6, $t3, 2
        ctx->r14 = S32(ctx->r11 << 2);
            goto L_8001F87C;
    }
    // 0x8001F8DC: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
L_8001F8E0:
    // 0x8001F8E0: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x8001F8E4: sra         $t0, $t7, 16
    ctx->r8 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8001F8E8: slt         $at, $t0, $a2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8001F8EC: bne         $at, $zero, L_8001F860
    if (ctx->r1 != 0) {
        // 0x8001F8F0: sll         $t7, $t0, 2
        ctx->r15 = S32(ctx->r8 << 2);
            goto L_8001F860;
    }
    // 0x8001F8F0: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
L_8001F8F4:
    // 0x8001F8F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001F8F8:
    // 0x8001F8F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001F8FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001F900: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8001F904: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
L_8001F908:
    // 0x8001F908: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_8001F90C:
    // 0x8001F90C: lw          $s0, 0x8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8);
    // 0x8001F910: lw          $s1, 0xC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC);
    // 0x8001F914: jr          $ra
    // 0x8001F918: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8001F918: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8001F91C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F91C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8001F920: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x8001F924: sll         $t8, $s1, 24
    ctx->r24 = S32(ctx->r17 << 24);
    // 0x8001F928: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8001F92C: addiu       $s3, $s3, -0x48F8
    ctx->r19 = ADD32(ctx->r19, -0X48F8);
    // 0x8001F930: sra         $s1, $t8, 24
    ctx->r17 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8001F934: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x8001F938: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x8001F93C: sll         $t6, $s0, 24
    ctx->r14 = S32(ctx->r16 << 24);
    // 0x8001F940: sra         $s0, $t6, 24
    ctx->r16 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8001F944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001F948: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8001F94C: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x8001F950: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x8001F954: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001F958: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8001F95C: beq         $at, $zero, L_8001F96C
    if (ctx->r1 == 0) {
        // 0x8001F960: or          $s2, $t7, $zero
        ctx->r18 = ctx->r15 | 0;
            goto L_8001F96C;
    }
    // 0x8001F960: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x8001F964: bgez        $t7, L_8001F974
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8001F968: sll         $a0, $s2, 16
        ctx->r4 = S32(ctx->r18 << 16);
            goto L_8001F974;
    }
    // 0x8001F968: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
L_8001F96C:
    // 0x8001F96C: b           L_8001FC00
    // 0x8001F970: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001FC00;
    // 0x8001F970: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001F974:
    // 0x8001F974: addiu       $s4, $sp, 0x3C
    ctx->r20 = ADD32(ctx->r29, 0X3C);
    // 0x8001F978: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001F97C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8001F980: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8001F984: jal         0x8001F51C
    // 0x8001F988: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001F51C(rdram, ctx);
        goto after_0;
    // 0x8001F988: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8001F98C: bltz        $s0, L_8001F9A8
    if (SIGNED(ctx->r16) < 0) {
        // 0x8001F990: or          $a1, $s4, $zero
        ctx->r5 = ctx->r20 | 0;
            goto L_8001F9A8;
    }
    // 0x8001F990: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8001F994: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x8001F998: andi        $t9, $s0, 0xF
    ctx->r25 = ctx->r16 & 0XF;
    // 0x8001F99C: andi        $t8, $t7, 0xF0
    ctx->r24 = ctx->r15 & 0XF0;
    // 0x8001F9A0: or          $t6, $t8, $t9
    ctx->r14 = ctx->r24 | ctx->r25;
    // 0x8001F9A4: sb          $t6, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r14;
L_8001F9A8:
    // 0x8001F9A8: bltz        $s1, L_8001F9C4
    if (SIGNED(ctx->r17) < 0) {
        // 0x8001F9AC: or          $fp, $zero, $zero
        ctx->r30 = 0 | 0;
            goto L_8001F9C4;
    }
    // 0x8001F9AC: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x8001F9B0: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x8001F9B4: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x8001F9B8: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x8001F9BC: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8001F9C0: sb          $t7, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r15;
L_8001F9C4:
    // 0x8001F9C4: lw          $t9, 0x0($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X0);
    // 0x8001F9C8: addiu       $at, $zero, 0x5431
    ctx->r1 = ADD32(0, 0X5431);
    // 0x8001F9CC: lh          $v0, 0x0($t9)
    ctx->r2 = MEM_H(ctx->r25, 0X0);
    // 0x8001F9D0: lh          $a2, 0x66($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X66);
    // 0x8001F9D4: beq         $v0, $at, L_8001F9EC
    if (ctx->r2 == ctx->r1) {
        // 0x8001F9D8: addiu       $at, $zero, 0x5432
        ctx->r1 = ADD32(0, 0X5432);
            goto L_8001F9EC;
    }
    // 0x8001F9D8: addiu       $at, $zero, 0x5432
    ctx->r1 = ADD32(0, 0X5432);
    // 0x8001F9DC: beq         $v0, $at, L_8001F9EC
    if (ctx->r2 == ctx->r1) {
        // 0x8001F9E0: addiu       $at, $zero, 0x5433
        ctx->r1 = ADD32(0, 0X5433);
            goto L_8001F9EC;
    }
    // 0x8001F9E0: addiu       $at, $zero, 0x5433
    ctx->r1 = ADD32(0, 0X5433);
    // 0x8001F9E4: bne         $v0, $at, L_8001FA10
    if (ctx->r2 != ctx->r1) {
        // 0x8001F9E8: nop
    
            goto L_8001FA10;
    }
    // 0x8001F9E8: nop

L_8001F9EC:
    // 0x8001F9EC: jal         0x8001F2CC
    // 0x8001F9F0: sh          $s2, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r18;
    func_8001F2CC(rdram, ctx);
        goto after_1;
    // 0x8001F9F0: sh          $s2, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r18;
    after_1:
    // 0x8001F9F4: sll         $fp, $v0, 16
    ctx->r30 = S32(ctx->r2 << 16);
    // 0x8001F9F8: sra         $t8, $fp, 16
    ctx->r24 = S32(SIGNED(ctx->r30) >> 16);
    // 0x8001F9FC: lh          $s2, 0x62($sp)
    ctx->r18 = MEM_H(ctx->r29, 0X62);
    // 0x8001FA00: bgez        $v0, L_8001FA24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8001FA04: or          $fp, $t8, $zero
        ctx->r30 = ctx->r24 | 0;
            goto L_8001FA24;
    }
    // 0x8001FA04: or          $fp, $t8, $zero
    ctx->r30 = ctx->r24 | 0;
    // 0x8001FA08: b           L_8001FC00
    // 0x8001FA0C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001FC00;
    // 0x8001FA0C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001FA10:
    // 0x8001FA10: lbu         $fp, 0x4F($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X4F);
    // 0x8001FA14: nop

    // 0x8001FA18: andi        $t6, $fp, 0xF
    ctx->r14 = ctx->r30 & 0XF;
    // 0x8001FA1C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8001FA20: sra         $fp, $t7, 16
    ctx->r30 = S32(SIGNED(ctx->r15) >> 16);
L_8001FA24:
    // 0x8001FA24: sll         $t8, $fp, 2
    ctx->r24 = S32(ctx->r30 << 2);
    // 0x8001FA28: subu        $t8, $t8, $fp
    ctx->r24 = SUB32(ctx->r24, ctx->r30);
    // 0x8001FA2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001FA30: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001FA34: lw          $t6, -0x48F4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48F4);
    // 0x8001FA38: subu        $t8, $t8, $fp
    ctx->r24 = SUB32(ctx->r24, ctx->r30);
    // 0x8001FA3C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001FA40: addu        $v0, $t8, $t6
    ctx->r2 = ADD32(ctx->r24, ctx->r14);
    // 0x8001FA44: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x8001FA48: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8001FA4C: bne         $s1, $t7, L_8001FB04
    if (ctx->r17 != ctx->r15) {
        // 0x8001FA50: or          $s6, $v0, $zero
        ctx->r22 = ctx->r2 | 0;
            goto L_8001FB04;
    }
    // 0x8001FA50: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8001FA54: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x8001FA58: nop

    // 0x8001FA5C: andi        $t8, $t9, 0x1000
    ctx->r24 = ctx->r25 & 0X1000;
    // 0x8001FA60: bne         $t8, $zero, L_8001FB04
    if (ctx->r24 != 0) {
        // 0x8001FA64: nop
    
            goto L_8001FB04;
    }
    // 0x8001FA64: nop

    // 0x8001FA68: lh          $a1, 0x12($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X12);
    // 0x8001FA6C: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x8001FA70: bltz        $a1, L_8001FB04
    if (SIGNED(ctx->r5) < 0) {
        // 0x8001FA74: nop
    
            goto L_8001FB04;
    }
    // 0x8001FA74: nop

    // 0x8001FA78: lb          $t6, 0x25($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X25);
    // 0x8001FA7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001FA80: bne         $t6, $at, L_8001FAA8
    if (ctx->r14 != ctx->r1) {
        // 0x8001FA84: nop
    
            goto L_8001FAA8;
    }
    // 0x8001FA84: nop

    // 0x8001FA88: sll         $s3, $fp, 16
    ctx->r19 = S32(ctx->r30 << 16);
    // 0x8001FA8C: sra         $t7, $s3, 16
    ctx->r15 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8001FA90: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x8001FA94: jal         0x8001E6DC
    // 0x8001FA98: sh          $s2, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r18;
    func_8001E6DC(rdram, ctx);
        goto after_2;
    // 0x8001FA98: sh          $s2, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r18;
    after_2:
    // 0x8001FA9C: lh          $s2, 0x62($sp)
    ctx->r18 = MEM_H(ctx->r29, 0X62);
    // 0x8001FAA0: lh          $a1, 0x12($s7)
    ctx->r5 = MEM_H(ctx->r23, 0X12);
    // 0x8001FAA4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8001FAA8:
    // 0x8001FAA8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8001FAAC: addiu       $s0, $s0, -0x48FC
    ctx->r16 = ADD32(ctx->r16, -0X48FC);
    // 0x8001FAB0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001FAB4: jal         0x8007D930
    // 0x8001FAB8: nop

    alSndpSetSound(rdram, ctx);
        goto after_3;
    // 0x8001FAB8: nop

    after_3:
    // 0x8001FABC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8001FAC0: jal         0x8007DBC0
    // 0x8001FAC4: nop

    alSndpStop(rdram, ctx);
        goto after_4;
    // 0x8001FAC4: nop

    after_4:
    // 0x8001FAC8: sb          $zero, 0x25($s7)
    MEM_B(0X25, ctx->r23) = 0;
    // 0x8001FACC: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001FAD0: lw          $t9, -0x48CC($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48CC);
    // 0x8001FAD4: sll         $t8, $fp, 2
    ctx->r24 = S32(ctx->r30 << 2);
    // 0x8001FAD8: beq         $t9, $zero, L_8001FB04
    if (ctx->r25 == 0) {
        // 0x8001FADC: subu        $t8, $t8, $fp
        ctx->r24 = SUB32(ctx->r24, ctx->r30);
            goto L_8001FB04;
    }
    // 0x8001FADC: subu        $t8, $t8, $fp
    ctx->r24 = SUB32(ctx->r24, ctx->r30);
    // 0x8001FAE0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001FAE4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001FAE8: lw          $t6, -0x48C8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48C8);
    // 0x8001FAEC: subu        $t8, $t8, $fp
    ctx->r24 = SUB32(ctx->r24, ctx->r30);
    // 0x8001FAF0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8001FAF4: addu        $v0, $t8, $t6
    ctx->r2 = ADD32(ctx->r24, ctx->r14);
    // 0x8001FAF8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8001FAFC: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    // 0x8001FB00: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_8001FB04:
    // 0x8001FB04: sh          $s2, 0x10($s6)
    MEM_H(0X10, ctx->r22) = ctx->r18;
    // 0x8001FB08: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001FB0C: lb          $t9, -0x48D0($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X48D0);
    // 0x8001FB10: nop

    // 0x8001FB14: sb          $t9, 0x1E($s6)
    MEM_B(0X1E, ctx->r22) = ctx->r25;
    // 0x8001FB18: lb          $a0, 0x4D($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X4D);
    // 0x8001FB1C: jal         0x8001D8D8
    // 0x8001FB20: nop

    func_8001D8D8(rdram, ctx);
        goto after_5;
    // 0x8001FB20: nop

    after_5:
    // 0x8001FB24: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x8001FB28: sh          $v0, 0x1C($s6)
    MEM_H(0X1C, ctx->r22) = ctx->r2;
    // 0x8001FB2C: sb          $t8, 0x1F($s6)
    MEM_B(0X1F, ctx->r22) = ctx->r24;
    // 0x8001FB30: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001FB34: lbu         $t6, -0x48CF($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X48CF);
    // 0x8001FB38: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001FB3C: sb          $t6, 0x22($s6)
    MEM_B(0X22, ctx->r22) = ctx->r14;
    // 0x8001FB40: lbu         $t7, 0x4E($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4E);
    // 0x8001FB44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001FB48: sb          $t7, 0x21($s6)
    MEM_B(0X21, ctx->r22) = ctx->r15;
    // 0x8001FB4C: lh          $t9, -0x48D4($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X48D4);
    // 0x8001FB50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001FB54: sh          $zero, 0x14($s6)
    MEM_H(0X14, ctx->r22) = 0;
    // 0x8001FB58: sh          $t9, 0x16($s6)
    MEM_H(0X16, ctx->r22) = ctx->r25;
    // 0x8001FB5C: swc1        $f4, 0x18($s6)
    MEM_W(0X18, ctx->r22) = ctx->f4.u32l;
    // 0x8001FB60: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8001FB64: sw          $s1, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r17;
    // 0x8001FB68: swc1        $f6, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->f6.u32l;
    // 0x8001FB6C: lbu         $t8, 0x4F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4F);
    // 0x8001FB70: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001FB74: sra         $t6, $t8, 4
    ctx->r14 = S32(SIGNED(ctx->r24) >> 4);
    // 0x8001FB78: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x8001FB7C: sb          $t7, 0x24($s6)
    MEM_B(0X24, ctx->r22) = ctx->r15;
    // 0x8001FB80: lh          $t9, 0x66($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X66);
    // 0x8001FB84: sll         $t7, $fp, 4
    ctx->r15 = S32(ctx->r30 << 4);
    // 0x8001FB88: sb          $t9, 0x26($s6)
    MEM_B(0X26, ctx->r22) = ctx->r25;
    // 0x8001FB8C: lb          $t8, 0x51($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X51);
    // 0x8001FB90: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001FB94: beq         $t8, $zero, L_8001FBA4
    if (ctx->r24 == 0) {
        // 0x8001FB98: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8001FBA4;
    }
    // 0x8001FB98: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8001FB9C: b           L_8001FBB4
    // 0x8001FBA0: sb          $t8, 0x23($s6)
    MEM_B(0X23, ctx->r22) = ctx->r24;
        goto L_8001FBB4;
    // 0x8001FBA0: sb          $t8, 0x23($s6)
    MEM_B(0X23, ctx->r22) = ctx->r24;
L_8001FBA4:
    // 0x8001FBA4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001FBA8: lbu         $t6, -0x48CE($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X48CE);
    // 0x8001FBAC: nop

    // 0x8001FBB0: sb          $t6, 0x23($s6)
    MEM_B(0X23, ctx->r22) = ctx->r14;
L_8001FBB4:
    // 0x8001FBB4: lw          $t9, -0x48C4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48C4);
    // 0x8001FBB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001FBBC: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    // 0x8001FBC0: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x8001FBC4: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x8001FBC8: lb          $t8, 0x50($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X50);
    // 0x8001FBCC: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x8001FBD0: sb          $t8, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r24;
    // 0x8001FBD4: lh          $t6, 0x4A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4A);
    // 0x8001FBD8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8001FBDC: bgez        $t6, L_8001FBEC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8001FBE0: nop
    
            goto L_8001FBEC;
    }
    // 0x8001FBE0: nop

    // 0x8001FBE4: b           L_8001FBF0
    // 0x8001FBE8: sb          $s1, 0x25($s6)
    MEM_B(0X25, ctx->r22) = ctx->r17;
        goto L_8001FBF0;
    // 0x8001FBE8: sb          $s1, 0x25($s6)
    MEM_B(0X25, ctx->r22) = ctx->r17;
L_8001FBEC:
    // 0x8001FBEC: sb          $t7, 0x25($s6)
    MEM_B(0X25, ctx->r22) = ctx->r15;
L_8001FBF0:
    // 0x8001FBF0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8001FBF4: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
    // 0x8001FBF8: ori         $t8, $t9, 0x1000
    ctx->r24 = ctx->r25 | 0X1000;
    // 0x8001FBFC: sw          $t8, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r24;
L_8001FC00:
    // 0x8001FC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001FC04: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8001FC08: jr          $ra
    // 0x8001FC0C: nop

    return;
    // 0x8001FC0C: nop

;}
RECOMP_FUNC void func_8001FC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FC10: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8001FC14: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8001FC18: lw          $t6, -0x48E4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48E4);
    // 0x8001FC1C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8001FC20: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8001FC24: lh          $a2, 0x4A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X4A);
    // 0x8001FC28: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8001FC2C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001FC30: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001FC34: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001FC38: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001FC3C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001FC40: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001FC44: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001FC48: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001FC4C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001FC50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001FC54: bne         $t7, $zero, L_8001FC64
    if (ctx->r15 != 0) {
        // 0x8001FC58: sw          $a1, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r5;
            goto L_8001FC64;
    }
    // 0x8001FC58: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8001FC5C: b           L_8001FCB4
    // 0x8001FC60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001FCB4;
    // 0x8001FC60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001FC64:
    // 0x8001FC64: jal         0x8001D420
    // 0x8001FC68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001FC68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001FC6C: sll         $s2, $a2, 16
    ctx->r18 = S32(ctx->r6 << 16);
    // 0x8001FC70: sra         $t8, $s2, 16
    ctx->r24 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8001FC74: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    // 0x8001FC78: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8001FC7C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8001FC80: jal         0x8001F91C
    // 0x8001FC84: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    func_8001F91C(rdram, ctx);
        goto after_1;
    // 0x8001FC84: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    after_1:
    // 0x8001FC88: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8001FC8C: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8001FC90: lh          $a1, 0x4E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X4E);
    // 0x8001FC94: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8001FC98: sh          $v0, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r2;
    // 0x8001FC9C: jal         0x8001DFD0
    // 0x8001FCA0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8001DFD0(rdram, ctx);
        goto after_2;
    // 0x8001FCA0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_2:
    // 0x8001FCA4: jal         0x8001D420
    // 0x8001FCA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_3;
    // 0x8001FCA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8001FCAC: lh          $v0, 0x46($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X46);
    // 0x8001FCB0: nop

L_8001FCB4:
    // 0x8001FCB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001FCB8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001FCBC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001FCC0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001FCC4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001FCC8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001FCCC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001FCD0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001FCD4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001FCD8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001FCDC: jr          $ra
    // 0x8001FCE0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8001FCE0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8001FCE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FCE4: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001FCE8: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001FCEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8001FCF0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8001FCF4: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8001FCF8: bltz        $t7, L_8001FD24
    if (SIGNED(ctx->r15) < 0) {
        // 0x8001FCFC: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8001FD24;
    }
    // 0x8001FCFC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8001FD00: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001FD04: addiu       $v0, $v0, -0x48B0
    ctx->r2 = ADD32(ctx->r2, -0X48B0);
    // 0x8001FD08: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x8001FD0C: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x8001FD10: nop

    // 0x8001FD14: slti        $at, $t8, 0x168
    ctx->r1 = SIGNED(ctx->r24) < 0X168 ? 1 : 0;
    // 0x8001FD18: bne         $at, $zero, L_8001FD24
    if (ctx->r1 != 0) {
        // 0x8001FD1C: nop
    
            goto L_8001FD24;
    }
    // 0x8001FD1C: nop

    // 0x8001FD20: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_8001FD24:
    // 0x8001FD24: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8001FD28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001FD2C: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8001FD30: nop

    // 0x8001FD34: bc1f        L_8001FD40
    if (!c1cs) {
        // 0x8001FD38: nop
    
            goto L_8001FD40;
    }
    // 0x8001FD38: nop

    // 0x8001FD3C: swc1        $f12, -0x48C0($at)
    MEM_W(-0X48C0, ctx->r1) = ctx->f12.u32l;
L_8001FD40:
    // 0x8001FD40: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x8001FD44: nop

    // 0x8001FD48: bc1f        L_8001FD5C
    if (!c1cs) {
        // 0x8001FD4C: nop
    
            goto L_8001FD5C;
    }
    // 0x8001FD4C: nop

    // 0x8001FD50: sub.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x8001FD54: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001FD58: swc1        $f4, -0x48BC($at)
    MEM_W(-0X48BC, ctx->r1) = ctx->f4.u32l;
L_8001FD5C:
    // 0x8001FD5C: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x8001FD60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001FD64: bc1f        L_8001FD70
    if (!c1cs) {
        // 0x8001FD68: nop
    
            goto L_8001FD70;
    }
    // 0x8001FD68: nop

    // 0x8001FD6C: swc1        $f16, -0x48B8($at)
    MEM_W(-0X48B8, ctx->r1) = ctx->f16.u32l;
L_8001FD70:
    // 0x8001FD70: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x8001FD74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001FD78: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x8001FD7C: nop

    // 0x8001FD80: bc1f        L_8001FDB8
    if (!c1cs) {
        // 0x8001FD84: nop
    
            goto L_8001FDB8;
    }
    // 0x8001FD84: nop

    // 0x8001FD88: lwc1        $f6, -0x48B8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X48B8);
    // 0x8001FD8C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001FD90: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8001FD94: addiu       $v0, $v0, -0x48B4
    ctx->r2 = ADD32(ctx->r2, -0X48B4);
    // 0x8001FD98: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8001FD9C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8001FDA0: nop

    // 0x8001FDA4: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x8001FDA8: nop

    // 0x8001FDAC: bc1f        L_8001FDB8
    if (!c1cs) {
        // 0x8001FDB0: nop
    
            goto L_8001FDB8;
    }
    // 0x8001FDB0: nop

    // 0x8001FDB4: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_8001FDB8:
    // 0x8001FDB8: jr          $ra
    // 0x8001FDBC: nop

    return;
    // 0x8001FDBC: nop

;}
RECOMP_FUNC void func_8001FDC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FDC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001FDC4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8001FDC8: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x8001FDCC: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8001FDD0: bc1f        L_8001FDE0
    if (!c1cs) {
        // 0x8001FDD4: sra         $a2, $t6, 16
        ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
            goto L_8001FDE0;
    }
    // 0x8001FDD4: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8001FDD8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001FDDC: swc1        $f12, -0x48AC($at)
    MEM_W(-0X48AC, ctx->r1) = ctx->f12.u32l;
L_8001FDE0:
    // 0x8001FDE0: bltz        $a2, L_8001FDEC
    if (SIGNED(ctx->r6) < 0) {
        // 0x8001FDE4: lui         $at, 0x800B
        ctx->r1 = S32(0X800B << 16);
            goto L_8001FDEC;
    }
    // 0x8001FDE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001FDE8: sh          $a2, -0x48AE($at)
    MEM_H(-0X48AE, ctx->r1) = ctx->r6;
L_8001FDEC:
    // 0x8001FDEC: bltz        $a1, L_8001FE04
    if (SIGNED(ctx->r5) < 0) {
        // 0x8001FDF0: nop
    
            goto L_8001FE04;
    }
    // 0x8001FDF0: nop

    // 0x8001FDF4: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x8001FDF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001FDFC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8001FE00: swc1        $f8, -0x48A8($at)
    MEM_W(-0X48A8, ctx->r1) = ctx->f8.u32l;
L_8001FE04:
    // 0x8001FE04: jr          $ra
    // 0x8001FE08: nop

    return;
    // 0x8001FE08: nop

;}
RECOMP_FUNC void func_8001FE0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FE0C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001FE10: sll         $a2, $a0, 16
    ctx->r6 = S32(ctx->r4 << 16);
    // 0x8001FE14: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8001FE18: lw          $t9, -0x48E4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48E4);
    // 0x8001FE1C: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8001FE20: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8001FE24: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8001FE28: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8001FE2C: andi        $t6, $t9, 0x8000
    ctx->r14 = ctx->r25 & 0X8000;
    // 0x8001FE30: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8001FE34: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001FE38: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001FE3C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001FE40: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001FE44: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001FE48: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001FE4C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001FE50: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001FE54: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001FE58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001FE5C: bne         $t6, $zero, L_8001FE6C
    if (ctx->r14 != 0) {
        // 0x8001FE60: sw          $a0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r4;
            goto L_8001FE6C;
    }
    // 0x8001FE60: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8001FE64: b           L_8001FEA8
    // 0x8001FE68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001FEA8;
    // 0x8001FE68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001FE6C:
    // 0x8001FE6C: jal         0x8001D420
    // 0x8001FE70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001FE70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001FE74: sll         $s2, $a2, 16
    ctx->r18 = S32(ctx->r6 << 16);
    // 0x8001FE78: sra         $t7, $s2, 16
    ctx->r15 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8001FE7C: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x8001FE80: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8001FE84: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8001FE88: jal         0x8001F91C
    // 0x8001FE8C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    func_8001F91C(rdram, ctx);
        goto after_1;
    // 0x8001FE8C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    after_1:
    // 0x8001FE90: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x8001FE94: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001FE98: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8001FE9C: jal         0x8001D420
    // 0x8001FEA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_2;
    // 0x8001FEA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8001FEA4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8001FEA8:
    // 0x8001FEA8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001FEAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001FEB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001FEB4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001FEB8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001FEBC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001FEC0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001FEC4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001FEC8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001FECC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001FED0: jr          $ra
    // 0x8001FED4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8001FED4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001FED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FED8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001FEDC: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8001FEE0: lw          $t7, -0x48E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48E4);
    // 0x8001FEE4: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x8001FEE8: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001FEEC: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8001FEF0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8001FEF4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8001FEF8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8001FEFC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001FF00: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8001FF04: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8001FF08: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8001FF0C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001FF10: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8001FF14: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001FF18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8001FF1C: bne         $t8, $zero, L_8001FF2C
    if (ctx->r24 != 0) {
        // 0x8001FF20: sw          $a0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r4;
            goto L_8001FF2C;
    }
    // 0x8001FF20: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8001FF24: b           L_8001FF68
    // 0x8001FF28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8001FF68;
    // 0x8001FF28: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001FF2C:
    // 0x8001FF2C: jal         0x8001D420
    // 0x8001FF30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001D420(rdram, ctx);
        goto after_0;
    // 0x8001FF30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8001FF34: sll         $s2, $a1, 16
    ctx->r18 = S32(ctx->r5 << 16);
    // 0x8001FF38: sra         $t9, $s2, 16
    ctx->r25 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8001FF3C: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x8001FF40: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8001FF44: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8001FF48: jal         0x8001F91C
    // 0x8001FF4C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    func_8001F91C(rdram, ctx);
        goto after_1;
    // 0x8001FF4C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    after_1:
    // 0x8001FF50: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x8001FF54: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8001FF58: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8001FF5C: jal         0x8001D420
    // 0x8001FF60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001D420(rdram, ctx);
        goto after_2;
    // 0x8001FF60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8001FF64: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8001FF68:
    // 0x8001FF68: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8001FF6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001FF70: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001FF74: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001FF78: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001FF7C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001FF80: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8001FF84: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001FF88: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8001FF8C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8001FF90: jr          $ra
    // 0x8001FF94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8001FF94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8001FF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FF98: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8001FF9C: addiu       $v0, $v0, -0xDD0
    ctx->r2 = ADD32(ctx->r2, -0XDD0);
    // 0x8001FFA0: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
    // 0x8001FFA4: sw          $a1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r5;
    // 0x8001FFA8: sw          $a2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r6;
    // 0x8001FFAC: jr          $ra
    // 0x8001FFB0: sw          $a3, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r7;
    return;
    // 0x8001FFB0: sw          $a3, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r7;
;}
RECOMP_FUNC void func_8001FFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FFB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001FFB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001FFBC: jal         0x8001EAF0
    // 0x8001FFC0: nop

    func_8001EAF0(rdram, ctx);
        goto after_0;
    // 0x8001FFC0: nop

    after_0:
    // 0x8001FFC4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001FFC8: lw          $a0, -0x48FC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48FC);
    // 0x8001FFCC: jal         0x8007AC60
    // 0x8001FFD0: nop

    alSndpDelete(rdram, ctx);
        goto after_1;
    // 0x8001FFD0: nop

    after_1:
    // 0x8001FFD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001FFD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001FFDC: jr          $ra
    // 0x8001FFE0: nop

    return;
    // 0x8001FFE0: nop

;}
RECOMP_FUNC void func_8001FFE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001FFE4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8001FFE8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8001FFEC: sll         $t1, $a1, 16
    ctx->r9 = S32(ctx->r5 << 16);
    // 0x8001FFF0: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x8001FFF4: sra         $t5, $t9, 16
    ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8001FFF8: sra         $t8, $t1, 16
    ctx->r24 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8001FFFC: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80020000: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80020004: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80020008: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8002000C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80020010: or          $t1, $t8, $zero
    ctx->r9 = ctx->r24 | 0;
    // 0x80020014: beq         $t5, $zero, L_8002005C
    if (ctx->r13 == 0) {
        // 0x80020018: sw          $a1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r5;
            goto L_8002005C;
    }
    // 0x80020018: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x8002001C: addiu       $t6, $zero, -0x7F00
    ctx->r14 = ADD32(0, -0X7F00);
    // 0x80020020: div         $zero, $t6, $t5
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r13)));
    // 0x80020024: bne         $a2, $zero, L_80020030
    if (ctx->r6 != 0) {
        // 0x80020028: nop
    
            goto L_80020030;
    }
    // 0x80020028: nop

    // 0x8002002C: break       7
    do_break(2147614764);
L_80020030:
    // 0x80020030: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80020034: bne         $a2, $at, L_80020048
    if (ctx->r6 != ctx->r1) {
        // 0x80020038: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80020048;
    }
    // 0x80020038: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002003C: bne         $t6, $at, L_80020048
    if (ctx->r14 != ctx->r1) {
        // 0x80020040: nop
    
            goto L_80020048;
    }
    // 0x80020040: nop

    // 0x80020044: break       6
    do_break(2147614788);
L_80020048:
    // 0x80020048: mflo        $v1
    ctx->r3 = lo;
    // 0x8002004C: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x80020050: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80020054: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x80020058: sh          $t8, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r24;
L_8002005C:
    // 0x8002005C: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80020060: lh          $v1, 0x6($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X6);
    // 0x80020064: lw          $t0, -0x48A4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X48A4);
    // 0x80020068: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002006C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80020070: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
L_80020074:
    // 0x80020074: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80020078: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8002007C: andi        $t5, $t9, 0x1
    ctx->r13 = ctx->r25 & 0X1;
    // 0x80020080: bne         $t5, $zero, L_80020184
    if (ctx->r13 != 0) {
        // 0x80020084: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_80020184;
    }
    // 0x80020084: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80020088: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x8002008C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80020090: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80020094: addiu       $t3, $t3, -0x48A0
    ctx->r11 = ADD32(ctx->r11, -0X48A0);
    // 0x80020098: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x8002009C: addu        $t0, $t3, $t6
    ctx->r8 = ADD32(ctx->r11, ctx->r14);
    // 0x800200A0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x800200A4: sra         $t7, $t1, 8
    ctx->r15 = S32(SIGNED(ctx->r9) >> 8);
    // 0x800200A8: sb          $t4, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r12;
    // 0x800200AC: sb          $t7, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r15;
    // 0x800200B0: beq         $a2, $zero, L_80020134
    if (ctx->r6 == 0) {
        // 0x800200B4: sb          $t1, 0x2($t0)
        MEM_B(0X2, ctx->r8) = ctx->r9;
            goto L_80020134;
    }
    // 0x800200B4: sb          $t1, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r9;
    // 0x800200B8: addiu       $t9, $a2, -0x1
    ctx->r25 = ADD32(ctx->r6, -0X1);
    // 0x800200BC: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800200C0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x800200C4: sb          $t6, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r14;
    // 0x800200C8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x800200CC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800200D0: sra         $t6, $v1, 8
    ctx->r14 = S32(SIGNED(ctx->r3) >> 8);
    // 0x800200D4: sb          $t8, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r24;
    // 0x800200D8: sb          $t9, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r25;
    // 0x800200DC: sb          $t6, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r14;
    // 0x800200E0: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x800200E4: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x800200E8: sra         $t1, $a0, 8
    ctx->r9 = S32(SIGNED(ctx->r4) >> 8);
    // 0x800200EC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x800200F0: sra         $t9, $a2, 8
    ctx->r25 = S32(SIGNED(ctx->r6) >> 8);
    // 0x800200F4: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x800200F8: sb          $t7, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r15;
    // 0x800200FC: sb          $t4, 0x6($t0)
    MEM_B(0X6, ctx->r8) = ctx->r12;
    // 0x80020100: sb          $zero, 0x7($t0)
    MEM_B(0X7, ctx->r8) = 0;
    // 0x80020104: sb          $t5, 0x9($t0)
    MEM_B(0X9, ctx->r8) = ctx->r13;
    // 0x80020108: sb          $t1, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r9;
    // 0x8002010C: sb          $a0, 0xB($t0)
    MEM_B(0XB, ctx->r8) = ctx->r4;
    // 0x80020110: sb          $v1, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r3;
    // 0x80020114: sb          $t8, 0xE($t0)
    MEM_B(0XE, ctx->r8) = ctx->r24;
    // 0x80020118: sb          $t9, 0xF($t0)
    MEM_B(0XF, ctx->r8) = ctx->r25;
    // 0x8002011C: sb          $a2, 0x10($t0)
    MEM_B(0X10, ctx->r8) = ctx->r6;
    // 0x80020120: sb          $t6, 0x11($t0)
    MEM_B(0X11, ctx->r8) = ctx->r14;
    // 0x80020124: sb          $t1, 0x12($t0)
    MEM_B(0X12, ctx->r8) = ctx->r9;
    // 0x80020128: sb          $a0, 0x13($t0)
    MEM_B(0X13, ctx->r8) = ctx->r4;
    // 0x8002012C: b           L_8002014C
    // 0x80020130: sb          $zero, 0x14($t0)
    MEM_B(0X14, ctx->r8) = 0;
        goto L_8002014C;
    // 0x80020130: sb          $zero, 0x14($t0)
    MEM_B(0X14, ctx->r8) = 0;
L_80020134:
    // 0x80020134: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x80020138: sra         $t8, $a0, 8
    ctx->r24 = S32(SIGNED(ctx->r4) >> 8);
    // 0x8002013C: sb          $t7, 0x3($t0)
    MEM_B(0X3, ctx->r8) = ctx->r15;
    // 0x80020140: sb          $t8, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r24;
    // 0x80020144: sb          $a0, 0x5($t0)
    MEM_B(0X5, ctx->r8) = ctx->r4;
    // 0x80020148: sb          $zero, 0x6($t0)
    MEM_B(0X6, ctx->r8) = 0;
L_8002014C:
    // 0x8002014C: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x80020150: addu        $t5, $t5, $a1
    ctx->r13 = ADD32(ctx->r13, ctx->r5);
    // 0x80020154: lw          $t8, 0x0($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X0);
    // 0x80020158: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8002015C: sh          $zero, 0xC($a3)
    MEM_H(0XC, ctx->r7) = 0;
    // 0x80020160: lh          $t7, 0xC($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XC);
    // 0x80020164: addu        $t5, $t5, $a1
    ctx->r13 = ADD32(ctx->r13, ctx->r5);
    // 0x80020168: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8002016C: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x80020170: sw          $t6, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r14;
    // 0x80020174: sw          $zero, 0x14($a3)
    MEM_W(0X14, ctx->r7) = 0;
    // 0x80020178: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x8002017C: b           L_80020194
    // 0x80020180: sh          $t7, 0xE($a3)
    MEM_H(0XE, ctx->r7) = ctx->r15;
        goto L_80020194;
    // 0x80020180: sh          $t7, 0xE($a3)
    MEM_H(0XE, ctx->r7) = ctx->r15;
L_80020184:
    // 0x80020184: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80020188: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8002018C: bne         $a1, $t2, L_80020074
    if (ctx->r5 != ctx->r10) {
        // 0x80020190: addiu       $t0, $t0, 0x18
        ctx->r8 = ADD32(ctx->r8, 0X18);
            goto L_80020074;
    }
    // 0x80020190: addiu       $t0, $t0, 0x18
    ctx->r8 = ADD32(ctx->r8, 0X18);
L_80020194:
    // 0x80020194: addiu       $at, $zero, 0x180
    ctx->r1 = ADD32(0, 0X180);
    // 0x80020198: bne         $v0, $at, L_800201AC
    if (ctx->r2 != ctx->r1) {
        // 0x8002019C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800201AC;
    }
    // 0x8002019C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800201A0: b           L_800201AC
    // 0x800201A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800201AC;
    // 0x800201A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800201A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800201AC:
    // 0x800201AC: jr          $ra
    // 0x800201B0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800201B0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800201B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800201B4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800201B8: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x800201BC: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800201C0: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x800201C4: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x800201C8: sra         $t7, $t0, 16
    ctx->r15 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800201CC: sra         $t6, $t1, 16
    ctx->r14 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800201D0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x800201D4: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x800201D8: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x800201DC: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800201E0: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x800201E4: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x800201E8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800201EC: beq         $at, $zero, L_800201F8
    if (ctx->r1 == 0) {
        // 0x800201F0: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_800201F8;
    }
    // 0x800201F0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800201F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800201F8:
    // 0x800201F8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x800201FC: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x80020200: bne         $a3, $zero, L_8002020C
    if (ctx->r7 != 0) {
        // 0x80020204: sra         $a2, $t5, 16
        ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
            goto L_8002020C;
    }
    // 0x80020204: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80020208: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8002020C:
    // 0x8002020C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80020210: lw          $a1, -0x48A4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X48A4);
    // 0x80020214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80020218: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002021C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
L_80020220:
    // 0x80020220: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80020224: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80020228: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8002022C: bne         $t8, $zero, L_800202CC
    if (ctx->r24 != 0) {
        // 0x80020230: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_800202CC;
    }
    // 0x80020230: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80020234: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80020238: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002023C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80020240: addiu       $t3, $t3, -0x48A0
    ctx->r11 = ADD32(ctx->r11, -0X48A0);
    // 0x80020244: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80020248: addu        $a1, $t9, $t3
    ctx->r5 = ADD32(ctx->r25, ctx->r11);
    // 0x8002024C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80020250: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80020254: sb          $t6, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r14;
    // 0x80020258: sra         $t8, $t1, 8
    ctx->r24 = S32(SIGNED(ctx->r9) >> 8);
    // 0x8002025C: sra         $t3, $a3, 8
    ctx->r11 = S32(SIGNED(ctx->r7) >> 8);
    // 0x80020260: sra         $t4, $t0, 8
    ctx->r12 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80020264: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80020268: sb          $t8, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r24;
    // 0x8002026C: sb          $t3, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r11;
    // 0x80020270: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x80020274: sra         $t6, $a2, 8
    ctx->r14 = S32(SIGNED(ctx->r6) >> 8);
    // 0x80020278: sb          $t2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r10;
    // 0x8002027C: sb          $t4, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r12;
    // 0x80020280: sb          $t0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r8;
    // 0x80020284: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
    // 0x80020288: sb          $t1, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r9;
    // 0x8002028C: sb          $t2, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r10;
    // 0x80020290: sb          $a3, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r7;
    // 0x80020294: sb          $t5, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r13;
    // 0x80020298: sb          $t6, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r14;
    // 0x8002029C: sb          $a2, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r6;
    // 0x800202A0: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x800202A4: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800202A8: sh          $zero, 0xC($v1)
    MEM_H(0XC, ctx->r3) = 0;
    // 0x800202AC: lh          $t8, 0xC($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XC);
    // 0x800202B0: ori         $t3, $t9, 0x1
    ctx->r11 = ctx->r25 | 0X1;
    // 0x800202B4: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x800202B8: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x800202BC: sh          $t1, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r9;
    // 0x800202C0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x800202C4: b           L_800202DC
    // 0x800202C8: sh          $t8, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r24;
        goto L_800202DC;
    // 0x800202C8: sh          $t8, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r24;
L_800202CC:
    // 0x800202CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800202D0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    // 0x800202D4: bne         $v0, $t2, L_80020220
    if (ctx->r2 != ctx->r10) {
        // 0x800202D8: addiu       $a1, $a1, 0x18
        ctx->r5 = ADD32(ctx->r5, 0X18);
            goto L_80020220;
    }
    // 0x800202D8: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
L_800202DC:
    // 0x800202DC: addiu       $at, $zero, 0x180
    ctx->r1 = ADD32(0, 0X180);
    // 0x800202E0: bne         $a0, $at, L_800202F4
    if (ctx->r4 != ctx->r1) {
        // 0x800202E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800202F4;
    }
    // 0x800202E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800202E8: jr          $ra
    // 0x800202EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800202EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800202F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800202F4:
    // 0x800202F4: jr          $ra
    // 0x800202F8: nop

    return;
    // 0x800202F8: nop

;}
RECOMP_FUNC void func_800202FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800202FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80020300: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80020304: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80020308: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8002030C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80020310: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80020314: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80020318: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8002031C: lw          $t9, -0x48F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48F4);
    // 0x80020320: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80020324: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80020328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002032C: addu        $s1, $t8, $t9
    ctx->r17 = ADD32(ctx->r24, ctx->r25);
    // 0x80020330: lh          $t6, 0x12($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X12);
    // 0x80020334: nop

    // 0x80020338: bgez        $t6, L_80020354
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8002033C: nop
    
            goto L_80020354;
    }
    // 0x8002033C: nop

    // 0x80020340: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x80020344: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80020348: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8002034C: b           L_80020628
    // 0x80020350: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
        goto L_80020628;
    // 0x80020350: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
L_80020354:
    // 0x80020354: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80020358: nop

    // 0x8002035C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x80020360: beq         $t9, $zero, L_800203C0
    if (ctx->r25 == 0) {
        // 0x80020364: nop
    
            goto L_800203C0;
    }
    // 0x80020364: nop

    // 0x80020368: lh          $t6, 0x14($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X14);
    // 0x8002036C: lh          $t7, 0x16($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X16);
    // 0x80020370: jal         0x8007D100
    // 0x80020374: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_8007D100(rdram, ctx);
        goto after_0;
    // 0x80020374: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80020378: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x8002037C: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x80020380: addiu       $s2, $s2, -0x48FC
    ctx->r18 = ADD32(ctx->r18, -0X48FC);
    // 0x80020384: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80020388: lh          $a1, 0x12($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X12);
    // 0x8002038C: mul.s       $f20, $f0, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80020390: jal         0x8007D930
    // 0x80020394: nop

    alSndpSetSound(rdram, ctx);
        goto after_1;
    // 0x80020394: nop

    after_1:
    // 0x80020398: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8002039C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x800203A0: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800203A4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x800203A8: jal         0x8007D9C0
    // 0x800203AC: nop

    alSndpSetPitch(rdram, ctx);
        goto after_2;
    // 0x800203AC: nop

    after_2:
    // 0x800203B0: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x800203B4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800203B8: and         $v0, $t8, $at
    ctx->r2 = ctx->r24 & ctx->r1;
    // 0x800203BC: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_800203C0:
    // 0x800203C0: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x800203C4: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x800203C8: beq         $t6, $zero, L_8002054C
    if (ctx->r14 == 0) {
        // 0x800203CC: addiu       $s2, $s2, -0x48FC
        ctx->r18 = ADD32(ctx->r18, -0X48FC);
            goto L_8002054C;
    }
    // 0x800203CC: addiu       $s2, $s2, -0x48FC
    ctx->r18 = ADD32(ctx->r18, -0X48FC);
    // 0x800203D0: lh          $t7, 0x1C($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X1C);
    // 0x800203D4: lb          $t8, 0x1E($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X1E);
    // 0x800203D8: lb          $t6, 0x1F($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X1F);
    // 0x800203DC: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800203E0: addiu       $at, $zero, 0x3F01
    ctx->r1 = ADD32(0, 0X3F01);
    // 0x800203E4: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x800203E8: lh          $a1, 0x12($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X12);
    // 0x800203EC: mflo        $t9
    ctx->r25 = lo;
    // 0x800203F0: nop

    // 0x800203F4: nop

    // 0x800203F8: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800203FC: lb          $t6, 0x20($s1)
    ctx->r14 = MEM_B(ctx->r17, 0X20);
    // 0x80020400: mflo        $s0
    ctx->r16 = lo;
    // 0x80020404: nop

    // 0x80020408: nop

    // 0x8002040C: div         $zero, $s0, $at
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r1)));
    // 0x80020410: mflo        $t7
    ctx->r15 = lo;
    // 0x80020414: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80020418: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8002041C: multu       $t9, $t6
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80020420: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80020424: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80020428: lw          $t6, -0x48E4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48E4);
    // 0x8002042C: mflo        $t7
    ctx->r15 = lo;
    // 0x80020430: nop

    // 0x80020434: nop

    // 0x80020438: div         $zero, $t7, $v1
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r3)));
    // 0x8002043C: bne         $v1, $zero, L_80020448
    if (ctx->r3 != 0) {
        // 0x80020440: nop
    
            goto L_80020448;
    }
    // 0x80020440: nop

    // 0x80020444: break       7
    do_break(2147615812);
L_80020448:
    // 0x80020448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002044C: bne         $v1, $at, L_80020460
    if (ctx->r3 != ctx->r1) {
        // 0x80020450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80020460;
    }
    // 0x80020450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80020454: bne         $t7, $at, L_80020460
    if (ctx->r15 != ctx->r1) {
        // 0x80020458: nop
    
            goto L_80020460;
    }
    // 0x80020458: nop

    // 0x8002045C: break       6
    do_break(2147615836);
L_80020460:
    // 0x80020460: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80020464: mflo        $s0
    ctx->r16 = lo;
    // 0x80020468: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x8002046C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80020470: beq         $t7, $zero, L_800204D4
    if (ctx->r15 == 0) {
        // 0x80020474: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_800204D4;
    }
    // 0x80020474: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80020478: andi        $t8, $v0, 0x100
    ctx->r24 = ctx->r2 & 0X100;
    // 0x8002047C: bne         $t8, $zero, L_800204D4
    if (ctx->r24 != 0) {
        // 0x80020480: lui         $t9, 0x800B
        ctx->r25 = S32(0X800B << 16);
            goto L_800204D4;
    }
    // 0x80020480: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80020484: lh          $t9, -0x48D2($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X48D2);
    // 0x80020488: nop

    // 0x8002048C: multu       $s0, $t9
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80020490: mflo        $t6
    ctx->r14 = lo;
    // 0x80020494: nop

    // 0x80020498: nop

    // 0x8002049C: div         $zero, $t6, $v1
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r3)));
    // 0x800204A0: bne         $v1, $zero, L_800204AC
    if (ctx->r3 != 0) {
        // 0x800204A4: nop
    
            goto L_800204AC;
    }
    // 0x800204A4: nop

    // 0x800204A8: break       7
    do_break(2147615912);
L_800204AC:
    // 0x800204AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800204B0: bne         $v1, $at, L_800204C4
    if (ctx->r3 != ctx->r1) {
        // 0x800204B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800204C4;
    }
    // 0x800204B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800204B8: bne         $t6, $at, L_800204C4
    if (ctx->r14 != ctx->r1) {
        // 0x800204BC: nop
    
            goto L_800204C4;
    }
    // 0x800204BC: nop

    // 0x800204C0: break       6
    do_break(2147615936);
L_800204C4:
    // 0x800204C4: mflo        $s0
    ctx->r16 = lo;
    // 0x800204C8: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x800204CC: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800204D0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
L_800204D4:
    // 0x800204D4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x800204D8: jal         0x8007D930
    // 0x800204DC: nop

    alSndpSetSound(rdram, ctx);
        goto after_3;
    // 0x800204DC: nop

    after_3:
    // 0x800204E0: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x800204E4: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x800204E8: andi        $t6, $t9, 0x100
    ctx->r14 = ctx->r25 & 0X100;
    // 0x800204EC: beq         $t6, $zero, L_8002050C
    if (ctx->r14 == 0) {
        // 0x800204F0: lui         $t8, 0x800B
        ctx->r24 = S32(0X800B << 16);
            goto L_8002050C;
    }
    // 0x800204F0: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800204F4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x800204F8: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800204FC: jal         0x8007DA20
    // 0x80020500: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    alSndpSetVol(rdram, ctx);
        goto after_4;
    // 0x80020500: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_4:
    // 0x80020504: b           L_80020540
    // 0x80020508: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
        goto L_80020540;
    // 0x80020508: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
L_8002050C:
    // 0x8002050C: lh          $t8, -0x48D6($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X48D6);
    // 0x80020510: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80020514: multu       $s0, $t8
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80020518: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8002051C: mflo        $a1
    ctx->r5 = lo;
    // 0x80020520: nop

    // 0x80020524: nop

    // 0x80020528: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x8002052C: mflo        $t9
    ctx->r25 = lo;
    // 0x80020530: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x80020534: jal         0x8007DA20
    // 0x80020538: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    alSndpSetVol(rdram, ctx);
        goto after_5;
    // 0x80020538: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    after_5:
    // 0x8002053C: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
L_80020540:
    // 0x80020540: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80020544: and         $v0, $t8, $at
    ctx->r2 = ctx->r24 & ctx->r1;
    // 0x80020548: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_8002054C:
    // 0x8002054C: andi        $t6, $v0, 0x8
    ctx->r14 = ctx->r2 & 0X8;
    // 0x80020550: beq         $t6, $zero, L_8002058C
    if (ctx->r14 == 0) {
        // 0x80020554: andi        $t9, $v0, 0x4
        ctx->r25 = ctx->r2 & 0X4;
            goto L_8002058C;
    }
    // 0x80020554: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x80020558: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8002055C: lh          $a1, 0x12($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X12);
    // 0x80020560: jal         0x8007D930
    // 0x80020564: nop

    alSndpSetSound(rdram, ctx);
        goto after_6;
    // 0x80020564: nop

    after_6:
    // 0x80020568: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8002056C: lbu         $a1, 0x23($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X23);
    // 0x80020570: jal         0x8007DA80
    // 0x80020574: nop

    alSndpSetFXMix(rdram, ctx);
        goto after_7;
    // 0x80020574: nop

    after_7:
    // 0x80020578: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x8002057C: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x80020580: and         $v0, $t7, $at
    ctx->r2 = ctx->r15 & ctx->r1;
    // 0x80020584: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x80020588: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
L_8002058C:
    // 0x8002058C: beq         $t9, $zero, L_80020628
    if (ctx->r25 == 0) {
        // 0x80020590: lui         $t6, 0x800B
        ctx->r14 = S32(0X800B << 16);
            goto L_80020628;
    }
    // 0x80020590: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80020594: lbu         $t6, -0x58B8($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X58B8);
    // 0x80020598: lh          $a1, 0x12($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X12);
    // 0x8002059C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x800205A0: beq         $t7, $zero, L_800205C8
    if (ctx->r15 == 0) {
        // 0x800205A4: nop
    
            goto L_800205C8;
    }
    // 0x800205A4: nop

    // 0x800205A8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x800205AC: jal         0x8007D930
    // 0x800205B0: nop

    alSndpSetSound(rdram, ctx);
        goto after_8;
    // 0x800205B0: nop

    after_8:
    // 0x800205B4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x800205B8: jal         0x8007DAE0
    // 0x800205BC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    alSndpSetPan(rdram, ctx);
        goto after_9;
    // 0x800205BC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_9:
    // 0x800205C0: b           L_8002061C
    // 0x800205C4: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
        goto L_8002061C;
    // 0x800205C4: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
L_800205C8:
    // 0x800205C8: lbu         $t8, 0x22($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X22);
    // 0x800205CC: lbu         $t9, 0x21($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X21);
    // 0x800205D0: nop

    // 0x800205D4: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x800205D8: addiu       $s0, $s0, -0x40
    ctx->r16 = ADD32(ctx->r16, -0X40);
    // 0x800205DC: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x800205E0: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800205E4: bgez        $s0, L_800205F4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x800205E8: slti        $at, $s0, 0x80
        ctx->r1 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
            goto L_800205F4;
    }
    // 0x800205E8: slti        $at, $s0, 0x80
    ctx->r1 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x800205EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800205F0: slti        $at, $s0, 0x80
    ctx->r1 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
L_800205F4:
    // 0x800205F4: bne         $at, $zero, L_80020600
    if (ctx->r1 != 0) {
        // 0x800205F8: nop
    
            goto L_80020600;
    }
    // 0x800205F8: nop

    // 0x800205FC: addiu       $s0, $zero, 0x7F
    ctx->r16 = ADD32(0, 0X7F);
L_80020600:
    // 0x80020600: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80020604: jal         0x8007D930
    // 0x80020608: nop

    alSndpSetSound(rdram, ctx);
        goto after_10;
    // 0x80020608: nop

    after_10:
    // 0x8002060C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80020610: jal         0x8007DAE0
    // 0x80020614: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    alSndpSetPan(rdram, ctx);
        goto after_11;
    // 0x80020614: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_11:
    // 0x80020618: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
L_8002061C:
    // 0x8002061C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80020620: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80020624: sw          $t9, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r25;
L_80020628:
    // 0x80020628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002062C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80020630: jr          $ra
    // 0x80020634: nop

    return;
    // 0x80020634: nop

    // 0x80020638: jr          $ra
    // 0x8002063C: nop

    return;
    // 0x8002063C: nop

    // 0x80020640: jr          $ra
    // 0x80020644: nop

    return;
    // 0x80020644: nop

    // 0x80020648: jr          $ra
    // 0x8002064C: nop

    return;
    // 0x8002064C: nop

;}
RECOMP_FUNC void func_80020650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80020654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020658: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8002065C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80020660: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80020664: beq         $t7, $zero, L_800209D0
    if (ctx->r15 == 0) {
        // 0x80020668: nop
    
            goto L_800209D0;
    }
    // 0x80020668: nop

    // 0x8002066C: lbu         $t8, 0x21($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X21);
    // 0x80020670: nop

    // 0x80020674: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80020678: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x8002067C: beq         $at, $zero, L_800209D0
    if (ctx->r1 == 0) {
        // 0x80020680: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_800209D0;
    }
    // 0x80020680: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80020684: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80020688: addu        $at, $at, $t9
    gpr jr_addend_80020694 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8002068C: lw          $t9, 0x5390($at)
    ctx->r25 = ADD32(ctx->r1, 0X5390);
    // 0x80020690: nop

    // 0x80020694: jr          $t9
    // 0x80020698: nop

    switch (jr_addend_80020694 >> 2) {
        case 0: goto L_8002069C; break;
        case 1: goto L_8002071C; break;
        case 2: goto L_80020824; break;
        case 3: goto L_800208A0; break;
        case 4: goto L_80020920; break;
        default: switch_error(__func__, 0x80020694, 0x80095390);
    }
    // 0x80020698: nop

L_8002069C:
    // 0x8002069C: lh          $t6, 0x24($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X24);
    // 0x800206A0: lh          $v0, 0x26($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X26);
    // 0x800206A4: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x800206A8: sh          $t7, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r15;
    // 0x800206AC: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x800206B0: nop

    // 0x800206B4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800206B8: bne         $at, $zero, L_800206C8
    if (ctx->r1 != 0) {
        // 0x800206BC: nop
    
            goto L_800206C8;
    }
    // 0x800206BC: nop

    // 0x800206C0: b           L_800209D0
    // 0x800206C4: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
        goto L_800209D0;
    // 0x800206C4: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
L_800206C8:
    // 0x800206C8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x800206CC: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x800206D0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800206D4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800206D8: lwc1        $f4, 0x53A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X53A4);
    // 0x800206DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800206E0: nop

    // 0x800206E4: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800206E8: mul.s       $f12, $f0, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800206EC: jal         0x8007A640
    // 0x800206F0: nop

    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x800206F0: nop

    after_0:
    // 0x800206F4: lh          $t8, 0x28($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X28);
    // 0x800206F8: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x800206FC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80020700: nop

    // 0x80020704: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80020708: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8002070C: nop

    // 0x80020710: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80020714: b           L_800209D0
    // 0x80020718: nop

        goto L_800209D0;
    // 0x80020718: nop

L_8002071C:
    // 0x8002071C: lh          $v0, 0x26($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X26);
    // 0x80020720: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x80020724: bgez        $v0, L_80020734
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80020728: sra         $t9, $v0, 2
        ctx->r25 = S32(SIGNED(ctx->r2) >> 2);
            goto L_80020734;
    }
    // 0x80020728: sra         $t9, $v0, 2
    ctx->r25 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8002072C: addiu       $at, $v0, 0x3
    ctx->r1 = ADD32(ctx->r2, 0X3);
    // 0x80020730: sra         $t9, $at, 2
    ctx->r25 = S32(SIGNED(ctx->r1) >> 2);
L_80020734:
    // 0x80020734: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80020738: bne         $at, $zero, L_80020788
    if (ctx->r1 != 0) {
        // 0x8002073C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_80020788;
    }
    // 0x8002073C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80020740: lh          $t6, 0x2A($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2A);
    // 0x80020744: nop

    // 0x80020748: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8002074C: sh          $t7, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r15;
    // 0x80020750: lh          $t8, 0x2A($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2A);
    // 0x80020754: nop

    // 0x80020758: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x8002075C: bne         $at, $zero, L_80020768
    if (ctx->r1 != 0) {
        // 0x80020760: nop
    
            goto L_80020768;
    }
    // 0x80020760: nop

    // 0x80020764: sh          $zero, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = 0;
L_80020768:
    // 0x80020768: lh          $v0, 0x26($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X26);
    // 0x8002076C: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x80020770: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x80020774: bgez        $v0, L_80020784
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80020778: sra         $t9, $v0, 2
        ctx->r25 = S32(SIGNED(ctx->r2) >> 2);
            goto L_80020784;
    }
    // 0x80020778: sra         $t9, $v0, 2
    ctx->r25 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8002077C: addiu       $at, $v0, 0x3
    ctx->r1 = ADD32(ctx->r2, 0X3);
    // 0x80020780: sra         $t9, $at, 2
    ctx->r25 = S32(SIGNED(ctx->r1) >> 2);
L_80020784:
    // 0x80020784: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80020788:
    // 0x80020788: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x8002078C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80020790: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80020794: lh          $a0, 0x2A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2A);
    // 0x80020798: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002079C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800207A0: beq         $a0, $at, L_800207C4
    if (ctx->r4 == ctx->r1) {
        // 0x800207A4: div.s       $f0, $f6, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
            goto L_800207C4;
    }
    // 0x800207A4: div.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x800207A8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800207AC: beq         $a0, $at, L_800207E4
    if (ctx->r4 == ctx->r1) {
        // 0x800207B0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800207E4;
    }
    // 0x800207B0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800207B4: beq         $a0, $at, L_800207D8
    if (ctx->r4 == ctx->r1) {
        // 0x800207B8: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800207D8;
    }
    // 0x800207B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800207BC: b           L_800207FC
    // 0x800207C0: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
        goto L_800207FC;
    // 0x800207C0: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
L_800207C4:
    // 0x800207C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800207C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800207CC: b           L_800207F8
    // 0x800207D0: sub.s       $f0, $f8, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f0.fl;
        goto L_800207F8;
    // 0x800207D0: sub.s       $f0, $f8, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x800207D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_800207D8:
    // 0x800207D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800207DC: nop

    // 0x800207E0: sub.s       $f0, $f10, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f10.fl - ctx->f0.fl;
L_800207E4:
    // 0x800207E4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800207E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800207EC: nop

    // 0x800207F0: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800207F4: nop

L_800207F8:
    // 0x800207F8: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
L_800207FC:
    // 0x800207FC: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80020800: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80020804: addiu       $t7, $v1, 0x2
    ctx->r15 = ADD32(ctx->r3, 0X2);
    // 0x80020808: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002080C: sh          $t7, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r15;
    // 0x80020810: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80020814: nop

    // 0x80020818: mul.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8002081C: b           L_800209D0
    // 0x80020820: nop

        goto L_800209D0;
    // 0x80020820: nop

L_80020824:
    // 0x80020824: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x80020828: lh          $v0, 0x26($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X26);
    // 0x8002082C: nop

    // 0x80020830: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80020834: bne         $at, $zero, L_8002084C
    if (ctx->r1 != 0) {
        // 0x80020838: nop
    
            goto L_8002084C;
    }
    // 0x80020838: nop

    // 0x8002083C: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x80020840: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x80020844: lh          $v0, 0x26($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X26);
    // 0x80020848: nop

L_8002084C:
    // 0x8002084C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80020850: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80020854: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80020858: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002085C: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x80020860: mul.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80020864: lh          $t8, 0x28($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X28);
    // 0x80020868: addiu       $t9, $v1, 0x2
    ctx->r25 = ADD32(ctx->r3, 0X2);
    // 0x8002086C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80020870: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80020874: sh          $t9, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r25;
    // 0x80020878: sub.s       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x8002087C: nop

    // 0x80020880: div.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80020884: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80020888: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8002088C: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80020890: nop

    // 0x80020894: mul.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80020898: b           L_800209D0
    // 0x8002089C: nop

        goto L_800209D0;
    // 0x8002089C: nop

L_800208A0:
    // 0x800208A0: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x800208A4: lh          $t6, 0x26($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X26);
    // 0x800208A8: nop

    // 0x800208AC: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800208B0: bne         $at, $zero, L_800208CC
    if (ctx->r1 != 0) {
        // 0x800208B4: nop
    
            goto L_800208CC;
    }
    // 0x800208B4: nop

    // 0x800208B8: lh          $t7, 0x2A($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2A);
    // 0x800208BC: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x800208C0: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x800208C4: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x800208C8: sh          $t8, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r24;
L_800208CC:
    // 0x800208CC: lh          $t9, 0x2A($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X2A);
    // 0x800208D0: addiu       $t8, $v1, 0x2
    ctx->r24 = ADD32(ctx->r3, 0X2);
    // 0x800208D4: bne         $t9, $zero, L_800208FC
    if (ctx->r25 != 0) {
        // 0x800208D8: nop
    
            goto L_800208FC;
    }
    // 0x800208D8: nop

    // 0x800208DC: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    // 0x800208E0: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x800208E4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800208E8: nop

    // 0x800208EC: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800208F0: mul.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x800208F4: b           L_80020918
    // 0x800208F8: nop

        goto L_80020918;
    // 0x800208F8: nop

L_800208FC:
    // 0x800208FC: lh          $t7, 0x28($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X28);
    // 0x80020900: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80020904: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80020908: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x8002090C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80020910: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80020914: nop

L_80020918:
    // 0x80020918: b           L_800209D0
    // 0x8002091C: sh          $t8, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r24;
        goto L_800209D0;
    // 0x8002091C: sh          $t8, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r24;
L_80020920:
    // 0x80020920: lh          $t9, 0x26($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X26);
    // 0x80020924: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x80020928: bgez        $t9, L_80020938
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8002092C: sra         $t6, $t9, 1
        ctx->r14 = S32(SIGNED(ctx->r25) >> 1);
            goto L_80020938;
    }
    // 0x8002092C: sra         $t6, $t9, 1
    ctx->r14 = S32(SIGNED(ctx->r25) >> 1);
    // 0x80020930: addiu       $at, $t9, 0x1
    ctx->r1 = ADD32(ctx->r25, 0X1);
    // 0x80020934: sra         $t6, $at, 1
    ctx->r14 = S32(SIGNED(ctx->r1) >> 1);
L_80020938:
    // 0x80020938: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8002093C: beq         $at, $zero, L_80020960
    if (ctx->r1 == 0) {
        // 0x80020940: lui         $at, 0xC348
        ctx->r1 = S32(0XC348 << 16);
            goto L_80020960;
    }
    // 0x80020940: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x80020944: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80020948: lwc1        $f0, 0x2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8002094C: nop

    // 0x80020950: c.eq.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl == ctx->f0.fl;
    // 0x80020954: nop

    // 0x80020958: bc1f        L_800209A8
    if (!c1cs) {
        // 0x8002095C: nop
    
            goto L_800209A8;
    }
    // 0x8002095C: nop

L_80020960:
    // 0x80020960: jal         0x8007DC10
    // 0x80020964: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    guRandom(rdram, ctx);
        goto after_1;
    // 0x80020964: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    after_1:
    // 0x80020968: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x8002096C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x80020970: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x80020974: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80020978: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002097C: lh          $v1, 0x24($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X24);
    // 0x80020980: mfhi        $t7
    ctx->r15 = hi;
    // 0x80020984: subu        $t9, $t8, $t7
    ctx->r25 = SUB32(ctx->r24, ctx->r15);
    // 0x80020988: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002098C: nop

    // 0x80020990: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80020994: nop

    // 0x80020998: div.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8002099C: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x800209A0: lwc1        $f0, 0x2C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x800209A4: nop

L_800209A8:
    // 0x800209A8: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    // 0x800209AC: lwc1        $f8, 0x30($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X30);
    // 0x800209B0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800209B4: addiu       $t8, $v1, 0x2
    ctx->r24 = ADD32(ctx->r3, 0X2);
    // 0x800209B8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800209BC: sh          $t8, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r24;
    // 0x800209C0: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800209C4: nop

    // 0x800209C8: mul.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800209CC: nop

L_800209D0:
    // 0x800209D0: lh          $t7, 0x34($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X34);
    // 0x800209D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800209D8: bne         $t7, $at, L_80020A50
    if (ctx->r15 != ctx->r1) {
        // 0x800209DC: nop
    
            goto L_80020A50;
    }
    // 0x800209DC: nop

    // 0x800209E0: lh          $t9, 0x38($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X38);
    // 0x800209E4: lh          $v1, 0x3A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3A);
    // 0x800209E8: addiu       $t6, $t9, 0x1
    ctx->r14 = ADD32(ctx->r25, 0X1);
    // 0x800209EC: sh          $t6, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r14;
    // 0x800209F0: lh          $v0, 0x38($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X38);
    // 0x800209F4: nop

    // 0x800209F8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800209FC: bne         $at, $zero, L_80020A28
    if (ctx->r1 != 0) {
        // 0x80020A00: nop
    
            goto L_80020A28;
    }
    // 0x80020A00: nop

    // 0x80020A04: lh          $t8, 0xE($s0)
    ctx->r24 = MEM_H(ctx->r16, 0XE);
    // 0x80020A08: lh          $t7, 0x36($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X36);
    // 0x80020A0C: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
    // 0x80020A10: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80020A14: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
    // 0x80020A18: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80020A1C: lwc1        $f12, 0x53A8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X53A8);
    // 0x80020A20: b           L_80020A54
    // 0x80020A24: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
        goto L_80020A54;
    // 0x80020A24: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
L_80020A28:
    // 0x80020A28: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80020A2C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80020A30: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80020A34: lh          $t6, 0x36($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X36);
    // 0x80020A38: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80020A3C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80020A40: div.s       $f0, $f10, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80020A44: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80020A48: mul.s       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80020A4C: add.s       $f12, $f10, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f12.fl;
L_80020A50:
    // 0x80020A50: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
L_80020A54:
    // 0x80020A54: nop

    // 0x80020A58: andi        $t7, $t8, 0x20
    ctx->r15 = ctx->r24 & 0X20;
    // 0x80020A5C: beq         $t7, $zero, L_80020BBC
    if (ctx->r15 == 0) {
        // 0x80020A60: nop
    
            goto L_80020BBC;
    }
    // 0x80020A60: nop

    // 0x80020A64: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x80020A68: nop

    // 0x80020A6C: beq         $v0, $zero, L_80020A7C
    if (ctx->r2 == 0) {
        // 0x80020A70: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_80020A7C;
    }
    // 0x80020A70: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x80020A74: b           L_80020BBC
    // 0x80020A78: sh          $t9, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r25;
        goto L_80020BBC;
    // 0x80020A78: sh          $t9, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r25;
L_80020A7C:
    // 0x80020A7C: lh          $v1, 0x50($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X50);
    // 0x80020A80: nop

    // 0x80020A84: bne         $v1, $zero, L_80020B2C
    if (ctx->r3 != 0) {
        // 0x80020A88: addiu       $at, $zero, -0x80
        ctx->r1 = ADD32(0, -0X80);
            goto L_80020B2C;
    }
    // 0x80020A88: addiu       $at, $zero, -0x80
    ctx->r1 = ADD32(0, -0X80);
    // 0x80020A8C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80020A90: nop

    // 0x80020A94: lb          $t6, 0x0($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X0);
    // 0x80020A98: nop

    // 0x80020A9C: sh          $t6, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r14;
    // 0x80020AA0: lh          $t8, 0x50($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X50);
    // 0x80020AA4: nop

    // 0x80020AA8: bne         $t8, $zero, L_80020AC8
    if (ctx->r24 != 0) {
        // 0x80020AAC: nop
    
            goto L_80020AC8;
    }
    // 0x80020AAC: nop

    // 0x80020AB0: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x80020AB4: nop

    // 0x80020AB8: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x80020ABC: lb          $t7, 0x0($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X0);
    // 0x80020AC0: nop

    // 0x80020AC4: sh          $t7, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r15;
L_80020AC8:
    // 0x80020AC8: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x80020ACC: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x80020AD0: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x80020AD4: addu        $t7, $t9, $t8
    ctx->r15 = ADD32(ctx->r25, ctx->r24);
    // 0x80020AD8: sh          $t7, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r15;
    // 0x80020ADC: lh          $t6, 0x4C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4C);
    // 0x80020AE0: lwc1        $f4, 0x44($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80020AE4: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80020AE8: addiu       $t7, $v0, 0x3
    ctx->r15 = ADD32(ctx->r2, 0X3);
    // 0x80020AEC: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80020AF0: lh          $v1, 0x50($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X50);
    // 0x80020AF4: sw          $t7, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r15;
    // 0x80020AF8: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80020AFC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80020B00: nop

    // 0x80020B04: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80020B08: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80020B0C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80020B10: nop

    // 0x80020B14: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80020B18: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80020B1C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80020B20: sh          $t8, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r24;
    // 0x80020B24: nop

    // 0x80020B28: addiu       $at, $zero, -0x80
    ctx->r1 = ADD32(0, -0X80);
L_80020B2C:
    // 0x80020B2C: bne         $v1, $at, L_80020B58
    if (ctx->r3 != ctx->r1) {
        // 0x80020B30: nop
    
            goto L_80020B58;
    }
    // 0x80020B30: nop

    // 0x80020B34: lh          $t6, 0x4A($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4A);
    // 0x80020B38: lh          $t9, 0x4E($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X4E);
    // 0x80020B3C: nop

    // 0x80020B40: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x80020B44: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80020B48: nop

    // 0x80020B4C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80020B50: b           L_80020BBC
    // 0x80020B54: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
        goto L_80020BBC;
    // 0x80020B54: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_80020B58:
    // 0x80020B58: blez        $v1, L_80020B88
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80020B5C: addiu       $t8, $v1, 0x1
        ctx->r24 = ADD32(ctx->r3, 0X1);
            goto L_80020B88;
    }
    // 0x80020B5C: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80020B60: lh          $v0, 0x4C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4C);
    // 0x80020B64: lh          $t6, 0x4A($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4A);
    // 0x80020B68: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x80020B6C: addu        $t9, $t6, $v0
    ctx->r25 = ADD32(ctx->r14, ctx->r2);
    // 0x80020B70: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80020B74: sh          $t7, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r15;
    // 0x80020B78: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80020B7C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80020B80: b           L_80020BBC
    // 0x80020B84: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
        goto L_80020BBC;
    // 0x80020B84: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
L_80020B88:
    // 0x80020B88: lh          $t7, 0x4E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4E);
    // 0x80020B8C: lh          $t6, 0x4C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4C);
    // 0x80020B90: sh          $t8, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r24;
    // 0x80020B94: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x80020B98: sh          $t9, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r25;
    // 0x80020B9C: lh          $t7, 0x4E($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4E);
    // 0x80020BA0: lh          $t8, 0x4A($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4A);
    // 0x80020BA4: nop

    // 0x80020BA8: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x80020BAC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80020BB0: nop

    // 0x80020BB4: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80020BB8: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
L_80020BBC:
    // 0x80020BBC: lh          $t9, 0xE($s0)
    ctx->r25 = MEM_H(ctx->r16, 0XE);
    // 0x80020BC0: lui         $at, 0x4496
    ctx->r1 = S32(0X4496 << 16);
    // 0x80020BC4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80020BC8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80020BCC: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80020BD0: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x80020BD4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80020BD8: nop

    // 0x80020BDC: bc1f        L_80020BE8
    if (!c1cs) {
        // 0x80020BE0: nop
    
            goto L_80020BE8;
    }
    // 0x80020BE0: nop

    // 0x80020BE4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_80020BE8:
    // 0x80020BE8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80020BEC: lh          $t9, 0x14($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X14);
    // 0x80020BF0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80020BF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80020BF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80020BFC: nop

    // 0x80020C00: cvt.w.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = CVT_W_S(ctx->f12.fl);
    // 0x80020C04: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80020C08: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80020C0C: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x80020C10: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80020C14: beq         $t6, $t9, L_80020C30
    if (ctx->r14 == ctx->r25) {
        // 0x80020C18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80020C30;
    }
    // 0x80020C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020C1C: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x80020C20: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80020C24: ori         $t7, $t8, 0x1
    ctx->r15 = ctx->r24 | 0X1;
    // 0x80020C28: sw          $t7, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r15;
    // 0x80020C2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80020C30:
    // 0x80020C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80020C34: jr          $ra
    // 0x80020C38: nop

    return;
    // 0x80020C38: nop

;}
RECOMP_FUNC void func_80020C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020C3C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80020C40: lwc1        $f0, 0x53AC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X53AC);
    // 0x80020C44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80020C48: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80020C4C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80020C50: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80020C54: beq         $t6, $zero, L_80020C84
    if (ctx->r14 == 0) {
        // 0x80020C58: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_80020C84;
    }
    // 0x80020C58: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
L_80020C5C:
    // 0x80020C5C: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    // 0x80020C60: beq         $t7, $zero, L_80020C70
    if (ctx->r15 == 0) {
        // 0x80020C64: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80020C70;
    }
    // 0x80020C64: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80020C68: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80020C6C: nop

L_80020C70:
    // 0x80020C70: srl         $a0, $v0, 1
    ctx->r4 = S32(U32(ctx->r2) >> 1);
    // 0x80020C74: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80020C78: andi        $t8, $a0, 0xFF
    ctx->r24 = ctx->r4 & 0XFF;
    // 0x80020C7C: bne         $t8, $zero, L_80020C5C
    if (ctx->r24 != 0) {
        // 0x80020C80: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_80020C5C;
    }
    // 0x80020C80: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
L_80020C84:
    // 0x80020C84: jr          $ra
    // 0x80020C88: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x80020C88: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void func_80020C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020C8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80020C90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80020C94: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80020C98: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80020C9C: sll         $t6, $s1, 24
    ctx->r14 = S32(ctx->r17 << 24);
    // 0x80020CA0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80020CA4: sra         $s1, $t6, 24
    ctx->r17 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80020CA8: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80020CAC: lw          $t6, -0x48F8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48F8);
    // 0x80020CB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020CB4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80020CB8: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x80020CBC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80020CC0: sll         $t8, $s0, 24
    ctx->r24 = S32(ctx->r16 << 24);
    // 0x80020CC4: sra         $s0, $t8, 24
    ctx->r16 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80020CC8: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x80020CCC: slt         $at, $a0, $t7
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80020CD0: beq         $at, $zero, L_80020CE0
    if (ctx->r1 == 0) {
        // 0x80020CD4: sra         $s2, $t8, 16
        ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
            goto L_80020CE0;
    }
    // 0x80020CD4: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80020CD8: bgez        $a0, L_80020CE8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80020CDC: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_80020CE8;
    }
    // 0x80020CDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80020CE0:
    // 0x80020CE0: b           L_80020D58
    // 0x80020CE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80020D58;
    // 0x80020CE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80020CE8:
    // 0x80020CE8: addiu       $s3, $sp, 0x1C
    ctx->r19 = ADD32(ctx->r29, 0X1C);
    // 0x80020CEC: jal         0x8001F51C
    // 0x80020CF0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8001F51C(rdram, ctx);
        goto after_0;
    // 0x80020CF0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x80020CF4: bltz        $s0, L_80020D10
    if (SIGNED(ctx->r16) < 0) {
        // 0x80020CF8: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80020D10;
    }
    // 0x80020CF8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80020CFC: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80020D00: andi        $t6, $s0, 0xF
    ctx->r14 = ctx->r16 & 0XF;
    // 0x80020D04: andi        $t9, $t8, 0xF0
    ctx->r25 = ctx->r24 & 0XF0;
    // 0x80020D08: or          $t7, $t9, $t6
    ctx->r15 = ctx->r25 | ctx->r14;
    // 0x80020D0C: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
L_80020D10:
    // 0x80020D10: bltz        $s1, L_80020D2C
    if (SIGNED(ctx->r17) < 0) {
        // 0x80020D14: sll         $a2, $s2, 16
        ctx->r6 = S32(ctx->r18 << 16);
            goto L_80020D2C;
    }
    // 0x80020D14: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x80020D18: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80020D1C: sll         $t7, $s1, 4
    ctx->r15 = S32(ctx->r17 << 4);
    // 0x80020D20: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x80020D24: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80020D28: sb          $t8, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r24;
L_80020D2C:
    // 0x80020D2C: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80020D30: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80020D34: jal         0x8001F2CC
    // 0x80020D38: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    func_8001F2CC(rdram, ctx);
        goto after_1;
    // 0x80020D38: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    after_1:
    // 0x80020D3C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80020D40: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80020D44: bgez        $v0, L_80020D54
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80020D48: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_80020D54;
    }
    // 0x80020D48: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80020D4C: b           L_80020D58
    // 0x80020D50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80020D58;
    // 0x80020D50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80020D54:
    // 0x80020D54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80020D58:
    // 0x80020D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020D5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80020D60: jr          $ra
    // 0x80020D64: nop

    return;
    // 0x80020D64: nop

;}
RECOMP_FUNC void func_80020D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80020D68: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80020D6C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80020D70: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x80020D74: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80020D78: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x80020D7C: subu        $t8, $t8, $a3
    ctx->r24 = SUB32(ctx->r24, ctx->r7);
    // 0x80020D80: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80020D84: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80020D88: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x80020D8C: lw          $t9, -0x48F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48F4);
    // 0x80020D90: subu        $t8, $t8, $a3
    ctx->r24 = SUB32(ctx->r24, ctx->r7);
    // 0x80020D94: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x80020D98: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80020D9C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80020DA0: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80020DA4: lw          $t7, -0x48C8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48C8);
    // 0x80020DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80020DAC: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x80020DB0: addu        $s7, $t8, $t9
    ctx->r23 = ADD32(ctx->r24, ctx->r25);
    // 0x80020DB4: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x80020DB8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80020DBC: lbu         $t8, 0x1($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X1);
    // 0x80020DC0: addu        $s5, $t6, $t7
    ctx->r21 = ADD32(ctx->r14, ctx->r15);
    // 0x80020DC4: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x80020DC8: lb          $s3, 0x2($s4)
    ctx->r19 = MEM_B(ctx->r20, 0X2);
    // 0x80020DCC: addu        $fp, $t8, $t6
    ctx->r30 = ADD32(ctx->r24, ctx->r14);
    // 0x80020DD0: sll         $t7, $fp, 16
    ctx->r15 = S32(ctx->r30 << 16);
    // 0x80020DD4: andi        $t8, $s3, 0x60
    ctx->r24 = ctx->r19 & 0X60;
    // 0x80020DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80020DDC: sra         $fp, $t7, 16
    ctx->r30 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80020DE0: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
    // 0x80020DE4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80020DE8: beq         $t8, $zero, L_80020DF8
    if (ctx->r24 == 0) {
        // 0x80020DEC: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_80020DF8;
    }
    // 0x80020DEC: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x80020DF0: lbu         $a1, 0x0($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0X0);
    // 0x80020DF4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80020DF8:
    // 0x80020DF8: andi        $t6, $s3, 0x40
    ctx->r14 = ctx->r19 & 0X40;
    // 0x80020DFC: beq         $t6, $zero, L_80020E14
    if (ctx->r14 == 0) {
        // 0x80020E00: sll         $a0, $fp, 16
        ctx->r4 = S32(ctx->r30 << 16);
            goto L_80020E14;
    }
    // 0x80020E00: sll         $a0, $fp, 16
    ctx->r4 = S32(ctx->r30 << 16);
    // 0x80020E04: andi        $s0, $a1, 0xF0
    ctx->r16 = ctx->r5 & 0XF0;
    // 0x80020E08: sra         $t7, $s0, 4
    ctx->r15 = S32(SIGNED(ctx->r16) >> 4);
    // 0x80020E0C: sll         $t9, $t7, 24
    ctx->r25 = S32(ctx->r15 << 24);
    // 0x80020E10: sra         $s0, $t9, 24
    ctx->r16 = S32(SIGNED(ctx->r25) >> 24);
L_80020E14:
    // 0x80020E14: andi        $t6, $s3, 0x20
    ctx->r14 = ctx->r19 & 0X20;
    // 0x80020E18: beq         $t6, $zero, L_80020E34
    if (ctx->r14 == 0) {
        // 0x80020E1C: nop
    
            goto L_80020E34;
    }
    // 0x80020E1C: nop

    // 0x80020E20: andi        $v1, $a1, 0xF
    ctx->r3 = ctx->r5 & 0XF;
    // 0x80020E24: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80020E28: sll         $t7, $v1, 24
    ctx->r15 = S32(ctx->r3 << 24);
    // 0x80020E2C: b           L_80020E84
    // 0x80020E30: sra         $v1, $t7, 24
    ctx->r3 = S32(SIGNED(ctx->r15) >> 24);
        goto L_80020E84;
    // 0x80020E30: sra         $v1, $t7, 24
    ctx->r3 = S32(SIGNED(ctx->r15) >> 24);
L_80020E34:
    // 0x80020E34: lb          $t8, 0x17($s5)
    ctx->r24 = MEM_B(ctx->r21, 0X17);
    // 0x80020E38: nop

    // 0x80020E3C: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x80020E40: beq         $at, $zero, L_80020E84
    if (ctx->r1 == 0) {
        // 0x80020E44: nop
    
            goto L_80020E84;
    }
    // 0x80020E44: nop

    // 0x80020E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80020E4C: addu        $t6, $s5, $a1
    ctx->r14 = ADD32(ctx->r21, ctx->r5);
L_80020E50:
    // 0x80020E50: lb          $t7, 0x14($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X14);
    // 0x80020E54: nop

    // 0x80020E58: bltz        $t7, L_80020E7C
    if (SIGNED(ctx->r15) < 0) {
        // 0x80020E5C: sll         $v1, $a1, 24
        ctx->r3 = S32(ctx->r5 << 24);
            goto L_80020E7C;
    }
    // 0x80020E5C: sll         $v1, $a1, 24
    ctx->r3 = S32(ctx->r5 << 24);
    // 0x80020E60: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80020E64: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x80020E68: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80020E6C: slti        $at, $a1, 0x3
    ctx->r1 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x80020E70: bne         $at, $zero, L_80020E50
    if (ctx->r1 != 0) {
        // 0x80020E74: addu        $t6, $s5, $a1
        ctx->r14 = ADD32(ctx->r21, ctx->r5);
            goto L_80020E50;
    }
    // 0x80020E74: addu        $t6, $s5, $a1
    ctx->r14 = ADD32(ctx->r21, ctx->r5);
    // 0x80020E78: sll         $v1, $a1, 24
    ctx->r3 = S32(ctx->r5 << 24);
L_80020E7C:
    // 0x80020E7C: sra         $t6, $v1, 24
    ctx->r14 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80020E80: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_80020E84:
    // 0x80020E84: bltz        $v1, L_80020EE8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80020E88: sra         $t7, $a0, 16
        ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80020EE8;
    }
    // 0x80020E88: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80020E8C: lb          $s2, 0x26($s7)
    ctx->r18 = MEM_B(ctx->r23, 0X26);
    // 0x80020E90: lb          $s1, 0x24($s7)
    ctx->r17 = MEM_B(ctx->r23, 0X24);
    // 0x80020E94: sh          $fp, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r30;
    // 0x80020E98: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80020E9C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80020EA0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80020EA4: sb          $s3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r19;
    // 0x80020EA8: sb          $s0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r16;
    // 0x80020EAC: sh          $a3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r7;
    // 0x80020EB0: sb          $v1, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r3;
    // 0x80020EB4: jal         0x80020C8C
    // 0x80020EB8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80020C8C(rdram, ctx);
        goto after_0;
    // 0x80020EB8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80020EBC: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80020EC0: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80020EC4: lb          $v1, 0x1D($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X1D);
    // 0x80020EC8: lh          $a3, 0x36($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X36);
    // 0x80020ECC: lb          $s0, 0x1E($sp)
    ctx->r16 = MEM_B(ctx->r29, 0X1E);
    // 0x80020ED0: lb          $s3, 0x1F($sp)
    ctx->r19 = MEM_B(ctx->r29, 0X1F);
    // 0x80020ED4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80020ED8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80020EDC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80020EE0: lh          $fp, 0x20($sp)
    ctx->r30 = MEM_H(ctx->r29, 0X20);
    // 0x80020EE4: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_80020EE8:
    // 0x80020EE8: bltz        $a1, L_80020F10
    if (SIGNED(ctx->r5) < 0) {
        // 0x80020EEC: andi        $t6, $s3, 0x1
        ctx->r14 = ctx->r19 & 0X1;
            goto L_80020F10;
    }
    // 0x80020EEC: andi        $t6, $s3, 0x1
    ctx->r14 = ctx->r19 & 0X1;
    // 0x80020EF0: beq         $a1, $a3, L_80020F10
    if (ctx->r5 == ctx->r7) {
        // 0x80020EF4: nop
    
            goto L_80020F10;
    }
    // 0x80020EF4: nop

    // 0x80020EF8: lh          $t8, 0xA($s5)
    ctx->r24 = MEM_H(ctx->r21, 0XA);
    // 0x80020EFC: nop

    // 0x80020F00: bgez        $t8, L_80020F10
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80020F04: nop
    
            goto L_80020F10;
    }
    // 0x80020F04: nop

    // 0x80020F08: bgez        $v1, L_80020F54
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80020F0C: nop
    
            goto L_80020F54;
    }
    // 0x80020F0C: nop

L_80020F10:
    // 0x80020F10: beq         $t6, $zero, L_80020F1C
    if (ctx->r14 == 0) {
        // 0x80020F14: andi        $t7, $s3, 0x7
        ctx->r15 = ctx->r19 & 0X7;
            goto L_80020F1C;
    }
    // 0x80020F14: andi        $t7, $s3, 0x7
    ctx->r15 = ctx->r19 & 0X7;
    // 0x80020F18: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
L_80020F1C:
    // 0x80020F1C: sra         $t9, $t7, 1
    ctx->r25 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80020F20: sll         $t8, $t9, 24
    ctx->r24 = S32(ctx->r25 << 24);
    // 0x80020F24: sra         $s3, $t8, 24
    ctx->r19 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80020F28: beq         $s3, $zero, L_80020F4C
    if (ctx->r19 == 0) {
        // 0x80020F2C: andi        $t7, $s3, 0x1
        ctx->r15 = ctx->r19 & 0X1;
            goto L_80020F4C;
    }
    // 0x80020F2C: andi        $t7, $s3, 0x1
    ctx->r15 = ctx->r19 & 0X1;
L_80020F30:
    // 0x80020F30: beq         $t7, $zero, L_80020F3C
    if (ctx->r15 == 0) {
        // 0x80020F34: sra         $t9, $s3, 1
        ctx->r25 = S32(SIGNED(ctx->r19) >> 1);
            goto L_80020F3C;
    }
    // 0x80020F34: sra         $t9, $s3, 1
    ctx->r25 = S32(SIGNED(ctx->r19) >> 1);
    // 0x80020F38: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80020F3C:
    // 0x80020F3C: sll         $t8, $t9, 24
    ctx->r24 = S32(ctx->r25 << 24);
    // 0x80020F40: sra         $s3, $t8, 24
    ctx->r19 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80020F44: bne         $s3, $zero, L_80020F30
    if (ctx->r19 != 0) {
        // 0x80020F48: andi        $t7, $s3, 0x1
        ctx->r15 = ctx->r19 & 0X1;
            goto L_80020F30;
    }
    // 0x80020F48: andi        $t7, $s3, 0x1
    ctx->r15 = ctx->r19 & 0X1;
L_80020F4C:
    // 0x80020F4C: b           L_800211A8
    // 0x80020F50: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
        goto L_800211A8;
    // 0x80020F50: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_80020F54:
    // 0x80020F54: addu        $s6, $s5, $v1
    ctx->r22 = ADD32(ctx->r21, ctx->r3);
    // 0x80020F58: lb          $a1, 0x14($s6)
    ctx->r5 = MEM_B(ctx->r22, 0X14);
    // 0x80020F5C: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80020F60: bltz        $a1, L_80020FA4
    if (SIGNED(ctx->r5) < 0) {
        // 0x80020F64: sll         $t9, $a1, 2
        ctx->r25 = S32(ctx->r5 << 2);
            goto L_80020FA4;
    }
    // 0x80020F64: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x80020F68: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x80020F6C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80020F70: lw          $t7, -0x48C8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48C8);
    // 0x80020F74: subu        $t9, $t9, $a1
    ctx->r25 = SUB32(ctx->r25, ctx->r5);
    // 0x80020F78: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80020F7C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80020F80: lh          $t6, 0xA($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XA);
    // 0x80020F84: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x80020F88: bne         $a3, $t6, L_80020FA4
    if (ctx->r7 != ctx->r14) {
        // 0x80020F8C: sra         $t7, $a0, 16
        ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80020FA4;
    }
    // 0x80020F8C: sra         $t7, $a0, 16
    ctx->r15 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80020F90: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80020F94: jal         0x8001E774
    // 0x80020F98: sh          $a3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r7;
    func_8001E774(rdram, ctx);
        goto after_1;
    // 0x80020F98: sh          $a3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r7;
    after_1:
    // 0x80020F9C: lh          $a3, 0x36($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X36);
    // 0x80020FA0: nop

L_80020FA4:
    // 0x80020FA4: lb          $t8, 0x26($s7)
    ctx->r24 = MEM_B(ctx->r23, 0X26);
    // 0x80020FA8: sll         $s2, $fp, 16
    ctx->r18 = S32(ctx->r30 << 16);
    // 0x80020FAC: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80020FB0: lb          $s1, 0x24($s7)
    ctx->r17 = MEM_B(ctx->r23, 0X24);
    // 0x80020FB4: sra         $t9, $s2, 16
    ctx->r25 = S32(SIGNED(ctx->r18) >> 16);
    // 0x80020FB8: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x80020FBC: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80020FC0: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x80020FC4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80020FC8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80020FCC: sb          $s3, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r19;
    // 0x80020FD0: jal         0x8001F91C
    // 0x80020FD4: sh          $a3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r7;
    func_8001F91C(rdram, ctx);
        goto after_2;
    // 0x80020FD4: sh          $a3, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r7;
    after_2:
    // 0x80020FD8: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x80020FDC: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80020FE0: lb          $t7, 0x14($s6)
    ctx->r15 = MEM_B(ctx->r22, 0X14);
    // 0x80020FE4: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80020FE8: lh          $a3, 0x36($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X36);
    // 0x80020FEC: lb          $s3, 0x1F($sp)
    ctx->r19 = MEM_B(ctx->r29, 0X1F);
    // 0x80020FF0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80020FF4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80020FF8: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80020FFC: bgez        $t7, L_80021014
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80021000: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_80021014;
    }
    // 0x80021000: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80021004: lb          $t9, 0x17($s5)
    ctx->r25 = MEM_B(ctx->r21, 0X17);
    // 0x80021008: nop

    // 0x8002100C: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x80021010: sb          $t8, 0x17($s5)
    MEM_B(0X17, ctx->r21) = ctx->r24;
L_80021014:
    // 0x80021014: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80021018: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8002101C: sb          $v0, 0x14($s6)
    MEM_B(0X14, ctx->r22) = ctx->r2;
    // 0x80021020: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021024: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80021028: lw          $t7, -0x48F4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48F4);
    // 0x8002102C: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80021030: lb          $t9, 0x1F($s7)
    ctx->r25 = MEM_B(ctx->r23, 0X1F);
    // 0x80021034: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021038: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x8002103C: sb          $t9, 0x1F($a2)
    MEM_B(0X1F, ctx->r6) = ctx->r25;
    // 0x80021040: lbu         $t8, 0x23($s7)
    ctx->r24 = MEM_BU(ctx->r23, 0X23);
    // 0x80021044: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80021048: sb          $t8, 0x23($a2)
    MEM_B(0X23, ctx->r6) = ctx->r24;
    // 0x8002104C: lb          $t6, 0x1E($s7)
    ctx->r14 = MEM_B(ctx->r23, 0X1E);
    // 0x80021050: lb          $t8, 0x25($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X25);
    // 0x80021054: sb          $t6, 0x1E($a2)
    MEM_B(0X1E, ctx->r6) = ctx->r14;
    // 0x80021058: lbu         $t7, 0x22($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X22);
    // 0x8002105C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80021060: sb          $t7, 0x22($a2)
    MEM_B(0X22, ctx->r6) = ctx->r15;
    // 0x80021064: lh          $t9, 0x16($s7)
    ctx->r25 = MEM_H(ctx->r23, 0X16);
    // 0x80021068: bne         $t8, $at, L_800210FC
    if (ctx->r24 != ctx->r1) {
        // 0x8002106C: sh          $t9, 0x16($a2)
        MEM_H(0X16, ctx->r6) = ctx->r25;
            goto L_800210FC;
    }
    // 0x8002106C: sh          $t9, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r25;
    // 0x80021070: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80021074: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021078: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8002107C: lw          $t7, -0x48C8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48C8);
    // 0x80021080: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80021084: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80021088: andi        $t9, $s3, 0x4
    ctx->r25 = ctx->r19 & 0X4;
    // 0x8002108C: beq         $t9, $zero, L_800210A4
    if (ctx->r25 == 0) {
        // 0x80021090: addu        $s5, $t6, $t7
        ctx->r21 = ADD32(ctx->r14, ctx->r15);
            goto L_800210A4;
    }
    // 0x80021090: addu        $s5, $t6, $t7
    ctx->r21 = ADD32(ctx->r14, ctx->r15);
    // 0x80021094: lbu         $t8, 0x0($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X0);
    // 0x80021098: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8002109C: b           L_800210AC
    // 0x800210A0: sh          $t8, 0x10($s5)
    MEM_H(0X10, ctx->r21) = ctx->r24;
        goto L_800210AC;
    // 0x800210A0: sh          $t8, 0x10($s5)
    MEM_H(0X10, ctx->r21) = ctx->r24;
L_800210A4:
    // 0x800210A4: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x800210A8: sh          $t6, 0x10($s5)
    MEM_H(0X10, ctx->r21) = ctx->r14;
L_800210AC:
    // 0x800210AC: andi        $t7, $s3, 0x2
    ctx->r15 = ctx->r19 & 0X2;
    // 0x800210B0: beq         $t7, $zero, L_800210C8
    if (ctx->r15 == 0) {
        // 0x800210B4: andi        $t6, $s3, 0x1
        ctx->r14 = ctx->r19 & 0X1;
            goto L_800210C8;
    }
    // 0x800210B4: andi        $t6, $s3, 0x1
    ctx->r14 = ctx->r19 & 0X1;
    // 0x800210B8: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x800210BC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800210C0: b           L_800210D0
    // 0x800210C4: sh          $t9, 0x12($s5)
    MEM_H(0X12, ctx->r21) = ctx->r25;
        goto L_800210D0;
    // 0x800210C4: sh          $t9, 0x12($s5)
    MEM_H(0X12, ctx->r21) = ctx->r25;
L_800210C8:
    // 0x800210C8: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x800210CC: sh          $t8, 0x12($s5)
    MEM_H(0X12, ctx->r21) = ctx->r24;
L_800210D0:
    // 0x800210D0: beq         $t6, $zero, L_800210F4
    if (ctx->r14 == 0) {
        // 0x800210D4: nop
    
            goto L_800210F4;
    }
    // 0x800210D4: nop

    // 0x800210D8: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x800210DC: lbu         $t7, 0x1($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X1);
    // 0x800210E0: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x800210E4: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x800210E8: sh          $t6, 0xE($s5)
    MEM_H(0XE, ctx->r21) = ctx->r14;
    // 0x800210EC: b           L_80021178
    // 0x800210F0: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
        goto L_80021178;
    // 0x800210F0: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
L_800210F4:
    // 0x800210F4: b           L_80021178
    // 0x800210F8: sh          $zero, 0xE($s5)
    MEM_H(0XE, ctx->r21) = 0;
        goto L_80021178;
    // 0x800210F8: sh          $zero, 0xE($s5)
    MEM_H(0XE, ctx->r21) = 0;
L_800210FC:
    // 0x800210FC: andi        $t9, $s3, 0x4
    ctx->r25 = ctx->r19 & 0X4;
    // 0x80021100: beq         $t9, $zero, L_80021128
    if (ctx->r25 == 0) {
        // 0x80021104: andi        $t6, $s3, 0x2
        ctx->r14 = ctx->r19 & 0X2;
            goto L_80021128;
    }
    // 0x80021104: andi        $t6, $s3, 0x2
    ctx->r14 = ctx->r19 & 0X2;
    // 0x80021108: lb          $a0, 0x0($s4)
    ctx->r4 = MEM_B(ctx->r20, 0X0);
    // 0x8002110C: jal         0x8001D8D8
    // 0x80021110: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    func_8001D8D8(rdram, ctx);
        goto after_3;
    // 0x80021110: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    after_3:
    // 0x80021114: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x80021118: sh          $v0, 0x1C($a2)
    MEM_H(0X1C, ctx->r6) = ctx->r2;
    // 0x8002111C: ori         $t8, $t7, 0x2
    ctx->r24 = ctx->r15 | 0X2;
    // 0x80021120: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80021124: andi        $t6, $s3, 0x2
    ctx->r14 = ctx->r19 & 0X2;
L_80021128:
    // 0x80021128: beq         $t6, $zero, L_8002114C
    if (ctx->r14 == 0) {
        // 0x8002112C: andi        $t6, $s3, 0x1
        ctx->r14 = ctx->r19 & 0X1;
            goto L_8002114C;
    }
    // 0x8002112C: andi        $t6, $s3, 0x1
    ctx->r14 = ctx->r19 & 0X1;
    // 0x80021130: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x80021134: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x80021138: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x8002113C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80021140: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80021144: sb          $t9, 0x21($a2)
    MEM_B(0X21, ctx->r6) = ctx->r25;
    // 0x80021148: andi        $t6, $s3, 0x1
    ctx->r14 = ctx->r19 & 0X1;
L_8002114C:
    // 0x8002114C: beq         $t6, $zero, L_8002117C
    if (ctx->r14 == 0) {
        // 0x80021150: sll         $t7, $a1, 2
        ctx->r15 = S32(ctx->r5 << 2);
            goto L_8002117C;
    }
    // 0x80021150: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80021154: lbu         $t7, 0x0($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X0);
    // 0x80021158: lbu         $t9, 0x1($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X1);
    // 0x8002115C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x80021160: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x80021164: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x80021168: ori         $t9, $t7, 0x1
    ctx->r25 = ctx->r15 | 0X1;
    // 0x8002116C: sh          $t6, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r14;
    // 0x80021170: sw          $t9, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r25;
    // 0x80021174: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
L_80021178:
    // 0x80021178: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
L_8002117C:
    // 0x8002117C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80021180: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80021184: sb          $t8, 0x25($a2)
    MEM_B(0X25, ctx->r6) = ctx->r24;
    // 0x80021188: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002118C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80021190: lw          $t6, -0x48C8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48C8);
    // 0x80021194: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80021198: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8002119C: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x800211A0: sh          $a3, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r7;
    // 0x800211A4: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_800211A8:
    // 0x800211A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800211AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800211B0: jr          $ra
    // 0x800211B4: nop

    return;
    // 0x800211B4: nop

    // 0x800211B8: jr          $ra
    // 0x800211BC: nop

    return;
    // 0x800211BC: nop

;}
RECOMP_FUNC void func_800211C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800211C0: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800211C4: lw          $t6, -0x48CC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48CC);
    // 0x800211C8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x800211CC: beq         $t6, $zero, L_80021B74
    if (ctx->r14 == 0) {
        // 0x800211D0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80021B74;
    }
    // 0x800211D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800211D4: lh          $t7, 0x92($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X92);
    // 0x800211D8: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800211DC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800211E0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800211E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800211E8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800211EC: lw          $t9, -0x48C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48C8);
    // 0x800211F0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800211F4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800211F8: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x800211FC: lh          $t6, 0x8($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X8);
    // 0x80021200: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80021204: bltz        $t6, L_80021B78
    if (SIGNED(ctx->r14) < 0) {
        // 0x80021208: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80021B78;
    }
    // 0x80021208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002120C: lb          $v0, -0x48CD($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X48CD);
    // 0x80021210: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80021214: beq         $v0, $zero, L_80021238
    if (ctx->r2 == 0) {
        // 0x80021218: addiu       $t0, $t0, -0x48F4
        ctx->r8 = ADD32(ctx->r8, -0X48F4);
            goto L_80021238;
    }
    // 0x80021218: addiu       $t0, $t0, -0x48F4
    ctx->r8 = ADD32(ctx->r8, -0X48F4);
    // 0x8002121C: lb          $v1, 0x57($s3)
    ctx->r3 = MEM_B(ctx->r19, 0X57);
    // 0x80021220: nop

    // 0x80021224: beq         $v1, $zero, L_80021234
    if (ctx->r3 == 0) {
        // 0x80021228: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_80021234;
    }
    // 0x80021228: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8002122C: b           L_80021B74
    // 0x80021230: sb          $t7, 0x57($s3)
    MEM_B(0X57, ctx->r19) = ctx->r15;
        goto L_80021B74;
    // 0x80021230: sb          $t7, 0x57($s3)
    MEM_B(0X57, ctx->r19) = ctx->r15;
L_80021234:
    // 0x80021234: sb          $v0, 0x57($s3)
    MEM_B(0X57, ctx->r19) = ctx->r2;
L_80021238:
    // 0x80021238: lh          $t8, 0x92($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X92);
    // 0x8002123C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80021240: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80021244: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80021248: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8002124C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80021250: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80021254: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80021258: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
    // 0x8002125C: lw          $s4, 0x0($s3)
    ctx->r20 = MEM_W(ctx->r19, 0X0);
    // 0x80021260: bne         $v0, $zero, L_80021920
    if (ctx->r2 != 0) {
        // 0x80021264: addu        $s6, $t9, $t6
        ctx->r22 = ADD32(ctx->r25, ctx->r14);
            goto L_80021920;
    }
    // 0x80021264: addu        $s6, $t9, $t6
    ctx->r22 = ADD32(ctx->r25, ctx->r14);
    // 0x80021268: lui         $at, 0xC348
    ctx->r1 = S32(0XC348 << 16);
    // 0x8002126C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80021270: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80021274: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80021278: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8002127C:
    // 0x8002127C: lbu         $t8, 0x1($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X1);
    // 0x80021280: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80021284: lbu         $t7, 0x2($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X2);
    // 0x80021288: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8002128C: addiu       $t8, $v0, -0x80
    ctx->r24 = ADD32(ctx->r2, -0X80);
    // 0x80021290: sltiu       $at, $t8, 0x29
    ctx->r1 = ctx->r24 < 0X29 ? 1 : 0;
    // 0x80021294: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80021298: sh          $t6, 0xC($s3)
    MEM_H(0XC, ctx->r19) = ctx->r14;
    // 0x8002129C: beq         $at, $zero, L_800218F8
    if (ctx->r1 == 0) {
        // 0x800212A0: addiu       $s4, $s4, 0x3
        ctx->r20 = ADD32(ctx->r20, 0X3);
            goto L_800218F8;
    }
    // 0x800212A0: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
    // 0x800212A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800212A8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800212AC: addu        $at, $at, $t8
    gpr jr_addend_800212B8 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800212B0: lw          $t8, 0x53B0($at)
    ctx->r24 = ADD32(ctx->r1, 0X53B0);
    // 0x800212B4: nop

    // 0x800212B8: jr          $t8
    // 0x800212BC: nop

    switch (jr_addend_800212B8 >> 2) {
        case 0: goto L_800212C0; break;
        case 1: goto L_800212D0; break;
        case 2: goto L_80021910; break;
        case 3: goto L_800212EC; break;
        case 4: goto L_800214D4; break;
        case 5: goto L_800215BC; break;
        case 6: goto L_800215E0; break;
        case 7: goto L_800218F8; break;
        case 8: goto L_8002160C; break;
        case 9: goto L_80021630; break;
        case 10: goto L_800218F8; break;
        case 11: goto L_800218F8; break;
        case 12: goto L_800218F8; break;
        case 13: goto L_800218F8; break;
        case 14: goto L_800218F8; break;
        case 15: goto L_800218F8; break;
        case 16: goto L_80021664; break;
        case 17: goto L_80021674; break;
        case 18: goto L_800218F8; break;
        case 19: goto L_800218F8; break;
        case 20: goto L_800218F8; break;
        case 21: goto L_800218F8; break;
        case 22: goto L_800218F8; break;
        case 23: goto L_800218F8; break;
        case 24: goto L_8002168C; break;
        case 25: goto L_8002169C; break;
        case 26: goto L_800216B4; break;
        case 27: goto L_800218F8; break;
        case 28: goto L_800218F8; break;
        case 29: goto L_800218F8; break;
        case 30: goto L_800218F8; break;
        case 31: goto L_800218F8; break;
        case 32: goto L_80021734; break;
        case 33: goto L_80021750; break;
        case 34: goto L_80021774; break;
        case 35: goto L_800217EC; break;
        case 36: goto L_80021828; break;
        case 37: goto L_80021894; break;
        case 38: goto L_800218C8; break;
        case 39: goto L_800218F8; break;
        case 40: goto L_800218DC; break;
        default: switch_error(__func__, 0x800212B8, 0x800953B0);
    }
    // 0x800212BC: nop

L_800212C0:
    // 0x800212C0: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x800212C4: nop

    // 0x800212C8: ori         $t9, $t7, 0x100
    ctx->r25 = ctx->r15 | 0X100;
    // 0x800212CC: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
L_800212D0:
    // 0x800212D0: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x800212D4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800212D8: ori         $t8, $t6, 0x200
    ctx->r24 = ctx->r14 | 0X200;
    // 0x800212DC: sw          $t8, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r24;
    // 0x800212E0: sh          $t7, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r15;
    // 0x800212E4: b           L_80021910
    // 0x800212E8: sh          $a2, 0xC($s3)
    MEM_H(0XC, ctx->r19) = ctx->r6;
        goto L_80021910;
    // 0x800212E8: sh          $a2, 0xC($s3)
    MEM_H(0XC, ctx->r19) = ctx->r6;
L_800212EC:
    // 0x800212EC: lbu         $t6, 0x0($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X0);
    // 0x800212F0: lbu         $t9, 0x1($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X1);
    // 0x800212F4: sll         $t8, $t6, 8
    ctx->r24 = S32(ctx->r14 << 8);
    // 0x800212F8: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    // 0x800212FC: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80021300: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80021304: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x80021308: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8002130C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80021310: addu        $a2, $t9, $t8
    ctx->r6 = ADD32(ctx->r25, ctx->r24);
    // 0x80021314: lw          $t6, -0x48C8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48C8);
    // 0x80021318: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8002131C: lh          $t9, 0x10($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X10);
    // 0x80021320: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x80021324: beq         $a0, $t9, L_800214CC
    if (ctx->r4 == ctx->r25) {
        // 0x80021328: addu        $a1, $t7, $t6
        ctx->r5 = ADD32(ctx->r15, ctx->r14);
            goto L_800214CC;
    }
    // 0x80021328: addu        $a1, $t7, $t6
    ctx->r5 = ADD32(ctx->r15, ctx->r14);
    // 0x8002132C: lh          $t8, 0xA($a1)
    ctx->r24 = MEM_H(ctx->r5, 0XA);
    // 0x80021330: nop

    // 0x80021334: bgez        $t8, L_800214CC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80021338: nop
    
            goto L_800214CC;
    }
    // 0x80021338: nop

    // 0x8002133C: lb          $t7, 0x17($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X17);
    // 0x80021340: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x80021344: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x80021348: beq         $at, $zero, L_800214CC
    if (ctx->r1 == 0) {
        // 0x8002134C: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_800214CC;
    }
    // 0x8002134C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x80021350: lb          $s2, 0x26($a2)
    ctx->r18 = MEM_B(ctx->r6, 0X26);
    // 0x80021354: sw          $s6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r22;
    // 0x80021358: sw          $s4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r20;
    // 0x8002135C: sw          $s3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r19;
    // 0x80021360: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    // 0x80021364: sw          $a1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r5;
    // 0x80021368: jal         0x80020C8C
    // 0x8002136C: sh          $a0, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r4;
    func_80020C8C(rdram, ctx);
        goto after_0;
    // 0x8002136C: sh          $a0, 0x7A($sp)
    MEM_H(0X7A, ctx->r29) = ctx->r4;
    after_0:
    // 0x80021370: lh          $a0, 0x7A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X7A);
    // 0x80021374: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x80021378: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8002137C: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80021380: lw          $s3, 0x88($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X88);
    // 0x80021384: lw          $s4, 0x84($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X84);
    // 0x80021388: lw          $s6, 0x8C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X8C);
    // 0x8002138C: bltz        $v0, L_800214CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80021390: addiu       $t0, $t0, -0x48F4
        ctx->r8 = ADD32(ctx->r8, -0X48F4);
            goto L_800214CC;
    }
    // 0x80021390: addiu       $t0, $t0, -0x48F4
    ctx->r8 = ADD32(ctx->r8, -0X48F4);
    // 0x80021394: lh          $t6, 0x92($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X92);
    // 0x80021398: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8002139C: beq         $v0, $t6, L_800214CC
    if (ctx->r2 == ctx->r14) {
        // 0x800213A0: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_800214CC;
    }
    // 0x800213A0: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x800213A4: lb          $t8, 0x26($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X26);
    // 0x800213A8: sll         $s2, $a0, 16
    ctx->r18 = S32(ctx->r4 << 16);
    // 0x800213AC: sra         $t9, $s2, 16
    ctx->r25 = S32(SIGNED(ctx->r18) >> 16);
    // 0x800213B0: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x800213B4: sw          $s6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r22;
    // 0x800213B8: sw          $s4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r20;
    // 0x800213BC: sw          $s3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r19;
    // 0x800213C0: sw          $a2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r6;
    // 0x800213C4: sw          $a1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r5;
    // 0x800213C8: sh          $zero, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = 0;
    // 0x800213CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800213D0: jal         0x8001F91C
    // 0x800213D4: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    func_8001F91C(rdram, ctx);
        goto after_1;
    // 0x800213D4: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    after_1:
    // 0x800213D8: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x800213DC: lh          $v1, 0x5E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X5E);
    // 0x800213E0: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    // 0x800213E4: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x800213E8: lw          $s3, 0x88($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X88);
    // 0x800213EC: lw          $s4, 0x84($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X84);
    // 0x800213F0: lw          $s6, 0x8C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X8C);
    // 0x800213F4: addiu       $t0, $t0, -0x48F4
    ctx->r8 = ADD32(ctx->r8, -0X48F4);
L_800213F8:
    // 0x800213F8: addu        $a0, $a1, $v1
    ctx->r4 = ADD32(ctx->r5, ctx->r3);
    // 0x800213FC: lb          $t7, 0x14($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X14);
    // 0x80021400: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80021404: bltz        $t7, L_80021420
    if (SIGNED(ctx->r15) < 0) {
        // 0x80021408: sll         $t6, $v1, 16
        ctx->r14 = S32(ctx->r3 << 16);
            goto L_80021420;
    }
    // 0x80021408: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8002140C: sra         $t9, $t6, 16
    ctx->r25 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80021410: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x80021414: bne         $at, $zero, L_800213F8
    if (ctx->r1 != 0) {
        // 0x80021418: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_800213F8;
    }
    // 0x80021418: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x8002141C: addu        $a0, $a1, $t9
    ctx->r4 = ADD32(ctx->r5, ctx->r25);
L_80021420:
    // 0x80021420: sb          $v0, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r2;
    // 0x80021424: lb          $t8, 0x17($a1)
    ctx->r24 = MEM_B(ctx->r5, 0X17);
    // 0x80021428: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8002142C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80021430: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x80021434: sb          $t7, 0x17($a1)
    MEM_B(0X17, ctx->r5) = ctx->r15;
    // 0x80021438: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002143C: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x80021440: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80021444: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80021448: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8002144C: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x80021450: sb          $t6, 0x25($t8)
    MEM_B(0X25, ctx->r24) = ctx->r14;
    // 0x80021454: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80021458: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8002145C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021460: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80021464: lw          $t9, -0x48C8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48C8);
    // 0x80021468: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8002146C: lh          $t7, 0x92($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X92);
    // 0x80021470: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80021474: addu        $t8, $t9, $t6
    ctx->r24 = ADD32(ctx->r25, ctx->r14);
    // 0x80021478: sh          $t7, 0xA($t8)
    MEM_H(0XA, ctx->r24) = ctx->r15;
    // 0x8002147C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80021480: lb          $t9, 0x1E($a2)
    ctx->r25 = MEM_B(ctx->r6, 0X1E);
    // 0x80021484: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80021488: sb          $t9, 0x1E($t7)
    MEM_B(0X1E, ctx->r15) = ctx->r25;
    // 0x8002148C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x80021490: lb          $t8, 0x1F($a2)
    ctx->r24 = MEM_B(ctx->r6, 0X1F);
    // 0x80021494: addu        $t9, $t6, $v1
    ctx->r25 = ADD32(ctx->r14, ctx->r3);
    // 0x80021498: sb          $t8, 0x1F($t9)
    MEM_B(0X1F, ctx->r25) = ctx->r24;
    // 0x8002149C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x800214A0: lbu         $t7, 0x22($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X22);
    // 0x800214A4: addu        $t8, $t6, $v1
    ctx->r24 = ADD32(ctx->r14, ctx->r3);
    // 0x800214A8: sb          $t7, 0x22($t8)
    MEM_B(0X22, ctx->r24) = ctx->r15;
    // 0x800214AC: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x800214B0: lh          $t9, 0x16($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X16);
    // 0x800214B4: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x800214B8: sh          $t9, 0x16($t7)
    MEM_H(0X16, ctx->r15) = ctx->r25;
    // 0x800214BC: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x800214C0: lbu         $t8, 0x23($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X23);
    // 0x800214C4: addu        $t9, $t6, $v1
    ctx->r25 = ADD32(ctx->r14, ctx->r3);
    // 0x800214C8: sb          $t8, 0x23($t9)
    MEM_B(0X23, ctx->r25) = ctx->r24;
L_800214CC:
    // 0x800214CC: b           L_80021910
    // 0x800214D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80021910;
    // 0x800214D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800214D4:
    // 0x800214D4: lb          $a0, 0x20($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X20);
    // 0x800214D8: nop

    // 0x800214DC: addu        $a1, $s3, $a0
    ctx->r5 = ADD32(ctx->r19, ctx->r4);
    // 0x800214E0: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x800214E4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x800214E8: nop

    // 0x800214EC: beq         $v1, $zero, L_80021564
    if (ctx->r3 == 0) {
        // 0x800214F0: nop
    
            goto L_80021564;
    }
    // 0x800214F0: nop

    // 0x800214F4: lbu         $t6, 0x1C($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X1C);
    // 0x800214F8: andi        $t7, $s4, 0xFF
    ctx->r15 = ctx->r20 & 0XFF;
    // 0x800214FC: beq         $t7, $t6, L_80021530
    if (ctx->r15 == ctx->r14) {
        // 0x80021500: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80021530;
    }
    // 0x80021500: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80021504: bne         $a0, $at, L_80021514
    if (ctx->r4 != ctx->r1) {
        // 0x80021508: addiu       $t8, $a0, 0x1
        ctx->r24 = ADD32(ctx->r4, 0X1);
            goto L_80021514;
    }
    // 0x80021508: addiu       $t8, $a0, 0x1
    ctx->r24 = ADD32(ctx->r4, 0X1);
    // 0x8002150C: b           L_80021910
    // 0x80021510: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
        goto L_80021910;
    // 0x80021510: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
L_80021514:
    // 0x80021514: sb          $t8, 0x20($s3)
    MEM_B(0X20, ctx->r19) = ctx->r24;
    // 0x80021518: lb          $t9, 0x20($s3)
    ctx->r25 = MEM_B(ctx->r19, 0X20);
    // 0x8002151C: andi        $v1, $zero, 0xFF
    ctx->r3 = 0 & 0XFF;
    // 0x80021520: addu        $v0, $s3, $t9
    ctx->r2 = ADD32(ctx->r19, ctx->r25);
    // 0x80021524: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80021528: b           L_80021564
    // 0x8002152C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
        goto L_80021564;
    // 0x8002152C: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_80021530:
    // 0x80021530: bne         $a2, $v1, L_8002155C
    if (ctx->r6 != ctx->r3) {
        // 0x80021534: addiu       $t8, $v1, -0x1
        ctx->r24 = ADD32(ctx->r3, -0X1);
            goto L_8002155C;
    }
    // 0x80021534: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x80021538: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8002153C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80021540: lb          $a0, 0x20($s3)
    ctx->r4 = MEM_B(ctx->r19, 0X20);
    // 0x80021544: nop

    // 0x80021548: beq         $a0, $zero, L_80021554
    if (ctx->r4 == 0) {
        // 0x8002154C: addiu       $t6, $a0, -0x1
        ctx->r14 = ADD32(ctx->r4, -0X1);
            goto L_80021554;
    }
    // 0x8002154C: addiu       $t6, $a0, -0x1
    ctx->r14 = ADD32(ctx->r4, -0X1);
    // 0x80021550: sb          $t6, 0x20($s3)
    MEM_B(0X20, ctx->r19) = ctx->r14;
L_80021554:
    // 0x80021554: b           L_80021910
    // 0x80021558: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
        goto L_80021910;
    // 0x80021558: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
L_8002155C:
    // 0x8002155C: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80021560: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
L_80021564:
    // 0x80021564: bne         $v1, $zero, L_80021598
    if (ctx->r3 != 0) {
        // 0x80021568: nop
    
            goto L_80021598;
    }
    // 0x80021568: nop

    // 0x8002156C: lbu         $v1, 0x0($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X0);
    // 0x80021570: nop

    // 0x80021574: bne         $v1, $zero, L_80021584
    if (ctx->r3 != 0) {
        // 0x80021578: nop
    
            goto L_80021584;
    }
    // 0x80021578: nop

    // 0x8002157C: b           L_80021910
    // 0x80021580: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
        goto L_80021910;
    // 0x80021580: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
L_80021584:
    // 0x80021584: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80021588: lb          $t7, 0x20($s3)
    ctx->r15 = MEM_B(ctx->r19, 0X20);
    // 0x8002158C: nop

    // 0x80021590: addu        $t6, $s3, $t7
    ctx->r14 = ADD32(ctx->r19, ctx->r15);
    // 0x80021594: sb          $s4, 0x1C($t6)
    MEM_B(0X1C, ctx->r14) = ctx->r20;
L_80021598:
    // 0x80021598: lbu         $t7, 0x1($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X1);
    // 0x8002159C: lbu         $t8, 0x2($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X2);
    // 0x800215A0: sll         $t9, $t7, 8
    ctx->r25 = S32(ctx->r15 << 8);
    // 0x800215A4: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x800215A8: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800215AC: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800215B0: addu        $s4, $t8, $s4
    ctx->r20 = ADD32(ctx->r24, ctx->r20);
    // 0x800215B4: b           L_80021910
    // 0x800215B8: addiu       $s4, $s4, -0x3
    ctx->r20 = ADD32(ctx->r20, -0X3);
        goto L_80021910;
    // 0x800215B8: addiu       $s4, $s4, -0x3
    ctx->r20 = ADD32(ctx->r20, -0X3);
L_800215BC:
    // 0x800215BC: lbu         $t6, 0x0($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X0);
    // 0x800215C0: lbu         $t9, 0x1($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X1);
    // 0x800215C4: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x800215C8: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x800215CC: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x800215D0: sra         $t9, $t6, 16
    ctx->r25 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800215D4: addu        $s4, $t9, $s4
    ctx->r20 = ADD32(ctx->r25, ctx->r20);
    // 0x800215D8: b           L_80021910
    // 0x800215DC: addiu       $s4, $s4, -0x3
    ctx->r20 = ADD32(ctx->r20, -0X3);
        goto L_80021910;
    // 0x800215DC: addiu       $s4, $s4, -0x3
    ctx->r20 = ADD32(ctx->r20, -0X3);
L_800215E0:
    // 0x800215E0: lh          $a3, 0x92($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X92);
    // 0x800215E4: sw          $s3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r19;
    // 0x800215E8: jal         0x80020D68
    // 0x800215EC: sw          $s6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r22;
    func_80020D68(rdram, ctx);
        goto after_2;
    // 0x800215EC: sw          $s6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r22;
    after_2:
    // 0x800215F0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x800215F4: lw          $s3, 0x88($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X88);
    // 0x800215F8: lw          $s6, 0x8C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X8C);
    // 0x800215FC: addiu       $t0, $t0, -0x48F4
    ctx->r8 = ADD32(ctx->r8, -0X48F4);
    // 0x80021600: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80021604: b           L_80021910
    // 0x80021608: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80021910;
    // 0x80021608: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8002160C:
    // 0x8002160C: lbu         $t7, 0x0($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X0);
    // 0x80021610: addiu       $s4, $s4, 0x3
    ctx->r20 = ADD32(ctx->r20, 0X3);
    // 0x80021614: sb          $t7, 0x21($s3)
    MEM_B(0X21, ctx->r19) = ctx->r15;
    // 0x80021618: lbu         $t8, -0x2($s4)
    ctx->r24 = MEM_BU(ctx->r20, -0X2);
    // 0x8002161C: nop

    // 0x80021620: sb          $t8, 0x23($s3)
    MEM_B(0X23, ctx->r19) = ctx->r24;
    // 0x80021624: lbu         $t6, -0x1($s4)
    ctx->r14 = MEM_BU(ctx->r20, -0X1);
    // 0x80021628: b           L_80021910
    // 0x8002162C: sb          $t6, 0x22($s3)
    MEM_B(0X22, ctx->r19) = ctx->r14;
        goto L_80021910;
    // 0x8002162C: sb          $t6, 0x22($s3)
    MEM_B(0X22, ctx->r19) = ctx->r14;
L_80021630:
    // 0x80021630: lbu         $t7, 0x0($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X0);
    // 0x80021634: lbu         $t9, 0x1($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X1);
    // 0x80021638: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x8002163C: addu        $a0, $t9, $t8
    ctx->r4 = ADD32(ctx->r25, ctx->r24);
    // 0x80021640: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80021644: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80021648: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8002164C: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x80021650: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80021654: nop

    // 0x80021658: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8002165C: b           L_80021910
    // 0x80021660: swc1        $f8, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->f8.u32l;
        goto L_80021910;
    // 0x80021660: swc1        $f8, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->f8.u32l;
L_80021664:
    // 0x80021664: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x80021668: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8002166C: b           L_80021910
    // 0x80021670: sh          $t9, 0x10($s3)
    MEM_H(0X10, ctx->r19) = ctx->r25;
        goto L_80021910;
    // 0x80021670: sh          $t9, 0x10($s3)
    MEM_H(0X10, ctx->r19) = ctx->r25;
L_80021674:
    // 0x80021674: lh          $t8, 0x10($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X10);
    // 0x80021678: lb          $t6, 0x0($s4)
    ctx->r14 = MEM_B(ctx->r20, 0X0);
    // 0x8002167C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80021680: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80021684: b           L_80021910
    // 0x80021688: sh          $t7, 0x10($s3)
    MEM_H(0X10, ctx->r19) = ctx->r15;
        goto L_80021910;
    // 0x80021688: sh          $t7, 0x10($s3)
    MEM_H(0X10, ctx->r19) = ctx->r15;
L_8002168C:
    // 0x8002168C: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x80021690: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80021694: b           L_80021910
    // 0x80021698: sh          $t9, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r25;
        goto L_80021910;
    // 0x80021698: sh          $t9, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r25;
L_8002169C:
    // 0x8002169C: lh          $t8, 0x12($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X12);
    // 0x800216A0: lb          $t6, 0x0($s4)
    ctx->r14 = MEM_B(ctx->r20, 0X0);
    // 0x800216A4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800216A8: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x800216AC: b           L_80021910
    // 0x800216B0: sh          $t7, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r15;
        goto L_80021910;
    // 0x800216B0: sh          $t7, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r15;
L_800216B4:
    // 0x800216B4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x800216B8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800216BC: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x800216C0: beq         $t9, $zero, L_800216DC
    if (ctx->r25 == 0) {
        // 0x800216C4: nop
    
            goto L_800216DC;
    }
    // 0x800216C4: nop

    // 0x800216C8: lw          $t8, 0x4($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X4);
    // 0x800216CC: nop

    // 0x800216D0: ori         $t6, $t8, 0x8
    ctx->r14 = ctx->r24 | 0X8;
    // 0x800216D4: b           L_800216EC
    // 0x800216D8: sw          $t6, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r14;
        goto L_800216EC;
    // 0x800216D8: sw          $t6, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r14;
L_800216DC:
    // 0x800216DC: lw          $t7, 0x4($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X4);
    // 0x800216E0: nop

    // 0x800216E4: ori         $t9, $t7, 0x10
    ctx->r25 = ctx->r15 | 0X10;
    // 0x800216E8: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
L_800216EC:
    // 0x800216EC: lbu         $t6, 0x0($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X0);
    // 0x800216F0: lbu         $t8, 0x1($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X1);
    // 0x800216F4: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x800216F8: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x800216FC: sh          $t9, 0x54($s3)
    MEM_H(0X54, ctx->r19) = ctx->r25;
    // 0x80021700: lh          $t6, 0x54($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X54);
    // 0x80021704: lh          $t8, 0x12($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X12);
    // 0x80021708: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x8002170C: multu       $t6, $t8
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80021710: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x80021714: mflo        $t7
    ctx->r15 = lo;
    // 0x80021718: nop

    // 0x8002171C: nop

    // 0x80021720: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x80021724: mflo        $t9
    ctx->r25 = lo;
    // 0x80021728: sh          $t9, 0x52($s3)
    MEM_H(0X52, ctx->r19) = ctx->r25;
    // 0x8002172C: b           L_80021914
    // 0x80021730: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
        goto L_80021914;
    // 0x80021730: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
L_80021734:
    // 0x80021734: lbu         $t8, 0x0($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X0);
    // 0x80021738: lbu         $t6, 0x1($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X1);
    // 0x8002173C: sll         $t7, $t8, 8
    ctx->r15 = S32(ctx->r24 << 8);
    // 0x80021740: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x80021744: sh          $t9, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r25;
    // 0x80021748: b           L_80021910
    // 0x8002174C: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
        goto L_80021910;
    // 0x8002174C: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
L_80021750:
    // 0x80021750: lbu         $t8, 0x0($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X0);
    // 0x80021754: lbu         $t7, 0x1($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X1);
    // 0x80021758: sll         $t6, $t8, 8
    ctx->r14 = S32(ctx->r24 << 8);
    // 0x8002175C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80021760: lh          $t7, 0xE($s3)
    ctx->r15 = MEM_H(ctx->r19, 0XE);
    // 0x80021764: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x80021768: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002176C: b           L_80021910
    // 0x80021770: sh          $t9, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r25;
        goto L_80021910;
    // 0x80021770: sh          $t9, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r25;
L_80021774:
    // 0x80021774: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80021778: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8002177C: beq         $v0, $zero, L_800217D8
    if (ctx->r2 == 0) {
        // 0x80021780: addiu       $t7, $zero, 0x105
        ctx->r15 = ADD32(0, 0X105);
            goto L_800217D8;
    }
    // 0x80021780: addiu       $t7, $zero, 0x105
    ctx->r15 = ADD32(0, 0X105);
    // 0x80021784: lbu         $t8, 0x23($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X23);
    // 0x80021788: lbu         $a0, 0x22($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X22);
    // 0x8002178C: subu        $t6, $t7, $t8
    ctx->r14 = SUB32(ctx->r15, ctx->r24);
    // 0x80021790: sh          $zero, 0x2A($s3)
    MEM_H(0X2A, ctx->r19) = 0;
    // 0x80021794: swc1        $f22, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = ctx->f22.u32l;
    // 0x80021798: jal         0x80020C3C
    // 0x8002179C: sh          $t6, 0x26($s3)
    MEM_H(0X26, ctx->r19) = ctx->r14;
    func_80020C3C(rdram, ctx);
        goto after_3;
    // 0x8002179C: sh          $t6, 0x26($s3)
    MEM_H(0X26, ctx->r19) = ctx->r14;
    after_3:
    // 0x800217A0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800217A4: lw          $t8, 0x4($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X4);
    // 0x800217A8: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800217AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800217B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800217B4: ori         $t6, $t8, 0x2
    ctx->r14 = ctx->r24 | 0X2;
    // 0x800217B8: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800217BC: sh          $zero, 0x24($s3)
    MEM_H(0X24, ctx->r19) = 0;
    // 0x800217C0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x800217C4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800217C8: sw          $t6, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r14;
    // 0x800217CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800217D0: b           L_80021910
    // 0x800217D4: sh          $t7, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r15;
        goto L_80021910;
    // 0x800217D4: sh          $t7, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r15;
L_800217D8:
    // 0x800217D8: lw          $t9, 0x4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X4);
    // 0x800217DC: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x800217E0: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x800217E4: b           L_80021910
    // 0x800217E8: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
        goto L_80021910;
    // 0x800217E8: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
L_800217EC:
    // 0x800217EC: lbu         $t8, 0x0($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X0);
    // 0x800217F0: addiu       $s4, $s4, 0x5
    ctx->r20 = ADD32(ctx->r20, 0X5);
    // 0x800217F4: sh          $t8, 0x34($s3)
    MEM_H(0X34, ctx->r19) = ctx->r24;
    // 0x800217F8: lbu         $t9, -0x4($s4)
    ctx->r25 = MEM_BU(ctx->r20, -0X4);
    // 0x800217FC: lbu         $t6, -0x3($s4)
    ctx->r14 = MEM_BU(ctx->r20, -0X3);
    // 0x80021800: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x80021804: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80021808: sh          $t8, 0x36($s3)
    MEM_H(0X36, ctx->r19) = ctx->r24;
    // 0x8002180C: lbu         $t6, -0x2($s4)
    ctx->r14 = MEM_BU(ctx->r20, -0X2);
    // 0x80021810: lbu         $t9, -0x1($s4)
    ctx->r25 = MEM_BU(ctx->r20, -0X1);
    // 0x80021814: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80021818: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8002181C: sh          $t8, 0x3A($s3)
    MEM_H(0X3A, ctx->r19) = ctx->r24;
    // 0x80021820: b           L_80021910
    // 0x80021824: sh          $zero, 0x38($s3)
    MEM_H(0X38, ctx->r19) = 0;
        goto L_80021910;
    // 0x80021824: sh          $zero, 0x38($s3)
    MEM_H(0X38, ctx->r19) = 0;
L_80021828:
    // 0x80021828: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8002182C: lw          $t6, -0x48CC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X48CC);
    // 0x80021830: lbu         $t9, 0x0($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X0);
    // 0x80021834: lw          $v1, 0x4($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X4);
    // 0x80021838: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x8002183C: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x80021840: lhu         $t6, 0x0($t8)
    ctx->r14 = MEM_HU(ctx->r24, 0X0);
    // 0x80021844: addiu       $s4, $s4, 0x5
    ctx->r20 = ADD32(ctx->r20, 0X5);
    // 0x80021848: addu        $v0, $t6, $v1
    ctx->r2 = ADD32(ctx->r14, ctx->r3);
    // 0x8002184C: sw          $v0, 0x3C($s3)
    MEM_W(0X3C, ctx->r19) = ctx->r2;
    // 0x80021850: sw          $v0, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->r2;
    // 0x80021854: lbu         $t7, -0x4($s4)
    ctx->r15 = MEM_BU(ctx->r20, -0X4);
    // 0x80021858: lbu         $t9, -0x3($s4)
    ctx->r25 = MEM_BU(ctx->r20, -0X3);
    // 0x8002185C: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x80021860: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x80021864: sh          $t6, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r14;
    // 0x80021868: lbu         $t9, -0x2($s4)
    ctx->r25 = MEM_BU(ctx->r20, -0X2);
    // 0x8002186C: lbu         $t7, -0x1($s4)
    ctx->r15 = MEM_BU(ctx->r20, -0X1);
    // 0x80021870: sll         $t8, $t9, 8
    ctx->r24 = S32(ctx->r25 << 8);
    // 0x80021874: lw          $t9, 0x4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X4);
    // 0x80021878: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x8002187C: ori         $t7, $t9, 0x20
    ctx->r15 = ctx->r25 | 0X20;
    // 0x80021880: sh          $t6, 0x4A($s3)
    MEM_H(0X4A, ctx->r19) = ctx->r14;
    // 0x80021884: sh          $zero, 0x50($s3)
    MEM_H(0X50, ctx->r19) = 0;
    // 0x80021888: sh          $zero, 0x4E($s3)
    MEM_H(0X4E, ctx->r19) = 0;
    // 0x8002188C: b           L_80021910
    // 0x80021890: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
        goto L_80021910;
    // 0x80021890: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
L_80021894:
    // 0x80021894: lbu         $t6, 0x0($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X0);
    // 0x80021898: lbu         $t8, 0x1($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X1);
    // 0x8002189C: sll         $t9, $t6, 8
    ctx->r25 = S32(ctx->r14 << 8);
    // 0x800218A0: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x800218A4: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x800218A8: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800218AC: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x800218B0: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x800218B4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800218B8: nop

    // 0x800218BC: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800218C0: b           L_80021910
    // 0x800218C4: swc1        $f8, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->f8.u32l;
        goto L_80021910;
    // 0x800218C4: swc1        $f8, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->f8.u32l;
L_800218C8:
    // 0x800218C8: lw          $t8, 0x4($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X4);
    // 0x800218CC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x800218D0: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x800218D4: b           L_80021910
    // 0x800218D8: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
        goto L_80021910;
    // 0x800218D8: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
L_800218DC:
    // 0x800218DC: lw          $t6, 0x8($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X8);
    // 0x800218E0: lbu         $t7, 0x0($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X0);
    // 0x800218E4: ori         $t8, $t6, 0x8
    ctx->r24 = ctx->r14 | 0X8;
    // 0x800218E8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800218EC: sw          $t8, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r24;
    // 0x800218F0: b           L_80021910
    // 0x800218F4: sb          $t7, 0x23($s6)
    MEM_B(0X23, ctx->r22) = ctx->r15;
        goto L_80021910;
    // 0x800218F4: sb          $t7, 0x23($s6)
    MEM_B(0X23, ctx->r22) = ctx->r15;
L_800218F8:
    // 0x800218F8: lw          $t9, 0x4($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X4);
    // 0x800218FC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80021900: ori         $t7, $t9, 0x300
    ctx->r15 = ctx->r25 | 0X300;
    // 0x80021904: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
    // 0x80021908: sh          $t6, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r14;
    // 0x8002190C: sh          $a2, 0xC($s3)
    MEM_H(0XC, ctx->r19) = ctx->r6;
L_80021910:
    // 0x80021910: lh          $v0, 0xC($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC);
L_80021914:
    // 0x80021914: nop

    // 0x80021918: beq         $v0, $zero, L_8002127C
    if (ctx->r2 == 0) {
        // 0x8002191C: nop
    
            goto L_8002127C;
    }
    // 0x8002191C: nop

L_80021920:
    // 0x80021920: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x80021924: sh          $t8, 0xC($s3)
    MEM_H(0XC, ctx->r19) = ctx->r24;
    // 0x80021928: sw          $s4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r20;
    // 0x8002192C: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
    // 0x80021930: jal         0x80020650
    // 0x80021934: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    func_80020650(rdram, ctx);
        goto after_4;
    // 0x80021934: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    after_4:
    // 0x80021938: lh          $t9, 0x12($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X12);
    // 0x8002193C: addiu       $v0, $s3, 0x12
    ctx->r2 = ADD32(ctx->r19, 0X12);
    // 0x80021940: bgez        $t9, L_80021950
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80021944: nop
    
            goto L_80021950;
    }
    // 0x80021944: nop

    // 0x80021948: b           L_80021968
    // 0x8002194C: sh          $zero, 0x12($s3)
    MEM_H(0X12, ctx->r19) = 0;
        goto L_80021968;
    // 0x8002194C: sh          $zero, 0x12($s3)
    MEM_H(0X12, ctx->r19) = 0;
L_80021950:
    // 0x80021950: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x80021954: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x80021958: slti        $at, $t7, 0x80
    ctx->r1 = SIGNED(ctx->r15) < 0X80 ? 1 : 0;
    // 0x8002195C: bne         $at, $zero, L_80021968
    if (ctx->r1 != 0) {
        // 0x80021960: nop
    
            goto L_80021968;
    }
    // 0x80021960: nop

    // 0x80021964: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
L_80021968:
    // 0x80021968: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8002196C: nop

    // 0x80021970: andi        $t8, $v0, 0x18
    ctx->r24 = ctx->r2 & 0X18;
    // 0x80021974: beq         $t8, $zero, L_80021A84
    if (ctx->r24 == 0) {
        // 0x80021978: andi        $t9, $v0, 0x8
        ctx->r25 = ctx->r2 & 0X8;
            goto L_80021A84;
    }
    // 0x80021978: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x8002197C: beq         $t9, $zero, L_800219C4
    if (ctx->r25 == 0) {
        // 0x80021980: nop
    
            goto L_800219C4;
    }
    // 0x80021980: nop

    // 0x80021984: lh          $t7, 0x52($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X52);
    // 0x80021988: lh          $v1, 0x54($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X54);
    // 0x8002198C: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x80021990: sh          $t6, 0x52($s3)
    MEM_H(0X52, ctx->r19) = ctx->r14;
    // 0x80021994: lh          $v0, 0x52($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X52);
    // 0x80021998: nop

    // 0x8002199C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800219A0: bne         $at, $zero, L_800219F8
    if (ctx->r1 != 0) {
        // 0x800219A4: nop
    
            goto L_800219F8;
    }
    // 0x800219A4: nop

    // 0x800219A8: lw          $t8, 0x4($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X4);
    // 0x800219AC: sh          $v1, 0x52($s3)
    MEM_H(0X52, ctx->r19) = ctx->r3;
    // 0x800219B0: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x800219B4: lh          $v0, 0x52($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X52);
    // 0x800219B8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x800219BC: b           L_800219F8
    // 0x800219C0: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
        goto L_800219F8;
    // 0x800219C0: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
L_800219C4:
    // 0x800219C4: lh          $t7, 0x52($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X52);
    // 0x800219C8: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x800219CC: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x800219D0: sh          $t6, 0x52($s3)
    MEM_H(0X52, ctx->r19) = ctx->r14;
    // 0x800219D4: lh          $v0, 0x52($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X52);
    // 0x800219D8: nop

    // 0x800219DC: bgtz        $v0, L_800219F8
    if (SIGNED(ctx->r2) > 0) {
        // 0x800219E0: nop
    
            goto L_800219F8;
    }
    // 0x800219E0: nop

    // 0x800219E4: lw          $t8, 0x4($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X4);
    // 0x800219E8: sh          $zero, 0x52($s3)
    MEM_H(0X52, ctx->r19) = 0;
    // 0x800219EC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x800219F0: lh          $v0, 0x52($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X52);
    // 0x800219F4: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
L_800219F8:
    // 0x800219F8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800219FC: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80021A00: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80021A04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80021A08: lh          $t7, 0x54($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X54);
    // 0x80021A0C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80021A10: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80021A14: nop

    // 0x80021A18: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80021A1C: nop

    // 0x80021A20: div.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80021A24: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80021A28: nop

    // 0x80021A2C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80021A30: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80021A34: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80021A38: nop

    // 0x80021A3C: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80021A40: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x80021A44: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80021A48: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80021A4C: sra         $t7, $t9, 16
    ctx->r15 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80021A50: bgez        $t7, L_80021A60
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80021A54: sh          $t8, 0x4E($sp)
        MEM_H(0X4E, ctx->r29) = ctx->r24;
            goto L_80021A60;
    }
    // 0x80021A54: sh          $t8, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r24;
    // 0x80021A58: b           L_80021A78
    // 0x80021A5C: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
        goto L_80021A78;
    // 0x80021A5C: sh          $zero, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = 0;
L_80021A60:
    // 0x80021A60: lh          $t6, 0x4E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X4E);
    // 0x80021A64: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x80021A68: slti        $at, $t6, 0x80
    ctx->r1 = SIGNED(ctx->r14) < 0X80 ? 1 : 0;
    // 0x80021A6C: bne         $at, $zero, L_80021A7C
    if (ctx->r1 != 0) {
        // 0x80021A70: lbu         $t9, 0x4F($sp)
        ctx->r25 = MEM_BU(ctx->r29, 0X4F);
            goto L_80021A7C;
    }
    // 0x80021A70: lbu         $t9, 0x4F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4F);
    // 0x80021A74: sh          $t8, 0x4E($sp)
    MEM_H(0X4E, ctx->r29) = ctx->r24;
L_80021A78:
    // 0x80021A78: lbu         $t9, 0x4F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X4F);
L_80021A7C:
    // 0x80021A7C: nop

    // 0x80021A80: sh          $t9, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r25;
L_80021A84:
    // 0x80021A84: lh          $v0, 0x12($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X12);
    // 0x80021A88: lbu         $t7, 0x21($s6)
    ctx->r15 = MEM_BU(ctx->r22, 0X21);
    // 0x80021A8C: addiu       $v1, $s3, 0x10
    ctx->r3 = ADD32(ctx->r19, 0X10);
    // 0x80021A90: beq         $v0, $t7, L_80021AA8
    if (ctx->r2 == ctx->r15) {
        // 0x80021A94: nop
    
            goto L_80021AA8;
    }
    // 0x80021A94: nop

    // 0x80021A98: lw          $t6, 0x8($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X8);
    // 0x80021A9C: sb          $v0, 0x21($s6)
    MEM_B(0X21, ctx->r22) = ctx->r2;
    // 0x80021AA0: ori         $t8, $t6, 0x4
    ctx->r24 = ctx->r14 | 0X4;
    // 0x80021AA4: sw          $t8, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r24;
L_80021AA8:
    // 0x80021AA8: lh          $v0, 0x10($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X10);
    // 0x80021AAC: nop

    // 0x80021AB0: bgez        $v0, L_80021AC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80021AB4: nop
    
            goto L_80021AC8;
    }
    // 0x80021AB4: nop

    // 0x80021AB8: sh          $zero, 0x10($s3)
    MEM_H(0X10, ctx->r19) = 0;
    // 0x80021ABC: lh          $v0, 0x10($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X10);
    // 0x80021AC0: b           L_80021AEC
    // 0x80021AC4: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
        goto L_80021AEC;
    // 0x80021AC4: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
L_80021AC8:
    // 0x80021AC8: lh          $t9, 0x0($v1)
    ctx->r25 = MEM_H(ctx->r3, 0X0);
    // 0x80021ACC: addiu       $t7, $zero, 0x7F
    ctx->r15 = ADD32(0, 0X7F);
    // 0x80021AD0: slti        $at, $t9, 0x80
    ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
    // 0x80021AD4: bne         $at, $zero, L_80021AEC
    if (ctx->r1 != 0) {
        // 0x80021AD8: sll         $a0, $v0, 24
        ctx->r4 = S32(ctx->r2 << 24);
            goto L_80021AEC;
    }
    // 0x80021AD8: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x80021ADC: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
    // 0x80021AE0: lh          $v0, 0x10($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X10);
    // 0x80021AE4: nop

    // 0x80021AE8: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
L_80021AEC:
    // 0x80021AEC: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80021AF0: jal         0x8001D8D8
    // 0x80021AF4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8001D8D8(rdram, ctx);
        goto after_5;
    // 0x80021AF4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_5:
    // 0x80021AF8: lh          $t8, 0x1C($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X1C);
    // 0x80021AFC: nop

    // 0x80021B00: beq         $v0, $t8, L_80021B18
    if (ctx->r2 == ctx->r24) {
        // 0x80021B04: nop
    
            goto L_80021B18;
    }
    // 0x80021B04: nop

    // 0x80021B08: lw          $t9, 0x8($s6)
    ctx->r25 = MEM_W(ctx->r22, 0X8);
    // 0x80021B0C: sh          $v0, 0x1C($s6)
    MEM_H(0X1C, ctx->r22) = ctx->r2;
    // 0x80021B10: ori         $t7, $t9, 0x2
    ctx->r15 = ctx->r25 | 0X2;
    // 0x80021B14: sw          $t7, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r15;
L_80021B18:
    // 0x80021B18: lw          $t6, 0x4($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X4);
    // 0x80021B1C: nop

    // 0x80021B20: andi        $t8, $t6, 0x100
    ctx->r24 = ctx->r14 & 0X100;
    // 0x80021B24: beq         $t8, $zero, L_80021B78
    if (ctx->r24 == 0) {
        // 0x80021B28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80021B78;
    }
    // 0x80021B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80021B2C: lh          $s3, 0x92($sp)
    ctx->r19 = MEM_H(ctx->r29, 0X92);
    // 0x80021B30: jal         0x8001E6DC
    // 0x80021B34: nop

    func_8001E6DC(rdram, ctx);
        goto after_6;
    // 0x80021B34: nop

    after_6:
    // 0x80021B38: lh          $a1, 0x12($s6)
    ctx->r5 = MEM_H(ctx->r22, 0X12);
    // 0x80021B3C: nop

    // 0x80021B40: bltz        $a1, L_80021B70
    if (SIGNED(ctx->r5) < 0) {
        // 0x80021B44: nop
    
            goto L_80021B70;
    }
    // 0x80021B44: nop

    // 0x80021B48: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80021B4C: addiu       $s0, $s0, -0x48FC
    ctx->r16 = ADD32(ctx->r16, -0X48FC);
    // 0x80021B50: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80021B54: jal         0x8007D930
    // 0x80021B58: nop

    alSndpSetSound(rdram, ctx);
        goto after_7;
    // 0x80021B58: nop

    after_7:
    // 0x80021B5C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80021B60: jal         0x8007DBC0
    // 0x80021B64: nop

    alSndpStop(rdram, ctx);
        goto after_8;
    // 0x80021B64: nop

    after_8:
    // 0x80021B68: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80021B6C: sw          $t9, 0xC($s6)
    MEM_W(0XC, ctx->r22) = ctx->r25;
L_80021B70:
    // 0x80021B70: sb          $zero, 0x25($s6)
    MEM_B(0X25, ctx->r22) = 0;
L_80021B74:
    // 0x80021B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80021B78:
    // 0x80021B78: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x80021B7C: jr          $ra
    // 0x80021B80: nop

    return;
    // 0x80021B80: nop

    // 0x80021B84: jr          $ra
    // 0x80021B88: nop

    return;
    // 0x80021B88: nop

;}
RECOMP_FUNC void func_80021B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021B8C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80021B90: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80021B94: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x80021B98: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80021B9C: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80021BA0: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x80021BA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021BA8: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80021BAC: lw          $t9, -0x48F4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X48F4);
    // 0x80021BB0: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x80021BB4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021BB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021BBC: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x80021BC0: lw          $t6, 0x8($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X8);
    // 0x80021BC4: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x80021BC8: lh          $a0, 0x10($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X10);
    // 0x80021BCC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80021BD0: sw          $t7, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r15;
    // 0x80021BD4: sw          $zero, 0xC($s3)
    MEM_W(0XC, ctx->r19) = 0;
    // 0x80021BD8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80021BDC: jal         0x8001F51C
    // 0x80021BE0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001F51C(rdram, ctx);
        goto after_0;
    // 0x80021BE0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80021BE4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80021BE8: nop

    // 0x80021BEC: beq         $a1, $zero, L_80021D80
    if (ctx->r5 == 0) {
        // 0x80021BF0: sw          $a1, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r5;
            goto L_80021D80;
    }
    // 0x80021BF0: sw          $a1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r5;
    // 0x80021BF4: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80021BF8: addiu       $s4, $s4, -0x48FC
    ctx->r20 = ADD32(ctx->r20, -0X48FC);
    // 0x80021BFC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80021C00: jal         0x8007D860
    // 0x80021C04: nop

    alSndpAllocate(rdram, ctx);
        goto after_1;
    // 0x80021C04: nop

    after_1:
    // 0x80021C08: sh          $v0, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r2;
    // 0x80021C0C: lh          $a1, 0x12($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X12);
    // 0x80021C10: nop

    // 0x80021C14: bltz        $a1, L_80021D84
    if (SIGNED(ctx->r5) < 0) {
        // 0x80021C18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80021D84;
    }
    // 0x80021C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80021C1C: lbu         $a2, 0x24($s3)
    ctx->r6 = MEM_BU(ctx->r19, 0X24);
    // 0x80021C20: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80021C24: addiu       $a2, $a2, 0xB
    ctx->r6 = ADD32(ctx->r6, 0XB);
    // 0x80021C28: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x80021C2C: jal         0x8007D900
    // 0x80021C30: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    alSndpSetPriority(rdram, ctx);
        goto after_2;
    // 0x80021C30: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_2:
    // 0x80021C34: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80021C38: addiu       $t3, $t3, -0x48CC
    ctx->r11 = ADD32(ctx->r11, -0X48CC);
    // 0x80021C3C: lw          $t6, 0x0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X0);
    // 0x80021C40: lh          $t1, 0x46($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X46);
    // 0x80021C44: lb          $t2, 0x25($s3)
    ctx->r10 = MEM_B(ctx->r19, 0X25);
    // 0x80021C48: beq         $t6, $zero, L_80021D0C
    if (ctx->r14 == 0) {
        // 0x80021C4C: addiu       $a2, $zero, 0x3
        ctx->r6 = ADD32(0, 0X3);
            goto L_80021D0C;
    }
    // 0x80021C4C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80021C50: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80021C54: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x80021C58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80021C5C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80021C60: lw          $t8, -0x48C8($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X48C8);
    // 0x80021C64: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x80021C68: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80021C6C: beq         $t2, $a2, L_80021C84
    if (ctx->r10 == ctx->r6) {
        // 0x80021C70: addu        $a0, $t7, $t8
        ctx->r4 = ADD32(ctx->r15, ctx->r24);
            goto L_80021C84;
    }
    // 0x80021C70: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80021C74: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80021C78: beq         $t2, $at, L_80021C84
    if (ctx->r10 == ctx->r1) {
        // 0x80021C7C: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_80021C84;
    }
    // 0x80021C7C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80021C80: sh          $a1, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r5;
L_80021C84:
    // 0x80021C84: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80021C88: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80021C8C: bltz        $t1, L_80021D0C
    if (SIGNED(ctx->r9) < 0) {
        // 0x80021C90: sh          $t1, 0x8($a0)
        MEM_H(0X8, ctx->r4) = ctx->r9;
            goto L_80021D0C;
    }
    // 0x80021C90: sh          $t1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r9;
    // 0x80021C94: lw          $a3, 0x0($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X0);
    // 0x80021C98: sll         $t9, $t1, 1
    ctx->r25 = S32(ctx->r9 << 1);
    // 0x80021C9C: lw          $t0, 0x0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X0);
    // 0x80021CA0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80021CA4: addu        $t6, $t0, $t9
    ctx->r14 = ADD32(ctx->r8, ctx->r25);
    // 0x80021CA8: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x80021CAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80021CB0: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x80021CB4: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80021CB8: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x80021CBC: sh          $zero, 0x34($a0)
    MEM_H(0X34, ctx->r4) = 0;
    // 0x80021CC0: sb          $zero, 0x57($a0)
    MEM_B(0X57, ctx->r4) = 0;
    // 0x80021CC4: sb          $zero, 0x17($a0)
    MEM_B(0X17, ctx->r4) = 0;
    // 0x80021CC8: sb          $zero, 0x20($a0)
    MEM_B(0X20, ctx->r4) = 0;
    // 0x80021CCC: sb          $zero, 0x18($a0)
    MEM_B(0X18, ctx->r4) = 0;
    // 0x80021CD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80021CD4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80021CD8: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x80021CDC: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
L_80021CE0:
    // 0x80021CE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80021CE4: sb          $a1, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r5;
    // 0x80021CE8: bne         $v0, $a2, L_80021CE0
    if (ctx->r2 != ctx->r6) {
        // 0x80021CEC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80021CE0;
    }
    // 0x80021CEC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80021CF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80021CF4: beq         $t2, $at, L_80021D0C
    if (ctx->r10 == ctx->r1) {
        // 0x80021CF8: addiu       $t9, $zero, 0x7F
        ctx->r25 = ADD32(0, 0X7F);
            goto L_80021D0C;
    }
    // 0x80021CF8: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x80021CFC: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x80021D00: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x80021D04: sh          $t9, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r25;
    // 0x80021D08: sh          $t6, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r14;
L_80021D0C:
    // 0x80021D0C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x80021D10: nop

    // 0x80021D14: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x80021D18: bne         $t7, $zero, L_80021D48
    if (ctx->r15 != 0) {
        // 0x80021D1C: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_80021D48;
    }
    // 0x80021D1C: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x80021D20: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x80021D24: sh          $s0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r16;
    // 0x80021D28: jal         0x800211C0
    // 0x80021D2C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    func_800211C0(rdram, ctx);
        goto after_3;
    // 0x80021D2C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    after_3:
    // 0x80021D30: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80021D34: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x80021D38: lh          $s0, 0x5A($sp)
    ctx->r16 = MEM_H(ctx->r29, 0X5A);
    // 0x80021D3C: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x80021D40: addiu       $s4, $s4, -0x48FC
    ctx->r20 = ADD32(ctx->r20, -0X48FC);
    // 0x80021D44: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
L_80021D48:
    // 0x80021D48: ori         $t8, $v0, 0xF
    ctx->r24 = ctx->r2 | 0XF;
    // 0x80021D4C: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80021D50: sw          $t8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r24;
    // 0x80021D54: jal         0x800202FC
    // 0x80021D58: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800202FC(rdram, ctx);
        goto after_4;
    // 0x80021D58: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_4:
    // 0x80021D5C: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80021D60: lh          $a1, 0x12($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X12);
    // 0x80021D64: jal         0x8007D930
    // 0x80021D68: nop

    alSndpSetSound(rdram, ctx);
        goto after_5;
    // 0x80021D68: nop

    after_5:
    // 0x80021D6C: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80021D70: jal         0x8007D950
    // 0x80021D74: nop

    alSndpPlay(rdram, ctx);
        goto after_6;
    // 0x80021D74: nop

    after_6:
    // 0x80021D78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80021D7C: sw          $t6, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r14;
L_80021D80:
    // 0x80021D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80021D84:
    // 0x80021D84: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80021D88: jr          $ra
    // 0x80021D8C: nop

    return;
    // 0x80021D8C: nop

;}
