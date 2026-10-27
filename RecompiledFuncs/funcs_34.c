#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void alCSeqNextEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C404: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007C408: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8007C40C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C410: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8007C414: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8007C418: lw          $a2, 0x10($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X10);
    // 0x8007C41C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007C420: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007C424: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
L_8007C428:
    // 0x8007C428: srlv        $t7, $t6, $v0
    ctx->r15 = S32(U32(ctx->r14) >> (ctx->r2 & 31));
    // 0x8007C42C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8007C430: beql        $t8, $zero, L_8007C474
    if (ctx->r24 == 0) {
        // 0x8007C434: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8007C474;
    }
    goto skip_0;
    // 0x8007C434: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x8007C438: lw          $t1, 0x14($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X14);
    // 0x8007C43C: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8007C440: addu        $v1, $a3, $t9
    ctx->r3 = ADD32(ctx->r7, ctx->r25);
    // 0x8007C444: beql        $t1, $zero, L_8007C45C
    if (ctx->r9 == 0) {
        // 0x8007C448: lw          $a0, 0xB8($v1)
        ctx->r4 = MEM_W(ctx->r3, 0XB8);
            goto L_8007C45C;
    }
    goto skip_1;
    // 0x8007C448: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
    skip_1:
    // 0x8007C44C: lw          $t2, 0xB8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XB8);
    // 0x8007C450: subu        $t3, $t2, $a2
    ctx->r11 = SUB32(ctx->r10, ctx->r6);
    // 0x8007C454: sw          $t3, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = ctx->r11;
    // 0x8007C458: lw          $a0, 0xB8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XB8);
L_8007C45C:
    // 0x8007C45C: sltu        $at, $a0, $t0
    ctx->r1 = ctx->r4 < ctx->r8 ? 1 : 0;
    // 0x8007C460: beql        $at, $zero, L_8007C474
    if (ctx->r1 == 0) {
        // 0x8007C464: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8007C474;
    }
    goto skip_2;
    // 0x8007C464: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_2:
    // 0x8007C468: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8007C46C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007C470: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8007C474:
    // 0x8007C474: bnel        $v0, $a1, L_8007C428
    if (ctx->r2 != ctx->r5) {
        // 0x8007C478: lw          $t6, 0x4($a3)
        ctx->r14 = MEM_W(ctx->r7, 0X4);
            goto L_8007C428;
    }
    goto skip_3;
    // 0x8007C478: lw          $t6, 0x4($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X4);
    skip_3:
    // 0x8007C47C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8007C480: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C484: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C488: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x8007C48C: jal         0x8007C674
    // 0x8007C490: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    __alCSeqReadEvent(rdram, ctx);
        goto after_0;
    // 0x8007C490: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_0:
    // 0x8007C494: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C498: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8007C49C: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8007C4A0: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x8007C4A4: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x8007C4A8: lw          $t4, 0xC($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XC);
    // 0x8007C4AC: sw          $t0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r8;
    // 0x8007C4B0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8007C4B4: addu        $t5, $t4, $t0
    ctx->r13 = ADD32(ctx->r12, ctx->r8);
    // 0x8007C4B8: sw          $t5, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r13;
    // 0x8007C4BC: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x8007C4C0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C4C4: beql        $t6, $at, L_8007C4F4
    if (ctx->r14 == ctx->r1) {
        // 0x8007C4C8: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_8007C4F4;
    }
    goto skip_4;
    // 0x8007C4C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    skip_4:
    // 0x8007C4CC: jal         0x8007CDA4
    // 0x8007C4D0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    __alCSeqGetVarLen(rdram, ctx);
        goto after_1;
    // 0x8007C4D0: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_1:
    // 0x8007C4D4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C4D8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8007C4DC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007C4E0: addu        $v1, $a3, $t8
    ctx->r3 = ADD32(ctx->r7, ctx->r24);
    // 0x8007C4E4: lw          $t9, 0xB8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XB8);
    // 0x8007C4E8: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x8007C4EC: sw          $t1, 0xB8($v1)
    MEM_W(0XB8, ctx->r3) = ctx->r9;
    // 0x8007C4F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_8007C4F4:
    // 0x8007C4F4: sw          $t2, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r10;
    // 0x8007C4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C4FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007C500: jr          $ra
    // 0x8007C504: nop

    return;
    // 0x8007C504: nop

;}
RECOMP_FUNC void __alCSeqNextDelta(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C508: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8007C50C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8007C510: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8007C514: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8007C518: bne         $t6, $zero, L_8007C528
    if (ctx->r14 != 0) {
        // 0x8007C51C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8007C528;
    }
    // 0x8007C51C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007C520: jr          $ra
    // 0x8007C524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8007C524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8007C528:
    // 0x8007C528: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x8007C52C: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
L_8007C530:
    // 0x8007C530: addiu       $t5, $a2, 0x1
    ctx->r13 = ADD32(ctx->r6, 0X1);
    // 0x8007C534: srlv        $t7, $a1, $a2
    ctx->r15 = S32(U32(ctx->r5) >> (ctx->r6 & 31));
    // 0x8007C538: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8007C53C: beql        $t8, $zero, L_8007C580
    if (ctx->r24 == 0) {
        // 0x8007C540: srlv        $t6, $a1, $t5
        ctx->r14 = S32(U32(ctx->r5) >> (ctx->r13 & 31));
            goto L_8007C580;
    }
    goto skip_0;
    // 0x8007C540: srlv        $t6, $a1, $t5
    ctx->r14 = S32(U32(ctx->r5) >> (ctx->r13 & 31));
    skip_0:
    // 0x8007C544: lw          $t2, 0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X14);
    // 0x8007C548: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8007C54C: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
    // 0x8007C550: beql        $t2, $zero, L_8007C56C
    if (ctx->r10 == 0) {
        // 0x8007C554: lw          $t0, 0xB8($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XB8);
            goto L_8007C56C;
    }
    goto skip_1;
    // 0x8007C554: lw          $t0, 0xB8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XB8);
    skip_1:
    // 0x8007C558: lw          $t3, 0xB8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0XB8);
    // 0x8007C55C: subu        $t4, $t3, $v0
    ctx->r12 = SUB32(ctx->r11, ctx->r2);
    // 0x8007C560: sw          $t4, 0xB8($a3)
    MEM_W(0XB8, ctx->r7) = ctx->r12;
    // 0x8007C564: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8007C568: lw          $t0, 0xB8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XB8);
L_8007C56C:
    // 0x8007C56C: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x8007C570: beql        $at, $zero, L_8007C580
    if (ctx->r1 == 0) {
        // 0x8007C574: srlv        $t6, $a1, $t5
        ctx->r14 = S32(U32(ctx->r5) >> (ctx->r13 & 31));
            goto L_8007C580;
    }
    goto skip_2;
    // 0x8007C574: srlv        $t6, $a1, $t5
    ctx->r14 = S32(U32(ctx->r5) >> (ctx->r13 & 31));
    skip_2:
    // 0x8007C578: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8007C57C: srlv        $t6, $a1, $t5
    ctx->r14 = S32(U32(ctx->r5) >> (ctx->r13 & 31));
L_8007C580:
    // 0x8007C580: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8007C584: beq         $t7, $zero, L_8007C5C4
    if (ctx->r15 == 0) {
        // 0x8007C588: addiu       $t4, $a2, 0x2
        ctx->r12 = ADD32(ctx->r6, 0X2);
            goto L_8007C5C4;
    }
    // 0x8007C588: addiu       $t4, $a2, 0x2
    ctx->r12 = ADD32(ctx->r6, 0X2);
    // 0x8007C58C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x8007C590: sll         $t8, $a2, 2
    ctx->r24 = S32(ctx->r6 << 2);
    // 0x8007C594: addu        $a3, $a0, $t8
    ctx->r7 = ADD32(ctx->r4, ctx->r24);
    // 0x8007C598: beql        $t9, $zero, L_8007C5B4
    if (ctx->r25 == 0) {
        // 0x8007C59C: lw          $t0, 0xBC($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XBC);
            goto L_8007C5B4;
    }
    goto skip_3;
    // 0x8007C59C: lw          $t0, 0xBC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XBC);
    skip_3:
    // 0x8007C5A0: lw          $t2, 0xBC($a3)
    ctx->r10 = MEM_W(ctx->r7, 0XBC);
    // 0x8007C5A4: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x8007C5A8: sw          $t3, 0xBC($a3)
    MEM_W(0XBC, ctx->r7) = ctx->r11;
    // 0x8007C5AC: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8007C5B0: lw          $t0, 0xBC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XBC);
L_8007C5B4:
    // 0x8007C5B4: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x8007C5B8: beql        $at, $zero, L_8007C5C8
    if (ctx->r1 == 0) {
        // 0x8007C5BC: srlv        $t5, $a1, $t4
        ctx->r13 = S32(U32(ctx->r5) >> (ctx->r12 & 31));
            goto L_8007C5C8;
    }
    goto skip_4;
    // 0x8007C5BC: srlv        $t5, $a1, $t4
    ctx->r13 = S32(U32(ctx->r5) >> (ctx->r12 & 31));
    skip_4:
    // 0x8007C5C0: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_8007C5C4:
    // 0x8007C5C4: srlv        $t5, $a1, $t4
    ctx->r13 = S32(U32(ctx->r5) >> (ctx->r12 & 31));
L_8007C5C8:
    // 0x8007C5C8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x8007C5CC: beq         $t6, $zero, L_8007C60C
    if (ctx->r14 == 0) {
        // 0x8007C5D0: addiu       $t3, $a2, 0x3
        ctx->r11 = ADD32(ctx->r6, 0X3);
            goto L_8007C60C;
    }
    // 0x8007C5D0: addiu       $t3, $a2, 0x3
    ctx->r11 = ADD32(ctx->r6, 0X3);
    // 0x8007C5D4: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x8007C5D8: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8007C5DC: addu        $a3, $a0, $t7
    ctx->r7 = ADD32(ctx->r4, ctx->r15);
    // 0x8007C5E0: beql        $t8, $zero, L_8007C5FC
    if (ctx->r24 == 0) {
        // 0x8007C5E4: lw          $t0, 0xC0($a3)
        ctx->r8 = MEM_W(ctx->r7, 0XC0);
            goto L_8007C5FC;
    }
    goto skip_5;
    // 0x8007C5E4: lw          $t0, 0xC0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC0);
    skip_5:
    // 0x8007C5E8: lw          $t9, 0xC0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XC0);
    // 0x8007C5EC: subu        $t2, $t9, $v0
    ctx->r10 = SUB32(ctx->r25, ctx->r2);
    // 0x8007C5F0: sw          $t2, 0xC0($a3)
    MEM_W(0XC0, ctx->r7) = ctx->r10;
    // 0x8007C5F4: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8007C5F8: lw          $t0, 0xC0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC0);
L_8007C5FC:
    // 0x8007C5FC: sltu        $at, $t0, $v1
    ctx->r1 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x8007C600: beql        $at, $zero, L_8007C610
    if (ctx->r1 == 0) {
        // 0x8007C604: srlv        $t4, $a1, $t3
        ctx->r12 = S32(U32(ctx->r5) >> (ctx->r11 & 31));
            goto L_8007C610;
    }
    goto skip_6;
    // 0x8007C604: srlv        $t4, $a1, $t3
    ctx->r12 = S32(U32(ctx->r5) >> (ctx->r11 & 31));
    skip_6:
    // 0x8007C608: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_8007C60C:
    // 0x8007C60C: srlv        $t4, $a1, $t3
    ctx->r12 = S32(U32(ctx->r5) >> (ctx->r11 & 31));
L_8007C610:
    // 0x8007C610: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8007C614: beql        $t5, $zero, L_8007C654
    if (ctx->r13 == 0) {
        // 0x8007C618: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_8007C654;
    }
    goto skip_7;
    // 0x8007C618: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_7:
    // 0x8007C61C: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x8007C620: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x8007C624: addu        $a3, $a0, $t6
    ctx->r7 = ADD32(ctx->r4, ctx->r14);
    // 0x8007C628: beql        $t7, $zero, L_8007C640
    if (ctx->r15 == 0) {
        // 0x8007C62C: lw          $a1, 0xC4($a3)
        ctx->r5 = MEM_W(ctx->r7, 0XC4);
            goto L_8007C640;
    }
    goto skip_8;
    // 0x8007C62C: lw          $a1, 0xC4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC4);
    skip_8:
    // 0x8007C630: lw          $t8, 0xC4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0XC4);
    // 0x8007C634: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x8007C638: sw          $t9, 0xC4($a3)
    MEM_W(0XC4, ctx->r7) = ctx->r25;
    // 0x8007C63C: lw          $a1, 0xC4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC4);
L_8007C640:
    // 0x8007C640: sltu        $at, $a1, $v1
    ctx->r1 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x8007C644: beql        $at, $zero, L_8007C654
    if (ctx->r1 == 0) {
        // 0x8007C648: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_8007C654;
    }
    goto skip_9;
    // 0x8007C648: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    skip_9:
    // 0x8007C64C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8007C650: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_8007C654:
    // 0x8007C654: bnel        $a2, $t1, L_8007C530
    if (ctx->r6 != ctx->r9) {
        // 0x8007C658: lw          $a1, 0x4($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X4);
            goto L_8007C530;
    }
    goto skip_10;
    // 0x8007C658: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    skip_10:
    // 0x8007C65C: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8007C660: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8007C664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C668: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
    // 0x8007C66C: jr          $ra
    // 0x8007C670: nop

    return;
    // 0x8007C670: nop

;}
RECOMP_FUNC void __alCSeqReadEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C674: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007C678: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007C67C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007C680: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007C684: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007C688: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8007C68C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x8007C690: jal         0x8007CCE4
    // 0x8007C694: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    __alCSeqReadByte(rdram, ctx);
        goto after_0;
    // 0x8007C694: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    after_0:
    // 0x8007C698: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8007C69C: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x8007C6A0: bne         $v0, $at, L_8007C814
    if (ctx->r2 != ctx->r1) {
        // 0x8007C6A4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8007C814;
    }
    // 0x8007C6A4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8007C6A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007C6AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8007C6B0: jal         0x8007CCE4
    // 0x8007C6B4: sb          $a2, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r6;
    __alCSeqReadByte(rdram, ctx);
        goto after_1;
    // 0x8007C6B4: sb          $a2, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r6;
    after_1:
    // 0x8007C6B8: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x8007C6BC: lbu         $a2, 0x2B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2B);
    // 0x8007C6C0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x8007C6C4: bne         $v0, $at, L_8007C718
    if (ctx->r2 != ctx->r1) {
        // 0x8007C6C8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8007C718;
    }
    // 0x8007C6C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8007C6CC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8007C6D0: sh          $t6, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r14;
    // 0x8007C6D4: sb          $a2, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r6;
    // 0x8007C6D8: sb          $a3, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r7;
    // 0x8007C6DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007C6E0: jal         0x8007CCE4
    // 0x8007C6E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __alCSeqReadByte(rdram, ctx);
        goto after_2;
    // 0x8007C6E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8007C6E8: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8007C6EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007C6F0: jal         0x8007CCE4
    // 0x8007C6F4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __alCSeqReadByte(rdram, ctx);
        goto after_3;
    // 0x8007C6F4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x8007C6F8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8007C6FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007C700: jal         0x8007CCE4
    // 0x8007C704: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __alCSeqReadByte(rdram, ctx);
        goto after_4;
    // 0x8007C704: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x8007C708: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8007C70C: addu        $t7, $s0, $s2
    ctx->r15 = ADD32(ctx->r16, ctx->r18);
    // 0x8007C710: b           L_8007C8AC
    // 0x8007C714: sb          $zero, 0xA8($t7)
    MEM_B(0XA8, ctx->r15) = 0;
        goto L_8007C8AC;
    // 0x8007C714: sb          $zero, 0xA8($t7)
    MEM_B(0XA8, ctx->r15) = 0;
