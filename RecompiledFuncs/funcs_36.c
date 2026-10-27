#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void alSynAllocVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085A70: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80085A74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80085A78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80085A7C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80085A80: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80085A84: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    // 0x80085A88: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80085A8C: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x80085A90: lbu         $t7, 0x4($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4);
    // 0x80085A94: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x80085A98: sh          $t7, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r15;
    // 0x80085A9C: lh          $t8, 0x2($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X2);
    // 0x80085AA0: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x80085AA4: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x80085AA8: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x80085AAC: lh          $a2, 0x0($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X0);
    // 0x80085AB0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80085AB4: jal         0x80085BB0
    // 0x80085AB8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    _allocatePVoice(rdram, ctx);
        goto after_0;
    // 0x80085AB8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80085ABC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80085AC0: beql        $t9, $zero, L_80085B98
    if (ctx->r25 == 0) {
        // 0x80085AC4: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_80085B98;
    }
    goto skip_0;
    // 0x80085AC4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80085AC8: beq         $v0, $zero, L_80085B7C
    if (ctx->r2 == 0) {
        // 0x80085ACC: lw          $a0, 0xC($t9)
        ctx->r4 = MEM_W(ctx->r25, 0XC);
            goto L_80085B7C;
    }
    // 0x80085ACC: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x80085AD0: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x80085AD4: sw          $t0, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->r8;
    // 0x80085AD8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80085ADC: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x80085AE0: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
    // 0x80085AE4: jal         0x8007E440
    // 0x80085AE8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    __allocParam(rdram, ctx);
        goto after_1;
    // 0x80085AE8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x80085AEC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80085AF0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80085AF4: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x80085AF8: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x80085AFC: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x80085B00: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80085B04: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80085B08: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80085B0C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80085B10: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80085B14: lw          $t7, 0xD8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XD8);
    // 0x80085B18: addiu       $t8, $t7, -0x40
    ctx->r24 = ADD32(ctx->r15, -0X40);
    // 0x80085B1C: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x80085B20: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80085B24: jalr        $t9
    // 0x80085B28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80085B28: nop

    after_2:
    // 0x80085B2C: jal         0x8007E440
    // 0x80085B30: nop

    __allocParam(rdram, ctx);
        goto after_3;
    // 0x80085B30: nop

    after_3:
    // 0x80085B34: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80085B38: beq         $v0, $zero, L_80085B84
    if (ctx->r2 == 0) {
        // 0x80085B3C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80085B84;
    }
    // 0x80085B3C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80085B40: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80085B44: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80085B48: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x80085B4C: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x80085B50: lw          $t3, 0xD8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XD8);
    // 0x80085B54: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x80085B58: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80085B5C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80085B60: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80085B64: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80085B68: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80085B6C: jalr        $t9
    // 0x80085B70: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80085B70: nop

    after_4:
    // 0x80085B74: b           L_80085B88
    // 0x80085B78: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_80085B88;
    // 0x80085B78: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_80085B7C:
    // 0x80085B7C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80085B80: sw          $zero, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = 0;
L_80085B84:
    // 0x80085B84: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_80085B88:
    // 0x80085B88: sw          $s0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r16;
    // 0x80085B8C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80085B90: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x80085B94: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_80085B98:
    // 0x80085B98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80085B9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80085BA0: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x80085BA4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80085BA8: jr          $ra
    // 0x80085BAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80085BAC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void _allocatePVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085BB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80085BB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80085BB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80085BBC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80085BC0: lw          $a3, 0x14($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X14);
    // 0x80085BC4: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80085BC8: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80085BCC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80085BD0: beq         $a3, $zero, L_80085C00
    if (ctx->r7 == 0) {
        // 0x80085BD4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80085C00;
    }
    // 0x80085BD4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80085BD8: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x80085BDC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80085BE0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80085BE4: jal         0x8007DE20
    // 0x80085BE8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80085BE8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x80085BEC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80085BF0: jal         0x8007DDFC
    // 0x80085BF4: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    alLink(rdram, ctx);
        goto after_1;
    // 0x80085BF4: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    after_1:
    // 0x80085BF8: b           L_80085C78
    // 0x80085BFC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
        goto L_80085C78;
    // 0x80085BFC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_80085C00:
    // 0x80085C00: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x80085C04: beq         $a3, $zero, L_80085C30
    if (ctx->r7 == 0) {
        // 0x80085C08: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80085C30;
    }
    // 0x80085C08: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80085C0C: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x80085C10: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80085C14: jal         0x8007DE20
    // 0x80085C18: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    alUnlink(rdram, ctx);
        goto after_2;
    // 0x80085C18: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x80085C1C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80085C20: jal         0x8007DDFC
    // 0x80085C24: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    alLink(rdram, ctx);
        goto after_3;
    // 0x80085C24: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    after_3:
    // 0x80085C28: b           L_80085C78
    // 0x80085C2C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
        goto L_80085C78;
    // 0x80085C2C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_80085C30:
    // 0x80085C30: lw          $a3, 0xC($s0)
    ctx->r7 = MEM_W(ctx->r16, 0XC);
    // 0x80085C34: beql        $a3, $zero, L_80085C7C
    if (ctx->r7 == 0) {
        // 0x80085C38: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80085C7C;
    }
    goto skip_0;
    // 0x80085C38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80085C3C: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
L_80085C40:
    // 0x80085C40: lh          $t9, 0x16($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X16);
    // 0x80085C44: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80085C48: bnel        $at, $zero, L_80085C70
    if (ctx->r1 != 0) {
        // 0x80085C4C: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_80085C70;
    }
    goto skip_1;
    // 0x80085C4C: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_1:
    // 0x80085C50: lw          $t0, 0xD8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XD8);
    // 0x80085C54: bnel        $t0, $zero, L_80085C70
    if (ctx->r8 != 0) {
        // 0x80085C58: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_80085C70;
    }
    goto skip_2;
    // 0x80085C58: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_2:
    // 0x80085C5C: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x80085C60: lw          $t1, 0x8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X8);
    // 0x80085C64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80085C68: lh          $a2, 0x16($t1)
    ctx->r6 = MEM_H(ctx->r9, 0X16);
    // 0x80085C6C: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_80085C70:
    // 0x80085C70: bnel        $a3, $zero, L_80085C40
    if (ctx->r7 != 0) {
        // 0x80085C74: lw          $t8, 0x8($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X8);
            goto L_80085C40;
    }
    goto skip_3;
    // 0x80085C74: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    skip_3:
L_80085C78:
    // 0x80085C78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80085C7C:
    // 0x80085C7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80085C80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80085C84: jr          $ra
    // 0x80085C88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80085C88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void alSynSetFXMix(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80085C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085C98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80085C9C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80085CA0: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80085CA4: beql        $t6, $zero, L_80085D18
    if (ctx->r14 == 0) {
        // 0x80085CA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80085D18;
    }
    goto skip_0;
    // 0x80085CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80085CAC: jal         0x8007E440
    // 0x80085CB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x80085CB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80085CB4: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80085CB8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80085CBC: beq         $v0, $zero, L_80085D14
    if (ctx->r2 == 0) {
        // 0x80085CC0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80085D14;
    }
    // 0x80085CC0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80085CC4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80085CC8: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80085CCC: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x80085CD0: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x80085CD4: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x80085CD8: slti        $at, $a0, 0x80
    ctx->r1 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x80085CDC: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x80085CE0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80085CE4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80085CE8: bne         $at, $zero, L_80085CF4
    if (ctx->r1 != 0) {
        // 0x80085CEC: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_80085CF4;
    }
    // 0x80085CEC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80085CF0: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_80085CF4:
    // 0x80085CF4: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
    // 0x80085CF8: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80085CFC: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x80085D00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80085D04: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x80085D08: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80085D0C: jalr        $t9
    // 0x80085D10: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80085D10: nop

    after_1:
L_80085D14:
    // 0x80085D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80085D18:
    // 0x80085D18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80085D1C: jr          $ra
    // 0x80085D20: nop

    return;
    // 0x80085D20: nop

;}
RECOMP_FUNC void alSynStartVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80085D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085D38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80085D3C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80085D40: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80085D44: beql        $t6, $zero, L_80085DB0
    if (ctx->r14 == 0) {
        // 0x80085D48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80085DB0;
    }
    goto skip_0;
    // 0x80085D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80085D4C: jal         0x8007E440
    // 0x80085D50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x80085D50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80085D54: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80085D58: beq         $v0, $zero, L_80085DAC
    if (ctx->r2 == 0) {
        // 0x80085D5C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80085DAC;
    }
    // 0x80085D5C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80085D60: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80085D64: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80085D68: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x80085D6C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x80085D70: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x80085D74: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x80085D78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80085D7C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80085D80: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80085D84: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80085D88: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80085D8C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x80085D90: lh          $t4, 0x1A($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X1A);
    // 0x80085D94: sh          $t4, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r12;
    // 0x80085D98: lw          $t5, 0x8($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X8);
    // 0x80085D9C: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    // 0x80085DA0: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80085DA4: jalr        $t9
    // 0x80085DA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80085DA8: nop

    after_1:
L_80085DAC:
    // 0x80085DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80085DB0:
    // 0x80085DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80085DB4: jr          $ra
    // 0x80085DB8: nop

    return;
    // 0x80085DB8: nop

;}
RECOMP_FUNC void alSynDelete(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085DC0: jr          $ra
    // 0x80085DC4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    return;
    // 0x80085DC4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void _init_lpfilter(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085EC0: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80085EC4: addiu       $t9, $zero, 0x4000
    ctx->r25 = ADD32(0, 0X4000);
    // 0x80085EC8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80085ECC: sll         $t6, $v0, 14
    ctx->r14 = S32(ctx->r2 << 14);
    // 0x80085ED0: sra         $v1, $t6, 15
    ctx->r3 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80085ED4: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x80085ED8: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80085EDC: subu        $t0, $t9, $v1
    ctx->r8 = SUB32(ctx->r25, ctx->r3);
    // 0x80085EE0: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
    // 0x80085EE4: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x80085EE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80085EEC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_80085EF0:
    // 0x80085EF0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80085EF4: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x80085EF8: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80085EFC: bne         $at, $zero, L_80085EF0
    if (ctx->r1 != 0) {
        // 0x80085F00: sh          $zero, 0x6($a2)
        MEM_H(0X6, ctx->r6) = 0;
            goto L_80085EF0;
    }
    // 0x80085F00: sh          $zero, 0x6($a2)
    MEM_H(0X6, ctx->r6) = 0;
    // 0x80085F04: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80085F08: lui         $at, 0x40D0
    ctx->r1 = S32(0X40D0 << 16);
    // 0x80085F0C: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x80085F10: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80085F14: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80085F18: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80085F1C: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80085F20: sh          $v1, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r3;
    // 0x80085F24: div.d       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f12.d);
    // 0x80085F28: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80085F2C: beq         $at, $zero, L_80085F58
    if (ctx->r1 == 0) {
        // 0x80085F30: mov.d       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
            goto L_80085F58;
    }
    // 0x80085F30: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
L_80085F34:
    // 0x80085F34: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x80085F38: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80085F3C: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80085F40: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80085F44: mul.d       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x80085F48: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x80085F4C: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80085F50: bne         $at, $zero, L_80085F34
    if (ctx->r1 != 0) {
        // 0x80085F54: sh          $t3, 0x6($a2)
        MEM_H(0X6, ctx->r6) = ctx->r11;
            goto L_80085F34;
    }
    // 0x80085F54: sh          $t3, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r11;
L_80085F58:
    // 0x80085F58: jr          $ra
    // 0x80085F5C: nop

    return;
    // 0x80085F5C: nop

;}
RECOMP_FUNC void alFxNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085F60: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80085F64: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80085F68: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80085F6C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80085F70: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80085F74: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80085F78: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80085F7C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80085F80: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80085F84: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80085F88: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80085F8C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80085F90: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80085F94: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80085F98: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80085F9C: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x80085FA0: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x80085FA4: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80085FA8: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80085FAC: addiu       $a2, $a2, -0x5FB0
    ctx->r6 = ADD32(ctx->r6, -0X5FB0);
    // 0x80085FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80085FB4: jal         0x80089CF0
    // 0x80085FB8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x80085FB8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80085FBC: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x80085FC0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80085FC4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80085FC8: addiu       $t6, $t6, -0x62F0
    ctx->r14 = ADD32(ctx->r14, -0X62F0);
    // 0x80085FCC: addiu       $t7, $t7, -0x5F98
    ctx->r15 = ADD32(ctx->r15, -0X5F98);
    // 0x80085FD0: sw          $t6, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r14;
    // 0x80085FD4: sw          $t7, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r15;
    // 0x80085FD8: lbu         $t8, 0x1C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1C);
    // 0x80085FDC: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80085FE0: addiu       $s3, $s3, 0x47A8
    ctx->r19 = ADD32(ctx->r19, 0X47A8);
    // 0x80085FE4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80085FE8: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x80085FEC: beq         $at, $zero, L_8008604C
    if (ctx->r1 == 0) {
        // 0x80085FF0: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8008604C;
    }
    // 0x80085FF0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80085FF4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80085FF8: addu        $at, $at, $t9
    gpr jr_addend_80086000 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80085FFC: lw          $t9, 0x6D50($at)
    ctx->r25 = ADD32(ctx->r1, 0X6D50);
    // 0x80086000: jr          $t9
    // 0x80086004: nop

    switch (jr_addend_80086000 >> 2) {
        case 0: goto L_80086008; break;
        case 1: goto L_80086014; break;
        case 2: goto L_8008602C; break;
        case 3: goto L_80086038; break;
        case 4: goto L_80086020; break;
        case 5: goto L_80086044; break;
        default: switch_error(__func__, 0x80086000, 0x80096D50);
    }
    // 0x80086004: nop

L_80086008:
    // 0x80086008: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8008600C: b           L_8008604C
    // 0x80086010: addiu       $s3, $s3, 0x4640
    ctx->r19 = ADD32(ctx->r19, 0X4640);
        goto L_8008604C;
    // 0x80086010: addiu       $s3, $s3, 0x4640
    ctx->r19 = ADD32(ctx->r19, 0X4640);
L_80086014:
    // 0x80086014: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80086018: b           L_8008604C
    // 0x8008601C: addiu       $s3, $s3, 0x46A8
    ctx->r19 = ADD32(ctx->r19, 0X46A8);
        goto L_8008604C;
    // 0x8008601C: addiu       $s3, $s3, 0x46A8
    ctx->r19 = ADD32(ctx->r19, 0X46A8);
L_80086020:
    // 0x80086020: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80086024: b           L_8008604C
    // 0x80086028: addiu       $s3, $s3, 0x4730
    ctx->r19 = ADD32(ctx->r19, 0X4730);
        goto L_8008604C;
    // 0x80086028: addiu       $s3, $s3, 0x4730
    ctx->r19 = ADD32(ctx->r19, 0X4730);
L_8008602C:
    // 0x8008602C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80086030: b           L_8008604C
    // 0x80086034: addiu       $s3, $s3, 0x4758
    ctx->r19 = ADD32(ctx->r19, 0X4758);
        goto L_8008604C;
    // 0x80086034: addiu       $s3, $s3, 0x4758
    ctx->r19 = ADD32(ctx->r19, 0X4758);
L_80086038:
    // 0x80086038: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8008603C: b           L_8008604C
    // 0x80086040: addiu       $s3, $s3, 0x4780
    ctx->r19 = ADD32(ctx->r19, 0X4780);
        goto L_8008604C;
    // 0x80086040: addiu       $s3, $s3, 0x4780
    ctx->r19 = ADD32(ctx->r19, 0X4780);
L_80086044:
    // 0x80086044: b           L_8008604C
    // 0x80086048: lw          $s3, 0x20($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X20);
        goto L_8008604C;
    // 0x80086048: lw          $s3, 0x20($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X20);
L_8008604C:
    // 0x8008604C: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80086050: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x80086054: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80086058: sb          $t0, 0x24($s5)
    MEM_B(0X24, ctx->r21) = ctx->r8;
    // 0x8008605C: lw          $t1, 0x4($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X4);
    // 0x80086060: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80086064: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80086068: sw          $t1, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r9;
    // 0x8008606C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80086070: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80086074: jal         0x8007ABD0
    // 0x80086078: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x80086078: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    after_1:
    // 0x8008607C: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
    // 0x80086080: lw          $a3, 0x1C($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X1C);
    // 0x80086084: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80086088: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8008608C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80086090: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80086094: jal         0x8007ABD0
    // 0x80086098: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x80086098: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_2:
    // 0x8008609C: lw          $t4, 0x1C($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X1C);
    // 0x800860A0: sw          $v0, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r2;
    // 0x800860A4: sw          $v0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r2;
    // 0x800860A8: beq         $t4, $zero, L_800860DC
    if (ctx->r12 == 0) {
        // 0x800860AC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_800860DC;
    }
    // 0x800860AC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800860B0: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
L_800860B4:
    // 0x800860B4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x800860B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800860BC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800860C0: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x800860C4: lw          $t9, 0x1C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X1C);
    // 0x800860C8: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x800860CC: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x800860D0: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x800860D4: bnel        $at, $zero, L_800860B4
    if (ctx->r1 != 0) {
        // 0x800860D8: lw          $t5, 0x14($s5)
        ctx->r13 = MEM_W(ctx->r21, 0X14);
            goto L_800860B4;
    }
    goto skip_0;
    // 0x800860D8: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
    skip_0:
L_800860DC:
    // 0x800860DC: lbu         $t0, 0x24($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X24);
    // 0x800860E0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800860E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800860E8: blez        $t0, L_8008635C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x800860EC: addiu       $fp, $zero, 0x1
        ctx->r30 = ADD32(0, 0X1);
            goto L_8008635C;
    }
    // 0x800860EC: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x800860F0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800860F4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x800860F8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800860FC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80086100: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x80086104: ldc1        $f20, 0x6D68($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X6D68);
    // 0x80086108: addiu       $s7, $zero, 0x28
    ctx->r23 = ADD32(0, 0X28);
L_8008610C:
    // 0x8008610C: multu       $s4, $s7
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80086110: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80086114: lw          $t1, 0x20($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X20);
    // 0x80086118: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x8008611C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80086120: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80086124: andi        $t6, $s1, 0xFFFF
    ctx->r14 = ctx->r17 & 0XFFFF;
    // 0x80086128: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008612C: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x80086130: addiu       $s1, $t6, 0x1
    ctx->r17 = ADD32(ctx->r14, 0X1);
    // 0x80086134: mflo        $t2
    ctx->r10 = lo;
    // 0x80086138: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x8008613C: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80086140: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80086144: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x80086148: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008614C: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x80086150: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x80086154: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80086158: addiu       $s1, $t0, 0x1
    ctx->r17 = ADD32(ctx->r8, 0X1);
    // 0x8008615C: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x80086160: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80086164: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x80086168: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    // 0x8008616C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80086170: addiu       $s1, $t4, 0x1
    ctx->r17 = ADD32(ctx->r12, 0X1);
    // 0x80086174: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x80086178: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008617C: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x80086180: sh          $t7, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r15;
    // 0x80086184: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80086188: addiu       $s1, $t8, 0x1
    ctx->r17 = ADD32(ctx->r24, 0X1);
    // 0x8008618C: andi        $t2, $s1, 0xFFFF
    ctx->r10 = ctx->r17 & 0XFFFF;
    // 0x80086190: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80086194: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x80086198: sh          $t1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r9;
    // 0x8008619C: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x800861A0: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x800861A4: or          $t0, $s1, $zero
    ctx->r8 = ctx->r17 | 0;
    // 0x800861A8: beq         $v0, $zero, L_800862AC
    if (ctx->r2 == 0) {
        // 0x800861AC: addiu       $s1, $t0, 0x2
        ctx->r17 = ADD32(ctx->r8, 0X2);
            goto L_800862AC;
    }
    // 0x800861AC: addiu       $s1, $t0, 0x2
    ctx->r17 = ADD32(ctx->r8, 0X2);
    // 0x800861B0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800861B4: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x800861B8: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x800861BC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800861C0: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x800861C4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x800861C8: addiu       $s1, $t2, 0x1
    ctx->r17 = ADD32(ctx->r10, 0X1);
    // 0x800861CC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x800861D0: andi        $t7, $s1, 0xFFFF
    ctx->r15 = ctx->r17 & 0XFFFF;
    // 0x800861D4: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x800861D8: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x800861DC: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x800861E0: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x800861E4: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x800861E8: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x800861EC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800861F0: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x800861F4: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x800861F8: add.d       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f0.d + ctx->f0.d;
    // 0x800861FC: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x80086200: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x80086204: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80086208: bgez        $t0, L_80086220
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8008620C: swc1        $f6, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
            goto L_80086220;
    }
    // 0x8008620C: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x80086210: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80086214: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80086218: nop

    // 0x8008621C: add.d       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f16.d + ctx->f10.d;
L_80086220:
    // 0x80086220: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80086224: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80086228: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x8008622C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80086230: swc1        $f24, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f24.u32l;
    // 0x80086234: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x80086238: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008623C: addiu       $t5, $zero, 0x34
    ctx->r13 = ADD32(0, 0X34);
    // 0x80086240: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x80086244: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80086248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008624C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80086250: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80086254: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x80086258: div.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f20.d);
    // 0x8008625C: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80086260: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80086264: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x80086268: jal         0x8007ABD0
    // 0x8008626C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x8008626C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x80086270: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80086274: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80086278: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8008627C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80086280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80086284: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80086288: jal         0x8007ABD0
    // 0x8008628C: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x8008628C: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_4:
    // 0x80086290: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80086294: sw          $v0, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r2;
    // 0x80086298: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x8008629C: swc1        $f26, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f26.u32l;
    // 0x800862A0: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x800862A4: b           L_800862B8
    // 0x800862A8: sw          $fp, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r30;
        goto L_800862B8;
    // 0x800862A8: sw          $fp, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r30;
L_800862AC:
    // 0x800862AC: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x800862B0: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x800862B4: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
L_800862B8:
    // 0x800862B8: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x800862BC: addu        $s2, $s3, $t2
    ctx->r18 = ADD32(ctx->r19, ctx->r10);
    // 0x800862C0: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x800862C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800862C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800862CC: beq         $t3, $zero, L_80086334
    if (ctx->r11 == 0) {
        // 0x800862D0: or          $a2, $s6, $zero
        ctx->r6 = ctx->r22 | 0;
            goto L_80086334;
    }
    // 0x800862D0: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x800862D4: addiu       $t4, $zero, 0x30
    ctx->r12 = ADD32(0, 0X30);
    // 0x800862D8: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800862DC: jal         0x8007ABD0
    // 0x800862E0: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x800862E0: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_5:
    // 0x800862E4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x800862E8: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x800862EC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800862F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800862F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800862F8: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x800862FC: jal         0x8007ABD0
    // 0x80086300: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x80086300: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_6:
    // 0x80086304: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x80086308: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8008630C: andi        $t9, $s1, 0xFFFF
    ctx->r25 = ctx->r17 & 0XFFFF;
    // 0x80086310: sw          $v0, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r2;
    // 0x80086314: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x80086318: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x8008631C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80086320: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x80086324: jal         0x80085EC0
    // 0x80086328: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    _init_lpfilter(rdram, ctx);
        goto after_7;
    // 0x80086328: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_7:
    // 0x8008632C: b           L_80086348
    // 0x80086330: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
        goto L_80086348;
    // 0x80086330: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
L_80086334:
    // 0x80086334: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80086338: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x8008633C: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x80086340: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x80086344: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
L_80086348:
    // 0x80086348: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8008634C: andi        $t1, $s4, 0xFFFF
    ctx->r9 = ctx->r20 & 0XFFFF;
    // 0x80086350: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80086354: bne         $at, $zero, L_8008610C
    if (ctx->r1 != 0) {
        // 0x80086358: or          $s4, $t1, $zero
        ctx->r20 = ctx->r9 | 0;
            goto L_8008610C;
    }
    // 0x80086358: or          $s4, $t1, $zero
    ctx->r20 = ctx->r9 | 0;
L_8008635C:
    // 0x8008635C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80086360: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80086364: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80086368: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8008636C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80086370: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80086374: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80086378: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8008637C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80086380: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80086384: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80086388: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8008638C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80086390: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80086394: jr          $ra
    // 0x80086398: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80086398: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void alEnvmixerNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008639C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800863A0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800863A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800863A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800863AC: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800863B0: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x800863B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800863B8: addiu       $a2, $a2, 0x7B88
    ctx->r6 = ADD32(ctx->r6, 0X7B88);
    // 0x800863BC: addiu       $a1, $a1, 0x7680
    ctx->r5 = ADD32(ctx->r5, 0X7680);
    // 0x800863C0: jal         0x80089CF0
    // 0x800863C4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x800863C4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x800863C8: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x800863CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800863D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800863D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800863D8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800863DC: jal         0x8007ABD0
    // 0x800863E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x800863E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x800863E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800863E8: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x800863EC: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x800863F0: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x800863F4: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x800863F8: sh          $v1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r3;
    // 0x800863FC: sh          $v1, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r3;
    // 0x80086400: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x80086404: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80086408: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    // 0x8008640C: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    // 0x80086410: sh          $v1, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r3;
    // 0x80086414: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x80086418: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x8008641C: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x80086420: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80086424: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80086428: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
    // 0x8008642C: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80086430: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80086434: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80086438: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008643C: jr          $ra
    // 0x80086440: nop

    return;
    // 0x80086440: nop

;}
RECOMP_FUNC void alLoadNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086444: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80086448: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8008644C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80086450: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80086454: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80086458: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8008645C: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80086460: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80086464: addiu       $a1, $a1, 0x6860
    ctx->r5 = ADD32(ctx->r5, 0X6860);
    // 0x80086468: addiu       $a2, $a2, 0x7064
    ctx->r6 = ADD32(ctx->r6, 0X7064);
    // 0x8008646C: jal         0x80089CF0
    // 0x80086470: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x80086470: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80086474: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80086478: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8008647C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80086480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80086484: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80086488: jal         0x8007ABD0
    // 0x8008648C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8008648C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80086490: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80086494: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x80086498: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8008649C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800864A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800864A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800864A8: jal         0x8007ABD0
    // 0x800864AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x800864AC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x800864B0: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x800864B4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800864B8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x800864BC: jalr        $t9
    // 0x800864C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x800864C0: nop

    after_3:
    // 0x800864C4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800864C8: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x800864CC: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x800864D0: sw          $t8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r24;
    // 0x800864D4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x800864D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800864DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800864E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800864E4: jr          $ra
    // 0x800864E8: nop

    return;
    // 0x800864E8: nop

;}
RECOMP_FUNC void alResampleNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800864EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800864F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800864F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800864F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800864FC: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80086500: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80086504: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80086508: addiu       $a2, $a2, 0x7588
    ctx->r6 = ADD32(ctx->r6, 0X7588);
    // 0x8008650C: addiu       $a1, $a1, 0x7390
    ctx->r5 = ADD32(ctx->r5, 0X7390);
    // 0x80086510: jal         0x80089CF0
    // 0x80086514: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x80086514: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80086518: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8008651C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80086520: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80086524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80086528: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8008652C: jal         0x8007ABD0
    // 0x80086530: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x80086530: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80086534: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80086538: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008653C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80086540: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80086544: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80086548: sw          $t7, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r15;
    // 0x8008654C: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x80086550: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x80086554: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x80086558: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x8008655C: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x80086560: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x80086564: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80086568: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008656C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80086570: jr          $ra
    // 0x80086574: nop

    return;
    // 0x80086574: nop

;}
RECOMP_FUNC void alAuxBusNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086578: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008657C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80086580: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80086584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80086588: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8008658C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80086590: addiu       $a1, $a1, -0x7D00
    ctx->r5 = ADD32(ctx->r5, -0X7D00);
    // 0x80086594: addiu       $a2, $a2, -0x7C28
    ctx->r6 = ADD32(ctx->r6, -0X7C28);
    // 0x80086598: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008659C: jal         0x80089CF0
    // 0x800865A0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x800865A0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x800865A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800865A8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x800865AC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800865B0: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x800865B4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800865B8: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x800865BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800865C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800865C4: jr          $ra
    // 0x800865C8: nop

    return;
    // 0x800865C8: nop

