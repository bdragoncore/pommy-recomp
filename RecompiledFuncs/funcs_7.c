#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80011B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011B80: jr          $ra
    // 0x80011B84: nop

    return;
    // 0x80011B84: nop

;}
RECOMP_FUNC void func_80011B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011B98: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80011B9C: blez        $a0, L_80011BF0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80011BA0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80011BF0;
    }
    // 0x80011BA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80011BA4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80011BA8: lw          $a1, 0x7D00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7D00);
    // 0x80011BAC: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
L_80011BB0:
    // 0x80011BB0: lhu         $t6, 0x0($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X0);
    // 0x80011BB4: nop

    // 0x80011BB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80011BBC: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x80011BC0: lw          $v1, 0x0($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X0);
    // 0x80011BC4: nop

    // 0x80011BC8: lw          $t9, 0x44($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X44);
    // 0x80011BCC: nop

    // 0x80011BD0: bne         $t0, $t9, L_80011BE0
    if (ctx->r8 != ctx->r25) {
        // 0x80011BD4: nop
    
            goto L_80011BE0;
    }
    // 0x80011BD4: nop

    // 0x80011BD8: b           L_80011BF0
    // 0x80011BDC: sw          $v1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r3;
        goto L_80011BF0;
    // 0x80011BDC: sw          $v1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r3;
L_80011BE0:
    // 0x80011BE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80011BE4: bne         $v0, $a0, L_80011BB0
    if (ctx->r2 != ctx->r4) {
        // 0x80011BE8: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_80011BB0;
    }
    // 0x80011BE8: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80011BEC: sw          $v1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r3;
L_80011BF0:
    // 0x80011BF0: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // 0x80011BF4: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80011BF8: beq         $at, $zero, L_80011C08
    if (ctx->r1 == 0) {
        // 0x80011BFC: addiu       $sp, $sp, 0x8
        ctx->r29 = ADD32(ctx->r29, 0X8);
            goto L_80011C08;
    }
    // 0x80011BFC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80011C00: b           L_80011C0C
    // 0x80011C04: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_80011C0C;
    // 0x80011C04: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80011C08:
    // 0x80011C08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80011C0C:
    // 0x80011C0C: jr          $ra
    // 0x80011C10: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80011C10: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_80011C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80011C14: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80011C18: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80011C1C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80011C20: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80011C24: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80011C28: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80011C2C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80011C30: sw          $a3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r7;
    // 0x80011C34: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80011C38: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80011C3C: lw          $t0, 0x94($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X94);
    // 0x80011C40: lhu         $a0, 0xC($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0XC);
    // 0x80011C44: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x80011C48: jal         0x80011B98
    // 0x80011C4C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    func_80011B98(rdram, ctx);
        goto after_0;
    // 0x80011C4C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    after_0:
    // 0x80011C50: beq         $v0, $zero, L_80012100
    if (ctx->r2 == 0) {
        // 0x80011C54: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80012100;
    }
    // 0x80011C54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80011C58: lh          $t6, 0x34($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X34);
    // 0x80011C5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80011C60: bltz        $t6, L_80011CB0
    if (SIGNED(ctx->r14) < 0) {
        // 0x80011C64: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80011CB0;
    }
    // 0x80011C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80011C68: lhu         $t7, 0x24($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X24);
    // 0x80011C6C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80011C70: beq         $t7, $zero, L_80011CB0
    if (ctx->r15 == 0) {
        // 0x80011C74: nop
    
            goto L_80011CB0;
    }
    // 0x80011C74: nop

    // 0x80011C78: lh          $t9, 0x34($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X34);
    // 0x80011C7C: lw          $t8, 0x20($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X20);
    // 0x80011C80: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80011C84: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80011C88: lhu         $t9, 0x0($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X0);
    // 0x80011C8C: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80011C90: lw          $t6, 0x7D20($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7D20);
    // 0x80011C94: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x80011C98: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80011C9C: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x80011CA0: jal         0x80010BC4
    // 0x80011CA4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80010BC4(rdram, ctx);
        goto after_1;
    // 0x80011CA4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x80011CA8: b           L_80011CBC
    // 0x80011CAC: or          $t8, $s0, $zero
    ctx->r24 = ctx->r16 | 0;
        goto L_80011CBC;
    // 0x80011CAC: or          $t8, $s0, $zero
    ctx->r24 = ctx->r16 | 0;
L_80011CB0:
    // 0x80011CB0: jal         0x80010BC4
    // 0x80011CB4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_80010BC4(rdram, ctx);
        goto after_2;
    // 0x80011CB4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x80011CB8: or          $t8, $s0, $zero
    ctx->r24 = ctx->r16 | 0;
L_80011CBC:
    // 0x80011CBC: or          $t7, $s3, $zero
    ctx->r15 = ctx->r19 | 0;
    // 0x80011CC0: addiu       $t6, $s0, 0x24
    ctx->r14 = ADD32(ctx->r16, 0X24);
L_80011CC4:
    // 0x80011CC4: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x80011CC8: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80011CCC: sw          $at, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r1;
    // 0x80011CD0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80011CD4: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80011CD8: sw          $at, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->r1;
    // 0x80011CDC: lw          $at, 0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X4);
    // 0x80011CE0: bne         $t8, $t6, L_80011CC4
    if (ctx->r24 != ctx->r14) {
        // 0x80011CE4: sw          $at, 0x4C($t7)
        MEM_W(0X4C, ctx->r15) = ctx->r1;
            goto L_80011CC4;
    }
    // 0x80011CE4: sw          $at, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->r1;
    // 0x80011CE8: lw          $t9, 0x38($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X38);
    // 0x80011CEC: nop

    // 0x80011CF0: sw          $t9, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->r25;
    // 0x80011CF4: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x80011CF8: nop

    // 0x80011CFC: sw          $t6, 0x84($s3)
    MEM_W(0X84, ctx->r19) = ctx->r14;
    // 0x80011D00: lhu         $t8, 0x2E($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2E);
    // 0x80011D04: nop

    // 0x80011D08: sh          $t8, 0x88($s3)
    MEM_H(0X88, ctx->r19) = ctx->r24;
    // 0x80011D0C: lhu         $t7, 0x36($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X36);
    // 0x80011D10: nop

    // 0x80011D14: sh          $t7, 0x42($v0)
    MEM_H(0X42, ctx->r2) = ctx->r15;
    // 0x80011D18: lh          $v1, 0x2C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2C);
    // 0x80011D1C: nop

    // 0x80011D20: bltz        $v1, L_80012104
    if (SIGNED(ctx->r3) < 0) {
        // 0x80011D24: lw          $a3, 0x9C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X9C);
            goto L_80012104;
    }
    // 0x80011D24: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x80011D28: lhu         $t9, 0x14($s2)
    ctx->r25 = MEM_HU(ctx->r18, 0X14);
    // 0x80011D2C: nop

    // 0x80011D30: beq         $t9, $zero, L_80012104
    if (ctx->r25 == 0) {
        // 0x80011D34: lw          $a3, 0x9C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X9C);
            goto L_80012104;
    }
    // 0x80011D34: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x80011D38: lw          $t6, 0x10($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X10);
    // 0x80011D3C: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x80011D40: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80011D44: lhu         $t9, 0x0($t7)
    ctx->r25 = MEM_HU(ctx->r15, 0X0);
    // 0x80011D48: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80011D4C: lw          $t8, 0x7D10($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7D10);
    // 0x80011D50: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80011D54: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80011D58: lw          $t0, 0x0($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X0);
    // 0x80011D5C: nop

    // 0x80011D60: lw          $t9, 0x30($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X30);
    // 0x80011D64: nop

    // 0x80011D68: beq         $t9, $zero, L_80012104
    if (ctx->r25 == 0) {
        // 0x80011D6C: lw          $a3, 0x9C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X9C);
            goto L_80012104;
    }
    // 0x80011D6C: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x80011D70: lw          $a0, 0x98($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X98);
    // 0x80011D74: nop

    // 0x80011D78: beq         $a0, $zero, L_80011DA0
    if (ctx->r4 == 0) {
        // 0x80011D7C: nop
    
            goto L_80011DA0;
    }
    // 0x80011D7C: nop

    // 0x80011D80: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x80011D84: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80011D88: beq         $t0, $t8, L_80011E48
    if (ctx->r8 == ctx->r24) {
        // 0x80011D8C: nop
    
            goto L_80011E48;
    }
    // 0x80011D8C: nop

    // 0x80011D90: jal         0x80011598
    // 0x80011D94: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    func_80011598(rdram, ctx);
        goto after_3;
    // 0x80011D94: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    after_3:
    // 0x80011D98: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80011D9C: nop

L_80011DA0:
    // 0x80011DA0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80011DA4: addiu       $v0, $v0, 0x7708
    ctx->r2 = ADD32(ctx->r2, 0X7708);
    // 0x80011DA8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80011DAC: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80011DB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80011DB4: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80011DB8: lw          $s0, 0x7578($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7578);
    // 0x80011DBC: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    // 0x80011DC0: sw          $s0, 0x98($s3)
    MEM_W(0X98, ctx->r19) = ctx->r16;
    // 0x80011DC4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80011DC8: nop

    // 0x80011DCC: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x80011DD0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80011DD4: sw          $s3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r19;
    // 0x80011DD8: jal         0x8000C734
    // 0x80011DDC: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    func_8000C734(rdram, ctx);
        goto after_4;
    // 0x80011DDC: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    after_4:
    // 0x80011DE0: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80011DE4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80011DE8: or          $t8, $v0, $zero
    ctx->r24 = ctx->r2 | 0;
    // 0x80011DEC: or          $t9, $t0, $zero
    ctx->r25 = ctx->r8 | 0;
    // 0x80011DF0: addiu       $t7, $t0, 0x48
    ctx->r15 = ADD32(ctx->r8, 0X48);
L_80011DF4:
    // 0x80011DF4: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80011DF8: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80011DFC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80011E00: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80011E04: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80011E08: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x80011E0C: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80011E10: bne         $t9, $t7, L_80011DF4
    if (ctx->r25 != ctx->r15) {
        // 0x80011E14: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80011DF4;
    }
    // 0x80011E14: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80011E18: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80011E1C: nop

    // 0x80011E20: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80011E24: lw          $t6, 0xAC($s3)
    ctx->r14 = MEM_W(ctx->r19, 0XAC);
    // 0x80011E28: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x80011E2C: sw          $t6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r14;
    // 0x80011E30: sw          $v0, 0xAC($s3)
    MEM_W(0XAC, ctx->r19) = ctx->r2;
    // 0x80011E34: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80011E38: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x80011E3C: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x80011E40: lw          $a0, 0x98($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X98);
    // 0x80011E44: nop

L_80011E48:
    // 0x80011E48: sw          $a0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r4;
    // 0x80011E4C: lw          $v0, 0x34($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X34);
    // 0x80011E50: lw          $t1, 0x4($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X4);
    // 0x80011E54: beq         $v0, $zero, L_8001202C
    if (ctx->r2 == 0) {
        // 0x80011E58: nop
    
            goto L_8001202C;
    }
    // 0x80011E58: nop

    // 0x80011E5C: lw          $s0, 0x10($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X10);
    // 0x80011E60: nop

    // 0x80011E64: beq         $s0, $zero, L_80011E88
    if (ctx->r16 == 0) {
        // 0x80011E68: nop
    
            goto L_80011E88;
    }
    // 0x80011E68: nop

    // 0x80011E6C: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x80011E70: jal         0x80011530
    // 0x80011E74: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    func_80011530(rdram, ctx);
        goto after_5;
    // 0x80011E74: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    after_5:
    // 0x80011E78: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80011E7C: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x80011E80: lw          $v0, 0x34($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X34);
    // 0x80011E84: nop

L_80011E88:
    // 0x80011E88: sw          $v0, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->r2;
    // 0x80011E8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80011E90: sw          $s2, 0x7CF8($at)
    MEM_W(0X7CF8, ctx->r1) = ctx->r18;
    // 0x80011E94: lw          $a2, 0x34($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X34);
    // 0x80011E98: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80011E9C: bne         $a2, $zero, L_80011EAC
    if (ctx->r6 != 0) {
        // 0x80011EA0: addiu       $v1, $v1, 0x78A0
        ctx->r3 = ADD32(ctx->r3, 0X78A0);
            goto L_80011EAC;
    }
    // 0x80011EA0: addiu       $v1, $v1, 0x78A0
    ctx->r3 = ADD32(ctx->r3, 0X78A0);
    // 0x80011EA4: b           L_80012020
    // 0x80011EA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80012020;
    // 0x80011EA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80011EAC:
    // 0x80011EAC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80011EB0: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80011EB4: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80011EB8: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x80011EBC: lw          $s0, 0x7710($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X7710);
    // 0x80011EC0: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80011EC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80011EC8: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x80011ECC: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x80011ED0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80011ED4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80011ED8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80011EDC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80011EE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80011EE4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80011EE8: sh          $t7, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r15;
    // 0x80011EEC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80011EF0: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x80011EF4: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x80011EF8: swc1        $f8, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f8.u32l;
    // 0x80011EFC: lhu         $t8, 0x8($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X8);
    // 0x80011F00: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80011F04: sll         $t6, $t8, 1
    ctx->r14 = S32(ctx->r24 << 1);
    // 0x80011F08: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80011F0C: lh          $t8, -0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, -0X2);
    // 0x80011F10: nop

    // 0x80011F14: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x80011F18: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80011F1C: nop

    // 0x80011F20: sw          $t9, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r25;
    // 0x80011F24: lhu         $t6, 0x8($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X8);
    // 0x80011F28: nop

    // 0x80011F2C: sh          $t6, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r14;
    // 0x80011F30: lhu         $t7, 0xA($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0XA);
    // 0x80011F34: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    // 0x80011F38: sh          $t7, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r15;
    // 0x80011F3C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80011F40: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80011F44: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x80011F48: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x80011F4C: jal         0x8000C734
    // 0x80011F50: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    func_8000C734(rdram, ctx);
        goto after_6;
    // 0x80011F50: sw          $a2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r6;
    after_6:
    // 0x80011F54: lhu         $t9, 0x2C($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2C);
    // 0x80011F58: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x80011F5C: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80011F60: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x80011F64: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x80011F68: blez        $t9, L_80011FD4
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80011F6C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80011FD4;
    }
    // 0x80011F6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80011F70: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80011F74: addiu       $a1, $a1, 0x7D28
    ctx->r5 = ADD32(ctx->r5, 0X7D28);
    // 0x80011F78: addiu       $a3, $s2, 0x28
    ctx->r7 = ADD32(ctx->r18, 0X28);
    // 0x80011F7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80011F80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80011F84:
    // 0x80011F84: lw          $t7, 0x4($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X4);
    // 0x80011F88: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80011F8C: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x80011F90: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x80011F94: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80011F98: sll         $t7, $t9, 1
    ctx->r15 = S32(ctx->r25 << 1);
    // 0x80011F9C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80011FA0: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80011FA4: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80011FA8: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80011FAC: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80011FB0: lw          $t7, 0x28($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X28);
    // 0x80011FB4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80011FB8: addu        $t6, $t7, $v0
    ctx->r14 = ADD32(ctx->r15, ctx->r2);
    // 0x80011FBC: sw          $t9, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r25;
    // 0x80011FC0: lhu         $t8, 0x2C($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2C);
    // 0x80011FC4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80011FC8: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80011FCC: bne         $at, $zero, L_80011F84
    if (ctx->r1 != 0) {
        // 0x80011FD0: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_80011F84;
    }
    // 0x80011FD0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_80011FD4:
    // 0x80011FD4: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x80011FD8: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    // 0x80011FDC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80011FE0: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80011FE4: sll         $a0, $t7, 2
    ctx->r4 = S32(ctx->r15 << 2);
    // 0x80011FE8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80011FEC: jal         0x8000C734
    // 0x80011FF0: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    func_8000C734(rdram, ctx);
        goto after_7;
    // 0x80011FF0: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    after_7:
    // 0x80011FF4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80011FF8: jal         0x8000C734
    // 0x80011FFC: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    func_8000C734(rdram, ctx);
        goto after_8;
    // 0x80011FFC: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    after_8:
    // 0x80012000: lhu         $t9, 0x2C($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X2C);
    // 0x80012004: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x80012008: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x8001200C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80012010: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80012014: sh          $t6, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r14;
    // 0x80012018: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    // 0x8001201C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80012020:
    // 0x80012020: lw          $t8, 0x7C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X7C);
    // 0x80012024: nop

    // 0x80012028: sw          $v0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r2;
L_8001202C:
    // 0x8001202C: lhu         $t7, 0x3C($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X3C);
    // 0x80012030: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x80012034: beq         $t7, $zero, L_80012104
    if (ctx->r15 == 0) {
        // 0x80012038: lw          $a3, 0x9C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X9C);
            goto L_80012104;
    }
    // 0x80012038: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x8001203C: lw          $s0, 0x14($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X14);
    // 0x80012040: nop

    // 0x80012044: beq         $s0, $zero, L_80012064
    if (ctx->r16 == 0) {
        // 0x80012048: nop
    
            goto L_80012064;
    }
    // 0x80012048: nop

    // 0x8001204C: sw          $t0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r8;
    // 0x80012050: jal         0x800114D4
    // 0x80012054: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    func_800114D4(rdram, ctx);
        goto after_9;
    // 0x80012054: sw          $t1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r9;
    after_9:
    // 0x80012058: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8001205C: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x80012060: nop

L_80012064:
    // 0x80012064: lw          $v1, 0x38($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X38);
    // 0x80012068: lhu         $a1, 0x3C($t1)
    ctx->r5 = MEM_HU(ctx->r9, 0X3C);
    // 0x8001206C: bne         $v1, $zero, L_8001207C
    if (ctx->r3 != 0) {
        // 0x80012070: sw          $v1, 0x38($t1)
        MEM_W(0X38, ctx->r9) = ctx->r3;
            goto L_8001207C;
    }
    // 0x80012070: sw          $v1, 0x38($t1)
    MEM_W(0X38, ctx->r9) = ctx->r3;
    // 0x80012074: b           L_800120F4
    // 0x80012078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800120F4;
    // 0x80012078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001207C:
    // 0x8001207C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80012080: addiu       $a2, $a2, 0x7A38
    ctx->r6 = ADD32(ctx->r6, 0X7A38);
    // 0x80012084: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80012088: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x8001208C: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80012090: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x80012094: lw          $s0, 0x78A8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X78A8);
    // 0x80012098: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x8001209C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x800120A0: sw          $s4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r20;
    // 0x800120A4: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x800120A8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800120AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800120B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800120B4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800120B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800120BC: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x800120C0: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    // 0x800120C4: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x800120C8: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800120CC: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    // 0x800120D0: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x800120D4: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x800120D8: jal         0x8000C734
    // 0x800120DC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8000C734(rdram, ctx);
        goto after_10;
    // 0x800120DC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_10:
    // 0x800120E0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800120E4: jal         0x8000C734
    // 0x800120E8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    func_8000C734(rdram, ctx);
        goto after_11;
    // 0x800120E8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    after_11:
    // 0x800120EC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x800120F0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_800120F4:
    // 0x800120F4: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x800120F8: nop

    // 0x800120FC: sw          $v0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r2;
L_80012100:
    // 0x80012100: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
L_80012104:
    // 0x80012104: nop

    // 0x80012108: andi        $t8, $a3, 0x2
    ctx->r24 = ctx->r7 & 0X2;
    // 0x8001210C: beq         $t8, $zero, L_8001214C
    if (ctx->r24 == 0) {
        // 0x80012110: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8001214C;
    }
    // 0x80012110: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80012114: lw          $s0, 0x8($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X8);
    // 0x80012118: nop

    // 0x8001211C: beq         $s0, $zero, L_8001214C
    if (ctx->r16 == 0) {
        // 0x80012120: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8001214C;
    }
    // 0x80012120: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80012124: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
L_80012128:
    // 0x80012128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001212C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80012130: jal         0x80011C14
    // 0x80012134: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_80011C14(rdram, ctx);
        goto after_12;
    // 0x80012134: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_12:
    // 0x80012138: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x8001213C: nop

    // 0x80012140: bne         $s0, $zero, L_80012128
    if (ctx->r16 != 0) {
        // 0x80012144: lw          $a3, 0x9C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X9C);
            goto L_80012128;
    }
    // 0x80012144: lw          $a3, 0x9C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X9C);
    // 0x80012148: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8001214C:
    // 0x8001214C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80012150: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80012154: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80012158: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8001215C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80012160: jr          $ra
    // 0x80012164: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80012164: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_80012168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012168: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001216C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80012170: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80012174: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80012178: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x8001217C: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80012180: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80012184: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80012188: addiu       $s2, $s2, 0x7CF8
    ctx->r18 = ADD32(ctx->r18, 0X7CF8);
    // 0x8001218C: addiu       $s1, $s1, 0x3A4
    ctx->r17 = ADD32(ctx->r17, 0X3A4);
    // 0x80012190: addiu       $s0, $s0, 0x7C78
    ctx->r16 = ADD32(ctx->r16, 0X7C78);
L_80012194:
    // 0x80012194: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80012198: nop

    // 0x8001219C: beq         $a0, $zero, L_800121C8
    if (ctx->r4 == 0) {
        // 0x800121A0: nop
    
            goto L_800121C8;
    }
    // 0x800121A0: nop

    // 0x800121A4: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800121A8: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x800121AC: nop

    // 0x800121B0: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800121B4: beq         $at, $zero, L_800121C8
    if (ctx->r1 == 0) {
        // 0x800121B8: nop
    
            goto L_800121C8;
    }
    // 0x800121B8: nop

    // 0x800121BC: jal         0x8000C658
    // 0x800121C0: nop

    func_8000C658(rdram, ctx);
        goto after_0;
    // 0x800121C0: nop

    after_0:
    // 0x800121C4: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
L_800121C8:
    // 0x800121C8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800121CC: bne         $s0, $s2, L_80012194
    if (ctx->r16 != ctx->r18) {
        // 0x800121D0: nop
    
            goto L_80012194;
    }
    // 0x800121D0: nop

    // 0x800121D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800121D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800121DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800121E0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800121E4: jr          $ra
    // 0x800121E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800121E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800121EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800121EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800121F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800121F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800121F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800121FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80012200: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80012204: lbu         $a3, 0x81($a0)
    ctx->r7 = MEM_BU(ctx->r4, 0X81);
    // 0x80012208: andi        $s1, $a1, 0xFFFF
    ctx->r17 = ctx->r5 & 0XFFFF;
    // 0x8001220C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80012210: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80012214: beq         $s1, $a3, L_80012244
    if (ctx->r17 == ctx->r7) {
        // 0x80012218: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80012244;
    }
    // 0x80012218: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8001221C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80012220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80012224: jal         0x800148C4
    // 0x80012228: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_800148C4(rdram, ctx);
        goto after_0;
    // 0x80012228: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_0:
    // 0x8001222C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80012230: jal         0x800148E8
    // 0x80012234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800148E8(rdram, ctx);
        goto after_1;
    // 0x80012234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80012238: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8001223C: nop

    // 0x80012240: sb          $s1, 0x81($t0)
    MEM_B(0X81, ctx->r8) = ctx->r17;