L_8007C718:
    // 0x8007C718: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x8007C71C: bnel        $v1, $at, L_8007C758
    if (ctx->r3 != ctx->r1) {
        // 0x8007C720: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_8007C758;
    }
    goto skip_0;
    // 0x8007C720: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    skip_0:
    // 0x8007C724: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8007C728: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8007C72C: sllv        $t0, $t9, $s2
    ctx->r8 = S32(ctx->r25 << (ctx->r18 & 31));
    // 0x8007C730: xor         $t1, $t8, $t0
    ctx->r9 = ctx->r24 ^ ctx->r8;
    // 0x8007C734: beq         $t1, $zero, L_8007C748
    if (ctx->r9 == 0) {
        // 0x8007C738: sw          $t1, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r9;
            goto L_8007C748;
    }
    // 0x8007C738: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x8007C73C: addiu       $t3, $zero, 0x12
    ctx->r11 = ADD32(0, 0X12);
    // 0x8007C740: b           L_8007C8AC
    // 0x8007C744: sh          $t3, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r11;
        goto L_8007C8AC;
    // 0x8007C744: sh          $t3, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r11;
L_8007C748:
    // 0x8007C748: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8007C74C: b           L_8007C8AC
    // 0x8007C750: sh          $t4, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r12;
        goto L_8007C8AC;
    // 0x8007C750: sh          $t4, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r12;
    // 0x8007C754: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
L_8007C758:
    // 0x8007C758: bne         $v1, $at, L_8007C788
    if (ctx->r3 != ctx->r1) {
        // 0x8007C75C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8007C788;
    }
    // 0x8007C75C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007C760: jal         0x8007CCE4
    // 0x8007C764: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __alCSeqReadByte(rdram, ctx);
        goto after_5;
    // 0x8007C764: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x8007C768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007C76C: jal         0x8007CCE4
    // 0x8007C770: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __alCSeqReadByte(rdram, ctx);
        goto after_6;
    // 0x8007C770: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x8007C774: addu        $t5, $s0, $s2
    ctx->r13 = ADD32(ctx->r16, ctx->r18);
    // 0x8007C778: sb          $zero, 0xA8($t5)
    MEM_B(0XA8, ctx->r13) = 0;
    // 0x8007C77C: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x8007C780: b           L_8007C8AC
    // 0x8007C784: sh          $t6, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r14;
        goto L_8007C8AC;
    // 0x8007C784: sh          $t6, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r14;
L_8007C788:
    // 0x8007C788: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x8007C78C: bne         $v1, $at, L_8007C8AC
    if (ctx->r3 != ctx->r1) {
        // 0x8007C790: sll         $t7, $s2, 2
        ctx->r15 = S32(ctx->r18 << 2);
            goto L_8007C8AC;
    }
    // 0x8007C790: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x8007C794: addu        $a0, $s0, $t7
    ctx->r4 = ADD32(ctx->r16, ctx->r15);
    // 0x8007C798: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x8007C79C: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8007C7A0: addu        $t7, $s0, $s2
    ctx->r15 = ADD32(ctx->r16, ctx->r18);
    // 0x8007C7A4: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x8007C7A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007C7AC: addiu       $t9, $v0, 0x5
    ctx->r25 = ADD32(ctx->r2, 0X5);
    // 0x8007C7B0: bne         $a1, $zero, L_8007C7C4
    if (ctx->r5 != 0) {
        // 0x8007C7B4: lbu         $a2, -0x1($v0)
        ctx->r6 = MEM_BU(ctx->r2, -0X1);
            goto L_8007C7C4;
    }
    // 0x8007C7B4: lbu         $a2, -0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, -0X1);
    // 0x8007C7B8: sb          $a2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r6;
    // 0x8007C7BC: b           L_8007C804
    // 0x8007C7C0: sw          $t9, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r25;
        goto L_8007C804;
    // 0x8007C7C0: sw          $t9, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r25;
L_8007C7C4:
    // 0x8007C7C4: beq         $a1, $at, L_8007C7D0
    if (ctx->r5 == ctx->r1) {
        // 0x8007C7C8: addiu       $t8, $a1, -0x1
        ctx->r24 = ADD32(ctx->r5, -0X1);
            goto L_8007C7D0;
    }
    // 0x8007C7C8: addiu       $t8, $a1, -0x1
    ctx->r24 = ADD32(ctx->r5, -0X1);
    // 0x8007C7CC: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_8007C7D0:
    // 0x8007C7D0: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x8007C7D4: lbu         $t1, 0x2($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X2);
    // 0x8007C7D8: lbu         $t3, 0x3($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X3);
    // 0x8007C7DC: lbu         $t5, 0x4($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X4);
    // 0x8007C7E0: sll         $t0, $v1, 24
    ctx->r8 = S32(ctx->r3 << 24);
    // 0x8007C7E4: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8007C7E8: addu        $v1, $t0, $t2
    ctx->r3 = ADD32(ctx->r8, ctx->r10);
    // 0x8007C7EC: sll         $t4, $t3, 8
    ctx->r12 = S32(ctx->r11 << 8);
    // 0x8007C7F0: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x8007C7F4: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x8007C7F8: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x8007C7FC: subu        $t6, $v0, $v1
    ctx->r14 = SUB32(ctx->r2, ctx->r3);
    // 0x8007C800: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
L_8007C804:
    // 0x8007C804: sb          $zero, 0xA8($t7)
    MEM_B(0XA8, ctx->r15) = 0;
    // 0x8007C808: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8007C80C: b           L_8007C8AC
    // 0x8007C810: sh          $t9, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r25;
        goto L_8007C8AC;
    // 0x8007C810: sh          $t9, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r25;
L_8007C814:
    // 0x8007C814: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007C818: andi        $t0, $v1, 0x80
    ctx->r8 = ctx->r3 & 0X80;
    // 0x8007C81C: beq         $t0, $zero, L_8007C84C
    if (ctx->r8 == 0) {
        // 0x8007C820: sh          $t8, 0x0($s1)
        MEM_H(0X0, ctx->r17) = ctx->r24;
            goto L_8007C84C;
    }
    // 0x8007C820: sh          $t8, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r24;
    // 0x8007C824: sb          $a2, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r6;
    // 0x8007C828: sb          $a2, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r6;
    // 0x8007C82C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007C830: jal         0x8007CCE4
    // 0x8007C834: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __alCSeqReadByte(rdram, ctx);
        goto after_7;
    // 0x8007C834: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x8007C838: lbu         $a2, 0x2B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2B);
    // 0x8007C83C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8007C840: addu        $t1, $s0, $s2
    ctx->r9 = ADD32(ctx->r16, ctx->r18);
    // 0x8007C844: b           L_8007C85C
    // 0x8007C848: sb          $a2, 0xA8($t1)
    MEM_B(0XA8, ctx->r9) = ctx->r6;
        goto L_8007C85C;
    // 0x8007C848: sb          $a2, 0xA8($t1)
    MEM_B(0XA8, ctx->r9) = ctx->r6;
L_8007C84C:
    // 0x8007C84C: addu        $t2, $s0, $s2
    ctx->r10 = ADD32(ctx->r16, ctx->r18);
    // 0x8007C850: lbu         $t3, 0xA8($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XA8);
    // 0x8007C854: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8007C858: sb          $t3, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r11;
L_8007C85C:
    // 0x8007C85C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8007C860: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x8007C864: andi        $t4, $v0, 0xF0
    ctx->r12 = ctx->r2 & 0XF0;
    // 0x8007C868: beq         $t4, $at, L_8007C8A8
    if (ctx->r12 == ctx->r1) {
        // 0x8007C86C: addiu       $at, $zero, 0xD0
        ctx->r1 = ADD32(0, 0XD0);
            goto L_8007C8A8;
    }
    // 0x8007C86C: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x8007C870: beq         $t4, $at, L_8007C8A8
    if (ctx->r12 == ctx->r1) {
        // 0x8007C874: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8007C8A8;
    }
    // 0x8007C874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007C878: jal         0x8007CCE4
    // 0x8007C87C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __alCSeqReadByte(rdram, ctx);
        goto after_8;
    // 0x8007C87C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_8:
    // 0x8007C880: lbu         $t5, 0x8($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X8);
    // 0x8007C884: addiu       $at, $zero, 0x90
    ctx->r1 = ADD32(0, 0X90);
    // 0x8007C888: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8007C88C: andi        $t6, $t5, 0xF0
    ctx->r14 = ctx->r13 & 0XF0;
    // 0x8007C890: bne         $t6, $at, L_8007C8AC
    if (ctx->r14 != ctx->r1) {
        // 0x8007C894: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8007C8AC;
    }
    // 0x8007C894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007C898: jal         0x8007CDA4
    // 0x8007C89C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __alCSeqGetVarLen(rdram, ctx);
        goto after_9;
    // 0x8007C89C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_9:
    // 0x8007C8A0: b           L_8007C8AC
    // 0x8007C8A4: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
        goto L_8007C8AC;
    // 0x8007C8A4: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_8007C8A8:
    // 0x8007C8A8: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_8007C8AC:
    // 0x8007C8AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007C8B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007C8B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C8B8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007C8BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007C8C0: jr          $ra
    // 0x8007C8C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8007C8C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void alCSeqTicksToSec(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C8C8: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x8007C8CC: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x8007C8D0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8007C8D4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007C8D8: bgez        $a2, L_8007C8EC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8007C8DC: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8007C8EC;
    }
    // 0x8007C8DC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8007C8E0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007C8E4: nop

    // 0x8007C8E8: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_8007C8EC:
    // 0x8007C8EC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007C8F0: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8007C8F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8007C8F8: lw          $t7, 0x40($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X40);
    // 0x8007C8FC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8007C900: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8007C904: bgez        $t7, L_8007C918
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8007C908: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8007C918;
    }
    // 0x8007C908: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8007C90C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007C910: nop

    // 0x8007C914: add.s       $f16, $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f6.fl;
L_8007C918:
    // 0x8007C918: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007C91C: ldc1        $f18, 0x6920($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X6920);
    // 0x8007C920: cvt.d.s     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f10.d = CVT_D_S(ctx->f16.fl);
    // 0x8007C924: mul.d       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x8007C928: div.d       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f8.d);
    // 0x8007C92C: jr          $ra
    // 0x8007C930: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    return;
    // 0x8007C930: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
;}
RECOMP_FUNC void alCSeqSecToTicks(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C934: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007C938: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8007C93C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007C940: lw          $t7, 0x40($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X40);
    // 0x8007C944: ldc1        $f6, 0x6928($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X6928);
    // 0x8007C948: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8007C94C: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8007C950: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8007C954: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8007C958: bgez        $t7, L_8007C970
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8007C95C: cvt.d.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
            goto L_8007C970;
    }
    // 0x8007C95C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x8007C960: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8007C964: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007C968: nop

    // 0x8007C96C: add.d       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = ctx->f16.d + ctx->f18.d;
L_8007C970:
    // 0x8007C970: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x8007C974: mul.d       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x8007C978: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8007C97C: bgez        $a2, L_8007C994
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8007C980: cvt.d.w     $f10, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
            goto L_8007C994;
    }
    // 0x8007C980: cvt.d.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.d = CVT_D_W(ctx->f6.u32l);
    // 0x8007C984: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x8007C988: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007C98C: nop

    // 0x8007C990: add.d       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f10.d = ctx->f10.d + ctx->f18.d;
L_8007C994:
    // 0x8007C994: div.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x8007C998: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C99C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8007C9A0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007C9A4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8007C9A8: nop

    // 0x8007C9AC: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x8007C9B0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8007C9B4: nop

    // 0x8007C9B8: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8007C9BC: beql        $v0, $zero, L_8007CA18
    if (ctx->r2 == 0) {
        // 0x8007C9C0: mfc1        $v0, $f16
        ctx->r2 = (int32_t)ctx->f16.u32l;
            goto L_8007CA18;
    }
    goto skip_0;
    // 0x8007C9C0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x8007C9C4: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8007C9C8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007C9CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C9D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007C9D4: sub.d       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f8.d - ctx->f16.d;
    // 0x8007C9D8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8007C9DC: nop

    // 0x8007C9E0: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x8007C9E4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8007C9E8: nop

    // 0x8007C9EC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8007C9F0: bnel        $v0, $zero, L_8007CA0C
    if (ctx->r2 != 0) {
        // 0x8007C9F4: ctc1        $t8, $FpcCsr
        set_cop1_cs(ctx->r24);
            goto L_8007CA0C;
    }
    goto skip_1;
    // 0x8007C9F4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    skip_1:
    // 0x8007C9F8: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8007C9FC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007CA00: jr          $ra
    // 0x8007CA04: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    return;
    // 0x8007CA04: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x8007CA08: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