;}
RECOMP_FUNC void alMainBusNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800865CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800865D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800865D4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800865D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800865DC: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x800865E0: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x800865E4: addiu       $a1, $a1, 0x6710
    ctx->r5 = ADD32(ctx->r5, 0X6710);
    // 0x800865E8: addiu       $a2, $a2, 0x6830
    ctx->r6 = ADD32(ctx->r6, 0X6830);
    // 0x800865EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800865F0: jal         0x80089CF0
    // 0x800865F4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x800865F4: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_0:
    // 0x800865F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800865FC: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80086600: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80086604: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x80086608: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8008660C: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x80086610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80086614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80086618: jr          $ra
    // 0x8008661C: nop

    return;
    // 0x8008661C: nop

;}
RECOMP_FUNC void alSaveNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80086624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80086628: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8008662C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80086630: addiu       $a2, $a2, -0x7B64
    ctx->r6 = ADD32(ctx->r6, -0X7B64);
    // 0x80086634: addiu       $a1, $a1, -0x7BF0
    ctx->r5 = ADD32(ctx->r5, -0X7BF0);
    // 0x80086638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008663C: jal         0x80089CF0
    // 0x80086640: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x80086640: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x80086644: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80086648: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008664C: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80086650: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x80086654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80086658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008665C: jr          $ra
    // 0x80086660: nop

    return;
    // 0x80086660: nop

;}
RECOMP_FUNC void alSynAllocFX(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086670: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80086674: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80086678: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008667C: lh          $s1, 0x26($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X26);
    // 0x80086680: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80086684: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80086688: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8008668C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80086690: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x80086694: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x80086698: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008669C: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x800866A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800866A4: sll         $s1, $t6, 2
    ctx->r17 = S32(ctx->r14 << 2);
    // 0x800866A8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800866AC: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    // 0x800866B0: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x800866B4: jal         0x80085F60
    // 0x800866B8: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    alFxNew(rdram, ctx);
        goto after_0;
    // 0x800866B8: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x800866BC: lw          $t8, 0x34($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X34);
    // 0x800866C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800866C4: addu        $a2, $t8, $s1
    ctx->r6 = ADD32(ctx->r24, ctx->r17);
    // 0x800866C8: jal         0x8008A050
    // 0x800866CC: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    _allocFXHandler(rdram, ctx);
        goto after_1;
    // 0x800866CC: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    after_1:
    // 0x800866D0: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x800866D4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x800866D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800866DC: addu        $a2, $t9, $s1
    ctx->r6 = ADD32(ctx->r25, ctx->r17);
    // 0x800866E0: jal         0x80086830
    // 0x800866E4: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    alMainBusParam(rdram, ctx);
        goto after_2;
    // 0x800866E4: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    after_2:
    // 0x800866E8: lw          $t0, 0x34($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X34);
    // 0x800866EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800866F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800866F4: addu        $v0, $t0, $s1
    ctx->r2 = ADD32(ctx->r8, ctx->r17);
    // 0x800866F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800866FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80086700: jr          $ra
    // 0x80086704: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    return;
    // 0x80086704: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
;}
RECOMP_FUNC void alMainBusPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086710: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80086714: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80086718: lw          $s1, 0x58($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X58);
    // 0x8008671C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80086720: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80086724: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80086728: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8008672C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80086730: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80086734: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80086738: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8008673C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80086740: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80086744: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x80086748: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8008674C: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x80086750: ori         $t6, $t6, 0x440
    ctx->r14 = ctx->r14 | 0X440;
    // 0x80086754: ori         $t7, $t7, 0x580
    ctx->r15 = ctx->r15 | 0X580;
    // 0x80086758: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x8008675C: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x80086760: sw          $t7, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r15;
    // 0x80086764: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80086768: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x8008676C: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80086770: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x80086774: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x80086778: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8008677C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80086780: blez        $t8, L_800867FC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80086784: addiu       $s3, $s1, 0x10
        ctx->r19 = ADD32(ctx->r17, 0X10);
            goto L_800867FC;
    }
    // 0x80086784: addiu       $s3, $s1, 0x10
    ctx->r19 = ADD32(ctx->r17, 0X10);
    // 0x80086788: lui         $s2, 0xC00
    ctx->r18 = S32(0XC00 << 16);
    // 0x8008678C: ori         $s2, $s2, 0x7FFF
    ctx->r18 = ctx->r18 | 0X7FFF;
    // 0x80086790: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x80086794: andi        $s6, $v0, 0xFFFF
    ctx->r22 = ctx->r2 & 0XFFFF;
L_80086798:
    // 0x80086798: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8008679C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x800867A0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x800867A4: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x800867A8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800867AC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x800867B0: jalr        $t9
    // 0x800867B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800867B4: nop

    after_0:
    // 0x800867B8: lui         $t1, 0x6C0
    ctx->r9 = S32(0X6C0 << 16);
    // 0x800867BC: lui         $t2, 0x800
    ctx->r10 = S32(0X800 << 16);
    // 0x800867C0: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x800867C4: ori         $t1, $t1, 0x440
    ctx->r9 = ctx->r9 | 0X440;
    // 0x800867C8: ori         $t2, $t2, 0x580
    ctx->r10 = ctx->r10 | 0X580;
    // 0x800867CC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x800867D0: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    // 0x800867D4: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x800867D8: sw          $s2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r18;
    // 0x800867DC: sw          $t2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r10;
    // 0x800867E0: sw          $s2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r18;
    // 0x800867E4: lw          $t3, 0x14($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X14);
    // 0x800867E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800867EC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800867F0: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800867F4: bne         $at, $zero, L_80086798
    if (ctx->r1 != 0) {
        // 0x800867F8: addiu       $s3, $v0, 0x18
        ctx->r19 = ADD32(ctx->r2, 0X18);
            goto L_80086798;
    }
    // 0x800867F8: addiu       $s3, $v0, 0x18
    ctx->r19 = ADD32(ctx->r2, 0X18);
L_800867FC:
    // 0x800867FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80086800: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80086804: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80086808: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008680C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80086810: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80086814: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80086818: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8008681C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80086820: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80086824: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80086828: jr          $ra
    // 0x8008682C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8008682C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void alMainBusParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086830: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80086834: bne         $a1, $at, L_80086858
    if (ctx->r5 != ctx->r1) {
        // 0x80086838: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_80086858;
    }
    // 0x80086838: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x8008683C: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80086840: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80086844: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80086848: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x8008684C: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80086850: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80086854: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_80086858:
    // 0x80086858: jr          $ra
    // 0x8008685C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8008685C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void alAdpcmPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086860: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80086864: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80086868: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8008686C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80086870: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80086874: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80086878: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x8008687C: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80086880: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80086884: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80086888: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x8008688C: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x80086890: bne         $a2, $zero, L_800868A0
    if (ctx->r6 != 0) {
        // 0x80086894: or          $t2, $zero, $zero
        ctx->r10 = 0 | 0;
            goto L_800868A0;
    }
    // 0x80086894: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x80086898: b           L_80086C90
    // 0x8008689C: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
        goto L_80086C90;
    // 0x8008689C: lw          $v0, 0xB0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XB0);
L_800868A0:
    // 0x800868A0: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x800868A4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x800868A8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800868AC: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    // 0x800868B0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x800868B4: lui         $at, 0xB00
    ctx->r1 = S32(0XB00 << 16);
    // 0x800868B8: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x800868BC: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800868C0: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    // 0x800868C4: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x800868C8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800868CC: lw          $t4, 0x10($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X10);
    // 0x800868D0: or          $t0, $s3, $zero
    ctx->r8 = ctx->r19 | 0;
    // 0x800868D4: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x800868D8: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x800868DC: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x800868E0: sw          $t6, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r14;
    // 0x800868E4: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x800868E8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x800868EC: addiu       $s5, $a2, 0x8
    ctx->r21 = ADD32(ctx->r6, 0X8);
    // 0x800868F0: addu        $t7, $v1, $s3
    ctx->r15 = ADD32(ctx->r3, ctx->r19);
    // 0x800868F4: sltu        $a1, $a0, $t7
    ctx->r5 = ctx->r4 < ctx->r15 ? 1 : 0;
    // 0x800868F8: beq         $a1, $zero, L_8008690C
    if (ctx->r5 == 0) {
        // 0x800868FC: nop
    
            goto L_8008690C;
    }
    // 0x800868FC: nop

    // 0x80086900: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80086904: sltu        $t8, $zero, $a1
    ctx->r24 = 0 < ctx->r5 ? 1 : 0;
    // 0x80086908: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_8008690C:
    // 0x8008690C: beq         $a1, $zero, L_8008691C
    if (ctx->r5 == 0) {
        // 0x80086910: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_8008691C;
    }
    // 0x80086910: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80086914: b           L_8008691C
    // 0x80086918: subu        $t0, $a0, $v1
    ctx->r8 = SUB32(ctx->r4, ctx->r3);
        goto L_8008691C;
    // 0x80086918: subu        $t0, $a0, $v1
    ctx->r8 = SUB32(ctx->r4, ctx->r3);
L_8008691C:
    // 0x8008691C: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80086920: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80086924: lw          $t5, 0xA4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA4);
    // 0x80086928: beq         $v1, $zero, L_80086938
    if (ctx->r3 == 0) {
        // 0x8008692C: nop
    
            goto L_80086938;
    }
    // 0x8008692C: nop

    // 0x80086930: b           L_80086938
    // 0x80086934: subu        $a0, $t9, $v1
    ctx->r4 = SUB32(ctx->r25, ctx->r3);
        goto L_80086938;
    // 0x80086934: subu        $a0, $t9, $v1
    ctx->r4 = SUB32(ctx->r25, ctx->r3);
L_80086938:
    // 0x80086938: subu        $a2, $t0, $a0
    ctx->r6 = SUB32(ctx->r8, ctx->r4);
    // 0x8008693C: bgez        $a2, L_80086948
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80086940: nop
    
            goto L_80086948;
    }
    // 0x80086940: nop

    // 0x80086944: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80086948:
    // 0x80086948: beq         $a1, $zero, L_80086B34
    if (ctx->r5 == 0) {
        // 0x8008694C: addiu       $s1, $a2, 0xF
        ctx->r17 = ADD32(ctx->r6, 0XF);
            goto L_80086B34;
    }
    // 0x8008694C: addiu       $s1, $a2, 0xF
    ctx->r17 = ADD32(ctx->r6, 0XF);
    // 0x80086950: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x80086954: addiu       $s1, $a2, 0xF
    ctx->r17 = ADD32(ctx->r6, 0XF);
    // 0x80086958: sra         $t4, $s1, 4
    ctx->r12 = S32(SIGNED(ctx->r17) >> 4);
    // 0x8008695C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80086960: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80086964: lw          $t7, 0x40($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X40);
    // 0x80086968: sll         $s4, $t4, 3
    ctx->r20 = S32(ctx->r12 << 3);
    // 0x8008696C: addu        $s4, $s4, $t4
    ctx->r20 = ADD32(ctx->r20, ctx->r12);
    // 0x80086970: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x80086974: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x80086978: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x8008697C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80086980: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80086984: jal         0x80087238
    // 0x80086988: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    _decodeChunk(rdram, ctx);
        goto after_0;
    // 0x80086988: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_0:
    // 0x8008698C: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80086990: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80086994: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x80086998: beq         $v1, $zero, L_800869B4
    if (ctx->r3 == 0) {
        // 0x8008699C: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_800869B4;
    }
    // 0x8008699C: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x800869A0: lh          $t8, 0x0($t3)
    ctx->r24 = MEM_H(ctx->r11, 0X0);
    // 0x800869A4: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x800869A8: addu        $t4, $t8, $t9
    ctx->r12 = ADD32(ctx->r24, ctx->r25);
    // 0x800869AC: b           L_800869C0
    // 0x800869B0: sh          $t4, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r12;
        goto L_800869C0;
    // 0x800869B0: sh          $t4, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r12;
L_800869B4:
    // 0x800869B4: lh          $t5, 0x0($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X0);
    // 0x800869B8: addiu       $t6, $t5, 0x20
    ctx->r14 = ADD32(ctx->r13, 0X20);
    // 0x800869BC: sh          $t6, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r14;
L_800869C0:
    // 0x800869C0: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x800869C4: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x800869C8: lw          $t8, 0x28($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X28);
    // 0x800869CC: srl         $t4, $v0, 4
    ctx->r12 = S32(U32(ctx->r2) >> 4);
    // 0x800869D0: multu       $t4, $t2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800869D4: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x800869D8: sw          $t7, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r15;
    // 0x800869DC: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800869E0: slt         $at, $t0, $s3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x800869E4: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x800869E8: sll         $v1, $t0, 1
    ctx->r3 = S32(ctx->r8 << 1);
    // 0x800869EC: mflo        $t5
    ctx->r13 = lo;
    // 0x800869F0: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x800869F4: addiu       $t7, $t6, 0x9
    ctx->r15 = ADD32(ctx->r14, 0X9);
    // 0x800869F8: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x800869FC: beq         $at, $zero, L_80086B04
    if (ctx->r1 == 0) {
        // 0x80086A00: lh          $t1, 0x0($t3)
        ctx->r9 = MEM_H(ctx->r11, 0X0);
            goto L_80086B04;
    }
    // 0x80086A00: lh          $t1, 0x0($t3)
    ctx->r9 = MEM_H(ctx->r11, 0X0);
L_80086A04:
    // 0x80086A04: addiu       $t8, $s1, 0x1
    ctx->r24 = ADD32(ctx->r17, 0X1);
    // 0x80086A08: sll         $t4, $t8, 5
    ctx->r12 = S32(ctx->r24 << 5);
    // 0x80086A0C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80086A10: addu        $s2, $t4, $t1
    ctx->r18 = ADD32(ctx->r12, ctx->r9);
    // 0x80086A14: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x80086A18: and         $t9, $s2, $at
    ctx->r25 = ctx->r18 & ctx->r1;
    // 0x80086A1C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80086A20: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x80086A24: subu        $s3, $s3, $t0
    ctx->r19 = SUB32(ctx->r19, ctx->r8);
    // 0x80086A28: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    // 0x80086A2C: beq         $v0, $at, L_80086A40
    if (ctx->r2 == ctx->r1) {
        // 0x80086A30: addu        $t1, $t1, $v1
        ctx->r9 = ADD32(ctx->r9, ctx->r3);
            goto L_80086A40;
    }
    // 0x80086A30: addu        $t1, $t1, $v1
    ctx->r9 = ADD32(ctx->r9, ctx->r3);
    // 0x80086A34: beq         $v0, $zero, L_80086A40
    if (ctx->r2 == 0) {
        // 0x80086A38: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_80086A40;
    }
    // 0x80086A38: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x80086A3C: sw          $t5, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r13;
L_80086A40:
    // 0x80086A40: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x80086A44: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x80086A48: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x80086A4C: sltu        $at, $s3, $v0
    ctx->r1 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x80086A50: beq         $at, $zero, L_80086A60
    if (ctx->r1 == 0) {
        // 0x80086A54: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_80086A60;
    }
    // 0x80086A54: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80086A58: b           L_80086A60
    // 0x80086A5C: or          $t0, $s3, $zero
    ctx->r8 = ctx->r19 | 0;
        goto L_80086A60;
    // 0x80086A5C: or          $t0, $s3, $zero
    ctx->r8 = ctx->r19 | 0;
L_80086A60:
    // 0x80086A60: lw          $t8, 0x3C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X3C);
    // 0x80086A64: addu        $a2, $t0, $t8
    ctx->r6 = ADD32(ctx->r8, ctx->r24);
    // 0x80086A68: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80086A6C: bgezl       $a2, L_80086A7C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80086A70: addiu       $s1, $a2, 0xF
        ctx->r17 = ADD32(ctx->r6, 0XF);
            goto L_80086A7C;
    }
    goto skip_0;
    // 0x80086A70: addiu       $s1, $a2, 0xF
    ctx->r17 = ADD32(ctx->r6, 0XF);
    skip_0:
    // 0x80086A74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80086A78: addiu       $s1, $a2, 0xF
    ctx->r17 = ADD32(ctx->r6, 0XF);
L_80086A7C:
    // 0x80086A7C: sra         $t4, $s1, 4
    ctx->r12 = S32(SIGNED(ctx->r17) >> 4);
    // 0x80086A80: multu       $t4, $t2
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80086A84: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80086A88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80086A8C: lw          $t9, 0x40($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X40);
    // 0x80086A90: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x80086A94: sw          $t0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r8;
    // 0x80086A98: ori         $t5, $t9, 0x2
    ctx->r13 = ctx->r25 | 0X2;
    // 0x80086A9C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80086AA0: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x80086AA4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80086AA8: mflo        $s4
    ctx->r20 = lo;
    // 0x80086AAC: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x80086AB0: jal         0x80087238
    // 0x80086AB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    _decodeChunk(rdram, ctx);
        goto after_1;
    // 0x80086AB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80086AB8: lw          $t6, 0x3C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X3C);
    // 0x80086ABC: lw          $t0, 0x7C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X7C);
    // 0x80086AC0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80086AC4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80086AC8: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x80086ACC: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x80086AD0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80086AD4: and         $t4, $t8, $at
    ctx->r12 = ctx->r24 & ctx->r1;
    // 0x80086AD8: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x80086ADC: sll         $v1, $t0, 1
    ctx->r3 = S32(ctx->r8 << 1);
    // 0x80086AE0: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80086AE4: or          $t9, $t4, $at
    ctx->r25 = ctx->r12 | ctx->r1;
    // 0x80086AE8: sll         $t6, $t1, 16
    ctx->r14 = S32(ctx->r9 << 16);
    // 0x80086AEC: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80086AF0: slt         $at, $t0, $s3
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80086AF4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80086AF8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80086AFC: bne         $at, $zero, L_80086A04
    if (ctx->r1 != 0) {
        // 0x80086B00: addiu       $s5, $v0, 0x8
        ctx->r21 = ADD32(ctx->r2, 0X8);
            goto L_80086A04;
    }
    // 0x80086B00: addiu       $s5, $v0, 0x8
    ctx->r21 = ADD32(ctx->r2, 0X8);
L_80086B04:
    // 0x80086B04: lw          $t4, 0x3C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X3C);
    // 0x80086B08: lw          $t6, 0x38($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X38);
    // 0x80086B0C: lw          $t8, 0x44($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X44);
    // 0x80086B10: addu        $t9, $t4, $s3
    ctx->r25 = ADD32(ctx->r12, ctx->r19);
    // 0x80086B14: andi        $t5, $t9, 0xF
    ctx->r13 = ctx->r25 & 0XF;
    // 0x80086B18: addu        $t7, $t6, $s3
    ctx->r15 = ADD32(ctx->r14, ctx->r19);
    // 0x80086B1C: addu        $t4, $t8, $s4
    ctx->r12 = ADD32(ctx->r24, ctx->r20);
    // 0x80086B20: sw          $t5, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r13;
    // 0x80086B24: sw          $t7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r15;
    // 0x80086B28: sw          $t4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r12;
    // 0x80086B2C: b           L_80086C90
    // 0x80086B30: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
        goto L_80086C90;
    // 0x80086B30: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_80086B34:
    // 0x80086B34: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80086B38: lw          $t5, 0x44($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X44);
    // 0x80086B3C: sra         $t9, $s1, 4
    ctx->r25 = S32(SIGNED(ctx->r17) >> 4);
    // 0x80086B40: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80086B44: sll         $s4, $t9, 3
    ctx->r20 = S32(ctx->r25 << 3);
    // 0x80086B48: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x80086B4C: addu        $s4, $s4, $t9
    ctx->r20 = ADD32(ctx->r20, ctx->r25);
    // 0x80086B50: addu        $a1, $t5, $s4
    ctx->r5 = ADD32(ctx->r13, ctx->r20);
    // 0x80086B54: subu        $t7, $a1, $t6
    ctx->r15 = SUB32(ctx->r5, ctx->r14);
    // 0x80086B58: subu        $v1, $t7, $t8
    ctx->r3 = SUB32(ctx->r15, ctx->r24);
    // 0x80086B5C: bgez        $v1, L_80086B68
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80086B60: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80086B68;
    }
    // 0x80086B60: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80086B64: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80086B68:
    // 0x80086B68: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80086B6C: mflo        $v0
    ctx->r2 = lo;
    // 0x80086B70: sll         $t0, $s1, 4
    ctx->r8 = S32(ctx->r17 << 4);
    // 0x80086B74: sll         $s2, $v0, 4
    ctx->r18 = S32(ctx->r2 << 4);
    // 0x80086B78: addu        $t1, $t0, $a0
    ctx->r9 = ADD32(ctx->r8, ctx->r4);
    // 0x80086B7C: slt         $at, $t1, $s2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80086B80: beq         $at, $zero, L_80086B8C
    if (ctx->r1 == 0) {
        // 0x80086B84: lw          $t3, 0xA4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XA4);
            goto L_80086B8C;
    }
    // 0x80086B84: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x80086B88: or          $s2, $t1, $zero
    ctx->r18 = ctx->r9 | 0;
L_80086B8C:
    // 0x80086B8C: andi        $t9, $s2, 0xF
    ctx->r25 = ctx->r18 & 0XF;
    // 0x80086B90: subu        $t5, $s2, $t9
    ctx->r13 = SUB32(ctx->r18, ctx->r25);
    // 0x80086B94: slt         $at, $t5, $s3
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80086B98: beq         $at, $zero, L_80086C34
    if (ctx->r1 == 0) {
        // 0x80086B9C: subu        $a3, $s4, $v1
        ctx->r7 = SUB32(ctx->r20, ctx->r3);
            goto L_80086C34;
    }
    // 0x80086B9C: subu        $a3, $s4, $v1
    ctx->r7 = SUB32(ctx->r20, ctx->r3);
    // 0x80086BA0: lh          $t6, 0x0($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X0);
    // 0x80086BA4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80086BA8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80086BAC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80086BB0: lw          $t7, 0x40($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X40);
    // 0x80086BB4: sw          $t2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r10;
    // 0x80086BB8: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x80086BBC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80086BC0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80086BC4: subu        $a2, $t0, $s2
    ctx->r6 = SUB32(ctx->r8, ctx->r18);
    // 0x80086BC8: jal         0x80087238
    // 0x80086BCC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    _decodeChunk(rdram, ctx);
        goto after_2;
    // 0x80086BCC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_2:
    // 0x80086BD0: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80086BD4: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80086BD8: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80086BDC: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x80086BE0: beq         $v1, $zero, L_80086BFC
    if (ctx->r3 == 0) {
        // 0x80086BE4: or          $s5, $v0, $zero
        ctx->r21 = ctx->r2 | 0;
            goto L_80086BFC;
    }
    // 0x80086BE4: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80086BE8: lh          $t8, 0x0($t3)
    ctx->r24 = MEM_H(ctx->r11, 0X0);
    // 0x80086BEC: sll         $t4, $v1, 1
    ctx->r12 = S32(ctx->r3 << 1);
    // 0x80086BF0: addu        $t9, $t8, $t4
    ctx->r25 = ADD32(ctx->r24, ctx->r12);
    // 0x80086BF4: b           L_80086C08
    // 0x80086BF8: sh          $t9, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r25;
        goto L_80086C08;
    // 0x80086BF8: sh          $t9, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r25;
L_80086BFC:
    // 0x80086BFC: lh          $t5, 0x0($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X0);
    // 0x80086C00: addiu       $t6, $t5, 0x20
    ctx->r14 = ADD32(ctx->r13, 0X20);
    // 0x80086C04: sh          $t6, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r14;
L_80086C08:
    // 0x80086C08: lw          $t7, 0x3C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X3C);
    // 0x80086C0C: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x80086C10: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
    // 0x80086C14: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x80086C18: andi        $t4, $t8, 0xF
    ctx->r12 = ctx->r24 & 0XF;
    // 0x80086C1C: addu        $t5, $t9, $s3
    ctx->r13 = ADD32(ctx->r25, ctx->r19);
    // 0x80086C20: addu        $t7, $t6, $s4
    ctx->r15 = ADD32(ctx->r14, ctx->r20);
    // 0x80086C24: sw          $t4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r12;
    // 0x80086C28: sw          $t5, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r13;
    // 0x80086C2C: b           L_80086C3C
    // 0x80086C30: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
        goto L_80086C3C;
    // 0x80086C30: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
L_80086C34:
    // 0x80086C34: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80086C38: sw          $a1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r5;
L_80086C3C:
    // 0x80086C3C: beq         $s2, $zero, L_80086C8C
    if (ctx->r18 == 0) {
        // 0x80086C40: or          $v0, $s5, $zero
        ctx->r2 = ctx->r21 | 0;
            goto L_80086C8C;
    }
    // 0x80086C40: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x80086C44: beq         $t2, $zero, L_80086C5C
    if (ctx->r10 == 0) {
        // 0x80086C48: sw          $zero, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = 0;
            goto L_80086C5C;
    }
    // 0x80086C48: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80086C4C: subu        $v1, $t1, $s2
    ctx->r3 = SUB32(ctx->r9, ctx->r18);
    // 0x80086C50: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x80086C54: b           L_80086C60
    // 0x80086C58: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_80086C60;
    // 0x80086C58: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_80086C5C:
    // 0x80086C5C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80086C60:
    // 0x80086C60: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x80086C64: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80086C68: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80086C6C: addu        $t9, $t4, $v1
    ctx->r25 = ADD32(ctx->r12, ctx->r3);
    // 0x80086C70: and         $t5, $t9, $at
    ctx->r13 = ctx->r25 & ctx->r1;
    // 0x80086C74: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x80086C78: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80086C7C: sll         $t7, $s2, 1
    ctx->r15 = S32(ctx->r18 << 1);
    // 0x80086C80: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80086C84: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80086C88: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