L_80012244:
    // 0x80012244: andi        $t6, $s2, 0x2
    ctx->r14 = ctx->r18 & 0X2;
    // 0x80012248: beq         $t6, $zero, L_80012280
    if (ctx->r14 == 0) {
        // 0x8001224C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80012280;
    }
    // 0x8001224C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80012250: lw          $s0, 0x8($t0)
    ctx->r16 = MEM_W(ctx->r8, 0X8);
    // 0x80012254: nop

    // 0x80012258: beq         $s0, $zero, L_8001227C
    if (ctx->r16 == 0) {
        // 0x8001225C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8001227C;
    }
    // 0x8001225C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80012260:
    // 0x80012260: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x80012264: jal         0x800121EC
    // 0x80012268: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800121EC(rdram, ctx);
        goto after_2;
    // 0x80012268: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x8001226C: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x80012270: nop

    // 0x80012274: bne         $s0, $zero, L_80012260
    if (ctx->r16 != 0) {
        // 0x80012278: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80012260;
    }
    // 0x80012278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8001227C:
    // 0x8001227C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80012280:
    // 0x80012280: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80012284: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80012288: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001228C: jr          $ra
    // 0x80012290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80012290: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80012294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012294: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80012298: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001229C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800122A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800122A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800122A8: lbu         $a1, 0x82($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X82);
    // 0x800122AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800122B0: jal         0x800121EC
    // 0x800122B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800121EC(rdram, ctx);
        goto after_0;
    // 0x800122B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800122B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800122BC: andi        $t6, $s1, 0x2
    ctx->r14 = ctx->r17 & 0X2;
    // 0x800122C0: beq         $t6, $zero, L_800122F0
    if (ctx->r14 == 0) {
        // 0x800122C4: sw          $zero, 0xB4($a0)
        MEM_W(0XB4, ctx->r4) = 0;
            goto L_800122F0;
    }
    // 0x800122C4: sw          $zero, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = 0;
    // 0x800122C8: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x800122CC: nop

    // 0x800122D0: beq         $s0, $zero, L_800122F0
    if (ctx->r16 == 0) {
        // 0x800122D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800122F0;
    }
    // 0x800122D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800122D8:
    // 0x800122D8: jal         0x80012294
    // 0x800122DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80012294(rdram, ctx);
        goto after_1;
    // 0x800122DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x800122E0: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x800122E4: nop

    // 0x800122E8: bne         $s0, $zero, L_800122D8
    if (ctx->r16 != 0) {
        // 0x800122EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800122D8;
    }
    // 0x800122EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800122F0:
    // 0x800122F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800122F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800122F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800122FC: jr          $ra
    // 0x80012300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80012300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80012304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012304: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80012308: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8001230C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80012310: andi        $s1, $a2, 0xFFFF
    ctx->r17 = ctx->r6 & 0XFFFF;
    // 0x80012314: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80012318: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001231C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80012320: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80012324: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x80012328: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001232C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80012330: andi        $a1, $s1, 0xFFFF
    ctx->r5 = ctx->r17 & 0XFFFF;
    // 0x80012334: jal         0x800121EC
    // 0x80012338: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_800121EC(rdram, ctx);
        goto after_0;
    // 0x80012338: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8001233C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80012340: andi        $t6, $s3, 0x2
    ctx->r14 = ctx->r19 & 0X2;
    // 0x80012344: beq         $t6, $zero, L_8001237C
    if (ctx->r14 == 0) {
        // 0x80012348: sw          $s2, 0xB4($a0)
        MEM_W(0XB4, ctx->r4) = ctx->r18;
            goto L_8001237C;
    }
    // 0x80012348: sw          $s2, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->r18;
    // 0x8001234C: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x80012350: nop

    // 0x80012354: beq         $s0, $zero, L_8001237C
    if (ctx->r16 == 0) {
        // 0x80012358: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8001237C;
    }
    // 0x80012358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8001235C:
    // 0x8001235C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80012360: andi        $a2, $s1, 0xFFFF
    ctx->r6 = ctx->r17 & 0XFFFF;
    // 0x80012364: jal         0x80012304
    // 0x80012368: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_80012304(rdram, ctx);
        goto after_1;
    // 0x80012368: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_1:
    // 0x8001236C: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x80012370: nop

    // 0x80012374: bne         $s0, $zero, L_8001235C
    if (ctx->r16 != 0) {
        // 0x80012378: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8001235C;
    }
    // 0x80012378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8001237C:
    // 0x8001237C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80012380: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80012384: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80012388: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001238C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80012390: jr          $ra
    // 0x80012394: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80012394: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80012398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012398: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001239C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800123A0: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x800123A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800123A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800123AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800123B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800123B4: andi        $t6, $a2, 0x2
    ctx->r14 = ctx->r6 & 0X2;
    // 0x800123B8: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x800123BC: beq         $t6, $zero, L_800123F0
    if (ctx->r14 == 0) {
        // 0x800123C0: sb          $s1, 0x80($a0)
        MEM_B(0X80, ctx->r4) = ctx->r17;
            goto L_800123F0;
    }
    // 0x800123C0: sb          $s1, 0x80($a0)
    MEM_B(0X80, ctx->r4) = ctx->r17;
    // 0x800123C4: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x800123C8: nop

    // 0x800123CC: beq         $s0, $zero, L_800123F0
    if (ctx->r16 == 0) {
        // 0x800123D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800123F0;
    }
    // 0x800123D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800123D4:
    // 0x800123D4: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x800123D8: jal         0x80012398
    // 0x800123DC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_80012398(rdram, ctx);
        goto after_0;
    // 0x800123DC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x800123E0: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x800123E4: nop

    // 0x800123E8: bne         $s0, $zero, L_800123D4
    if (ctx->r16 != 0) {
        // 0x800123EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800123D4;
    }
    // 0x800123EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800123F0:
    // 0x800123F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800123F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800123F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800123FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80012400: jr          $ra
    // 0x80012404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80012404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80012408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012408: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8001240C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80012410: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80012414: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80012418: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8001241C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80012420: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80012424: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80012428: andi        $s3, $a2, 0xFFFF
    ctx->r19 = ctx->r6 & 0XFFFF;
    // 0x8001242C: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80012430: lw          $t0, 0x94($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X94);
    // 0x80012434: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80012438: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x8001243C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80012440: jal         0x80011B98
    // 0x80012444: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    func_80011B98(rdram, ctx);
        goto after_0;
    // 0x80012444: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    after_0:
    // 0x80012448: beq         $v0, $zero, L_800124BC
    if (ctx->r2 == 0) {
        // 0x8001244C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800124BC;
    }
    // 0x8001244C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80012450: lh          $t6, 0x2C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2C);
    // 0x80012454: nop

    // 0x80012458: bltz        $t6, L_800124C0
    if (SIGNED(ctx->r14) < 0) {
        // 0x8001245C: lw          $s1, 0x50($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X50);
            goto L_800124C0;
    }
    // 0x8001245C: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80012460: lw          $s1, 0x98($t1)
    ctx->r17 = MEM_W(ctx->r9, 0X98);
    // 0x80012464: nop

    // 0x80012468: beq         $s1, $zero, L_80012488
    if (ctx->r17 == 0) {
        // 0x8001246C: nop
    
            goto L_80012488;
    }
    // 0x8001246C: nop

    // 0x80012470: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80012474: jal         0x80011598
    // 0x80012478: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    func_80011598(rdram, ctx);
        goto after_1;
    // 0x80012478: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    after_1:
    // 0x8001247C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x80012480: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x80012484: nop

L_80012488:
    // 0x80012488: lh          $t7, 0x2C($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2C);
    // 0x8001248C: nop

    // 0x80012490: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80012494: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x80012498: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x8001249C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x800124A0: sw          $t6, 0xB0($t1)
    MEM_W(0XB0, ctx->r9) = ctx->r14;
    // 0x800124A4: lw          $t7, 0x7D10($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7D10);
    // 0x800124A8: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800124AC: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x800124B0: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x800124B4: nop

    // 0x800124B8: sw          $t8, 0xAC($t1)
    MEM_W(0XAC, ctx->r9) = ctx->r24;
L_800124BC:
    // 0x800124BC: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
L_800124C0:
    // 0x800124C0: nop

    // 0x800124C4: andi        $t7, $s1, 0x2
    ctx->r15 = ctx->r17 & 0X2;
    // 0x800124C8: beq         $t7, $zero, L_80012508
    if (ctx->r15 == 0) {
        // 0x800124CC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80012508;
    }
    // 0x800124CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800124D0: lw          $s0, 0x8($t1)
    ctx->r16 = MEM_W(ctx->r9, 0X8);
    // 0x800124D4: nop

    // 0x800124D8: beq         $s0, $zero, L_80012504
    if (ctx->r16 == 0) {
        // 0x800124DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80012504;
    }
    // 0x800124DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800124E0:
    // 0x800124E0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800124E4: andi        $a2, $s3, 0xFFFF
    ctx->r6 = ctx->r19 & 0XFFFF;
    // 0x800124E8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    // 0x800124EC: jal         0x80012408
    // 0x800124F0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_80012408(rdram, ctx);
        goto after_2;
    // 0x800124F0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_2:
    // 0x800124F4: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x800124F8: nop

    // 0x800124FC: bne         $s0, $zero, L_800124E0
    if (ctx->r16 != 0) {
        // 0x80012500: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800124E0;
    }
    // 0x80012500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80012504:
    // 0x80012504: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80012508:
    // 0x80012508: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8001250C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80012510: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80012514: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80012518: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8001251C: jr          $ra
    // 0x80012520: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80012520: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80012524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012524: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80012528: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001252C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80012530: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80012534: lw          $v1, 0x9C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X9C);
    // 0x80012538: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8001253C: beq         $v1, $zero, L_80012558
    if (ctx->r3 == 0) {
        // 0x80012540: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80012558;
    }
    // 0x80012540: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80012544: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80012548: nop

    // 0x8001254C: bne         $a1, $t6, L_80012558
    if (ctx->r5 != ctx->r14) {
        // 0x80012550: nop
    
            goto L_80012558;
    }
    // 0x80012550: nop

    // 0x80012554: sw          $zero, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = 0;
L_80012558:
    // 0x80012558: lw          $v1, 0xA0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XA0);
    // 0x8001255C: nop

    // 0x80012560: beq         $v1, $zero, L_8001257C
    if (ctx->r3 == 0) {
        // 0x80012564: nop
    
            goto L_8001257C;
    }
    // 0x80012564: nop

    // 0x80012568: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8001256C: nop

    // 0x80012570: bne         $s1, $t7, L_8001257C
    if (ctx->r17 != ctx->r15) {
        // 0x80012574: nop
    
            goto L_8001257C;
    }
    // 0x80012574: nop

    // 0x80012578: sw          $zero, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = 0;
L_8001257C:
    // 0x8001257C: lw          $v1, 0xA4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XA4);
    // 0x80012580: nop

    // 0x80012584: beq         $v1, $zero, L_800125A0
    if (ctx->r3 == 0) {
        // 0x80012588: nop
    
            goto L_800125A0;
    }
    // 0x80012588: nop

    // 0x8001258C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80012590: nop

    // 0x80012594: bne         $s1, $t8, L_800125A0
    if (ctx->r17 != ctx->r24) {
        // 0x80012598: nop
    
            goto L_800125A0;
    }
    // 0x80012598: nop

    // 0x8001259C: sw          $zero, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = 0;
L_800125A0:
    // 0x800125A0: lw          $v1, 0xA8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XA8);
    // 0x800125A4: nop

    // 0x800125A8: beq         $v1, $zero, L_800125C4
    if (ctx->r3 == 0) {
        // 0x800125AC: nop
    
            goto L_800125C4;
    }
    // 0x800125AC: nop

    // 0x800125B0: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x800125B4: nop

    // 0x800125B8: bne         $s1, $t9, L_800125C4
    if (ctx->r17 != ctx->r25) {
        // 0x800125BC: nop
    
            goto L_800125C4;
    }
    // 0x800125BC: nop

    // 0x800125C0: sw          $zero, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = 0;
L_800125C4:
    // 0x800125C4: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x800125C8: nop

    // 0x800125CC: beq         $s0, $zero, L_800125EC
    if (ctx->r16 == 0) {
        // 0x800125D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800125EC;
    }
    // 0x800125D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800125D4:
    // 0x800125D4: jal         0x80012524
    // 0x800125D8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80012524(rdram, ctx);
        goto after_0;
    // 0x800125D8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x800125DC: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x800125E0: nop

    // 0x800125E4: bne         $s0, $zero, L_800125D4
    if (ctx->r16 != 0) {
        // 0x800125E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800125D4;
    }
    // 0x800125E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_800125EC:
    // 0x800125EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800125F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800125F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800125F8: jr          $ra
    // 0x800125FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800125FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80012600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012600: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80012604: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80012608: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8001260C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80012610: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80012614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80012618: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8001261C: sw          $a2, 0x9C($t7)
    MEM_W(0X9C, ctx->r15) = ctx->r6;
    // 0x80012620: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x80012624: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80012628: beq         $s0, $zero, L_80012650
    if (ctx->r16 == 0) {
        // 0x8001262C: or          $s2, $a2, $zero
        ctx->r18 = ctx->r6 | 0;
            goto L_80012650;
    }
    // 0x8001262C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80012630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80012634:
    // 0x80012634: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80012638: jal         0x80012600
    // 0x8001263C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_80012600(rdram, ctx);
        goto after_0;
    // 0x8001263C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x80012640: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x80012644: nop

    // 0x80012648: bne         $s0, $zero, L_80012634
    if (ctx->r16 != 0) {
        // 0x8001264C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80012634;
    }
    // 0x8001264C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80012650:
    // 0x80012650: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80012654: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80012658: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8001265C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80012660: jr          $ra
    // 0x80012664: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80012664: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80012668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012668: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001266C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80012670: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80012674: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80012678: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8001267C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80012680: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x80012684: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80012688: beq         $v0, $zero, L_800126A4
    if (ctx->r2 == 0) {
        // 0x8001268C: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_800126A4;
    }
    // 0x8001268C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80012690: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80012694: nop

    // 0x80012698: bne         $a1, $t6, L_800126A4
    if (ctx->r5 != ctx->r14) {
        // 0x8001269C: nop
    
            goto L_800126A4;
    }
    // 0x8001269C: nop

    // 0x800126A0: swc1        $f20, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f20.u32l;
L_800126A4:
    // 0x800126A4: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x800126A8: nop

    // 0x800126AC: beq         $v0, $zero, L_80012700
    if (ctx->r2 == 0) {
        // 0x800126B0: nop
    
            goto L_80012700;
    }
    // 0x800126B0: nop

    // 0x800126B4: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x800126B8: nop

    // 0x800126BC: beq         $v1, $zero, L_800126DC
    if (ctx->r3 == 0) {
        // 0x800126C0: nop
    
            goto L_800126DC;
    }
    // 0x800126C0: nop

    // 0x800126C4: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x800126C8: nop

    // 0x800126CC: bne         $s1, $t7, L_800126DC
    if (ctx->r17 != ctx->r15) {
        // 0x800126D0: nop
    
            goto L_800126DC;
    }
    // 0x800126D0: nop

    // 0x800126D4: b           L_80012700
    // 0x800126D8: swc1        $f20, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f20.u32l;
        goto L_80012700;
    // 0x800126D8: swc1        $f20, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f20.u32l;
L_800126DC:
    // 0x800126DC: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x800126E0: nop

    // 0x800126E4: beq         $v1, $zero, L_80012700
    if (ctx->r3 == 0) {
        // 0x800126E8: nop
    
            goto L_80012700;
    }
    // 0x800126E8: nop

    // 0x800126EC: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x800126F0: nop

    // 0x800126F4: bne         $s1, $t8, L_80012700
    if (ctx->r17 != ctx->r24) {
        // 0x800126F8: nop
    
            goto L_80012700;
    }
    // 0x800126F8: nop

    // 0x800126FC: swc1        $f20, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f20.u32l;
L_80012700:
    // 0x80012700: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x80012704: nop

    // 0x80012708: beq         $s0, $zero, L_80012734
    if (ctx->r16 == 0) {
        // 0x8001270C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80012734;
    }
    // 0x8001270C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80012710:
    // 0x80012710: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80012714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80012718: jal         0x80012668
    // 0x8001271C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80012668(rdram, ctx);
        goto after_0;
    // 0x8001271C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80012720: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x80012724: nop

    // 0x80012728: bne         $s0, $zero, L_80012710
    if (ctx->r16 != 0) {
        // 0x8001272C: nop
    
            goto L_80012710;
    }
    // 0x8001272C: nop

    // 0x80012730: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80012734:
    // 0x80012734: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80012738: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8001273C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80012740: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80012744: jr          $ra
    // 0x80012748: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80012748: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8001274C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001274C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012750: beq         $a2, $zero, L_80012768
    if (ctx->r6 == 0) {
        // 0x80012754: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80012768;
    }
    // 0x80012754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012758: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x8001275C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80012760: b           L_8001277C
    // 0x80012764: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
        goto L_8001277C;
    // 0x80012764: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
L_80012768:
    // 0x80012768: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8001276C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80012770: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80012774: nop

    // 0x80012778: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
L_8001277C:
    // 0x8001277C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80012780: jal         0x80012668
    // 0x80012784: nop

    func_80012668(rdram, ctx);
        goto after_0;
    // 0x80012784: nop

    after_0:
    // 0x80012788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001278C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012790: jr          $ra
    // 0x80012794: nop

    return;
    // 0x80012794: nop

;}
RECOMP_FUNC void func_80012798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012798: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8001279C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800127A0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800127A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800127A8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800127AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800127B0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800127B4: jal         0x80012668
    // 0x800127B8: nop

    func_80012668(rdram, ctx);
        goto after_0;
    // 0x800127B8: nop

    after_0:
    // 0x800127BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800127C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800127C4: jr          $ra
    // 0x800127C8: nop

    return;
    // 0x800127C8: nop

;}
RECOMP_FUNC void func_800127CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800127CC: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x800127D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800127D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800127D8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800127DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800127E0: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800127E4: jal         0x80012668
    // 0x800127E8: nop

    func_80012668(rdram, ctx);
        goto after_0;
    // 0x800127E8: nop

    after_0:
    // 0x800127EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800127F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800127F4: jr          $ra
    // 0x800127F8: nop

    return;
    // 0x800127F8: nop

;}
RECOMP_FUNC void func_800127FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800127FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80012800: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80012804: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80012808: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8001280C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80012810: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x80012814: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80012818: beq         $v0, $zero, L_80012834
    if (ctx->r2 == 0) {
        // 0x8001281C: or          $s2, $a2, $zero
        ctx->r18 = ctx->r6 | 0;
            goto L_80012834;
    }
    // 0x8001281C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80012820: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80012824: nop

    // 0x80012828: bne         $a1, $t6, L_80012834
    if (ctx->r5 != ctx->r14) {
        // 0x8001282C: nop
    
            goto L_80012834;
    }
    // 0x8001282C: nop

    // 0x80012830: sh          $a2, 0x42($v0)
    MEM_H(0X42, ctx->r2) = ctx->r6;
L_80012834:
    // 0x80012834: lw          $v1, 0x98($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X98);
    // 0x80012838: nop

    // 0x8001283C: beq         $v1, $zero, L_80012868
    if (ctx->r3 == 0) {
        // 0x80012840: nop
    
            goto L_80012868;
    }
    // 0x80012840: nop

    // 0x80012844: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x80012848: nop

    // 0x8001284C: beq         $v0, $zero, L_80012868
    if (ctx->r2 == 0) {
        // 0x80012850: nop
    
            goto L_80012868;
    }
    // 0x80012850: nop

    // 0x80012854: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80012858: nop

    // 0x8001285C: bne         $s1, $t7, L_80012868
    if (ctx->r17 != ctx->r15) {
        // 0x80012860: nop
    
            goto L_80012868;
    }
    // 0x80012860: nop

    // 0x80012864: sh          $s2, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r18;
L_80012868:
    // 0x80012868: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x8001286C: nop

    // 0x80012870: beq         $s0, $zero, L_80012894
    if (ctx->r16 == 0) {
        // 0x80012874: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80012894;
    }
    // 0x80012874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80012878:
    // 0x80012878: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001287C: jal         0x800127FC
    // 0x80012880: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800127FC(rdram, ctx);
        goto after_0;
    // 0x80012880: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x80012884: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x80012888: nop

    // 0x8001288C: bne         $s0, $zero, L_80012878
    if (ctx->r16 != 0) {
        // 0x80012890: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80012878;
    }
    // 0x80012890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80012894:
    // 0x80012894: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80012898: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8001289C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800128A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800128A4: jr          $ra
    // 0x800128A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800128A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800128AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800128AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800128B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800128B4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800128B8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800128BC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800128C0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800128C4: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x800128C8: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x800128CC: beq         $v0, $zero, L_800128E8
    if (ctx->r2 == 0) {
        // 0x800128D0: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_800128E8;
    }
    // 0x800128D0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800128D4: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x800128D8: nop

    // 0x800128DC: bne         $a1, $t6, L_800128E8
    if (ctx->r5 != ctx->r14) {
        // 0x800128E0: nop
    
            goto L_800128E8;
    }
    // 0x800128E0: nop

    // 0x800128E4: swc1        $f20, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f20.u32l;
L_800128E8:
    // 0x800128E8: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x800128EC: nop

    // 0x800128F0: beq         $v0, $zero, L_80012954
    if (ctx->r2 == 0) {
        // 0x800128F4: nop
    
            goto L_80012954;
    }
    // 0x800128F4: nop

    // 0x800128F8: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x800128FC: nop

    // 0x80012900: beq         $v1, $zero, L_80012930
    if (ctx->r3 == 0) {
        // 0x80012904: nop
    
            goto L_80012930;
    }
    // 0x80012904: nop

    // 0x80012908: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x8001290C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80012910: bne         $s1, $t7, L_80012930
    if (ctx->r17 != ctx->r15) {
        // 0x80012914: nop
    
            goto L_80012930;
    }
    // 0x80012914: nop

    // 0x80012918: swc1        $f20, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f20.u32l;
    // 0x8001291C: lw          $t8, 0x98($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X98);
    // 0x80012920: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80012924: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x80012928: b           L_80012954
    // 0x8001292C: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
        goto L_80012954;
    // 0x8001292C: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
L_80012930:
    // 0x80012930: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x80012934: nop

    // 0x80012938: beq         $v1, $zero, L_80012954
    if (ctx->r3 == 0) {
        // 0x8001293C: nop
    
            goto L_80012954;
    }
    // 0x8001293C: nop

    // 0x80012940: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x80012944: nop

    // 0x80012948: bne         $s1, $t0, L_80012954
    if (ctx->r17 != ctx->r8) {
        // 0x8001294C: nop
    
            goto L_80012954;
    }
    // 0x8001294C: nop

    // 0x80012950: swc1        $f20, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f20.u32l;
L_80012954:
    // 0x80012954: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x80012958: nop

    // 0x8001295C: beq         $s0, $zero, L_80012988
    if (ctx->r16 == 0) {
        // 0x80012960: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80012988;
    }
    // 0x80012960: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80012964:
    // 0x80012964: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80012968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8001296C: jal         0x800128AC
    // 0x80012970: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800128AC(rdram, ctx);
        goto after_0;
    // 0x80012970: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80012974: lw          $s0, 0x4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4);
    // 0x80012978: nop

    // 0x8001297C: bne         $s0, $zero, L_80012964
    if (ctx->r16 != 0) {
        // 0x80012980: nop
    
            goto L_80012964;
    }
    // 0x80012980: nop

    // 0x80012984: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80012988:
    // 0x80012988: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8001298C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80012990: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80012994: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80012998: jr          $ra
    // 0x8001299C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8001299C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800129A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800129A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800129A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800129A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800129AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800129B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800129B4: lw          $s0, 0x74($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X74);
    // 0x800129B8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800129BC: beq         $s0, $zero, L_800129CC
    if (ctx->r16 == 0) {
        // 0x800129C0: nop
    
            goto L_800129CC;
    }
    // 0x800129C0: nop

    // 0x800129C4: jal         0x80010AFC
    // 0x800129C8: nop

    func_80010AFC(rdram, ctx);
        goto after_0;
    // 0x800129C8: nop

    after_0:
L_800129CC:
    // 0x800129CC: lw          $s1, 0x98($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X98);
    // 0x800129D0: nop

    // 0x800129D4: beq         $s1, $zero, L_800129E4
    if (ctx->r17 == 0) {
        // 0x800129D8: nop
    
            goto L_800129E4;
    }
    // 0x800129D8: nop

    // 0x800129DC: jal         0x80011598
    // 0x800129E0: nop

    func_80011598(rdram, ctx);
        goto after_1;
    // 0x800129E0: nop

    after_1:
L_800129E4:
    // 0x800129E4: lbu         $a0, 0x81($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X81);
    // 0x800129E8: jal         0x800148C4
    // 0x800129EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800148C4(rdram, ctx);
        goto after_2;
    // 0x800129EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800129F0: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x800129F4: nop

    // 0x800129F8: beq         $s0, $zero, L_80012A14
    if (ctx->r16 == 0) {
        // 0x800129FC: nop
    
            goto L_80012A14;
    }
    // 0x800129FC: nop

L_80012A00:
    // 0x80012A00: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x80012A04: jal         0x800129A0
    // 0x80012A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800129A0(rdram, ctx);
        goto after_3;
    // 0x80012A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80012A0C: bne         $s1, $zero, L_80012A00
    if (ctx->r17 != 0) {
        // 0x80012A10: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80012A00;
    }
    // 0x80012A10: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80012A14:
    // 0x80012A14: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80012A18: addiu       $v1, $v1, 0x6818
    ctx->r3 = ADD32(ctx->r3, 0X6818);
    // 0x80012A1C: sw          $zero, 0x78($s2)
    MEM_W(0X78, ctx->r18) = 0;
    // 0x80012A20: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80012A24: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80012A28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80012A2C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80012A30: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80012A34: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80012A38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80012A3C: sw          $s2, 0x62A0($at)
    MEM_W(0X62A0, ctx->r1) = ctx->r18;
    // 0x80012A40: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80012A44: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80012A48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80012A4C: jr          $ra
    // 0x80012A50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80012A50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80012A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012A54: jr          $ra
    // 0x80012A58: nop

    return;
    // 0x80012A58: nop

;}
RECOMP_FUNC void func_80012A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012A5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012A64: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80012A68: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80012A6C: beq         $v0, $zero, L_80012AC0
    if (ctx->r2 == 0) {
        // 0x80012A70: nop
    
            goto L_80012AC0;
    }
    // 0x80012A70: nop

    // 0x80012A74: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x80012A78: nop

    // 0x80012A7C: bne         $a0, $a2, L_80012A90
    if (ctx->r4 != ctx->r6) {
        // 0x80012A80: nop
    
            goto L_80012A90;
    }
    // 0x80012A80: nop

    // 0x80012A84: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80012A88: b           L_80012AC0
    // 0x80012A8C: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80012AC0;
    // 0x80012A8C: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80012A90:
    // 0x80012A90: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x80012A94: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80012A98: beq         $a0, $v0, L_80012AB4
    if (ctx->r4 == ctx->r2) {
        // 0x80012A9C: nop
    
            goto L_80012AB4;
    }
    // 0x80012A9C: nop

L_80012AA0:
    // 0x80012AA0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80012AA4: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80012AA8: nop

    // 0x80012AAC: bne         $a1, $v0, L_80012AA0
    if (ctx->r5 != ctx->r2) {
        // 0x80012AB0: nop
    
            goto L_80012AA0;
    }
    // 0x80012AB0: nop

L_80012AB4:
    // 0x80012AB4: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x80012AB8: nop

    // 0x80012ABC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
L_80012AC0:
    // 0x80012AC0: jal         0x80011858
    // 0x80012AC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80011858(rdram, ctx);
        goto after_0;
    // 0x80012AC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80012AC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80012ACC: jal         0x800129A0
    // 0x80012AD0: nop

    func_800129A0(rdram, ctx);
        goto after_1;
    // 0x80012AD0: nop

    after_1:
    // 0x80012AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012ADC: jr          $ra
    // 0x80012AE0: nop

    return;
    // 0x80012AE0: nop

;}
RECOMP_FUNC void func_80012AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012AF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80012AF4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80012AF8: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80012AFC: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80012B00: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80012B04: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80012B08: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80012B0C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80012B10: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80012B14: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80012B18: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x80012B1C: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80012B20: beq         $v0, $zero, L_80012BC4
    if (ctx->r2 == 0) {
        // 0x80012B24: nop
    
            goto L_80012BC4;
    }
    // 0x80012B24: nop

    // 0x80012B28: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80012B2C: blez        $v0, L_80012BC4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80012B30: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80012BC4;
    }
    // 0x80012B30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80012B34: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80012B38: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x80012B3C: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x80012B40: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x80012B44: addiu       $s4, $s4, 0x7D14
    ctx->r20 = ADD32(ctx->r20, 0X7D14);
    // 0x80012B48: addiu       $s5, $s5, 0x4F2C
    ctx->r21 = ADD32(ctx->r21, 0X4F2C);
    // 0x80012B4C: addiu       $s6, $s6, 0x7D08
    ctx->r22 = ADD32(ctx->r22, 0X7D08);
    // 0x80012B50: addiu       $s7, $s7, 0x3A4
    ctx->r23 = ADD32(ctx->r23, 0X3A4);
    // 0x80012B54: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
L_80012B58:
    // 0x80012B58: lhu         $s0, 0x0($s2)
    ctx->r16 = MEM_HU(ctx->r18, 0X0);
    // 0x80012B5C: nop

    // 0x80012B60: bltz        $s0, L_80012B7C
    if (SIGNED(ctx->r16) < 0) {
        // 0x80012B64: nop
    
            goto L_80012B7C;
    }
    // 0x80012B64: nop

    // 0x80012B68: lhu         $t6, 0x0($s4)
    ctx->r14 = MEM_HU(ctx->r20, 0X0);
    // 0x80012B6C: nop

    // 0x80012B70: slt         $at, $t6, $s0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80012B74: beq         $at, $zero, L_80012B84
    if (ctx->r1 == 0) {
        // 0x80012B78: nop
    
            goto L_80012B84;
    }
    // 0x80012B78: nop

L_80012B7C:
    // 0x80012B7C: jal         0x80000FBC
    // 0x80012B80: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80012B80: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_0:
L_80012B84:
    // 0x80012B84: lw          $t8, 0x0($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X0);
    // 0x80012B88: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x80012B8C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80012B90: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80012B94: lw          $t7, 0x0($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X0);
    // 0x80012B98: nop

    // 0x80012B9C: slt         $at, $t7, $t1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80012BA0: beq         $at, $zero, L_80012BB0
    if (ctx->r1 == 0) {
        // 0x80012BA4: nop
    
            goto L_80012BB0;
    }
    // 0x80012BA4: nop

    // 0x80012BA8: b           L_80012C6C
    // 0x80012BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80012C6C;
    // 0x80012BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80012BB0:
    // 0x80012BB0: lhu         $t2, 0x14($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X14);
    // 0x80012BB4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80012BB8: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80012BBC: bne         $at, $zero, L_80012B58
    if (ctx->r1 != 0) {
        // 0x80012BC0: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_80012B58;
    }
    // 0x80012BC0: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
L_80012BC4:
    // 0x80012BC4: lhu         $v0, 0x1C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1C);
    // 0x80012BC8: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80012BCC: beq         $v0, $zero, L_80012C68
    if (ctx->r2 == 0) {
        // 0x80012BD0: addiu       $s7, $s7, 0x3A4
        ctx->r23 = ADD32(ctx->r23, 0X3A4);
            goto L_80012C68;
    }
    // 0x80012BD0: addiu       $s7, $s7, 0x3A4
    ctx->r23 = ADD32(ctx->r23, 0X3A4);
    // 0x80012BD4: lw          $v1, 0x18($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X18);
    // 0x80012BD8: blez        $v0, L_80012C68
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80012BDC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80012C68;
    }
    // 0x80012BDC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80012BE0: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x80012BE4: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x80012BE8: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x80012BEC: addiu       $s4, $s4, 0x7D1C
    ctx->r20 = ADD32(ctx->r20, 0X7D1C);
    // 0x80012BF0: addiu       $s5, $s5, 0x4F5C
    ctx->r21 = ADD32(ctx->r21, 0X4F5C);
    // 0x80012BF4: addiu       $s6, $s6, 0x7D0C
    ctx->r22 = ADD32(ctx->r22, 0X7D0C);
    // 0x80012BF8: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
L_80012BFC:
    // 0x80012BFC: lhu         $s0, 0x0($s2)
    ctx->r16 = MEM_HU(ctx->r18, 0X0);
    // 0x80012C00: nop

    // 0x80012C04: bltz        $s0, L_80012C20
    if (SIGNED(ctx->r16) < 0) {
        // 0x80012C08: nop
    
            goto L_80012C20;
    }
    // 0x80012C08: nop

    // 0x80012C0C: lhu         $t3, 0x0($s4)
    ctx->r11 = MEM_HU(ctx->r20, 0X0);
    // 0x80012C10: nop

    // 0x80012C14: slt         $at, $t3, $s0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80012C18: beq         $at, $zero, L_80012C28
    if (ctx->r1 == 0) {
        // 0x80012C1C: nop
    
            goto L_80012C28;
    }
    // 0x80012C1C: nop

L_80012C20:
    // 0x80012C20: jal         0x80000FBC
    // 0x80012C24: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80000FBC(rdram, ctx);
        goto after_1;
    // 0x80012C24: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_1:
L_80012C28:
    // 0x80012C28: lw          $t5, 0x0($s6)
    ctx->r13 = MEM_W(ctx->r22, 0X0);
    // 0x80012C2C: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80012C30: addu        $t8, $t5, $t6
    ctx->r24 = ADD32(ctx->r13, ctx->r14);
    // 0x80012C34: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80012C38: lw          $t4, 0x0($s7)
    ctx->r12 = MEM_W(ctx->r23, 0X0);
    // 0x80012C3C: nop

    // 0x80012C40: slt         $at, $t4, $t9
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80012C44: beq         $at, $zero, L_80012C54
    if (ctx->r1 == 0) {
        // 0x80012C48: nop
    
            goto L_80012C54;
    }
    // 0x80012C48: nop

    // 0x80012C4C: b           L_80012C6C
    // 0x80012C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80012C6C;
    // 0x80012C50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80012C54:
    // 0x80012C54: lhu         $t0, 0x1C($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X1C);
    // 0x80012C58: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80012C5C: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80012C60: bne         $at, $zero, L_80012BFC
    if (ctx->r1 != 0) {
        // 0x80012C64: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_80012BFC;
    }
    // 0x80012C64: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
L_80012C68:
    // 0x80012C68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80012C6C:
    // 0x80012C6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80012C70: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80012C74: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80012C78: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80012C7C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80012C80: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80012C84: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80012C88: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80012C8C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80012C90: jr          $ra
    // 0x80012C94: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80012C94: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80012C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012CA0: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x80012CA4: nop

    // 0x80012CA8: beq         $v1, $zero, L_80012CF4
    if (ctx->r3 == 0) {
        // 0x80012CAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80012CF4;
    }
    // 0x80012CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012CB0: lw          $a2, 0x0($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X0);
    // 0x80012CB4: blez        $v1, L_80012CE8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80012CB8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80012CE8;
    }
    // 0x80012CB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80012CBC: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
L_80012CC0:
    // 0x80012CC0: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x80012CC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80012CC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80012CCC: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x80012CD0: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x80012CD4: lhu         $t9, 0x4($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X4);
    // 0x80012CD8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80012CDC: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80012CE0: bne         $at, $zero, L_80012CC0
    if (ctx->r1 != 0) {
        // 0x80012CE4: nop
    
            goto L_80012CC0;
    }
    // 0x80012CE4: nop

L_80012CE8:
    // 0x80012CE8: jal         0x8000C658
    // 0x80012CEC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8000C658(rdram, ctx);
        goto after_0;
    // 0x80012CEC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x80012CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80012CF4:
    // 0x80012CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012CF8: jr          $ra
    // 0x80012CFC: nop

    return;
    // 0x80012CFC: nop

;}
RECOMP_FUNC void func_80012D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012D00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80012D04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80012D08: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80012D0C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80012D10: jal         0x80012AF0
    // 0x80012D14: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80012AF0(rdram, ctx);
        goto after_0;
    // 0x80012D14: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80012D18: beq         $v0, $zero, L_80012D44
    if (ctx->r2 == 0) {
        // 0x80012D1C: lui         $s0, 0x800A
        ctx->r16 = S32(0X800A << 16);
            goto L_80012D44;
    }
    // 0x80012D1C: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80012D20: addiu       $s0, $s0, 0x7D48
    ctx->r16 = ADD32(ctx->r16, 0X7D48);
    // 0x80012D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80012D28:
    // 0x80012D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80012D2C: jal         0x80075330
    // 0x80012D30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80012D30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80012D34: jal         0x80012AF0
    // 0x80012D38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80012AF0(rdram, ctx);
        goto after_2;
    // 0x80012D38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80012D3C: bne         $v0, $zero, L_80012D28
    if (ctx->r2 != 0) {
        // 0x80012D40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80012D28;
    }
    // 0x80012D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80012D44:
    // 0x80012D44: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80012D48: lw          $a1, 0x7D00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7D00);
    // 0x80012D4C: jal         0x80012C98
    // 0x80012D50: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    func_80012C98(rdram, ctx);
        goto after_3;
    // 0x80012D50: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    after_3:
    // 0x80012D54: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80012D58: lw          $a1, 0x7D10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7D10);
    // 0x80012D5C: jal         0x80012C98
    // 0x80012D60: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    func_80012C98(rdram, ctx);
        goto after_4;
    // 0x80012D60: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x80012D64: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80012D68: lw          $a1, 0x7D18($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7D18);
    // 0x80012D6C: jal         0x80012C98
    // 0x80012D70: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    func_80012C98(rdram, ctx);
        goto after_5;
    // 0x80012D70: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    after_5:
    // 0x80012D74: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80012D78: lw          $a1, 0x7D20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7D20);
    // 0x80012D7C: jal         0x80012C98
    // 0x80012D80: addiu       $a0, $s1, 0x20
    ctx->r4 = ADD32(ctx->r17, 0X20);
    func_80012C98(rdram, ctx);
        goto after_6;
    // 0x80012D80: addiu       $a0, $s1, 0x20
    ctx->r4 = ADD32(ctx->r17, 0X20);
    after_6:
    // 0x80012D84: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80012D88: lw          $a1, 0x7D28($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7D28);
    // 0x80012D8C: jal         0x80012C98
    // 0x80012D90: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    func_80012C98(rdram, ctx);
        goto after_7;
    // 0x80012D90: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    after_7:
    // 0x80012D94: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80012D98: lw          $a1, 0x7D30($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7D30);
    // 0x80012D9C: jal         0x80012C98
    // 0x80012DA0: addiu       $a0, $s1, 0x30
    ctx->r4 = ADD32(ctx->r17, 0X30);
    func_80012C98(rdram, ctx);
        goto after_8;
    // 0x80012DA0: addiu       $a0, $s1, 0x30
    ctx->r4 = ADD32(ctx->r17, 0X30);
    after_8:
    // 0x80012DA4: jal         0x8000C658
    // 0x80012DA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8000C658(rdram, ctx);
        goto after_9;
    // 0x80012DA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80012DAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80012DB0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80012DB4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80012DB8: jr          $ra
    // 0x80012DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80012DBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80012DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012DC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80012DC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80012DC8: jal         0x80012D00
    // 0x80012DCC: nop

    func_80012D00(rdram, ctx);
        goto after_0;
    // 0x80012DCC: nop

    after_0:
    // 0x80012DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80012DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80012DD8: jr          $ra
    // 0x80012DDC: nop

    return;
    // 0x80012DDC: nop

;}
RECOMP_FUNC void func_80012DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012DE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80012DE4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80012DE8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80012DEC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80012DF0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80012DF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80012DF8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80012DFC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80012E00: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80012E04: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
L_80012E08:
    // 0x80012E08: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80012E0C: nop

    // 0x80012E10: beq         $a0, $zero, L_80012E20
    if (ctx->r4 == 0) {
        // 0x80012E14: nop
    
            goto L_80012E20;
    }
    // 0x80012E14: nop

    // 0x80012E18: jal         0x8000C658
    // 0x80012E1C: nop

    func_8000C658(rdram, ctx);
        goto after_0;
    // 0x80012E1C: nop

    after_0:
L_80012E20:
    // 0x80012E20: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80012E24: nop

    // 0x80012E28: beq         $a0, $zero, L_80012E38
    if (ctx->r4 == 0) {
        // 0x80012E2C: nop
    
            goto L_80012E38;
    }
    // 0x80012E2C: nop

    // 0x80012E30: jal         0x8000C658
    // 0x80012E34: nop

    func_8000C658(rdram, ctx);
        goto after_1;
    // 0x80012E34: nop

    after_1:
L_80012E38:
    // 0x80012E38: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80012E3C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80012E40: bne         $s0, $s3, L_80012E08
    if (ctx->r16 != ctx->r19) {
        // 0x80012E44: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80012E08;
    }
    // 0x80012E44: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80012E48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80012E4C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80012E50: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80012E54: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80012E58: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80012E5C: jr          $ra
    // 0x80012E60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80012E60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80012E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012E64: lhu         $t6, 0x14($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X14);
    // 0x80012E68: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80012E6C: blez        $t6, L_80012F18
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80012E70: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80012F18;
    }
    // 0x80012E70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80012E74: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x80012E78: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x80012E7C: addiu       $a3, $a3, 0x7D10
    ctx->r7 = ADD32(ctx->r7, 0X7D10);
    // 0x80012E80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80012E84: or          $t1, $a2, $zero
    ctx->r9 = ctx->r6 | 0;
L_80012E88:
    // 0x80012E88: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x80012E8C: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80012E90: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80012E94: lhu         $t2, 0x0($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X0);
    // 0x80012E98: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x80012E9C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80012EA0: addu        $t4, $t7, $t3
    ctx->r12 = ADD32(ctx->r15, ctx->r11);
    // 0x80012EA4: lw          $v1, 0x0($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X0);
    // 0x80012EA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80012EAC: sw          $t5, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r13;
    // 0x80012EB0: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x80012EB4: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80012EB8: sw          $t6, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r14;
    // 0x80012EBC: lw          $t8, 0x4($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X4);
    // 0x80012EC0: nop

    // 0x80012EC4: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x80012EC8: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x80012ECC: nop

    // 0x80012ED0: sw          $t9, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r25;
    // 0x80012ED4: lw          $t2, 0x8($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X8);
    // 0x80012ED8: nop

    // 0x80012EDC: sw          $t2, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r10;
    // 0x80012EE0: lw          $t7, 0x8($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X8);
    // 0x80012EE4: nop

    // 0x80012EE8: sw          $t7, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r15;
    // 0x80012EEC: lw          $t3, 0xC($t0)
    ctx->r11 = MEM_W(ctx->r8, 0XC);
    // 0x80012EF0: nop

    // 0x80012EF4: sw          $t3, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r11;
    // 0x80012EF8: lw          $t4, 0xC($t1)
    ctx->r12 = MEM_W(ctx->r9, 0XC);
    // 0x80012EFC: nop

    // 0x80012F00: sw          $t4, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r12;
    // 0x80012F04: lhu         $t5, 0x14($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X14);
    // 0x80012F08: nop

    // 0x80012F0C: slt         $at, $v0, $t5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80012F10: bne         $at, $zero, L_80012E88
    if (ctx->r1 != 0) {
        // 0x80012F14: nop
    
            goto L_80012E88;
    }
    // 0x80012F14: nop

L_80012F18:
    // 0x80012F18: jr          $ra
    // 0x80012F1C: nop

    return;
    // 0x80012F1C: nop

;}
RECOMP_FUNC void func_80012F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80012F20: addiu       $sp, $sp, -0x1D8
    ctx->r29 = ADD32(ctx->r29, -0X1D8);
    // 0x80012F24: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80012F28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80012F2C: sw          $a0, 0x1D8($sp)
    MEM_W(0X1D8, ctx->r29) = ctx->r4;
    // 0x80012F30: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80012F34: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80012F38: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80012F3C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80012F40: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80012F44: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80012F48: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80012F4C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80012F50: sw          $a1, 0x1DC($sp)
    MEM_W(0X1DC, ctx->r29) = ctx->r5;
    // 0x80012F54: sw          $a2, 0x1E0($sp)
    MEM_W(0X1E0, ctx->r29) = ctx->r6;
    // 0x80012F58: sw          $a3, 0x1E4($sp)
    MEM_W(0X1E4, ctx->r29) = ctx->r7;
    // 0x80012F5C: addiu       $a0, $sp, 0xD8
    ctx->r4 = ADD32(ctx->r29, 0XD8);
    // 0x80012F60: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x80012F64: addiu       $s1, $sp, 0xB8
    ctx->r17 = ADD32(ctx->r29, 0XB8);
    // 0x80012F68: addiu       $v0, $sp, 0x98
    ctx->r2 = ADD32(ctx->r29, 0X98);
    // 0x80012F6C: addiu       $v1, $sp, 0xA8
    ctx->r3 = ADD32(ctx->r29, 0XA8);
L_80012F70:
    // 0x80012F70: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80012F74: sltu        $at, $s0, $a0
    ctx->r1 = ctx->r16 < ctx->r4 ? 1 : 0;
    // 0x80012F78: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80012F7C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80012F80: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80012F84: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x80012F88: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x80012F8C: sw          $zero, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = 0;
    // 0x80012F90: bne         $at, $zero, L_80012F70
    if (ctx->r1 != 0) {
        // 0x80012F94: sw          $zero, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = 0;
            goto L_80012F70;
    }
    // 0x80012F94: sw          $zero, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = 0;
    // 0x80012F98: lw          $t6, 0x1DC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1DC);
    // 0x80012F9C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80012FA0: lhu         $s0, 0x1C($t6)
    ctx->r16 = MEM_HU(ctx->r14, 0X1C);
    // 0x80012FA4: addiu       $a0, $a0, 0x4EF0
    ctx->r4 = ADD32(ctx->r4, 0X4EF0);
    // 0x80012FA8: slti        $at, $s0, 0x1F
    ctx->r1 = SIGNED(ctx->r16) < 0X1F ? 1 : 0;
    // 0x80012FAC: bne         $at, $zero, L_80012FCC
    if (ctx->r1 != 0) {
        // 0x80012FB0: nop
    
            goto L_80012FCC;
    }
    // 0x80012FB0: nop

    // 0x80012FB4: jal         0x80000FBC
    // 0x80012FB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x80012FB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80012FBC: lw          $t7, 0x1DC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1DC);
    // 0x80012FC0: nop

    // 0x80012FC4: lhu         $s0, 0x1C($t7)
    ctx->r16 = MEM_HU(ctx->r15, 0X1C);
    // 0x80012FC8: nop