L_8007CA0C:
    // 0x8007CA0C: jr          $ra
    // 0x8007CA10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8007CA10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8007CA14: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
L_8007CA18:
    // 0x8007CA18: nop

    // 0x8007CA1C: bltzl       $v0, L_8007CA0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8007CA20: ctc1        $t8, $FpcCsr
        set_cop1_cs(ctx->r24);
            goto L_8007CA0C;
    }
    goto skip_2;
    // 0x8007CA20: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    skip_2:
    // 0x8007CA24: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007CA28: jr          $ra
    // 0x8007CA2C: nop

    return;
    // 0x8007CA2C: nop

;}
RECOMP_FUNC void alCSeqGetTicks(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CA30: jr          $ra
    // 0x8007CA34: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    return;
    // 0x8007CA34: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void alCSeqNewMarker(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CA38: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x8007CA3C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8007CA40: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8007CA44: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8007CA48: addiu       $s3, $sp, 0x48
    ctx->r19 = ADD32(ctx->r29, 0X48);
    // 0x8007CA4C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007CA50: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8007CA54: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8007CA58: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8007CA5C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8007CA60: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8007CA64: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x8007CA68: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x8007CA6C: jal         0x8007C2E0
    // 0x8007CA70: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    alCSeqNew(rdram, ctx);
        goto after_0;
    // 0x8007CA70: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x8007CA74: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x8007CA78: addiu       $s4, $sp, 0x140
    ctx->r20 = ADD32(ctx->r29, 0X140);
    // 0x8007CA7C: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x8007CA80: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
L_8007CA84:
    // 0x8007CA84: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8007CA88: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8007CA8C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x8007CA90: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8007CA94: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8007CA98: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8007CA9C: sw          $t7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r15;
    // 0x8007CAA0: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x8007CAA4: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
L_8007CAA8:
    // 0x8007CAA8: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x8007CAAC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8007CAB0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8007CAB4: sw          $t0, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r8;
    // 0x8007CAB8: lw          $t1, 0x58($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X58);
    // 0x8007CABC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8007CAC0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8007CAC4: sw          $t1, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r9;
    // 0x8007CAC8: lbu         $t2, 0x94($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X94);
    // 0x8007CACC: sb          $t2, 0x88($a1)
    MEM_B(0X88, ctx->r5) = ctx->r10;
    // 0x8007CAD0: lbu         $t3, 0xA4($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XA4);
    // 0x8007CAD4: sb          $t3, 0x98($a1)
    MEM_B(0X98, ctx->r5) = ctx->r11;
    // 0x8007CAD8: lw          $t4, 0xA8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XA8);
    // 0x8007CADC: sw          $t4, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r12;
    // 0x8007CAE0: lw          $t5, 0xC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XC);
    // 0x8007CAE4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8007CAE8: lw          $t6, 0x4C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4C);
    // 0x8007CAEC: sw          $t6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r14;
    // 0x8007CAF0: lbu         $t7, 0x95($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X95);
    // 0x8007CAF4: sb          $t7, 0x89($a1)
    MEM_B(0X89, ctx->r5) = ctx->r15;
    // 0x8007CAF8: lbu         $t8, 0xA5($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XA5);
    // 0x8007CAFC: sb          $t8, 0x99($a1)
    MEM_B(0X99, ctx->r5) = ctx->r24;
    // 0x8007CB00: lw          $t9, 0xAC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XAC);
    // 0x8007CB04: sw          $t9, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r25;
    // 0x8007CB08: lw          $t0, 0x10($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X10);
    // 0x8007CB0C: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8007CB10: lw          $t1, 0x50($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X50);
    // 0x8007CB14: sw          $t1, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r9;
    // 0x8007CB18: lbu         $t2, 0x96($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X96);
    // 0x8007CB1C: sb          $t2, 0x8A($a1)
    MEM_B(0X8A, ctx->r5) = ctx->r10;
    // 0x8007CB20: lbu         $t3, 0xA6($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XA6);
    // 0x8007CB24: sb          $t3, 0x9A($a1)
    MEM_B(0X9A, ctx->r5) = ctx->r11;
    // 0x8007CB28: lw          $t4, 0xB0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XB0);
    // 0x8007CB2C: sw          $t4, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r12;
    // 0x8007CB30: lw          $t5, 0x14($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X14);
    // 0x8007CB34: sw          $t5, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r13;
    // 0x8007CB38: lw          $t6, 0x54($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X54);
    // 0x8007CB3C: sw          $t6, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r14;
    // 0x8007CB40: lbu         $t7, 0x97($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X97);
    // 0x8007CB44: sb          $t7, 0x8B($a1)
    MEM_B(0X8B, ctx->r5) = ctx->r15;
    // 0x8007CB48: lbu         $t8, 0xA7($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0XA7);
    // 0x8007CB4C: sb          $t8, 0x9B($a1)
    MEM_B(0X9B, ctx->r5) = ctx->r24;
    // 0x8007CB50: lw          $t9, 0xB4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XB4);
    // 0x8007CB54: bne         $a0, $s0, L_8007CAA8
    if (ctx->r4 != ctx->r16) {
        // 0x8007CB58: sw          $t9, 0xA8($v0)
        MEM_W(0XA8, ctx->r2) = ctx->r25;
            goto L_8007CAA8;
    }
    // 0x8007CB58: sw          $t9, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r25;
    // 0x8007CB5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8007CB60: jal         0x8007C404
    // 0x8007CB64: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    alCSeqNextEvent(rdram, ctx);
        goto after_1;
    // 0x8007CB64: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x8007CB68: lh          $t0, 0x140($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X140);
    // 0x8007CB6C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8007CB70: beq         $t0, $s5, L_8007CB80
    if (ctx->r8 == ctx->r21) {
        // 0x8007CB74: sltu        $at, $t1, $s2
        ctx->r1 = ctx->r9 < ctx->r18 ? 1 : 0;
            goto L_8007CB80;
    }
    // 0x8007CB74: sltu        $at, $t1, $s2
    ctx->r1 = ctx->r9 < ctx->r18 ? 1 : 0;
    // 0x8007CB78: bnel        $at, $zero, L_8007CA84
    if (ctx->r1 != 0) {
        // 0x8007CB7C: lw          $t6, 0x4C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X4C);
            goto L_8007CA84;
    }
    goto skip_0;
    // 0x8007CB7C: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    skip_0:
L_8007CB80:
    // 0x8007CB80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8007CB84: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8007CB88: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8007CB8C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CB90: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8007CB94: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8007CB98: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8007CB9C: jr          $ra
    // 0x8007CBA0: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    // 0x8007CBA0: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void alCSeqSetLoc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CBA4: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8007CBA8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8007CBAC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8007CBB0: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x8007CBB4: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8007CBB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007CBBC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8007CBC0: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x8007CBC4: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x8007CBC8: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x8007CBCC: sw          $t8, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r24;
    // 0x8007CBD0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_8007CBD4:
    // 0x8007CBD4: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    // 0x8007CBD8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8007CBDC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8007CBE0: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x8007CBE4: lw          $t1, 0x4C($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4C);
    // 0x8007CBE8: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8007CBEC: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x8007CBF0: sw          $t1, 0x50($v1)
    MEM_W(0X50, ctx->r3) = ctx->r9;
    // 0x8007CBF4: lbu         $t2, 0x8C($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X8C);
    // 0x8007CBF8: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x8007CBFC: sb          $t2, 0x96($a3)
    MEM_B(0X96, ctx->r7) = ctx->r10;
    // 0x8007CC00: lbu         $t3, 0x9A($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X9A);
    // 0x8007CC04: sb          $t3, 0xA6($a3)
    MEM_B(0XA6, ctx->r7) = ctx->r11;
    // 0x8007CC08: lw          $t4, 0xA4($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XA4);
    // 0x8007CC0C: sw          $t4, 0xB0($v1)
    MEM_W(0XB0, ctx->r3) = ctx->r12;
    // 0x8007CC10: lw          $t5, 0x8($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X8);
    // 0x8007CC14: sw          $t5, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r13;
    // 0x8007CC18: lw          $t6, 0x48($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X48);
    // 0x8007CC1C: sw          $t6, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r14;
    // 0x8007CC20: lbu         $t7, 0x8B($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X8B);
    // 0x8007CC24: sb          $t7, 0x97($a3)
    MEM_B(0X97, ctx->r7) = ctx->r15;
    // 0x8007CC28: lbu         $t8, 0x9B($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X9B);
    // 0x8007CC2C: sb          $t8, 0xA7($a3)
    MEM_B(0XA7, ctx->r7) = ctx->r24;
    // 0x8007CC30: lw          $t9, 0xA8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XA8);
    // 0x8007CC34: bne         $v0, $a0, L_8007CBD4
    if (ctx->r2 != ctx->r4) {
        // 0x8007CC38: sw          $t9, 0xB4($v1)
        MEM_W(0XB4, ctx->r3) = ctx->r25;
            goto L_8007CBD4;
    }
    // 0x8007CC38: sw          $t9, 0xB4($v1)
    MEM_W(0XB4, ctx->r3) = ctx->r25;
    // 0x8007CC3C: jr          $ra
    // 0x8007CC40: nop

    return;
    // 0x8007CC40: nop

;}
RECOMP_FUNC void alCSeqGetLoc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CC44: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8007CC48: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8007CC4C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8007CC50: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8007CC54: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x8007CC58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007CC5C: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x8007CC60: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8007CC64: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x8007CC68: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8007CC6C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8007CC70: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
L_8007CC74:
    // 0x8007CC74: lw          $t9, 0x18($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X18);
    // 0x8007CC78: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8007CC7C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8007CC80: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8007CC84: lw          $t1, 0x58($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X58);
    // 0x8007CC88: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8007CC8C: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x8007CC90: sw          $t1, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r9;
    // 0x8007CC94: lbu         $t2, 0x98($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X98);
    // 0x8007CC98: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x8007CC9C: sb          $t2, 0x8A($a3)
    MEM_B(0X8A, ctx->r7) = ctx->r10;
    // 0x8007CCA0: lbu         $t3, 0xA6($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XA6);
    // 0x8007CCA4: sb          $t3, 0x9A($a3)
    MEM_B(0X9A, ctx->r7) = ctx->r11;
    // 0x8007CCA8: lw          $t4, 0xB0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XB0);
    // 0x8007CCAC: sw          $t4, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->r12;
    // 0x8007CCB0: lw          $t5, 0x14($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X14);
    // 0x8007CCB4: sw          $t5, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r13;
    // 0x8007CCB8: lw          $t6, 0x54($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X54);
    // 0x8007CCBC: sw          $t6, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r14;
    // 0x8007CCC0: lbu         $t7, 0x97($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X97);
    // 0x8007CCC4: sb          $t7, 0x8B($a3)
    MEM_B(0X8B, ctx->r7) = ctx->r15;
    // 0x8007CCC8: lbu         $t8, 0xA7($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0XA7);
    // 0x8007CCCC: sb          $t8, 0x9B($a3)
    MEM_B(0X9B, ctx->r7) = ctx->r24;
    // 0x8007CCD0: lw          $t9, 0xB4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XB4);
    // 0x8007CCD4: bne         $v0, $a0, L_8007CC74
    if (ctx->r2 != ctx->r4) {
        // 0x8007CCD8: sw          $t9, 0xA8($v1)
        MEM_W(0XA8, ctx->r3) = ctx->r25;
            goto L_8007CC74;
    }
    // 0x8007CCD8: sw          $t9, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r25;
    // 0x8007CCDC: jr          $ra
    // 0x8007CCE0: nop

    return;
    // 0x8007CCE0: nop