L_80086C8C:
    // 0x80086C8C: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_80086C90:
    // 0x80086C90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80086C94: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80086C98: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80086C9C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80086CA0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80086CA4: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80086CA8: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x80086CAC: jr          $ra
    // 0x80086CB0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80086CB0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void alRaw16Pull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086CB4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80086CB8: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80086CBC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80086CC0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80086CC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80086CC8: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80086CCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80086CD0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80086CD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80086CD8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80086CDC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80086CE0: bne         $a2, $zero, L_80086CF0
    if (ctx->r6 != 0) {
        // 0x80086CE4: or          $t1, $t6, $zero
        ctx->r9 = ctx->r14 | 0;
            goto L_80086CF0;
    }
    // 0x80086CE4: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x80086CE8: b           L_80087048
    // 0x80086CEC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_80087048;
    // 0x80086CEC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_80086CF0:
    // 0x80086CF0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80086CF4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80086CF8: addu        $t7, $v0, $s3
    ctx->r15 = ADD32(ctx->r2, ctx->r19);
    // 0x80086CFC: sltu        $at, $v1, $t7
    ctx->r1 = ctx->r3 < ctx->r15 ? 1 : 0;
    // 0x80086D00: beql        $at, $zero, L_80086F14
    if (ctx->r1 == 0) {
        // 0x80086D04: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_80086F14;
    }
    goto skip_0;
    // 0x80086D04: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_0:
    // 0x80086D08: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x80086D0C: subu        $s2, $v1, $v0
    ctx->r18 = SUB32(ctx->r3, ctx->r2);
    // 0x80086D10: beql        $t8, $zero, L_80086F14
    if (ctx->r24 == 0) {
        // 0x80086D14: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_80086F14;
    }
    goto skip_1;
    // 0x80086D14: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_1:
    // 0x80086D18: blez        $s2, L_80086D8C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80086D1C: sll         $s1, $s2, 1
        ctx->r17 = S32(ctx->r18 << 1);
            goto L_80086D8C;
    }
    // 0x80086D1C: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x80086D20: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80086D24: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80086D28: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80086D2C: jalr        $t9
    // 0x80086D30: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80086D30: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    after_0:
    // 0x80086D34: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80086D38: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x80086D3C: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80086D40: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80086D44: addu        $a3, $s1, $a2
    ctx->r7 = ADD32(ctx->r17, ctx->r6);
    // 0x80086D48: andi        $t6, $a3, 0x7
    ctx->r14 = ctx->r7 & 0X7;
    // 0x80086D4C: subu        $t7, $a3, $t6
    ctx->r15 = SUB32(ctx->r7, ctx->r14);
    // 0x80086D50: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80086D54: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80086D58: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80086D5C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x80086D60: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x80086D64: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80086D68: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80086D6C: subu        $t3, $v0, $a2
    ctx->r11 = SUB32(ctx->r2, ctx->r6);
    // 0x80086D70: lui         $t2, 0x400
    ctx->r10 = S32(0X400 << 16);
    // 0x80086D74: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80086D78: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x80086D7C: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x80086D80: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80086D84: b           L_80086D90
    // 0x80086D88: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_80086D90;
    // 0x80086D88: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80086D8C:
    // 0x80086D8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80086D90:
    // 0x80086D90: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x80086D94: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80086D98: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x80086D9C: addu        $t6, $t5, $a2
    ctx->r14 = ADD32(ctx->r13, ctx->r6);
    // 0x80086DA0: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x80086DA4: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x80086DA8: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80086DAC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80086DB0: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x80086DB4: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80086DB8: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x80086DBC: sw          $t2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r10;
    // 0x80086DC0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80086DC4: beq         $at, $zero, L_80086EEC
    if (ctx->r1 == 0) {
        // 0x80086DC8: lh          $t0, 0x0($t3)
        ctx->r8 = MEM_H(ctx->r11, 0X0);
            goto L_80086EEC;
    }
    // 0x80086DC8: lh          $t0, 0x0($t3)
    ctx->r8 = MEM_H(ctx->r11, 0X0);
    // 0x80086DCC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
L_80086DD0:
    // 0x80086DD0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80086DD4: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x80086DD8: beq         $v0, $at, L_80086DEC
    if (ctx->r2 == ctx->r1) {
        // 0x80086DDC: subu        $s3, $s3, $s2
        ctx->r19 = SUB32(ctx->r19, ctx->r18);
            goto L_80086DEC;
    }
    // 0x80086DDC: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x80086DE0: beq         $v0, $zero, L_80086DEC
    if (ctx->r2 == 0) {
        // 0x80086DE4: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_80086DEC;
    }
    // 0x80086DE4: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    // 0x80086DE8: sw          $t5, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r13;
L_80086DEC:
    // 0x80086DEC: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x80086DF0: lw          $t4, 0x1C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C);
    // 0x80086DF4: subu        $v0, $t6, $t4
    ctx->r2 = SUB32(ctx->r14, ctx->r12);
    // 0x80086DF8: sltu        $at, $s3, $v0
    ctx->r1 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x80086DFC: beq         $at, $zero, L_80086E0C
    if (ctx->r1 == 0) {
        // 0x80086E00: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80086E0C;
    }
    // 0x80086E00: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80086E04: b           L_80086E0C
    // 0x80086E08: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
        goto L_80086E0C;
    // 0x80086E08: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_80086E0C:
    // 0x80086E0C: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80086E10: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80086E14: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80086E18: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80086E1C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80086E20: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x80086E24: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80086E28: jalr        $t9
    // 0x80086E2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80086E2C: nop

    after_1:
    // 0x80086E30: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80086E34: andi        $a1, $v0, 0x7
    ctx->r5 = ctx->r2 & 0X7;
    // 0x80086E38: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80086E3C: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x80086E40: beq         $v1, $zero, L_80086E54
    if (ctx->r3 == 0) {
        // 0x80086E44: addu        $a3, $s1, $a1
        ctx->r7 = ADD32(ctx->r17, ctx->r5);
            goto L_80086E54;
    }
    // 0x80086E44: addu        $a3, $s1, $a1
    ctx->r7 = ADD32(ctx->r17, ctx->r5);
    // 0x80086E48: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80086E4C: b           L_80086E58
    // 0x80086E50: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
        goto L_80086E58;
    // 0x80086E50: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
L_80086E54:
    // 0x80086E54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80086E58:
    // 0x80086E58: andi        $t5, $a3, 0x7
    ctx->r13 = ctx->r7 & 0X7;
    // 0x80086E5C: subu        $t6, $a3, $t5
    ctx->r14 = SUB32(ctx->r7, ctx->r13);
    // 0x80086E60: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x80086E64: addu        $t8, $t0, $a2
    ctx->r24 = ADD32(ctx->r8, ctx->r6);
    // 0x80086E68: andi        $t2, $t8, 0xFFFF
    ctx->r10 = ctx->r24 & 0XFFFF;
    // 0x80086E6C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80086E70: addiu       $t4, $t6, 0x8
    ctx->r12 = ADD32(ctx->r14, 0X8);
    // 0x80086E74: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80086E78: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x80086E7C: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x80086E80: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80086E84: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80086E88: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x80086E8C: subu        $t8, $v0, $a1
    ctx->r24 = SUB32(ctx->r2, ctx->r5);
    // 0x80086E90: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x80086E94: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80086E98: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x80086E9C: bne         $a1, $zero, L_80086EA8
    if (ctx->r5 != 0) {
        // 0x80086EA0: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_80086EA8;
    }
    // 0x80086EA0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80086EA4: beq         $a2, $zero, L_80086EE0
    if (ctx->r6 == 0) {
        // 0x80086EA8: addu        $t2, $t0, $a1
        ctx->r10 = ADD32(ctx->r8, ctx->r5);
            goto L_80086EE0;
    }
L_80086EA8:
    // 0x80086EA8: addu        $t2, $t0, $a1
    ctx->r10 = ADD32(ctx->r8, ctx->r5);
    // 0x80086EAC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80086EB0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80086EB4: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x80086EB8: and         $t5, $t3, $at
    ctx->r13 = ctx->r11 & ctx->r1;
    // 0x80086EBC: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80086EC0: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x80086EC4: sll         $t9, $t0, 16
    ctx->r25 = S32(ctx->r8 << 16);
    // 0x80086EC8: andi        $t7, $s1, 0xFFFF
    ctx->r15 = ctx->r17 & 0XFFFF;
    // 0x80086ECC: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80086ED0: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80086ED4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80086ED8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80086EDC: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80086EE0:
    // 0x80086EE0: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80086EE4: bnel        $at, $zero, L_80086DD0
    if (ctx->r1 != 0) {
        // 0x80086EE8: lw          $v0, 0x24($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X24);
            goto L_80086DD0;
    }
    goto skip_2;
    // 0x80086EE8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    skip_2:
L_80086EEC:
    // 0x80086EEC: lw          $t2, 0x38($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X38);
    // 0x80086EF0: lw          $t5, 0x44($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X44);
    // 0x80086EF4: sll         $t6, $s3, 1
    ctx->r14 = S32(ctx->r19 << 1);
    // 0x80086EF8: addu        $t3, $t2, $s3
    ctx->r11 = ADD32(ctx->r10, ctx->r19);
    // 0x80086EFC: addu        $t4, $t5, $t6
    ctx->r12 = ADD32(ctx->r13, ctx->r14);
    // 0x80086F00: sw          $t3, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r11;
    // 0x80086F04: sw          $t4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r12;
    // 0x80086F08: b           L_80087048
    // 0x80086F0C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_80087048;
    // 0x80086F0C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80086F10: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
L_80086F14:
    // 0x80086F14: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80086F18: sll         $s1, $s3, 1
    ctx->r17 = S32(ctx->r19 << 1);
    // 0x80086F1C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80086F20: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x80086F24: addu        $v1, $a0, $s1
    ctx->r3 = ADD32(ctx->r4, ctx->r17);
    // 0x80086F28: subu        $t7, $v1, $t9
    ctx->r15 = SUB32(ctx->r3, ctx->r25);
    // 0x80086F2C: subu        $s2, $t7, $t8
    ctx->r18 = SUB32(ctx->r15, ctx->r24);
    // 0x80086F30: bgezl       $s2, L_80086F40
    if (SIGNED(ctx->r18) >= 0) {
        // 0x80086F34: slt         $at, $s1, $s2
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_80086F40;
    }
    goto skip_3;
    // 0x80086F34: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    skip_3:
    // 0x80086F38: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80086F3C: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
L_80086F40:
    // 0x80086F40: beql        $at, $zero, L_80086F50
    if (ctx->r1 == 0) {
        // 0x80086F44: slt         $at, $s2, $s1
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80086F50;
    }
    goto skip_4;
    // 0x80086F44: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
    skip_4:
    // 0x80086F48: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    // 0x80086F4C: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
L_80086F50:
    // 0x80086F50: beql        $at, $zero, L_80087004
    if (ctx->r1 == 0) {
        // 0x80086F54: sw          $v1, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r3;
            goto L_80087004;
    }
    goto skip_5;
    // 0x80086F54: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    skip_5:
    // 0x80086F58: blez        $s3, L_80086FD4
    if (SIGNED(ctx->r19) <= 0) {
        // 0x80086F5C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80086FD4;
    }
    // 0x80086F5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80086F60: subu        $a1, $s1, $s2
    ctx->r5 = SUB32(ctx->r17, ctx->r18);
    // 0x80086F64: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80086F68: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x80086F6C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80086F70: jalr        $t9
    // 0x80086F74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80086F74: nop

    after_2:
    // 0x80086F78: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80086F7C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80086F80: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x80086F84: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80086F88: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x80086F8C: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80086F90: andi        $t4, $a3, 0x7
    ctx->r12 = ctx->r7 & 0X7;
    // 0x80086F94: subu        $t7, $a3, $t4
    ctx->r15 = SUB32(ctx->r7, ctx->r12);
    // 0x80086F98: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80086F9C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80086FA0: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80086FA4: andi        $t5, $t3, 0xFFFF
    ctx->r13 = ctx->r11 & 0XFFFF;
    // 0x80086FA8: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x80086FAC: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x80086FB0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80086FB4: subu        $t3, $v0, $a2
    ctx->r11 = SUB32(ctx->r2, ctx->r6);
    // 0x80086FB8: lui         $t2, 0x400
    ctx->r10 = S32(0X400 << 16);
    // 0x80086FBC: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80086FC0: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x80086FC4: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x80086FC8: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80086FCC: b           L_80086FD4
    // 0x80086FD0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_80086FD4;
    // 0x80086FD0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80086FD4:
    // 0x80086FD4: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80086FD8: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x80086FDC: addu        $t4, $t6, $a2
    ctx->r12 = ADD32(ctx->r14, ctx->r6);
    // 0x80086FE0: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x80086FE4: lw          $t7, 0x38($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X38);
    // 0x80086FE8: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x80086FEC: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x80086FF0: addu        $t2, $t9, $s1
    ctx->r10 = ADD32(ctx->r25, ctx->r17);
    // 0x80086FF4: sw          $t8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r24;
    // 0x80086FF8: b           L_80087004
    // 0x80086FFC: sw          $t2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r10;
        goto L_80087004;
    // 0x80086FFC: sw          $t2, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r10;
    // 0x80087000: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
L_80087004:
    // 0x80087004: beq         $s2, $zero, L_80087044
    if (ctx->r18 == 0) {
        // 0x80087008: subu        $v1, $s1, $s2
        ctx->r3 = SUB32(ctx->r17, ctx->r18);
            goto L_80087044;
    }
    // 0x80087008: subu        $v1, $s1, $s2
    ctx->r3 = SUB32(ctx->r17, ctx->r18);
    // 0x8008700C: bgez        $v1, L_80087018
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80087010: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_80087018;
    }
    // 0x80087010: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80087014: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80087018:
    // 0x80087018: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x8008701C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80087020: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80087024: lh          $t6, 0x0($t3)
    ctx->r14 = MEM_H(ctx->r11, 0X0);
    // 0x80087028: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x8008702C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80087030: addu        $t4, $t6, $v1
    ctx->r12 = ADD32(ctx->r14, ctx->r3);
    // 0x80087034: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80087038: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x8008703C: or          $t7, $t5, $at
    ctx->r15 = ctx->r13 | ctx->r1;
    // 0x80087040: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80087044:
    // 0x80087044: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_80087048:
    // 0x80087048: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008704C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80087050: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80087054: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80087058: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8008705C: jr          $ra
    // 0x80087060: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80087060: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void alLoadParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80087068: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8008706C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087070: beq         $a1, $at, L_800871C8
    if (ctx->r5 == ctx->r1) {
        // 0x80087074: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_800871C8;
    }
    // 0x80087074: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80087078: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8008707C: bnel        $a1, $at, L_8008722C
    if (ctx->r5 != ctx->r1) {
        // 0x80087080: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008722C;
    }
    goto skip_0;
    // 0x80087080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80087084: sw          $a2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r6;
    // 0x80087088: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8008708C: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x80087090: lui         $t7, 0x8008
    ctx->r15 = S32(0X8008 << 16);
    // 0x80087094: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
    // 0x80087098: lbu         $v0, 0x8($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X8);
    // 0x8008709C: beql        $v0, $zero, L_800870BC
    if (ctx->r2 == 0) {
        // 0x800870A0: lw          $v0, 0x28($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X28);
            goto L_800870BC;
    }
    goto skip_1;
    // 0x800870A0: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    skip_1:
    // 0x800870A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800870A8: beq         $v0, $a0, L_8008717C
    if (ctx->r2 == ctx->r4) {
        // 0x800870AC: lui         $t0, 0x8008
        ctx->r8 = S32(0X8008 << 16);
            goto L_8008717C;
    }
    // 0x800870AC: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x800870B0: b           L_8008722C
    // 0x800870B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008722C;
    // 0x800870B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800870B8: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
L_800870BC:
    // 0x800870BC: addiu       $t7, $t7, 0x6860
    ctx->r15 = ADD32(ctx->r15, 0X6860);
    // 0x800870C0: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x800870C4: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x800870C8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x800870CC: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x800870D0: mflo        $t9
    ctx->r25 = lo;
    // 0x800870D4: bne         $a1, $zero, L_800870E0
    if (ctx->r5 != 0) {
        // 0x800870D8: nop
    
            goto L_800870E0;
    }
    // 0x800870D8: nop

    // 0x800870DC: break       7
    do_break(2148036828);
L_800870E0:
    // 0x800870E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800870E4: bne         $a1, $at, L_800870F8
    if (ctx->r5 != ctx->r1) {
        // 0x800870E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800870F8;
    }
    // 0x800870E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800870EC: bne         $t8, $at, L_800870F8
    if (ctx->r24 != ctx->r1) {
        // 0x800870F0: nop
    
            goto L_800870F8;
    }
    // 0x800870F0: nop

    // 0x800870F4: break       6
    do_break(2148036852);
L_800870F8:
    // 0x800870F8: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800870FC: mflo        $t0
    ctx->r8 = lo;
    // 0x80087100: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80087104: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80087108: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x8008710C: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80087110: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x80087114: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80087118: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008711C: mflo        $t4
    ctx->r12 = lo;
    // 0x80087120: sw          $t4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r12;
    // 0x80087124: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80087128: beql        $v1, $zero, L_80087170
    if (ctx->r3 == 0) {
        // 0x8008712C: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_80087170;
    }
    goto skip_2;
    // 0x8008712C: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_2:
    // 0x80087130: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80087134: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x80087138: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8008713C: sw          $t5, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r13;
    // 0x80087140: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x80087144: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80087148: sw          $t7, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r15;
    // 0x8008714C: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x80087150: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80087154: sw          $t9, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r25;
    // 0x80087158: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x8008715C: jal         0x80089C70
    // 0x80087160: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    alCopy(rdram, ctx);
        goto after_0;
    // 0x80087160: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x80087164: b           L_8008722C
    // 0x80087168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008722C;
    // 0x80087168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008716C: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_80087170:
    // 0x80087170: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x80087174: b           L_80087228
    // 0x80087178: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_80087228;
    // 0x80087178: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_8008717C:
    // 0x8008717C: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80087180: addiu       $t0, $t0, 0x6CB4
    ctx->r8 = ADD32(ctx->r8, 0X6CB4);
    // 0x80087184: sw          $t0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r8;
    // 0x80087188: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x8008718C: beql        $v1, $zero, L_800871BC
    if (ctx->r3 == 0) {
        // 0x80087190: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_800871BC;
    }
    goto skip_3;
    // 0x80087190: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_3:
    // 0x80087194: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80087198: sw          $t1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r9;
    // 0x8008719C: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x800871A0: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x800871A4: sw          $t3, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r11;
    // 0x800871A8: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x800871AC: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x800871B0: b           L_80087228
    // 0x800871B4: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
        goto L_80087228;
    // 0x800871B4: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
    // 0x800871B8: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_800871BC:
    // 0x800871BC: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x800871C0: b           L_80087228
    // 0x800871C4: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_80087228;
    // 0x800871C4: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_800871C8:
    // 0x800871C8: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x800871CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800871D0: sw          $zero, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = 0;
    // 0x800871D4: sw          $a0, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r4;
    // 0x800871D8: beq         $v0, $zero, L_80087228
    if (ctx->r2 == 0) {
        // 0x800871DC: sw          $zero, 0x38($a3)
        MEM_W(0X38, ctx->r7) = 0;
            goto L_80087228;
    }
    // 0x800871DC: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x800871E0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800871E4: sw          $t6, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r14;
    // 0x800871E8: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x800871EC: bne         $v1, $zero, L_8008720C
    if (ctx->r3 != 0) {
        // 0x800871F0: nop
    
            goto L_8008720C;
    }
    // 0x800871F0: nop

    // 0x800871F4: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800871F8: beql        $v1, $zero, L_8008722C
    if (ctx->r3 == 0) {
        // 0x800871FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008722C;
    }
    goto skip_4;
    // 0x800871FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x80087200: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x80087204: b           L_80087228
    // 0x80087208: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
        goto L_80087228;
    // 0x80087208: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
L_8008720C:
    // 0x8008720C: bnel        $a0, $v1, L_8008722C
    if (ctx->r4 != ctx->r3) {
        // 0x80087210: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008722C;
    }
    goto skip_5;
    // 0x80087210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x80087214: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80087218: beql        $v1, $zero, L_8008722C
    if (ctx->r3 == 0) {
        // 0x8008721C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008722C;
    }
    goto skip_6;
    // 0x8008721C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x80087220: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x80087224: sw          $t8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r24;
L_80087228:
    // 0x80087228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008722C:
    // 0x8008722C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80087230: jr          $ra
    // 0x80087234: nop

    return;
    // 0x80087234: nop

;}
RECOMP_FUNC void _decodeChunk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087238: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008723C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80087240: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80087244: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80087248: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8008724C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80087250: blez        $a3, L_800872CC
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80087254: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_800872CC;
    }
    // 0x80087254: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80087258: lw          $a0, 0x44($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X44);
    // 0x8008725C: lw          $a2, 0x34($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X34);
    // 0x80087260: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80087264: lw          $t9, 0x30($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X30);
    // 0x80087268: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x8008726C: jalr        $t9
    // 0x80087270: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80087270: nop

    after_0:
    // 0x80087274: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80087278: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x8008727C: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x80087280: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80087284: andi        $t0, $a3, 0x7
    ctx->r8 = ctx->r7 & 0X7;
    // 0x80087288: subu        $t1, $a3, $t0
    ctx->r9 = SUB32(ctx->r7, ctx->r8);
    // 0x8008728C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087290: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80087294: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x80087298: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8008729C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x800872A0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x800872A4: andi        $t3, $t2, 0xFFFF
    ctx->r11 = ctx->r10 & 0XFFFF;
    // 0x800872A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800872AC: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x800872B0: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800872B4: subu        $t5, $v0, $a2
    ctx->r13 = SUB32(ctx->r2, ctx->r6);
    // 0x800872B8: lui         $t4, 0x400
    ctx->r12 = S32(0X400 << 16);
    // 0x800872BC: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x800872C0: sw          $t5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r13;
    // 0x800872C4: b           L_800872D0
    // 0x800872C8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_800872D0;
    // 0x800872C8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_800872CC:
    // 0x800872CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800872D0:
    // 0x800872D0: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800872D4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x800872D8: lui         $t6, 0xF00
    ctx->r14 = S32(0XF00 << 16);
    // 0x800872DC: andi        $t9, $a1, 0x2
    ctx->r25 = ctx->r5 & 0X2;
    // 0x800872E0: beq         $t9, $zero, L_80087300
    if (ctx->r25 == 0) {
        // 0x800872E4: lui         $at, 0x1FFF
        ctx->r1 = S32(0X1FFF << 16);
            goto L_80087300;
    }
    // 0x800872E4: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x800872E8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800872EC: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
    // 0x800872F0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800872F4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800872F8: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x800872FC: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_80087300:
    // 0x80087300: lh          $t0, 0x36($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X36);
    // 0x80087304: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80087308: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x8008730C: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x80087310: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80087314: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x80087318: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8008731C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80087320: lh          $t5, 0x32($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X32);
    // 0x80087324: andi        $t1, $a1, 0xFF
    ctx->r9 = ctx->r5 & 0XFF;
    // 0x80087328: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8008732C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80087330: sll         $t9, $t5, 16
    ctx->r25 = S32(ctx->r13 << 16);
    // 0x80087334: or          $t0, $t9, $t8
    ctx->r8 = ctx->r25 | ctx->r24;
    // 0x80087338: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8008733C: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x80087340: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80087344: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x80087348: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x8008734C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087350: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x80087354: lw          $t4, 0x14($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X14);
    // 0x80087358: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x8008735C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80087360: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80087364: sw          $t5, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r13;
    // 0x80087368: sw          $zero, 0x40($s1)
    MEM_W(0X40, ctx->r17) = 0;
    // 0x8008736C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80087370: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80087374: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80087378: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8008737C: jr          $ra
    // 0x80087380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80087380: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void alResamplePull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087390: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80087394: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80087398: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8008739C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800873A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800873A4: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x800873A8: lw          $s1, 0x0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X0);
    // 0x800873AC: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x800873B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800873B4: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x800873B8: bne         $a2, $zero, L_800873C8
    if (ctx->r6 != 0) {
        // 0x800873BC: sh          $t6, 0x56($sp)
        MEM_H(0X56, ctx->r29) = ctx->r14;
            goto L_800873C8;
    }
    // 0x800873BC: sh          $t6, 0x56($sp)
    MEM_H(0X56, ctx->r29) = ctx->r14;
    // 0x800873C0: b           L_80087570
    // 0x800873C4: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
        goto L_80087570;
    // 0x800873C4: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
L_800873C8:
    // 0x800873C8: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x800873CC: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x800873D0: beql        $t7, $zero, L_80087434
    if (ctx->r15 == 0) {
        // 0x800873D4: lwc1        $f2, 0x18($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
            goto L_80087434;
    }
    goto skip_0;
    // 0x800873D4: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    skip_0:
    // 0x800873D8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800873DC: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x800873E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800873E4: addiu       $a1, $sp, 0x56
    ctx->r5 = ADD32(ctx->r29, 0X56);
    // 0x800873E8: jalr        $t9
    // 0x800873EC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800873EC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x800873F0: lh          $t0, 0x56($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X56);
    // 0x800873F4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x800873F8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800873FC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80087400: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x80087404: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x80087408: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x8008740C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80087410: sll         $t7, $s2, 1
    ctx->r15 = S32(ctx->r18 << 1);
    // 0x80087414: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80087418: lh          $t5, 0x0($t3)
    ctx->r13 = MEM_H(ctx->r11, 0X0);
    // 0x8008741C: addiu       $s1, $v0, 0x8
    ctx->r17 = ADD32(ctx->r2, 0X8);
    // 0x80087420: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x80087424: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80087428: b           L_8008756C
    // 0x8008742C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
        goto L_8008756C;
    // 0x8008742C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80087430: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
L_80087434:
    // 0x80087434: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80087438: ldc1        $f4, 0x6D70($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X6D70);
    // 0x8008743C: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x80087440: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80087444: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x80087448: nop

    // 0x8008744C: bc1fl       L_80087464
    if (!c1cs) {
        // 0x80087450: lui         $at, 0x4700
        ctx->r1 = S32(0X4700 << 16);
            goto L_80087464;
    }
    goto skip_1;
    // 0x80087450: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    skip_1:
    // 0x80087454: lwc1        $f8, 0x6D78($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6D78);
    // 0x80087458: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x8008745C: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80087460: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
L_80087464:
    // 0x80087464: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80087468: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008746C: addiu       $a1, $sp, 0x56
    ctx->r5 = ADD32(ctx->r29, 0X56);
    // 0x80087470: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x80087474: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80087478: mfc1        $t1, $f16
    ctx->r9 = (int32_t)ctx->f16.u32l;
    // 0x8008747C: mtc1        $s2, $f16
    ctx->f16.u32l = ctx->r18;
    // 0x80087480: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80087484: nop

    // 0x80087488: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008748C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80087490: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x80087494: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80087498: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8008749C: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800874A0: swc1        $f8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f8.u32l;
    // 0x800874A4: lwc1        $f10, 0x18($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800874A8: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x800874AC: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x800874B0: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800874B4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x800874B8: nop

    // 0x800874BC: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x800874C0: nop

    // 0x800874C4: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800874C8: sub.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x800874CC: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
    // 0x800874D0: lw          $t3, 0x70($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X70);
    // 0x800874D4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800874D8: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x800874DC: jalr        $t9
    // 0x800874E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800874E0: nop

    after_1:
    // 0x800874E4: lh          $t5, 0x56($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X56);
    // 0x800874E8: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x800874EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800874F0: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800874F4: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800874F8: andi        $t7, $t5, 0xFFFF
    ctx->r15 = ctx->r13 & 0XFFFF;
    // 0x800874FC: or          $t6, $t7, $at
    ctx->r14 = ctx->r15 | ctx->r1;
    // 0x80087500: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80087504: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x80087508: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8008750C: sll         $t3, $s2, 1
    ctx->r11 = S32(ctx->r18 << 1);
    // 0x80087510: lh          $t1, 0x0($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X0);
    // 0x80087514: andi        $t9, $t3, 0xFFFF
    ctx->r25 = ctx->r11 & 0XFFFF;
    // 0x80087518: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x8008751C: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x80087520: or          $t4, $t2, $t9
    ctx->r12 = ctx->r10 | ctx->r25;
    // 0x80087524: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80087528: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8008752C: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x80087530: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80087534: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x80087538: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x8008753C: andi        $t6, $t7, 0xFF
    ctx->r14 = ctx->r15 & 0XFF;
    // 0x80087540: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x80087544: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x80087548: andi        $t1, $v1, 0xFFFF
    ctx->r9 = ctx->r3 & 0XFFFF;
    // 0x8008754C: or          $t3, $t0, $t1
    ctx->r11 = ctx->r8 | ctx->r9;
    // 0x80087550: sw          $t3, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r11;
    // 0x80087554: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80087558: jal         0x8007DE50
    // 0x8008755C: addiu       $s1, $v0, 0x10
    ctx->r17 = ADD32(ctx->r2, 0X10);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x8008755C: addiu       $s1, $v0, 0x10
    ctx->r17 = ADD32(ctx->r2, 0X10);
    after_2:
    // 0x80087560: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80087564: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x80087568: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_8008756C:
    // 0x8008756C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80087570:
    // 0x80087570: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80087574: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80087578: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8008757C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80087580: jr          $ra
    // 0x80087584: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80087584: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void alResampleParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087588: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x8008758C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80087590: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x80087594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087598: beq         $at, $zero, L_80087648
    if (ctx->r1 == 0) {
        // 0x8008759C: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80087648;
    }
    // 0x8008759C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800875A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800875A4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800875A8: addu        $at, $at, $t6
    gpr jr_addend_800875B0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800875AC: lw          $t6, 0x6D7C($at)
    ctx->r14 = ADD32(ctx->r1, 0X6D7C);
    // 0x800875B0: jr          $t6
    // 0x800875B4: nop

    switch (jr_addend_800875B0 >> 2) {
        case 0: goto L_800875B8; break;
        case 1: goto L_80087648; break;
        case 2: goto L_80087648; break;
        case 3: goto L_800875C0; break;
        case 4: goto L_80087648; break;
        case 5: goto L_80087648; break;
        case 6: goto L_8008762C; break;
        case 7: goto L_8008763C; break;
        case 8: goto L_800875FC; break;
        default: switch_error(__func__, 0x800875B0, 0x80096D7C);
    }
    // 0x800875B4: nop