L_80012FCC:
    // 0x80012FCC: blez        $s0, L_800130C8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80012FD0: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_800130C8;
    }
    // 0x80012FD0: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80012FD4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80012FD8: lw          $a0, 0x7D18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7D18);
    // 0x80012FDC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80012FE0: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80012FE4: addiu       $s5, $sp, 0x154
    ctx->r21 = ADD32(ctx->r29, 0X154);
    // 0x80012FE8: addiu       $a3, $sp, 0xB8
    ctx->r7 = ADD32(ctx->r29, 0XB8);
    // 0x80012FEC: addiu       $a2, $zero, -0x8
    ctx->r6 = ADD32(0, -0X8);
    // 0x80012FF0: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
L_80012FF4:
    // 0x80012FF4: lw          $t8, 0x1DC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1DC);
    // 0x80012FF8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80012FFC: lw          $t9, 0x18($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X18);
    // 0x80013000: nop

    // 0x80013004: addu        $t0, $t9, $fp
    ctx->r8 = ADD32(ctx->r25, ctx->r30);
    // 0x80013008: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x8001300C: nop

    // 0x80013010: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80013014: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80013018: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x8001301C: nop

    // 0x80013020: lhu         $t4, 0x4($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X4);
    // 0x80013024: lhu         $t5, 0x6($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X6);
    // 0x80013028: lbu         $t7, 0x2($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2);
    // 0x8001302C: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80013030: mflo        $t6
    ctx->r14 = lo;
    // 0x80013034: sllv        $t8, $t6, $t7
    ctx->r24 = S32(ctx->r14 << (ctx->r15 & 31));
    // 0x80013038: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8001303C: sw          $t9, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r25;
    // 0x80013040: lbu         $t0, 0x16($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X16);
    // 0x80013044: addiu       $t6, $sp, 0xDC
    ctx->r14 = ADD32(ctx->r29, 0XDC);
    // 0x80013048: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8001304C: addu        $v1, $a1, $t1
    ctx->r3 = ADD32(ctx->r5, ctx->r9);
    // 0x80013050: lw          $t2, -0x14($v1)
    ctx->r10 = MEM_W(ctx->r3, -0X14);
    // 0x80013054: nop

    // 0x80013058: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x8001305C: sw          $t4, -0x14($v1)
    MEM_W(-0X14, ctx->r3) = ctx->r12;
    // 0x80013060: lbu         $t5, 0x2($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X2);
    // 0x80013064: nop

    // 0x80013068: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x8001306C: beq         $at, $zero, L_800130AC
    if (ctx->r1 == 0) {
        // 0x80013070: nop
    
            goto L_800130AC;
    }
    // 0x80013070: nop

    // 0x80013074: lhu         $t7, 0xA($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XA);
    // 0x80013078: addu        $s0, $s3, $t6
    ctx->r16 = ADD32(ctx->r19, ctx->r14);
    // 0x8001307C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80013080: addiu       $t9, $t8, 0x7
    ctx->r25 = ADD32(ctx->r24, 0X7);
    // 0x80013084: and         $t0, $t9, $a2
    ctx->r8 = ctx->r25 & ctx->r6;
    // 0x80013088: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x8001308C: lbu         $t1, 0x17($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X17);
    // 0x80013090: nop

    // 0x80013094: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80013098: addu        $v1, $a3, $t2
    ctx->r3 = ADD32(ctx->r7, ctx->r10);
    // 0x8001309C: lw          $t3, -0x24($v1)
    ctx->r11 = MEM_W(ctx->r3, -0X24);
    // 0x800130A0: nop

    // 0x800130A4: addu        $t5, $t3, $t0
    ctx->r13 = ADD32(ctx->r11, ctx->r8);
    // 0x800130A8: sw          $t5, -0x24($v1)
    MEM_W(-0X24, ctx->r3) = ctx->r13;
L_800130AC:
    // 0x800130AC: lw          $t6, 0x1DC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1DC);
    // 0x800130B0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800130B4: lhu         $t7, 0x1C($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X1C);
    // 0x800130B8: addiu       $fp, $fp, 0x2
    ctx->r30 = ADD32(ctx->r30, 0X2);
    // 0x800130BC: slt         $at, $s7, $t7
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800130C0: bne         $at, $zero, L_80012FF4
    if (ctx->r1 != 0) {
        // 0x800130C4: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_80012FF4;
    }
    // 0x800130C4: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
L_800130C8:
    // 0x800130C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800130CC: addiu       $s1, $sp, 0xB8
    ctx->r17 = ADD32(ctx->r29, 0XB8);
    // 0x800130D0: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x800130D4: addiu       $s4, $sp, 0xD8
    ctx->r20 = ADD32(ctx->r29, 0XD8);
L_800130D8:
    // 0x800130D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800130DC: addiu       $t8, $sp, 0x88
    ctx->r24 = ADD32(ctx->r29, 0X88);
    // 0x800130E0: beq         $a0, $zero, L_800130F4
    if (ctx->r4 == 0) {
        // 0x800130E4: nop
    
            goto L_800130F4;
    }
    // 0x800130E4: nop

    // 0x800130E8: jal         0x8000C734
    // 0x800130EC: addu        $s2, $s3, $t8
    ctx->r18 = ADD32(ctx->r19, ctx->r24);
    func_8000C734(rdram, ctx);
        goto after_1;
    // 0x800130EC: addu        $s2, $s3, $t8
    ctx->r18 = ADD32(ctx->r19, ctx->r24);
    after_1:
    // 0x800130F0: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_800130F4:
    // 0x800130F4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800130F8: addiu       $t9, $sp, 0x78
    ctx->r25 = ADD32(ctx->r29, 0X78);
    // 0x800130FC: beq         $a0, $zero, L_80013110
    if (ctx->r4 == 0) {
        // 0x80013100: nop
    
            goto L_80013110;
    }
    // 0x80013100: nop

    // 0x80013104: jal         0x8000C734
    // 0x80013108: addu        $s2, $s3, $t9
    ctx->r18 = ADD32(ctx->r19, ctx->r25);
    func_8000C734(rdram, ctx);
        goto after_2;
    // 0x80013108: addu        $s2, $s3, $t9
    ctx->r18 = ADD32(ctx->r19, ctx->r25);
    after_2:
    // 0x8001310C: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_80013110:
    // 0x80013110: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80013114: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x80013118: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8001311C: bne         $at, $zero, L_800130D8
    if (ctx->r1 != 0) {
        // 0x80013120: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800130D8;
    }
    // 0x80013120: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80013124: lw          $a0, 0x1D8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1D8);
    // 0x80013128: jal         0x80002F88
    // 0x8001312C: nop

    func_80002F88(rdram, ctx);
        goto after_3;
    // 0x8001312C: nop

    after_3:
    // 0x80013130: lw          $t0, 0x1DC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1DC);
    // 0x80013134: sw          $v0, 0x1CC($sp)
    MEM_W(0X1CC, ctx->r29) = ctx->r2;
    // 0x80013138: lhu         $s2, 0x0($v0)
    ctx->r18 = MEM_HU(ctx->r2, 0X0);
    // 0x8001313C: lhu         $s0, 0x1C($t0)
    ctx->r16 = MEM_HU(ctx->r8, 0X1C);
    // 0x80013140: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80013144: blez        $s0, L_800132A4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80013148: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800132A4;
    }
    // 0x80013148: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8001314C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
L_80013150:
    // 0x80013150: lw          $t2, 0x1DC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1DC);
    // 0x80013154: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x80013158: lw          $t3, 0x18($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X18);
    // 0x8001315C: lw          $t1, 0x7D18($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7D18);
    // 0x80013160: addu        $t4, $t3, $fp
    ctx->r12 = ADD32(ctx->r11, ctx->r30);
    // 0x80013164: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80013168: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8001316C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80013170: addu        $t7, $t1, $t6
    ctx->r15 = ADD32(ctx->r9, ctx->r14);
    // 0x80013174: lw          $s6, 0x0($t7)
    ctx->r22 = MEM_W(ctx->r15, 0X0);
    // 0x80013178: bne         $at, $zero, L_800131A8
    if (ctx->r1 != 0) {
        // 0x8001317C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_800131A8;
    }
    // 0x8001317C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80013180: lw          $v0, 0x1CC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1CC);
    // 0x80013184: lhu         $a0, 0x14($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X14);
    // 0x80013188: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8001318C:
    // 0x8001318C: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x80013190: nop

    // 0x80013194: beq         $a0, $t8, L_800131A8
    if (ctx->r4 == ctx->r24) {
        // 0x80013198: nop
    
            goto L_800131A8;
    }
    // 0x80013198: nop

    // 0x8001319C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800131A0: bne         $v1, $s2, L_8001318C
    if (ctx->r3 != ctx->r18) {
        // 0x800131A4: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_8001318C;
    }
    // 0x800131A4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_800131A8:
    // 0x800131A8: beq         $v1, $s2, L_80013294
    if (ctx->r3 == ctx->r18) {
        // 0x800131AC: sll         $s3, $s7, 2
        ctx->r19 = S32(ctx->r23 << 2);
            goto L_80013294;
    }
    // 0x800131AC: sll         $s3, $s7, 2
    ctx->r19 = S32(ctx->r23 << 2);
    // 0x800131B0: lw          $t9, 0x1D8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1D8);
    // 0x800131B4: addiu       $t0, $sp, 0x154
    ctx->r8 = ADD32(ctx->r29, 0X154);
    // 0x800131B8: addu        $a0, $t9, $v1
    ctx->r4 = ADD32(ctx->r25, ctx->r3);
    // 0x800131BC: sw          $a0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r4;
    // 0x800131C0: jal         0x80002F88
    // 0x800131C4: addu        $s5, $s3, $t0
    ctx->r21 = ADD32(ctx->r19, ctx->r8);
    func_80002F88(rdram, ctx);
        goto after_4;
    // 0x800131C4: addu        $s5, $s3, $t0
    ctx->r21 = ADD32(ctx->r19, ctx->r8);
    after_4:
    // 0x800131C8: lbu         $t2, 0x2($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X2);
    // 0x800131CC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800131D0: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x800131D4: beq         $at, $zero, L_80013234
    if (ctx->r1 == 0) {
        // 0x800131D8: addiu       $t3, $sp, 0x98
        ctx->r11 = ADD32(ctx->r29, 0X98);
            goto L_80013234;
    }
    // 0x800131D8: addiu       $t3, $sp, 0x98
    ctx->r11 = ADD32(ctx->r29, 0X98);
    // 0x800131DC: lbu         $v1, 0x16($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X16);
    // 0x800131E0: addiu       $t6, $sp, 0xDC
    ctx->r14 = ADD32(ctx->r29, 0XDC);
    // 0x800131E4: addiu       $v1, $v1, -0x9
    ctx->r3 = ADD32(ctx->r3, -0X9);
    // 0x800131E8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800131EC: addu        $s4, $v0, $t3
    ctx->r20 = ADD32(ctx->r2, ctx->r11);
    // 0x800131F0: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x800131F4: addu        $t1, $sp, $v0
    ctx->r9 = ADD32(ctx->r29, ctx->r2);
    // 0x800131F8: lw          $t1, 0x78($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X78);
    // 0x800131FC: addu        $s0, $s3, $t6
    ctx->r16 = ADD32(ctx->r19, ctx->r14);
    // 0x80013200: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x80013204: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80013208: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x8001320C: jal         0x80076BF8
    // 0x80013210: addu        $a0, $t5, $t1
    ctx->r4 = ADD32(ctx->r13, ctx->r9);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80013210: addu        $a0, $t5, $t1
    ctx->r4 = ADD32(ctx->r13, ctx->r9);
    after_5:
    // 0x80013214: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x80013218: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x8001321C: nop

    // 0x80013220: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80013224: sw          $t9, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r25;
    // 0x80013228: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x8001322C: nop

    // 0x80013230: addu        $s1, $s1, $t0
    ctx->r17 = ADD32(ctx->r17, ctx->r8);
L_80013234:
    // 0x80013234: lbu         $v1, 0x16($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X16);
    // 0x80013238: addiu       $t2, $sp, 0xA8
    ctx->r10 = ADD32(ctx->r29, 0XA8);
    // 0x8001323C: addiu       $v1, $v1, -0x5
    ctx->r3 = ADD32(ctx->r3, -0X5);
    // 0x80013240: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80013244: addu        $s0, $v0, $t2
    ctx->r16 = ADD32(ctx->r2, ctx->r10);
    // 0x80013248: addu        $t4, $sp, $v0
    ctx->r12 = ADD32(ctx->r29, ctx->r2);
    // 0x8001324C: lw          $t4, 0x88($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X88);
    // 0x80013250: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80013254: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x80013258: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8001325C: jal         0x80076BF8
    // 0x80013260: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80013260: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    after_6:
    // 0x80013264: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80013268: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x8001326C: nop

    // 0x80013270: addu        $t6, $t5, $t1
    ctx->r14 = ADD32(ctx->r13, ctx->r9);
    // 0x80013274: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80013278: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x8001327C: jal         0x80002D08
    // 0x80013280: nop

    func_80002D08(rdram, ctx);
        goto after_7;
    // 0x80013280: nop

    after_7:
    // 0x80013284: lw          $t7, 0x1DC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1DC);
    // 0x80013288: nop

    // 0x8001328C: lhu         $s0, 0x1C($t7)
    ctx->r16 = MEM_HU(ctx->r15, 0X1C);
    // 0x80013290: nop

L_80013294:
    // 0x80013294: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80013298: slt         $at, $s7, $s0
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8001329C: bne         $at, $zero, L_80013150
    if (ctx->r1 != 0) {
        // 0x800132A0: addiu       $fp, $fp, 0x2
        ctx->r30 = ADD32(ctx->r30, 0X2);
            goto L_80013150;
    }
    // 0x800132A0: addiu       $fp, $fp, 0x2
    ctx->r30 = ADD32(ctx->r30, 0X2);
L_800132A4:
    // 0x800132A4: lw          $a0, 0x1D8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1D8);
    // 0x800132A8: jal         0x80002D08
    // 0x800132AC: nop

    func_80002D08(rdram, ctx);
        goto after_8;
    // 0x800132AC: nop

    after_8:
    // 0x800132B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800132B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800132B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800132BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800132C0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800132C4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800132C8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800132CC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800132D0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800132D4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800132D8: jr          $ra
    // 0x800132DC: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
    return;
    // 0x800132DC: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
;}
RECOMP_FUNC void func_800132E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800132E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800132E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800132E8: sw          $fp, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r30;
    // 0x800132EC: andi        $t6, $fp, 0xFFFF
    ctx->r14 = ctx->r30 & 0XFFFF;
    // 0x800132F0: or          $fp, $t6, $zero
    ctx->r30 = ctx->r14 | 0;
    // 0x800132F4: sw          $s7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r23;
    // 0x800132F8: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x800132FC: jal         0x8000C734
    // 0x80013300: sll         $a0, $a2, 1
    ctx->r4 = S32(ctx->r6 << 1);
    func_8000C734(rdram, ctx);
        goto after_0;
    // 0x80013300: sll         $a0, $a2, 1
    ctx->r4 = S32(ctx->r6 << 1);
    after_0:
    // 0x80013304: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80013308: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8001330C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80013310: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80013314: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80013318: blez        $a2, L_800133AC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8001331C: sh          $a2, 0x4($v1)
        MEM_H(0X4, ctx->r3) = ctx->r6;
            goto L_800133AC;
    }
    // 0x8001331C: sh          $a2, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r6;
    // 0x80013320: or          $s6, $fp, $zero
    ctx->r22 = ctx->r30 | 0;
    // 0x80013324: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x80013328: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8001332C: addiu       $fp, $fp, 0x4ED0
    ctx->r30 = ADD32(ctx->r30, 0X4ED0);
    // 0x80013330: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80013334: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80013338: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
L_8001333C:
    // 0x8001333C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80013340: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80013344: beq         $t7, $zero, L_80013364
    if (ctx->r15 == 0) {
        // 0x80013348: addu        $v0, $t8, $s1
        ctx->r2 = ADD32(ctx->r24, ctx->r17);
            goto L_80013364;
    }
    // 0x80013348: addu        $v0, $t8, $s1
    ctx->r2 = ADD32(ctx->r24, ctx->r17);
L_8001334C:
    // 0x8001334C: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x80013350: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80013354: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80013358: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8001335C: bne         $t9, $zero, L_8001334C
    if (ctx->r25 != 0) {
        // 0x80013360: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8001334C;
    }
    // 0x80013360: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_80013364:
    // 0x80013364: slt         $at, $s2, $s6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80013368: bne         $at, $zero, L_80013388
    if (ctx->r1 != 0) {
        // 0x8001336C: or          $a0, $fp, $zero
        ctx->r4 = ctx->r30 | 0;
            goto L_80013388;
    }
    // 0x8001336C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80013370: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80013374: jal         0x80000FBC
    // 0x80013378: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_80000FBC(rdram, ctx);
        goto after_1;
    // 0x80013378: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x8001337C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80013380: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80013384: nop

L_80013388:
    // 0x80013388: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8001338C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80013390: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80013394: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80013398: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8001339C: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x800133A0: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x800133A4: bne         $s5, $a2, L_8001333C
    if (ctx->r21 != ctx->r6) {
        // 0x800133A8: sh          $s2, 0x0($t8)
        MEM_H(0X0, ctx->r24) = ctx->r18;
            goto L_8001333C;
    }
    // 0x800133A8: sh          $s2, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r18;
L_800133AC:
    // 0x800133AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800133B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800133B4: jr          $ra
    // 0x800133B8: nop

    return;
    // 0x800133B8: nop

;}
RECOMP_FUNC void func_800133BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800133BC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800133C0: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x800133C4: sll         $t7, $t6, 0
    ctx->r15 = S32(ctx->r14 << 0);
    // 0x800133C8: bgez        $t7, L_800133D8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800133CC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800133D8;
    }
    // 0x800133CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800133D0: jr          $ra
    // 0x800133D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800133D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800133D8:
    // 0x800133D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_800133DC:
    // 0x800133DC: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
    // 0x800133E0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800133E4: beq         $v1, $zero, L_800133F4
    if (ctx->r3 == 0) {
        // 0x800133E8: slti        $at, $v0, 0x10
        ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_800133F4;
    }
    // 0x800133E8: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x800133EC: addu        $t8, $v1, $a0
    ctx->r24 = ADD32(ctx->r3, ctx->r4);
    // 0x800133F0: sw          $t8, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r24;
L_800133F4:
    // 0x800133F4: lw          $v1, 0x28($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X28);
    // 0x800133F8: nop

    // 0x800133FC: beq         $v1, $zero, L_80013408
    if (ctx->r3 == 0) {
        // 0x80013400: addu        $t9, $v1, $a0
        ctx->r25 = ADD32(ctx->r3, ctx->r4);
            goto L_80013408;
    }
    // 0x80013400: addu        $t9, $v1, $a0
    ctx->r25 = ADD32(ctx->r3, ctx->r4);
    // 0x80013404: sw          $t9, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r25;
L_80013408:
    // 0x80013408: bne         $at, $zero, L_800133DC
    if (ctx->r1 != 0) {
        // 0x8001340C: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_800133DC;
    }
    // 0x8001340C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80013410: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80013414: nop

    // 0x80013418: beq         $v0, $zero, L_8001343C
    if (ctx->r2 == 0) {
        // 0x8001341C: addu        $v1, $v0, $a0
        ctx->r3 = ADD32(ctx->r2, ctx->r4);
            goto L_8001343C;
    }
    // 0x8001341C: addu        $v1, $v0, $a0
    ctx->r3 = ADD32(ctx->r2, ctx->r4);
    // 0x80013420: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
    // 0x80013424: lw          $t3, 0x34($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X34);
    // 0x80013428: lw          $t5, 0x3C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X3C);
    // 0x8001342C: addu        $t4, $t3, $a0
    ctx->r12 = ADD32(ctx->r11, ctx->r4);
    // 0x80013430: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x80013434: sw          $t4, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r12;
    // 0x80013438: sw          $t6, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r14;
L_8001343C:
    // 0x8001343C: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x80013440: nop

    // 0x80013444: beq         $v0, $zero, L_80013500
    if (ctx->r2 == 0) {
        // 0x80013448: nop
    
            goto L_80013500;
    }
    // 0x80013448: nop

    // 0x8001344C: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x80013450: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80013454: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x80013458: blez        $v0, L_80013500
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8001345C: sw          $t8, 0x38($a0)
        MEM_W(0X38, ctx->r4) = ctx->r24;
            goto L_80013500;
    }
    // 0x8001345C: sw          $t8, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r24;
    // 0x80013460: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80013464:
    // 0x80013464: lw          $t9, 0x38($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X38);
    // 0x80013468: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x8001346C: addu        $a3, $t9, $v0
    ctx->r7 = ADD32(ctx->r25, ctx->r2);
    // 0x80013470: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x80013474: nop

    // 0x80013478: addu        $a2, $t3, $a0
    ctx->r6 = ADD32(ctx->r11, ctx->r4);
    // 0x8001347C: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x80013480: lhu         $t0, 0x2E($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0X2E);
    // 0x80013484: nop

    // 0x80013488: beq         $t0, $zero, L_800134DC
    if (ctx->r8 == 0) {
        // 0x8001348C: nop
    
            goto L_800134DC;
    }
    // 0x8001348C: nop

    // 0x80013490: lw          $t4, 0x30($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X30);
    // 0x80013494: or          $t2, $t0, $zero
    ctx->r10 = ctx->r8 | 0;
    // 0x80013498: addu        $a3, $t4, $a0
    ctx->r7 = ADD32(ctx->r12, ctx->r4);
    // 0x8001349C: blez        $t0, L_800134DC
    if (SIGNED(ctx->r8) <= 0) {
        // 0x800134A0: sw          $a3, 0x30($a2)
        MEM_W(0X30, ctx->r6) = ctx->r7;
            goto L_800134DC;
    }
    // 0x800134A0: sw          $a3, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r7;
    // 0x800134A4: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
L_800134A8:
    // 0x800134A8: lhu         $t5, 0x8($t0)
    ctx->r13 = MEM_HU(ctx->r8, 0X8);
    // 0x800134AC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800134B0: beq         $t5, $zero, L_800134D4
    if (ctx->r13 == 0) {
        // 0x800134B4: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_800134D4;
    }
    // 0x800134B4: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800134B8: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x800134BC: nop

    // 0x800134C0: addu        $t7, $t6, $a0
    ctx->r15 = ADD32(ctx->r14, ctx->r4);
    // 0x800134C4: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x800134C8: lhu         $t2, 0x2E($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X2E);
    // 0x800134CC: nop

    // 0x800134D0: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
L_800134D4:
    // 0x800134D4: bne         $at, $zero, L_800134A8
    if (ctx->r1 != 0) {
        // 0x800134D8: addiu       $t0, $t0, 0xC
        ctx->r8 = ADD32(ctx->r8, 0XC);
            goto L_800134A8;
    }
    // 0x800134D8: addiu       $t0, $t0, 0xC
    ctx->r8 = ADD32(ctx->r8, 0XC);