;}
RECOMP_FUNC void __alCSeqReadByte(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CCE4: addu        $v0, $a0, $a1
    ctx->r2 = ADD32(ctx->r4, ctx->r5);
    // 0x8007CCE8: lbu         $t6, 0x98($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X98);
    // 0x8007CCEC: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x8007CCF0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x8007CCF4: beq         $t6, $zero, L_8007CD24
    if (ctx->r14 == 0) {
        // 0x8007CCF8: addu        $a2, $a0, $t2
        ctx->r6 = ADD32(ctx->r4, ctx->r10);
            goto L_8007CD24;
    }
    // 0x8007CCF8: addu        $a2, $a0, $t2
    ctx->r6 = ADD32(ctx->r4, ctx->r10);
    // 0x8007CCFC: addu        $a2, $a0, $t7
    ctx->r6 = ADD32(ctx->r4, ctx->r15);
    // 0x8007CD00: lw          $a3, 0x58($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X58);
    // 0x8007CD04: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x8007CD08: addiu       $t8, $a3, 0x1
    ctx->r24 = ADD32(ctx->r7, 0X1);
    // 0x8007CD0C: sw          $t8, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r24;
    // 0x8007CD10: lbu         $t9, 0x98($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X98);
    // 0x8007CD14: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x8007CD18: sb          $t1, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r9;
    // 0x8007CD1C: jr          $ra
    // 0x8007CD20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8007CD20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8007CD24:
    // 0x8007CD24: lw          $a3, 0x18($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X18);
    // 0x8007CD28: addiu       $t0, $zero, 0xFE
    ctx->r8 = ADD32(0, 0XFE);
    // 0x8007CD2C: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x8007CD30: addiu       $t3, $a3, 0x1
    ctx->r11 = ADD32(ctx->r7, 0X1);
    // 0x8007CD34: sw          $t3, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r11;
    // 0x8007CD38: bne         $t0, $v1, L_8007CD9C
    if (ctx->r8 != ctx->r3) {
        // 0x8007CD3C: nop
    
            goto L_8007CD9C;
    }
    // 0x8007CD3C: nop

    // 0x8007CD40: lbu         $a0, 0x0($t3)
    ctx->r4 = MEM_BU(ctx->r11, 0X0);
    // 0x8007CD44: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8007CD48: sw          $t4, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r12;
    // 0x8007CD4C: beq         $t0, $a0, L_8007CD9C
    if (ctx->r8 == ctx->r4) {
        // 0x8007CD50: addiu       $t5, $t4, 0x1
        ctx->r13 = ADD32(ctx->r12, 0X1);
            goto L_8007CD9C;
    }
    // 0x8007CD50: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8007CD54: lbu         $v1, 0x0($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X0);
    // 0x8007CD58: sw          $t5, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r13;
    // 0x8007CD5C: sll         $t8, $a0, 8
    ctx->r24 = S32(ctx->r4 << 8);
    // 0x8007CD60: lbu         $a1, 0x0($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X0);
    // 0x8007CD64: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8007CD68: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8007CD6C: subu        $t1, $t6, $t9
    ctx->r9 = SUB32(ctx->r14, ctx->r25);
    // 0x8007CD70: addiu       $t2, $t1, -0x4
    ctx->r10 = ADD32(ctx->r9, -0X4);
    // 0x8007CD74: sw          $t6, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r14;
    // 0x8007CD78: sw          $t2, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r10;
    // 0x8007CD7C: sb          $a1, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r5;
    // 0x8007CD80: lw          $a3, 0x58($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X58);
    // 0x8007CD84: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x8007CD88: addiu       $t3, $a3, 0x1
    ctx->r11 = ADD32(ctx->r7, 0X1);
    // 0x8007CD8C: sw          $t3, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->r11;
    // 0x8007CD90: lbu         $t4, 0x98($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X98);
    // 0x8007CD94: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8007CD98: sb          $t5, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r13;
L_8007CD9C:
    // 0x8007CD9C: jr          $ra
    // 0x8007CDA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8007CDA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void __alCSeqGetVarLen(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CDA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007CDA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007CDAC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007CDB0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007CDB4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8007CDB8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8007CDBC: jal         0x8007CCE4
    // 0x8007CDC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    __alCSeqReadByte(rdram, ctx);
        goto after_0;
    // 0x8007CDC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8007CDC4: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x8007CDC8: beq         $t6, $zero, L_8007CDF4
    if (ctx->r14 == 0) {
        // 0x8007CDCC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8007CDF4;
    }
    // 0x8007CDCC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007CDD0: andi        $s0, $v0, 0x7F
    ctx->r16 = ctx->r2 & 0X7F;
L_8007CDD4:
    // 0x8007CDD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007CDD8: jal         0x8007CCE4
    // 0x8007CDDC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __alCSeqReadByte(rdram, ctx);
        goto after_1;
    // 0x8007CDDC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x8007CDE0: sll         $t7, $s0, 7
    ctx->r15 = S32(ctx->r16 << 7);
    // 0x8007CDE4: andi        $t8, $v0, 0x7F
    ctx->r24 = ctx->r2 & 0X7F;
    // 0x8007CDE8: andi        $t9, $v0, 0x80
    ctx->r25 = ctx->r2 & 0X80;
    // 0x8007CDEC: bne         $t9, $zero, L_8007CDD4
    if (ctx->r25 != 0) {
        // 0x8007CDF0: addu        $s0, $t7, $t8
        ctx->r16 = ADD32(ctx->r15, ctx->r24);
            goto L_8007CDD4;
    }
    // 0x8007CDF0: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
L_8007CDF4:
    // 0x8007CDF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007CDF8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8007CDFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007CE00: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CE04: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007CE08: jr          $ra
    // 0x8007CE0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007CE0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void alSeqpSetSeq(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CE10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007CE14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CE18: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007CE1C: addiu       $t6, $zero, 0xD
    ctx->r14 = ADD32(0, 0XD);
    // 0x8007CE20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007CE24: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x8007CE28: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8007CE2C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x8007CE30: jal         0x80085580
    // 0x8007CE34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007CE34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007CE38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CE3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007CE40: jr          $ra
    // 0x8007CE44: nop

    return;
    // 0x8007CE44: nop

;}
RECOMP_FUNC void alSeqpSetVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CE50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007CE54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CE58: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007CE5C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8007CE60: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x8007CE64: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8007CE68: sh          $t7, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r15;
    // 0x8007CE6C: sh          $t6, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r14;
    // 0x8007CE70: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8007CE74: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x8007CE78: jal         0x80085580
    // 0x8007CE7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007CE7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007CE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CE84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007CE88: jr          $ra
    // 0x8007CE8C: nop

    return;
    // 0x8007CE8C: nop

;}
RECOMP_FUNC void alSeqpPlay(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CE90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007CE94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CE98: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x8007CE9C: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x8007CEA0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8007CEA4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x8007CEA8: jal         0x80085580
    // 0x8007CEAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007CEAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007CEB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CEB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007CEB8: jr          $ra
    // 0x8007CEBC: nop

    return;
    // 0x8007CEBC: nop

;}
RECOMP_FUNC void alSeqpGetState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CEC0: jr          $ra
    // 0x8007CEC4: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    return;
    // 0x8007CEC4: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
;}
RECOMP_FUNC void alSeqpStop(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CED0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007CED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CED8: addiu       $t6, $zero, 0x11
    ctx->r14 = ADD32(0, 0X11);
    // 0x8007CEDC: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x8007CEE0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8007CEE4: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x8007CEE8: jal         0x80085580
    // 0x8007CEEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007CEEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007CEF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CEF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007CEF8: jr          $ra
    // 0x8007CEFC: nop

    return;
    // 0x8007CEFC: nop

;}
RECOMP_FUNC void alSeqpSetChlFXMix(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CF00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007CF04: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8007CF08: lbu         $t9, 0x33($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X33);
    // 0x8007CF0C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8007CF10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CF14: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007CF18: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8007CF1C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8007CF20: ori         $t7, $a3, 0xB0
    ctx->r15 = ctx->r7 | 0XB0;
    // 0x8007CF24: addiu       $t8, $zero, 0x5B
    ctx->r24 = ADD32(0, 0X5B);
    // 0x8007CF28: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x8007CF2C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8007CF30: sb          $t7, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r15;
    // 0x8007CF34: sb          $t8, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r24;
    // 0x8007CF38: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8007CF3C: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x8007CF40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007CF44: jal         0x80085580
    // 0x8007CF48: sb          $t9, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r25;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007CF48: sb          $t9, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r25;
    after_0:
    // 0x8007CF4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CF50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007CF54: jr          $ra
    // 0x8007CF58: nop

    return;
    // 0x8007CF58: nop

;}
RECOMP_FUNC void alSeqpSetTempo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CF60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007CF64: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8007CF68: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x8007CF6C: andi        $t1, $a1, 0xFF00
    ctx->r9 = ctx->r5 & 0XFF00;
    // 0x8007CF70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CF74: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007CF78: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8007CF7C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x8007CF80: addiu       $t8, $zero, 0x51
    ctx->r24 = ADD32(0, 0X51);
    // 0x8007CF84: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8007CF88: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x8007CF8C: or          $t3, $a1, $zero
    ctx->r11 = ctx->r5 | 0;
    // 0x8007CF90: sh          $t6, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r14;
    // 0x8007CF94: sb          $t7, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r15;
    // 0x8007CF98: sb          $t8, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r24;
    // 0x8007CF9C: sb          $t0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r8;
    // 0x8007CFA0: sb          $t2, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r10;
    // 0x8007CFA4: sb          $t3, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r11;
    // 0x8007CFA8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8007CFAC: addiu       $a0, $a0, 0x48
    ctx->r4 = ADD32(ctx->r4, 0X48);
    // 0x8007CFB0: jal         0x80085580
    // 0x8007CFB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007CFB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007CFB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CFBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007CFC0: jr          $ra
    // 0x8007CFC4: nop

    return;
    // 0x8007CFC4: nop

;}
RECOMP_FUNC void alCSPGetTempo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CFD0: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x8007CFD4: bnel        $v1, $zero, L_8007CFE8
    if (ctx->r3 != 0) {
        // 0x8007CFD8: lw          $t6, 0x24($a0)
        ctx->r14 = MEM_W(ctx->r4, 0X24);
            goto L_8007CFE8;
    }
    goto skip_0;
    // 0x8007CFD8: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    skip_0:
    // 0x8007CFDC: jr          $ra
    // 0x8007CFE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8007CFE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007CFE4: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
L_8007CFE8:
    // 0x8007CFE8: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8007CFEC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8007CFF0: nop

    // 0x8007CFF4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007CFF8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8007CFFC: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8007D000: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8007D004: nop

    // 0x8007D008: jr          $ra
    // 0x8007D00C: nop

    return;
    // 0x8007D00C: nop

;}
RECOMP_FUNC void alSeqpGetChlProgram(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D010: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007D014: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8007D018: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x8007D01C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8007D020: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x8007D024: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007D028: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8007D02C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x8007D030: addiu       $t7, $sp, 0xC
    ctx->r15 = ADD32(ctx->r29, 0XC);
    // 0x8007D034: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x8007D038: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8007D03C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007D040: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8007D044: sw          $t3, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r11;
    // 0x8007D048: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x8007D04C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x8007D050: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x8007D054: sw          $t3, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r11;
    // 0x8007D058: lh          $a2, 0x0($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X0);
    // 0x8007D05C: blezl       $a2, L_8007D090
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8007D060: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8007D090;
    }
    goto skip_0;
    // 0x8007D060: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
L_8007D064:
    // 0x8007D064: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8007D068: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8007D06C: bnel        $v0, $t4, L_8007D080
    if (ctx->r2 != ctx->r12) {
        // 0x8007D070: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8007D080;
    }
    goto skip_1;
    // 0x8007D070: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    skip_1:
    // 0x8007D074: b           L_8007D090
    // 0x8007D078: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8007D090;
    // 0x8007D078: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8007D07C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8007D080:
    // 0x8007D080: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8007D084: bne         $at, $zero, L_8007D064
    if (ctx->r1 != 0) {
        // 0x8007D088: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8007D064;
    }
    // 0x8007D088: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8007D08C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8007D090:
    // 0x8007D090: jr          $ra
    // 0x8007D094: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007D094: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void alSeqpGetChlVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D0A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8007D0A4: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x8007D0A8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8007D0AC: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8007D0B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007D0B4: jr          $ra
    // 0x8007D0B8: lbu         $v0, 0x9($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X9);
    return;
    // 0x8007D0B8: lbu         $v0, 0x9($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X9);
;}
RECOMP_FUNC void alSeqpGetChlPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D0C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8007D0C4: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x8007D0C8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8007D0CC: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8007D0D0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007D0D4: jr          $ra
    // 0x8007D0D8: lbu         $v0, 0x7($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X7);
    return;
    // 0x8007D0D8: lbu         $v0, 0x7($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X7);
;}
RECOMP_FUNC void alSeqpGetChlFXMix(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D0E0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8007D0E4: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x8007D0E8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8007D0EC: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8007D0F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007D0F4: jr          $ra
    // 0x8007D0F8: lbu         $v0, 0xA($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0XA);
    return;
    // 0x8007D0F8: lbu         $v0, 0xA($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0XA);
;}
RECOMP_FUNC void func_8007D100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D100: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007D104: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8007D108: bltz        $a0, L_8007D11C
    if (SIGNED(ctx->r4) < 0) {
        // 0x8007D10C: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_8007D11C;
    }
    // 0x8007D10C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007D110: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007D114: b           L_8007D124
    // 0x8007D118: lwc1        $f0, 0x6930($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6930);
        goto L_8007D124;
    // 0x8007D118: lwc1        $f0, 0x6930($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6930);
L_8007D11C:
    // 0x8007D11C: lwc1        $f0, 0x6934($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6934);
    // 0x8007D120: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_8007D124:
    // 0x8007D124: beq         $a0, $zero, L_8007D148
    if (ctx->r4 == 0) {
        // 0x8007D128: andi        $t6, $a0, 0x1
        ctx->r14 = ctx->r4 & 0X1;
            goto L_8007D148;
    }
L_8007D128:
    // 0x8007D128: andi        $t6, $a0, 0x1
    ctx->r14 = ctx->r4 & 0X1;
    // 0x8007D12C: beq         $t6, $zero, L_8007D13C
    if (ctx->r14 == 0) {
        // 0x8007D130: sra         $t7, $a0, 1
        ctx->r15 = S32(SIGNED(ctx->r4) >> 1);
            goto L_8007D13C;
    }
    // 0x8007D130: sra         $t7, $a0, 1
    ctx->r15 = S32(SIGNED(ctx->r4) >> 1);
    // 0x8007D134: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8007D138: nop

L_8007D13C:
    // 0x8007D13C: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8007D140: bne         $t7, $zero, L_8007D128
    if (ctx->r15 != 0) {
        // 0x8007D144: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_8007D128;
    }
    // 0x8007D144: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_8007D148:
    // 0x8007D148: jr          $ra
    // 0x8007D14C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    return;
    // 0x8007D14C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
;}
RECOMP_FUNC void alSndpNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D150: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8007D154: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8007D158: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007D15C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8007D160: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8007D164: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8007D168: addiu       $t8, $zero, 0x3E80
    ctx->r24 = ADD32(0, 0X3E80);
    // 0x8007D16C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8007D170: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
    // 0x8007D174: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
    // 0x8007D178: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
    // 0x8007D17C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8007D180: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8007D184: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x8007D188: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8007D18C: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8007D190: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8007D194: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8007D198: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007D19C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007D1A0: jal         0x8007ABD0
    // 0x8007D1A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8007D1A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8007D1A8: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8007D1AC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x8007D1B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007D1B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007D1B8: beq         $t1, $zero, L_8007D1E0
    if (ctx->r9 == 0) {
        // 0x8007D1BC: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_8007D1E0;
    }
    // 0x8007D1BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8007D1C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8007D1C4: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