L_800875B8:
    // 0x800875B8: b           L_80087660
    // 0x800875BC: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_80087660;
    // 0x800875BC: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
L_800875C0:
    // 0x800875C0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x800875C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800875C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800875CC: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
    // 0x800875D0: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
    // 0x800875D4: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
    // 0x800875D8: beq         $a0, $zero, L_80087660
    if (ctx->r4 == 0) {
        // 0x800875DC: swc1        $f4, 0x20($a3)
        MEM_W(0X20, ctx->r7) = ctx->f4.u32l;
            goto L_80087660;
    }
    // 0x800875DC: swc1        $f4, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f4.u32l;
    // 0x800875E0: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800875E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800875E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800875EC: jalr        $t9
    // 0x800875F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800875F0: nop

    after_0:
    // 0x800875F4: b           L_80087664
    // 0x800875F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80087664;
    // 0x800875F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800875FC:
    // 0x800875FC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80087600: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80087604: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
    // 0x80087608: beql        $a0, $zero, L_80087664
    if (ctx->r4 == 0) {
        // 0x8008760C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80087664;
    }
    goto skip_0;
    // 0x8008760C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80087610: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80087614: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80087618: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008761C: jalr        $t9
    // 0x80087620: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80087620: nop

    after_1:
    // 0x80087624: b           L_80087664
    // 0x80087628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80087664;
    // 0x80087628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008762C:
    // 0x8008762C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80087630: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80087634: b           L_80087660
    // 0x80087638: swc1        $f6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f6.u32l;
        goto L_80087660;
    // 0x80087638: swc1        $f6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f6.u32l;
L_8008763C:
    // 0x8008763C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80087640: b           L_80087660
    // 0x80087644: sw          $t0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r8;
        goto L_80087660;
    // 0x80087644: sw          $t0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r8;
L_80087648:
    // 0x80087648: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8008764C: beql        $a0, $zero, L_80087664
    if (ctx->r4 == 0) {
        // 0x80087650: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80087664;
    }
    goto skip_1;
    // 0x80087650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80087654: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80087658: jalr        $t9
    // 0x8008765C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8008765C: nop

    after_2:
L_80087660:
    // 0x80087660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80087664:
    // 0x80087664: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80087668: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008766C: jr          $ra
    // 0x80087670: nop

    return;
    // 0x80087670: nop

;}
RECOMP_FUNC void alEnvmixerPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087680: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80087684: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80087688: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8008768C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80087690: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80087694: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80087698: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8008769C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800876A0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800876A4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800876A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800876AC: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    // 0x800876B0: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x800876B4: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x800876B8: sh          $zero, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = 0;
    // 0x800876BC: sh          $zero, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = 0;
    // 0x800876C0: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x800876C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800876C8: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x800876CC: lw          $s4, 0xA8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA8);
    // 0x800876D0: beq         $t6, $zero, L_80087B1C
    if (ctx->r14 == 0) {
        // 0x800876D4: or          $s7, $a3, $zero
        ctx->r23 = ctx->r7 | 0;
            goto L_80087B1C;
    }
    // 0x800876D4: or          $s7, $a3, $zero
    ctx->r23 = ctx->r7 | 0;
    // 0x800876D8: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x800876DC: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x800876E0: addiu       $s5, $s5, 0x47D0
    ctx->r21 = ADD32(ctx->r21, 0X47D0);
    // 0x800876E4: addiu       $s6, $s6, 0x48D0
    ctx->r22 = ADD32(ctx->r22, 0X48D0);
    // 0x800876E8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x800876EC: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
L_800876F0:
    // 0x800876F0: or          $v0, $s7, $zero
    ctx->r2 = ctx->r23 | 0;
    // 0x800876F4: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x800876F8: lw          $s7, 0x4($v1)
    ctx->r23 = MEM_W(ctx->r3, 0X4);
    // 0x800876FC: subu        $s2, $s7, $v0
    ctx->r18 = SUB32(ctx->r23, ctx->r2);
    // 0x80087700: slt         $at, $t7, $s2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80087704: bnel        $at, $zero, L_80087B20
    if (ctx->r1 != 0) {
        // 0x80087708: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80087B20;
    }
    goto skip_0;
    // 0x80087708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8008770C: lhu         $t8, 0x8($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X8);
    // 0x80087710: sltiu       $at, $t8, 0x11
    ctx->r1 = ctx->r24 < 0X11 ? 1 : 0;
    // 0x80087714: beq         $at, $zero, L_80087A9C
    if (ctx->r1 == 0) {
        // 0x80087718: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_80087A9C;
    }
    // 0x80087718: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008771C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80087720: addu        $at, $at, $t8
    gpr jr_addend_80087728 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80087724: lw          $t8, 0x6DA0($at)
    ctx->r24 = ADD32(ctx->r1, 0X6DA0);
    // 0x80087728: jr          $t8
    // 0x8008772C: nop

    switch (jr_addend_80087728 >> 2) {
        case 0: goto L_80087A7C; break;
        case 1: goto L_80087A9C; break;
        case 2: goto L_80087A9C; break;
        case 3: goto L_80087A9C; break;
        case 4: goto L_80087A9C; break;
        case 5: goto L_80087A9C; break;
        case 6: goto L_80087A9C; break;
        case 7: goto L_80087A9C; break;
        case 8: goto L_80087A9C; break;
        case 9: goto L_80087A9C; break;
        case 10: goto L_80087A9C; break;
        case 11: goto L_80087860; break;
        case 12: goto L_80087860; break;
        case 13: goto L_80087730; break;
        case 14: goto L_800879EC; break;
        case 15: goto L_80087A40; break;
        case 16: goto L_80087860; break;
        default: switch_error(__func__, 0x80087728, 0x80096DA0);
    }
    // 0x8008772C: nop

L_80087730:
    // 0x80087730: lh          $t9, 0xA($v1)
    ctx->r25 = MEM_H(ctx->r3, 0XA);
    // 0x80087734: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x80087738: beql        $t9, $zero, L_80087758
    if (ctx->r25 == 0) {
        // 0x8008773C: lw          $t9, 0x8($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X8);
            goto L_80087758;
    }
    goto skip_1;
    // 0x8008773C: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    skip_1:
    // 0x80087740: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80087744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087748: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8008774C: jalr        $t9
    // 0x80087750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80087750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80087754: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
L_80087758:
    // 0x80087758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008775C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80087760: jalr        $t9
    // 0x80087764: lw          $a2, 0x18($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80087764: lw          $a2, 0x18($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X18);
    after_1:
    // 0x80087768: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x8008776C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087770: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80087774: jalr        $t9
    // 0x80087778: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80087778: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8008777C: sw          $s3, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r19;
    // 0x80087780: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x80087784: lw          $t0, 0x14($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X14);
    // 0x80087788: sw          $t0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r8;
    // 0x8008778C: lh          $v1, 0x10($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X10);
    // 0x80087790: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80087794: mflo        $a0
    ctx->r4 = lo;
    // 0x80087798: sra         $t1, $a0, 15
    ctx->r9 = S32(SIGNED(ctx->r4) >> 15);
    // 0x8008779C: sh          $t1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r9;
    // 0x800877A0: lbu         $t2, 0x12($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X12);
    // 0x800877A4: sh          $t2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r10;
    // 0x800877A8: lbu         $t3, 0x13($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X13);
    // 0x800877AC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x800877B0: addu        $t5, $s5, $t4
    ctx->r13 = ADD32(ctx->r21, ctx->r12);
    // 0x800877B4: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x800877B8: sh          $t6, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r14;
    // 0x800877BC: lbu         $t7, 0x13($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X13);
    // 0x800877C0: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800877C4: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x800877C8: addu        $t0, $s6, $t9
    ctx->r8 = ADD32(ctx->r22, ctx->r25);
    // 0x800877CC: lh          $t1, -0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, -0X2);
    // 0x800877D0: sh          $t1, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r9;
    // 0x800877D4: lw          $t2, 0x14($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X14);
    // 0x800877D8: beql        $t2, $zero, L_800877F0
    if (ctx->r10 == 0) {
        // 0x800877DC: lh          $v0, 0x18($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X18);
            goto L_800877F0;
    }
    goto skip_2;
    // 0x800877DC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    skip_2:
    // 0x800877E0: sh          $s3, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r19;
    // 0x800877E4: b           L_8008782C
    // 0x800877E8: sh          $s3, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r19;
        goto L_8008782C;
    // 0x800877E8: sh          $s3, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r19;
    // 0x800877EC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
L_800877F0:
    // 0x800877F0: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x800877F4: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x800877F8: addu        $t4, $s5, $t3
    ctx->r12 = ADD32(ctx->r21, ctx->r11);
    // 0x800877FC: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x80087800: negu        $t8, $t3
    ctx->r24 = SUB32(0, ctx->r11);
    // 0x80087804: addu        $t9, $s6, $t8
    ctx->r25 = ADD32(ctx->r22, ctx->r24);
    // 0x80087808: multu       $t5, $v1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008780C: mflo        $t6
    ctx->r14 = lo;
    // 0x80087810: sra         $t7, $t6, 15
    ctx->r15 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80087814: sh          $t7, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r15;
    // 0x80087818: lh          $t0, -0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, -0X2);
    // 0x8008781C: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80087820: mflo        $t1
    ctx->r9 = lo;
    // 0x80087824: sra         $t2, $t1, 15
    ctx->r10 = S32(SIGNED(ctx->r9) >> 15);
    // 0x80087828: sh          $t2, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r10;
L_8008782C:
    // 0x8008782C: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80087830: beql        $t3, $zero, L_80087AD8
    if (ctx->r11 == 0) {
        // 0x80087834: lh          $t8, 0x7E($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X7E);
            goto L_80087AD8;
    }
    goto skip_3;
    // 0x80087834: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
    skip_3:
    // 0x80087838: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8008783C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80087840: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x80087844: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80087848: lw          $a2, 0x64($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X64);
    // 0x8008784C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80087850: jalr        $t9
    // 0x80087854: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80087854: nop

    after_3:
    // 0x80087858: b           L_80087AD8
    // 0x8008785C: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
        goto L_80087AD8;
    // 0x8008785C: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
L_80087860:
    // 0x80087860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087864: addiu       $a1, $sp, 0x8E
    ctx->r5 = ADD32(ctx->r29, 0X8E);
    // 0x80087868: addiu       $a2, $sp, 0x7E
    ctx->r6 = ADD32(ctx->r29, 0X7E);
    // 0x8008786C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80087870: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x80087874: jal         0x80087C68
    // 0x80087878: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    _pullSubFrame(rdram, ctx);
        goto after_4;
    // 0x80087878: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_4:
    // 0x8008787C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x80087880: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80087884: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80087888: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8008788C: bnel        $at, $zero, L_800878F0
    if (ctx->r1 != 0) {
        // 0x80087890: lh          $t6, 0x1C($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X1C);
            goto L_800878F0;
    }
    goto skip_4;
    // 0x80087890: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
    skip_4:
    // 0x80087894: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80087898: lh          $v1, 0x1A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1A);
    // 0x8008789C: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x800878A0: addu        $t5, $s5, $t4
    ctx->r13 = ADD32(ctx->r21, ctx->r12);
    // 0x800878A4: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x800878A8: negu        $t0, $t4
    ctx->r8 = SUB32(0, ctx->r12);
    // 0x800878AC: addu        $t1, $s6, $t0
    ctx->r9 = ADD32(ctx->r22, ctx->r8);
    // 0x800878B0: multu       $t6, $v1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800878B4: mflo        $t7
    ctx->r15 = lo;
    // 0x800878B8: sra         $t8, $t7, 15
    ctx->r24 = S32(SIGNED(ctx->r15) >> 15);
    // 0x800878BC: sh          $t8, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r24;
    // 0x800878C0: lh          $t2, -0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, -0X2);
    // 0x800878C4: lh          $t4, 0x28($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X28);
    // 0x800878C8: sw          $a0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r4;
    // 0x800878CC: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800878D0: sh          $t4, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r12;
    // 0x800878D4: mflo        $t3
    ctx->r11 = lo;
    // 0x800878D8: sra         $t9, $t3, 15
    ctx->r25 = S32(SIGNED(ctx->r11) >> 15);
    // 0x800878DC: sh          $t9, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r25;
    // 0x800878E0: lh          $t5, 0x2E($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X2E);
    // 0x800878E4: b           L_8008793C
    // 0x800878E8: sh          $t5, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r13;
        goto L_8008793C;
    // 0x800878E8: sh          $t5, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r13;
    // 0x800878EC: lh          $t6, 0x1C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1C);
L_800878F0:
    // 0x800878F0: lh          $a2, 0x26($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X26);
    // 0x800878F4: lhu         $a3, 0x24($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X24);
    // 0x800878F8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800878FC: jal         0x80088248
    // 0x80087900: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    alEnvmixerPull2(rdram, ctx);
        goto after_5;
    // 0x80087900: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x80087904: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80087908: lh          $t0, 0x1E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1E);
    // 0x8008790C: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x80087910: lh          $a2, 0x2C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2C);
    // 0x80087914: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80087918: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8008791C: lhu         $a3, 0x2A($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X2A);
    // 0x80087920: sh          $t8, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r24;
    // 0x80087924: jal         0x80088248
    // 0x80087928: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    alEnvmixerPull2(rdram, ctx);
        goto after_6;
    // 0x80087928: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_6:
    // 0x8008792C: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80087930: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x80087934: nop

    // 0x80087938: sh          $t2, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r10;
L_8008793C:
    // 0x8008793C: lh          $t3, 0x1C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X1C);
    // 0x80087940: bnel        $t3, $zero, L_80087950
    if (ctx->r11 != 0) {
        // 0x80087944: lh          $t9, 0x1E($s0)
        ctx->r25 = MEM_H(ctx->r16, 0X1E);
            goto L_80087950;
    }
    goto skip_5;
    // 0x80087944: lh          $t9, 0x1E($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X1E);
    skip_5:
    // 0x80087948: sh          $s3, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r19;
    // 0x8008794C: lh          $t9, 0x1E($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X1E);
L_80087950:
    // 0x80087950: bnel        $t9, $zero, L_80087960
    if (ctx->r25 != 0) {
        // 0x80087954: lw          $v1, 0x3C($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X3C);
            goto L_80087960;
    }
    goto skip_6;
    // 0x80087954: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    skip_6:
    // 0x80087958: sh          $s3, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r19;
    // 0x8008795C: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
L_80087960:
    // 0x80087960: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80087964: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x80087968: bnel        $a0, $at, L_80087980
    if (ctx->r4 != ctx->r1) {
        // 0x8008796C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80087980;
    }
    goto skip_7;
    // 0x8008796C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    skip_7:
    // 0x80087970: lw          $t4, 0xC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XC);
    // 0x80087974: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
    // 0x80087978: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x8008797C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
L_80087980:
    // 0x80087980: bnel        $a0, $at, L_800879B0
    if (ctx->r4 != ctx->r1) {
        // 0x80087984: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_800879B0;
    }
    goto skip_8;
    // 0x80087984: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    skip_8:
    // 0x80087988: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x8008798C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80087990: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80087994: mflo        $v0
    ctx->r2 = lo;
    // 0x80087998: sra         $t5, $v0, 15
    ctx->r13 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8008799C: sh          $t5, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r13;
    // 0x800879A0: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x800879A4: sw          $t6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r14;
    // 0x800879A8: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x800879AC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
L_800879B0:
    // 0x800879B0: bne         $a0, $at, L_800879E4
    if (ctx->r4 != ctx->r1) {
        // 0x800879B4: nop
    
            goto L_800879E4;
    }
    // 0x800879B4: nop

    // 0x800879B8: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x800879BC: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800879C0: addu        $t0, $s5, $t8
    ctx->r8 = ADD32(ctx->r21, ctx->r24);
    // 0x800879C4: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x800879C8: sh          $t1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r9;
    // 0x800879CC: lw          $t2, 0xC($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XC);
    // 0x800879D0: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x800879D4: negu        $t9, $t3
    ctx->r25 = SUB32(0, ctx->r11);
    // 0x800879D8: addu        $t4, $s6, $t9
    ctx->r12 = ADD32(ctx->r22, ctx->r25);
    // 0x800879DC: lh          $t5, -0x2($t4)
    ctx->r13 = MEM_H(ctx->r12, -0X2);
    // 0x800879E0: sh          $t5, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r13;
L_800879E4:
    // 0x800879E4: b           L_80087AD4
    // 0x800879E8: sw          $s3, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r19;
        goto L_80087AD4;
    // 0x800879E8: sw          $s3, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r19;
L_800879EC:
    // 0x800879EC: lh          $t6, 0xA($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XA);
    // 0x800879F0: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x800879F4: beql        $t6, $zero, L_80087A14
    if (ctx->r14 == 0) {
        // 0x800879F8: lw          $t9, 0x8($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X8);
            goto L_80087A14;
    }
    goto skip_9;
    // 0x800879F8: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    skip_9:
    // 0x800879FC: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80087A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087A04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80087A08: jalr        $t9
    // 0x80087A0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x80087A0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80087A10: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
L_80087A14:
    // 0x80087A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087A18: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80087A1C: jalr        $t9
    // 0x80087A20: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x80087A20: lw          $a2, 0xC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XC);
    after_8:
    // 0x80087A24: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80087A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087A2C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80087A30: jalr        $t9
    // 0x80087A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x80087A34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80087A38: b           L_80087AD8
    // 0x80087A3C: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
        goto L_80087AD8;
    // 0x80087A3C: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
L_80087A40:
    // 0x80087A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087A44: addiu       $a1, $sp, 0x8E
    ctx->r5 = ADD32(ctx->r29, 0X8E);
    // 0x80087A48: addiu       $a2, $sp, 0x7E
    ctx->r6 = ADD32(ctx->r29, 0X7E);
    // 0x80087A4C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80087A50: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x80087A54: jal         0x80087C68
    // 0x80087A58: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    _pullSubFrame(rdram, ctx);
        goto after_10;
    // 0x80087A58: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_10:
    // 0x80087A5C: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80087A60: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80087A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087A68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80087A6C: jalr        $t9
    // 0x80087A70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x80087A70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x80087A74: b           L_80087AD8
    // 0x80087A78: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
        goto L_80087AD8;
    // 0x80087A78: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
L_80087A7C:
    // 0x80087A7C: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x80087A80: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80087A84: lw          $a0, 0x44B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X44B0);
    // 0x80087A88: sw          $zero, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = 0;
    // 0x80087A8C: jal         0x8007E4E8
    // 0x80087A90: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    _freePVoice(rdram, ctx);
        goto after_12;
    // 0x80087A90: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    after_12:
    // 0x80087A94: b           L_80087AD8
    // 0x80087A98: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
        goto L_80087AD8;
    // 0x80087A98: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
L_80087A9C:
    // 0x80087A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087AA0: addiu       $a1, $sp, 0x8E
    ctx->r5 = ADD32(ctx->r29, 0X8E);
    // 0x80087AA4: addiu       $a2, $sp, 0x7E
    ctx->r6 = ADD32(ctx->r29, 0X7E);
    // 0x80087AA8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80087AAC: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x80087AB0: jal         0x80087C68
    // 0x80087AB4: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    _pullSubFrame(rdram, ctx);
        goto after_13;
    // 0x80087AB4: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_13:
    // 0x80087AB8: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80087ABC: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80087AC0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80087AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80087AC8: lh          $a1, 0x8($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X8);
    // 0x80087ACC: jalr        $t9
    // 0x80087AD0: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x80087AD0: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    after_14:
L_80087AD4:
    // 0x80087AD4: lh          $t8, 0x7E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X7E);
L_80087AD8:
    // 0x80087AD8: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
    // 0x80087ADC: sll         $t0, $s2, 1
    ctx->r8 = S32(ctx->r18 << 1);
    // 0x80087AE0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80087AE4: subu        $t3, $t2, $s2
    ctx->r11 = SUB32(ctx->r10, ctx->r18);
    // 0x80087AE8: sh          $t1, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r9;
    // 0x80087AEC: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
    // 0x80087AF0: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x80087AF4: lw          $t4, 0x0($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X0);
    // 0x80087AF8: bne         $t4, $zero, L_80087B04
    if (ctx->r12 != 0) {
        // 0x80087AFC: sw          $t4, 0x3C($s0)
        MEM_W(0X3C, ctx->r16) = ctx->r12;
            goto L_80087B04;
    }
    // 0x80087AFC: sw          $t4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r12;
    // 0x80087B00: sw          $zero, 0x40($s0)
    MEM_W(0X40, ctx->r16) = 0;
L_80087B04:
    // 0x80087B04: jal         0x8007E470
    // 0x80087B08: nop

    __freeParam(rdram, ctx);
        goto after_15;
    // 0x80087B08: nop

    after_15:
    // 0x80087B0C: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x80087B10: lw          $t7, 0x3C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X3C);
    // 0x80087B14: bnel        $t7, $zero, L_800876F0
    if (ctx->r15 != 0) {
        // 0x80087B18: lw          $v1, 0x3C($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X3C);
            goto L_800876F0;
    }
    goto skip_10;
    // 0x80087B18: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    skip_10:
L_80087B1C:
    // 0x80087B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80087B20:
    // 0x80087B20: addiu       $a1, $sp, 0x8E
    ctx->r5 = ADD32(ctx->r29, 0X8E);
    // 0x80087B24: addiu       $a2, $sp, 0x7E
    ctx->r6 = ADD32(ctx->r29, 0X7E);
    // 0x80087B28: lw          $a3, 0xA0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA0);
    // 0x80087B2C: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x80087B30: jal         0x80087C68
    // 0x80087B34: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    _pullSubFrame(rdram, ctx);
        goto after_16;
    // 0x80087B34: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    after_16:
    // 0x80087B38: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80087B3C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80087B40: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80087B44: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x80087B48: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80087B4C: beql        $at, $zero, L_80087B5C
    if (ctx->r1 == 0) {
        // 0x80087B50: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80087B5C;
    }
    goto skip_11;
    // 0x80087B50: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_11:
    // 0x80087B54: sw          $a0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r4;
    // 0x80087B58: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80087B5C:
    // 0x80087B5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80087B60: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80087B64: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80087B68: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80087B6C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80087B70: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80087B74: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80087B78: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80087B7C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80087B80: jr          $ra
    // 0x80087B84: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80087B84: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void alEnvmixerParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80087B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80087B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80087B94: beq         $a1, $v0, L_80087C34
    if (ctx->r5 == ctx->r2) {
        // 0x80087B98: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80087C34;
    }
    // 0x80087B98: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80087B9C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80087BA0: beq         $a1, $at, L_80087BC0
    if (ctx->r5 == ctx->r1) {
        // 0x80087BA4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80087BC0;
    }
    // 0x80087BA4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80087BA8: beq         $a1, $at, L_80087BE0
    if (ctx->r5 == ctx->r1) {
        // 0x80087BAC: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80087BE0;
    }
    // 0x80087BAC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80087BB0: beql        $a1, $at, L_80087C10
    if (ctx->r5 == ctx->r1) {
        // 0x80087BB4: lw          $a0, 0x0($a3)
        ctx->r4 = MEM_W(ctx->r7, 0X0);
            goto L_80087C10;
    }
    goto skip_0;
    // 0x80087BB4: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x80087BB8: b           L_80087C40
    // 0x80087BBC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
        goto L_80087C40;
    // 0x80087BBC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80087BC0:
    // 0x80087BC0: lw          $v0, 0x40($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X40);
    // 0x80087BC4: beql        $v0, $zero, L_80087BD8
    if (ctx->r2 == 0) {
        // 0x80087BC8: sw          $a2, 0x3C($a3)
        MEM_W(0X3C, ctx->r7) = ctx->r6;
            goto L_80087BD8;
    }
    goto skip_1;
    // 0x80087BC8: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
    skip_1:
    // 0x80087BCC: b           L_80087BD8
    // 0x80087BD0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_80087BD8;
    // 0x80087BD0: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x80087BD4: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
L_80087BD8:
    // 0x80087BD8: b           L_80087C54
    // 0x80087BDC: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
        goto L_80087C54;
    // 0x80087BDC: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
L_80087BE0:
    // 0x80087BE0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80087BE4: sw          $v0, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->r2;
    // 0x80087BE8: sw          $zero, 0x48($a3)
    MEM_W(0X48, ctx->r7) = 0;
    // 0x80087BEC: beq         $a0, $zero, L_80087C54
    if (ctx->r4 == 0) {
        // 0x80087BF0: sh          $v0, 0x1A($a3)
        MEM_H(0X1A, ctx->r7) = ctx->r2;
            goto L_80087C54;
    }
    // 0x80087BF0: sh          $v0, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r2;
    // 0x80087BF4: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80087BF8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80087BFC: jalr        $t9
    // 0x80087C00: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80087C00: nop

    after_0:
    // 0x80087C04: b           L_80087C58
    // 0x80087C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80087C58;
    // 0x80087C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80087C0C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80087C10:
    // 0x80087C10: sw          $v0, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->r2;
    // 0x80087C14: beql        $a0, $zero, L_80087C58
    if (ctx->r4 == 0) {
        // 0x80087C18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80087C58;
    }
    goto skip_2;
    // 0x80087C18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x80087C1C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80087C20: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80087C24: jalr        $t9
    // 0x80087C28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80087C28: nop

    after_1:
    // 0x80087C2C: b           L_80087C58
    // 0x80087C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80087C58;
    // 0x80087C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80087C34:
    // 0x80087C34: b           L_80087C54
    // 0x80087C38: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_80087C54;
    // 0x80087C38: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x80087C3C: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_80087C40:
    // 0x80087C40: beql        $a0, $zero, L_80087C58
    if (ctx->r4 == 0) {
        // 0x80087C44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80087C58;
    }
    goto skip_3;
    // 0x80087C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x80087C48: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80087C4C: jalr        $t9
    // 0x80087C50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80087C50: nop

    after_2:
L_80087C54:
    // 0x80087C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80087C58:
    // 0x80087C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80087C5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80087C60: jr          $ra
    // 0x80087C64: nop

    return;
    // 0x80087C64: nop

;}
RECOMP_FUNC void _pullSubFrame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087C68: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80087C6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80087C70: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80087C74: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80087C78: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80087C7C: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80087C80: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x80087C84: lw          $t6, 0x48($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X48);
    // 0x80087C88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087C8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80087C90: bne         $t6, $at, L_80087CA0
    if (ctx->r14 != ctx->r1) {
        // 0x80087C94: lw          $s1, 0x0($a0)
        ctx->r17 = MEM_W(ctx->r4, 0X0);
            goto L_80087CA0;
    }
    // 0x80087C94: lw          $s1, 0x0($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X0);
    // 0x80087C98: bne         $a3, $zero, L_80087CA8
    if (ctx->r7 != 0) {
        // 0x80087C9C: lw          $t8, 0x74($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X74);
            goto L_80087CA8;
    }
    // 0x80087C9C: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
L_80087CA0:
    // 0x80087CA0: b           L_80087F3C
    // 0x80087CA4: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
        goto L_80087F3C;
    // 0x80087CA4: lw          $v0, 0x74($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X74);