L_800134DC:
    // 0x800134DC: lw          $t8, 0x40($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X40);
    // 0x800134E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800134E4: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x800134E8: sw          $t9, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->r25;
    // 0x800134EC: lhu         $t3, 0x58($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X58);
    // 0x800134F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800134F4: slt         $at, $v1, $t3
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800134F8: bne         $at, $zero, L_80013464
    if (ctx->r1 != 0) {
        // 0x800134FC: nop
    
            goto L_80013464;
    }
    // 0x800134FC: nop

L_80013500:
    // 0x80013500: lhu         $v0, 0x5A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X5A);
    // 0x80013504: nop

    // 0x80013508: beq         $v0, $zero, L_80013648
    if (ctx->r2 == 0) {
        // 0x8001350C: nop
    
            goto L_80013648;
    }
    // 0x8001350C: nop

    // 0x80013510: lw          $t4, 0x3C($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X3C);
    // 0x80013514: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80013518: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x8001351C: blez        $v0, L_80013648
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80013520: sw          $t5, 0x3C($a0)
        MEM_W(0X3C, ctx->r4) = ctx->r13;
            goto L_80013648;
    }
    // 0x80013520: sw          $t5, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r13;
    // 0x80013524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80013528:
    // 0x80013528: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x8001352C: nop

    // 0x80013530: addu        $a3, $t6, $v0
    ctx->r7 = ADD32(ctx->r14, ctx->r2);
    // 0x80013534: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80013538: nop

    // 0x8001353C: addu        $a2, $t7, $a0
    ctx->r6 = ADD32(ctx->r15, ctx->r4);
    // 0x80013540: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x80013544: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x80013548: nop

    // 0x8001354C: beq         $t0, $zero, L_80013558
    if (ctx->r8 == 0) {
        // 0x80013550: addu        $t8, $t0, $a0
        ctx->r24 = ADD32(ctx->r8, ctx->r4);
            goto L_80013558;
    }
    // 0x80013550: addu        $t8, $t0, $a0
    ctx->r24 = ADD32(ctx->r8, ctx->r4);
    // 0x80013554: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
L_80013558:
    // 0x80013558: lw          $a3, 0x4($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X4);
    // 0x8001355C: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x80013560: beq         $a3, $zero, L_8001356C
    if (ctx->r7 == 0) {
        // 0x80013564: addu        $t9, $a3, $a0
        ctx->r25 = ADD32(ctx->r7, ctx->r4);
            goto L_8001356C;
    }
    // 0x80013564: addu        $t9, $a3, $a0
    ctx->r25 = ADD32(ctx->r7, ctx->r4);
    // 0x80013568: sw          $t9, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r25;
L_8001356C:
    // 0x8001356C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80013570:
    // 0x80013570: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x80013574: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80013578: beq         $t1, $zero, L_80013588
    if (ctx->r9 == 0) {
        // 0x8001357C: slti        $at, $a3, 0x10
        ctx->r1 = SIGNED(ctx->r7) < 0X10 ? 1 : 0;
            goto L_80013588;
    }
    // 0x8001357C: slti        $at, $a3, 0x10
    ctx->r1 = SIGNED(ctx->r7) < 0X10 ? 1 : 0;
    // 0x80013580: addu        $t3, $t1, $a0
    ctx->r11 = ADD32(ctx->r9, ctx->r4);
    // 0x80013584: sw          $t3, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r11;
L_80013588:
    // 0x80013588: bne         $at, $zero, L_80013570
    if (ctx->r1 != 0) {
        // 0x8001358C: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_80013570;
    }
    // 0x8001358C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80013590: lw          $t0, 0x1C($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X1C);
    // 0x80013594: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80013598: beq         $t0, $zero, L_800135A4
    if (ctx->r8 == 0) {
        // 0x8001359C: addu        $t4, $t0, $a0
        ctx->r12 = ADD32(ctx->r8, ctx->r4);
            goto L_800135A4;
    }
    // 0x8001359C: addu        $t4, $t0, $a0
    ctx->r12 = ADD32(ctx->r8, ctx->r4);
    // 0x800135A0: sw          $t4, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r12;
L_800135A4:
    // 0x800135A4: lw          $t0, 0x20($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X20);
    // 0x800135A8: nop

    // 0x800135AC: beq         $t0, $zero, L_800135B8
    if (ctx->r8 == 0) {
        // 0x800135B0: addu        $t5, $t0, $a0
        ctx->r13 = ADD32(ctx->r8, ctx->r4);
            goto L_800135B8;
    }
    // 0x800135B0: addu        $t5, $t0, $a0
    ctx->r13 = ADD32(ctx->r8, ctx->r4);
    // 0x800135B4: sw          $t5, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r13;
L_800135B8:
    // 0x800135B8: lw          $t0, 0x24($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X24);
    // 0x800135BC: nop

    // 0x800135C0: beq         $t0, $zero, L_800135CC
    if (ctx->r8 == 0) {
        // 0x800135C4: addu        $t6, $t0, $a0
        ctx->r14 = ADD32(ctx->r8, ctx->r4);
            goto L_800135CC;
    }
    // 0x800135C4: addu        $t6, $t0, $a0
    ctx->r14 = ADD32(ctx->r8, ctx->r4);
    // 0x800135C8: sw          $t6, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r14;
L_800135CC:
    // 0x800135CC: lw          $t0, 0x28($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X28);
    // 0x800135D0: nop

    // 0x800135D4: beq         $t0, $zero, L_800135E0
    if (ctx->r8 == 0) {
        // 0x800135D8: addu        $t7, $t0, $a0
        ctx->r15 = ADD32(ctx->r8, ctx->r4);
            goto L_800135E0;
    }
    // 0x800135D8: addu        $t7, $t0, $a0
    ctx->r15 = ADD32(ctx->r8, ctx->r4);
    // 0x800135DC: sw          $t7, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r15;
L_800135E0:
    // 0x800135E0: lw          $a3, 0x30($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X30);
    // 0x800135E4: nop

    // 0x800135E8: beq         $a3, $zero, L_800135F4
    if (ctx->r7 == 0) {
        // 0x800135EC: addu        $t8, $a3, $a0
        ctx->r24 = ADD32(ctx->r7, ctx->r4);
            goto L_800135F4;
    }
    // 0x800135EC: addu        $t8, $a3, $a0
    ctx->r24 = ADD32(ctx->r7, ctx->r4);
    // 0x800135F0: sw          $t8, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r24;
L_800135F4:
    // 0x800135F4: lw          $a3, 0x34($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X34);
    // 0x800135F8: nop

    // 0x800135FC: beq         $a3, $zero, L_80013620
    if (ctx->r7 == 0) {
        // 0x80013600: addu        $t0, $a3, $a0
        ctx->r8 = ADD32(ctx->r7, ctx->r4);
            goto L_80013620;
    }
    // 0x80013600: addu        $t0, $a3, $a0
    ctx->r8 = ADD32(ctx->r7, ctx->r4);
    // 0x80013604: sw          $t0, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->r8;
    // 0x80013608: lw          $t9, 0x0($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X0);
    // 0x8001360C: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x80013610: addu        $t3, $t9, $a0
    ctx->r11 = ADD32(ctx->r25, ctx->r4);
    // 0x80013614: addu        $t5, $t4, $a0
    ctx->r13 = ADD32(ctx->r12, ctx->r4);
    // 0x80013618: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x8001361C: sw          $t5, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r13;
L_80013620:
    // 0x80013620: lw          $a3, 0x38($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X38);
    // 0x80013624: nop

    // 0x80013628: beq         $a3, $zero, L_80013634
    if (ctx->r7 == 0) {
        // 0x8001362C: addu        $t6, $a3, $a0
        ctx->r14 = ADD32(ctx->r7, ctx->r4);
            goto L_80013634;
    }
    // 0x8001362C: addu        $t6, $a3, $a0
    ctx->r14 = ADD32(ctx->r7, ctx->r4);
    // 0x80013630: sw          $t6, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r14;
L_80013634:
    // 0x80013634: lhu         $t7, 0x5A($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X5A);
    // 0x80013638: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8001363C: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80013640: bne         $at, $zero, L_80013528
    if (ctx->r1 != 0) {
        // 0x80013644: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80013528;
    }
    // 0x80013644: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80013648:
    // 0x80013648: lhu         $v0, 0x5C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X5C);
    // 0x8001364C: nop

    // 0x80013650: beq         $v0, $zero, L_800136F4
    if (ctx->r2 == 0) {
        // 0x80013654: nop
    
            goto L_800136F4;
    }
    // 0x80013654: nop

    // 0x80013658: lw          $t8, 0x40($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X40);
    // 0x8001365C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80013660: addu        $t9, $t8, $a0
    ctx->r25 = ADD32(ctx->r24, ctx->r4);
    // 0x80013664: blez        $v0, L_800136F4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80013668: sw          $t9, 0x40($a0)
        MEM_W(0X40, ctx->r4) = ctx->r25;
            goto L_800136F4;
    }
    // 0x80013668: sw          $t9, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r25;
    // 0x8001366C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80013670: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_80013674:
    // 0x80013674: lw          $t3, 0x40($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X40);
    // 0x80013678: nop

    // 0x8001367C: addu        $a3, $t3, $v0
    ctx->r7 = ADD32(ctx->r11, ctx->r2);
    // 0x80013680: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80013684: nop

    // 0x80013688: addu        $a2, $t4, $a0
    ctx->r6 = ADD32(ctx->r12, ctx->r4);
    // 0x8001368C: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x80013690: lhu         $t5, 0x0($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X0);
    // 0x80013694: nop

    // 0x80013698: bne         $t0, $t5, L_800136C0
    if (ctx->r8 != ctx->r13) {
        // 0x8001369C: nop
    
            goto L_800136C0;
    }
    // 0x8001369C: nop

    // 0x800136A0: lbu         $t7, 0x17($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X17);
    // 0x800136A4: lw          $t6, 0xC($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XC);
    // 0x800136A8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800136AC: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x800136B0: lw          $t3, 0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X4);
    // 0x800136B4: nop

    // 0x800136B8: addu        $t4, $t6, $t3
    ctx->r12 = ADD32(ctx->r14, ctx->r11);
    // 0x800136BC: sw          $t4, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r12;
L_800136C0:
    // 0x800136C0: lbu         $t7, 0x16($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X16);
    // 0x800136C4: lw          $t5, 0x10($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X10);
    // 0x800136C8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800136CC: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x800136D0: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x800136D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800136D8: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x800136DC: sw          $t3, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r11;
    // 0x800136E0: lhu         $t4, 0x5C($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X5C);
    // 0x800136E4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800136E8: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800136EC: bne         $at, $zero, L_80013674
    if (ctx->r1 != 0) {
        // 0x800136F0: nop
    
            goto L_80013674;
    }
    // 0x800136F0: nop

L_800136F4:
    // 0x800136F4: lhu         $v0, 0x5E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X5E);
    // 0x800136F8: nop

    // 0x800136FC: beq         $v0, $zero, L_800137A0
    if (ctx->r2 == 0) {
        // 0x80013700: nop
    
            goto L_800137A0;
    }
    // 0x80013700: nop

    // 0x80013704: lw          $t7, 0x44($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X44);
    // 0x80013708: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8001370C: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x80013710: blez        $v0, L_800137A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80013714: sw          $t8, 0x44($a0)
        MEM_W(0X44, ctx->r4) = ctx->r24;
            goto L_800137A0;
    }
    // 0x80013714: sw          $t8, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r24;
    // 0x80013718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001371C:
    // 0x8001371C: lw          $t9, 0x44($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X44);
    // 0x80013720: nop

    // 0x80013724: addu        $a3, $t9, $v0
    ctx->r7 = ADD32(ctx->r25, ctx->r2);
    // 0x80013728: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
    // 0x8001372C: nop

    // 0x80013730: addu        $a2, $t5, $a0
    ctx->r6 = ADD32(ctx->r13, ctx->r4);
    // 0x80013734: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x80013738: lhu         $t0, 0x4($a2)
    ctx->r8 = MEM_HU(ctx->r6, 0X4);
    // 0x8001373C: nop

    // 0x80013740: beq         $t0, $zero, L_8001378C
    if (ctx->r8 == 0) {
        // 0x80013744: nop
    
            goto L_8001378C;
    }
    // 0x80013744: nop

    // 0x80013748: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8001374C: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80013750: addu        $a3, $t6, $a0
    ctx->r7 = ADD32(ctx->r14, ctx->r4);
    // 0x80013754: blez        $t0, L_8001378C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80013758: sw          $a3, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r7;
            goto L_8001378C;
    }
    // 0x80013758: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x8001375C: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
L_80013760:
    // 0x80013760: lw          $t3, 0x8($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X8);
    // 0x80013764: lw          $t7, 0xC($t0)
    ctx->r15 = MEM_W(ctx->r8, 0XC);
    // 0x80013768: addu        $t4, $t3, $a0
    ctx->r12 = ADD32(ctx->r11, ctx->r4);
    // 0x8001376C: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x80013770: sw          $t4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r12;
    // 0x80013774: sw          $t8, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r24;
    // 0x80013778: lhu         $t9, 0x4($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X4);
    // 0x8001377C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80013780: slt         $at, $t1, $t9
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80013784: bne         $at, $zero, L_80013760
    if (ctx->r1 != 0) {
        // 0x80013788: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_80013760;
    }
    // 0x80013788: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
L_8001378C:
    // 0x8001378C: lhu         $t5, 0x5E($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X5E);
    // 0x80013790: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80013794: slt         $at, $v1, $t5
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80013798: bne         $at, $zero, L_8001371C
    if (ctx->r1 != 0) {
        // 0x8001379C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_8001371C;
    }
    // 0x8001379C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800137A0:
    // 0x800137A0: lhu         $v0, 0x60($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X60);
    // 0x800137A4: nop

    // 0x800137A8: beq         $v0, $zero, L_800137F8
    if (ctx->r2 == 0) {
        // 0x800137AC: nop
    
            goto L_800137F8;
    }
    // 0x800137AC: nop

    // 0x800137B0: lw          $t6, 0x48($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X48);
    // 0x800137B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800137B8: addu        $t3, $t6, $a0
    ctx->r11 = ADD32(ctx->r14, ctx->r4);
    // 0x800137BC: blez        $v0, L_800137F8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800137C0: sw          $t3, 0x48($a0)
        MEM_W(0X48, ctx->r4) = ctx->r11;
            goto L_800137F8;
    }
    // 0x800137C0: sw          $t3, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r11;
    // 0x800137C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800137C8:
    // 0x800137C8: lw          $t4, 0x48($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X48);
    // 0x800137CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800137D0: addu        $a2, $t4, $v0
    ctx->r6 = ADD32(ctx->r12, ctx->r2);
    // 0x800137D4: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x800137D8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800137DC: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x800137E0: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x800137E4: lhu         $t9, 0x60($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X60);
    // 0x800137E8: nop

    // 0x800137EC: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800137F0: bne         $at, $zero, L_800137C8
    if (ctx->r1 != 0) {
        // 0x800137F4: nop
    
            goto L_800137C8;
    }
    // 0x800137F4: nop

L_800137F8:
    // 0x800137F8: lhu         $v0, 0x66($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X66);
    // 0x800137FC: nop

    // 0x80013800: beq         $v0, $zero, L_80013868
    if (ctx->r2 == 0) {
        // 0x80013804: nop
    
            goto L_80013868;
    }
    // 0x80013804: nop

    // 0x80013808: lw          $t5, 0x54($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X54);
    // 0x8001380C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80013810: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x80013814: blez        $v0, L_80013868
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80013818: sw          $t6, 0x54($a0)
        MEM_W(0X54, ctx->r4) = ctx->r14;
            goto L_80013868;
    }
    // 0x80013818: sw          $t6, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r14;
    // 0x8001381C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80013820:
    // 0x80013820: lw          $t3, 0x54($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X54);
    // 0x80013824: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80013828: addu        $a3, $t3, $v0
    ctx->r7 = ADD32(ctx->r11, ctx->r2);
    // 0x8001382C: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80013830: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80013834: addu        $a2, $t4, $a0
    ctx->r6 = ADD32(ctx->r12, ctx->r4);
    // 0x80013838: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x8001383C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80013840: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x80013844: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x80013848: addu        $t5, $t9, $a0
    ctx->r13 = ADD32(ctx->r25, ctx->r4);
    // 0x8001384C: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80013850: sw          $t5, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r13;
    // 0x80013854: lhu         $t6, 0x66($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X66);
    // 0x80013858: nop

    // 0x8001385C: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80013860: bne         $at, $zero, L_80013820
    if (ctx->r1 != 0) {
        // 0x80013864: nop
    
            goto L_80013820;
    }
    // 0x80013864: nop

L_80013868:
    // 0x80013868: lw          $t3, 0x8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8);
    // 0x8001386C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80013870: or          $t4, $t3, $a1
    ctx->r12 = ctx->r11 | ctx->r5;
    // 0x80013874: sw          $t4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r12;
    // 0x80013878: jr          $ra
    // 0x8001387C: nop

    return;
    // 0x8001387C: nop

;}
RECOMP_FUNC void func_80013880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013880: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80013884: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80013888: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x8001388C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80013890: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80013894: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80013898: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8001389C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800138A0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800138A4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800138A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800138AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800138B0: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    // 0x800138B4: jal         0x8000C734
    // 0x800138B8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    func_8000C734(rdram, ctx);
        goto after_0;
    // 0x800138B8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    after_0:
    // 0x800138BC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800138C0: nop

    // 0x800138C4: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x800138C8: jal         0x800133BC
    // 0x800138CC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_800133BC(rdram, ctx);
        goto after_1;
    // 0x800138CC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x800138D0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x800138D4: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x800138D8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800138DC: andi        $t6, $a1, 0x1
    ctx->r14 = ctx->r5 & 0X1;
    // 0x800138E0: beq         $t6, $zero, L_80013934
    if (ctx->r14 == 0) {
        // 0x800138E4: addiu       $at, $zero, -0x2
        ctx->r1 = ADD32(0, -0X2);
            goto L_80013934;
    }
    // 0x800138E4: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800138E8: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x800138EC: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x800138F0: beq         $v0, $zero, L_80013934
    if (ctx->r2 == 0) {
        // 0x800138F4: lui         $fp, 0x800A
        ctx->r30 = S32(0X800A << 16);
            goto L_80013934;
    }
    // 0x800138F4: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x800138F8: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x800138FC: lw          $s7, 0x7D00($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X7D00);
    // 0x80013900: lhu         $fp, 0x7D04($fp)
    ctx->r30 = MEM_HU(ctx->r30, 0X7D04);
    // 0x80013904: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80013908: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8001390C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80013910: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x80013914: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80013918: jal         0x800132E0
    // 0x8001391C: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    func_800132E0(rdram, ctx);
        goto after_2;
    // 0x8001391C: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    after_2:
    // 0x80013920: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x80013924: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80013928: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x8001392C: b           L_80013948
    // 0x80013930: andi        $t6, $a1, 0x2
    ctx->r14 = ctx->r5 & 0X2;
        goto L_80013948;
    // 0x80013930: andi        $t6, $a1, 0x2
    ctx->r14 = ctx->r5 & 0X2;
L_80013934:
    // 0x80013934: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x80013938: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8001393C: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x80013940: sh          $zero, 0xC($v1)
    MEM_H(0XC, ctx->r3) = 0;
    // 0x80013944: andi        $t6, $a1, 0x2
    ctx->r14 = ctx->r5 & 0X2;
L_80013948:
    // 0x80013948: beq         $t6, $zero, L_8001399C
    if (ctx->r14 == 0) {
        // 0x8001394C: addiu       $at, $zero, -0x3
        ctx->r1 = ADD32(0, -0X3);
            goto L_8001399C;
    }
    // 0x8001394C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80013950: lhu         $v0, 0x5A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X5A);
    // 0x80013954: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80013958: beq         $v0, $zero, L_8001399C
    if (ctx->r2 == 0) {
        // 0x8001395C: lui         $fp, 0x800A
        ctx->r30 = S32(0X800A << 16);
            goto L_8001399C;
    }
    // 0x8001395C: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x80013960: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x80013964: lw          $s7, 0x7D10($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X7D10);
    // 0x80013968: lhu         $fp, 0x7D14($fp)
    ctx->r30 = MEM_HU(ctx->r30, 0X7D14);
    // 0x8001396C: addiu       $t8, $v1, 0x10
    ctx->r24 = ADD32(ctx->r3, 0X10);
    // 0x80013970: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80013974: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80013978: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x8001397C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80013980: jal         0x800132E0
    // 0x80013984: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    func_800132E0(rdram, ctx);
        goto after_3;
    // 0x80013984: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    after_3:
    // 0x80013988: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x8001398C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80013990: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80013994: b           L_800139B0
    // 0x80013998: andi        $t6, $a1, 0x4
    ctx->r14 = ctx->r5 & 0X4;
        goto L_800139B0;
    // 0x80013998: andi        $t6, $a1, 0x4
    ctx->r14 = ctx->r5 & 0X4;
L_8001399C:
    // 0x8001399C: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x800139A0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x800139A4: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x800139A8: sh          $zero, 0x14($v1)
    MEM_H(0X14, ctx->r3) = 0;
    // 0x800139AC: andi        $t6, $a1, 0x4
    ctx->r14 = ctx->r5 & 0X4;
L_800139B0:
    // 0x800139B0: beq         $t6, $zero, L_80013A04
    if (ctx->r14 == 0) {
        // 0x800139B4: addiu       $at, $zero, -0x5
        ctx->r1 = ADD32(0, -0X5);
            goto L_80013A04;
    }
    // 0x800139B4: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x800139B8: lhu         $v0, 0x5C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X5C);
    // 0x800139BC: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x800139C0: beq         $v0, $zero, L_80013A04
    if (ctx->r2 == 0) {
        // 0x800139C4: lui         $fp, 0x800A
        ctx->r30 = S32(0X800A << 16);
            goto L_80013A04;
    }
    // 0x800139C4: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x800139C8: lw          $t7, 0x40($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X40);
    // 0x800139CC: lw          $s7, 0x7D18($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X7D18);
    // 0x800139D0: lhu         $fp, 0x7D1C($fp)
    ctx->r30 = MEM_HU(ctx->r30, 0X7D1C);
    // 0x800139D4: addiu       $t8, $v1, 0x18
    ctx->r24 = ADD32(ctx->r3, 0X18);
    // 0x800139D8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800139DC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800139E0: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x800139E4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800139E8: jal         0x800132E0
    // 0x800139EC: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    func_800132E0(rdram, ctx);
        goto after_4;
    // 0x800139EC: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    after_4:
    // 0x800139F0: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x800139F4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x800139F8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x800139FC: b           L_80013A18
    // 0x80013A00: andi        $t6, $a1, 0x8
    ctx->r14 = ctx->r5 & 0X8;
        goto L_80013A18;
    // 0x80013A00: andi        $t6, $a1, 0x8
    ctx->r14 = ctx->r5 & 0X8;
L_80013A04:
    // 0x80013A04: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x80013A08: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80013A0C: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x80013A10: sh          $zero, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = 0;
    // 0x80013A14: andi        $t6, $a1, 0x8
    ctx->r14 = ctx->r5 & 0X8;