L_8007D1C8:
    // 0x8007D1C8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8007D1CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007D1D0: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x8007D1D4: sltu        $at, $v1, $t2
    ctx->r1 = ctx->r3 < ctx->r10 ? 1 : 0;
    // 0x8007D1D8: bnel        $at, $zero, L_8007D1C8
    if (ctx->r1 != 0) {
        // 0x8007D1DC: sw          $zero, 0x1C($a0)
        MEM_W(0X1C, ctx->r4) = 0;
            goto L_8007D1C8;
    }
    goto skip_0;
    // 0x8007D1DC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    skip_0:
L_8007D1E0:
    // 0x8007D1E0: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x8007D1E4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x8007D1E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007D1EC: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8007D1F0: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8007D1F4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8007D1F8: jal         0x8007ABD0
    // 0x8007D1FC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8007D1FC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_1:
    // 0x8007D200: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8007D204: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x8007D208: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8007D20C: jal         0x80085480
    // 0x8007D210: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    alEvtqNew(rdram, ctx);
        goto after_2;
    // 0x8007D210: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x8007D214: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8007D218: lw          $a0, 0x44B0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X44B0);
    // 0x8007D21C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8007D220: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x8007D224: addiu       $t6, $t6, -0x2D84
    ctx->r14 = ADD32(ctx->r14, -0X2D84);
    // 0x8007D228: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x8007D22C: sw          $t6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r14;
    // 0x8007D230: sw          $s1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r17;
    // 0x8007D234: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8007D238: jal         0x800857C0
    // 0x8007D23C: sw          $a0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r4;
    alSynAddPlayer(rdram, ctx);
        goto after_3;
    // 0x8007D23C: sw          $a0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r4;
    after_3:
    // 0x8007D240: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x8007D244: sh          $t7, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r15;
    // 0x8007D248: lw          $a2, 0x48($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X48);
    // 0x8007D24C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007D250: jal         0x80085580
    // 0x8007D254: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    alEvtqPostEvent(rdram, ctx);
        goto after_4;
    // 0x8007D254: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_4:
    // 0x8007D258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007D25C: jal         0x800854F4
    // 0x8007D260: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
    alEvtqNextEvent(rdram, ctx);
        goto after_5;
    // 0x8007D260: addiu       $a1, $s1, 0x28
    ctx->r5 = ADD32(ctx->r17, 0X28);
    after_5:
    // 0x8007D264: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x8007D268: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007D26C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8007D270: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D274: jr          $ra
    // 0x8007D278: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8007D278: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void _sndpVoiceHandler(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D27C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8007D280: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007D284: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007D288: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007D28C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007D290: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007D294: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8007D298: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007D29C: addiu       $s1, $a0, 0x28
    ctx->r17 = ADD32(ctx->r4, 0X28);
    // 0x8007D2A0: addiu       $s2, $a0, 0x14
    ctx->r18 = ADD32(ctx->r4, 0X14);
    // 0x8007D2A4: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x8007D2A8: addiu       $s4, $sp, 0x3C
    ctx->r20 = ADD32(ctx->r29, 0X3C);
L_8007D2AC:
    // 0x8007D2AC: lh          $t6, 0x28($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X28);
    // 0x8007D2B0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8007D2B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007D2B8: bne         $s3, $t6, L_8007D2D8
    if (ctx->r19 != ctx->r14) {
        // 0x8007D2BC: nop
    
            goto L_8007D2D8;
    }
    // 0x8007D2BC: nop

    // 0x8007D2C0: sh          $s3, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r19;
    // 0x8007D2C4: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    // 0x8007D2C8: jal         0x80085580
    // 0x8007D2CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007D2CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x8007D2D0: b           L_8007D2E4
    // 0x8007D2D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
        goto L_8007D2E4;
    // 0x8007D2D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8007D2D8:
    // 0x8007D2D8: jal         0x8007D320
    // 0x8007D2DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    alSeqSetLoc2(rdram, ctx);
        goto after_1;
    // 0x8007D2DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x8007D2E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8007D2E4:
    // 0x8007D2E4: jal         0x800854F4
    // 0x8007D2E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    alEvtqNextEvent(rdram, ctx);
        goto after_2;
    // 0x8007D2E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8007D2EC: beq         $v0, $zero, L_8007D2AC
    if (ctx->r2 == 0) {
        // 0x8007D2F0: sw          $v0, 0x4C($s0)
        MEM_W(0X4C, ctx->r16) = ctx->r2;
            goto L_8007D2AC;
    }
    // 0x8007D2F0: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    // 0x8007D2F4: lw          $t7, 0x50($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X50);
    // 0x8007D2F8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8007D2FC: sw          $t8, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r24;
    // 0x8007D300: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8007D304: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007D308: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007D30C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007D310: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D314: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007D318: jr          $ra
    // 0x8007D31C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8007D31C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void alSeqSetLoc2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D320: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8007D324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007D328: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8007D32C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8007D330: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x8007D334: lw          $s0, 0x4($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X4);
    // 0x8007D338: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8007D33C: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x8007D340: beq         $at, $zero, L_8007D758
    if (ctx->r1 == 0) {
        // 0x8007D344: lw          $t0, 0x1C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X1C);
            goto L_8007D758;
    }
    // 0x8007D344: lw          $t0, 0x1C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1C);
    // 0x8007D348: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8007D34C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007D350: addu        $at, $at, $t6
    gpr jr_addend_8007D358 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8007D354: lw          $t6, 0x6940($at)
    ctx->r14 = ADD32(ctx->r1, 0X6940);
    // 0x8007D358: jr          $t6
    // 0x8007D35C: nop

    switch (jr_addend_8007D358 >> 2) {
        case 0: goto L_8007D360; break;
        case 1: goto L_8007D4AC; break;
        case 2: goto L_8007D544; break;
        case 3: goto L_8007D638; break;
        case 4: goto L_8007D5B4; break;
        case 5: goto L_8007D758; break;
        case 6: goto L_8007D6A0; break;
        case 7: goto L_8007D730; break;
        case 8: goto L_8007D60C; break;
        default: switch_error(__func__, 0x8007D358, 0x80096940);
    }
    // 0x8007D35C: nop

L_8007D360:
    // 0x8007D360: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x8007D364: bnel        $t7, $zero, L_8007D75C
    if (ctx->r15 != 0) {
        // 0x8007D368: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8007D75C;
    }
    goto skip_0;
    // 0x8007D368: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8007D36C: beq         $t0, $zero, L_8007D758
    if (ctx->r8 == 0) {
        // 0x8007D370: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8007D758;
    }
    // 0x8007D370: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D374: sh          $zero, 0x62($sp)
    MEM_H(0X62, ctx->r29) = 0;
    // 0x8007D378: lh          $t8, 0x20($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X20);
    // 0x8007D37C: sb          $zero, 0x64($sp)
    MEM_B(0X64, ctx->r29) = 0;
    // 0x8007D380: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    // 0x8007D384: sh          $t8, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r24;
    // 0x8007D388: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D38C: jal         0x80085A70
    // 0x8007D390: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    alSynAllocVoice(rdram, ctx);
        goto after_0;
    // 0x8007D390: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    after_0:
    // 0x8007D394: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8007D398: lh          $t1, 0x2C($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2C);
    // 0x8007D39C: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x8007D3A0: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x8007D3A4: addiu       $t8, $zero, 0x7F
    ctx->r24 = ADD32(0, 0X7F);
    // 0x8007D3A8: lbu         $t9, 0xC($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0XC);
    // 0x8007D3AC: multu       $t9, $t1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D3B0: mflo        $t2
    ctx->r10 = lo;
    // 0x8007D3B4: nop

    // 0x8007D3B8: nop

    // 0x8007D3BC: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8007D3C0: mflo        $t3
    ctx->r11 = lo;
    // 0x8007D3C4: sh          $t3, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r11;
    // 0x8007D3C8: lbu         $t4, 0x2E($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X2E);
    // 0x8007D3CC: lbu         $t5, 0xC($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0XC);
    // 0x8007D3D0: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x8007D3D4: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x8007D3D8: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8007D3DC: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8007D3E0: bgtzl       $v1, L_8007D3F0
    if (SIGNED(ctx->r3) > 0) {
        // 0x8007D3E4: slti        $at, $v1, 0x7F
        ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
            goto L_8007D3F0;
    }
    goto skip_1;
    // 0x8007D3E4: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
    skip_1:
    // 0x8007D3E8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007D3EC: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
L_8007D3F0:
    // 0x8007D3F0: beql        $at, $zero, L_8007D404
    if (ctx->r1 == 0) {
        // 0x8007D3F4: sb          $t8, 0x57($sp)
        MEM_B(0X57, ctx->r29) = ctx->r24;
            goto L_8007D404;
    }
    goto skip_2;
    // 0x8007D3F4: sb          $t8, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r24;
    skip_2:
    // 0x8007D3F8: b           L_8007D404
    // 0x8007D3FC: sb          $v1, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r3;
        goto L_8007D404;
    // 0x8007D3FC: sb          $v1, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r3;
    // 0x8007D400: sb          $t8, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r24;
L_8007D404:
    // 0x8007D404: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8007D408: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D40C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x8007D410: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x8007D414: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8007D418: lw          $a2, 0x8($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X8);
    // 0x8007D41C: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D420: jal         0x80085D30
    // 0x8007D424: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    alSynStartVoice(rdram, ctx);
        goto after_1;
    // 0x8007D424: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    after_1:
    // 0x8007D428: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8007D42C: sw          $t1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r9;
    // 0x8007D430: lbu         $a2, 0x57($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X57);
    // 0x8007D434: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D438: jal         0x80075020
    // 0x8007D43C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynSetPan(rdram, ctx);
        goto after_2;
    // 0x8007D43C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8007D440: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D444: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D448: lh          $a2, 0x3A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3A);
    // 0x8007D44C: jal         0x80085940
    // 0x8007D450: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    alSynSetVol(rdram, ctx);
        goto after_3;
    // 0x8007D450: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    after_3:
    // 0x8007D454: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D458: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D45C: jal         0x800859E0
    // 0x8007D460: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    alSynSetPitch(rdram, ctx);
        goto after_4;
    // 0x8007D460: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_4:
    // 0x8007D464: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D468: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D46C: jal         0x80085C90
    // 0x8007D470: lbu         $a2, 0x2F($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X2F);
    alSynSetFXMix(rdram, ctx);
        goto after_5;
    // 0x8007D470: lbu         $a2, 0x2F($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X2F);
    after_5:
    // 0x8007D474: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x8007D478: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x8007D47C: sh          $t2, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r10;
    // 0x8007D480: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x8007D484: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x8007D488: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8007D48C: jal         0x8007D80C
    // 0x8007D490: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    __alDivFloatClamp(rdram, ctx);
        goto after_6;
    // 0x8007D490: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    after_6:
    // 0x8007D494: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8007D498: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8007D49C: jal         0x80085580
    // 0x8007D4A0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_7;
    // 0x8007D4A0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_7:
    // 0x8007D4A4: b           L_8007D75C
    // 0x8007D4A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8007D75C;
    // 0x8007D4A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007D4AC:
    // 0x8007D4AC: lw          $t4, 0x28($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X28);
    // 0x8007D4B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007D4B4: bnel        $t4, $at, L_8007D75C
    if (ctx->r12 != ctx->r1) {
        // 0x8007D4B8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8007D75C;
    }
    goto skip_3;
    // 0x8007D4B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x8007D4BC: beql        $t0, $zero, L_8007D75C
    if (ctx->r8 == 0) {
        // 0x8007D4C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8007D75C;
    }
    goto skip_4;
    // 0x8007D4C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x8007D4C4: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x8007D4C8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8007D4CC: jal         0x8007D80C
    // 0x8007D4D0: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    __alDivFloatClamp(rdram, ctx);
        goto after_8;
    // 0x8007D4D0: lw          $a0, 0x8($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X8);
    after_8:
    // 0x8007D4D4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8007D4D8: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D4DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D4E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007D4E4: jal         0x80085940
    // 0x8007D4E8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_9;
    // 0x8007D4E8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_9:
    // 0x8007D4EC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8007D4F0: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8007D4F4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8007D4F8: beq         $a2, $zero, L_8007D51C
    if (ctx->r6 == 0) {
        // 0x8007D4FC: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8007D51C;
    }
    // 0x8007D4FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D500: sh          $t6, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r14;
    // 0x8007D504: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x8007D508: jal         0x80085580
    // 0x8007D50C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    alEvtqPostEvent(rdram, ctx);
        goto after_10;
    // 0x8007D50C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_10:
    // 0x8007D510: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8007D514: b           L_8007D758
    // 0x8007D518: sw          $t7, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r15;
        goto L_8007D758;
    // 0x8007D518: sw          $t7, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r15;
L_8007D51C:
    // 0x8007D51C: jal         0x80085810
    // 0x8007D520: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    alSynStopVoice(rdram, ctx);
        goto after_11;
    // 0x8007D520: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    after_11:
    // 0x8007D524: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D528: jal         0x80085890
    // 0x8007D52C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynFreeVoice(rdram, ctx);
        goto after_12;
    // 0x8007D52C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
    // 0x8007D530: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8007D534: jal         0x8007D76C
    // 0x8007D538: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alEvtqRemoveEvent(rdram, ctx);
        goto after_13;
    // 0x8007D538: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x8007D53C: b           L_8007D758
    // 0x8007D540: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
        goto L_8007D758;
    // 0x8007D540: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