L_80087CA8:
    // 0x80087CA8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80087CAC: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x80087CB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80087CB4: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80087CB8: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x80087CBC: jalr        $t9
    // 0x80087CC0: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80087CC0: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    after_0:
    // 0x80087CC4: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80087CC8: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80087CCC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80087CD0: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x80087CD4: addiu       $s1, $v0, 0x10
    ctx->r17 = ADD32(ctx->r2, 0X10);
    // 0x80087CD8: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80087CDC: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x80087CE0: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80087CE4: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x80087CE8: lui         $at, 0x808
    ctx->r1 = S32(0X808 << 16);
    // 0x80087CEC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80087CF0: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x80087CF4: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x80087CF8: andi        $t0, $t5, 0xFFFF
    ctx->r8 = ctx->r13 & 0XFFFF;
    // 0x80087CFC: addiu       $t8, $t6, 0x440
    ctx->r24 = ADD32(ctx->r14, 0X440);
    // 0x80087D00: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80087D04: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x80087D08: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80087D0C: lh          $t2, 0x0($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X0);
    // 0x80087D10: addiu       $t3, $t2, 0x580
    ctx->r11 = ADD32(ctx->r10, 0X580);
    // 0x80087D14: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x80087D18: or          $t6, $t4, $at
    ctx->r14 = ctx->r12 | ctx->r1;
    // 0x80087D1C: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
    // 0x80087D20: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80087D24: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80087D28: addiu       $t7, $v1, 0x800
    ctx->r15 = ADD32(ctx->r3, 0X800);
    // 0x80087D2C: addiu       $t9, $v1, 0x6C0
    ctx->r25 = ADD32(ctx->r3, 0X6C0);
    // 0x80087D30: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x80087D34: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80087D38: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x80087D3C: sw          $t1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r9;
    // 0x80087D40: lw          $t2, 0x38($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X38);
    // 0x80087D44: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
    // 0x80087D48: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x80087D4C: beql        $t2, $zero, L_80087EFC
    if (ctx->r10 == 0) {
        // 0x80087D50: sw          $t7, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r15;
            goto L_80087EFC;
    }
    goto skip_0;
    // 0x80087D50: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    skip_0:
    // 0x80087D54: lh          $t3, 0x18($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X18);
    // 0x80087D58: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x80087D5C: lh          $t7, 0x1A($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1A);
    // 0x80087D60: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80087D64: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80087D68: lh          $t6, 0x47D0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X47D0);
    // 0x80087D6C: lh          $t8, 0x1C($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X1C);
    // 0x80087D70: lw          $t1, 0x34($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X34);
    // 0x80087D74: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80087D78: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80087D7C: addiu       $t2, $s0, 0x24
    ctx->r10 = ADD32(ctx->r16, 0X24);
    // 0x80087D80: cvt.d.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.d = CVT_D_W(ctx->f4.u32l);
    // 0x80087D84: mflo        $t5
    ctx->r13 = lo;
    // 0x80087D88: sra         $t9, $t5, 15
    ctx->r25 = S32(SIGNED(ctx->r13) >> 15);
    // 0x80087D8C: sh          $t9, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r25;
    // 0x80087D90: lh          $t0, 0x28($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X28);
    // 0x80087D94: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80087D98: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80087D9C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80087DA0: jal         0x80088064
    // 0x80087DA4: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    func_80088064(rdram, ctx);
        goto after_1;
    // 0x80087DA4: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    after_1:
    // 0x80087DA8: lh          $t3, 0x18($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X18);
    // 0x80087DAC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80087DB0: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x80087DB4: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80087DB8: negu        $t6, $t4
    ctx->r14 = SUB32(0, ctx->r12);
    // 0x80087DBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80087DC0: lh          $t7, 0x48CE($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X48CE);
    // 0x80087DC4: lh          $t5, 0x1A($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X1A);
    // 0x80087DC8: lh          $t0, 0x1E($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1E);
    // 0x80087DCC: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x80087DD0: multu       $t7, $t5
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80087DD4: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80087DD8: addiu       $t3, $s0, 0x2A
    ctx->r11 = ADD32(ctx->r16, 0X2A);
    // 0x80087DDC: cvt.d.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.d = CVT_D_W(ctx->f8.u32l);
    // 0x80087DE0: mflo        $t9
    ctx->r25 = lo;
    // 0x80087DE4: sra         $t8, $t9, 15
    ctx->r24 = S32(SIGNED(ctx->r25) >> 15);
    // 0x80087DE8: sh          $t8, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r24;
    // 0x80087DEC: lh          $t1, 0x2E($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2E);
    // 0x80087DF0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80087DF4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80087DF8: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80087DFC: jal         0x80088064
    // 0x80087E00: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    func_80088064(rdram, ctx);
        goto after_2;
    // 0x80087E00: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    after_2:
    // 0x80087E04: lh          $t4, 0x1C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X1C);
    // 0x80087E08: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x80087E0C: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x80087E10: lui         $at, 0x906
    ctx->r1 = S32(0X906 << 16);
    // 0x80087E14: andi        $t6, $t4, 0xFFFF
    ctx->r14 = ctx->r12 & 0XFFFF;
    // 0x80087E18: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80087E1C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80087E20: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80087E24: lh          $t5, 0x1E($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X1E);
    // 0x80087E28: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80087E2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80087E30: lui         $at, 0x904
    ctx->r1 = S32(0X904 << 16);
    // 0x80087E34: andi        $t9, $t5, 0xFFFF
    ctx->r25 = ctx->r13 & 0XFFFF;
    // 0x80087E38: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x80087E3C: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80087E40: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80087E44: lh          $t0, 0x28($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X28);
    // 0x80087E48: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80087E4C: lui         $at, 0x902
    ctx->r1 = S32(0X902 << 16);
    // 0x80087E50: andi        $t1, $t0, 0xFFFF
    ctx->r9 = ctx->r8 & 0XFFFF;
    // 0x80087E54: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x80087E58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80087E5C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x80087E60: lh          $t4, 0x26($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X26);
    // 0x80087E64: lhu         $t5, 0x24($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X24);
    // 0x80087E68: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80087E6C: sll         $t6, $t4, 16
    ctx->r14 = S32(ctx->r12 << 16);
    // 0x80087E70: or          $t9, $t6, $t5
    ctx->r25 = ctx->r14 | ctx->r13;
    // 0x80087E74: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80087E78: lh          $t8, 0x2E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2E);
    // 0x80087E7C: lui         $at, 0x900
    ctx->r1 = S32(0X900 << 16);
    // 0x80087E80: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80087E84: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x80087E88: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x80087E8C: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
    // 0x80087E90: lh          $t3, 0x2C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X2C);
    // 0x80087E94: lhu         $t6, 0x2A($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2A);
    // 0x80087E98: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80087E9C: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80087EA0: or          $t5, $t4, $t6
    ctx->r13 = ctx->r12 | ctx->r14;
    // 0x80087EA4: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x80087EA8: lh          $t9, 0x20($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X20);
    // 0x80087EAC: lui         $at, 0x908
    ctx->r1 = S32(0X908 << 16);
    // 0x80087EB0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80087EB4: andi        $t8, $t9, 0xFFFF
    ctx->r24 = ctx->r25 & 0XFFFF;
    // 0x80087EB8: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x80087EBC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80087EC0: lh          $t1, 0x22($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X22);
    // 0x80087EC4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80087EC8: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x80087ECC: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x80087ED0: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80087ED4: lui         $t3, 0x309
    ctx->r11 = S32(0X309 << 16);
    // 0x80087ED8: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x80087EDC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80087EE0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x80087EE4: jal         0x8007DE50
    // 0x80087EE8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x80087EE8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    after_3:
    // 0x80087EEC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80087EF0: b           L_80087F14
    // 0x80087EF4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_80087F14;
    // 0x80087EF4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80087EF8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_80087EFC:
    // 0x80087EFC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80087F00: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80087F04: jal         0x8007DE50
    // 0x80087F08: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x80087F08: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    after_4:
    // 0x80087F0C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80087F10: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80087F14:
    // 0x80087F14: lw          $t4, 0x64($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X64);
    // 0x80087F18: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80087F1C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80087F20: lh          $t6, 0x0($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X0);
    // 0x80087F24: addu        $t9, $t6, $t5
    ctx->r25 = ADD32(ctx->r14, ctx->r13);
    // 0x80087F28: sh          $t9, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r25;
    // 0x80087F2C: lw          $t8, 0x30($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X30);
    // 0x80087F30: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x80087F34: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80087F38: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
L_80087F3C:
    // 0x80087F3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80087F40: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80087F44: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80087F48: jr          $ra
    // 0x80087F4C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80087F4C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80087F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087F50: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x80087F54: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80087F58: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80087F5C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80087F60: c.eq.d      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.d == ctx->f2.d;
    // 0x80087F64: nop

    // 0x80087F68: bc1fl       L_80087F7C
    if (!c1cs) {
        // 0x80087F6C: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_80087F7C;
    }
    goto skip_0;
    // 0x80087F6C: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_0:
    // 0x80087F70: jr          $ra
    // 0x80087F74: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x80087F74: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x80087F78: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_80087F7C:
    // 0x80087F7C: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x80087F80: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80087F84: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80087F88: bc1fl       L_80087F9C
    if (!c1cs) {
        // 0x80087F8C: neg.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
            goto L_80087F9C;
    }
    goto skip_1;
    // 0x80087F8C: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
    skip_1:
    // 0x80087F90: b           L_80087F9C
    // 0x80087F94: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
        goto L_80087F9C;
    // 0x80087F94: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x80087F98: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
L_80087F9C:
    // 0x80087F9C: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x80087FA0: nop

    // 0x80087FA4: bc1fl       L_80087FDC
    if (!c1cs) {
        // 0x80087FA8: lui         $at, 0x3FE0
        ctx->r1 = S32(0X3FE0 << 16);
            goto L_80087FDC;
    }
    goto skip_2;
    // 0x80087FA8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    skip_2:
    // 0x80087FAC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80087FB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80087FB4: nop

L_80087FB8:
    // 0x80087FB8: mul.d       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f16.d);
    // 0x80087FBC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80087FC0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80087FC4: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80087FC8: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x80087FCC: nop

    // 0x80087FD0: bc1t        L_80087FB8
    if (c1cs) {
        // 0x80087FD4: nop
    
            goto L_80087FB8;
    }
    // 0x80087FD4: nop

    // 0x80087FD8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
L_80087FDC:
    // 0x80087FDC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80087FE0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80087FE4: nop

    // 0x80087FE8: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x80087FEC: nop

    // 0x80087FF0: bc1fl       L_80088018
    if (!c1cs) {
        // 0x80087FF4: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_80088018;
    }
    goto skip_3;
    // 0x80087FF4: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_3:
    // 0x80087FF8: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
L_80087FFC:
    // 0x80087FFC: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80088000: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x80088004: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80088008: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8008800C: bc1tl       L_80087FFC
    if (c1cs) {
        // 0x80088010: add.d       $f0, $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
            goto L_80087FFC;
    }
    goto skip_4;
    // 0x80088010: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
    skip_4:
    // 0x80088014: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_80088018:
    // 0x80088018: nop

    // 0x8008801C: bc1fl       L_80088030
    if (!c1cs) {
        // 0x80088020: neg.d       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
            goto L_80088030;
    }
    goto skip_5;
    // 0x80088020: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
    skip_5:
    // 0x80088024: b           L_80088030
    // 0x80088028: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
        goto L_80088030;
    // 0x80088028: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
    // 0x8008802C: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
L_80088030:
    // 0x80088030: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x80088034: jr          $ra
    // 0x80088038: nop

    return;
    // 0x80088038: nop

;}
RECOMP_FUNC void func_8008803C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008803C: beq         $a2, $zero, L_8008805C
    if (ctx->r6 == 0) {
        // 0x80088040: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8008805C;
    }
    // 0x80088040: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80088044: sllv        $t7, $t6, $a2
    ctx->r15 = S32(ctx->r14 << (ctx->r6 & 31));
    // 0x80088048: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8008804C: nop

    // 0x80088050: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80088054: mul.d       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f6.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f6.d);
    // 0x80088058: nop

L_8008805C:
    // 0x8008805C: jr          $ra
    // 0x80088060: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x80088060: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
;}
RECOMP_FUNC void func_80088064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088064: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80088068: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8008806C: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x80088070: mov.d       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.d = ctx->f12.d;
    // 0x80088074: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80088078: bne         $a0, $zero, L_800880AC
    if (ctx->r4 != 0) {
        // 0x8008807C: sdc1        $f22, 0x18($sp)
        CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
            goto L_800880AC;
    }
    // 0x8008807C: sdc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X18, ctx->r29);
    // 0x80088080: c.le.d      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.d <= ctx->f14.d;
    // 0x80088084: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80088088: lw          $t7, 0xCC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XCC);
    // 0x8008808C: lw          $t8, 0xCC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XCC);
    // 0x80088090: bc1f        L_800880A4
    if (!c1cs) {
        // 0x80088094: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800880A4;
    }
    // 0x80088094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80088098: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x8008809C: b           L_80088234
    // 0x800880A0: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80088234;
    // 0x800880A0: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_800880A4:
    // 0x800880A4: b           L_80088234
    // 0x800880A8: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
        goto L_80088234;
    // 0x800880A8: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
L_800880AC:
    // 0x800880AC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800880B0: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x800880B4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x800880B8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800880BC: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x800880C0: c.lt.d      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.d < ctx->f22.d;
    // 0x800880C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800880C8: addiu       $t0, $t0, 0x48D0
    ctx->r8 = ADD32(ctx->r8, 0X48D0);
    // 0x800880CC: addiu       $t2, $t0, 0x3C
    ctx->r10 = ADD32(ctx->r8, 0X3C);
    // 0x800880D0: bc1f        L_800880DC
    if (!c1cs) {
        // 0x800880D4: addiu       $t9, $sp, 0x38
        ctx->r25 = ADD32(ctx->r29, 0X38);
            goto L_800880DC;
    }
    // 0x800880D4: addiu       $t9, $sp, 0x38
    ctx->r25 = ADD32(ctx->r29, 0X38);
    // 0x800880D8: mov.d       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.d = ctx->f22.d;
L_800880DC:
    // 0x800880DC: c.le.d      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.d <= ctx->f4.d;
    // 0x800880E0: mtc1        $a0, $f6
    ctx->f6.u32l = ctx->r4;
    // 0x800880E4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800880E8: bc1f        L_800880FC
    if (!c1cs) {
        // 0x800880EC: cvt.d.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
            goto L_800880FC;
    }
    // 0x800880EC: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x800880F0: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x800880F4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800880F8: nop

L_800880FC:
    // 0x800880FC: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80088100: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
    // 0x80088104: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80088108: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x8008810C: lw          $at, -0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X8);
    // 0x80088110: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x80088114: lw          $at, -0x4($t0)
    ctx->r1 = MEM_W(ctx->r8, -0X4);
    // 0x80088118: bne         $t0, $t2, L_800880FC
    if (ctx->r8 != ctx->r10) {
        // 0x8008811C: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_800880FC;
    }
    // 0x8008811C: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80088120: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80088124: div.d       $f12, $f22, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f8.d); 
    ctx->f12.d = DIV_D(ctx->f22.d, ctx->f8.d);
    // 0x80088128: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8008812C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80088130: jal         0x8008803C
    // 0x80088134: sdc1        $f14, 0xC0($sp)
    CHECK_FR(ctx, 14);
    SD(ctx->f14.u64, 0XC0, ctx->r29);
    func_8008803C(rdram, ctx);
        goto after_0;
    // 0x80088134: sdc1        $f14, 0xC0($sp)
    CHECK_FR(ctx, 14);
    SD(ctx->f14.u64, 0XC0, ctx->r29);
    after_0:
    // 0x80088138: trunc.w.d   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8008813C: ldc1        $f14, 0xC0($sp)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r29, 0XC0);
    // 0x80088140: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x80088144: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80088148: div.d       $f12, $f14, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f20.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f20.d);
    // 0x8008814C: jal         0x80087F50
    // 0x80088150: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    func_80087F50(rdram, ctx);
        goto after_1;
    // 0x80088150: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    after_1:
    // 0x80088154: mov.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.d = ctx->f0.d;
    // 0x80088158: jal         0x8008803C
    // 0x8008815C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8008803C(rdram, ctx);
        goto after_2;
    // 0x8008815C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80088160: trunc.w.d   $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80088164: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x80088168: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8008816C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80088170: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x80088174: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80088178: ldc1        $f18, 0x6DE8($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X6DE8);
    // 0x8008817C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80088180: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x80088184: addu        $t7, $sp, $t6
    ctx->r15 = ADD32(ctx->r29, ctx->r14);
    // 0x80088188: ldc1        $f4, -0x8($t7)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r15, -0X8);
    // 0x8008818C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80088190: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x80088194: add.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d + ctx->f8.d;
    // 0x80088198: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x8008819C: mul.d       $f14, $f10, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f14.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x800881A0: jal         0x8008803C
    // 0x800881A4: sdc1        $f14, 0xA0($sp)
    CHECK_FR(ctx, 14);
    SD(ctx->f14.u64, 0XA0, ctx->r29);
    func_8008803C(rdram, ctx);
        goto after_3;
    // 0x800881A4: sdc1        $f14, 0xA0($sp)
    CHECK_FR(ctx, 14);
    SD(ctx->f14.u64, 0XA0, ctx->r29);
    after_3:
    // 0x800881A8: ldc1        $f14, 0xA0($sp)
    CHECK_FR(ctx, 14);
    ctx->f14.u64 = LD(ctx->r29, 0XA0);
    // 0x800881AC: lw          $v0, 0x84($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X84);
    // 0x800881B0: mov.d       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.d = ctx->f22.d;
    // 0x800881B4: div.d       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f0.d); 
    ctx->f14.d = DIV_D(ctx->f14.d, ctx->f0.d);
    // 0x800881B8: beq         $v0, $zero, L_800881E0
    if (ctx->r2 == 0) {
        // 0x800881BC: add.d       $f2, $f22, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f22.d + ctx->f14.d;
            goto L_800881E0;
    }
    // 0x800881BC: add.d       $f2, $f22, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f22.d + ctx->f14.d;
L_800881C0:
    // 0x800881C0: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x800881C4: beq         $t1, $zero, L_800881D4
    if (ctx->r9 == 0) {
        // 0x800881C8: sra         $t2, $v0, 1
        ctx->r10 = S32(SIGNED(ctx->r2) >> 1);
            goto L_800881D4;
    }
    // 0x800881C8: sra         $t2, $v0, 1
    ctx->r10 = S32(SIGNED(ctx->r2) >> 1);
    // 0x800881CC: mul.d       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f2.d);
    // 0x800881D0: nop

L_800881D4:
    // 0x800881D4: mul.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x800881D8: bne         $t2, $zero, L_800881C0
    if (ctx->r10 != 0) {
        // 0x800881DC: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_800881C0;
    }
    // 0x800881DC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_800881E0:
    // 0x800881E0: mul.d       $f0, $f12, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = MUL_D(ctx->f12.d, ctx->f12.d);
    // 0x800881E4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800881E8: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x800881EC: mul.d       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x800881F0: nop

    // 0x800881F4: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x800881F8: trunc.w.d   $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.u32l = TRUNC_W_D(ctx->f12.d);
    // 0x800881FC: mfc1        $v1, $f6
    ctx->r3 = (int32_t)ctx->f6.u32l;
    // 0x80088200: ldc1        $f6, 0x6DF0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X6DF0);
    // 0x80088204: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x80088208: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8008820C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80088210: nop

    // 0x80088214: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80088218: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8008821C: sub.d       $f18, $f12, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f12.d - ctx->f10.d;
    // 0x80088220: mul.d       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x80088224: trunc.w.d   $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x80088228: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x8008822C: nop

    // 0x80088230: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
L_80088234:
    // 0x80088234: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80088238: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x8008823C: ldc1        $f22, 0x18($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X18);
    // 0x80088240: jr          $ra
    // 0x80088244: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80088244: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void alEnvmixerPull2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088248: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8008824C: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80088250: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80088254: andi        $t8, $a3, 0xFFFF
    ctx->r24 = ctx->r7 & 0XFFFF;
    // 0x80088258: sra         $t9, $a1, 3
    ctx->r25 = S32(SIGNED(ctx->r5) >> 3);
    // 0x8008825C: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80088260: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80088264: bne         $t9, $zero, L_80088274
    if (ctx->r25 != 0) {
        // 0x80088268: or          $a1, $t9, $zero
        ctx->r5 = ctx->r25 | 0;
            goto L_80088274;
    }
    // 0x80088268: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8008826C: jr          $ra
    // 0x80088270: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x80088270: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80088274:
    // 0x80088274: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x80088278: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8008827C: mtc1        $a3, $f8
    ctx->f8.u32l = ctx->r7;
    // 0x80088280: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80088284: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80088288: bgez        $a3, L_800882A0
    if (SIGNED(ctx->r7) >= 0) {
        // 0x8008828C: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_800882A0;
    }
    // 0x8008828C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80088290: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80088294: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80088298: nop

    // 0x8008829C: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_800882A0:
    // 0x800882A0: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x800882A4: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800882A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800882AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800882B0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800882B4: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x800882B8: div.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800882BC: andi        $t1, $a1, 0x1
    ctx->r9 = ctx->r5 & 0X1;
L_800882C0:
    // 0x800882C0: beq         $t1, $zero, L_800882D0
    if (ctx->r9 == 0) {
        // 0x800882C4: sra         $t2, $a1, 1
        ctx->r10 = S32(SIGNED(ctx->r5) >> 1);
            goto L_800882D0;
    }
    // 0x800882C4: sra         $t2, $a1, 1
    ctx->r10 = S32(SIGNED(ctx->r5) >> 1);
    // 0x800882C8: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x800882CC: nop

L_800882D0:
    // 0x800882D0: beq         $t2, $zero, L_800882E8
    if (ctx->r10 == 0) {
        // 0x800882D4: or          $a1, $t2, $zero
        ctx->r5 = ctx->r10 | 0;
            goto L_800882E8;
    }
    // 0x800882D4: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x800882D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800882DC: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800882E0: bnel        $v0, $v1, L_800882C0
    if (ctx->r2 != ctx->r3) {
        // 0x800882E4: andi        $t1, $a1, 0x1
        ctx->r9 = ctx->r5 & 0X1;
            goto L_800882C0;
    }
    goto skip_0;
    // 0x800882E4: andi        $t1, $a1, 0x1
    ctx->r9 = ctx->r5 & 0X1;
    skip_0:
L_800882E8:
    // 0x800882E8: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x800882EC: nop

    // 0x800882F0: jr          $ra
    // 0x800882F4: nop

    return;
    // 0x800882F4: nop

;}
RECOMP_FUNC void alAuxBusPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088300: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80088304: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80088308: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x8008830C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80088310: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80088314: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80088318: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8008831C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80088320: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80088324: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80088328: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8008832C: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x80088330: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80088334: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x80088338: ori         $t6, $t6, 0x6C0
    ctx->r14 = ctx->r14 | 0X6C0;
    // 0x8008833C: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x80088340: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80088344: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x80088348: sw          $t7, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r15;
    // 0x8008834C: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80088350: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x80088354: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80088358: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x8008835C: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x80088360: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80088364: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80088368: blez        $t8, L_800883AC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8008836C: addiu       $s2, $s1, 0x10
        ctx->r18 = ADD32(ctx->r17, 0X10);
            goto L_800883AC;
    }
    // 0x8008836C: addiu       $s2, $s1, 0x10
    ctx->r18 = ADD32(ctx->r17, 0X10);
    // 0x80088370: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
L_80088374:
    // 0x80088374: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80088378: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8008837C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80088380: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80088384: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80088388: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8008838C: jalr        $t9
    // 0x80088390: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80088390: nop

    after_0:
    // 0x80088394: lw          $t0, 0x14($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X14);
    // 0x80088398: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008839C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800883A0: slt         $at, $s0, $t0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800883A4: bne         $at, $zero, L_80088374
    if (ctx->r1 != 0) {
        // 0x800883A8: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_80088374;
    }
    // 0x800883A8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_800883AC:
    // 0x800883AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800883B0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x800883B4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800883B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800883BC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800883C0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800883C4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800883C8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800883CC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800883D0: jr          $ra
    // 0x800883D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800883D4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void alAuxBusParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800883D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800883DC: bne         $a1, $at, L_80088400
    if (ctx->r5 != ctx->r1) {
        // 0x800883E0: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_80088400;
    }
    // 0x800883E0: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x800883E4: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x800883E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800883EC: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x800883F0: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x800883F4: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x800883F8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800883FC: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_80088400:
    // 0x80088400: jr          $ra
    // 0x80088404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80088404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void alSavePull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088410: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80088414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80088418: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008841C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80088420: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80088424: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80088428: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8008842C: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80088430: jalr        $t9
    // 0x80088434: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80088434: nop

    after_0:
    // 0x80088438: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8008843C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80088440: lui         $t2, 0x440
    ctx->r10 = S32(0X440 << 16);
    // 0x80088444: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x80088448: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8008844C: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x80088450: ori         $t2, $t2, 0x580
    ctx->r10 = ctx->r10 | 0X580;
    // 0x80088454: lui         $t1, 0xD00
    ctx->r9 = S32(0XD00 << 16);
    // 0x80088458: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x8008845C: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x80088460: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80088464: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80088468: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x8008846C: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80088470: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x80088474: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x80088478: sw          $t5, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r13;
    // 0x8008847C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80088480: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80088484: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x80088488: sw          $t7, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r15;
    // 0x8008848C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80088490: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80088494: jr          $ra
    // 0x80088498: nop

    return;
    // 0x80088498: nop

;}
RECOMP_FUNC void alSaveParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008849C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800884A0: beq         $a1, $at, L_800884BC
    if (ctx->r5 == ctx->r1) {
        // 0x800884A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800884BC;
    }
    // 0x800884A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800884A8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800884AC: beql        $a1, $at, L_800884C8
    if (ctx->r5 == ctx->r1) {
        // 0x800884B0: sw          $a2, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r6;
            goto L_800884C8;
    }
    goto skip_0;
    // 0x800884B0: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    skip_0:
    // 0x800884B4: jr          $ra
    // 0x800884B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800884B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800884BC:
    // 0x800884BC: jr          $ra
    // 0x800884C0: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    return;
    // 0x800884C0: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x800884C4: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
L_800884C8:
    // 0x800884C8: jr          $ra
    // 0x800884CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800884CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void _Litob(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088880: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80088884: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80088888: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8008888C: addiu       $v1, $zero, 0x58
    ctx->r3 = ADD32(0, 0X58);
    // 0x80088890: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80088894: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80088898: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8008889C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800888A0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800888A4: bne         $v1, $v0, L_800888B8
    if (ctx->r3 != ctx->r2) {
        // 0x800888A8: sw          $a1, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r5;
            goto L_800888B8;
    }
    // 0x800888A8: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x800888AC: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x800888B0: b           L_800888C0
    // 0x800888B4: addiu       $s3, $s3, 0x4A14
    ctx->r19 = ADD32(ctx->r19, 0X4A14);
        goto L_800888C0;
    // 0x800888B4: addiu       $s3, $s3, 0x4A14
    ctx->r19 = ADD32(ctx->r19, 0X4A14);
L_800888B8:
    // 0x800888B8: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x800888BC: addiu       $s3, $s3, 0x4A00
    ctx->r19 = ADD32(ctx->r19, 0X4A00);
L_800888C0:
    // 0x800888C0: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x800888C4: bne         $v0, $at, L_800888D4
    if (ctx->r2 != ctx->r1) {
        // 0x800888C8: addiu       $s0, $zero, 0x18
        ctx->r16 = ADD32(0, 0X18);
            goto L_800888D4;
    }
    // 0x800888C8: addiu       $s0, $zero, 0x18
    ctx->r16 = ADD32(0, 0X18);
    // 0x800888CC: b           L_800888F4
    // 0x800888D0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
        goto L_800888F4;
    // 0x800888D0: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