L_80013A18:
    // 0x80013A18: beq         $t6, $zero, L_80013A6C
    if (ctx->r14 == 0) {
        // 0x80013A1C: addiu       $at, $zero, -0x9
        ctx->r1 = ADD32(0, -0X9);
            goto L_80013A6C;
    }
    // 0x80013A1C: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x80013A20: lhu         $v0, 0x5E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X5E);
    // 0x80013A24: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80013A28: beq         $v0, $zero, L_80013A6C
    if (ctx->r2 == 0) {
        // 0x80013A2C: lui         $fp, 0x800A
        ctx->r30 = S32(0X800A << 16);
            goto L_80013A6C;
    }
    // 0x80013A2C: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x80013A30: lw          $t7, 0x44($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X44);
    // 0x80013A34: lw          $s7, 0x7D20($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X7D20);
    // 0x80013A38: lhu         $fp, 0x7D24($fp)
    ctx->r30 = MEM_HU(ctx->r30, 0X7D24);
    // 0x80013A3C: addiu       $t8, $v1, 0x20
    ctx->r24 = ADD32(ctx->r3, 0X20);
    // 0x80013A40: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80013A44: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80013A48: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x80013A4C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80013A50: jal         0x800132E0
    // 0x80013A54: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    func_800132E0(rdram, ctx);
        goto after_5;
    // 0x80013A54: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    after_5:
    // 0x80013A58: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x80013A5C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80013A60: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80013A64: b           L_80013A80
    // 0x80013A68: andi        $t6, $a1, 0x10
    ctx->r14 = ctx->r5 & 0X10;
        goto L_80013A80;
    // 0x80013A68: andi        $t6, $a1, 0x10
    ctx->r14 = ctx->r5 & 0X10;
L_80013A6C:
    // 0x80013A6C: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x80013A70: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80013A74: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
    // 0x80013A78: sh          $zero, 0x24($v1)
    MEM_H(0X24, ctx->r3) = 0;
    // 0x80013A7C: andi        $t6, $a1, 0x10
    ctx->r14 = ctx->r5 & 0X10;
L_80013A80:
    // 0x80013A80: beq         $t6, $zero, L_80013AD4
    if (ctx->r14 == 0) {
        // 0x80013A84: addiu       $at, $zero, -0x11
        ctx->r1 = ADD32(0, -0X11);
            goto L_80013AD4;
    }
    // 0x80013A84: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x80013A88: lhu         $v0, 0x60($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X60);
    // 0x80013A8C: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80013A90: beq         $v0, $zero, L_80013AD4
    if (ctx->r2 == 0) {
        // 0x80013A94: lui         $fp, 0x800A
        ctx->r30 = S32(0X800A << 16);
            goto L_80013AD4;
    }
    // 0x80013A94: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x80013A98: lw          $t7, 0x48($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X48);
    // 0x80013A9C: lw          $s7, 0x7D28($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X7D28);
    // 0x80013AA0: lhu         $fp, 0x7D2C($fp)
    ctx->r30 = MEM_HU(ctx->r30, 0X7D2C);
    // 0x80013AA4: addiu       $t8, $v1, 0x28
    ctx->r24 = ADD32(ctx->r3, 0X28);
    // 0x80013AA8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80013AAC: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80013AB0: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x80013AB4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80013AB8: jal         0x800132E0
    // 0x80013ABC: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    func_800132E0(rdram, ctx);
        goto after_6;
    // 0x80013ABC: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    after_6:
    // 0x80013AC0: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x80013AC4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80013AC8: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80013ACC: b           L_80013AE8
    // 0x80013AD0: andi        $t6, $a1, 0x20
    ctx->r14 = ctx->r5 & 0X20;
        goto L_80013AE8;
    // 0x80013AD0: andi        $t6, $a1, 0x20
    ctx->r14 = ctx->r5 & 0X20;
L_80013AD4:
    // 0x80013AD4: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x80013AD8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80013ADC: sw          $zero, 0x28($v1)
    MEM_W(0X28, ctx->r3) = 0;
    // 0x80013AE0: sh          $zero, 0x2C($v1)
    MEM_H(0X2C, ctx->r3) = 0;
    // 0x80013AE4: andi        $t6, $a1, 0x20
    ctx->r14 = ctx->r5 & 0X20;
L_80013AE8:
    // 0x80013AE8: beq         $t6, $zero, L_80013B38
    if (ctx->r14 == 0) {
        // 0x80013AEC: addiu       $at, $zero, -0x21
        ctx->r1 = ADD32(0, -0X21);
            goto L_80013B38;
    }
    // 0x80013AEC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x80013AF0: lhu         $v0, 0x66($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X66);
    // 0x80013AF4: lui         $s7, 0x800A
    ctx->r23 = S32(0X800A << 16);
    // 0x80013AF8: beq         $v0, $zero, L_80013B38
    if (ctx->r2 == 0) {
        // 0x80013AFC: lui         $fp, 0x800A
        ctx->r30 = S32(0X800A << 16);
            goto L_80013B38;
    }
    // 0x80013AFC: lui         $fp, 0x800A
    ctx->r30 = S32(0X800A << 16);
    // 0x80013B00: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x80013B04: lw          $s7, 0x7D30($s7)
    ctx->r23 = MEM_W(ctx->r23, 0X7D30);
    // 0x80013B08: lhu         $fp, 0x7D34($fp)
    ctx->r30 = MEM_HU(ctx->r30, 0X7D34);
    // 0x80013B0C: addiu       $t8, $v1, 0x30
    ctx->r24 = ADD32(ctx->r3, 0X30);
    // 0x80013B10: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80013B14: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80013B18: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x80013B1C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80013B20: jal         0x800132E0
    // 0x80013B24: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    func_800132E0(rdram, ctx);
        goto after_7;
    // 0x80013B24: sw          $t7, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r15;
    after_7:
    // 0x80013B28: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x80013B2C: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80013B30: b           L_80013B4C
    // 0x80013B34: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
        goto L_80013B4C;
    // 0x80013B34: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
L_80013B38:
    // 0x80013B38: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x80013B3C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80013B40: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x80013B44: sh          $zero, 0x34($v1)
    MEM_H(0X34, ctx->r3) = 0;
    // 0x80013B48: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
L_80013B4C:
    // 0x80013B4C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80013B50: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80013B54: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80013B58: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80013B5C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80013B60: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80013B64: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80013B68: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80013B6C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80013B70: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80013B74: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80013B78: jr          $ra
    // 0x80013B7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80013B7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80013B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013B80: jr          $ra
    // 0x80013B84: nop

    return;
    // 0x80013B84: nop

;}
RECOMP_FUNC void func_80013B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013B88: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80013B8C: lui         $t2, 0x800A
    ctx->r10 = S32(0X800A << 16);
    // 0x80013B90: addiu       $t2, $t2, 0x7D04
    ctx->r10 = ADD32(ctx->r10, 0X7D04);
    // 0x80013B94: addiu       $v0, $v0, 0x7D00
    ctx->r2 = ADD32(ctx->r2, 0X7D00);
    // 0x80013B98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80013B9C: andi        $t1, $a1, 0xFFFF
    ctx->r9 = ctx->r5 & 0XFFFF;
    // 0x80013BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013BA4: or          $t3, $a2, $zero
    ctx->r11 = ctx->r6 | 0;
    // 0x80013BA8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x80013BAC: sh          $a1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r5;
    // 0x80013BB0: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80013BB4: blez        $t1, L_80013C08
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80013BB8: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80013C08;
    }
    // 0x80013BB8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80013BBC: andi        $a1, $t1, 0x3
    ctx->r5 = ctx->r9 & 0X3;
    // 0x80013BC0: beq         $a1, $zero, L_80013BE4
    if (ctx->r5 == 0) {
        // 0x80013BC4: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_80013BE4;
    }
    // 0x80013BC4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80013BC8: sll         $t6, $zero, 2
    ctx->r14 = S32(0 << 2);
    // 0x80013BCC: addu        $v0, $t0, $t6
    ctx->r2 = ADD32(ctx->r8, ctx->r14);
L_80013BD0:
    // 0x80013BD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80013BD4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013BD8: bne         $a0, $v1, L_80013BD0
    if (ctx->r4 != ctx->r3) {
        // 0x80013BDC: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80013BD0;
    }
    // 0x80013BDC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80013BE0: beq         $v1, $t1, L_80013C08
    if (ctx->r3 == ctx->r9) {
        // 0x80013BE4: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_80013C08;
    }
L_80013BE4:
    // 0x80013BE4: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x80013BE8: addu        $v0, $t0, $t7
    ctx->r2 = ADD32(ctx->r8, ctx->r15);
L_80013BEC:
    // 0x80013BEC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80013BF0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013BF4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80013BF8: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80013BFC: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80013C00: bne         $v1, $t1, L_80013BEC
    if (ctx->r3 != ctx->r9) {
        // 0x80013C04: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_80013BEC;
    }
    // 0x80013C04: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_80013C08:
    // 0x80013C08: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80013C0C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013C10: addiu       $a1, $a1, 0x7D14
    ctx->r5 = ADD32(ctx->r5, 0X7D14);
    // 0x80013C14: addiu       $v0, $v0, 0x7D10
    ctx->r2 = ADD32(ctx->r2, 0X7D10);
    // 0x80013C18: andi        $a2, $a3, 0xFFFF
    ctx->r6 = ctx->r7 & 0XFFFF;
    // 0x80013C1C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80013C20: sh          $a3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r7;
    // 0x80013C24: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80013C28: blez        $a2, L_80013C7C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80013C2C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80013C7C;
    }
    // 0x80013C2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80013C30: andi        $t0, $a2, 0x3
    ctx->r8 = ctx->r6 & 0X3;
    // 0x80013C34: beq         $t0, $zero, L_80013C58
    if (ctx->r8 == 0) {
        // 0x80013C38: or          $a1, $t0, $zero
        ctx->r5 = ctx->r8 | 0;
            goto L_80013C58;
    }
    // 0x80013C38: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80013C3C: sll         $t8, $zero, 2
    ctx->r24 = S32(0 << 2);
    // 0x80013C40: addu        $v0, $t3, $t8
    ctx->r2 = ADD32(ctx->r11, ctx->r24);
L_80013C44:
    // 0x80013C44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80013C48: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013C4C: bne         $a1, $v1, L_80013C44
    if (ctx->r5 != ctx->r3) {
        // 0x80013C50: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80013C44;
    }
    // 0x80013C50: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80013C54: beq         $v1, $a2, L_80013C7C
    if (ctx->r3 == ctx->r6) {
        // 0x80013C58: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_80013C7C;
    }
L_80013C58:
    // 0x80013C58: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x80013C5C: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
L_80013C60:
    // 0x80013C60: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80013C64: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013C68: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80013C6C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80013C70: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80013C74: bne         $v1, $a2, L_80013C60
    if (ctx->r3 != ctx->r6) {
        // 0x80013C78: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_80013C60;
    }
    // 0x80013C78: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_80013C7C:
    // 0x80013C7C: sll         $a0, $a3, 2
    ctx->r4 = S32(ctx->r7 << 2);
    // 0x80013C80: jal         0x8000C734
    // 0x80013C84: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8000C734(rdram, ctx);
        goto after_0;
    // 0x80013C84: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80013C88: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80013C8C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80013C90: addiu       $v1, $v1, 0x7D08
    ctx->r3 = ADD32(ctx->r3, 0X7D08);
    // 0x80013C94: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80013C98: blez        $a3, L_80013D20
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80013C9C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80013D20;
    }
    // 0x80013C9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80013CA0: andi        $a2, $a3, 0x3
    ctx->r6 = ctx->r7 & 0X3;
    // 0x80013CA4: beq         $a2, $zero, L_80013CCC
    if (ctx->r6 == 0) {
        // 0x80013CA8: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80013CCC;
    }
    // 0x80013CA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80013CAC: sll         $v0, $zero, 2
    ctx->r2 = S32(0 << 2);
L_80013CB0:
    // 0x80013CB0: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80013CB4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80013CB8: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x80013CBC: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x80013CC0: bne         $a0, $a1, L_80013CB0
    if (ctx->r4 != ctx->r5) {
        // 0x80013CC4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80013CB0;
    }
    // 0x80013CC4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80013CC8: beq         $a1, $a3, L_80013D1C
    if (ctx->r5 == ctx->r7) {
        // 0x80013CCC: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_80013D1C;
    }
L_80013CCC:
    // 0x80013CCC: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80013CD0: sll         $a0, $a3, 2
    ctx->r4 = S32(ctx->r7 << 2);
L_80013CD4:
    // 0x80013CD4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80013CD8: nop

    // 0x80013CDC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80013CE0: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80013CE4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80013CE8: nop

    // 0x80013CEC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80013CF0: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80013CF4: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80013CF8: nop

    // 0x80013CFC: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x80013D00: sw          $zero, 0x8($t5)
    MEM_W(0X8, ctx->r13) = 0;
    // 0x80013D04: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80013D08: nop

    // 0x80013D0C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80013D10: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80013D14: bne         $v0, $a0, L_80013CD4
    if (ctx->r2 != ctx->r4) {
        // 0x80013D18: sw          $zero, 0xC($t7)
        MEM_W(0XC, ctx->r15) = 0;
            goto L_80013CD4;
    }
    // 0x80013D18: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
L_80013D1C:
    // 0x80013D1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80013D20:
    // 0x80013D20: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80013D24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80013D28: jal         0x8000C734
    // 0x80013D2C: sll         $a0, $a3, 2
    ctx->r4 = S32(ctx->r7 << 2);
    func_8000C734(rdram, ctx);
        goto after_1;
    // 0x80013D2C: sll         $a0, $a3, 2
    ctx->r4 = S32(ctx->r7 << 2);
    after_1:
    // 0x80013D30: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80013D34: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80013D38: addiu       $v1, $v1, 0x7D0C
    ctx->r3 = ADD32(ctx->r3, 0X7D0C);
    // 0x80013D3C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80013D40: blez        $a3, L_80013DC4
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80013D44: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_80013DC4;
    }
    // 0x80013D44: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80013D48: andi        $a2, $a3, 0x3
    ctx->r6 = ctx->r7 & 0X3;
    // 0x80013D4C: beq         $a2, $zero, L_80013D74
    if (ctx->r6 == 0) {
        // 0x80013D50: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80013D74;
    }
    // 0x80013D50: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80013D54: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
L_80013D58:
    // 0x80013D58: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80013D5C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80013D60: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80013D64: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x80013D68: bne         $a0, $a1, L_80013D58
    if (ctx->r4 != ctx->r5) {
        // 0x80013D6C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80013D58;
    }
    // 0x80013D6C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80013D70: beq         $a1, $a3, L_80013DC4
    if (ctx->r5 == ctx->r7) {
        // 0x80013D74: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_80013DC4;
    }
L_80013D74:
    // 0x80013D74: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80013D78: sll         $a0, $a3, 2
    ctx->r4 = S32(ctx->r7 << 2);
L_80013D7C:
    // 0x80013D7C: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80013D80: nop

    // 0x80013D84: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x80013D88: sw          $zero, 0x0($t5)
    MEM_W(0X0, ctx->r13) = 0;
    // 0x80013D8C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80013D90: nop

    // 0x80013D94: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80013D98: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x80013D9C: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80013DA0: nop

    // 0x80013DA4: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80013DA8: sw          $zero, 0x8($t9)
    MEM_W(0X8, ctx->r25) = 0;
    // 0x80013DAC: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80013DB0: nop

    // 0x80013DB4: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x80013DB8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80013DBC: bne         $v0, $a0, L_80013D7C
    if (ctx->r2 != ctx->r4) {
        // 0x80013DC0: sw          $zero, 0xC($t5)
        MEM_W(0XC, ctx->r13) = 0;
            goto L_80013D7C;
    }
    // 0x80013DC0: sw          $zero, 0xC($t5)
    MEM_W(0XC, ctx->r13) = 0;
L_80013DC4:
    // 0x80013DC4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80013DC8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80013DCC: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013DD0: addiu       $a1, $a1, 0x7D1C
    ctx->r5 = ADD32(ctx->r5, 0X7D1C);
    // 0x80013DD4: addiu       $v0, $v0, 0x7D18
    ctx->r2 = ADD32(ctx->r2, 0X7D18);
    // 0x80013DD8: andi        $a2, $a3, 0xFFFF
    ctx->r6 = ctx->r7 & 0XFFFF;
    // 0x80013DDC: sh          $a3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r7;
    // 0x80013DE0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80013DE4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80013DE8: blez        $a2, L_80013E3C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80013DEC: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_80013E3C;
    }
    // 0x80013DEC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80013DF0: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x80013DF4: beq         $a3, $zero, L_80013E18
    if (ctx->r7 == 0) {
        // 0x80013DF8: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_80013E18;
    }
    // 0x80013DF8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80013DFC: sll         $t7, $zero, 2
    ctx->r15 = S32(0 << 2);
    // 0x80013E00: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
L_80013E04:
    // 0x80013E04: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80013E08: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013E0C: bne         $a1, $v1, L_80013E04
    if (ctx->r5 != ctx->r3) {
        // 0x80013E10: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80013E04;
    }
    // 0x80013E10: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80013E14: beq         $v1, $a2, L_80013E3C
    if (ctx->r3 == ctx->r6) {
        // 0x80013E18: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_80013E3C;
    }
L_80013E18:
    // 0x80013E18: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80013E1C: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
L_80013E20:
    // 0x80013E20: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80013E24: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013E28: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80013E2C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80013E30: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80013E34: bne         $v1, $a2, L_80013E20
    if (ctx->r3 != ctx->r6) {
        // 0x80013E38: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_80013E20;
    }
    // 0x80013E38: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_80013E3C:
    // 0x80013E3C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80013E40: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80013E44: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80013E48: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013E4C: addiu       $a1, $a1, 0x7D24
    ctx->r5 = ADD32(ctx->r5, 0X7D24);
    // 0x80013E50: addiu       $v0, $v0, 0x7D20
    ctx->r2 = ADD32(ctx->r2, 0X7D20);
    // 0x80013E54: andi        $a2, $t4, 0xFFFF
    ctx->r6 = ctx->r12 & 0XFFFF;
    // 0x80013E58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80013E5C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80013E60: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80013E64: blez        $a2, L_80013EB8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80013E68: sh          $t4, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r12;
            goto L_80013EB8;
    }
    // 0x80013E68: sh          $t4, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r12;
    // 0x80013E6C: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x80013E70: beq         $a3, $zero, L_80013E94
    if (ctx->r7 == 0) {
        // 0x80013E74: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_80013E94;
    }
    // 0x80013E74: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80013E78: sll         $t5, $zero, 2
    ctx->r13 = S32(0 << 2);
    // 0x80013E7C: addu        $v0, $t9, $t5
    ctx->r2 = ADD32(ctx->r25, ctx->r13);
L_80013E80:
    // 0x80013E80: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80013E84: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013E88: bne         $a1, $v1, L_80013E80
    if (ctx->r5 != ctx->r3) {
        // 0x80013E8C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80013E80;
    }
    // 0x80013E8C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80013E90: beq         $v1, $a2, L_80013EB8
    if (ctx->r3 == ctx->r6) {
        // 0x80013E94: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_80013EB8;
    }
L_80013E94:
    // 0x80013E94: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x80013E98: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
L_80013E9C:
    // 0x80013E9C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80013EA0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013EA4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80013EA8: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80013EAC: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80013EB0: bne         $v1, $a2, L_80013E9C
    if (ctx->r3 != ctx->r6) {
        // 0x80013EB4: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_80013E9C;
    }
    // 0x80013EB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_80013EB8:
    // 0x80013EB8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80013EBC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80013EC0: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80013EC4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013EC8: addiu       $a1, $a1, 0x7D2C
    ctx->r5 = ADD32(ctx->r5, 0X7D2C);
    // 0x80013ECC: addiu       $v0, $v0, 0x7D28
    ctx->r2 = ADD32(ctx->r2, 0X7D28);
    // 0x80013ED0: andi        $a2, $t8, 0xFFFF
    ctx->r6 = ctx->r24 & 0XFFFF;
    // 0x80013ED4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80013ED8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80013EDC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80013EE0: blez        $a2, L_80013F34
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80013EE4: sh          $t8, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r24;
            goto L_80013F34;
    }
    // 0x80013EE4: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80013EE8: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x80013EEC: beq         $a3, $zero, L_80013F10
    if (ctx->r7 == 0) {
        // 0x80013EF0: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_80013F10;
    }
    // 0x80013EF0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80013EF4: sll         $t9, $zero, 2
    ctx->r25 = S32(0 << 2);
    // 0x80013EF8: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
L_80013EFC:
    // 0x80013EFC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80013F00: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013F04: bne         $a1, $v1, L_80013EFC
    if (ctx->r5 != ctx->r3) {
        // 0x80013F08: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80013EFC;
    }
    // 0x80013F08: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80013F0C: beq         $v1, $a2, L_80013F34
    if (ctx->r3 == ctx->r6) {
        // 0x80013F10: sll         $t4, $v1, 2
        ctx->r12 = S32(ctx->r3 << 2);
            goto L_80013F34;
    }
L_80013F10:
    // 0x80013F10: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x80013F14: addu        $v0, $a0, $t4
    ctx->r2 = ADD32(ctx->r4, ctx->r12);
L_80013F18:
    // 0x80013F18: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80013F1C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013F20: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80013F24: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80013F28: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80013F2C: bne         $v1, $a2, L_80013F18
    if (ctx->r3 != ctx->r6) {
        // 0x80013F30: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_80013F18;
    }
    // 0x80013F30: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_80013F34:
    // 0x80013F34: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80013F38: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80013F3C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80013F40: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013F44: addiu       $a1, $a1, 0x7D34
    ctx->r5 = ADD32(ctx->r5, 0X7D34);
    // 0x80013F48: addiu       $v0, $v0, 0x7D30
    ctx->r2 = ADD32(ctx->r2, 0X7D30);
    // 0x80013F4C: andi        $a2, $t6, 0xFFFF
    ctx->r6 = ctx->r14 & 0XFFFF;
    // 0x80013F50: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80013F54: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80013F58: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80013F5C: blez        $a2, L_80013FB0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80013F60: sh          $t6, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r14;
            goto L_80013FB0;
    }
    // 0x80013F60: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x80013F64: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x80013F68: beq         $a3, $zero, L_80013F8C
    if (ctx->r7 == 0) {
        // 0x80013F6C: or          $a1, $a3, $zero
        ctx->r5 = ctx->r7 | 0;
            goto L_80013F8C;
    }
    // 0x80013F6C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80013F70: sll         $t7, $zero, 2
    ctx->r15 = S32(0 << 2);
    // 0x80013F74: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
L_80013F78:
    // 0x80013F78: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80013F7C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013F80: bne         $a1, $v1, L_80013F78
    if (ctx->r5 != ctx->r3) {
        // 0x80013F84: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80013F78;
    }
    // 0x80013F84: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80013F88: beq         $v1, $a2, L_80013FB0
    if (ctx->r3 == ctx->r6) {
        // 0x80013F8C: sll         $t8, $v1, 2
        ctx->r24 = S32(ctx->r3 << 2);
            goto L_80013FB0;
    }
L_80013F8C:
    // 0x80013F8C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80013F90: addu        $v0, $a0, $t8
    ctx->r2 = ADD32(ctx->r4, ctx->r24);
L_80013F94:
    // 0x80013F94: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80013F98: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80013F9C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80013FA0: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x80013FA4: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x80013FA8: bne         $v1, $a2, L_80013F94
    if (ctx->r3 != ctx->r6) {
        // 0x80013FAC: addiu       $v0, $v0, 0x10
        ctx->r2 = ADD32(ctx->r2, 0X10);
            goto L_80013F94;
    }
    // 0x80013FAC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