L_8007D544:
    // 0x8007D544: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    // 0x8007D548: lbu         $t8, 0x8($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X8);
    // 0x8007D54C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007D550: bne         $t9, $at, L_8007D758
    if (ctx->r25 != ctx->r1) {
        // 0x8007D554: sb          $t8, 0x2E($s0)
        MEM_B(0X2E, ctx->r16) = ctx->r24;
            goto L_8007D758;
    }
    // 0x8007D554: sb          $t8, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r24;
    // 0x8007D558: beq         $t0, $zero, L_8007D758
    if (ctx->r8 == 0) {
        // 0x8007D55C: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8007D758;
    }
    // 0x8007D55C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D560: lbu         $t2, 0xC($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0XC);
    // 0x8007D564: andi        $t1, $t8, 0xFF
    ctx->r9 = ctx->r24 & 0XFF;
    // 0x8007D568: addiu       $t5, $zero, 0x7F
    ctx->r13 = ADD32(0, 0X7F);
    // 0x8007D56C: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x8007D570: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x8007D574: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x8007D578: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8007D57C: bgtzl       $v1, L_8007D58C
    if (SIGNED(ctx->r3) > 0) {
        // 0x8007D580: slti        $at, $v1, 0x7F
        ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
            goto L_8007D58C;
    }
    goto skip_5;
    // 0x8007D580: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
    skip_5:
    // 0x8007D584: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007D588: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
L_8007D58C:
    // 0x8007D58C: beql        $at, $zero, L_8007D5A0
    if (ctx->r1 == 0) {
        // 0x8007D590: sb          $t5, 0x57($sp)
        MEM_B(0X57, ctx->r29) = ctx->r13;
            goto L_8007D5A0;
    }
    goto skip_6;
    // 0x8007D590: sb          $t5, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r13;
    skip_6:
    // 0x8007D594: b           L_8007D5A0
    // 0x8007D598: sb          $v1, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r3;
        goto L_8007D5A0;
    // 0x8007D598: sb          $v1, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r3;
    // 0x8007D59C: sb          $t5, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r13;
L_8007D5A0:
    // 0x8007D5A0: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D5A4: jal         0x80075020
    // 0x8007D5A8: lbu         $a2, 0x57($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X57);
    alSynSetPan(rdram, ctx);
        goto after_14;
    // 0x8007D5A8: lbu         $a2, 0x57($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X57);
    after_14:
    // 0x8007D5AC: b           L_8007D75C
    // 0x8007D5B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8007D75C;
    // 0x8007D5B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007D5B4:
    // 0x8007D5B4: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x8007D5B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007D5BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D5C0: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x8007D5C4: ldc1        $f8, 0x6968($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X6968);
    // 0x8007D5C8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8007D5CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007D5D0: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x8007D5D4: nop

    // 0x8007D5D8: bc1fl       L_8007D5EC
    if (!c1cs) {
        // 0x8007D5DC: lw          $t6, 0x28($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X28);
            goto L_8007D5EC;
    }
    goto skip_7;
    // 0x8007D5DC: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    skip_7:
    // 0x8007D5E0: lwc1        $f10, 0x6970($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6970);
    // 0x8007D5E4: swc1        $f10, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f10.u32l;
    // 0x8007D5E8: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
L_8007D5EC:
    // 0x8007D5EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007D5F0: bnel        $t6, $at, L_8007D75C
    if (ctx->r14 != ctx->r1) {
        // 0x8007D5F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8007D75C;
    }
    goto skip_8;
    // 0x8007D5F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x8007D5F8: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D5FC: jal         0x800859E0
    // 0x8007D600: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    alSynSetPitch(rdram, ctx);
        goto after_15;
    // 0x8007D600: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    after_15:
    // 0x8007D604: b           L_8007D75C
    // 0x8007D608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8007D75C;
    // 0x8007D608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007D60C:
    // 0x8007D60C: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x8007D610: lbu         $t7, 0x8($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X8);
    // 0x8007D614: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007D618: bne         $t8, $at, L_8007D758
    if (ctx->r24 != ctx->r1) {
        // 0x8007D61C: sb          $t7, 0x2F($s0)
        MEM_B(0X2F, ctx->r16) = ctx->r15;
            goto L_8007D758;
    }
    // 0x8007D61C: sb          $t7, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = ctx->r15;
    // 0x8007D620: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D624: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D628: jal         0x80085C90
    // 0x8007D62C: andi        $a2, $t7, 0xFF
    ctx->r6 = ctx->r15 & 0XFF;
    alSynSetFXMix(rdram, ctx);
        goto after_16;
    // 0x8007D62C: andi        $a2, $t7, 0xFF
    ctx->r6 = ctx->r15 & 0XFF;
    after_16:
    // 0x8007D630: b           L_8007D75C
    // 0x8007D634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8007D75C;
    // 0x8007D634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007D638:
    // 0x8007D638: lw          $t1, 0x28($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X28);
    // 0x8007D63C: lh          $t9, 0x8($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X8);
    // 0x8007D640: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007D644: bne         $t1, $at, L_8007D758
    if (ctx->r9 != ctx->r1) {
        // 0x8007D648: sh          $t9, 0x2C($s0)
        MEM_H(0X2C, ctx->r16) = ctx->r25;
            goto L_8007D758;
    }
    // 0x8007D648: sh          $t9, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r25;
    // 0x8007D64C: beql        $t0, $zero, L_8007D75C
    if (ctx->r8 == 0) {
        // 0x8007D650: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8007D75C;
    }
    goto skip_9;
    // 0x8007D650: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
    // 0x8007D654: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x8007D658: lh          $t4, 0x2C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2C);
    // 0x8007D65C: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x8007D660: lbu         $t3, 0xD($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0XD);
    // 0x8007D664: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D668: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D66C: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D670: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    // 0x8007D674: mflo        $v1
    ctx->r3 = lo;
    // 0x8007D678: nop

    // 0x8007D67C: nop

    // 0x8007D680: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x8007D684: mflo        $t5
    ctx->r13 = lo;
    // 0x8007D688: sll         $a2, $t5, 16
    ctx->r6 = S32(ctx->r13 << 16);
    // 0x8007D68C: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8007D690: jal         0x80085940
    // 0x8007D694: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    alSynSetVol(rdram, ctx);
        goto after_17;
    // 0x8007D694: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_17:
    // 0x8007D698: b           L_8007D75C
    // 0x8007D69C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8007D75C;
    // 0x8007D69C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007D6A0:
    // 0x8007D6A0: lw          $a3, 0x0($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X0);
    // 0x8007D6A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007D6A8: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x8007D6AC: beql        $a0, $at, L_8007D75C
    if (ctx->r4 == ctx->r1) {
        // 0x8007D6B0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8007D75C;
    }
    goto skip_10;
    // 0x8007D6B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_10:
    // 0x8007D6B4: lbu         $t7, 0xD($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0XD);
    // 0x8007D6B8: lh          $t8, 0x2C($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2C);
    // 0x8007D6BC: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x8007D6C0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8007D6C4: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D6C8: mflo        $v1
    ctx->r3 = lo;
    // 0x8007D6CC: nop

    // 0x8007D6D0: nop

    // 0x8007D6D4: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x8007D6D8: mflo        $t9
    ctx->r25 = lo;
    // 0x8007D6DC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007D6E0: jal         0x8007D80C
    // 0x8007D6E4: nop

    __alDivFloatClamp(rdram, ctx);
        goto after_18;
    // 0x8007D6E4: nop

    after_18:
    // 0x8007D6E8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8007D6EC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8007D6F0: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D6F4: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x8007D6F8: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8007D6FC: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8007D700: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007D704: jal         0x80085940
    // 0x8007D708: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_19;
    // 0x8007D708: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_19:
    // 0x8007D70C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8007D710: sh          $t2, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r10;
    // 0x8007D714: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x8007D718: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8007D71C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8007D720: jal         0x80085580
    // 0x8007D724: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    alEvtqPostEvent(rdram, ctx);
        goto after_20;
    // 0x8007D724: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_20:
    // 0x8007D728: b           L_8007D75C
    // 0x8007D72C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8007D75C;
    // 0x8007D72C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007D730:
    // 0x8007D730: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D734: jal         0x80085810
    // 0x8007D738: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynStopVoice(rdram, ctx);
        goto after_21;
    // 0x8007D738: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_21:
    // 0x8007D73C: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x8007D740: jal         0x80085890
    // 0x8007D744: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynFreeVoice(rdram, ctx);
        goto after_22;
    // 0x8007D744: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_22:
    // 0x8007D748: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8007D74C: jal         0x8007D76C
    // 0x8007D750: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alEvtqRemoveEvent(rdram, ctx);
        goto after_23;
    // 0x8007D750: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_23:
    // 0x8007D754: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
L_8007D758:
    // 0x8007D758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007D75C:
    // 0x8007D75C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8007D760: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8007D764: jr          $ra
    // 0x8007D768: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8007D768: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void alEvtqRemoveEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D76C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007D770: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8007D774: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8007D778: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007D77C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8007D780: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8007D784: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8007D788: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8007D78C: jal         0x80075ED0
    // 0x8007D790: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8007D790: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8007D794: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8007D798: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x8007D79C: beq         $s0, $zero, L_8007D7E8
    if (ctx->r16 == 0) {
        // 0x8007D7A0: nop
    
            goto L_8007D7E8;
    }
    // 0x8007D7A0: nop

L_8007D7A4:
    // 0x8007D7A4: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x8007D7A8: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8007D7AC: bne         $s3, $t6, L_8007D7E0
    if (ctx->r19 != ctx->r14) {
        // 0x8007D7B0: nop
    
            goto L_8007D7E0;
    }
    // 0x8007D7B0: nop

    // 0x8007D7B4: beq         $s1, $zero, L_8007D7CC
    if (ctx->r17 == 0) {
        // 0x8007D7B8: nop
    
            goto L_8007D7CC;
    }
    // 0x8007D7B8: nop

    // 0x8007D7BC: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x8007D7C0: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x8007D7C4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007D7C8: sw          $t9, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r25;
L_8007D7CC:
    // 0x8007D7CC: jal         0x8007DE20
    // 0x8007D7D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x8007D7D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8007D7D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007D7D8: jal         0x8007DDFC
    // 0x8007D7DC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x8007D7DC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
L_8007D7E0:
    // 0x8007D7E0: bne         $s1, $zero, L_8007D7A4
    if (ctx->r17 != 0) {
        // 0x8007D7E4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8007D7A4;
    }
    // 0x8007D7E4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8007D7E8:
    // 0x8007D7E8: jal         0x80075ED0
    // 0x8007D7EC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x8007D7EC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x8007D7F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007D7F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8007D7F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8007D7FC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D800: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8007D804: jr          $ra
    // 0x8007D808: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8007D808: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void __alDivFloatClamp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D80C: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8007D810: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8007D814: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007D818: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007D81C: ldc1        $f10, 0x6978($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X6978);
    // 0x8007D820: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x8007D824: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8007D828: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x8007D82C: c.lt.d      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.d < ctx->f0.d;
    // 0x8007D830: nop

    // 0x8007D834: bc1fl       L_8007D848
    if (!c1cs) {
        // 0x8007D838: trunc.w.d   $f16, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_D(ctx->f0.d);
            goto L_8007D848;
    }
    goto skip_0;
    // 0x8007D838: trunc.w.d   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_D(ctx->f0.d);
    skip_0:
    // 0x8007D83C: jr          $ra
    // 0x8007D840: ori         $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 | 0XFFFF;
    return;
    // 0x8007D840: ori         $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 | 0XFFFF;
    // 0x8007D844: trunc.w.d   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_D(ctx->f0.d);
L_8007D848:
    // 0x8007D848: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x8007D84C: nop

    // 0x8007D850: jr          $ra
    // 0x8007D854: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8007D854: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void alSndpAllocate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D860: lw          $a2, 0x44($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X44);
    // 0x8007D864: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8007D868: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007D86C: blez        $a2, L_8007D8F0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8007D870: addiu       $a3, $zero, 0x30
        ctx->r7 = ADD32(0, 0X30);
            goto L_8007D8F0;
    }
    // 0x8007D870: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
L_8007D874:
    // 0x8007D874: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D878: mflo        $t6
    ctx->r14 = lo;
    // 0x8007D87C: addu        $a0, $v0, $t6
    ctx->r4 = ADD32(ctx->r2, ctx->r14);
    // 0x8007D880: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x8007D884: bne         $t7, $zero, L_8007D8D8
    if (ctx->r15 != 0) {
        // 0x8007D888: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8007D8D8;
    }
    // 0x8007D888: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007D88C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007D890: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8007D894: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x8007D898: sw          $a1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r5;
    // 0x8007D89C: sh          $t8, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r24;
    // 0x8007D8A0: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8007D8A4: sb          $t9, 0x2E($a0)
    MEM_B(0X2E, ctx->r4) = ctx->r25;
    // 0x8007D8A8: sb          $zero, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = 0;
    // 0x8007D8AC: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x8007D8B0: lbu         $t0, 0xD($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0XD);
    // 0x8007D8B4: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x8007D8B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8007D8BC: sll         $t1, $t0, 15
    ctx->r9 = S32(ctx->r8 << 15);
    // 0x8007D8C0: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8007D8C4: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8007D8C8: mflo        $t2
    ctx->r10 = lo;
    // 0x8007D8CC: sh          $t2, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r10;
    // 0x8007D8D0: jr          $ra
    // 0x8007D8D4: nop

    return;
    // 0x8007D8D4: nop

L_8007D8D8:
    // 0x8007D8D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007D8DC: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x8007D8E0: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8007D8E4: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8007D8E8: bne         $at, $zero, L_8007D874
    if (ctx->r1 != 0) {
        // 0x8007D8EC: nop
    
            goto L_8007D874;
    }
    // 0x8007D8EC: nop

L_8007D8F0:
    // 0x8007D8F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8007D8F4: jr          $ra
    // 0x8007D8F8: nop

    return;
    // 0x8007D8F8: nop