L_800888D4:
    // 0x800888D4: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x800888D8: beq         $v0, $at, L_800888F0
    if (ctx->r2 == ctx->r1) {
        // 0x800888DC: addiu       $t0, $zero, 0x10
        ctx->r8 = ADD32(0, 0X10);
            goto L_800888F0;
    }
    // 0x800888DC: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x800888E0: beq         $v1, $v0, L_800888F0
    if (ctx->r3 == ctx->r2) {
        // 0x800888E4: nop
    
            goto L_800888F0;
    }
    // 0x800888E4: nop

    // 0x800888E8: b           L_800888F0
    // 0x800888EC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
        goto L_800888F0;
    // 0x800888EC: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
L_800888F0:
    // 0x800888F0: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_800888F4:
    // 0x800888F4: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x800888F8: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x800888FC: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80088900: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x80088904: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x80088908: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8008890C: beq         $v0, $at, L_80088920
    if (ctx->r2 == ctx->r1) {
        // 0x80088910: sw          $t9, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r25;
            goto L_80088920;
    }
    // 0x80088910: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x80088914: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x80088918: bnel        $v0, $at, L_8008895C
    if (ctx->r2 != ctx->r1) {
        // 0x8008891C: lw          $t2, 0x60($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X60);
            goto L_8008895C;
    }
    goto skip_0;
    // 0x8008891C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    skip_0:
L_80088920:
    // 0x80088920: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80088924: bgtzl       $t4, L_8008895C
    if (SIGNED(ctx->r12) > 0) {
        // 0x80088928: lw          $t2, 0x60($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X60);
            goto L_8008895C;
    }
    goto skip_1;
    // 0x80088928: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    skip_1:
    // 0x8008892C: bltz        $t4, L_8008893C
    if (SIGNED(ctx->r12) < 0) {
        // 0x80088930: lw          $t6, 0x60($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X60);
            goto L_8008893C;
    }
    // 0x80088930: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80088934: b           L_8008895C
    // 0x80088938: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
        goto L_8008895C;
    // 0x80088938: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
L_8008893C:
    // 0x8008893C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x80088940: nor         $t8, $t6, $zero
    ctx->r24 = ~(ctx->r14 | 0);
    // 0x80088944: sltiu       $at, $t7, 0x1
    ctx->r1 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x80088948: addu        $t8, $t8, $at
    ctx->r24 = ADD32(ctx->r24, ctx->r1);
    // 0x8008894C: negu        $t9, $t7
    ctx->r25 = SUB32(0, ctx->r15);
    // 0x80088950: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x80088954: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x80088958: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
L_8008895C:
    // 0x8008895C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x80088960: addiu       $t0, $zero, 0x17
    ctx->r8 = ADD32(0, 0X17);
    // 0x80088964: bne         $t2, $zero, L_80088980
    if (ctx->r10 != 0) {
        // 0x80088968: lw          $a0, 0x60($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X60);
            goto L_80088980;
    }
    // 0x80088968: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8008896C: bnel        $t3, $zero, L_80088984
    if (ctx->r11 != 0) {
        // 0x80088970: addiu       $s0, $zero, 0x17
        ctx->r16 = ADD32(0, 0X17);
            goto L_80088984;
    }
    goto skip_2;
    // 0x80088970: addiu       $s0, $zero, 0x17
    ctx->r16 = ADD32(0, 0X17);
    skip_2:
    // 0x80088974: lw          $t4, 0x24($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X24);
    // 0x80088978: beql        $t4, $zero, L_800889BC
    if (ctx->r12 == 0) {
        // 0x8008897C: addiu       $s2, $sp, 0x78
        ctx->r18 = ADD32(ctx->r29, 0X78);
            goto L_800889BC;
    }
    goto skip_3;
    // 0x8008897C: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    skip_3:
L_80088980:
    // 0x80088980: addiu       $s0, $zero, 0x17
    ctx->r16 = ADD32(0, 0X17);
L_80088984:
    // 0x80088984: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80088988: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8008898C: sra         $a2, $t1, 31
    ctx->r6 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80088990: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x80088994: jal         0x8008073C
    // 0x80088998: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    __ull_rem_recomp(rdram, ctx);
        goto after_0;
    // 0x80088998: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_0:
    // 0x8008899C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800889A0: addu        $t6, $v1, $s3
    ctx->r14 = ADD32(ctx->r3, ctx->r19);
    // 0x800889A4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800889A8: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
    // 0x800889AC: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x800889B0: addu        $t8, $s2, $t0
    ctx->r24 = ADD32(ctx->r18, ctx->r8);
    // 0x800889B4: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x800889B8: addiu       $s2, $sp, 0x78
    ctx->r18 = ADD32(ctx->r29, 0X78);
L_800889BC:
    // 0x800889BC: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x800889C0: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x800889C4: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x800889C8: sra         $a2, $t1, 31
    ctx->r6 = S32(SIGNED(ctx->r9) >> 31);
    // 0x800889CC: jal         0x80080778
    // 0x800889D0: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    __ull_div_recomp(rdram, ctx);
        goto after_1;
    // 0x800889D0: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    after_1:
    // 0x800889D4: lw          $t1, 0x70($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X70);
    // 0x800889D8: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
    // 0x800889DC: bltz        $v0, L_80088A8C
    if (SIGNED(ctx->r2) < 0) {
        // 0x800889E0: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_80088A8C;
    }
    // 0x800889E0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x800889E4: bgtz        $v0, L_800889F4
    if (SIGNED(ctx->r2) > 0) {
        // 0x800889E8: nop
    
            goto L_800889F4;
    }
    // 0x800889E8: nop

    // 0x800889EC: beql        $v1, $zero, L_80088A90
    if (ctx->r3 == 0) {
        // 0x800889F0: addiu       $t4, $zero, 0x18
        ctx->r12 = ADD32(0, 0X18);
            goto L_80088A90;
    }
    goto skip_4;
    // 0x800889F0: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    skip_4:
L_800889F4:
    // 0x800889F4: blez        $s0, L_80088A8C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800889F8: sra         $t4, $t1, 31
        ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
            goto L_80088A8C;
    }
    // 0x800889F8: sra         $t4, $t1, 31
    ctx->r12 = S32(SIGNED(ctx->r9) >> 31);
    // 0x800889FC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80088A00: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x80088A04: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80088A08: sw          $t4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r12;
    // 0x80088A0C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x80088A10: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x80088A14: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
L_80088A18:
    // 0x80088A18: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80088A1C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80088A20: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80088A24: lw          $a3, 0x44($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X44);
    // 0x80088A28: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80088A2C: jal         0x8008A9F4
    // 0x80088A30: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    lldiv_recomp(rdram, ctx);
        goto after_2;
    // 0x80088A30: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_2:
    // 0x80088A34: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80088A38: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80088A3C: addiu       $a0, $s0, -0x1
    ctx->r4 = ADD32(ctx->r16, -0X1);
    // 0x80088A40: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80088A44: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x80088A48: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80088A4C: addu        $t7, $s2, $a0
    ctx->r15 = ADD32(ctx->r18, ctx->r4);
    // 0x80088A50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80088A54: addu        $t5, $t3, $s3
    ctx->r13 = ADD32(ctx->r11, ctx->r19);
    // 0x80088A58: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x80088A5C: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80088A60: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80088A64: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x80088A68: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x80088A6C: bltz        $t8, L_80088A8C
    if (SIGNED(ctx->r24) < 0) {
        // 0x80088A70: sw          $t9, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r25;
            goto L_80088A8C;
    }
    // 0x80088A70: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80088A74: bgtz        $t8, L_80088A84
    if (SIGNED(ctx->r24) > 0) {
        // 0x80088A78: nop
    
            goto L_80088A84;
    }
    // 0x80088A78: nop

    // 0x80088A7C: beql        $t9, $zero, L_80088A90
    if (ctx->r25 == 0) {
        // 0x80088A80: addiu       $t4, $zero, 0x18
        ctx->r12 = ADD32(0, 0X18);
            goto L_80088A90;
    }
    goto skip_5;
    // 0x80088A80: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
    skip_5:
L_80088A84:
    // 0x80088A84: bgtzl       $s0, L_80088A18
    if (SIGNED(ctx->r16) > 0) {
        // 0x80088A88: lw          $t6, 0x38($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X38);
            goto L_80088A18;
    }
    goto skip_6;
    // 0x80088A88: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    skip_6:
L_80088A8C:
    // 0x80088A8C: addiu       $t4, $zero, 0x18
    ctx->r12 = ADD32(0, 0X18);
L_80088A90:
    // 0x80088A90: subu        $a2, $t4, $s0
    ctx->r6 = SUB32(ctx->r12, ctx->r16);
    // 0x80088A94: sw          $a2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r6;
    // 0x80088A98: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x80088A9C: jal         0x80076BF8
    // 0x80088AA0: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80088AA0: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    after_3:
    // 0x80088AA4: lw          $a1, 0x14($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X14);
    // 0x80088AA8: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x80088AAC: slt         $at, $a1, $a0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80088AB0: beq         $at, $zero, L_80088ABC
    if (ctx->r1 == 0) {
        // 0x80088AB4: subu        $t5, $a0, $a1
        ctx->r13 = SUB32(ctx->r4, ctx->r5);
            goto L_80088ABC;
    }
    // 0x80088AB4: subu        $t5, $a0, $a1
    ctx->r13 = SUB32(ctx->r4, ctx->r5);
    // 0x80088AB8: sw          $t5, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r13;
L_80088ABC:
    // 0x80088ABC: bgezl       $a0, L_80088B00
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80088AC0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80088B00;
    }
    goto skip_7;
    // 0x80088AC0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_7:
    // 0x80088AC4: lw          $t6, 0x30($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X30);
    // 0x80088AC8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80088ACC: andi        $t7, $t6, 0x14
    ctx->r15 = ctx->r14 & 0X14;
    // 0x80088AD0: bnel        $t7, $at, L_80088B00
    if (ctx->r15 != ctx->r1) {
        // 0x80088AD4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80088B00;
    }
    goto skip_8;
    // 0x80088AD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_8:
    // 0x80088AD8: lw          $t8, 0x28($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X28);
    // 0x80088ADC: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x80088AE0: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80088AE4: subu        $t2, $t8, $t9
    ctx->r10 = SUB32(ctx->r24, ctx->r25);
    // 0x80088AE8: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x80088AEC: subu        $s0, $t3, $a1
    ctx->r16 = SUB32(ctx->r11, ctx->r5);
    // 0x80088AF0: blez        $s0, L_80088AFC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80088AF4: addu        $t4, $v0, $s0
        ctx->r12 = ADD32(ctx->r2, ctx->r16);
            goto L_80088AFC;
    }
    // 0x80088AF4: addu        $t4, $v0, $s0
    ctx->r12 = ADD32(ctx->r2, ctx->r16);
    // 0x80088AF8: sw          $t4, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r12;
L_80088AFC:
    // 0x80088AFC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80088B00:
    // 0x80088B00: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80088B04: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80088B08: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80088B0C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80088B10: jr          $ra
    // 0x80088B14: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80088B14: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void _Ldtob(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088B20: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80088B24: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80088B28: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80088B2C: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80088B30: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80088B34: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80088B38: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80088B3C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80088B40: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80088B44: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80088B48: sw          $a1, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r5;
    // 0x80088B4C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80088B50: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80088B54: addiu       $s2, $sp, 0xA0
    ctx->r18 = ADD32(ctx->r29, 0XA0);
    // 0x80088B58: bgez        $v0, L_80088B6C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80088B5C: ldc1        $f20, 0x0($a0)
        CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r4, 0X0);
            goto L_80088B6C;
    }
    // 0x80088B5C: ldc1        $f20, 0x0($a0)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r4, 0X0);
    // 0x80088B60: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80088B64: b           L_80088B90
    // 0x80088B68: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
        goto L_80088B90;
    // 0x80088B68: sw          $t6, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r14;
L_80088B6C:
    // 0x80088B6C: bne         $v0, $zero, L_80088B90
    if (ctx->r2 != 0) {
        // 0x80088B70: lbu         $t7, 0xC7($sp)
        ctx->r15 = MEM_BU(ctx->r29, 0XC7);
            goto L_80088B90;
    }
    // 0x80088B70: lbu         $t7, 0xC7($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XC7);
    // 0x80088B74: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x80088B78: beq         $t7, $at, L_80088B88
    if (ctx->r15 == ctx->r1) {
        // 0x80088B7C: sw          $t7, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r15;
            goto L_80088B88;
    }
    // 0x80088B7C: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x80088B80: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x80088B84: bne         $t7, $at, L_80088B90
    if (ctx->r15 != ctx->r1) {
        // 0x80088B88: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80088B90;
    }
L_80088B88:
    // 0x80088B88: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80088B8C: sw          $t8, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r24;
L_80088B90:
    // 0x80088B90: addiu       $a0, $sp, 0x8A
    ctx->r4 = ADD32(ctx->r29, 0X8A);
    // 0x80088B94: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80088B98: jal         0x80088FB0
    // 0x80088B9C: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    _Ldtob2(rdram, ctx);
        goto after_0;
    // 0x80088B9C: sw          $a2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r6;
    after_0:
    // 0x80088BA0: blez        $v0, L_80088BE0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80088BA4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80088BE0;
    }
    // 0x80088BA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80088BA8: bne         $v0, $at, L_80088BBC
    if (ctx->r2 != ctx->r1) {
        // 0x80088BAC: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_80088BBC;
    }
    // 0x80088BAC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80088BB0: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80088BB4: b           L_80088BC0
    // 0x80088BB8: addiu       $a1, $a1, 0x6E48
    ctx->r5 = ADD32(ctx->r5, 0X6E48);
        goto L_80088BC0;
    // 0x80088BB8: addiu       $a1, $a1, 0x6E48
    ctx->r5 = ADD32(ctx->r5, 0X6E48);
L_80088BBC:
    // 0x80088BBC: addiu       $a1, $a1, 0x6E4C
    ctx->r5 = ADD32(ctx->r5, 0X6E4C);
L_80088BC0:
    // 0x80088BC0: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x80088BC4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80088BC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80088BCC: sw          $t9, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r25;
    // 0x80088BD0: jal         0x80076BF8
    // 0x80088BD4: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80088BD4: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    after_1:
    // 0x80088BD8: b           L_80088F88
    // 0x80088BDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
        goto L_80088F88;
    // 0x80088BDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80088BE0:
    // 0x80088BE0: bne         $v0, $zero, L_80088BF0
    if (ctx->r2 != 0) {
        // 0x80088BE4: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_80088BF0;
    }
    // 0x80088BE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80088BE8: b           L_80088F6C
    // 0x80088BEC: sh          $zero, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = 0;
        goto L_80088F6C;
    // 0x80088BEC: sh          $zero, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = 0;
L_80088BF0:
    // 0x80088BF0: mtc1        $zero, $f23
    ctx->f_odd[(23 - 1) * 2] = 0;
    // 0x80088BF4: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80088BF8: lbu         $t0, 0xC7($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XC7);
    // 0x80088BFC: lh          $t1, 0x8A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X8A);
    // 0x80088C00: c.lt.d      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.d < ctx->f22.d;
    // 0x80088C04: addiu       $at, $zero, 0x7597
    ctx->r1 = ADD32(0, 0X7597);
    // 0x80088C08: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80088C0C: addiu       $s2, $sp, 0xA1
    ctx->r18 = ADD32(ctx->r29, 0XA1);
    // 0x80088C10: bc1f        L_80088C1C
    if (!c1cs) {
        // 0x80088C14: sw          $t0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r8;
            goto L_80088C1C;
    }
    // 0x80088C14: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x80088C18: neg.d       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f20.d = -ctx->f20.d;
L_80088C1C:
    // 0x80088C1C: multu       $t1, $at
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80088C20: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x80088C24: ori         $at, $at, 0x86A0
    ctx->r1 = ctx->r1 | 0X86A0;
    // 0x80088C28: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80088C2C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80088C30: mflo        $t2
    ctx->r10 = lo;
    // 0x80088C34: nop

    // 0x80088C38: nop

    // 0x80088C3C: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x80088C40: mflo        $t3
    ctx->r11 = lo;
    // 0x80088C44: addiu       $t4, $t3, -0x4
    ctx->r12 = ADD32(ctx->r11, -0X4);
    // 0x80088C48: sll         $t5, $t4, 16
    ctx->r13 = S32(ctx->r12 << 16);
    // 0x80088C4C: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80088C50: bgez        $t6, L_80088CB4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80088C54: sh          $t4, 0x8A($sp)
        MEM_H(0X8A, ctx->r29) = ctx->r12;
            goto L_80088CB4;
    }
    // 0x80088C54: sh          $t4, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r12;
    // 0x80088C58: sll         $t8, $t4, 16
    ctx->r24 = S32(ctx->r12 << 16);
    // 0x80088C5C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80088C60: subu        $a0, $t7, $t9
    ctx->r4 = SUB32(ctx->r15, ctx->r25);
    // 0x80088C64: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80088C68: and         $v0, $a0, $at
    ctx->r2 = ctx->r4 & ctx->r1;
    // 0x80088C6C: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
    // 0x80088C70: blez        $v0, L_80088D24
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80088C74: sh          $t1, 0x8A($sp)
        MEM_H(0X8A, ctx->r29) = ctx->r9;
            goto L_80088D24;
    }
    // 0x80088C74: sh          $t1, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r9;
    // 0x80088C78: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80088C7C: addiu       $a0, $a0, 0x6E00
    ctx->r4 = ADD32(ctx->r4, 0X6E00);
L_80088C80:
    // 0x80088C80: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x80088C84: beq         $t2, $zero, L_80088CA0
    if (ctx->r10 == 0) {
        // 0x80088C88: sra         $t6, $v0, 1
        ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80088CA0;
    }
    // 0x80088C88: sra         $t6, $v0, 1
    ctx->r14 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80088C8C: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    // 0x80088C90: addu        $t5, $a0, $t3
    ctx->r13 = ADD32(ctx->r4, ctx->r11);
    // 0x80088C94: ldc1        $f4, 0x0($t5)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r13, 0X0);
    // 0x80088C98: mul.d       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f4.d); 
    ctx->f20.d = MUL_D(ctx->f20.d, ctx->f4.d);
    // 0x80088C9C: nop

L_80088CA0:
    // 0x80088CA0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80088CA4: bgtz        $t6, L_80088C80
    if (SIGNED(ctx->r14) > 0) {
        // 0x80088CA8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80088C80;
    }
    // 0x80088CA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80088CAC: b           L_80088D28
    // 0x80088CB0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
        goto L_80088D28;
    // 0x80088CB0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
L_80088CB4:
    // 0x80088CB4: lh          $t4, 0x8A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X8A);
    // 0x80088CB8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80088CBC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80088CC0: blez        $t4, L_80088D24
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80088CC4: andi        $t8, $t4, 0xFFFC
        ctx->r24 = ctx->r12 & 0XFFFC;
            goto L_80088D24;
    }
    // 0x80088CC4: andi        $t8, $t4, 0xFFFC
    ctx->r24 = ctx->r12 & 0XFFFC;
    // 0x80088CC8: sll         $v0, $t8, 16
    ctx->r2 = S32(ctx->r24 << 16);
    // 0x80088CCC: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80088CD0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80088CD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80088CD8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80088CDC: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80088CE0: sh          $t8, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r24;
    // 0x80088CE4: blez        $t0, L_80088D20
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80088CE8: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_80088D20;
    }
    // 0x80088CE8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80088CEC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80088CF0: addiu       $a0, $a0, 0x6E00
    ctx->r4 = ADD32(ctx->r4, 0X6E00);
L_80088CF4:
    // 0x80088CF4: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x80088CF8: beq         $t1, $zero, L_80088D14
    if (ctx->r9 == 0) {
        // 0x80088CFC: sra         $t5, $v0, 1
        ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80088D14;
    }
    // 0x80088CFC: sra         $t5, $v0, 1
    ctx->r13 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80088D00: sll         $t2, $v1, 3
    ctx->r10 = S32(ctx->r3 << 3);
    // 0x80088D04: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80088D08: ldc1        $f6, 0x0($t3)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r11, 0X0);
    // 0x80088D0C: mul.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x80088D10: nop

L_80088D14:
    // 0x80088D14: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x80088D18: bgtz        $t5, L_80088CF4
    if (SIGNED(ctx->r13) > 0) {
        // 0x80088D1C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80088CF4;
    }
    // 0x80088D1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80088D20:
    // 0x80088D20: div.d       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f0.d); 
    ctx->f20.d = DIV_D(ctx->f20.d, ctx->f0.d);
L_80088D24:
    // 0x80088D24: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
L_80088D28:
    // 0x80088D28: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x80088D2C: lw          $t4, 0xC0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC0);
    // 0x80088D30: bne         $t6, $at, L_80088D44
    if (ctx->r14 != ctx->r1) {
        // 0x80088D34: addiu       $t8, $zero, 0x30
        ctx->r24 = ADD32(0, 0X30);
            goto L_80088D44;
    }
    // 0x80088D34: addiu       $t8, $zero, 0x30
    ctx->r24 = ADD32(0, 0X30);
    // 0x80088D38: lh          $a1, 0x8A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X8A);
    // 0x80088D3C: b           L_80088D44
    // 0x80088D40: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
        goto L_80088D44;
    // 0x80088D40: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
L_80088D44:
    // 0x80088D44: lw          $t7, 0x24($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X24);
    // 0x80088D48: addu        $s5, $a1, $t7
    ctx->r21 = ADD32(ctx->r5, ctx->r15);
    // 0x80088D4C: slti        $at, $s5, 0x14
    ctx->r1 = SIGNED(ctx->r21) < 0X14 ? 1 : 0;
    // 0x80088D50: bne         $at, $zero, L_80088D5C
    if (ctx->r1 != 0) {
        // 0x80088D54: nop
    
            goto L_80088D5C;
    }
    // 0x80088D54: nop

    // 0x80088D58: addiu       $s5, $zero, 0x13
    ctx->r21 = ADD32(0, 0X13);
L_80088D5C:
    // 0x80088D5C: blez        $s5, L_80088E24
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80088D60: sb          $t8, 0xA0($sp)
        MEM_B(0XA0, ctx->r29) = ctx->r24;
            goto L_80088E24;
    }
    // 0x80088D60: sb          $t8, 0xA0($sp)
    MEM_B(0XA0, ctx->r29) = ctx->r24;
    // 0x80088D64: c.lt.d      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.d < ctx->f20.d;
    // 0x80088D68: addiu       $s4, $zero, 0x30
    ctx->r20 = ADD32(0, 0X30);
    // 0x80088D6C: addiu       $s3, $sp, 0x64
    ctx->r19 = ADD32(ctx->r29, 0X64);
    // 0x80088D70: bc1fl       L_80088E28
    if (!c1cs) {
        // 0x80088D74: lh          $t5, 0x8A($sp)
        ctx->r13 = MEM_H(ctx->r29, 0X8A);
            goto L_80088E28;
    }
    goto skip_0;
    // 0x80088D74: lh          $t5, 0x8A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X8A);
    skip_0:
    // 0x80088D78: trunc.w.d   $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_D(ctx->f20.d);
L_80088D7C:
    // 0x80088D7C: addiu       $s5, $s5, -0x8
    ctx->r21 = ADD32(ctx->r21, -0X8);
    // 0x80088D80: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80088D84: mfc1        $s1, $f8
    ctx->r17 = (int32_t)ctx->f8.u32l;
    // 0x80088D88: blez        $s5, L_80088DAC
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80088D8C: nop
    
            goto L_80088DAC;
    }
    // 0x80088D8C: nop

    // 0x80088D90: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x80088D94: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80088D98: ldc1        $f4, 0x6E58($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X6E58);
    // 0x80088D9C: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80088DA0: sub.d       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f20.d - ctx->f16.d;
    // 0x80088DA4: mul.d       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f20.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80088DA8: nop

L_80088DAC:
    // 0x80088DAC: blez        $s1, L_80088DF4
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80088DB0: addiu       $s0, $zero, 0x8
        ctx->r16 = ADD32(0, 0X8);
            goto L_80088DF4;
    }
    // 0x80088DB0: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x80088DB4: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x80088DB8: bltz        $s0, L_80088DF4
    if (SIGNED(ctx->r16) < 0) {
        // 0x80088DBC: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80088DF4;
    }
    // 0x80088DBC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80088DC0:
    // 0x80088DC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80088DC4: jal         0x8008A970
    // 0x80088DC8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ldiv_recomp(rdram, ctx);
        goto after_2;
    // 0x80088DC8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
    // 0x80088DCC: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x80088DD0: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80088DD4: addiu       $t1, $t0, 0x30
    ctx->r9 = ADD32(ctx->r8, 0X30);
    // 0x80088DD8: sb          $t1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r9;
    // 0x80088DDC: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x80088DE0: blezl       $s1, L_80088DF8
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80088DE4: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_80088DF8;
    }
    goto skip_1;
    // 0x80088DE4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_1:
    // 0x80088DE8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80088DEC: bgezl       $s0, L_80088DC0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80088DF0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80088DC0;
    }
    goto skip_2;
    // 0x80088DF0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_2:
L_80088DF4:
    // 0x80088DF4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_80088DF8:
    // 0x80088DF8: bltz        $s0, L_80088E0C
    if (SIGNED(ctx->r16) < 0) {
        // 0x80088DFC: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_80088E0C;
    }
L_80088DFC:
    // 0x80088DFC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80088E00: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80088E04: bgez        $s0, L_80088DFC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80088E08: sb          $s4, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r20;
            goto L_80088DFC;
    }
    // 0x80088E08: sb          $s4, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r20;
L_80088E0C:
    // 0x80088E0C: blez        $s5, L_80088E24
    if (SIGNED(ctx->r21) <= 0) {
        // 0x80088E10: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80088E24;
    }
    // 0x80088E10: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80088E14: c.lt.d      $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f22.d < ctx->f20.d;
    // 0x80088E18: nop

    // 0x80088E1C: bc1tl       L_80088D7C
    if (c1cs) {
        // 0x80088E20: trunc.w.d   $f8, $f20
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_D(ctx->f20.d);
            goto L_80088D7C;
    }
    goto skip_3;
    // 0x80088E20: trunc.w.d   $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    ctx->f8.u32l = TRUNC_W_D(ctx->f20.d);
    skip_3:
L_80088E24:
    // 0x80088E24: lh          $t5, 0x8A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X8A);
L_80088E28:
    // 0x80088E28: lbu         $t4, 0xA1($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XA1);
    // 0x80088E2C: addiu       $t3, $sp, 0xA0
    ctx->r11 = ADD32(ctx->r29, 0XA0);
    // 0x80088E30: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80088E34: subu        $s5, $s2, $t3
    ctx->r21 = SUB32(ctx->r18, ctx->r11);
    // 0x80088E38: addiu       $t6, $t5, 0x7
    ctx->r14 = ADD32(ctx->r13, 0X7);
    // 0x80088E3C: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x80088E40: sh          $t6, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r14;
    // 0x80088E44: bne         $v0, $t4, L_80088E6C
    if (ctx->r2 != ctx->r12) {
        // 0x80088E48: addiu       $s2, $sp, 0xA1
        ctx->r18 = ADD32(ctx->r29, 0XA1);
            goto L_80088E6C;
    }
    // 0x80088E48: addiu       $s2, $sp, 0xA1
    ctx->r18 = ADD32(ctx->r29, 0XA1);
    // 0x80088E4C: lh          $t7, 0x8A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X8A);
L_80088E50:
    // 0x80088E50: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80088E54: addiu       $s5, $s5, -0x1
    ctx->r21 = ADD32(ctx->r21, -0X1);
    // 0x80088E58: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80088E5C: sh          $t8, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r24;
    // 0x80088E60: lbu         $t9, 0x0($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X0);
    // 0x80088E64: beql        $v0, $t9, L_80088E50
    if (ctx->r2 == ctx->r25) {
        // 0x80088E68: lh          $t7, 0x8A($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X8A);
            goto L_80088E50;
    }
    goto skip_4;
    // 0x80088E68: lh          $t7, 0x8A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X8A);
    skip_4:
L_80088E6C:
    // 0x80088E6C: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80088E70: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x80088E74: lw          $t2, 0xC0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC0);
    // 0x80088E78: bne         $t0, $at, L_80088E8C
    if (ctx->r8 != ctx->r1) {
        // 0x80088E7C: lw          $t1, 0x50($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X50);
            goto L_80088E8C;
    }
    // 0x80088E7C: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80088E80: lh          $a1, 0x8A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X8A);
    // 0x80088E84: b           L_80088EAC
    // 0x80088E88: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_80088EAC;
    // 0x80088E88: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_80088E8C:
    // 0x80088E8C: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x80088E90: beq         $t1, $at, L_80088EA0
    if (ctx->r9 == ctx->r1) {
        // 0x80088E94: addiu       $at, $zero, 0x45
        ctx->r1 = ADD32(0, 0X45);
            goto L_80088EA0;
    }
    // 0x80088E94: addiu       $at, $zero, 0x45
    ctx->r1 = ADD32(0, 0X45);
    // 0x80088E98: bne         $t1, $at, L_80088EA8
    if (ctx->r9 != ctx->r1) {
        // 0x80088E9C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80088EA8;
    }
    // 0x80088E9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80088EA0:
    // 0x80088EA0: b           L_80088EA8
    // 0x80088EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80088EA8;
    // 0x80088EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80088EA8:
    // 0x80088EA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80088EAC:
    // 0x80088EAC: lw          $t3, 0x24($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X24);
    // 0x80088EB0: addu        $a3, $a1, $t3
    ctx->r7 = ADD32(ctx->r5, ctx->r11);
    // 0x80088EB4: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x80088EB8: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80088EBC: slt         $at, $s5, $a3
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80088EC0: beq         $at, $zero, L_80088ED4
    if (ctx->r1 == 0) {
        // 0x80088EC4: nop
    
            goto L_80088ED4;
    }
    // 0x80088EC4: nop

    // 0x80088EC8: sll         $a3, $s5, 16
    ctx->r7 = S32(ctx->r21 << 16);
    // 0x80088ECC: sra         $t4, $a3, 16
    ctx->r12 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80088ED0: or          $a3, $t4, $zero
    ctx->r7 = ctx->r12 | 0;
L_80088ED4:
    // 0x80088ED4: blez        $a3, L_80088F6C
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80088ED8: slt         $at, $a3, $s5
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r21) ? 1 : 0;
            goto L_80088F6C;
    }
    // 0x80088ED8: slt         $at, $a3, $s5
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80088EDC: beq         $at, $zero, L_80088EFC
    if (ctx->r1 == 0) {
        // 0x80088EE0: addu        $v0, $a3, $s2
        ctx->r2 = ADD32(ctx->r7, ctx->r18);
            goto L_80088EFC;
    }
    // 0x80088EE0: addu        $v0, $a3, $s2
    ctx->r2 = ADD32(ctx->r7, ctx->r18);
    // 0x80088EE4: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80088EE8: slti        $at, $t7, 0x35
    ctx->r1 = SIGNED(ctx->r15) < 0X35 ? 1 : 0;
    // 0x80088EEC: bnel        $at, $zero, L_80088F00
    if (ctx->r1 != 0) {
        // 0x80088EF0: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_80088F00;
    }
    goto skip_5;
    // 0x80088EF0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    skip_5:
    // 0x80088EF4: b           L_80088F04
    // 0x80088EF8: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
        goto L_80088F04;
    // 0x80088EF8: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
L_80088EFC:
    // 0x80088EFC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_80088F00:
    // 0x80088F00: addu        $v0, $a3, $s2
    ctx->r2 = ADD32(ctx->r7, ctx->r18);
L_80088F04:
    // 0x80088F04: lbu         $t8, -0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, -0X1);
    // 0x80088F08: addiu       $v1, $a3, -0x1
    ctx->r3 = ADD32(ctx->r7, -0X1);
    // 0x80088F0C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80088F10: bne         $a1, $t8, L_80088F38
    if (ctx->r5 != ctx->r24) {
        // 0x80088F14: addiu       $at, $zero, 0x39
        ctx->r1 = ADD32(0, 0X39);
            goto L_80088F38;
    }
    // 0x80088F14: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x80088F18: addu        $v0, $v1, $s2
    ctx->r2 = ADD32(ctx->r3, ctx->r18);
L_80088F1C:
    // 0x80088F1C: lbu         $t1, -0x1($v0)
    ctx->r9 = MEM_BU(ctx->r2, -0X1);
    // 0x80088F20: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80088F24: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x80088F28: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80088F2C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80088F30: beq         $a0, $t1, L_80088F1C
    if (ctx->r4 == ctx->r9) {
        // 0x80088F34: sra         $a3, $t9, 16
        ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80088F1C;
    }
    // 0x80088F34: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
L_80088F38:
    // 0x80088F38: bne         $a0, $at, L_80088F4C
    if (ctx->r4 != ctx->r1) {
        // 0x80088F3C: addu        $v0, $s2, $v1
        ctx->r2 = ADD32(ctx->r18, ctx->r3);
            goto L_80088F4C;
    }
    // 0x80088F3C: addu        $v0, $s2, $v1
    ctx->r2 = ADD32(ctx->r18, ctx->r3);
    // 0x80088F40: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x80088F44: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80088F48: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
L_80088F4C:
    // 0x80088F4C: bgez        $v1, L_80088F6C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80088F50: lh          $t4, 0x8A($sp)
        ctx->r12 = MEM_H(ctx->r29, 0X8A);
            goto L_80088F6C;
    }
    // 0x80088F50: lh          $t4, 0x8A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X8A);
    // 0x80088F54: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80088F58: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x80088F5C: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x80088F60: sh          $t7, 0x8A($sp)
    MEM_H(0X8A, ctx->r29) = ctx->r15;
    // 0x80088F64: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80088F68: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_80088F6C:
    // 0x80088F6C: lh          $t8, 0x8A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X8A);
    // 0x80088F70: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x80088F74: lbu         $a1, 0xC7($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XC7);
    // 0x80088F78: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80088F7C: jal         0x80089068
    // 0x80088F80: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    _Ldtob3(rdram, ctx);
        goto after_3;
    // 0x80088F80: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_3:
    // 0x80088F84: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80088F88:
    // 0x80088F88: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80088F8C: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80088F90: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80088F94: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80088F98: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80088F9C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80088FA0: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80088FA4: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80088FA8: jr          $ra
    // 0x80088FAC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80088FAC: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void _Ldtob2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088FB0: lhu         $a2, 0x0($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X0);
    // 0x80088FB4: addiu       $at, $zero, 0x7FF
    ctx->r1 = ADD32(0, 0X7FF);
    // 0x80088FB8: andi        $v1, $a2, 0x7FF0
    ctx->r3 = ctx->r6 & 0X7FF0;
    // 0x80088FBC: sra         $t6, $v1, 4
    ctx->r14 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80088FC0: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80088FC4: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80088FC8: bne         $v1, $at, L_8008902C
    if (ctx->r3 != ctx->r1) {
        // 0x80088FCC: nop
    
            goto L_8008902C;
    }
    // 0x80088FCC: nop

    // 0x80088FD0: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x80088FD4: lhu         $t9, 0x0($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X0);
    // 0x80088FD8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80088FDC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80088FE0: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x80088FE4: bne         $t0, $zero, L_80089010
    if (ctx->r8 != 0) {
        // 0x80088FE8: sra         $t4, $v0, 16
        ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80089010;
    }
    // 0x80088FE8: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80088FEC: lhu         $t1, 0x2($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X2);
    // 0x80088FF0: bne         $t1, $zero, L_80089010
    if (ctx->r9 != 0) {
        // 0x80088FF4: nop
    
            goto L_80089010;
    }
    // 0x80088FF4: nop

    // 0x80088FF8: lhu         $t2, 0x4($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X4);
    // 0x80088FFC: bne         $t2, $zero, L_80089010
    if (ctx->r10 != 0) {
        // 0x80089000: nop
    
            goto L_80089010;
    }
    // 0x80089000: nop

    // 0x80089004: lhu         $t3, 0x6($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X6);
    // 0x80089008: beql        $t3, $zero, L_8008901C
    if (ctx->r11 == 0) {
        // 0x8008900C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8008901C;
    }
    goto skip_0;
    // 0x8008900C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_0:
L_80089010:
    // 0x80089010: jr          $ra
    // 0x80089014: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x80089014: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x80089018: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8008901C:
    // 0x8008901C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80089020: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80089024: jr          $ra
    // 0x80089028: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x80089028: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_8008902C:
    // 0x8008902C: blez        $v1, L_8008904C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80089030: andi        $t5, $a2, 0x800F
        ctx->r13 = ctx->r6 & 0X800F;
            goto L_8008904C;
    }
    // 0x80089030: andi        $t5, $a2, 0x800F
    ctx->r13 = ctx->r6 & 0X800F;
    // 0x80089034: ori         $t6, $t5, 0x3FF0
    ctx->r14 = ctx->r13 | 0X3FF0;
    // 0x80089038: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x8008903C: addiu       $t7, $v1, -0x3FE
    ctx->r15 = ADD32(ctx->r3, -0X3FE);
    // 0x80089040: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x80089044: jr          $ra
    // 0x80089048: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x80089048: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8008904C:
    // 0x8008904C: bgez        $v1, L_8008905C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80089050: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8008905C;
    }
    // 0x80089050: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80089054: jr          $ra
    // 0x80089058: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x80089058: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8008905C:
    // 0x8008905C: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x80089060: jr          $ra
    // 0x80089064: nop

    return;
    // 0x80089064: nop

;}
RECOMP_FUNC void _Ldtob3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089068: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008906C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80089070: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x80089074: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80089078: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8008907C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80089080: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80089084: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80089088: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008908C: bgtz        $a3, L_800890A0
    if (SIGNED(ctx->r7) > 0) {
        // 0x80089090: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_800890A0;
    }
    // 0x80089090: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80089094: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80089098: addiu       $s1, $s1, 0x6E50
    ctx->r17 = ADD32(ctx->r17, 0X6E50);
    // 0x8008909C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_800890A0:
    // 0x800890A0: lbu         $v1, 0x27($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X27);
    // 0x800890A4: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x800890A8: addiu       $a0, $zero, 0x67
    ctx->r4 = ADD32(0, 0X67);
    // 0x800890AC: beql        $v0, $v1, L_800890E8
    if (ctx->r2 == ctx->r3) {
        // 0x800890B0: lh          $t0, 0x32($sp)
        ctx->r8 = MEM_H(ctx->r29, 0X32);
            goto L_800890E8;
    }
    goto skip_0;
    // 0x800890B0: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    skip_0:
    // 0x800890B4: beq         $a0, $v1, L_800890C4
    if (ctx->r4 == ctx->r3) {
        // 0x800890B8: addiu       $at, $zero, 0x47
        ctx->r1 = ADD32(0, 0X47);
            goto L_800890C4;
    }
    // 0x800890B8: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x800890BC: bne         $v1, $at, L_80089354
    if (ctx->r3 != ctx->r1) {
        // 0x800890C0: nop
    
            goto L_80089354;
    }
    // 0x800890C0: nop

L_800890C4:
    // 0x800890C4: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x800890C8: slti        $at, $t0, -0x4
    ctx->r1 = SIGNED(ctx->r8) < -0X4 ? 1 : 0;
    // 0x800890CC: bne         $at, $zero, L_80089354
    if (ctx->r1 != 0) {
        // 0x800890D0: nop
    
            goto L_80089354;
    }
    // 0x800890D0: nop

    // 0x800890D4: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x800890D8: slt         $at, $t0, $t8
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800890DC: beq         $at, $zero, L_80089354
    if (ctx->r1 == 0) {
        // 0x800890E0: nop
    
            goto L_80089354;
    }
    // 0x800890E0: nop

    // 0x800890E4: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
L_800890E8:
    // 0x800890E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800890EC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800890F0: sll         $t9, $t0, 16
    ctx->r25 = S32(ctx->r8 << 16);
    // 0x800890F4: beq         $v0, $v1, L_80089130
    if (ctx->r2 == ctx->r3) {
        // 0x800890F8: sra         $t0, $t9, 16
        ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80089130;
    }
    // 0x800890F8: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800890FC: lw          $t2, 0x30($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X30);
    // 0x80089100: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80089104: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x80089108: bne         $t3, $zero, L_80089120
    if (ctx->r11 != 0) {
        // 0x8008910C: slt         $at, $a3, $v0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_80089120;
    }
    // 0x8008910C: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80089110: beql        $at, $zero, L_80089124
    if (ctx->r1 == 0) {
        // 0x80089114: subu        $t4, $v0, $t0
        ctx->r12 = SUB32(ctx->r2, ctx->r8);
            goto L_80089124;
    }
    goto skip_1;
    // 0x80089114: subu        $t4, $v0, $t0
    ctx->r12 = SUB32(ctx->r2, ctx->r8);
    skip_1:
    // 0x80089118: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8008911C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
L_80089120:
    // 0x80089120: subu        $t4, $v0, $t0
    ctx->r12 = SUB32(ctx->r2, ctx->r8);
L_80089124:
    // 0x80089124: bgez        $t4, L_80089130
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80089128: sw          $t4, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r12;
            goto L_80089130;
    }
    // 0x80089128: sw          $t4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r12;
    // 0x8008912C: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_80089130:
    // 0x80089130: bgtz        $t0, L_80089204
    if (SIGNED(ctx->r8) > 0) {
        // 0x80089134: slt         $at, $a3, $t0
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_80089204;
    }
    // 0x80089134: slt         $at, $a3, $t0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80089138: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8008913C: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80089140: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x80089144: negu        $v1, $t0
    ctx->r3 = SUB32(0, ctx->r8);
    // 0x80089148: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008914C: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x80089150: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x80089154: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80089158: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8008915C: bgtz        $v0, L_80089174
    if (SIGNED(ctx->r2) > 0) {
        // 0x80089160: sw          $t2, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r10;
            goto L_80089174;
    }
    // 0x80089160: sw          $t2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r10;
    // 0x80089164: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x80089168: andi        $t4, $t3, 0x8
    ctx->r12 = ctx->r11 & 0X8;
    // 0x8008916C: beql        $t4, $zero, L_8008919C
    if (ctx->r12 == 0) {
        // 0x80089170: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8008919C;
    }
    goto skip_2;
    // 0x80089170: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    skip_2:
L_80089174:
    // 0x80089174: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80089178: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8008917C: addiu       $t5, $zero, 0x2E
    ctx->r13 = ADD32(0, 0X2E);
    // 0x80089180: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x80089184: sb          $t5, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r13;
    // 0x80089188: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x8008918C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80089190: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80089194: sw          $t1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r9;
    // 0x80089198: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
L_8008919C:
    // 0x8008919C: beql        $at, $zero, L_800891B8
    if (ctx->r1 == 0) {
        // 0x800891A0: addu        $t4, $v0, $t0
        ctx->r12 = ADD32(ctx->r2, ctx->r8);
            goto L_800891B8;
    }
    goto skip_3;
    // 0x800891A0: addu        $t4, $v0, $t0
    ctx->r12 = ADD32(ctx->r2, ctx->r8);
    skip_3:
    // 0x800891A4: negu        $t0, $v0
    ctx->r8 = SUB32(0, ctx->r2);
    // 0x800891A8: sll         $t2, $t0, 16
    ctx->r10 = S32(ctx->r8 << 16);
    // 0x800891AC: sra         $t0, $t2, 16
    ctx->r8 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800891B0: negu        $v1, $t0
    ctx->r3 = SUB32(0, ctx->r8);
    // 0x800891B4: addu        $t4, $v0, $t0
    ctx->r12 = ADD32(ctx->r2, ctx->r8);
L_800891B8:
    // 0x800891B8: slt         $at, $t4, $a3
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800891BC: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x800891C0: beq         $at, $zero, L_800891D4
    if (ctx->r1 == 0) {
        // 0x800891C4: sw          $t4, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r12;
            goto L_800891D4;
    }
    // 0x800891C4: sw          $t4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r12;
    // 0x800891C8: sll         $a3, $t4, 16
    ctx->r7 = S32(ctx->r12 << 16);
    // 0x800891CC: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800891D0: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
L_800891D4:
    // 0x800891D4: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x800891D8: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x800891DC: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x800891E0: sh          $a3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r7;
    // 0x800891E4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x800891E8: jal         0x80076BF8
    // 0x800891EC: addu        $a0, $t8, $t5
    ctx->r4 = ADD32(ctx->r24, ctx->r13);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800891EC: addu        $a0, $t8, $t5
    ctx->r4 = ADD32(ctx->r24, ctx->r13);
    after_0:
    // 0x800891F0: lh          $a3, 0x2E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2E);
    // 0x800891F4: lw          $t6, 0x24($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X24);
    // 0x800891F8: subu        $t9, $t6, $a3
    ctx->r25 = SUB32(ctx->r14, ctx->r7);
    // 0x800891FC: b           L_800895D0
    // 0x80089200: sw          $t9, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r25;
        goto L_800895D0;
    // 0x80089200: sw          $t9, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r25;
L_80089204:
    // 0x80089204: beq         $at, $zero, L_8008928C
    if (ctx->r1 == 0) {
        // 0x80089208: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_8008928C;
    }
    // 0x80089208: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8008920C: lw          $t1, 0x8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X8);
    // 0x80089210: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x80089214: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
    // 0x80089218: sh          $a3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r7;
    // 0x8008921C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80089220: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80089224: jal         0x80076BF8
    // 0x80089228: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80089228: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    after_1:
    // 0x8008922C: lh          $a3, 0x2E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2E);
    // 0x80089230: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x80089234: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x80089238: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8008923C: subu        $t7, $t0, $a3
    ctx->r15 = SUB32(ctx->r8, ctx->r7);
    // 0x80089240: addu        $t4, $t3, $a3
    ctx->r12 = ADD32(ctx->r11, ctx->r7);
    // 0x80089244: sw          $t4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r12;
    // 0x80089248: bgtz        $v0, L_80089260
    if (SIGNED(ctx->r2) > 0) {
        // 0x8008924C: sw          $t7, 0x18($s0)
        MEM_W(0X18, ctx->r16) = ctx->r15;
            goto L_80089260;
    }
    // 0x8008924C: sw          $t7, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r15;
    // 0x80089250: lw          $t8, 0x30($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X30);
    // 0x80089254: andi        $t5, $t8, 0x8
    ctx->r13 = ctx->r24 & 0X8;
    // 0x80089258: beq         $t5, $zero, L_80089284
    if (ctx->r13 == 0) {
        // 0x8008925C: nop
    
            goto L_80089284;
    }
    // 0x8008925C: nop

L_80089260:
    // 0x80089260: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80089264: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x80089268: addiu       $t6, $zero, 0x2E
    ctx->r14 = ADD32(0, 0X2E);
    // 0x8008926C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80089270: sb          $t6, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r14;
    // 0x80089274: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x80089278: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8008927C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80089280: sw          $t4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r12;
L_80089284:
    // 0x80089284: b           L_800895D0
    // 0x80089288: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_800895D0;
    // 0x80089288: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8008928C:
    // 0x8008928C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80089290: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80089294: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
    // 0x80089298: sh          $a3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r7;
    // 0x8008929C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x800892A0: jal         0x80076BF8
    // 0x800892A4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x800892A4: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_2:
    // 0x800892A8: lh          $a3, 0x2E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2E);
    // 0x800892AC: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x800892B0: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x800892B4: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x800892B8: subu        $a3, $a3, $t0
    ctx->r7 = SUB32(ctx->r7, ctx->r8);
    // 0x800892BC: sll         $t1, $a3, 16
    ctx->r9 = S32(ctx->r7 << 16);
    // 0x800892C0: addu        $t9, $t5, $t0
    ctx->r25 = ADD32(ctx->r13, ctx->r8);
    // 0x800892C4: sw          $t9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r25;
    // 0x800892C8: bgtz        $v0, L_800892E0
    if (SIGNED(ctx->r2) > 0) {
        // 0x800892CC: sra         $a3, $t1, 16
        ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
            goto L_800892E0;
    }
    // 0x800892CC: sra         $a3, $t1, 16
    ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800892D0: lw          $t2, 0x30($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X30);
    // 0x800892D4: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x800892D8: beql        $t3, $zero, L_80089308
    if (ctx->r11 == 0) {
        // 0x800892DC: slt         $at, $v0, $a3
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_80089308;
    }
    goto skip_4;
    // 0x800892DC: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    skip_4:
L_800892E0:
    // 0x800892E0: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x800892E4: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x800892E8: addiu       $t4, $zero, 0x2E
    ctx->r12 = ADD32(0, 0X2E);
    // 0x800892EC: addu        $t5, $t7, $t8
    ctx->r13 = ADD32(ctx->r15, ctx->r24);
    // 0x800892F0: sb          $t4, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r12;
    // 0x800892F4: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x800892F8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x800892FC: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x80089300: sw          $t1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r9;
    // 0x80089304: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
L_80089308:
    // 0x80089308: beq         $at, $zero, L_8008931C
    if (ctx->r1 == 0) {
        // 0x8008930C: addu        $a1, $t0, $s1
        ctx->r5 = ADD32(ctx->r8, ctx->r17);
            goto L_8008931C;
    }
    // 0x8008930C: addu        $a1, $t0, $s1
    ctx->r5 = ADD32(ctx->r8, ctx->r17);
    // 0x80089310: sll         $a3, $v0, 16
    ctx->r7 = S32(ctx->r2 << 16);
    // 0x80089314: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80089318: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
L_8008931C:
    // 0x8008931C: lw          $t2, 0x8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X8);
    // 0x80089320: lw          $t3, 0x14($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X14);
    // 0x80089324: sh          $a3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r7;
    // 0x80089328: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8008932C: jal         0x80076BF8
    // 0x80089330: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80089330: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    after_3:
    // 0x80089334: lh          $a3, 0x2E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2E);
    // 0x80089338: lw          $t7, 0x14($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X14);
    // 0x8008933C: lw          $t4, 0x24($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X24);
    // 0x80089340: addu        $t8, $t7, $a3
    ctx->r24 = ADD32(ctx->r15, ctx->r7);
    // 0x80089344: subu        $t5, $t4, $a3
    ctx->r13 = SUB32(ctx->r12, ctx->r7);
    // 0x80089348: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x8008934C: b           L_800895D0
    // 0x80089350: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
        goto L_800895D0;
    // 0x80089350: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
L_80089354:
    // 0x80089354: beq         $a0, $v1, L_80089368
    if (ctx->r4 == ctx->r3) {
        // 0x80089358: lh          $t0, 0x32($sp)
        ctx->r8 = MEM_H(ctx->r29, 0X32);
            goto L_80089368;
    }
    // 0x80089358: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x8008935C: addiu       $at, $zero, 0x47
    ctx->r1 = ADD32(0, 0X47);
    // 0x80089360: bnel        $v1, $at, L_800893B0
    if (ctx->r3 != ctx->r1) {
        // 0x80089364: lw          $t7, 0x8($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X8);
            goto L_800893B0;
    }
    goto skip_5;
    // 0x80089364: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    skip_5:
L_80089368:
    // 0x80089368: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8008936C: addiu       $t6, $zero, 0x65
    ctx->r14 = ADD32(0, 0X65);
    // 0x80089370: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80089374: beql        $at, $zero, L_80089388
    if (ctx->r1 == 0) {
        // 0x80089378: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_80089388;
    }
    goto skip_6;
    // 0x80089378: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    skip_6:
    // 0x8008937C: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x80089380: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x80089384: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
L_80089388:
    // 0x80089388: bgez        $t9, L_80089394
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8008938C: sw          $t9, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r25;
            goto L_80089394;
    }
    // 0x8008938C: sw          $t9, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r25;
    // 0x80089390: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
L_80089394:
    // 0x80089394: bnel        $a0, $v1, L_800893A8
    if (ctx->r4 != ctx->r3) {
        // 0x80089398: addiu       $t2, $zero, 0x45
        ctx->r10 = ADD32(0, 0X45);
            goto L_800893A8;
    }
    goto skip_7;
    // 0x80089398: addiu       $t2, $zero, 0x45
    ctx->r10 = ADD32(0, 0X45);
    skip_7:
    // 0x8008939C: b           L_800893AC
    // 0x800893A0: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
        goto L_800893AC;
    // 0x800893A0: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    // 0x800893A4: addiu       $t2, $zero, 0x45
    ctx->r10 = ADD32(0, 0X45);
L_800893A8:
    // 0x800893A8: sb          $t2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r10;
L_800893AC:
    // 0x800893AC: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
L_800893B0:
    // 0x800893B0: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x800893B4: lbu         $t3, 0x0($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X0);
    // 0x800893B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800893BC: addu        $t4, $t7, $t8
    ctx->r12 = ADD32(ctx->r15, ctx->r24);
    // 0x800893C0: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x800893C4: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x800893C8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x800893CC: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x800893D0: bgtz        $v0, L_800893E8
    if (SIGNED(ctx->r2) > 0) {
        // 0x800893D4: sw          $t9, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r25;
            goto L_800893E8;
    }
    // 0x800893D4: sw          $t9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r25;
    // 0x800893D8: lw          $t1, 0x30($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X30);
    // 0x800893DC: andi        $t6, $t1, 0x8
    ctx->r14 = ctx->r9 & 0X8;
    // 0x800893E0: beq         $t6, $zero, L_8008940C
    if (ctx->r14 == 0) {
        // 0x800893E4: nop
    
            goto L_8008940C;
    }
    // 0x800893E4: nop

L_800893E8:
    // 0x800893E8: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x800893EC: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x800893F0: addiu       $t2, $zero, 0x2E
    ctx->r10 = ADD32(0, 0X2E);
    // 0x800893F4: addu        $t3, $t7, $t8
    ctx->r11 = ADD32(ctx->r15, ctx->r24);
    // 0x800893F8: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x800893FC: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x80089400: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80089404: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80089408: sw          $t5, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r13;
L_8008940C:
    // 0x8008940C: blezl       $v0, L_80089478
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80089410: lw          $t9, 0x8($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X8);
            goto L_80089478;
    }
    goto skip_8;
    // 0x80089410: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    skip_8:
    // 0x80089414: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x80089418: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x8008941C: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80089420: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80089424: beq         $at, $zero, L_80089438
    if (ctx->r1 == 0) {
        // 0x80089428: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_80089438;
    }
    // 0x80089428: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8008942C: sll         $a3, $v0, 16
    ctx->r7 = S32(ctx->r2 << 16);
    // 0x80089430: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80089434: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
L_80089438:
    // 0x80089438: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8008943C: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80089440: sh          $t0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r8;
    // 0x80089444: sh          $a3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r7;
    // 0x80089448: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x8008944C: jal         0x80076BF8
    // 0x80089450: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80089450: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    after_4:
    // 0x80089454: lh          $a3, 0x2E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2E);
    // 0x80089458: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x8008945C: lw          $t4, 0x24($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X24);
    // 0x80089460: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x80089464: addu        $t3, $t2, $a3
    ctx->r11 = ADD32(ctx->r10, ctx->r7);
    // 0x80089468: subu        $t5, $t4, $a3
    ctx->r13 = SUB32(ctx->r12, ctx->r7);
    // 0x8008946C: sw          $t3, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r11;
    // 0x80089470: sw          $t5, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r13;
    // 0x80089474: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