L_80013FB0:
    // 0x80013FB0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80013FB4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013FB8: addiu       $a1, $a1, 0x7D60
    ctx->r5 = ADD32(ctx->r5, 0X7D60);
    // 0x80013FBC: addiu       $a0, $a0, 0x7D48
    ctx->r4 = ADD32(ctx->r4, 0X7D48);
    // 0x80013FC0: jal         0x80075300
    // 0x80013FC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x80013FC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80013FC8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80013FCC: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80013FD0: addiu       $a1, $a1, 0x7D48
    ctx->r5 = ADD32(ctx->r5, 0X7D48);
    // 0x80013FD4: addiu       $a0, $a0, 0x7D38
    ctx->r4 = ADD32(ctx->r4, 0X7D38);
    // 0x80013FD8: jal         0x80000960
    // 0x80013FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80000960(rdram, ctx);
        goto after_3;
    // 0x80013FDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80013FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013FE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80013FE8: jr          $ra
    // 0x80013FEC: nop

    return;
    // 0x80013FEC: nop

;}
RECOMP_FUNC void func_80013FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80013FF4: andi        $a3, $a0, 0xFFFF
    ctx->r7 = ctx->r4 & 0XFFFF;
    // 0x80013FF8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80013FFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014000: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80014004: addiu       $t7, $t7, -0x6210
    ctx->r15 = ADD32(ctx->r15, -0X6210);
    // 0x80014008: sll         $t6, $a3, 5
    ctx->r14 = S32(ctx->r7 << 5);
    // 0x8001400C: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x80014010: jal         0x80076BF8
    // 0x80014014: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80014014: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x80014018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001401C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014020: jr          $ra
    // 0x80014024: nop

    return;
    // 0x80014024: nop

;}
RECOMP_FUNC void func_80014028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014028: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001402C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80014030: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80014034: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80014038: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8001403C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80014040: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80014044: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80014048: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8001404C: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80014050: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80014054: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x80014058: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x8001405C: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80014060: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x80014064: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80014068: addiu       $s5, $s5, -0x6210
    ctx->r21 = ADD32(ctx->r21, -0X6210);
    // 0x8001406C: addiu       $s4, $s4, -0x1308
    ctx->r20 = ADD32(ctx->r20, -0X1308);
    // 0x80014070: addiu       $s2, $s2, -0x11A8
    ctx->r18 = ADD32(ctx->r18, -0X11A8);
    // 0x80014074: addiu       $s1, $s1, -0x6210
    ctx->r17 = ADD32(ctx->r17, -0X6210);
    // 0x80014078: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8001407C: addiu       $s6, $zero, 0x20
    ctx->r22 = ADD32(0, 0X20);
L_80014080:
    // 0x80014080: lb          $t6, 0x0($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X0);
    // 0x80014084: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80014088: blez        $t6, L_800140B8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8001408C: andi        $t3, $s0, 0xFFFF
        ctx->r11 = ctx->r16 & 0XFFFF;
            goto L_800140B8;
    }
    // 0x8001408C: andi        $t3, $s0, 0xFFFF
    ctx->r11 = ctx->r16 & 0XFFFF;
    // 0x80014090: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80014094: addiu       $v0, $t7, -0x11A8
    ctx->r2 = ADD32(ctx->r15, -0X11A8);
    // 0x80014098: lb          $v1, 0x0($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X0);
    // 0x8001409C: nop

L_800140A0:
    // 0x800140A0: beq         $s0, $v1, L_800140BC
    if (ctx->r16 == ctx->r3) {
        // 0x800140A4: sll         $t8, $a3, 2
        ctx->r24 = S32(ctx->r7 << 2);
            goto L_800140BC;
    }
    // 0x800140A4: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x800140A8: lb          $v1, 0x4($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X4);
    // 0x800140AC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800140B0: bgtz        $v1, L_800140A0
    if (SIGNED(ctx->r3) > 0) {
        // 0x800140B4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_800140A0;
    }
    // 0x800140B4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_800140B8:
    // 0x800140B8: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
L_800140BC:
    // 0x800140BC: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x800140C0: addu        $t0, $t9, $s7
    ctx->r8 = ADD32(ctx->r25, ctx->r23);
    // 0x800140C4: lbu         $t1, 0x1($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1);
    // 0x800140C8: sll         $t4, $t3, 5
    ctx->r12 = S32(ctx->r11 << 5);
    // 0x800140CC: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x800140D0: addu        $a1, $s4, $t2
    ctx->r5 = ADD32(ctx->r20, ctx->r10);
    // 0x800140D4: addu        $a0, $s5, $t4
    ctx->r4 = ADD32(ctx->r21, ctx->r12);
    // 0x800140D8: jal         0x80076BF8
    // 0x800140DC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800140DC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x800140E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800140E4: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x800140E8: bne         $s0, $s6, L_80014080
    if (ctx->r16 != ctx->r22) {
        // 0x800140EC: sw          $s3, -0x10($s1)
        MEM_W(-0X10, ctx->r17) = ctx->r19;
            goto L_80014080;
    }
    // 0x800140EC: sw          $s3, -0x10($s1)
    MEM_W(-0X10, ctx->r17) = ctx->r19;
    // 0x800140F0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800140F4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800140F8: sw          $s7, -0x1310($at)
    MEM_W(-0X1310, ctx->r1) = ctx->r23;
    // 0x800140FC: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80014100: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80014104: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80014108: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8001410C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80014110: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80014114: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80014118: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8001411C: jr          $ra
    // 0x80014120: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80014120: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80014124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014128: lui         $t6, 0x201F
    ctx->r14 = S32(0X201F << 16);
    // 0x8001412C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014130: ori         $t6, $t6, 0xCC00
    ctx->r14 = ctx->r14 | 0XCC00;
    // 0x80014134: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80014138: sw          $t6, -0x5DD0($at)
    MEM_W(-0X5DD0, ctx->r1) = ctx->r14;
    // 0x8001413C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80014140: jal         0x80014028
    // 0x80014144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80014028(rdram, ctx);
        goto after_0;
    // 0x80014144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80014148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001414C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80014150: jr          $ra
    // 0x80014154: nop

    return;
    // 0x80014154: nop

;}
RECOMP_FUNC void func_80014160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014160: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80014164: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80014168: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8001416C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80014170: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80014174: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80014178: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8001417C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80014180: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80014184: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80014188: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8001418C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80014190: bne         $at, $zero, L_800143F8
    if (ctx->r1 != 0) {
        // 0x80014194: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_800143F8;
    }
    // 0x80014194: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80014198: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8001419C: addiu       $t8, $t8, -0x6250
    ctx->r24 = ADD32(ctx->r24, -0X6250);
    // 0x800141A0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800141A4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x800141A8: addiu       $v1, $a2, -0x1
    ctx->r3 = ADD32(ctx->r6, -0X1);
    // 0x800141AC: sll         $t0, $v1, 1
    ctx->r8 = S32(ctx->r3 << 1);
    // 0x800141B0: addiu       $t6, $t6, -0x6290
    ctx->r14 = ADD32(ctx->r14, -0X6290);
    // 0x800141B4: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x800141B8: addu        $t1, $t0, $t8
    ctx->r9 = ADD32(ctx->r8, ctx->r24);
    // 0x800141BC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x800141C0: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x800141C4: lui         $s5, 0x800A
    ctx->r21 = S32(0X800A << 16);
    // 0x800141C8: addiu       $s5, $s5, 0x7D70
    ctx->r21 = ADD32(ctx->r21, 0X7D70);
    // 0x800141CC: addiu       $fp, $fp, -0x1160
    ctx->r30 = ADD32(ctx->r30, -0X1160);
    // 0x800141D0: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x800141D4: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x800141D8: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x800141DC: lui         $s7, 0xE700
    ctx->r23 = S32(0XE700 << 16);
    // 0x800141E0: addiu       $s6, $zero, 0xC
    ctx->r22 = ADD32(0, 0XC);
    // 0x800141E4: addiu       $s1, $sp, 0x74
    ctx->r17 = ADD32(ctx->r29, 0X74);
L_800141E8:
    // 0x800141E8: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800141EC: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x800141F0: lhu         $v0, 0x0($t2)
    ctx->r2 = MEM_HU(ctx->r10, 0X0);
    // 0x800141F4: lhu         $s4, 0x0($t3)
    ctx->r20 = MEM_HU(ctx->r11, 0X0);
    // 0x800141F8: nop

    // 0x800141FC: beq         $v0, $s4, L_800143D8
    if (ctx->r2 == ctx->r20) {
        // 0x80014200: slt         $at, $v0, $s4
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_800143D8;
    }
    // 0x80014200: slt         $at, $v0, $s4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80014204: beq         $at, $zero, L_800143D8
    if (ctx->r1 == 0) {
        // 0x80014208: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_800143D8;
    }
    // 0x80014208: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8001420C: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x80014210: addiu       $t5, $t5, -0x6A90
    ctx->r13 = ADD32(ctx->r13, -0X6A90);
    // 0x80014214: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x80014218: addu        $s3, $t4, $t5
    ctx->r19 = ADD32(ctx->r12, ctx->r13);
L_8001421C:
    // 0x8001421C: lhu         $t6, 0x0($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0X0);
    // 0x80014220: nop

    // 0x80014224: multu       $t6, $s6
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80014228: mflo        $t7
    ctx->r15 = lo;
    // 0x8001422C: addu        $a2, $s5, $t7
    ctx->r6 = ADD32(ctx->r21, ctx->r15);
    // 0x80014230: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    // 0x80014234: nop

    // 0x80014238: beq         $a0, $zero, L_800143B8
    if (ctx->r4 == 0) {
        // 0x8001423C: nop
    
            goto L_800143B8;
    }
    // 0x8001423C: nop

    // 0x80014240: sw          $s7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r23;
    // 0x80014244: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80014248: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x8001424C: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x80014250: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80014254: addu        $t8, $fp, $t0
    ctx->r24 = ADD32(ctx->r30, ctx->r8);
    // 0x80014258: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8001425C: addiu       $t5, $t5, -0x1150
    ctx->r13 = ADD32(ctx->r13, -0X1150);
    // 0x80014260: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x80014264: lw          $t2, 0x4($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X4);
    // 0x80014268: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8001426C: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x80014270: lbu         $t3, 0x1($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1);
    // 0x80014274: addiu       $t8, $t8, -0x1138
    ctx->r24 = ADD32(ctx->r24, -0X1138);
    // 0x80014278: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8001427C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80014280: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80014284: lui         $t7, 0xD9FF
    ctx->r15 = S32(0XD9FF << 16);
    // 0x80014288: sw          $at, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r1;
    // 0x8001428C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80014290: lui         $t5, 0xD900
    ctx->r13 = S32(0XD900 << 16);
    // 0x80014294: sw          $t9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r25;
    // 0x80014298: lbu         $t0, 0x2($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2);
    // 0x8001429C: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x800142A0: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x800142A4: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x800142A8: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x800142AC: lui         $t0, 0xF800
    ctx->r8 = S32(0XF800 << 16);
    // 0x800142B0: sw          $at, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r1;
    // 0x800142B4: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x800142B8: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x800142BC: sw          $t5, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r13;
    // 0x800142C0: sw          $t7, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r15;
    // 0x800142C4: sw          $t4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r12;
    // 0x800142C8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800142CC: lui         $at, 0xFA00
    ctx->r1 = S32(0XFA00 << 16);
    // 0x800142D0: sw          $t6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r14;
    // 0x800142D4: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x800142D8: lui         $t1, 0xF900
    ctx->r9 = S32(0XF900 << 16);
    // 0x800142DC: sw          $t9, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r25;
    // 0x800142E0: sw          $t0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r8;
    // 0x800142E4: lbu         $t2, 0x0($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X0);
    // 0x800142E8: lbu         $t6, 0x1($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X1);
    // 0x800142EC: lbu         $t8, 0x3($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X3);
    // 0x800142F0: lbu         $t3, 0x2($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X2);
    // 0x800142F4: sll         $t4, $t2, 24
    ctx->r12 = S32(ctx->r10 << 24);
    // 0x800142F8: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x800142FC: or          $t5, $t8, $t4
    ctx->r13 = ctx->r24 | ctx->r12;
    // 0x80014300: or          $t0, $t5, $t9
    ctx->r8 = ctx->r13 | ctx->r25;
    // 0x80014304: sll         $t2, $t3, 8
    ctx->r10 = S32(ctx->r11 << 8);
    // 0x80014308: or          $t8, $t0, $t2
    ctx->r24 = ctx->r8 | ctx->r10;
    // 0x8001430C: sw          $t8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r24;
    // 0x80014310: lw          $t4, 0x10($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X10);
    // 0x80014314: addiu       $v0, $s0, 0x50
    ctx->r2 = ADD32(ctx->r16, 0X50);
    // 0x80014318: sw          $t4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r12;
    // 0x8001431C: lbu         $t6, 0x3($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X3);
    // 0x80014320: lbu         $t3, 0x4($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X4);
    // 0x80014324: sll         $t5, $t6, 8
    ctx->r13 = S32(ctx->r14 << 8);
    // 0x80014328: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x8001432C: or          $t0, $t9, $t3
    ctx->r8 = ctx->r25 | ctx->r11;
    // 0x80014330: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x80014334: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x80014338: lbu         $t9, 0x1($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X1);
    // 0x8001433C: lbu         $t8, 0x3($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X3);
    // 0x80014340: lbu         $t4, 0x2($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X2);
    // 0x80014344: sll         $t6, $t7, 24
    ctx->r14 = S32(ctx->r15 << 24);
    // 0x80014348: sll         $t3, $t9, 16
    ctx->r11 = S32(ctx->r25 << 16);
    // 0x8001434C: or          $t5, $t8, $t6
    ctx->r13 = ctx->r24 | ctx->r14;
    // 0x80014350: or          $t0, $t5, $t3
    ctx->r8 = ctx->r13 | ctx->r11;
    // 0x80014354: sll         $t7, $t4, 8
    ctx->r15 = S32(ctx->r12 << 8);
    // 0x80014358: or          $t8, $t0, $t7
    ctx->r24 = ctx->r8 | ctx->r15;
    // 0x8001435C: sw          $t8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r24;
    // 0x80014360: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80014364: nop

    // 0x80014368: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    // 0x8001436C: sw          $t1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r9;
    // 0x80014370: lbu         $t2, 0x0($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X0);
    // 0x80014374: lbu         $t8, 0x1($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X1);
    // 0x80014378: lbu         $t5, 0x3($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X3);
    // 0x8001437C: lbu         $t3, 0x2($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X2);
    // 0x80014380: sll         $t4, $t2, 24
    ctx->r12 = S32(ctx->r10 << 24);
    // 0x80014384: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x80014388: or          $t0, $t5, $t4
    ctx->r8 = ctx->r13 | ctx->r12;
    // 0x8001438C: or          $t1, $t0, $t6
    ctx->r9 = ctx->r8 | ctx->r14;
    // 0x80014390: sll         $t2, $t3, 8
    ctx->r10 = S32(ctx->r11 << 8);
    // 0x80014394: or          $t5, $t1, $t2
    ctx->r13 = ctx->r9 | ctx->r10;
    // 0x80014398: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
    // 0x8001439C: lw          $at, 0x18($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X18);
    // 0x800143A0: nop

    // 0x800143A4: sw          $at, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r1;
    // 0x800143A8: lw          $t7, 0x1C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X1C);
    // 0x800143AC: nop

    // 0x800143B0: sw          $t7, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r15;
    // 0x800143B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800143B8:
    // 0x800143B8: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x800143BC: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x800143C0: jalr        $t9
    // 0x800143C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800143C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800143C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800143CC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800143D0: bne         $s2, $s4, L_8001421C
    if (ctx->r18 != ctx->r20) {
        // 0x800143D4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8001421C;
    }
    // 0x800143D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800143D8:
    // 0x800143D8: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800143DC: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800143E0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800143E4: addiu       $t0, $t8, -0x2
    ctx->r8 = ADD32(ctx->r24, -0X2);
    // 0x800143E8: addiu       $t3, $t6, -0x2
    ctx->r11 = ADD32(ctx->r14, -0X2);
    // 0x800143EC: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x800143F0: bne         $t3, $t1, L_800141E8
    if (ctx->r11 != ctx->r9) {
        // 0x800143F4: sw          $t0, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r8;
            goto L_800141E8;
    }
    // 0x800143F4: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
L_800143F8:
    // 0x800143F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800143FC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80014400: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80014404: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80014408: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8001440C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80014410: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80014414: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80014418: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8001441C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80014420: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80014424: jr          $ra
    // 0x80014428: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80014428: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8001442C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001442C: jr          $ra
    // 0x80014430: nop

    return;
    // 0x80014430: nop

;}
RECOMP_FUNC void func_80014434(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014434: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80014438: sw          $fp, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r30;
    // 0x8001443C: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    // 0x80014440: sw          $s6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r22;
    // 0x80014444: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80014448: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x8001444C: lui         $s7, 0x800B
    ctx->r23 = S32(0X800B << 16);
    // 0x80014450: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x80014454: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x80014458: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8001445C: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x80014460: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x80014464: addiu       $fp, $fp, -0x6212
    ctx->r30 = ADD32(ctx->r30, -0X6212);
    // 0x80014468: addiu       $s7, $s7, -0x6252
    ctx->r23 = ADD32(ctx->r23, -0X6252);
    // 0x8001446C: addiu       $s2, $sp, 0x64
    ctx->r18 = ADD32(ctx->r29, 0X64);
    // 0x80014470: addiu       $s3, $sp, 0x4C
    ctx->r19 = ADD32(ctx->r29, 0X4C);
    // 0x80014474: addiu       $s6, $zero, 0x1F
    ctx->r22 = ADD32(0, 0X1F);
    // 0x80014478: addiu       $t3, $sp, 0x7C
    ctx->r11 = ADD32(ctx->r29, 0X7C);
L_8001447C:
    // 0x8001447C: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x80014480: lhu         $v1, 0x0($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X0);
    // 0x80014484: addiu       $s7, $s7, -0x2
    ctx->r23 = ADD32(ctx->r23, -0X2);
    // 0x80014488: beq         $v0, $v1, L_800146FC
    if (ctx->r2 == ctx->r3) {
        // 0x8001448C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_800146FC;
    }
    // 0x8001448C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80014490: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80014494: lw          $t8, -0x5DD0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5DD0);
    // 0x80014498: sllv        $t7, $t6, $s6
    ctx->r15 = S32(ctx->r14 << (ctx->r22 & 31));
    // 0x8001449C: and         $t9, $t7, $t8
    ctx->r25 = ctx->r15 & ctx->r24;
    // 0x800144A0: beq         $t9, $zero, L_800146FC
    if (ctx->r25 == 0) {
        // 0x800144A4: subu        $s4, $v1, $v0
        ctx->r20 = SUB32(ctx->r3, ctx->r2);
            goto L_800146FC;
    }
    // 0x800144A4: subu        $s4, $v1, $v0
    ctx->r20 = SUB32(ctx->r3, ctx->r2);
    // 0x800144A8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800144AC: addiu       $t7, $t7, -0x6A90
    ctx->r15 = ADD32(ctx->r15, -0X6A90);
    // 0x800144B0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x800144B4: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x800144B8: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x800144BC: addiu       $s0, $s4, -0x1
    ctx->r16 = ADD32(ctx->r20, -0X1);
    // 0x800144C0: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x800144C4: or          $t2, $s1, $zero
    ctx->r10 = ctx->r17 | 0;
    // 0x800144C8: or          $s5, $s4, $zero
    ctx->r21 = ctx->r20 | 0;
L_800144CC:
    // 0x800144CC: subu        $t8, $s0, $t5
    ctx->r24 = SUB32(ctx->r16, ctx->r13);
    // 0x800144D0: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x800144D4: beq         $at, $zero, L_8001450C
    if (ctx->r1 == 0) {
        // 0x800144D8: addu        $t7, $t5, $s0
        ctx->r15 = ADD32(ctx->r13, ctx->r16);
            goto L_8001450C;
    }
    // 0x800144D8: addu        $t7, $t5, $s0
    ctx->r15 = ADD32(ctx->r13, ctx->r16);
    // 0x800144DC: bne         $t4, $zero, L_800144F0
    if (ctx->r12 != 0) {
        // 0x800144E0: addiu       $t4, $t4, -0x1
        ctx->r12 = ADD32(ctx->r12, -0X1);
            goto L_800144F0;
    }
    // 0x800144E0: addiu       $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
    // 0x800144E4: b           L_80014650
    // 0x800144E8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
        goto L_80014650;
    // 0x800144E8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800144EC: addiu       $t4, $t4, -0x1
    ctx->r12 = ADD32(ctx->r12, -0X1);
L_800144F0:
    // 0x800144F0: sll         $v0, $t4, 1
    ctx->r2 = S32(ctx->r12 << 1);
    // 0x800144F4: addu        $t9, $s2, $v0
    ctx->r25 = ADD32(ctx->r18, ctx->r2);
    // 0x800144F8: addu        $t6, $s3, $v0
    ctx->r14 = ADD32(ctx->r19, ctx->r2);
    // 0x800144FC: lh          $t5, 0x0($t9)
    ctx->r13 = MEM_H(ctx->r25, 0X0);
    // 0x80014500: lh          $s0, 0x0($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X0);
    // 0x80014504: nop

    // 0x80014508: addu        $t7, $t5, $s0
    ctx->r15 = ADD32(ctx->r13, ctx->r16);
L_8001450C:
    // 0x8001450C: bgez        $t7, L_8001451C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80014510: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_8001451C;
    }
    // 0x80014510: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80014514: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x80014518: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_8001451C:
    // 0x8001451C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80014520: addu        $t6, $s1, $t9
    ctx->r14 = ADD32(ctx->r17, ctx->r25);
    // 0x80014524: sll         $v1, $t5, 2
    ctx->r3 = S32(ctx->r13 << 2);
    // 0x80014528: sll         $a2, $s0, 2
    ctx->r6 = S32(ctx->r16 << 2);
    // 0x8001452C: lh          $a1, 0x2($t6)
    ctx->r5 = MEM_H(ctx->r14, 0X2);
    // 0x80014530: or          $t1, $t5, $zero
    ctx->r9 = ctx->r13 | 0;
    // 0x80014534: or          $t0, $s0, $zero
    ctx->r8 = ctx->r16 | 0;
    // 0x80014538: addu        $a0, $s1, $a2
    ctx->r4 = ADD32(ctx->r17, ctx->r6);
    // 0x8001453C: addu        $a3, $s1, $v1
    ctx->r7 = ADD32(ctx->r17, ctx->r3);
L_80014540:
    // 0x80014540: lh          $t7, 0x2($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X2);
    // 0x80014544: addu        $v0, $t2, $v1
    ctx->r2 = ADD32(ctx->r10, ctx->r3);
    // 0x80014548: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8001454C: beq         $at, $zero, L_80014570
    if (ctx->r1 == 0) {
        // 0x80014550: nop
    
            goto L_80014570;
    }
    // 0x80014550: nop

L_80014554:
    // 0x80014554: lh          $t8, 0x6($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6);
    // 0x80014558: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8001455C: slt         $at, $t8, $a1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80014560: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80014564: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80014568: bne         $at, $zero, L_80014554
    if (ctx->r1 != 0) {
        // 0x8001456C: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80014554;
    }
    // 0x8001456C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