;}
RECOMP_FUNC void alSndpSetPriority(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D900: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8007D904: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8007D908: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8007D90C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8007D910: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8007D914: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x8007D918: subu        $t9, $t9, $t7
    ctx->r25 = SUB32(ctx->r25, ctx->r15);
    // 0x8007D91C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8007D920: andi        $t8, $a2, 0xFF
    ctx->r24 = ctx->r6 & 0XFF;
    // 0x8007D924: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x8007D928: jr          $ra
    // 0x8007D92C: sh          $t8, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r24;
    return;
    // 0x8007D92C: sh          $t8, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r24;
;}
RECOMP_FUNC void alSndpSetSound(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D930: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8007D934: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8007D938: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8007D93C: jr          $ra
    // 0x8007D940: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
    return;
    // 0x8007D940: sw          $t7, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void alSndpPlay(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D950: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007D954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D958: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x8007D95C: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x8007D960: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8007D964: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D968: mflo        $t7
    ctx->r15 = lo;
    // 0x8007D96C: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8007D970: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x8007D974: bnel        $t9, $zero, L_8007D9A8
    if (ctx->r25 != 0) {
        // 0x8007D978: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007D9A8;
    }
    goto skip_0;
    // 0x8007D978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8007D97C: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x8007D980: lw          $t0, 0x3C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X3C);
    // 0x8007D984: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8007D988: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8007D98C: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D990: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007D994: mflo        $t1
    ctx->r9 = lo;
    // 0x8007D998: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8007D99C: jal         0x80085580
    // 0x8007D9A0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007D9A0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    after_0:
    // 0x8007D9A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007D9A8:
    // 0x8007D9A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007D9AC: jr          $ra
    // 0x8007D9B0: nop

    return;
    // 0x8007D9B0: nop

;}
RECOMP_FUNC void alSndpSetPitch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D9C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007D9C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D9C8: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8007D9CC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8007D9D0: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x8007D9D4: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x8007D9D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8007D9DC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8007D9E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007D9E4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8007D9E8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007D9EC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8007D9F0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007D9F4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8007D9F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007D9FC: jal         0x80085580
    // 0x8007DA00: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007DA00: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8007DA04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007DA08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007DA0C: jr          $ra
    // 0x8007DA10: nop

    return;
    // 0x8007DA10: nop

;}
RECOMP_FUNC void alSndpSetVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DA20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007DA24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DA28: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8007DA2C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8007DA30: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8007DA34: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x8007DA38: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x8007DA3C: lh          $t0, 0x36($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X36);
    // 0x8007DA40: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8007DA44: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007DA48: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8007DA4C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007DA50: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8007DA54: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007DA58: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8007DA5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007DA60: jal         0x80085580
    // 0x8007DA64: sh          $t0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r8;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007DA64: sh          $t0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r8;
    after_0:
    // 0x8007DA68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007DA6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007DA70: jr          $ra
    // 0x8007DA74: nop

    return;
    // 0x8007DA74: nop

;}
RECOMP_FUNC void alSndpSetFXMix(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DA80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007DA84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DA88: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8007DA8C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8007DA90: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8007DA94: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x8007DA98: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x8007DA9C: lbu         $t0, 0x37($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X37);
    // 0x8007DAA0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8007DAA4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007DAA8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8007DAAC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007DAB0: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8007DAB4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007DAB8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8007DABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007DAC0: jal         0x80085580
    // 0x8007DAC4: sb          $t0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r8;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007DAC4: sb          $t0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r8;
    after_0:
    // 0x8007DAC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007DACC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007DAD0: jr          $ra
    // 0x8007DAD4: nop

    return;
    // 0x8007DAD4: nop

;}
RECOMP_FUNC void alSndpSetPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DAE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007DAE4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8007DAE8: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x8007DAEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DAF0: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8007DAF4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8007DAF8: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x8007DAFC: sb          $t7, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r15;
    // 0x8007DB00: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x8007DB04: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8007DB08: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8007DB0C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8007DB10: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8007DB14: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8007DB18: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x8007DB1C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x8007DB20: jal         0x80085580
    // 0x8007DB24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007DB24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007DB28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007DB2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007DB30: jr          $ra
    // 0x8007DB34: nop

    return;
    // 0x8007DB34: nop

;}
RECOMP_FUNC void alSndpGetSound(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DB40: jr          $ra
    // 0x8007DB44: lh          $v0, 0x3E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3E);
    return;
    // 0x8007DB44: lh          $v0, 0x3E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3E);
;}
RECOMP_FUNC void alSndpGetState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DB50: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x8007DB54: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x8007DB58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007DB5C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8007DB60: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007DB64: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x8007DB68: jr          $ra
    // 0x8007DB6C: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
    return;
    // 0x8007DB6C: lw          $v0, 0x28($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X28);
;}
RECOMP_FUNC void alSndpDeallocate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DB70: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8007DB74: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8007DB78: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8007DB7C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8007DB80: sll         $v1, $t7, 2
    ctx->r3 = S32(ctx->r15 << 2);
    // 0x8007DB84: subu        $v1, $v1, $t7
    ctx->r3 = SUB32(ctx->r3, ctx->r15);
    // 0x8007DB88: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8007DB8C: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
    // 0x8007DB90: lw          $t9, 0x28($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X28);
    // 0x8007DB94: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
    // 0x8007DB98: bne         $t9, $zero, L_8007DBB8
    if (ctx->r25 != 0) {
        // 0x8007DB9C: nop
    
            goto L_8007DBB8;
    }
    // 0x8007DB9C: nop

    // 0x8007DBA0: sw          $zero, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = 0;
    // 0x8007DBA4: lw          $t1, 0x3C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X3C);
    // 0x8007DBA8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8007DBAC: bne         $t7, $t1, L_8007DBB8
    if (ctx->r15 != ctx->r9) {
        // 0x8007DBB0: nop
    
            goto L_8007DBB8;
    }
    // 0x8007DBB0: nop

    // 0x8007DBB4: sw          $t2, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r10;
L_8007DBB8:
    // 0x8007DBB8: jr          $ra
    // 0x8007DBBC: nop

    return;
    // 0x8007DBBC: nop

;}
RECOMP_FUNC void alSndpStop(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DBC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007DBC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DBC8: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x8007DBCC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007DBD0: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x8007DBD4: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x8007DBD8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8007DBDC: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8007DBE0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007DBE4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8007DBE8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007DBEC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8007DBF0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007DBF4: jal         0x80085580
    // 0x8007DBF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x8007DBF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007DBFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007DC00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007DC04: jr          $ra
    // 0x8007DC08: nop

    return;
    // 0x8007DC08: nop

;}
RECOMP_FUNC void guRandom(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DC10: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8007DC14: lw          $a0, 0x44A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X44A0);
    // 0x8007DC18: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007DC1C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8007DC20: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x8007DC24: addiu       $t8, $t6, 0x3
    ctx->r24 = ADD32(ctx->r14, 0X3);
    // 0x8007DC28: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007DC2C: mflo        $a1
    ctx->r5 = lo;
    // 0x8007DC30: srl         $v0, $a1, 2
    ctx->r2 = S32(U32(ctx->r5) >> 2);
    // 0x8007DC34: jr          $ra
    // 0x8007DC38: sw          $v0, 0x44A0($at)
    MEM_W(0X44A0, ctx->r1) = ctx->r2;
    return;
    // 0x8007DC38: sw          $v0, 0x44A0($at)
    MEM_W(0X44A0, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void alInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DD90: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8007DD94: addiu       $v0, $v0, 0x44B0
    ctx->r2 = ADD32(ctx->r2, 0X44B0);
    // 0x8007DD98: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8007DD9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007DDA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DDA4: bnel        $t6, $zero, L_8007DDB8
    if (ctx->r14 != 0) {
        // 0x8007DDA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007DDB8;
    }
    goto skip_0;
    // 0x8007DDA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8007DDAC: jal         0x8007DF70
    // 0x8007DDB0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    alSynNew(rdram, ctx);
        goto after_0;
    // 0x8007DDB0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    after_0:
    // 0x8007DDB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007DDB8:
    // 0x8007DDB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007DDBC: jr          $ra
    // 0x8007DDC0: nop

    return;
    // 0x8007DDC0: nop

;}
RECOMP_FUNC void alClose(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DDC4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8007DDC8: lw          $t6, 0x44B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X44B0);
    // 0x8007DDCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007DDD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DDD4: beql        $t6, $zero, L_8007DDF0
    if (ctx->r14 == 0) {
        // 0x8007DDD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007DDF0;
    }
    goto skip_0;
    // 0x8007DDD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8007DDDC: jal         0x80085DC0
    // 0x8007DDE0: nop

    alSynDelete(rdram, ctx);
        goto after_0;
    // 0x8007DDE0: nop

    after_0:
    // 0x8007DDE4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007DDE8: sw          $zero, 0x44B0($at)
    MEM_W(0X44B0, ctx->r1) = 0;
    // 0x8007DDEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007DDF0:
    // 0x8007DDF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007DDF4: jr          $ra
    // 0x8007DDF8: nop

    return;
    // 0x8007DDF8: nop

;}
RECOMP_FUNC void alLink(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DDFC: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8007DE00: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x8007DE04: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8007DE08: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8007DE0C: beq         $v0, $zero, L_8007DE18
    if (ctx->r2 == 0) {
        // 0x8007DE10: nop
    
            goto L_8007DE18;
    }
    // 0x8007DE10: nop

    // 0x8007DE14: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
L_8007DE18:
    // 0x8007DE18: jr          $ra
    // 0x8007DE1C: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    return;
    // 0x8007DE1C: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void alUnlink(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DE20: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8007DE24: beql        $v0, $zero, L_8007DE38
    if (ctx->r2 == 0) {
        // 0x8007DE28: lw          $v0, 0x4($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X4);
            goto L_8007DE38;
    }
    goto skip_0;
    // 0x8007DE28: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    skip_0:
    // 0x8007DE2C: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8007DE30: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8007DE34: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
L_8007DE38:
    // 0x8007DE38: beq         $v0, $zero, L_8007DE48
    if (ctx->r2 == 0) {
        // 0x8007DE3C: nop
    
            goto L_8007DE48;
    }
    // 0x8007DE3C: nop

    // 0x8007DE40: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x8007DE44: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_8007DE48:
    // 0x8007DE48: jr          $ra
    // 0x8007DE4C: nop

    return;
    // 0x8007DE4C: nop

;}
RECOMP_FUNC void alSynNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DF70: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8007DF74: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8007DF78: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8007DF7C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8007DF80: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8007DF84: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8007DF88: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8007DF8C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8007DF90: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8007DF94: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8007DF98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8007DF9C: lw          $s7, 0x14($a1)
    ctx->r23 = MEM_W(ctx->r5, 0X14);
    // 0x8007DFA0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8007DFA4: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8007DFA8: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x8007DFAC: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x8007DFB0: sw          $t6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r14;
    // 0x8007DFB4: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x8007DFB8: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x8007DFBC: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
    // 0x8007DFC0: sw          $t7, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r15;
    // 0x8007DFC4: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x8007DFC8: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x8007DFCC: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x8007DFD0: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x8007DFD4: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
    // 0x8007DFD8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8007DFDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007DFE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007DFE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8007DFE8: jal         0x8007ABD0
    // 0x8007DFEC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8007DFEC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_0:
    // 0x8007DFF0: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8007DFF4: jal         0x80086620
    // 0x8007DFF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    alSaveNew(rdram, ctx);
        goto after_1;
    // 0x8007DFF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8007DFFC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8007E000: addiu       $t2, $zero, 0x4C
    ctx->r10 = ADD32(0, 0X4C);
    // 0x8007E004: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007E008: sw          $t1, 0x38($s6)
    MEM_W(0X38, ctx->r22) = ctx->r9;
    // 0x8007E00C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8007E010: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E014: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x8007E018: jal         0x8007ABD0
    // 0x8007E01C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8007E01C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8007E020: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007E024: sw          $v0, 0x34($s6)
    MEM_W(0X34, ctx->r22) = ctx->r2;
    // 0x8007E028: sw          $t3, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->r11;
    // 0x8007E02C: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x8007E030: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8007E034: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8007E038: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007E03C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E040: jal         0x8007ABD0
    // 0x8007E044: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x8007E044: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_3:
    // 0x8007E048: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x8007E04C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8007E050: jal         0x80086578
    // 0x8007E054: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    alAuxBusNew(rdram, ctx);
        goto after_4;
    // 0x8007E054: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    after_4:
    // 0x8007E058: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x8007E05C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8007E060: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007E064: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E068: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x8007E06C: jal         0x8007ABD0
    // 0x8007E070: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x8007E070: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x8007E074: sw          $v0, 0x30($s6)
    MEM_W(0X30, ctx->r22) = ctx->r2;
    // 0x8007E078: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x8007E07C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8007E080: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8007E084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007E088: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E08C: jal         0x8007ABD0
    // 0x8007E090: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x8007E090: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_6:
    // 0x8007E094: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x8007E098: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8007E09C: jal         0x800865CC
    // 0x8007E0A0: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    alMainBusNew(rdram, ctx);
        goto after_7;
    // 0x8007E0A0: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    after_7:
    // 0x8007E0A4: lbu         $t7, 0x1C($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X1C);
    // 0x8007E0A8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8007E0AC: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x8007E0B0: beq         $t7, $zero, L_8007E0CC
    if (ctx->r15 == 0) {
        // 0x8007E0B4: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8007E0CC;
    }
    // 0x8007E0B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007E0B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E0BC: jal         0x80086670
    // 0x8007E0C0: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    alSynAllocFX(rdram, ctx);
        goto after_8;
    // 0x8007E0C0: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_8:
    // 0x8007E0C4: b           L_8007E0DC
    // 0x8007E0C8: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
        goto L_8007E0DC;
    // 0x8007E0C8: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
L_8007E0CC:
    // 0x8007E0CC: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x8007E0D0: jal         0x80086830
    // 0x8007E0D4: lw          $a2, 0x34($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X34);
    alMainBusParam(rdram, ctx);
        goto after_9;
    // 0x8007E0D4: lw          $a2, 0x34($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X34);
    after_9:
    // 0x8007E0D8: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