L_80089478:
    // 0x80089478: lw          $t1, 0x14($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X14);
    // 0x8008947C: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x80089480: addu        $s1, $t9, $t1
    ctx->r17 = ADD32(ctx->r25, ctx->r9);
    // 0x80089484: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80089488: bltz        $t0, L_800894A0
    if (SIGNED(ctx->r8) < 0) {
        // 0x8008948C: sb          $t6, -0x1($s1)
        MEM_B(-0X1, ctx->r17) = ctx->r14;
            goto L_800894A0;
    }
    // 0x8008948C: sb          $t6, -0x1($s1)
    MEM_B(-0X1, ctx->r17) = ctx->r14;
    // 0x80089490: addiu       $t7, $zero, 0x2B
    ctx->r15 = ADD32(0, 0X2B);
    // 0x80089494: sb          $t7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r15;
    // 0x80089498: b           L_800894BC
    // 0x8008949C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_800894BC;
    // 0x8008949C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800894A0:
    // 0x800894A0: negu        $t0, $t0
    ctx->r8 = SUB32(0, ctx->r8);
    // 0x800894A4: sll         $t2, $t0, 16
    ctx->r10 = S32(ctx->r8 << 16);
    // 0x800894A8: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x800894AC: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800894B0: sb          $t8, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r24;
    // 0x800894B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800894B8: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
L_800894BC:
    // 0x800894BC: slti        $at, $t0, 0x64
    ctx->r1 = SIGNED(ctx->r8) < 0X64 ? 1 : 0;
    // 0x800894C0: bnel        $at, $zero, L_8008956C
    if (ctx->r1 != 0) {
        // 0x800894C4: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8008956C;
    }
    goto skip_9;
    // 0x800894C4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_9:
    // 0x800894C8: slti        $at, $t0, 0x3E8
    ctx->r1 = SIGNED(ctx->r8) < 0X3E8 ? 1 : 0;
    // 0x800894CC: bne         $at, $zero, L_8008951C
    if (ctx->r1 != 0) {
        // 0x800894D0: addiu       $v0, $zero, 0x3E8
        ctx->r2 = ADD32(0, 0X3E8);
            goto L_8008951C;
    }
    // 0x800894D0: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x800894D4: div         $zero, $t0, $v0
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r2)));
    // 0x800894D8: bne         $v0, $zero, L_800894E4
    if (ctx->r2 != 0) {
        // 0x800894DC: nop
    
            goto L_800894E4;
    }
    // 0x800894DC: nop

    // 0x800894E0: break       7
    do_break(2148046048);
L_800894E4:
    // 0x800894E4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800894E8: bne         $v0, $at, L_800894FC
    if (ctx->r2 != ctx->r1) {
        // 0x800894EC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800894FC;
    }
    // 0x800894EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800894F0: bne         $t0, $at, L_800894FC
    if (ctx->r8 != ctx->r1) {
        // 0x800894F4: nop
    
            goto L_800894FC;
    }
    // 0x800894F4: nop

    // 0x800894F8: break       6
    do_break(2148046072);
L_800894FC:
    // 0x800894FC: mfhi        $t0
    ctx->r8 = hi;
    // 0x80089500: sll         $t9, $t0, 16
    ctx->r25 = S32(ctx->r8 << 16);
    // 0x80089504: mflo        $t4
    ctx->r12 = lo;
    // 0x80089508: addiu       $t5, $t4, 0x30
    ctx->r13 = ADD32(ctx->r12, 0X30);
    // 0x8008950C: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80089510: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x80089514: sb          $t5, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r13;
    // 0x80089518: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8008951C:
    // 0x8008951C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80089520: div         $zero, $t0, $v0
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r2)));
    // 0x80089524: bne         $v0, $zero, L_80089530
    if (ctx->r2 != 0) {
        // 0x80089528: nop
    
            goto L_80089530;
    }
    // 0x80089528: nop

    // 0x8008952C: break       7
    do_break(2148046124);
L_80089530:
    // 0x80089530: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80089534: bne         $v0, $at, L_80089548
    if (ctx->r2 != ctx->r1) {
        // 0x80089538: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80089548;
    }
    // 0x80089538: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008953C: bne         $t0, $at, L_80089548
    if (ctx->r8 != ctx->r1) {
        // 0x80089540: nop
    
            goto L_80089548;
    }
    // 0x80089540: nop

    // 0x80089544: break       6
    do_break(2148046148);
L_80089548:
    // 0x80089548: mfhi        $t0
    ctx->r8 = hi;
    // 0x8008954C: sll         $t8, $t0, 16
    ctx->r24 = S32(ctx->r8 << 16);
    // 0x80089550: mflo        $t6
    ctx->r14 = lo;
    // 0x80089554: addiu       $t7, $t6, 0x30
    ctx->r15 = ADD32(ctx->r14, 0X30);
    // 0x80089558: sra         $t2, $t8, 16
    ctx->r10 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8008955C: or          $t0, $t2, $zero
    ctx->r8 = ctx->r10 | 0;
    // 0x80089560: sb          $t7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r15;
    // 0x80089564: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80089568: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8008956C:
    // 0x8008956C: div         $zero, $t0, $v0
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r2)));
    // 0x80089570: bne         $v0, $zero, L_8008957C
    if (ctx->r2 != 0) {
        // 0x80089574: nop
    
            goto L_8008957C;
    }
    // 0x80089574: nop

    // 0x80089578: break       7
    do_break(2148046200);
L_8008957C:
    // 0x8008957C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80089580: bne         $v0, $at, L_80089594
    if (ctx->r2 != ctx->r1) {
        // 0x80089584: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80089594;
    }
    // 0x80089584: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80089588: bne         $t0, $at, L_80089594
    if (ctx->r8 != ctx->r1) {
        // 0x8008958C: nop
    
            goto L_80089594;
    }
    // 0x8008958C: nop

    // 0x80089590: break       6
    do_break(2148046224);
L_80089594:
    // 0x80089594: mfhi        $t0
    ctx->r8 = hi;
    // 0x80089598: sll         $t5, $t0, 16
    ctx->r13 = S32(ctx->r8 << 16);
    // 0x8008959C: sra         $t9, $t5, 16
    ctx->r25 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800895A0: mflo        $t3
    ctx->r11 = lo;
    // 0x800895A4: addiu       $t4, $t3, 0x30
    ctx->r12 = ADD32(ctx->r11, 0X30);
    // 0x800895A8: addiu       $t1, $t9, 0x30
    ctx->r9 = ADD32(ctx->r25, 0X30);
    // 0x800895AC: sb          $t4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r12;
    // 0x800895B0: sb          $t1, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r9;
    // 0x800895B4: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x800895B8: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x800895BC: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x800895C0: subu        $t7, $s1, $t6
    ctx->r15 = SUB32(ctx->r17, ctx->r14);
    // 0x800895C4: subu        $t2, $t7, $t8
    ctx->r10 = SUB32(ctx->r15, ctx->r24);
    // 0x800895C8: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x800895CC: sw          $t2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r10;
L_800895D0:
    // 0x800895D0: lw          $t3, 0x30($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X30);
    // 0x800895D4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x800895D8: andi        $t4, $t3, 0x14
    ctx->r12 = ctx->r11 & 0X14;
    // 0x800895DC: bnel        $t4, $at, L_80089620
    if (ctx->r12 != ctx->r1) {
        // 0x800895E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80089620;
    }
    goto skip_10;
    // 0x800895E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_10:
    // 0x800895E4: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x800895E8: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x800895EC: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x800895F0: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x800895F4: lw          $t3, 0x20($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X20);
    // 0x800895F8: addu        $t1, $t5, $t9
    ctx->r9 = ADD32(ctx->r13, ctx->r25);
    // 0x800895FC: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80089600: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x80089604: addu        $t2, $t7, $t8
    ctx->r10 = ADD32(ctx->r15, ctx->r24);
    // 0x80089608: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    // 0x8008960C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80089610: beq         $at, $zero, L_8008961C
    if (ctx->r1 == 0) {
        // 0x80089614: subu        $t4, $v1, $v0
        ctx->r12 = SUB32(ctx->r3, ctx->r2);
            goto L_8008961C;
    }
    // 0x80089614: subu        $t4, $v1, $v0
    ctx->r12 = SUB32(ctx->r3, ctx->r2);
    // 0x80089618: sw          $t4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r12;
L_8008961C:
    // 0x8008961C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80089620:
    // 0x80089620: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80089624: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80089628: jr          $ra
    // 0x8008962C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8008962C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void alSeqNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089630: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80089634: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80089638: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008963C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80089640: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x80089644: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x80089648: sh          $zero, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = 0;
    // 0x8008964C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80089650: jal         0x80089BBC
    // 0x80089654: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    alSeqGet32(rdram, ctx);
        goto after_0;
    // 0x80089654: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    after_0:
    // 0x80089658: lui         $at, 0x4D54
    ctx->r1 = S32(0X4D54 << 16);
    // 0x8008965C: ori         $at, $at, 0x6864
    ctx->r1 = ctx->r1 | 0X6864;
    // 0x80089660: bnel        $v0, $at, L_80089700
    if (ctx->r2 != ctx->r1) {
        // 0x80089664: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80089700;
    }
    goto skip_0;
    // 0x80089664: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80089668: jal         0x80089BBC
    // 0x8008966C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alSeqGet32(rdram, ctx);
        goto after_1;
    // 0x8008966C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80089670: jal         0x80089B8C
    // 0x80089674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alSeqGet16(rdram, ctx);
        goto after_2;
    // 0x80089674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80089678: bnel        $v0, $zero, L_80089700
    if (ctx->r2 != 0) {
        // 0x8008967C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80089700;
    }
    goto skip_1;
    // 0x8008967C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80089680: jal         0x80089B8C
    // 0x80089684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alSeqGet16(rdram, ctx);
        goto after_3;
    // 0x80089684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80089688: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008968C: bnel        $v0, $at, L_80089700
    if (ctx->r2 != ctx->r1) {
        // 0x80089690: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80089700;
    }
    goto skip_2;
    // 0x80089690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80089694: jal         0x80089B8C
    // 0x80089698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alSeqGet16(rdram, ctx);
        goto after_4;
    // 0x80089698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8008969C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x800896A0: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x800896A4: andi        $t6, $v1, 0x8000
    ctx->r14 = ctx->r3 & 0X8000;
    // 0x800896A8: bnel        $t6, $zero, L_80089700
    if (ctx->r14 != 0) {
        // 0x800896AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80089700;
    }
    goto skip_3;
    // 0x800896AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x800896B0: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x800896B4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800896B8: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800896BC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800896C0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800896C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800896C8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800896CC: div.d       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f4.d, ctx->f10.d);
    // 0x800896D0: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800896D4: jal         0x80089BBC
    // 0x800896D8: swc1        $f18, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f18.u32l;
    alSeqGet32(rdram, ctx);
        goto after_5;
    // 0x800896D8: swc1        $f18, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f18.u32l;
    after_5:
    // 0x800896DC: lui         $at, 0x4D54
    ctx->r1 = S32(0X4D54 << 16);
    // 0x800896E0: ori         $at, $at, 0x726B
    ctx->r1 = ctx->r1 | 0X726B;
    // 0x800896E4: bnel        $v0, $at, L_80089700
    if (ctx->r2 != ctx->r1) {
        // 0x800896E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80089700;
    }
    goto skip_4;
    // 0x800896E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
    // 0x800896EC: jal         0x80089BBC
    // 0x800896F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alSeqGet32(rdram, ctx);
        goto after_6;
    // 0x800896F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x800896F4: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x800896F8: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x800896FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80089700:
    // 0x80089700: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80089704: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80089708: jr          $ra
    // 0x8008970C: nop

    return;
    // 0x8008970C: nop

;}
RECOMP_FUNC void alSeqNextEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089710: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80089714: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80089718: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8008971C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80089720: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80089724: jal         0x80089C0C
    // 0x80089728: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    alSeqGetVarLen(rdram, ctx);
        goto after_0;
    // 0x80089728: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    after_0:
    // 0x8008972C: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x80089730: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80089734: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80089738: sw          $t7, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r15;
    // 0x8008973C: jal         0x80089B78
    // 0x80089740: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    alSeqGetByte(rdram, ctx);
        goto after_1;
    // 0x80089740: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x80089744: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80089748: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8008974C: bne         $v0, $at, L_800897F4
    if (ctx->r2 != ctx->r1) {
        // 0x80089750: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_800897F4;
    }
    // 0x80089750: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80089754: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80089758: sb          $v1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r3;
    // 0x8008975C: jal         0x80089B78
    // 0x80089760: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    alSeqGetByte(rdram, ctx);
        goto after_2;
    // 0x80089760: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_2:
    // 0x80089764: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80089768: lbu         $v1, 0x2F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2F);
    // 0x8008976C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80089770: bne         $v0, $at, L_800897C0
    if (ctx->r2 != ctx->r1) {
        // 0x80089774: andi        $a1, $v0, 0xFF
        ctx->r5 = ctx->r2 & 0XFF;
            goto L_800897C0;
    }
    // 0x80089774: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x80089778: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8008977C: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x80089780: sw          $a2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r6;
    // 0x80089784: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80089788: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
    // 0x8008978C: jal         0x80089B78
    // 0x80089790: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    alSeqGetByte(rdram, ctx);
        goto after_3;
    // 0x80089790: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80089794: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80089798: jal         0x80089B78
    // 0x8008979C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    alSeqGetByte(rdram, ctx);
        goto after_4;
    // 0x8008979C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x800897A0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x800897A4: jal         0x80089B78
    // 0x800897A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    alSeqGetByte(rdram, ctx);
        goto after_5;
    // 0x800897A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x800897AC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x800897B0: jal         0x80089B78
    // 0x800897B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    alSeqGetByte(rdram, ctx);
        goto after_6;
    // 0x800897B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x800897B8: b           L_800897EC
    // 0x800897BC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_800897EC;
    // 0x800897BC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_800897C0:
    // 0x800897C0: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x800897C4: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x800897C8: bne         $t9, $at, L_800897EC
    if (ctx->r25 != ctx->r1) {
        // 0x800897CC: addiu       $t0, $zero, 0x4
        ctx->r8 = ADD32(0, 0X4);
            goto L_800897EC;
    }
    // 0x800897CC: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x800897D0: sh          $t0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r8;
    // 0x800897D4: sw          $a2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r6;
    // 0x800897D8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x800897DC: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
    // 0x800897E0: jal         0x80089B78
    // 0x800897E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    alSeqGetByte(rdram, ctx);
        goto after_7;
    // 0x800897E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x800897E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_800897EC:
    // 0x800897EC: b           L_80089868
    // 0x800897F0: sh          $zero, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = 0;
        goto L_80089868;
    // 0x800897F0: sh          $zero, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = 0;
L_800897F4:
    // 0x800897F4: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x800897F8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800897FC: andi        $t2, $a0, 0x80
    ctx->r10 = ctx->r4 & 0X80;
    // 0x80089800: sh          $t1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r9;
    // 0x80089804: beq         $t2, $zero, L_8008982C
    if (ctx->r10 == 0) {
        // 0x80089808: sw          $a2, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r6;
            goto L_8008982C;
    }
    // 0x80089808: sw          $a2, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r6;
    // 0x8008980C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80089810: sb          $v1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r3;
    // 0x80089814: jal         0x80089B78
    // 0x80089818: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    alSeqGetByte(rdram, ctx);
        goto after_8;
    // 0x80089818: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x8008981C: lbu         $v1, 0x2F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2F);
    // 0x80089820: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80089824: b           L_80089838
    // 0x80089828: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
        goto L_80089838;
    // 0x80089828: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
L_8008982C:
    // 0x8008982C: lh          $t3, 0x1A($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X1A);
    // 0x80089830: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
    // 0x80089834: sb          $t3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r11;
L_80089838:
    // 0x80089838: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8008983C: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x80089840: andi        $t4, $v0, 0xF0
    ctx->r12 = ctx->r2 & 0XF0;
    // 0x80089844: beq         $t4, $at, L_80089864
    if (ctx->r12 == ctx->r1) {
        // 0x80089848: addiu       $at, $zero, 0xD0
        ctx->r1 = ADD32(0, 0XD0);
            goto L_80089864;
    }
    // 0x80089848: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x8008984C: beql        $t4, $at, L_80089868
    if (ctx->r12 == ctx->r1) {
        // 0x80089850: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80089868;
    }
    goto skip_0;
    // 0x80089850: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x80089854: jal         0x80089B78
    // 0x80089858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    alSeqGetByte(rdram, ctx);
        goto after_9;
    // 0x80089858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x8008985C: b           L_80089868
    // 0x80089860: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80089868;
    // 0x80089860: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80089864:
    // 0x80089864: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80089868:
    // 0x80089868: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008986C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80089870: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80089874: jr          $ra
    // 0x80089878: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80089878: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void __alSeqNextDelta(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008987C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80089880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80089884: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80089888: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x8008988C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80089890: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80089894: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80089898: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x8008989C: bnel        $at, $zero, L_800898B0
    if (ctx->r1 != 0) {
        // 0x800898A0: sw          $v0, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r2;
            goto L_800898B0;
    }
    goto skip_0;
    // 0x800898A0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    skip_0:
    // 0x800898A4: b           L_800898D0
    // 0x800898A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800898D0;
    // 0x800898A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800898AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_800898B0:
    // 0x800898B0: jal         0x80089C0C
    // 0x800898B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    alSeqGetVarLen(rdram, ctx);
        goto after_0;
    // 0x800898B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x800898B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800898BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800898C0: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x800898C4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800898C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800898CC: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
L_800898D0:
    // 0x800898D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800898D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800898D8: jr          $ra
    // 0x800898DC: nop

    return;
    // 0x800898DC: nop

;}
RECOMP_FUNC void alSeqTicksToSec(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800898E0: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x800898E4: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x800898E8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800898EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800898F0: bgez        $a2, L_80089904
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800898F4: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80089904;
    }
    // 0x800898F4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800898F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800898FC: nop

    // 0x80089900: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80089904:
    // 0x80089904: lh          $t6, 0x18($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X18);
    // 0x80089908: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8008990C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80089910: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80089914: ldc1        $f10, 0x6E60($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X6E60);
    // 0x80089918: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008991C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80089920: cvt.d.s     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f6.d = CVT_D_S(ctx->f16.fl);
    // 0x80089924: mul.d       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x80089928: div.d       $f8, $f4, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f18.d);
    // 0x8008992C: jr          $ra
    // 0x80089930: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    return;
    // 0x80089930: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
;}
RECOMP_FUNC void alSeqSecToTicks(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089934: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80089938: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8008993C: ldc1        $f6, 0x6E68($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X6E68);
    // 0x80089940: lh          $t6, 0x18($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X18);
    // 0x80089944: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x80089948: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8008994C: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80089950: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80089954: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x80089958: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x8008995C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80089960: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80089964: bgezl       $a2, L_80089980
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80089968: div.d       $f8, $f18, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
            goto L_80089980;
    }
    goto skip_0;
    // 0x80089968: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
    skip_0:
    // 0x8008996C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80089970: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80089974: nop

    // 0x80089978: add.d       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f6.d + ctx->f10.d;
    // 0x8008997C: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
L_80089980:
    // 0x80089980: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80089984: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80089988: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8008998C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80089990: nop

    // 0x80089994: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x80089998: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8008999C: nop

    // 0x800899A0: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800899A4: beql        $v0, $zero, L_80089A00
    if (ctx->r2 == 0) {
        // 0x800899A8: mfc1        $v0, $f16
        ctx->r2 = (int32_t)ctx->f16.u32l;
            goto L_80089A00;
    }
    goto skip_1;
    // 0x800899A8: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x800899AC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x800899B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800899B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800899B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800899BC: sub.d       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f8.d - ctx->f16.d;
    // 0x800899C0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800899C4: nop

    // 0x800899C8: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x800899CC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800899D0: nop

    // 0x800899D4: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800899D8: bnel        $v0, $zero, L_800899F4
    if (ctx->r2 != 0) {
        // 0x800899DC: ctc1        $t7, $FpcCsr
        set_cop1_cs(ctx->r15);
            goto L_800899F4;
    }
    goto skip_2;
    // 0x800899DC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    skip_2:
    // 0x800899E0: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x800899E4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800899E8: jr          $ra
    // 0x800899EC: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    return;
    // 0x800899EC: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x800899F0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
L_800899F4:
    // 0x800899F4: jr          $ra
    // 0x800899F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x800899F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800899FC: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
L_80089A00:
    // 0x80089A00: nop

    // 0x80089A04: bltzl       $v0, L_800899F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80089A08: ctc1        $t7, $FpcCsr
        set_cop1_cs(ctx->r15);
            goto L_800899F4;
    }
    goto skip_3;
    // 0x80089A08: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    skip_3:
    // 0x80089A0C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80089A10: jr          $ra
    // 0x80089A14: nop

    return;
    // 0x80089A14: nop

;}
RECOMP_FUNC void alSeqNewMarker(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089A18: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80089A1C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80089A20: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80089A24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80089A28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80089A2C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80089A30: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x80089A34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80089A38: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80089A3C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80089A40: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80089A44: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80089A48: bne         $a2, $zero, L_80089A68
    if (ctx->r6 != 0) {
        // 0x80089A4C: sw          $s2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r18;
            goto L_80089A68;
    }
    // 0x80089A4C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80089A50: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80089A54: sh          $zero, 0xC($a1)
    MEM_H(0XC, ctx->r5) = 0;
    // 0x80089A58: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80089A5C: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x80089A60: b           L_80089B0C
    // 0x80089A64: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
        goto L_80089B0C;
    // 0x80089A64: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_80089A68:
    // 0x80089A68: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x80089A6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80089A70: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x80089A74: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x80089A78: lh          $t8, 0x1A($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X1A);
    // 0x80089A7C: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x80089A80: sh          $t8, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r24;
    // 0x80089A84: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80089A88: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80089A8C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x80089A90: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x80089A94: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80089A98: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x80089A9C: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
L_80089AA0:
    // 0x80089AA0: lh          $s5, 0x1A($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X1A);
    // 0x80089AA4: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80089AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80089AAC: jal         0x80089710
    // 0x80089AB0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alSeqNextEvent(rdram, ctx);
        goto after_0;
    // 0x80089AB0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80089AB4: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x80089AB8: bnel        $t1, $s3, L_80089AD4
    if (ctx->r9 != ctx->r19) {
        // 0x80089ABC: lw          $v0, 0xC($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XC);
            goto L_80089AD4;
    }
    goto skip_0;
    // 0x80089ABC: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    skip_0:
    // 0x80089AC0: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
    // 0x80089AC4: lh          $s5, 0x1A($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X1A);
    // 0x80089AC8: b           L_80089AE0
    // 0x80089ACC: lw          $s6, 0xC($s0)
    ctx->r22 = MEM_W(ctx->r16, 0XC);
        goto L_80089AE0;
    // 0x80089ACC: lw          $s6, 0xC($s0)
    ctx->r22 = MEM_W(ctx->r16, 0XC);
    // 0x80089AD0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
L_80089AD4:
    // 0x80089AD4: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x80089AD8: bnel        $at, $zero, L_80089AA0
    if (ctx->r1 != 0) {
        // 0x80089ADC: lw          $s4, 0x8($s0)
        ctx->r20 = MEM_W(ctx->r16, 0X8);
            goto L_80089AA0;
    }
    goto skip_1;
    // 0x80089ADC: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
    skip_1:
L_80089AE0:
    // 0x80089AE0: sw          $s4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r20;
    // 0x80089AE4: sh          $s5, 0xC($s7)
    MEM_H(0XC, ctx->r23) = ctx->r21;
    // 0x80089AE8: sw          $s6, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r22;
    // 0x80089AEC: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x80089AF0: sw          $t2, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r10;
    // 0x80089AF4: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80089AF8: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x80089AFC: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x80089B00: sh          $t4, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r12;
    // 0x80089B04: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80089B08: sw          $t5, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r13;
L_80089B0C:
    // 0x80089B0C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80089B10: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80089B14: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80089B18: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80089B1C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80089B20: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80089B24: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80089B28: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80089B2C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80089B30: jr          $ra
    // 0x80089B34: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80089B34: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void alSeqGetTicks(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089B38: jr          $ra
    // 0x80089B3C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    return;
    // 0x80089B3C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
;}
RECOMP_FUNC void alSeqSetLoc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089B40: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80089B44: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80089B48: lh          $t7, 0xC($a1)
    ctx->r15 = MEM_H(ctx->r5, 0XC);
    // 0x80089B4C: sh          $t7, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r15;
    // 0x80089B50: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x80089B54: jr          $ra
    // 0x80089B58: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    return;
    // 0x80089B58: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void alSeqGetLoc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089B5C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80089B60: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80089B64: lh          $t7, 0x1A($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X1A);
    // 0x80089B68: sh          $t7, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r15;
    // 0x80089B6C: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x80089B70: jr          $ra
    // 0x80089B74: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x80089B74: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
;}
RECOMP_FUNC void alSeqGetByte(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089B78: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x80089B7C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80089B80: addiu       $t6, $a1, 0x1
    ctx->r14 = ADD32(ctx->r5, 0X1);
    // 0x80089B84: jr          $ra
    // 0x80089B88: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    return;
    // 0x80089B88: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void alSeqGet16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089B8C: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x80089B90: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80089B94: addiu       $t9, $a1, 0x1
    ctx->r25 = ADD32(ctx->r5, 0X1);
    // 0x80089B98: sw          $t9, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r25;
    // 0x80089B9C: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80089BA0: sll         $t8, $v1, 8
    ctx->r24 = S32(ctx->r3 << 8);
    // 0x80089BA4: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x80089BA8: or          $v1, $t8, $t0
    ctx->r3 = ctx->r24 | ctx->r8;
    // 0x80089BAC: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x80089BB0: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80089BB4: jr          $ra
    // 0x80089BB8: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    return;
    // 0x80089BB8: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void alSeqGet32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089BBC: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x80089BC0: addiu       $t7, $a1, 0x1
    ctx->r15 = ADD32(ctx->r5, 0X1);
    // 0x80089BC4: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80089BC8: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x80089BCC: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80089BD0: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x80089BD4: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x80089BD8: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x80089BDC: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x80089BE0: sw          $t3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r11;
    // 0x80089BE4: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x80089BE8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80089BEC: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x80089BF0: or          $v1, $t6, $t9
    ctx->r3 = ctx->r14 | ctx->r25;
    // 0x80089BF4: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x80089BF8: or          $v1, $v1, $t2
    ctx->r3 = ctx->r3 | ctx->r10;
    // 0x80089BFC: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80089C00: sw          $t5, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r13;
    // 0x80089C04: jr          $ra
    // 0x80089C08: or          $v0, $v1, $t4
    ctx->r2 = ctx->r3 | ctx->r12;
    return;
    // 0x80089C08: or          $v0, $v1, $t4
    ctx->r2 = ctx->r3 | ctx->r12;
;}
RECOMP_FUNC void alSeqGetVarLen(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089C0C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80089C10: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80089C14: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x80089C18: sw          $t6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r14;
    // 0x80089C1C: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x80089C20: beq         $t7, $zero, L_80089C50
    if (ctx->r15 == 0) {
        // 0x80089C24: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80089C50;
    }
    // 0x80089C24: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80089C28: andi        $a1, $v0, 0x7F
    ctx->r5 = ctx->r2 & 0X7F;
L_80089C2C:
    // 0x80089C2C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80089C30: sll         $t9, $a1, 7
    ctx->r25 = S32(ctx->r5 << 7);
    // 0x80089C34: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80089C38: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80089C3C: sw          $t8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r24;
    // 0x80089C40: andi        $t0, $v0, 0x7F
    ctx->r8 = ctx->r2 & 0X7F;
    // 0x80089C44: andi        $t1, $v0, 0x80
    ctx->r9 = ctx->r2 & 0X80;
    // 0x80089C48: bne         $t1, $zero, L_80089C2C
    if (ctx->r9 != 0) {
        // 0x80089C4C: addu        $a1, $t9, $t0
        ctx->r5 = ADD32(ctx->r25, ctx->r8);
            goto L_80089C2C;
    }
    // 0x80089C4C: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
L_80089C50:
    // 0x80089C50: jr          $ra
    // 0x80089C54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80089C54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