L_80014570:
    // 0x80014570: lh          $t9, 0x2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2);
    // 0x80014574: addu        $v0, $t2, $a2
    ctx->r2 = ADD32(ctx->r10, ctx->r6);
    // 0x80014578: slt         $at, $a1, $t9
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8001457C: beq         $at, $zero, L_800145A0
    if (ctx->r1 == 0) {
        // 0x80014580: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800145A0;
    }
    // 0x80014580: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_80014584:
    // 0x80014584: lh          $t6, -0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, -0X2);
    // 0x80014588: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8001458C: slt         $at, $a1, $t6
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80014590: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80014594: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80014598: bne         $at, $zero, L_80014584
    if (ctx->r1 != 0) {
        // 0x8001459C: addiu       $a0, $a0, -0x4
        ctx->r4 = ADD32(ctx->r4, -0X4);
            goto L_80014584;
    }
    // 0x8001459C: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
L_800145A0:
    // 0x800145A0: slt         $at, $t1, $t0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800145A4: beq         $at, $zero, L_800145E8
    if (ctx->r1 == 0) {
        // 0x800145A8: addiu       $a2, $a2, -0x4
        ctx->r6 = ADD32(ctx->r6, -0X4);
            goto L_800145E8;
    }
    // 0x800145A8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x800145AC: lwl         $at, 0x0($a3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r7, 0X0);
    // 0x800145B0: lwr         $at, 0x3($a3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r7, 0X3);
    // 0x800145B4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800145B8: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x800145BC: lwl         $at, 0x0($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X0);
    // 0x800145C0: lwr         $at, 0x3($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X3);
    // 0x800145C4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800145C8: swl         $at, -0x4($a3)
    do_swl(rdram, -0X4, ctx->r7, ctx->r1);
    // 0x800145CC: swr         $at, -0x1($a3)
    do_swr(rdram, -0X1, ctx->r7, ctx->r1);
    // 0x800145D0: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x800145D4: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x800145D8: swl         $at, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, ctx->r1);
    // 0x800145DC: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x800145E0: b           L_80014540
    // 0x800145E4: swr         $at, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r1);
        goto L_80014540;
    // 0x800145E4: swr         $at, 0x7($a0)
    do_swr(rdram, 0X7, ctx->r4, ctx->r1);
L_800145E8:
    // 0x800145E8: subu        $v0, $s0, $t0
    ctx->r2 = SUB32(ctx->r16, ctx->r8);
    // 0x800145EC: subu        $v1, $t1, $t5
    ctx->r3 = SUB32(ctx->r9, ctx->r13);
    // 0x800145F0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800145F4: beq         $at, $zero, L_80014624
    if (ctx->r1 == 0) {
        // 0x800145F8: slti        $at, $v1, 0xB
        ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_80014624;
    }
    // 0x800145F8: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x800145FC: bne         $at, $zero, L_8001461C
    if (ctx->r1 != 0) {
        // 0x80014600: sll         $v0, $t4, 1
        ctx->r2 = S32(ctx->r12 << 1);
            goto L_8001461C;
    }
    // 0x80014600: sll         $v0, $t4, 1
    ctx->r2 = S32(ctx->r12 << 1);
    // 0x80014604: addu        $t9, $s2, $v0
    ctx->r25 = ADD32(ctx->r18, ctx->r2);
    // 0x80014608: sh          $t5, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r13;
    // 0x8001460C: addiu       $t6, $t1, -0x1
    ctx->r14 = ADD32(ctx->r9, -0X1);
    // 0x80014610: addu        $t7, $s3, $v0
    ctx->r15 = ADD32(ctx->r19, ctx->r2);
    // 0x80014614: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x80014618: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
L_8001461C:
    // 0x8001461C: b           L_800144CC
    // 0x80014620: addiu       $t5, $t0, 0x1
    ctx->r13 = ADD32(ctx->r8, 0X1);
        goto L_800144CC;
    // 0x80014620: addiu       $t5, $t0, 0x1
    ctx->r13 = ADD32(ctx->r8, 0X1);
L_80014624:
    // 0x80014624: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80014628: bne         $at, $zero, L_80014648
    if (ctx->r1 != 0) {
        // 0x8001462C: sll         $v0, $t4, 1
        ctx->r2 = S32(ctx->r12 << 1);
            goto L_80014648;
    }
    // 0x8001462C: sll         $v0, $t4, 1
    ctx->r2 = S32(ctx->r12 << 1);
    // 0x80014630: addiu       $t8, $t0, 0x1
    ctx->r24 = ADD32(ctx->r8, 0X1);
    // 0x80014634: addu        $t9, $s2, $v0
    ctx->r25 = ADD32(ctx->r18, ctx->r2);
    // 0x80014638: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x8001463C: addu        $t6, $s3, $v0
    ctx->r14 = ADD32(ctx->r19, ctx->r2);
    // 0x80014640: sh          $s0, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r16;
    // 0x80014644: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
L_80014648:
    // 0x80014648: b           L_800144CC
    // 0x8001464C: addiu       $s0, $t1, -0x1
    ctx->r16 = ADD32(ctx->r9, -0X1);
        goto L_800144CC;
    // 0x8001464C: addiu       $s0, $t1, -0x1
    ctx->r16 = ADD32(ctx->r9, -0X1);
L_80014650:
    // 0x80014650: slti        $at, $s4, 0x2
    ctx->r1 = SIGNED(ctx->r20) < 0X2 ? 1 : 0;
    // 0x80014654: bne         $at, $zero, L_800146FC
    if (ctx->r1 != 0) {
        // 0x80014658: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800146FC;
    }
    // 0x80014658: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8001465C: addiu       $a3, $s1, 0x4
    ctx->r7 = ADD32(ctx->r17, 0X4);
L_80014660:
    // 0x80014660: lwl         $at, 0x0($a3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r7, 0X0);
    // 0x80014664: lwr         $at, 0x3($a3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r7, 0X3);
    // 0x80014668: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8001466C: bltz        $v0, L_800146D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80014670: sw          $at, 0x0($t3)
        MEM_W(0X0, ctx->r11) = ctx->r1;
            goto L_800146D8;
    }
    // 0x80014670: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x80014674: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80014678: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x8001467C: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x80014680: lh          $t9, 0x7E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X7E);
    // 0x80014684: sll         $a2, $t0, 2
    ctx->r6 = S32(ctx->r8 << 2);
    // 0x80014688: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8001468C: beq         $at, $zero, L_800146D8
    if (ctx->r1 == 0) {
        // 0x80014690: addu        $a0, $s1, $a2
        ctx->r4 = ADD32(ctx->r17, ctx->r6);
            goto L_800146D8;
    }
    // 0x80014690: addu        $a0, $s1, $a2
    ctx->r4 = ADD32(ctx->r17, ctx->r6);
    // 0x80014694: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
L_80014698:
    // 0x80014698: lwl         $at, 0x0($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X0);
    // 0x8001469C: lwr         $at, 0x3($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X3);
    // 0x800146A0: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x800146A4: swl         $at, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r1);
    // 0x800146A8: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x800146AC: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x800146B0: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800146B4: bltz        $t0, L_800146D8
    if (SIGNED(ctx->r8) < 0) {
        // 0x800146B8: swr         $at, 0x7($v1)
        do_swr(rdram, 0X7, ctx->r3, ctx->r1);
            goto L_800146D8;
    }
    // 0x800146B8: swr         $at, 0x7($v1)
    do_swr(rdram, 0X7, ctx->r3, ctx->r1);
    // 0x800146BC: addu        $t8, $t2, $a2
    ctx->r24 = ADD32(ctx->r10, ctx->r6);
    // 0x800146C0: lh          $t6, 0x2($t8)
    ctx->r14 = MEM_H(ctx->r24, 0X2);
    // 0x800146C4: lh          $t9, 0x7E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X7E);
    // 0x800146C8: nop

    // 0x800146CC: slt         $at, $t9, $t6
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800146D0: bne         $at, $zero, L_80014698
    if (ctx->r1 != 0) {
        // 0x800146D4: nop
    
            goto L_80014698;
    }
    // 0x800146D4: nop

L_800146D8:
    // 0x800146D8: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x800146DC: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x800146E0: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x800146E4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800146E8: swl         $at, 0x4($t8)
    do_swl(rdram, 0X4, ctx->r24, ctx->r1);
    // 0x800146EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800146F0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800146F4: bne         $t1, $s5, L_80014660
    if (ctx->r9 != ctx->r21) {
        // 0x800146F8: swr         $at, 0x7($t8)
        do_swr(rdram, 0X7, ctx->r24, ctx->r1);
            goto L_80014660;
    }
    // 0x800146F8: swr         $at, 0x7($t8)
    do_swr(rdram, 0X7, ctx->r24, ctx->r1);
L_800146FC:
    // 0x800146FC: addiu       $s6, $s6, -0x1
    ctx->r22 = ADD32(ctx->r22, -0X1);
    // 0x80014700: bgez        $s6, L_8001447C
    if (SIGNED(ctx->r22) >= 0) {
        // 0x80014704: addiu       $fp, $fp, -0x2
        ctx->r30 = ADD32(ctx->r30, -0X2);
            goto L_8001447C;
    }
    // 0x80014704: addiu       $fp, $fp, -0x2
    ctx->r30 = ADD32(ctx->r30, -0X2);
    // 0x80014708: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x8001470C: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x80014710: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x80014714: lw          $s3, 0x10($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X10);
    // 0x80014718: lw          $s4, 0x14($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X14);
    // 0x8001471C: lw          $s5, 0x18($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X18);
    // 0x80014720: lw          $s6, 0x1C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X1C);
    // 0x80014724: lw          $s7, 0x20($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X20);
    // 0x80014728: lw          $fp, 0x24($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X24);
    // 0x8001472C: jr          $ra
    // 0x80014730: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80014730: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_80014734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014734: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014738: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8001473C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80014740: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80014744: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80014748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001474C: addiu       $a2, $a2, -0x5DD0
    ctx->r6 = ADD32(ctx->r6, -0X5DD0);
    // 0x80014750: addiu       $v1, $v1, -0x5E10
    ctx->r3 = ADD32(ctx->r3, -0X5E10);
    // 0x80014754: addiu       $a1, $a1, -0x6290
    ctx->r5 = ADD32(ctx->r5, -0X6290);
    // 0x80014758: addiu       $a0, $a0, -0x6250
    ctx->r4 = ADD32(ctx->r4, -0X6250);
    // 0x8001475C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80014760:
    // 0x80014760: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x80014764: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80014768: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x8001476C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80014770: lhu         $t7, 0x2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X2);
    // 0x80014774: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x80014778: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x8001477C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80014780: lhu         $t8, 0x4($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X4);
    // 0x80014784: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80014788: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8001478C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80014790: lhu         $t9, 0x6($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X6);
    // 0x80014794: sh          $v0, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r2;
    // 0x80014798: sh          $v0, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r2;
    // 0x8001479C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x800147A0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800147A4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800147A8: bne         $v1, $a2, L_80014760
    if (ctx->r3 != ctx->r6) {
        // 0x800147AC: addu        $v0, $v0, $t9
        ctx->r2 = ADD32(ctx->r2, ctx->r25);
            goto L_80014760;
    }
    // 0x800147AC: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800147B0: slti        $at, $v0, 0x201
    ctx->r1 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x800147B4: bne         $at, $zero, L_800147C4
    if (ctx->r1 != 0) {
        // 0x800147B8: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_800147C4;
    }
    // 0x800147B8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800147BC: jal         0x80000FBC
    // 0x800147C0: addiu       $a0, $a0, 0x4F90
    ctx->r4 = ADD32(ctx->r4, 0X4F90);
    func_80000FBC(rdram, ctx);
        goto after_0;
    // 0x800147C0: addiu       $a0, $a0, 0x4F90
    ctx->r4 = ADD32(ctx->r4, 0X4F90);
    after_0:
L_800147C4:
    // 0x800147C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800147C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800147CC: sw          $zero, -0x5DCC($at)
    MEM_W(-0X5DCC, ctx->r1) = 0;
    // 0x800147D0: jr          $ra
    // 0x800147D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800147D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800147D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800147D8: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800147DC: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x800147E0: addiu       $t3, $t3, -0x6250
    ctx->r11 = ADD32(ctx->r11, -0X6250);
    // 0x800147E4: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x800147E8: addu        $v1, $t9, $t3
    ctx->r3 = ADD32(ctx->r25, ctx->r11);
    // 0x800147EC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x800147F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800147F4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800147F8: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x800147FC: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80014800: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x80014804: lw          $t2, 0x10($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X10);
    // 0x80014808: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8001480C: addiu       $t6, $t6, 0x7D70
    ctx->r14 = ADD32(ctx->r14, 0X7D70);
    // 0x80014810: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80014814: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80014818: addu        $t1, $t5, $t6
    ctx->r9 = ADD32(ctx->r13, ctx->r14);
    // 0x8001481C: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x80014820: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80014824: sh          $t4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r12;
    // 0x80014828: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x8001482C: beq         $t2, $zero, L_8001483C
    if (ctx->r10 == 0) {
        // 0x80014830: sw          $a3, 0x4($t1)
        MEM_W(0X4, ctx->r9) = ctx->r7;
            goto L_8001483C;
    }
    // 0x80014830: sw          $a3, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r7;
    // 0x80014834: b           L_80014850
    // 0x80014838: sw          $t2, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r10;
        goto L_80014850;
    // 0x80014838: sw          $t2, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r10;
L_8001483C:
    // 0x8001483C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80014840: addiu       $t8, $t8, -0x6210
    ctx->r24 = ADD32(ctx->r24, -0X6210);
    // 0x80014844: sll         $t7, $a0, 5
    ctx->r15 = S32(ctx->r4 << 5);
    // 0x80014848: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8001484C: sw          $t9, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r25;
L_80014850:
    // 0x80014850: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80014854: addiu       $a0, $a0, -0x5DCC
    ctx->r4 = ADD32(ctx->r4, -0X5DCC);
    // 0x80014858: lw          $t5, 0x0($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X0);
    // 0x8001485C: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80014860: addiu       $t4, $t4, -0x6A90
    ctx->r12 = ADD32(ctx->r12, -0X6A90);
    // 0x80014864: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x80014868: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x8001486C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80014870: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80014874: sh          $a1, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r5;
    // 0x80014878: jr          $ra
    // 0x8001487C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    return;
    // 0x8001487C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80014880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014880: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80014884: addiu       $v0, $v0, -0x5DD0
    ctx->r2 = ADD32(ctx->r2, -0X5DD0);
    // 0x80014888: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8001488C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80014890: sllv        $t8, $t7, $a0
    ctx->r24 = S32(ctx->r15 << (ctx->r4 & 31));
    // 0x80014894: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80014898: jr          $ra
    // 0x8001489C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    return;
    // 0x8001489C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_800148A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800148A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800148A4: addiu       $v0, $v0, -0x5DD0
    ctx->r2 = ADD32(ctx->r2, -0X5DD0);
    // 0x800148A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800148AC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800148B0: sllv        $t8, $t7, $a0
    ctx->r24 = S32(ctx->r15 << (ctx->r4 & 31));
    // 0x800148B4: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x800148B8: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x800148BC: jr          $ra
    // 0x800148C0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    return;
    // 0x800148C0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
;}
RECOMP_FUNC void func_800148C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800148C4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800148C8: addiu       $t7, $t7, -0x5E10
    ctx->r15 = ADD32(ctx->r15, -0X5E10);
    // 0x800148CC: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800148D0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800148D4: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x800148D8: nop

    // 0x800148DC: subu        $t9, $t8, $a1
    ctx->r25 = SUB32(ctx->r24, ctx->r5);
    // 0x800148E0: jr          $ra
    // 0x800148E4: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    return;
    // 0x800148E4: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_800148E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800148E8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x800148EC: addiu       $t7, $t7, -0x5E10
    ctx->r15 = ADD32(ctx->r15, -0X5E10);
    // 0x800148F0: sll         $t6, $a0, 1
    ctx->r14 = S32(ctx->r4 << 1);
    // 0x800148F4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x800148F8: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x800148FC: nop

    // 0x80014900: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x80014904: jr          $ra
    // 0x80014908: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    return;
    // 0x80014908: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_80014910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80014914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80014918: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8001491C: addiu       $a1, $a1, -0x1048
    ctx->r5 = ADD32(ctx->r5, -0X1048);
    // 0x80014920: jal         0x80073EF0
    // 0x80014924: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80014924: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x80014928: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8001492C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80014930: addiu       $v1, $v1, -0x7EA8
    ctx->r3 = ADD32(ctx->r3, -0X7EA8);
    // 0x80014934: addiu       $v0, $v0, 0x5558
    ctx->r2 = ADD32(ctx->r2, 0X5558);
L_80014938:
    // 0x80014938: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x8001493C: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80014940: sw          $zero, -0x4C($v0)
    MEM_W(-0X4C, ctx->r2) = 0;
    // 0x80014944: bne         $at, $zero, L_80014938
    if (ctx->r1 != 0) {
        // 0x80014948: sw          $zero, -0x50($v0)
        MEM_W(-0X50, ctx->r2) = 0;
            goto L_80014938;
    }
    // 0x80014948: sw          $zero, -0x50($v0)
    MEM_W(-0X50, ctx->r2) = 0;
    // 0x8001494C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80014950: addiu       $v0, $v0, 0x5558
    ctx->r2 = ADD32(ctx->r2, 0X5558);
    // 0x80014954: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80014958: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8001495C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80014960: addiu       $t1, $t1, -0x5DC0
    ctx->r9 = ADD32(ctx->r9, -0X5DC0);
    // 0x80014964: addiu       $v1, $v1, -0x5C78
    ctx->r3 = ADD32(ctx->r3, -0X5C78);
    // 0x80014968: addiu       $t6, $t6, 0x55B0
    ctx->r14 = ADD32(ctx->r14, 0X55B0);
    // 0x8001496C: addiu       $t7, $zero, 0x1FF
    ctx->r15 = ADD32(0, 0X1FF);
    // 0x80014970: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80014974: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80014978: sw          $v0, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->r2;
    // 0x8001497C: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x80014980: sw          $t7, 0x60($v0)
    MEM_W(0X60, ctx->r2) = ctx->r15;
    // 0x80014984: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80014988: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001498C: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80014990: sw          $t1, -0x5C7C($at)
    MEM_W(-0X5C7C, ctx->r1) = ctx->r9;
    // 0x80014994: addiu       $t2, $t2, -0x5DAC
    ctx->r10 = ADD32(ctx->r10, -0X5DAC);
    // 0x80014998: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8001499C: sw          $t2, -0x5C80($at)
    MEM_W(-0X5C80, ctx->r1) = ctx->r10;
    // 0x800149A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800149A4: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800149A8: addiu       $v0, $t9, -0x5D84
    ctx->r2 = ADD32(ctx->r25, -0X5D84);
    // 0x800149AC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800149B0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800149B4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800149B8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800149BC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800149C0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x800149C4: addiu       $t0, $t0, -0x5C44
    ctx->r8 = ADD32(ctx->r8, -0X5C44);
    // 0x800149C8: addiu       $a1, $a1, -0x5D34
    ctx->r5 = ADD32(ctx->r5, -0X5D34);
    // 0x800149CC: addiu       $a3, $a3, -0x5D48
    ctx->r7 = ADD32(ctx->r7, -0X5D48);
    // 0x800149D0: addiu       $a0, $a0, -0x5D5C
    ctx->r4 = ADD32(ctx->r4, -0X5D5C);
    // 0x800149D4: addiu       $a2, $a2, -0x5D98
    ctx->r6 = ADD32(ctx->r6, -0X5D98);
    // 0x800149D8: addiu       $v1, $v1, -0x5D70
    ctx->r3 = ADD32(ctx->r3, -0X5D70);
    // 0x800149DC: sw          $v0, -0x5D94($at)
    MEM_W(-0X5D94, ctx->r1) = ctx->r2;
    // 0x800149E0: sw          $t2, -0x5D98($at)
    MEM_W(-0X5D98, ctx->r1) = ctx->r10;
L_800149E4:
    // 0x800149E4: sw          $a1, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r5;
    // 0x800149E8: addiu       $a1, $a1, 0x50
    ctx->r5 = ADD32(ctx->r5, 0X50);
    // 0x800149EC: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x800149F0: sw          $v0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r2;
    // 0x800149F4: sw          $a3, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r7;
    // 0x800149F8: sw          $v1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r3;
    // 0x800149FC: sw          $a0, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r4;
    // 0x80014A00: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80014A04: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x80014A08: addiu       $a2, $a2, 0x50
    ctx->r6 = ADD32(ctx->r6, 0X50);
    // 0x80014A0C: addiu       $v1, $v1, 0x50
    ctx->r3 = ADD32(ctx->r3, 0X50);
    // 0x80014A10: addiu       $a0, $a0, 0x50
    ctx->r4 = ADD32(ctx->r4, 0X50);
    // 0x80014A14: addiu       $a3, $a3, 0x50
    ctx->r7 = ADD32(ctx->r7, 0X50);
    // 0x80014A18: bne         $a1, $t0, L_800149E4
    if (ctx->r5 != ctx->r8) {
        // 0x80014A1C: addiu       $v0, $v0, 0x50
        ctx->r2 = ADD32(ctx->r2, 0X50);
            goto L_800149E4;
    }
    // 0x80014A1C: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
    // 0x80014A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80014A24: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x80014A28: lui         $t5, 0x800B
    ctx->r13 = S32(0X800B << 16);
    // 0x80014A2C: addiu       $t4, $t4, -0x5D98
    ctx->r12 = ADD32(ctx->r12, -0X5D98);
    // 0x80014A30: addiu       $t5, $t5, -0x5CA8
    ctx->r13 = ADD32(ctx->r13, -0X5CA8);
    // 0x80014A34: sw          $zero, 0x130($t1)
    MEM_W(0X130, ctx->r9) = 0;
    // 0x80014A38: sw          $zero, 0x14($t1)
    MEM_W(0X14, ctx->r9) = 0;
    // 0x80014A3C: sw          $t4, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r12;
    // 0x80014A40: sw          $t5, 0x12C($t1)
    MEM_W(0X12C, ctx->r9) = ctx->r13;
    // 0x80014A44: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80014A48: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x80014A4C: jr          $ra
    // 0x80014A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80014A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80014A54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014A54: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x80014A58: jr          $ra
    return;
;}
RECOMP_FUNC void func_80014A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014A60: jr          $ra
    // 0x80014A64: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
    return;
    // 0x80014A64: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80014A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014A68: lw          $v0, 0x34($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X34);
    // 0x80014A6C: nop

    // 0x80014A70: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x80014A74: jr          $ra
    // 0x80014A78: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x80014A78: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void func_80014A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014A7C: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x80014A80: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x80014A84: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80014A88: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80014A8C: or          $t9, $t7, $t8
    ctx->r25 = ctx->r15 | ctx->r24;
    // 0x80014A90: jr          $ra
    // 0x80014A94: sw          $t9, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r25;
    return;
    // 0x80014A94: sw          $t9, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_80014A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014A98: lwc1        $f0, 0x30($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X30);
    // 0x80014A9C: jr          $ra
    // 0x80014AA0: nop

    return;
    // 0x80014AA0: nop

    // 0x80014AA4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80014AA8: jr          $ra
    // 0x80014AAC: swc1        $f12, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80014AAC: swc1        $f12, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f12.u32l;
    // 0x80014AB0: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
;}