L_8007E0DC:
    // 0x8007E0DC: sw          $zero, 0x8($s6)
    MEM_W(0X8, ctx->r22) = 0;
    // 0x8007E0E0: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    // 0x8007E0E4: sw          $zero, 0x18($s6)
    MEM_W(0X18, ctx->r22) = 0;
    // 0x8007E0E8: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x8007E0EC: sw          $zero, 0x10($s6)
    MEM_W(0X10, ctx->r22) = 0;
    // 0x8007E0F0: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x8007E0F4: addiu       $t8, $zero, 0xDC
    ctx->r24 = ADD32(0, 0XDC);
    // 0x8007E0F8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8007E0FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007E100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E104: jal         0x8007ABD0
    // 0x8007E108: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_10;
    // 0x8007E108: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_10:
    // 0x8007E10C: lw          $t9, 0x4($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X4);
    // 0x8007E110: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8007E114: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007E118: blez        $t9, L_8007E1D8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8007E11C: addiu       $a1, $s6, 0x4
        ctx->r5 = ADD32(ctx->r22, 0X4);
            goto L_8007E1D8;
    }
    // 0x8007E11C: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    // 0x8007E120: addiu       $s1, $v0, 0x8C
    ctx->r17 = ADD32(ctx->r2, 0X8C);
    // 0x8007E124: addiu       $s2, $v0, 0x58
    ctx->r18 = ADD32(ctx->r2, 0X58);
    // 0x8007E128: addiu       $s3, $v0, 0x10
    ctx->r19 = ADD32(ctx->r2, 0X10);
    // 0x8007E12C: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
L_8007E130:
    // 0x8007E130: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x8007E134: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x8007E138: jal         0x8007DDFC
    // 0x8007E13C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alLink(rdram, ctx);
        goto after_11;
    // 0x8007E13C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8007E140: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8007E144: lw          $a1, 0x24($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X24);
    // 0x8007E148: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8007E14C: jal         0x80086444
    // 0x8007E150: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alLoadNew(rdram, ctx);
        goto after_12;
    // 0x8007E150: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_12:
    // 0x8007E154: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8007E158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E15C: jal         0x80087064
    // 0x8007E160: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alLoadParam(rdram, ctx);
        goto after_13;
    // 0x8007E160: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x8007E164: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007E168: jal         0x800864EC
    // 0x8007E16C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    alResampleNew(rdram, ctx);
        goto after_14;
    // 0x8007E16C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_14:
    // 0x8007E170: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007E174: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E178: jal         0x80087588
    // 0x8007E17C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    alResampleParam(rdram, ctx);
        goto after_15;
    // 0x8007E17C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_15:
    // 0x8007E180: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007E184: jal         0x8008639C
    // 0x8007E188: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    alEnvmixerNew(rdram, ctx);
        goto after_16;
    // 0x8007E188: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_16:
    // 0x8007E18C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007E190: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E194: jal         0x80087B88
    // 0x8007E198: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    alEnvmixerParam(rdram, ctx);
        goto after_17;
    // 0x8007E198: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_17:
    // 0x8007E19C: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x8007E1A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007E1A4: jal         0x800883D8
    // 0x8007E1A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    alAuxBusParam(rdram, ctx);
        goto after_18;
    // 0x8007E1A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_18:
    // 0x8007E1AC: addiu       $t0, $s5, 0x8C
    ctx->r8 = ADD32(ctx->r21, 0X8C);
    // 0x8007E1B0: sw          $t0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r8;
    // 0x8007E1B4: lw          $t1, 0x4($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X4);
    // 0x8007E1B8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8007E1BC: addiu       $s0, $s0, 0xDC
    ctx->r16 = ADD32(ctx->r16, 0XDC);
    // 0x8007E1C0: slt         $at, $s4, $t1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8007E1C4: addiu       $s1, $s1, 0xDC
    ctx->r17 = ADD32(ctx->r17, 0XDC);
    // 0x8007E1C8: addiu       $s2, $s2, 0xDC
    ctx->r18 = ADD32(ctx->r18, 0XDC);
    // 0x8007E1CC: bne         $at, $zero, L_8007E130
    if (ctx->r1 != 0) {
        // 0x8007E1D0: addiu       $s3, $s3, 0xDC
        ctx->r19 = ADD32(ctx->r19, 0XDC);
            goto L_8007E130;
    }
    // 0x8007E1D0: addiu       $s3, $s3, 0xDC
    ctx->r19 = ADD32(ctx->r19, 0XDC);
    // 0x8007E1D4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_8007E1D8:
    // 0x8007E1D8: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8007E1DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E1E0: jal         0x8008849C
    // 0x8007E1E4: lw          $a2, 0x30($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X30);
    alSaveParam(rdram, ctx);
        goto after_19;
    // 0x8007E1E4: lw          $a2, 0x30($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X30);
    after_19:
    // 0x8007E1E8: lw          $a3, 0x8($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X8);
    // 0x8007E1EC: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x8007E1F0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8007E1F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007E1F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007E1FC: jal         0x8007ABD0
    // 0x8007E200: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_20;
    // 0x8007E200: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_20:
    // 0x8007E204: sw          $zero, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = 0;
    // 0x8007E208: lw          $t3, 0x8($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X8);
    // 0x8007E20C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8007E210: blezl       $t3, L_8007E240
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8007E214: sw          $s7, 0x28($s6)
        MEM_W(0X28, ctx->r22) = ctx->r23;
            goto L_8007E240;
    }
    goto skip_0;
    // 0x8007E214: sw          $s7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r23;
    skip_0:
    // 0x8007E218: lw          $t4, 0x2C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X2C);
L_8007E21C:
    // 0x8007E21C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8007E220: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x8007E224: sw          $v1, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = ctx->r3;
    // 0x8007E228: lw          $t5, 0x8($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X8);
    // 0x8007E22C: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x8007E230: slt         $at, $s4, $t5
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8007E234: bnel        $at, $zero, L_8007E21C
    if (ctx->r1 != 0) {
        // 0x8007E238: lw          $t4, 0x2C($s6)
        ctx->r12 = MEM_W(ctx->r22, 0X2C);
            goto L_8007E21C;
    }
    goto skip_1;
    // 0x8007E238: lw          $t4, 0x2C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X2C);
    skip_1:
    // 0x8007E23C: sw          $s7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r23;
L_8007E240:
    // 0x8007E240: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8007E244: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8007E248: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8007E24C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8007E250: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8007E254: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8007E258: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8007E25C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8007E260: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8007E264: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8007E268: jr          $ra
    // 0x8007E26C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8007E26C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void alAudioFrame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E270: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8007E274: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8007E278: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x8007E27C: lw          $s2, 0x44B0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X44B0);
    // 0x8007E280: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8007E284: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8007E288: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x8007E28C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8007E290: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8007E294: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8007E298: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8007E29C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8007E2A0: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x8007E2A4: sh          $zero, 0x62($sp)
    MEM_H(0X62, ctx->r29) = 0;
    // 0x8007E2A8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x8007E2AC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8007E2B0: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x8007E2B4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8007E2B8: bne         $t6, $zero, L_8007E2CC
    if (ctx->r14 != 0) {
        // 0x8007E2BC: or          $s5, $a2, $zero
        ctx->r21 = ctx->r6 | 0;
            goto L_8007E2CC;
    }
    // 0x8007E2BC: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x8007E2C0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8007E2C4: b           L_8007E414
    // 0x8007E2C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8007E414;
    // 0x8007E2C8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8007E2CC:
    // 0x8007E2CC: addiu       $s0, $sp, 0x6C
    ctx->r16 = ADD32(ctx->r29, 0X6C);
    // 0x8007E2D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007E2D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007E2D8: jal         0x8007E594
    // 0x8007E2DC: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    __nextSampleTime(rdram, ctx);
        goto after_0;
    // 0x8007E2DC: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    after_0:
    // 0x8007E2E0: lw          $t8, 0x20($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X20);
    // 0x8007E2E4: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8007E2E8: addiu       $s1, $zero, -0x10
    ctx->r17 = ADD32(0, -0X10);
    // 0x8007E2EC: subu        $t9, $v0, $t8
    ctx->r25 = SUB32(ctx->r2, ctx->r24);
    // 0x8007E2F0: slt         $at, $t9, $s3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8007E2F4: beql        $at, $zero, L_8007E35C
    if (ctx->r1 == 0) {
        // 0x8007E2F8: lw          $t8, 0x1C($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X1C);
            goto L_8007E35C;
    }
    goto skip_0;
    // 0x8007E2F8: lw          $t8, 0x1C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X1C);
    skip_0:
    // 0x8007E2FC: lw          $t0, 0x1C($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X1C);
L_8007E300:
    // 0x8007E300: and         $t1, $t0, $s1
    ctx->r9 = ctx->r8 & ctx->r17;
    // 0x8007E304: sw          $t1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r9;
    // 0x8007E308: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x8007E30C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8007E310: jalr        $t9
    // 0x8007E314: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8007E314: nop

    after_1:
    // 0x8007E318: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007E31C: jal         0x8007E520
    // 0x8007E320: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    alAudioFrameMicrosToSamples(rdram, ctx);
        goto after_2;
    // 0x8007E320: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x8007E324: lw          $t3, 0x6C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X6C);
    // 0x8007E328: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007E32C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8007E330: lw          $t4, 0x10($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X10);
    // 0x8007E334: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8007E338: jal         0x8007E594
    // 0x8007E33C: sw          $t5, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r13;
    __nextSampleTime(rdram, ctx);
        goto after_3;
    // 0x8007E33C: sw          $t5, 0x10($t3)
    MEM_W(0X10, ctx->r11) = ctx->r13;
    after_3:
    // 0x8007E340: lw          $t6, 0x20($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X20);
    // 0x8007E344: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8007E348: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x8007E34C: slt         $at, $t7, $s3
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8007E350: bnel        $at, $zero, L_8007E300
    if (ctx->r1 != 0) {
        // 0x8007E354: lw          $t0, 0x1C($s2)
        ctx->r8 = MEM_W(ctx->r18, 0X1C);
            goto L_8007E300;
    }
    goto skip_1;
    // 0x8007E354: lw          $t0, 0x1C($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X1C);
    skip_1:
    // 0x8007E358: lw          $t8, 0x1C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X1C);
L_8007E35C:
    // 0x8007E35C: addiu       $s1, $zero, -0x10
    ctx->r17 = ADD32(0, -0X10);
    // 0x8007E360: addiu       $s7, $sp, 0x62
    ctx->r23 = ADD32(ctx->r29, 0X62);
    // 0x8007E364: and         $t0, $t8, $s1
    ctx->r8 = ctx->r24 & ctx->r17;
    // 0x8007E368: blez        $s3, L_8007E3F4
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8007E36C: sw          $t0, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = ctx->r8;
            goto L_8007E3F4;
    }
    // 0x8007E36C: sw          $t0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r8;
    // 0x8007E370: lui         $s6, 0x700
    ctx->r22 = S32(0X700 << 16);
L_8007E374:
    // 0x8007E374: lw          $v0, 0x48($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X48);
    // 0x8007E378: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x8007E37C: slt         $at, $v0, $s3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8007E380: beq         $at, $zero, L_8007E390
    if (ctx->r1 == 0) {
        // 0x8007E384: nop
    
            goto L_8007E390;
    }
    // 0x8007E384: nop

    // 0x8007E388: b           L_8007E390
    // 0x8007E38C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_8007E390;
    // 0x8007E38C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8007E390:
    // 0x8007E390: sw          $s6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r22;
    // 0x8007E394: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x8007E398: lw          $s1, 0x38($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X38);
    // 0x8007E39C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8007E3A0: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8007E3A4: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x8007E3A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007E3AC: jalr        $t9
    // 0x8007E3B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8007E3B0: nop

    after_4:
    // 0x8007E3B4: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x8007E3B8: addiu       $t1, $s4, 0x8
    ctx->r9 = ADD32(ctx->r20, 0X8);
    // 0x8007E3BC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8007E3C0: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x8007E3C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8007E3C8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x8007E3CC: jalr        $t9
    // 0x8007E3D0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x8007E3D0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x8007E3D4: lw          $t5, 0x20($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X20);
    // 0x8007E3D8: subu        $s3, $s3, $s0
    ctx->r19 = SUB32(ctx->r19, ctx->r16);
    // 0x8007E3DC: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x8007E3E0: addu        $t3, $t5, $s0
    ctx->r11 = ADD32(ctx->r13, ctx->r16);
    // 0x8007E3E4: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x8007E3E8: addu        $s5, $s5, $t4
    ctx->r21 = ADD32(ctx->r21, ctx->r12);
    // 0x8007E3EC: bgtz        $s3, L_8007E374
    if (SIGNED(ctx->r19) > 0) {
        // 0x8007E3F0: sw          $t3, 0x20($s2)
        MEM_W(0X20, ctx->r18) = ctx->r11;
            goto L_8007E374;
    }
    // 0x8007E3F0: sw          $t3, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r11;
L_8007E3F4:
    // 0x8007E3F4: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x8007E3F8: lw          $t0, 0x74($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X74);
    // 0x8007E3FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8007E400: subu        $t7, $s4, $t6
    ctx->r15 = SUB32(ctx->r20, ctx->r14);
    // 0x8007E404: sra         $t8, $t7, 3
    ctx->r24 = S32(SIGNED(ctx->r15) >> 3);
    // 0x8007E408: jal         0x8007E488
    // 0x8007E40C: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    _collectPVoices(rdram, ctx);
        goto after_6;
    // 0x8007E40C: sw          $t8, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r24;
    after_6:
    // 0x8007E410: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
L_8007E414:
    // 0x8007E414: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8007E418: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E41C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8007E420: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8007E424: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8007E428: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8007E42C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8007E430: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x8007E434: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8007E438: jr          $ra
    // 0x8007E43C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8007E43C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void __allocParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E440: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8007E444: lw          $v0, 0x44B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44B0);
    // 0x8007E448: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007E44C: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x8007E450: beq         $a0, $zero, L_8007E468
    if (ctx->r4 == 0) {
        // 0x8007E454: nop
    
            goto L_8007E468;
    }
    // 0x8007E454: nop

    // 0x8007E458: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8007E45C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8007E460: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x8007E464: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_8007E468:
    // 0x8007E468: jr          $ra
    // 0x8007E46C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8007E46C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void __freeParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E470: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8007E474: lw          $v0, 0x44B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44B0);
    // 0x8007E478: lw          $t6, 0x2C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X2C);
    // 0x8007E47C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8007E480: jr          $ra
    // 0x8007E484: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
    return;
    // 0x8007E484: sw          $a0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r4;
;}
