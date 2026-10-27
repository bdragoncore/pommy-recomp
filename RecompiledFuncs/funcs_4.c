#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80007C3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007C3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80007C40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007C44: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80007C48: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80007C4C: bne         $a2, $zero, L_80007C5C
    if (ctx->r6 != 0) {
        // 0x80007C50: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_80007C5C;
    }
    // 0x80007C50: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80007C54: b           L_80007C6C
    // 0x80007C58: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
        goto L_80007C6C;
    // 0x80007C58: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
L_80007C5C:
    // 0x80007C5C: sltiu       $at, $a2, 0x2000
    ctx->r1 = ctx->r6 < 0X2000 ? 1 : 0;
    // 0x80007C60: beq         $at, $zero, L_80007C70
    if (ctx->r1 == 0) {
        // 0x80007C64: addiu       $a0, $zero, 0x94
        ctx->r4 = ADD32(0, 0X94);
            goto L_80007C70;
    }
    // 0x80007C64: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
    // 0x80007C68: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
L_80007C6C:
    // 0x80007C6C: addiu       $a0, $zero, 0x94
    ctx->r4 = ADD32(0, 0X94);
L_80007C70:
    // 0x80007C70: jal         0x80006EC0
    // 0x80007C74: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_80006EC0(rdram, ctx);
        goto after_0;
    // 0x80007C74: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x80007C78: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80007C7C: jal         0x80006EC0
    // 0x80007C80: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80006EC0(rdram, ctx);
        goto after_1;
    // 0x80007C80: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80007C84: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80007C88: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80007C8C: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x80007C90: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80007C94: jal         0x80006DFC
    // 0x80007C98: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_80006DFC(rdram, ctx);
        goto after_2;
    // 0x80007C98: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_2:
    // 0x80007C9C: bne         $v0, $zero, L_80007CB0
    if (ctx->r2 != 0) {
        // 0x80007CA0: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_80007CB0;
    }
    // 0x80007CA0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80007CA4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80007CA8: jal         0x80000FBC
    // 0x80007CAC: addiu       $a0, $a0, 0x4BE0
    ctx->r4 = ADD32(ctx->r4, 0X4BE0);
    func_80000FBC(rdram, ctx);
        goto after_3;
    // 0x80007CAC: addiu       $a0, $a0, 0x4BE0
    ctx->r4 = ADD32(ctx->r4, 0X4BE0);
    after_3:
L_80007CB0:
    // 0x80007CB0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80007CB4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80007CB8: jal         0x80007214
    // 0x80007CBC: nop

    func_80007214(rdram, ctx);
        goto after_4;
    // 0x80007CBC: nop

    after_4:
    // 0x80007CC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80007CC4: jal         0x8000701C
    // 0x80007CC8: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    func_8000701C(rdram, ctx);
        goto after_5;
    // 0x80007CC8: addiu       $a1, $zero, 0x94
    ctx->r5 = ADD32(0, 0X94);
    after_5:
    // 0x80007CCC: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80007CD0: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80007CD4: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x80007CD8: sw          $t9, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r25;
    // 0x80007CDC: lhu         $t0, 0x2E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2E);
    // 0x80007CE0: sw          $zero, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = 0;
    // 0x80007CE4: sh          $t0, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r8;
    // 0x80007CE8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80007CEC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80007CF0: jal         0x8000701C
    // 0x80007CF4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8000701C(rdram, ctx);
        goto after_6;
    // 0x80007CF4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_6:
    // 0x80007CF8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80007CFC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80007D00: lui         $t1, 0xDBDB
    ctx->r9 = S32(0XDBDB << 16);
    // 0x80007D04: ori         $t1, $t1, 0x7272
    ctx->r9 = ctx->r9 | 0X7272;
    // 0x80007D08: sw          $v0, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r2;
    // 0x80007D0C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80007D10: sw          $a1, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r5;
    // 0x80007D14: sw          $a1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r5;
    // 0x80007D18: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80007D1C: lw          $t2, 0x30($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X30);
    // 0x80007D20: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80007D24: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80007D28: addiu       $t5, $t4, -0x8
    ctx->r13 = ADD32(ctx->r12, -0X8);
    // 0x80007D2C: sw          $t5, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->r13;
    // 0x80007D30: sw          $zero, 0x90($a2)
    MEM_W(0X90, ctx->r6) = 0;
    // 0x80007D34: lw          $v1, 0x59BC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X59BC);
    // 0x80007D38: lui         $t0, 0x800A
    ctx->r8 = S32(0X800A << 16);
    // 0x80007D3C: beq         $v1, $zero, L_80007DD0
    if (ctx->r3 == 0) {
        // 0x80007D40: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80007DD0;
    }
    // 0x80007D40: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80007D44: lhu         $a1, 0x28($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X28);
    // 0x80007D48: lhu         $t6, 0x28($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X28);
    // 0x80007D4C: nop

    // 0x80007D50: slt         $at, $t6, $a1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80007D54: bne         $at, $zero, L_80007DD0
    if (ctx->r1 != 0) {
        // 0x80007D58: nop
    
            goto L_80007DD0;
    }
    // 0x80007D58: nop

    // 0x80007D5C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80007D60: nop

    // 0x80007D64: beq         $v0, $zero, L_80007DAC
    if (ctx->r2 == 0) {
        // 0x80007D68: nop
    
            goto L_80007DAC;
    }
    // 0x80007D68: nop

    // 0x80007D6C: lhu         $t7, 0x28($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X28);
    // 0x80007D70: nop

    // 0x80007D74: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80007D78: bne         $at, $zero, L_80007DAC
    if (ctx->r1 != 0) {
        // 0x80007D7C: nop
    
            goto L_80007DAC;
    }
    // 0x80007D7C: nop

L_80007D80:
    // 0x80007D80: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80007D84: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80007D88: nop

    // 0x80007D8C: beq         $v0, $zero, L_80007DAC
    if (ctx->r2 == 0) {
        // 0x80007D90: nop
    
            goto L_80007DAC;
    }
    // 0x80007D90: nop

    // 0x80007D94: lhu         $t8, 0x28($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X28);
    // 0x80007D98: lhu         $t9, 0x28($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X28);
    // 0x80007D9C: nop

    // 0x80007DA0: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80007DA4: beq         $at, $zero, L_80007D80
    if (ctx->r1 == 0) {
        // 0x80007DA8: nop
    
            goto L_80007D80;
    }
    // 0x80007DA8: nop

L_80007DAC:
    // 0x80007DAC: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80007DB0: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x80007DB4: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80007DB8: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80007DBC: nop

    // 0x80007DC0: beq         $a0, $zero, L_80007DEC
    if (ctx->r4 == 0) {
        // 0x80007DC4: nop
    
            goto L_80007DEC;
    }
    // 0x80007DC4: nop

    // 0x80007DC8: b           L_80007DEC
    // 0x80007DCC: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
        goto L_80007DEC;
    // 0x80007DCC: sw          $a2, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r6;
L_80007DD0:
    // 0x80007DD0: lw          $t0, 0x59BC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X59BC);
    // 0x80007DD4: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80007DD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80007DDC: sw          $t0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r8;
    // 0x80007DE0: beq         $v1, $zero, L_80007DEC
    if (ctx->r3 == 0) {
        // 0x80007DE4: sw          $a2, 0x59BC($at)
        MEM_W(0X59BC, ctx->r1) = ctx->r6;
            goto L_80007DEC;
    }
    // 0x80007DE4: sw          $a2, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = ctx->r6;
    // 0x80007DE8: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
L_80007DEC:
    // 0x80007DEC: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80007DF0: addiu       $v1, $v1, 0x59C4
    ctx->r3 = ADD32(ctx->r3, 0X59C4);
    // 0x80007DF4: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x80007DF8: sw          $zero, 0xC($a2)
    MEM_W(0XC, ctx->r6) = 0;
    // 0x80007DFC: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x80007E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007E04: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80007E08: sh          $t2, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r10;
    // 0x80007E0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80007E10: jr          $ra
    // 0x80007E14: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x80007E14: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void func_80007E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007E18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80007E1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80007E20: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80007E24: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x80007E28: jal         0x80007C3C
    // 0x80007E2C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80007C3C(rdram, ctx);
        goto after_0;
    // 0x80007E2C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x80007E30: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80007E34: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80007E38: jal         0x80007BD4
    // 0x80007E3C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80007BD4(rdram, ctx);
        goto after_1;
    // 0x80007E3C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x80007E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80007E44: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80007E48: jr          $ra
    // 0x80007E4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80007E4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80007E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007E50: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80007E54: sh          $zero, 0x59C4($at)
    MEM_H(0X59C4, ctx->r1) = 0;
    // 0x80007E58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80007E5C: jr          $ra
    // 0x80007E60: sw          $zero, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = 0;
    return;
    // 0x80007E60: sw          $zero, 0x59BC($at)
    MEM_W(0X59BC, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80007E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007E70: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80007E74: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80007E78: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80007E7C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80007E80: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80007E84: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80007E88: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80007E8C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80007E90: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80007E94: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80007E98: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80007E9C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80007EA0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80007EA4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80007EA8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80007EAC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80007EB0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80007EB4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80007EB8: jal         0x80010744
    // 0x80007EBC: addiu       $a0, $a0, 0x5EC0
    ctx->r4 = ADD32(ctx->r4, 0X5EC0);
    func_80010744(rdram, ctx);
        goto after_0;
    // 0x80007EBC: addiu       $a0, $a0, 0x5EC0
    ctx->r4 = ADD32(ctx->r4, 0X5EC0);
    after_0:
    // 0x80007EC0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80007EC4: lwc1        $f26, 0x4D70($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X4D70);
    // 0x80007EC8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80007ECC: lwc1        $f24, 0x4D74($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X4D74);
    // 0x80007ED0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80007ED4: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80007ED8: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80007EDC: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80007EE0: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x80007EE4: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80007EE8: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x80007EEC: lwc1        $f22, 0x4D78($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X4D78);
    // 0x80007EF0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80007EF4: addiu       $s6, $s6, -0x1548
    ctx->r22 = ADD32(ctx->r22, -0X1548);
    // 0x80007EF8: addiu       $s3, $s3, -0x1578
    ctx->r19 = ADD32(ctx->r19, -0X1578);
    // 0x80007EFC: addiu       $s4, $s4, 0x5F78
    ctx->r20 = ADD32(ctx->r20, 0X5F78);
    // 0x80007F00: addiu       $s2, $s2, -0x15A8
    ctx->r18 = ADD32(ctx->r18, -0X15A8);
    // 0x80007F04: addiu       $s1, $s1, -0x15B8
    ctx->r17 = ADD32(ctx->r17, -0X15B8);
    // 0x80007F08: addiu       $s0, $s0, 0x5EC0
    ctx->r16 = ADD32(ctx->r16, 0X5EC0);
    // 0x80007F0C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_80007F10:
    // 0x80007F10: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x80007F14: lbu         $t7, 0x1($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1);
    // 0x80007F18: lbu         $t8, 0x2($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X2);
    // 0x80007F1C: lbu         $t9, 0x3($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X3);
    // 0x80007F20: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x80007F24: lwc1        $f6, 0x4($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X4);
    // 0x80007F28: lwc1        $f8, 0x8($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X8);
    // 0x80007F2C: sh          $s5, 0x9C($s0)
    MEM_H(0X9C, ctx->r16) = ctx->r21;
    // 0x80007F30: swc1        $f20, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->f20.u32l;
    // 0x80007F34: swc1        $f22, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = ctx->f22.u32l;
    // 0x80007F38: swc1        $f24, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = ctx->f24.u32l;
    // 0x80007F3C: swc1        $f26, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->f26.u32l;
    // 0x80007F40: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80007F44: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80007F48: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80007F4C: sb          $t6, 0xA8($s0)
    MEM_B(0XA8, ctx->r16) = ctx->r14;
    // 0x80007F50: sb          $t7, 0xA9($s0)
    MEM_B(0XA9, ctx->r16) = ctx->r15;
    // 0x80007F54: sb          $t8, 0xAA($s0)
    MEM_B(0XAA, ctx->r16) = ctx->r24;
    // 0x80007F58: sb          $t9, 0xAB($s0)
    MEM_B(0XAB, ctx->r16) = ctx->r25;
    // 0x80007F5C: swc1        $f4, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->f4.u32l;
    // 0x80007F60: swc1        $f6, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->f6.u32l;
    // 0x80007F64: jal         0x80076BF8
    // 0x80007F68: swc1        $f8, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f8.u32l;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80007F68: swc1        $f8, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->f8.u32l;
    after_1:
    // 0x80007F6C: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x80007F70: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x80007F74: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80007F78: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80007F7C: bne         $s3, $s6, L_80007F10
    if (ctx->r19 != ctx->r22) {
        // 0x80007F80: addiu       $s4, $s4, 0x38
        ctx->r20 = ADD32(ctx->r20, 0X38);
            goto L_80007F10;
    }
    // 0x80007F80: addiu       $s4, $s4, 0x38
    ctx->r20 = ADD32(ctx->r20, 0X38);
    // 0x80007F84: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80007F88: addiu       $v0, $v0, 0x5EC0
    ctx->r2 = ADD32(ctx->r2, 0X5EC0);
    // 0x80007F8C: lhu         $t0, 0x9C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X9C);
    // 0x80007F90: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80007F94: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80007F98: ori         $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 | 0X8000;
    // 0x80007F9C: sh          $t1, 0x9C($v0)
    MEM_H(0X9C, ctx->r2) = ctx->r9;
    // 0x80007FA0: addiu       $a1, $a1, -0x15BC
    ctx->r5 = ADD32(ctx->r5, -0X15BC);
    // 0x80007FA4: addiu       $a0, $a0, 0x60E4
    ctx->r4 = ADD32(ctx->r4, 0X60E4);
    // 0x80007FA8: jal         0x80076BF8
    // 0x80007FAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80007FAC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80007FB0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80007FB4: jal         0x80010730
    // 0x80007FB8: addiu       $a0, $a0, 0x5EC0
    ctx->r4 = ADD32(ctx->r4, 0X5EC0);
    func_80010730(rdram, ctx);
        goto after_3;
    // 0x80007FB8: addiu       $a0, $a0, 0x5EC0
    ctx->r4 = ADD32(ctx->r4, 0X5EC0);
    after_3:
    // 0x80007FBC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80007FC0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80007FC4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80007FC8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80007FCC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80007FD0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80007FD4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80007FD8: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80007FDC: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80007FE0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80007FE4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80007FE8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80007FEC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80007FF0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80007FF4: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80007FF8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80007FFC: jr          $ra
    // 0x80008000: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80008000: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80008004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80008008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000800C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80008010: addiu       $a1, $a1, -0x1548
    ctx->r5 = ADD32(ctx->r5, -0X1548);
    // 0x80008014: jal         0x80073EF0
    // 0x80008018: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80008018: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x8000801C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80008020: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80008024: sw          $zero, 0x5A60($at)
    MEM_W(0X5A60, ctx->r1) = 0;
    // 0x80008028: sll         $t8, $a0, 3
    ctx->r24 = S32(ctx->r4 << 3);
    // 0x8000802C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80008030: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80008034: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80008038: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8000803C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80008040: addiu       $t9, $t9, 0x5A60
    ctx->r25 = ADD32(ctx->r25, 0X5A60);
    // 0x80008044: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x80008048: sw          $t7, 0x5B3C($at)
    MEM_W(0X5B3C, ctx->r1) = ctx->r15;
    // 0x8000804C: sw          $t6, 0x5B38($at)
    MEM_W(0X5B38, ctx->r1) = ctx->r14;
    // 0x80008050: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80008054: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80008058: sw          $v1, 0x1B8($v0)
    MEM_W(0X1B8, ctx->r2) = ctx->r3;
    // 0x8000805C: sw          $v1, 0x1BC($v0)
    MEM_W(0X1BC, ctx->r2) = ctx->r3;
    // 0x80008060: sw          $v1, 0x298($v0)
    MEM_W(0X298, ctx->r2) = ctx->r3;
    // 0x80008064: sw          $v1, 0x29C($v0)
    MEM_W(0X29C, ctx->r2) = ctx->r3;
    // 0x80008068: sw          $v1, 0x378($v0)
    MEM_W(0X378, ctx->r2) = ctx->r3;
    // 0x8000806C: sw          $v1, 0x37C($v0)
    MEM_W(0X37C, ctx->r2) = ctx->r3;
    // 0x80008070: sw          $zero, 0xE0($v0)
    MEM_W(0XE0, ctx->r2) = 0;
    // 0x80008074: sw          $zero, 0x1C0($v0)
    MEM_W(0X1C0, ctx->r2) = 0;
    // 0x80008078: sw          $zero, 0x2A0($v0)
    MEM_W(0X2A0, ctx->r2) = 0;
    // 0x8000807C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80008080: sw          $v1, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->r3;
    // 0x80008084: jal         0x80007E70
    // 0x80008088: sw          $v1, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r3;
    func_80007E70(rdram, ctx);
        goto after_1;
    // 0x80008088: sw          $v1, 0xDC($v0)
    MEM_W(0XDC, ctx->r2) = ctx->r3;
    after_1:
    // 0x8000808C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80008090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80008094: jr          $ra
    // 0x80008098: nop

    return;
    // 0x80008098: nop

;}
RECOMP_FUNC void func_8000809C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000809C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x800080A0: lwc1        $f4, 0x54($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X54);
    // 0x800080A4: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x800080A8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800080AC: lwc1        $f8, 0x64($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X64);
    // 0x800080B0: lwc1        $f12, 0x8($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X8);
    // 0x800080B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800080B8: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x800080BC: lwc1        $f8, 0x74($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X74);
    // 0x800080C0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800080C4: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800080C8: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x800080CC: lwc1        $f8, 0x84($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X84);
    // 0x800080D0: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800080D4: lwc1        $f4, 0x58($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X58);
    // 0x800080D8: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800080DC: lwc1        $f8, 0x68($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X68);
    // 0x800080E0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x800080E4: nop

    // 0x800080E8: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x800080EC: lwc1        $f8, 0x78($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X78);
    // 0x800080F0: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800080F4: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x800080F8: lwc1        $f8, 0x88($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X88);
    // 0x800080FC: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80008100: lwc1        $f4, 0x5C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X5C);
    // 0x80008104: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80008108: lwc1        $f8, 0x6C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8000810C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80008110: nop

    // 0x80008114: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80008118: lwc1        $f8, 0x7C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x8000811C: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80008120: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80008124: lwc1        $f8, 0x8C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8C);
    // 0x80008128: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8000812C: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x80008130: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80008134: lwc1        $f8, 0x70($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X70);
    // 0x80008138: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8000813C: nop

    // 0x80008140: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80008144: lwc1        $f8, 0x80($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X80);
    // 0x80008148: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8000814C: mul.s       $f6, $f12, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80008150: lwc1        $f8, 0x90($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X90);
    // 0x80008154: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80008158: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8000815C: swc1        $f4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f4.u32l;
    // 0x80008160: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x80008164: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80008168: nop

    // 0x8000816C: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x80008170: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80008174: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80008178: bgez        $t8, L_8000818C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8000817C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8000818C;
    }
    // 0x8000817C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80008180: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80008184: nop

    // 0x80008188: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8000818C:
    // 0x8000818C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80008190: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80008194: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80008198: mul.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8000819C: swc1        $f6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f6.u32l;
    // 0x800081A0: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x800081A4: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x800081A8: nop

    // 0x800081AC: subu        $t1, $t9, $t0
    ctx->r9 = SUB32(ctx->r25, ctx->r8);
    // 0x800081B0: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x800081B4: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x800081B8: bgez        $t2, L_800081CC
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800081BC: cvt.s.w     $f8, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800081CC;
    }
    // 0x800081BC: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800081C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800081C4: nop

    // 0x800081C8: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_800081CC:
    // 0x800081CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800081D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800081D4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800081D8: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800081DC: lwc1        $f8, 0xC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC);
    // 0x800081E0: nop

    // 0x800081E4: div.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f14.fl, ctx->f8.fl);
    // 0x800081E8: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x800081EC: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x800081F0: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x800081F4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800081F8: bgez        $v0, L_8000820C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800081FC: cvt.s.w     $f4, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8000820C;
    }
    // 0x800081FC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80008200: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80008204: nop

    // 0x80008208: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_8000820C:
    // 0x8000820C: add.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80008210: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80008214: swc1        $f10, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f10.u32l;
    // 0x80008218: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x8000821C: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80008220: div.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x80008224: lw          $t3, 0x8($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X8);
    // 0x80008228: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8000822C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80008230: sub.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80008234: bgez        $t3, L_80008248
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80008238: cvt.s.w     $f4, $f8
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80008248;
    }
    // 0x80008238: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000823C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80008240: nop

    // 0x80008244: add.s       $f4, $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f10.fl;
L_80008248:
    // 0x80008248: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8000824C: swc1        $f8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f8.u32l;
    // 0x80008250: lwc1        $f10, 0xC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80008254: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80008258: div.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8000825C: jr          $ra
    // 0x80008260: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    return;
    // 0x80008260: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_80008264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008264: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80008268: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000826C: sw          $t6, -0x1600($at)
    MEM_W(-0X1600, ctx->r1) = ctx->r14;
    // 0x80008270: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80008274: sw          $a0, -0x15FC($at)
    MEM_W(-0X15FC, ctx->r1) = ctx->r4;
    // 0x80008278: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000827C: sw          $a1, -0x15F8($at)
    MEM_W(-0X15F8, ctx->r1) = ctx->r5;
    // 0x80008280: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80008284: sw          $a2, -0x15F4($at)
    MEM_W(-0X15F4, ctx->r1) = ctx->r6;
    // 0x80008288: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000828C: lw          $t7, 0x10($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X10);
    // 0x80008290: sw          $a3, -0x15F0($at)
    MEM_W(-0X15F0, ctx->r1) = ctx->r7;
    // 0x80008294: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80008298: jr          $ra
    // 0x8000829C: sw          $t7, -0x15EC($at)
    MEM_W(-0X15EC, ctx->r1) = ctx->r15;
    return;
    // 0x8000829C: sw          $t7, -0x15EC($at)
    MEM_W(-0X15EC, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_800082A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800082A0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800082A4: jr          $ra
    // 0x800082A8: sw          $zero, -0x1600($at)
    MEM_W(-0X1600, ctx->r1) = 0;
    return;
    // 0x800082A8: sw          $zero, -0x1600($at)
    MEM_W(-0X1600, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800082AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800082AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800082B0: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800082B4: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x800082B8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800082BC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800082C0: lw          $a0, 0x12C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X12C);
    // 0x800082C4: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800082C8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800082CC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800082D0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800082D4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800082D8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800082DC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800082E0: jal         0x8000479C
    // 0x800082E4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8000479C(rdram, ctx);
        goto after_0;
    // 0x800082E4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800082E8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800082EC: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x800082F0: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x800082F4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800082F8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800082FC: addiu       $s4, $s4, 0x5EC0
    ctx->r20 = ADD32(ctx->r20, 0X5EC0);
    // 0x80008300: addiu       $s0, $s0, 0x5A60
    ctx->r16 = ADD32(ctx->r16, 0X5A60);
    // 0x80008304: lui         $s3, 0xED00
    ctx->r19 = S32(0XED00 << 16);
    // 0x80008308: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_8000830C:
    // 0x8000830C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80008310: nop

    // 0x80008314: beq         $t6, $zero, L_8000849C
    if (ctx->r14 == 0) {
        // 0x80008318: nop
    
            goto L_8000849C;
    }
    // 0x80008318: nop

    // 0x8000831C: lw          $t7, 0xDC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XDC);
    // 0x80008320: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80008324: beq         $s2, $t7, L_8000849C
    if (ctx->r18 == ctx->r15) {
        // 0x80008328: nop
    
            goto L_8000849C;
    }
    // 0x80008328: nop

    // 0x8000832C: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x80008330: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80008334: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80008338: bgez        $t8, L_80008350
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8000833C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80008350;
    }
    // 0x8000833C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80008340: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80008344: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80008348: nop

    // 0x8000834C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80008350:
    // 0x80008350: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80008354: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x80008358: nop

    // 0x8000835C: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x80008360: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80008364: nop

    // 0x80008368: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000836C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008370: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008374: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80008378: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000837C: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x80008380: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80008384: andi        $t1, $t0, 0xFFF
    ctx->r9 = ctx->r8 & 0XFFF;
    // 0x80008388: sll         $t2, $t1, 12
    ctx->r10 = S32(ctx->r9 << 12);
    // 0x8000838C: or          $t3, $t2, $s3
    ctx->r11 = ctx->r10 | ctx->r19;
    // 0x80008390: bgez        $t4, L_800083A4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80008394: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_800083A4;
    }
    // 0x80008394: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80008398: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000839C: nop

    // 0x800083A0: add.s       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f8.fl;
L_800083A4:
    // 0x800083A4: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800083A8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800083AC: nop

    // 0x800083B0: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800083B4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800083B8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800083BC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800083C0: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800083C4: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x800083C8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800083CC: andi        $t7, $t6, 0xFFF
    ctx->r15 = ctx->r14 & 0XFFF;
    // 0x800083D0: or          $t8, $t3, $t7
    ctx->r24 = ctx->r11 | ctx->r15;
    // 0x800083D4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800083D8: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x800083DC: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x800083E0: nop

    // 0x800083E4: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x800083E8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800083EC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x800083F0: bgez        $t2, L_80008404
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800083F4: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80008404;
    }
    // 0x800083F4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800083F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800083FC: nop

    // 0x80008400: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_80008404:
    // 0x80008404: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80008408: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8000840C: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x80008410: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80008414: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80008418: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8000841C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008420: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008424: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80008428: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000842C: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80008430: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x80008434: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80008438: andi        $t6, $t5, 0xFFF
    ctx->r14 = ctx->r13 & 0XFFF;
    // 0x8000843C: sll         $t3, $t6, 12
    ctx->r11 = S32(ctx->r14 << 12);
    // 0x80008440: bgez        $t0, L_80008458
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80008444: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80008458;
    }
    // 0x80008444: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80008448: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000844C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80008450: nop

    // 0x80008454: add.s       $f16, $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f8.fl;
L_80008458:
    // 0x80008458: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x8000845C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80008460: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80008464: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80008468: nop

    // 0x8000846C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80008470: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008474: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008478: nop

    // 0x8000847C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80008480: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80008484: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80008488: andi        $t4, $t2, 0xFFF
    ctx->r12 = ctx->r10 & 0XFFF;
    // 0x8000848C: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x80008490: jal         0x80015B10
    // 0x80008494: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    func_80015B10(rdram, ctx);
        goto after_1;
    // 0x80008494: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    after_1:
    // 0x80008498: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_8000849C:
    // 0x8000849C: addiu       $s0, $s0, 0xE0
    ctx->r16 = ADD32(ctx->r16, 0XE0);
    // 0x800084A0: bne         $s0, $s4, L_8000830C
    if (ctx->r16 != ctx->r20) {
        // 0x800084A4: nop
    
            goto L_8000830C;
    }
    // 0x800084A4: nop

    // 0x800084A8: lui         $t6, 0xDF00
    ctx->r14 = S32(0XDF00 << 16);
    // 0x800084AC: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x800084B0: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x800084B4: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800084B8: lw          $a0, 0x12C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X12C);
    // 0x800084BC: jal         0x80004688
    // 0x800084C0: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    func_80004688(rdram, ctx);
        goto after_2;
    // 0x800084C0: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    after_2:
    // 0x800084C4: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x800084C8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x800084CC: addiu       $t8, $t8, 0x72C0
    ctx->r24 = ADD32(ctx->r24, 0X72C0);
    // 0x800084D0: lui         $t7, 0xE100
    ctx->r15 = S32(0XE100 << 16);
    // 0x800084D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800084D8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800084DC: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800084E0: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x800084E4: lui         $t9, 0xDD00
    ctx->r25 = S32(0XDD00 << 16);
    // 0x800084E8: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x800084EC: addiu       $t0, $t0, -0x40A0
    ctx->r8 = ADD32(ctx->r8, -0X40A0);
    // 0x800084F0: ori         $t9, $t9, 0x7FF
    ctx->r25 = ctx->r25 | 0X7FF;
    // 0x800084F4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800084F8: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x800084FC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80008500: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80008504: or          $v1, $s5, $zero
    ctx->r3 = ctx->r21 | 0;
    // 0x80008508: sw          $s5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r21;
    // 0x8000850C: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80008510: lui         $a1, 0xDB06
    ctx->r5 = S32(0XDB06 << 16);
    // 0x80008514: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80008518: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8000851C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80008520: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80008524: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x80008528: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x8000852C: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x80008530: lui         $t2, 0xDE00
    ctx->r10 = S32(0XDE00 << 16);
    // 0x80008534: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x80008538: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8000853C: lw          $a0, 0x12C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X12C);
    // 0x80008540: jal         0x8000479C
    // 0x80008544: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    func_8000479C(rdram, ctx);
        goto after_3;
    // 0x80008544: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    after_3:
    // 0x80008548: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8000854C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80008550: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x80008554: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80008558: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8000855C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80008560: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80008564: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80008568: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8000856C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80008570: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80008574: jr          $ra
    // 0x80008578: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80008578: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8000857C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000857C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80008580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80008584: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80008588: lwc1        $f14, 0x10($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8000858C: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80008590: lwc1        $f0, 0x20($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80008594: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80008598: nop

    // 0x8000859C: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x800085A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800085A4: jal         0x8007A500
    // 0x800085A8: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x800085A8: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_0:
    // 0x800085AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800085B0: lwc1        $f23, 0x4D80($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X4D80);
    // 0x800085B4: lwc1        $f22, 0x4D84($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X4D84);
    // 0x800085B8: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x800085BC: nop

    // 0x800085C0: div.d       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f22.d, ctx->f4.d);
    // 0x800085C4: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800085C8: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    // 0x800085CC: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800085D0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800085D4: nop

    // 0x800085D8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800085DC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800085E0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800085E4: nop

    // 0x800085E8: cvt.w.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800085EC: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x800085F0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800085F4: sb          $t7, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r15;
    // 0x800085F8: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x800085FC: nop

    // 0x80008600: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80008604: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80008608: nop

    // 0x8000860C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80008610: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008614: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008618: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8000861C: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80008620: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008624: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80008628: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8000862C: sb          $t9, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r25;
    // 0x80008630: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80008634: nop

    // 0x80008638: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8000863C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008640: nop

    // 0x80008644: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80008648: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8000864C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80008650: sb          $t7, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = ctx->r15;
    // 0x80008654: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80008658: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8000865C: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80008660: lwc1        $f2, 0x24($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80008664: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80008668: nop

    // 0x8000866C: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80008670: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80008674: jal         0x8007A500
    // 0x80008678: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_1;
    // 0x80008678: add.s       $f12, $f10, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f6.fl;
    after_1:
    // 0x8000867C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80008680: nop

    // 0x80008684: div.d       $f4, $f22, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = DIV_D(ctx->f22.d, ctx->f8.d);
    // 0x80008688: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8000868C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80008690: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80008694: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80008698: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x8000869C: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800086A0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800086A4: nop

    // 0x800086A8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800086AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800086B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800086B4: nop

    // 0x800086B8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800086BC: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x800086C0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800086C4: sb          $t9, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r25;
    // 0x800086C8: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800086CC: nop

    // 0x800086D0: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800086D4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800086D8: nop

    // 0x800086DC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800086E0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800086E4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800086E8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800086EC: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800086F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800086F4: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x800086F8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800086FC: sb          $t7, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r15;
    // 0x80008700: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80008704: nop

    // 0x80008708: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8000870C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008710: nop

    // 0x80008714: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80008718: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8000871C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80008720: jal         0x8000F3CC
    // 0x80008724: sb          $t9, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r25;
    func_8000F3CC(rdram, ctx);
        goto after_2;
    // 0x80008724: sb          $t9, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r25;
    after_2:
    // 0x80008728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000872C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80008730: jr          $ra
    // 0x80008734: nop

    return;
    // 0x80008734: nop

;}
RECOMP_FUNC void func_80008738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000873C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80008740: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x80008744: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80008748: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x8000874C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80008750: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80008754: lw          $s3, 0x8($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X8);
    // 0x80008758: lw          $s4, 0xC($s1)
    ctx->r20 = MEM_W(ctx->r17, 0XC);
    // 0x8000875C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80008760: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x80008764: lw          $s5, 0x10($s1)
    ctx->r21 = MEM_W(ctx->r17, 0X10);
    // 0x80008768: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8000876C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80008770: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80008774: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80008778: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000877C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008780: lui         $at, 0xED00
    ctx->r1 = S32(0XED00 << 16);
    // 0x80008784: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80008788: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8000878C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80008790: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80008794: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80008798: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x8000879C: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800087A0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800087A4: or          $t6, $t9, $at
    ctx->r14 = ctx->r25 | ctx->r1;
    // 0x800087A8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800087AC: nop

    // 0x800087B0: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800087B4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800087B8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800087BC: nop

    // 0x800087C0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800087C4: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x800087C8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800087CC: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x800087D0: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x800087D4: addu        $t8, $s2, $s4
    ctx->r24 = ADD32(ctx->r18, ctx->r20);
    // 0x800087D8: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x800087DC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800087E0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800087E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800087E8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800087EC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800087F0: nop

    // 0x800087F4: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800087F8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800087FC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008800: nop

    // 0x80008804: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80008808: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8000880C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80008810: addu        $t9, $s3, $s5
    ctx->r25 = ADD32(ctx->r19, ctx->r21);
    // 0x80008814: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80008818: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x8000881C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80008820: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x80008824: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80008828: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8000882C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80008830: nop

    // 0x80008834: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80008838: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000883C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008840: nop

    // 0x80008844: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80008848: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x8000884C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80008850: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x80008854: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80008858: jal         0x800046F0
    // 0x8000885C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    func_800046F0(rdram, ctx);
        goto after_0;
    // 0x8000885C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    after_0:
    // 0x80008860: sll         $t9, $s4, 1
    ctx->r25 = S32(ctx->r20 << 1);
    // 0x80008864: sll         $t6, $s5, 1
    ctx->r14 = S32(ctx->r21 << 1);
    // 0x80008868: sll         $t7, $s2, 1
    ctx->r15 = S32(ctx->r18 << 1);
    // 0x8000886C: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x80008870: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
    // 0x80008874: addu        $t8, $t7, $s4
    ctx->r24 = ADD32(ctx->r15, ctx->r20);
    // 0x80008878: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8000887C: sll         $t6, $s3, 1
    ctx->r14 = S32(ctx->r19 << 1);
    // 0x80008880: sh          $t9, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r25;
    // 0x80008884: addu        $t7, $t6, $s5
    ctx->r15 = ADD32(ctx->r14, ctx->r21);
    // 0x80008888: addiu       $t9, $zero, 0x1FF
    ctx->r25 = ADD32(0, 0X1FF);
    // 0x8000888C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80008890: sh          $t9, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r25;
    // 0x80008894: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x80008898: lh          $t6, 0xC($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XC);
    // 0x8000889C: lh          $t7, 0xE($v0)
    ctx->r15 = MEM_H(ctx->r2, 0XE);
    // 0x800088A0: sh          $t8, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r24;
    // 0x800088A4: lui         $t8, 0xDC08
    ctx->r24 = S32(0XDC08 << 16);
    // 0x800088A8: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x800088AC: sh          $t6, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r14;
    // 0x800088B0: sh          $t7, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r15;
    // 0x800088B4: ori         $t8, $t8, 0x8
    ctx->r24 = ctx->r24 | 0X8;
    // 0x800088B8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800088BC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x800088C0: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800088C4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x800088C8: andi        $t6, $t9, 0x2
    ctx->r14 = ctx->r25 & 0X2;
    // 0x800088CC: beq         $t6, $zero, L_800088E0
    if (ctx->r14 == 0) {
        // 0x800088D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800088E0;
    }
    // 0x800088D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800088D4: jal         0x80004AE0
    // 0x800088D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80004AE0(rdram, ctx);
        goto after_1;
    // 0x800088D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x800088DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_800088E0:
    // 0x800088E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800088E4: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x800088E8: jal         0x8000F340
    // 0x800088EC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8000F340(rdram, ctx);
        goto after_2;
    // 0x800088EC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x800088F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800088F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800088F8: jr          $ra
    // 0x800088FC: nop

    return;
    // 0x800088FC: nop

;}
RECOMP_FUNC void func_80008900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008900: lwc1        $f20, 0x14($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80008904: lwc1        $f28, 0x28($a0)
    ctx->f28.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80008908: lwc1        $f22, 0x18($a0)
    ctx->f22.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8000890C: mul.s       $f4, $f20, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x80008910: lwc1        $f26, 0x24($a0)
    ctx->f26.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80008914: lwc1        $f24, 0x20($a0)
    ctx->f24.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80008918: lwc1        $f18, 0x10($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8000891C: mul.s       $f6, $f22, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x80008920: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80008924: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80008928: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000892C: mul.s       $f10, $f22, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f24.fl);
    // 0x80008930: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80008934: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80008938: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x8000893C: mul.s       $f4, $f18, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f28.fl);
    // 0x80008940: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80008944: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80008948: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000894C: mul.s       $f10, $f18, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f26.fl);
    // 0x80008950: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x80008954: mul.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f24.fl);
    // 0x80008958: sub.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8000895C: mul.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80008960: swc1        $f10, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f10.u32l;
    // 0x80008964: mul.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80008968: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8000896C: mul.s       $f4, $f14, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x80008970: add.s       $f30, $f6, $f4
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f30.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80008974: c.eq.s      $f16, $f30
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f16.fl == ctx->f30.fl;
    // 0x80008978: nop

    // 0x8000897C: bc1t        L_80008A60
    if (c1cs) {
        // 0x80008980: nop
    
            goto L_80008A60;
    }
    // 0x80008980: nop

    // 0x80008984: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80008988: lwc1        $f10, 0x8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8000898C: div.s       $f0, $f8, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f30.fl);
    // 0x80008990: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80008994: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x80008998: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8000899C: nop

    // 0x800089A0: mul.s       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x800089A4: swc1        $f8, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f8.u32l;
    // 0x800089A8: lwc1        $f10, 0x0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800089AC: swc1        $f16, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f16.u32l;
    // 0x800089B0: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800089B4: swc1        $f16, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f16.u32l;
    // 0x800089B8: swc1        $f16, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f16.u32l;
    // 0x800089BC: swc1        $f16, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->f16.u32l;
    // 0x800089C0: mul.s       $f4, $f14, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f26.fl);
    // 0x800089C4: swc1        $f6, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->f6.u32l;
    // 0x800089C8: swc1        $f16, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->f16.u32l;
    // 0x800089CC: swc1        $f16, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->f16.u32l;
    // 0x800089D0: mul.s       $f8, $f12, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f28.fl);
    // 0x800089D4: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x800089D8: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800089DC: nop

    // 0x800089E0: mul.s       $f4, $f12, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x800089E4: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x800089E8: mul.s       $f8, $f14, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x800089EC: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x800089F0: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800089F4: nop

    // 0x800089F8: mul.s       $f4, $f2, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f28.fl);
    // 0x800089FC: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    // 0x80008A00: mul.s       $f8, $f14, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f24.fl);
    // 0x80008A04: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80008A08: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80008A0C: nop

    // 0x80008A10: mul.s       $f4, $f14, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f18.fl);
    // 0x80008A14: swc1        $f6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f6.u32l;
    // 0x80008A18: mul.s       $f8, $f2, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f22.fl);
    // 0x80008A1C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80008A20: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80008A24: nop

    // 0x80008A28: mul.s       $f4, $f12, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f24.fl);
    // 0x80008A2C: swc1        $f6, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->f6.u32l;
    // 0x80008A30: mul.s       $f8, $f2, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f26.fl);
    // 0x80008A34: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80008A38: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80008A3C: nop

    // 0x80008A40: mul.s       $f4, $f2, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x80008A44: swc1        $f6, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f6.u32l;
    // 0x80008A48: mul.s       $f8, $f12, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x80008A4C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80008A50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80008A54: mul.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80008A58: swc1        $f4, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->f4.u32l;
    // 0x80008A5C: swc1        $f6, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f6.u32l;
L_80008A60:
    // 0x80008A60: jr          $ra
    // 0x80008A64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80008A64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80008A68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008A68: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80008A6C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80008A70: lw          $v1, -0x15C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15C0);
    // 0x80008A74: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80008A78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80008A7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80008A80: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80008A84: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80008A88: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80008A8C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80008A90: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80008A94: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80008A98: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80008A9C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80008AA0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80008AA4: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80008AA8: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80008AAC: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80008AB0: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80008AB4: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80008AB8: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80008ABC: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80008AC0: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80008AC4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80008AC8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80008ACC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80008AD0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80008AD4: beq         $v1, $at, L_80008AF0
    if (ctx->r3 == ctx->r1) {
        // 0x80008AD8: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80008AF0;
    }
    // 0x80008AD8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80008ADC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80008AE0: beq         $v0, $at, L_80008B10
    if (ctx->r2 == ctx->r1) {
        // 0x80008AE4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80008B10;
    }
    // 0x80008AE4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80008AE8: b           L_80008B24
    // 0x80008AEC: nop

        goto L_80008B24;
    // 0x80008AEC: nop

L_80008AF0:
    // 0x80008AF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80008AF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80008AF8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80008AFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80008B00: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x80008B04: b           L_80008B24
    // 0x80008B08: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
        goto L_80008B24;
    // 0x80008B08: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x80008B0C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_80008B10:
    // 0x80008B10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80008B14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80008B18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80008B1C: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x80008B20: swc1        $f10, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f10.u32l;
L_80008B24:
    // 0x80008B24: beq         $v1, $zero, L_80008B40
    if (ctx->r3 == 0) {
        // 0x80008B28: lui         $a0, 0x800A
        ctx->r4 = S32(0X800A << 16);
            goto L_80008B40;
    }
    // 0x80008B28: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80008B2C: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80008B30: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x80008B34: addiu       $a0, $a0, 0x6138
    ctx->r4 = ADD32(ctx->r4, 0X6138);
    // 0x80008B38: jal         0x8007A564
    // 0x80008B3C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    guScale(rdram, ctx);
        goto after_0;
    // 0x80008B3C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
L_80008B40:
    // 0x80008B40: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80008B44: lw          $a1, 0x6280($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6280);
    // 0x80008B48: jal         0x8000D844
    // 0x80008B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000D844(rdram, ctx);
        goto after_1;
    // 0x80008B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80008B50: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x80008B54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80008B58: addiu       $s6, $s6, 0x5A60
    ctx->r22 = ADD32(ctx->r22, 0X5A60);
L_80008B5C:
    // 0x80008B5C: lw          $t7, 0xD8($s6)
    ctx->r15 = MEM_W(ctx->r22, 0XD8);
    // 0x80008B60: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x80008B64: slti        $t8, $t7, 0x0
    ctx->r24 = SIGNED(ctx->r15) < 0X0 ? 1 : 0;
    // 0x80008B68: xori        $t8, $t8, 0x1
    ctx->r24 = ctx->r24 ^ 0X1;
    // 0x80008B6C: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x80008B70: beq         $t9, $zero, L_80008D14
    if (ctx->r25 == 0) {
        // 0x80008B74: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_80008D14;
    }
    // 0x80008B74: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80008B78: lw          $t7, -0x15C0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X15C0);
    // 0x80008B7C: addiu       $s7, $s6, 0x14
    ctx->r23 = ADD32(ctx->r22, 0X14);
    // 0x80008B80: beq         $t7, $zero, L_80008C94
    if (ctx->r15 == 0) {
        // 0x80008B84: addiu       $s2, $s6, 0x98
        ctx->r18 = ADD32(ctx->r22, 0X98);
            goto L_80008C94;
    }
    // 0x80008B84: addiu       $s2, $s6, 0x98
    ctx->r18 = ADD32(ctx->r22, 0X98);
    // 0x80008B88: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80008B8C: addiu       $a0, $a0, 0x61B8
    ctx->r4 = ADD32(ctx->r4, 0X61B8);
    // 0x80008B90: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80008B94: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80008B98: jal         0x80076BF8
    // 0x80008B9C: addiu       $fp, $s6, 0x54
    ctx->r30 = ADD32(ctx->r22, 0X54);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80008B9C: addiu       $fp, $s6, 0x54
    ctx->r30 = ADD32(ctx->r22, 0X54);
    after_2:
    // 0x80008BA0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80008BA4: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80008BA8: lw          $a3, 0xA4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XA4);
    // 0x80008BAC: addiu       $a0, $a0, 0x61B8
    ctx->r4 = ADD32(ctx->r4, 0X61B8);
    // 0x80008BB0: jal         0x8000D5D0
    // 0x80008BB4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8000D5D0(rdram, ctx);
        goto after_3;
    // 0x80008BB4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x80008BB8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80008BBC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80008BC0: addiu       $a0, $a0, 0x61B8
    ctx->r4 = ADD32(ctx->r4, 0X61B8);
    // 0x80008BC4: jal         0x80008900
    // 0x80008BC8: addiu       $a1, $a1, 0x61F8
    ctx->r5 = ADD32(ctx->r5, 0X61F8);
    func_80008900(rdram, ctx);
        goto after_4;
    // 0x80008BC8: addiu       $a1, $a1, 0x61F8
    ctx->r5 = ADD32(ctx->r5, 0X61F8);
    after_4:
    // 0x80008BCC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80008BD0: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80008BD4: addiu       $a1, $a1, 0x6178
    ctx->r5 = ADD32(ctx->r5, 0X6178);
    // 0x80008BD8: jal         0x8007A000
    // 0x80008BDC: addiu       $a0, $a0, 0x61F8
    ctx->r4 = ADD32(ctx->r4, 0X61F8);
    guMtxF2L(rdram, ctx);
        goto after_5;
    // 0x80008BDC: addiu       $a0, $a0, 0x61F8
    ctx->r4 = ADD32(ctx->r4, 0X61F8);
    after_5:
    // 0x80008BE0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80008BE4: addiu       $a0, $a0, 0x6178
    ctx->r4 = ADD32(ctx->r4, 0X6178);
    // 0x80008BE8: jal         0x80004A6C
    // 0x80008BEC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80004A6C(rdram, ctx);
        goto after_6;
    // 0x80008BEC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x80008BF0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80008BF4: lui         $t6, 0xDB06
    ctx->r14 = S32(0XDB06 << 16);
    // 0x80008BF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80008BFC: addu        $t8, $v0, $at
    ctx->r24 = ADD32(ctx->r2, ctx->r1);
    // 0x80008C00: ori         $t6, $t6, 0x4
    ctx->r14 = ctx->r14 | 0X4;
    // 0x80008C04: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80008C08: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80008C0C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80008C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80008C14: lui         $t9, 0xDB0E
    ctx->r25 = S32(0XDB0E << 16);
    // 0x80008C18: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x80008C1C: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x80008C20: lhu         $t7, 0x60F0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X60F0);
    // 0x80008C24: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80008C28: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80008C2C: sw          $s2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r18;
    // 0x80008C30: jal         0x80008738
    // 0x80008C34: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
    func_80008738(rdram, ctx);
        goto after_7;
    // 0x80008C34: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
    after_7:
    // 0x80008C38: lw          $s2, 0x74($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X74);
    // 0x80008C3C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80008C40: jal         0x8000857C
    // 0x80008C44: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    func_8000857C(rdram, ctx);
        goto after_8;
    // 0x80008C44: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    after_8:
    // 0x80008C48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80008C4C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x80008C50: jal         0x8000F340
    // 0x80008C54: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8000F340(rdram, ctx);
        goto after_9;
    // 0x80008C54: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_9:
    // 0x80008C58: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80008C5C: addiu       $a1, $a1, 0x6138
    ctx->r5 = ADD32(ctx->r5, 0X6138);
    // 0x80008C60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80008C64: jal         0x8000E514
    // 0x80008C68: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8000E514(rdram, ctx);
        goto after_10;
    // 0x80008C68: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_10:
    // 0x80008C6C: lui         $t6, 0xDE00
    ctx->r14 = S32(0XDE00 << 16);
    // 0x80008C70: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80008C74: lw          $a0, 0xD8($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XD8);
    // 0x80008C78: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80008C7C: jal         0x8000479C
    // 0x80008C80: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    func_8000479C(rdram, ctx);
        goto after_11;
    // 0x80008C80: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    after_11:
    // 0x80008C84: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80008C88: addu        $t8, $v0, $at
    ctx->r24 = ADD32(ctx->r2, ctx->r1);
    // 0x80008C8C: jal         0x800760C0
    // 0x80008C90: sw          $t8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r24;
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_12;
    // 0x80008C90: sw          $t8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r24;
    after_12:
L_80008C94:
    // 0x80008C94: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80008C98: jal         0x80004A6C
    // 0x80008C9C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80004A6C(rdram, ctx);
        goto after_13;
    // 0x80008C9C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x80008CA0: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80008CA4: lui         $t9, 0xDB06
    ctx->r25 = S32(0XDB06 << 16);
    // 0x80008CA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80008CAC: addu        $t7, $v0, $at
    ctx->r15 = ADD32(ctx->r2, ctx->r1);
    // 0x80008CB0: ori         $t9, $t9, 0x4
    ctx->r25 = ctx->r25 | 0X4;
    // 0x80008CB4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80008CB8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80008CBC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80008CC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80008CC4: lui         $t6, 0xDB0E
    ctx->r14 = S32(0XDB0E << 16);
    // 0x80008CC8: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80008CCC: lui         $t8, 0x800A
    ctx->r24 = S32(0X800A << 16);
    // 0x80008CD0: lhu         $t8, 0x60F0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X60F0);
    // 0x80008CD4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80008CD8: or          $s1, $s6, $zero
    ctx->r17 = ctx->r22 | 0;
    // 0x80008CDC: jal         0x80008738
    // 0x80008CE0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    func_80008738(rdram, ctx);
        goto after_14;
    // 0x80008CE0: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    after_14:
    // 0x80008CE4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80008CE8: jal         0x8000857C
    // 0x80008CEC: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    func_8000857C(rdram, ctx);
        goto after_15;
    // 0x80008CEC: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    after_15:
    // 0x80008CF0: lui         $t9, 0xDE00
    ctx->r25 = S32(0XDE00 << 16);
    // 0x80008CF4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80008CF8: lw          $a0, 0xD8($s6)
    ctx->r4 = MEM_W(ctx->r22, 0XD8);
    // 0x80008CFC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80008D00: jal         0x8000479C
    // 0x80008D04: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    func_8000479C(rdram, ctx);
        goto after_16;
    // 0x80008D04: addiu       $s0, $v0, 0x8
    ctx->r16 = ADD32(ctx->r2, 0X8);
    after_16:
    // 0x80008D08: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x80008D0C: addu        $t7, $v0, $at
    ctx->r15 = ADD32(ctx->r2, ctx->r1);
    // 0x80008D10: sw          $t7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r15;
L_80008D14:
    // 0x80008D14: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80008D18: addiu       $t6, $t6, 0x5EC0
    ctx->r14 = ADD32(ctx->r14, 0X5EC0);
    // 0x80008D1C: addiu       $s6, $s6, 0xE0
    ctx->r22 = ADD32(ctx->r22, 0XE0);
    // 0x80008D20: bne         $s6, $t6, L_80008B5C
    if (ctx->r22 != ctx->r14) {
        // 0x80008D24: nop
    
            goto L_80008B5C;
    }
    // 0x80008D24: nop

    // 0x80008D28: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80008D2C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80008D30: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80008D34: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80008D38: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80008D3C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80008D40: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80008D44: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80008D48: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80008D4C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80008D50: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80008D54: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80008D58: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80008D5C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80008D60: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80008D64: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80008D68: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80008D6C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80008D70: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80008D74: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80008D78: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80008D7C: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80008D80: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80008D84: jr          $ra
    // 0x80008D88: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80008D88: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_80008D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008D8C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80008D90: addiu       $v0, $v0, -0x15E8
    ctx->r2 = ADD32(ctx->r2, -0X15E8);
    // 0x80008D94: sb          $a0, 0x20($v0)
    MEM_B(0X20, ctx->r2) = ctx->r4;
    // 0x80008D98: sb          $a1, 0x21($v0)
    MEM_B(0X21, ctx->r2) = ctx->r5;
    // 0x80008D9C: sb          $a2, 0x22($v0)
    MEM_B(0X22, ctx->r2) = ctx->r6;
    // 0x80008DA0: lb          $t2, 0x20($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X20);
    // 0x80008DA4: lb          $t3, 0x21($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X21);
    // 0x80008DA8: lb          $t4, 0x22($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X22);
    // 0x80008DAC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80008DB0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80008DB4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80008DB8: sb          $t2, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r10;
    // 0x80008DBC: sb          $t3, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r11;
    // 0x80008DC0: jr          $ra
    // 0x80008DC4: sb          $t4, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r12;
    return;
    // 0x80008DC4: sb          $t4, 0x12($v0)
    MEM_B(0X12, ctx->r2) = ctx->r12;
;}
RECOMP_FUNC void func_80008DC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008DC8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80008DCC: addiu       $v0, $v0, -0x15E8
    ctx->r2 = ADD32(ctx->r2, -0X15E8);
    // 0x80008DD0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80008DD4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80008DD8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80008DDC: sb          $a0, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r4;
    // 0x80008DE0: sb          $a0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r4;
    // 0x80008DE4: sb          $a1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r5;
    // 0x80008DE8: sb          $a1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r5;
    // 0x80008DEC: sb          $a2, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r6;
    // 0x80008DF0: jr          $ra
    // 0x80008DF4: sb          $a2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r6;
    return;
    // 0x80008DF4: sb          $a2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r6;
;}
RECOMP_FUNC void func_80008DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80008DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80008E00: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x80008E04: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80008E08: jal         0x80008DC8
    // 0x80008E0C: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    func_80008DC8(rdram, ctx);
        goto after_0;
    // 0x80008E0C: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_0:
    // 0x80008E10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80008E14: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    // 0x80008E18: jal         0x80008D8C
    // 0x80008E1C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    func_80008D8C(rdram, ctx);
        goto after_1;
    // 0x80008E1C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    after_1:
    // 0x80008E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80008E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80008E28: jr          $ra
    // 0x80008E2C: nop

    return;
    // 0x80008E2C: nop

;}
RECOMP_FUNC void func_80008E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008E30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80008E34: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x80008E38: mtc1        $a3, $f18
    ctx->f18.u32l = ctx->r7;
    // 0x80008E3C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80008E40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80008E44: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80008E48: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80008E4C: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80008E50: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80008E54: addiu       $a1, $a1, 0x60F0
    ctx->r5 = ADD32(ctx->r5, 0X60F0);
    // 0x80008E58: addiu       $a0, $a0, 0x60F8
    ctx->r4 = ADD32(ctx->r4, 0X60F8);
    // 0x80008E5C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80008E60: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x80008E64: jal         0x8007A270
    // 0x80008E68: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    guPerspectiveF(rdram, ctx);
        goto after_0;
    // 0x80008E68: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80008E6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80008E70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80008E74: jr          $ra
    // 0x80008E78: nop

    return;
    // 0x80008E78: nop

;}
RECOMP_FUNC void func_80008E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008E7C: jr          $ra
    // 0x80008E80: sw          $a1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r5;
    return;
    // 0x80008E80: sw          $a1, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80008E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008E84: jr          $ra
    // 0x80008E88: sw          $a1, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r5;
    return;
    // 0x80008E88: sw          $a1, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80008E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008E8C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80008E90: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80008E94: lwc1        $f6, 0xBC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80008E98: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80008E9C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80008EA0: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80008EA4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80008EA8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80008EAC: lwc1        $f6, 0xCC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80008EB0: lwc1        $f4, 0xC8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80008EB4: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80008EB8: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80008EBC: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x80008EC0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80008EC4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80008EC8: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80008ECC: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80008ED0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80008ED4: swc1        $f31, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80008ED8: swc1        $f30, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f30.u32l;
    // 0x80008EDC: swc1        $f29, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80008EE0: swc1        $f28, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f28.u32l;
    // 0x80008EE4: swc1        $f27, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80008EE8: swc1        $f26, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f26.u32l;
    // 0x80008EEC: swc1        $f25, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80008EF0: swc1        $f24, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f24.u32l;
    // 0x80008EF4: swc1        $f23, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80008EF8: swc1        $f22, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f22.u32l;
    // 0x80008EFC: swc1        $f21, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80008F00: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x80008F04: sw          $a0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r4;
    // 0x80008F08: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x80008F0C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80008F10: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80008F14: jal         0x80079AC0
    // 0x80008F18: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    guLookAtF(rdram, ctx);
        goto after_0;
    // 0x80008F18: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80008F1C: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x80008F20: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80008F24: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80008F28: addiu       $a1, $a1, 0x60F8
    ctx->r5 = ADD32(ctx->r5, 0X60F8);
    // 0x80008F2C: jal         0x80079DF0
    // 0x80008F30: addiu       $a2, $a2, 0x54
    ctx->r6 = ADD32(ctx->r6, 0X54);
    guMtxCatF(rdram, ctx);
        goto after_1;
    // 0x80008F30: addiu       $a2, $a2, 0x54
    ctx->r6 = ADD32(ctx->r6, 0X54);
    after_1:
    // 0x80008F34: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80008F38: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80008F3C: jal         0x80008900
    // 0x80008F40: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80008900(rdram, ctx);
        goto after_2;
    // 0x80008F40: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x80008F44: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    // 0x80008F48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80008F4C: jal         0x8007A000
    // 0x80008F50: addiu       $a1, $a1, 0x98
    ctx->r5 = ADD32(ctx->r5, 0X98);
    guMtxF2L(rdram, ctx);
        goto after_3;
    // 0x80008F50: addiu       $a1, $a1, 0x98
    ctx->r5 = ADD32(ctx->r5, 0X98);
    after_3:
    // 0x80008F54: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80008F58: lwc1        $f21, 0x28($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80008F5C: lwc1        $f20, 0x2C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80008F60: lwc1        $f23, 0x30($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80008F64: lwc1        $f22, 0x34($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80008F68: lwc1        $f25, 0x38($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80008F6C: lwc1        $f24, 0x3C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80008F70: lwc1        $f27, 0x40($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80008F74: lwc1        $f26, 0x44($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80008F78: lwc1        $f29, 0x48($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x80008F7C: lwc1        $f28, 0x4C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80008F80: lwc1        $f31, 0x50($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x80008F84: lwc1        $f30, 0x54($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80008F88: jr          $ra
    // 0x80008F8C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80008F8C: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_80008F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008F90: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x80008F94: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x80008F98: sw          $a3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r7;
    // 0x80008F9C: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80008FA0: jr          $ra
    // 0x80008FA4: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    return;
    // 0x80008FA4: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80008FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008FA8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80008FAC: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80008FB0: sw          $v0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r2;
    // 0x80008FB4: jr          $ra
    // 0x80008FB8: sw          $v0, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r2;
    return;
    // 0x80008FB8: sw          $v0, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80008FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008FBC: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x80008FC0: lw          $t6, 0x5A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5A60);
    // 0x80008FC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80008FC8: bne         $t6, $zero, L_80008FE8
    if (ctx->r14 != 0) {
        // 0x80008FCC: sll         $t8, $v0, 3
        ctx->r24 = S32(ctx->r2 << 3);
            goto L_80008FE8;
    }
    // 0x80008FCC: sll         $t8, $v0, 3
    ctx->r24 = S32(ctx->r2 << 3);
    // 0x80008FD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80008FD4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80008FD8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80008FDC: addiu       $v0, $v0, 0x5A60
    ctx->r2 = ADD32(ctx->r2, 0X5A60);
    // 0x80008FE0: jr          $ra
    // 0x80008FE4: sw          $t7, 0x5A60($at)
    MEM_W(0X5A60, ctx->r1) = ctx->r15;
    return;
    // 0x80008FE4: sw          $t7, 0x5A60($at)
    MEM_W(0X5A60, ctx->r1) = ctx->r15;
L_80008FE8:
    // 0x80008FE8: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80008FEC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x80008FF0: addiu       $t9, $t9, 0x5A60
    ctx->r25 = ADD32(ctx->r25, 0X5A60);
    // 0x80008FF4: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x80008FF8: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80008FFC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80009000: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80009004: bne         $t0, $zero, L_80009014
    if (ctx->r8 != 0) {
        // 0x80009008: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80009014;
    }
    // 0x80009008: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8000900C: jr          $ra
    // 0x80009010: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    return;
    // 0x80009010: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_80009014:
    // 0x80009014: lw          $t2, 0xE0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0XE0);
    // 0x80009018: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8000901C: bne         $t2, $zero, L_8000902C
    if (ctx->r10 != 0) {
        // 0x80009020: addiu       $v0, $v1, 0xE0
        ctx->r2 = ADD32(ctx->r3, 0XE0);
            goto L_8000902C;
    }
    // 0x80009020: addiu       $v0, $v1, 0xE0
    ctx->r2 = ADD32(ctx->r3, 0XE0);
    // 0x80009024: jr          $ra
    // 0x80009028: sw          $t3, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r11;
    return;
    // 0x80009028: sw          $t3, 0xE0($v1)
    MEM_W(0XE0, ctx->r3) = ctx->r11;
L_8000902C:
    // 0x8000902C: lw          $t4, 0x1C0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X1C0);
    // 0x80009030: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80009034: bne         $t4, $zero, L_80009044
    if (ctx->r12 != 0) {
        // 0x80009038: addiu       $v0, $v1, 0x1C0
        ctx->r2 = ADD32(ctx->r3, 0X1C0);
            goto L_80009044;
    }
    // 0x80009038: addiu       $v0, $v1, 0x1C0
    ctx->r2 = ADD32(ctx->r3, 0X1C0);
    // 0x8000903C: jr          $ra
    // 0x80009040: sw          $t5, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r13;
    return;
    // 0x80009040: sw          $t5, 0x1C0($v1)
    MEM_W(0X1C0, ctx->r3) = ctx->r13;
L_80009044:
    // 0x80009044: lw          $t6, 0x2A0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2A0);
    // 0x80009048: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000904C: bne         $t6, $zero, L_8000905C
    if (ctx->r14 != 0) {
        // 0x80009050: addiu       $v0, $v1, 0x2A0
        ctx->r2 = ADD32(ctx->r3, 0X2A0);
            goto L_8000905C;
    }
    // 0x80009050: addiu       $v0, $v1, 0x2A0
    ctx->r2 = ADD32(ctx->r3, 0X2A0);
    // 0x80009054: jr          $ra
    // 0x80009058: sw          $t7, 0x2A0($v1)
    MEM_W(0X2A0, ctx->r3) = ctx->r15;
    return;
    // 0x80009058: sw          $t7, 0x2A0($v1)
    MEM_W(0X2A0, ctx->r3) = ctx->r15;
L_8000905C:
    // 0x8000905C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80009060: jr          $ra
    // 0x80009064: nop

    return;
    // 0x80009064: nop

;}
RECOMP_FUNC void func_80009070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80009074: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80009078: addiu       $v0, $v0, 0x6240
    ctx->r2 = ADD32(ctx->r2, 0X6240);
    // 0x8000907C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009080: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80009084: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80009088: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8000908C: addiu       $a1, $a1, -0x151C
    ctx->r5 = ADD32(ctx->r5, -0X151C);
    // 0x80009090: jal         0x80073EF0
    // 0x80009094: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80009094: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x80009098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000909C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800090A0: jr          $ra
    // 0x800090A4: nop

    return;
    // 0x800090A4: nop

;}
RECOMP_FUNC void func_800090B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800090B0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x800090B4: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800090B8: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x800090BC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x800090C0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x800090C4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800090C8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800090CC: lui         $t6, 0xE300
    ctx->r14 = S32(0XE300 << 16);
    // 0x800090D0: ori         $t6, $t6, 0xA01
    ctx->r14 = ctx->r14 | 0XA01;
    // 0x800090D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800090D8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800090DC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800090E0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800090E4: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x800090E8: lui         $t8, 0xFFFD
    ctx->r24 = S32(0XFFFD << 16);
    // 0x800090EC: ori         $t8, $t8, 0xF6FB
    ctx->r24 = ctx->r24 | 0XF6FB;
    // 0x800090F0: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x800090F4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800090F8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x800090FC: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x80009100: lui         $t9, 0xE200
    ctx->r25 = S32(0XE200 << 16);
    // 0x80009104: lui         $t1, 0x50
    ctx->r9 = S32(0X50 << 16);
    // 0x80009108: ori         $t1, $t1, 0x41C8
    ctx->r9 = ctx->r9 | 0X41C8;
    // 0x8000910C: ori         $t9, $t9, 0x1C
    ctx->r25 = ctx->r25 | 0X1C;
    // 0x80009110: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80009114: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80009118: sw          $t1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r9;
    // 0x8000911C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80009120: lui         $t3, 0x1
    ctx->r11 = S32(0X1 << 16);
    // 0x80009124: ori         $t3, $t3, 0x1
    ctx->r11 = ctx->r11 | 0X1;
    // 0x80009128: lui         $t2, 0xF700
    ctx->r10 = S32(0XF700 << 16);
    // 0x8000912C: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x80009130: sw          $t3, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r11;
    // 0x80009134: lui         $a3, 0x800A
    ctx->r7 = S32(0X800A << 16);
    // 0x80009138: lui         $a2, 0xF64F
    ctx->r6 = S32(0XF64F << 16);
    // 0x8000913C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80009140: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80009144: addiu       $v1, $v1, 0x6240
    ctx->r3 = ADD32(ctx->r3, 0X6240);
    // 0x80009148: ori         $a2, $a2, 0xC3BC
    ctx->r6 = ctx->r6 | 0XC3BC;
    // 0x8000914C: addiu       $a3, $a3, 0x6258
    ctx->r7 = ADD32(ctx->r7, 0X6258);
    // 0x80009150: lui         $a1, 0xFA00
    ctx->r5 = S32(0XFA00 << 16);
L_80009154:
    // 0x80009154: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80009158: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x8000915C: beq         $t4, $zero, L_800091B4
    if (ctx->r12 == 0) {
        // 0x80009160: nop
    
            goto L_800091B4;
    }
    // 0x80009160: nop

    // 0x80009164: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x80009168: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8000916C: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x80009170: lh          $t8, 0x8($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X8);
    // 0x80009174: lh          $t3, 0xA($v1)
    ctx->r11 = MEM_H(ctx->r3, 0XA);
    // 0x80009178: lh          $t6, 0x6($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X6);
    // 0x8000917C: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x80009180: lh          $t8, 0x4($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X4);
    // 0x80009184: sll         $t1, $t9, 16
    ctx->r9 = S32(ctx->r25 << 16);
    // 0x80009188: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x8000918C: sll         $t7, $t6, 24
    ctx->r15 = S32(ctx->r14 << 24);
    // 0x80009190: or          $t2, $t7, $t1
    ctx->r10 = ctx->r15 | ctx->r9;
    // 0x80009194: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x80009198: or          $t6, $t2, $t5
    ctx->r14 = ctx->r10 | ctx->r13;
    // 0x8000919C: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x800091A0: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x800091A4: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x800091A8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x800091AC: sw          $a2, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r6;
    // 0x800091B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_800091B4:
    // 0x800091B4: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x800091B8: bne         $v1, $a3, L_80009154
    if (ctx->r3 != ctx->r7) {
        // 0x800091BC: nop
    
            goto L_80009154;
    }
    // 0x800091BC: nop

    // 0x800091C0: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x800091C4: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x800091C8: jr          $ra
    // 0x800091CC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    return;
    // 0x800091CC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
;}
RECOMP_FUNC void func_800091D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800091D0: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x800091D4: addiu       $s0, $s0, -0x1520
    ctx->r16 = ADD32(ctx->r16, -0X1520);
    // 0x800091D8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800091DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800091E0: beq         $t6, $zero, L_800091F8
    if (ctx->r14 == 0) {
        // 0x800091E4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800091F8;
    }
    // 0x800091E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800091E8: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800091EC: lw          $a0, 0x625C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X625C);
    // 0x800091F0: jal         0x800075A0
    // 0x800091F4: nop

    func_800075A0(rdram, ctx);
        goto after_0;
    // 0x800091F4: nop

    after_0:
L_800091F8:
    // 0x800091F8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800091FC: addiu       $v0, $v0, 0x6240
    ctx->r2 = ADD32(ctx->r2, 0X6240);
    // 0x80009200: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x80009204: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80009208: bne         $t7, $zero, L_80009214
    if (ctx->r15 != 0) {
        // 0x8000920C: sw          $v1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r3;
            goto L_80009214;
    }
    // 0x8000920C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80009210: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
L_80009214:
    // 0x80009214: sh          $s1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r17;
    // 0x80009218: sh          $s2, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r18;
    // 0x8000921C: sh          $s3, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r19;
    // 0x80009220: sh          $s4, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r20;
    // 0x80009224: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80009228: sw          $s5, 0x6258($at)
    MEM_W(0X6258, ctx->r1) = ctx->r21;
    // 0x8000922C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80009230: ori         $a1, $zero, 0xF7FF
    ctx->r5 = 0 | 0XF7FF;
    // 0x80009234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80009238: jal         0x80007C3C
    // 0x8000923C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80007C3C(rdram, ctx);
        goto after_1;
    // 0x8000923C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80009240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80009244: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80009248: sw          $v0, 0x625C($at)
    MEM_W(0X625C, ctx->r1) = ctx->r2;
    // 0x8000924C: jr          $ra
    // 0x80009250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80009250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80009254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009254: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80009258: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8000925C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80009260: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80009264: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80009268: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8000926C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80009270: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80009274: lui         $s6, 0x8001
    ctx->r22 = S32(0X8001 << 16);
    // 0x80009278: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8000927C: addiu       $s6, $s6, -0x66F8
    ctx->r22 = ADD32(ctx->r22, -0X66F8);
    // 0x80009280: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80009284: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80009288: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8000928C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80009290: jal         0x800091D0
    // 0x80009294: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    func_800091D0(rdram, ctx);
        goto after_0;
    // 0x80009294: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    after_0:
    // 0x80009298: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8000929C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800092A0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800092A4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800092A8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800092AC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800092B0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800092B4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800092B8: jr          $ra
    // 0x800092BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800092BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800092C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800092C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800092C4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800092C8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800092CC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800092D0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800092D4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800092D8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800092DC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800092E0: lui         $s6, 0x8001
    ctx->r22 = S32(0X8001 << 16);
    // 0x800092E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800092E8: addiu       $s6, $s6, -0x66F8
    ctx->r22 = ADD32(ctx->r22, -0X66F8);
    // 0x800092EC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800092F0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800092F4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800092F8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800092FC: jal         0x800091D0
    // 0x80009300: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    func_800091D0(rdram, ctx);
        goto after_0;
    // 0x80009300: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    after_0:
    // 0x80009304: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80009308: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8000930C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80009310: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80009314: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80009318: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8000931C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80009320: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80009324: jr          $ra
    // 0x80009328: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80009328: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8000932C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000932C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80009330: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80009334: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80009338: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8000933C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80009340: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80009344: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80009348: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8000934C: lui         $s6, 0x8001
    ctx->r22 = S32(0X8001 << 16);
    // 0x80009350: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80009354: addiu       $s6, $s6, -0x6674
    ctx->r22 = ADD32(ctx->r22, -0X6674);
    // 0x80009358: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000935C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80009360: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80009364: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80009368: jal         0x800091D0
    // 0x8000936C: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    func_800091D0(rdram, ctx);
        goto after_0;
    // 0x8000936C: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    after_0:
    // 0x80009370: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80009374: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80009378: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8000937C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80009380: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80009384: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80009388: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8000938C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80009390: jr          $ra
    // 0x80009394: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80009394: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80009398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009398: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000939C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800093A0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800093A4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800093A8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800093AC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800093B0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800093B4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800093B8: lui         $s6, 0x8001
    ctx->r22 = S32(0X8001 << 16);
    // 0x800093BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800093C0: addiu       $s6, $s6, -0x6674
    ctx->r22 = ADD32(ctx->r22, -0X6674);
    // 0x800093C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800093C8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800093CC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800093D0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800093D4: jal         0x800091D0
    // 0x800093D8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    func_800091D0(rdram, ctx);
        goto after_0;
    // 0x800093D8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    after_0:
    // 0x800093DC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800093E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800093E4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800093E8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800093EC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800093F0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800093F4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800093F8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800093FC: jr          $ra
    // 0x80009400: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80009400: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80009404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009404: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80009408: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8000940C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80009410: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80009414: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80009418: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8000941C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80009420: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80009424: lui         $s6, 0x8001
    ctx->r22 = S32(0X8001 << 16);
    // 0x80009428: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8000942C: addiu       $s6, $s6, -0x65F4
    ctx->r22 = ADD32(ctx->r22, -0X65F4);
    // 0x80009430: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x80009434: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80009438: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8000943C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80009440: jal         0x800091D0
    // 0x80009444: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    func_800091D0(rdram, ctx);
        goto after_0;
    // 0x80009444: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    after_0:
    // 0x80009448: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8000944C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80009450: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80009454: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80009458: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8000945C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80009460: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80009464: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80009468: jr          $ra
    // 0x8000946C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000946C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80009470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009470: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80009474: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80009478: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8000947C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80009480: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80009484: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80009488: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8000948C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80009490: lui         $s6, 0x8001
    ctx->r22 = S32(0X8001 << 16);
    // 0x80009494: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80009498: addiu       $s6, $s6, -0x65F4
    ctx->r22 = ADD32(ctx->r22, -0X65F4);
    // 0x8000949C: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x800094A0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800094A4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800094A8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800094AC: jal         0x800091D0
    // 0x800094B0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    func_800091D0(rdram, ctx);
        goto after_0;
    // 0x800094B0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    after_0:
    // 0x800094B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800094B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800094BC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800094C0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800094C4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800094C8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800094CC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800094D0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800094D4: jr          $ra
    // 0x800094D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800094D8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800094DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800094DC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800094E0: lw          $v0, -0x1520($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1520);
    // 0x800094E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_800094EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800094EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800094F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800094F4: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x800094F8: addiu       $s0, $s0, -0x1520
    ctx->r16 = ADD32(ctx->r16, -0X1520);
    // 0x800094FC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80009500: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80009504: beq         $t6, $zero, L_80009528
    if (ctx->r14 == 0) {
        // 0x80009508: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80009528;
    }
    // 0x80009508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000950C:
    // 0x8000950C: jal         0x80007AB0
    // 0x80009510: nop

    func_80007AB0(rdram, ctx);
        goto after_0;
    // 0x80009510: nop

    after_0:
    // 0x80009514: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80009518: nop

    // 0x8000951C: bne         $t7, $zero, L_8000950C
    if (ctx->r15 != 0) {
        // 0x80009520: nop
    
            goto L_8000950C;
    }
    // 0x80009520: nop

    // 0x80009524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80009528:
    // 0x80009528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000952C: jr          $ra
    // 0x80009530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80009530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80009534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009534: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80009538: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8000953C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80009540: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80009544: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80009548: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8000954C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80009550: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80009554: lui         $s6, 0x8001
    ctx->r22 = S32(0X8001 << 16);
    // 0x80009558: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8000955C: addiu       $s6, $s6, -0x6988
    ctx->r22 = ADD32(ctx->r22, -0X6988);
    // 0x80009560: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80009564: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80009568: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8000956C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80009570: jal         0x800091D0
    // 0x80009574: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    func_800091D0(rdram, ctx);
        goto after_0;
    // 0x80009574: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    after_0:
    // 0x80009578: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8000957C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80009580: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80009584: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80009588: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8000958C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80009590: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80009594: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80009598: jr          $ra
    // 0x8000959C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000959C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800095A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800095A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800095A4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800095A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800095AC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800095B0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800095B4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800095B8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800095BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800095C0: lui         $s6, 0x8001
    ctx->r22 = S32(0X8001 << 16);
    // 0x800095C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800095C8: addiu       $s6, $s6, -0x68A8
    ctx->r22 = ADD32(ctx->r22, -0X68A8);
    // 0x800095CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800095D0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800095D4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x800095D8: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x800095DC: jal         0x800091D0
    // 0x800095E0: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    func_800091D0(rdram, ctx);
        goto after_0;
    // 0x800095E0: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    after_0:
    // 0x800095E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800095E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800095EC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800095F0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800095F4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800095F8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800095FC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80009600: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80009604: jr          $ra
    // 0x80009608: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80009608: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8000960C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000960C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80009610: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80009614: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80009618: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8000961C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80009620: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80009624: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80009628: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8000962C: lui         $s6, 0x8001
    ctx->r22 = S32(0X8001 << 16);
    // 0x80009630: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80009634: addiu       $s6, $s6, -0x67CC
    ctx->r22 = ADD32(ctx->r22, -0X67CC);
    // 0x80009638: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
    // 0x8000963C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80009640: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80009644: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x80009648: jal         0x800091D0
    // 0x8000964C: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    func_800091D0(rdram, ctx);
        goto after_0;
    // 0x8000964C: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    after_0:
    // 0x80009650: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80009654: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80009658: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8000965C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80009660: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80009664: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80009668: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8000966C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80009670: jr          $ra
    // 0x80009674: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80009674: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80009678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009678: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000967C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80009680: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80009684: addiu       $s1, $s1, 0x6258
    ctx->r17 = ADD32(ctx->r17, 0X6258);
    // 0x80009688: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8000968C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80009690: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80009694: addiu       $s2, $s2, 0x6240
    ctx->r18 = ADD32(ctx->r18, 0X6240);
    // 0x80009698: lh          $t6, 0x10($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X10);
    // 0x8000969C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800096A0: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x800096A4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800096A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800096AC: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800096B0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800096B4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800096B8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800096BC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800096C0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800096C4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800096C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800096CC: div.s       $f22, $f4, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800096D0: blez        $v0, L_8000971C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800096D4: cvt.s.w     $f20, $f10
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8000971C;
    }
    // 0x800096D4: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
L_800096D8:
    // 0x800096D8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800096DC: nop

    // 0x800096E0: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800096E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800096E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800096EC: nop

    // 0x800096F0: cvt.w.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.u32l = CVT_W_S(ctx->f20.fl);
    // 0x800096F4: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x800096F8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800096FC: sh          $t8, 0x10($s2)
    MEM_H(0X10, ctx->r18) = ctx->r24;
    // 0x80009700: jal         0x80007AB0
    // 0x80009704: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    func_80007AB0(rdram, ctx);
        goto after_0;
    // 0x80009704: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    after_0:
    // 0x80009708: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x8000970C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80009710: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80009714: bne         $at, $zero, L_800096D8
    if (ctx->r1 != 0) {
        // 0x80009718: nop
    
            goto L_800096D8;
    }
    // 0x80009718: nop

L_8000971C:
    // 0x8000971C: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80009720: sh          $t0, 0x10($s2)
    MEM_H(0X10, ctx->r18) = ctx->r8;
    // 0x80009724: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80009728: jal         0x80007AE0
    // 0x8000972C: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_1;
    // 0x8000972C: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    after_1:
    // 0x80009730: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80009734: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80009738: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000973C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80009740: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80009744: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80009748: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8000974C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80009750: jr          $ra
    // 0x80009754: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80009754: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80009758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009758: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000975C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80009760: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80009764: addiu       $s1, $s1, 0x6258
    ctx->r17 = ADD32(ctx->r17, 0X6258);
    // 0x80009768: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8000976C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80009770: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80009774: addiu       $s2, $s2, 0x6240
    ctx->r18 = ADD32(ctx->r18, 0X6240);
    // 0x80009778: lh          $t6, 0x10($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X10);
    // 0x8000977C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80009780: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80009784: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80009788: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000978C: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80009790: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80009794: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80009798: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8000979C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800097A0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800097A4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800097A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800097AC: div.s       $f22, $f4, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x800097B0: blez        $v0, L_800097FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800097B4: cvt.s.w     $f20, $f10
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
            goto L_800097FC;
    }
    // 0x800097B4: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
L_800097B8:
    // 0x800097B8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800097BC: nop

    // 0x800097C0: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800097C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800097C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800097CC: nop

    // 0x800097D0: cvt.w.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    ctx->f16.u32l = CVT_W_S(ctx->f20.fl);
    // 0x800097D4: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x800097D8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800097DC: sh          $t8, 0x10($s2)
    MEM_H(0X10, ctx->r18) = ctx->r24;
    // 0x800097E0: jal         0x80007AB0
    // 0x800097E4: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    func_80007AB0(rdram, ctx);
        goto after_0;
    // 0x800097E4: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    after_0:
    // 0x800097E8: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800097EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800097F0: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800097F4: bne         $at, $zero, L_800097B8
    if (ctx->r1 != 0) {
        // 0x800097F8: nop
    
            goto L_800097B8;
    }
    // 0x800097F8: nop

L_800097FC:
    // 0x800097FC: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x80009800: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80009804: jal         0x80007AE0
    // 0x80009808: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_1;
    // 0x80009808: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    after_1:
    // 0x8000980C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80009810: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80009814: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80009818: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8000981C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80009820: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80009824: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80009828: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8000982C: jr          $ra
    // 0x80009830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80009830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80009834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009834: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80009838: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8000983C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80009840: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80009844: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x80009848: addiu       $s2, $s2, 0x6240
    ctx->r18 = ADD32(ctx->r18, 0X6240);
    // 0x8000984C: addiu       $s1, $s1, 0x6258
    ctx->r17 = ADD32(ctx->r17, 0X6258);
    // 0x80009850: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80009854: lh          $t6, 0x10($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X10);
    // 0x80009858: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8000985C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80009860: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80009864: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80009868: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8000986C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80009870: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80009874: cvt.s.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80009878: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8000987C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80009880: div.s       $f22, $f20, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = DIV_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80009884: blez        $v0, L_800098D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80009888: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800098D0;
    }
    // 0x80009888: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8000988C:
    // 0x8000988C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80009890: nop

    // 0x80009894: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80009898: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000989C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800098A0: nop

    // 0x800098A4: cvt.w.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    ctx->f10.u32l = CVT_W_S(ctx->f20.fl);
    // 0x800098A8: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x800098AC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800098B0: sh          $t8, 0x10($s2)
    MEM_H(0X10, ctx->r18) = ctx->r24;
    // 0x800098B4: jal         0x80007AB0
    // 0x800098B8: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
    func_80007AB0(rdram, ctx);
        goto after_0;
    // 0x800098B8: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
    after_0:
    // 0x800098BC: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800098C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800098C4: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x800098C8: bne         $at, $zero, L_8000988C
    if (ctx->r1 != 0) {
        // 0x800098CC: nop
    
            goto L_8000988C;
    }
    // 0x800098CC: nop

L_800098D0:
    // 0x800098D0: sw          $zero, 0xC($s2)
    MEM_W(0XC, ctx->r18) = 0;
    // 0x800098D4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800098D8: jal         0x80007AE0
    // 0x800098DC: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_1;
    // 0x800098DC: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    after_1:
    // 0x800098E0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800098E4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800098E8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800098EC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800098F0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800098F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800098F8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800098FC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80009900: jr          $ra
    // 0x80009904: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80009904: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80009908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009908: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000990C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80009910: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80009914: addiu       $s0, $s0, 0x6240
    ctx->r16 = ADD32(ctx->r16, 0X6240);
    // 0x80009918: lh          $t6, 0x10($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X10);
    // 0x8000991C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80009920: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x80009924: beq         $at, $zero, L_80009964
    if (ctx->r1 == 0) {
        // 0x80009928: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_80009964;
    }
    // 0x80009928: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000992C: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80009930: addiu       $s1, $s1, 0x6258
    ctx->r17 = ADD32(ctx->r17, 0X6258);
L_80009934:
    // 0x80009934: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80009938: jal         0x8000797C
    // 0x8000993C: nop

    func_8000797C(rdram, ctx);
        goto after_0;
    // 0x8000993C: nop

    after_0:
    // 0x80009940: lh          $t7, 0x10($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X10);
    // 0x80009944: nop

    // 0x80009948: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8000994C: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
    // 0x80009950: lh          $t9, 0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X10);
    // 0x80009954: nop

    // 0x80009958: slti        $at, $t9, 0xFF
    ctx->r1 = SIGNED(ctx->r25) < 0XFF ? 1 : 0;
    // 0x8000995C: bne         $at, $zero, L_80009934
    if (ctx->r1 != 0) {
        // 0x80009960: nop
    
            goto L_80009934;
    }
    // 0x80009960: nop

L_80009964:
    // 0x80009964: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80009968: sh          $t0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r8;
    // 0x8000996C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80009970: jal         0x80007AE0
    // 0x80009974: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_1;
    // 0x80009974: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    after_1:
    // 0x80009978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000997C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80009980: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80009984: jr          $ra
    // 0x80009988: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80009988: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8000998C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000998C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80009990: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80009994: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80009998: addiu       $s0, $s0, 0x6240
    ctx->r16 = ADD32(ctx->r16, 0X6240);
    // 0x8000999C: lh          $t6, 0x10($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X10);
    // 0x800099A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800099A4: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x800099A8: beq         $at, $zero, L_800099E8
    if (ctx->r1 == 0) {
        // 0x800099AC: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_800099E8;
    }
    // 0x800099AC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800099B0: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x800099B4: addiu       $s1, $s1, 0x6258
    ctx->r17 = ADD32(ctx->r17, 0X6258);
L_800099B8:
    // 0x800099B8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800099BC: jal         0x8000797C
    // 0x800099C0: nop

    func_8000797C(rdram, ctx);
        goto after_0;
    // 0x800099C0: nop

    after_0:
    // 0x800099C4: lh          $t7, 0x10($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X10);
    // 0x800099C8: nop

    // 0x800099CC: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x800099D0: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
    // 0x800099D4: lh          $t9, 0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X10);
    // 0x800099D8: nop

    // 0x800099DC: slti        $at, $t9, 0xFF
    ctx->r1 = SIGNED(ctx->r25) < 0XFF ? 1 : 0;
    // 0x800099E0: bne         $at, $zero, L_800099B8
    if (ctx->r1 != 0) {
        // 0x800099E4: nop
    
            goto L_800099B8;
    }
    // 0x800099E4: nop

L_800099E8:
    // 0x800099E8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x800099EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800099F0: jal         0x80007AE0
    // 0x800099F4: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_1;
    // 0x800099F4: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    after_1:
    // 0x800099F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800099FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80009A00: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80009A04: jr          $ra
    // 0x80009A08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80009A08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80009A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009A0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80009A10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80009A14: lui         $s0, 0x800A
    ctx->r16 = S32(0X800A << 16);
    // 0x80009A18: addiu       $s0, $s0, 0x6240
    ctx->r16 = ADD32(ctx->r16, 0X6240);
    // 0x80009A1C: lh          $t6, 0x10($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X10);
    // 0x80009A20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80009A24: bltz        $t6, L_80009A60
    if (SIGNED(ctx->r14) < 0) {
        // 0x80009A28: sw          $s1, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r17;
            goto L_80009A60;
    }
    // 0x80009A28: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80009A2C: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80009A30: addiu       $s1, $s1, 0x6258
    ctx->r17 = ADD32(ctx->r17, 0X6258);
L_80009A34:
    // 0x80009A34: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80009A38: jal         0x8000797C
    // 0x80009A3C: nop

    func_8000797C(rdram, ctx);
        goto after_0;
    // 0x80009A3C: nop

    after_0:
    // 0x80009A40: lh          $t7, 0x10($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X10);
    // 0x80009A44: nop

    // 0x80009A48: addiu       $t8, $t7, -0x8
    ctx->r24 = ADD32(ctx->r15, -0X8);
    // 0x80009A4C: sh          $t8, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r24;
    // 0x80009A50: lh          $t9, 0x10($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X10);
    // 0x80009A54: nop

    // 0x80009A58: bgez        $t9, L_80009A34
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80009A5C: nop
    
            goto L_80009A34;
    }
    // 0x80009A5C: nop

L_80009A60:
    // 0x80009A60: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80009A64: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80009A68: jal         0x80007AE0
    // 0x80009A6C: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    func_80007AE0(rdram, ctx);
        goto after_1;
    // 0x80009A6C: sw          $zero, -0x1520($at)
    MEM_W(-0X1520, ctx->r1) = 0;
    after_1:
    // 0x80009A70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80009A74: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80009A78: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80009A7C: jr          $ra
    // 0x80009A80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80009A80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80009A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009A84: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80009A88: addiu       $v0, $v0, 0x6240
    ctx->r2 = ADD32(ctx->r2, 0X6240);
    // 0x80009A8C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80009A90: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80009A94: bne         $t6, $zero, L_80009AA8
    if (ctx->r14 != 0) {
        // 0x80009A98: lui         $at, 0x437F
        ctx->r1 = S32(0X437F << 16);
            goto L_80009AA8;
    }
    // 0x80009A98: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80009A9C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80009AA0: b           L_80009AC8
    // 0x80009AA4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_80009AC8;
    // 0x80009AA4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80009AA8:
    // 0x80009AA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80009AAC: nop

    // 0x80009AB0: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80009AB4: nop

    // 0x80009AB8: bc1f        L_80009AC8
    if (!c1cs) {
        // 0x80009ABC: nop
    
            goto L_80009AC8;
    }
    // 0x80009ABC: nop

    // 0x80009AC0: jr          $ra
    // 0x80009AC4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    return;
    // 0x80009AC4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_80009AC8:
    // 0x80009AC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80009ACC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80009AD0: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80009AD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80009AD8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80009ADC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80009AE0: div.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80009AE4: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x80009AE8: nop

    // 0x80009AEC: bc1f        L_80009B04
    if (!c1cs) {
        // 0x80009AF0: nop
    
            goto L_80009B04;
    }
    // 0x80009AF0: nop

    // 0x80009AF4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80009AF8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80009AFC: b           L_80009B10
    // 0x80009B00: add.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f18.fl;
        goto L_80009B10;
    // 0x80009B00: add.s       $f2, $f0, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f18.fl;
L_80009B04:
    // 0x80009B04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80009B08: nop

    // 0x80009B0C: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
L_80009B10:
    // 0x80009B10: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80009B14: sh          $a0, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r4;
    // 0x80009B18: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80009B1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009B20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009B24: sh          $a1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r5;
    // 0x80009B28: cvt.w.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = CVT_W_S(ctx->f2.fl);
    // 0x80009B2C: sh          $a2, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r6;
    // 0x80009B30: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80009B34: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80009B38: sh          $t9, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r25;
    // 0x80009B3C: nop

    // 0x80009B40: jr          $ra
    // 0x80009B44: nop

    return;
    // 0x80009B44: nop

;}
RECOMP_FUNC void func_80009B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80009B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009B58: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80009B5C: addiu       $a1, $a1, -0x14F0
    ctx->r5 = ADD32(ctx->r5, -0X14F0);
    // 0x80009B60: jal         0x80073EF0
    // 0x80009B64: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80009B64: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_0:
    // 0x80009B68: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80009B6C: sw          $zero, -0x7A08($at)
    MEM_W(-0X7A08, ctx->r1) = 0;
    // 0x80009B70: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80009B74: sw          $zero, -0x79C0($at)
    MEM_W(-0X79C0, ctx->r1) = 0;
    // 0x80009B78: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80009B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80009B80: sw          $zero, -0x7978($at)
    MEM_W(-0X7978, ctx->r1) = 0;
    // 0x80009B84: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80009B88: sw          $zero, -0x7930($at)
    MEM_W(-0X7930, ctx->r1) = 0;
    // 0x80009B8C: jr          $ra
    // 0x80009B90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80009B90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80009B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009B94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80009B98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80009B9C: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80009BA0: lwc1        $f2, 0x28($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80009BA4: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x80009BA8: lwc1        $f0, 0x24($t0)
    ctx->f0.u32l = MEM_W(ctx->r8, 0X24);
    // 0x80009BAC: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x80009BB0: lwc1        $f8, 0xC($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XC);
    // 0x80009BB4: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80009BB8: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80009BBC: lwc1        $f12, 0x2C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80009BC0: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80009BC4: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x80009BC8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80009BCC: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x80009BD0: lw          $a0, 0x40($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X40);
    // 0x80009BD4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80009BD8: lwc1        $f4, 0x10($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X10);
    // 0x80009BDC: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80009BE0: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80009BE4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80009BE8: lwc1        $f8, 0x14($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X14);
    // 0x80009BEC: nop

    // 0x80009BF0: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x80009BF4: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80009BF8: lwc1        $f4, 0x18($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X18);
    // 0x80009BFC: nop

    // 0x80009C00: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80009C04: lwc1        $f6, 0x1C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80009C08: nop

    // 0x80009C0C: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x80009C10: lwc1        $f8, 0x20($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X20);
    // 0x80009C14: jal         0x80008E8C
    // 0x80009C18: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    func_80008E8C(rdram, ctx);
        goto after_0;
    // 0x80009C18: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80009C1C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80009C20: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80009C24: jr          $ra
    // 0x80009C28: nop

    return;
    // 0x80009C28: nop

;}
RECOMP_FUNC void func_80009C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009C2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80009C30: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x80009C34: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80009C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009C3C: or          $t3, $a0, $zero
    ctx->r11 = ctx->r4 | 0;
    // 0x80009C40: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x80009C44: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x80009C48: addiu       $v0, $v0, -0x7928
    ctx->r2 = ADD32(ctx->r2, -0X7928);
    // 0x80009C4C: addiu       $t0, $t0, -0x7A48
    ctx->r8 = ADD32(ctx->r8, -0X7A48);
L_80009C50:
    // 0x80009C50: lw          $t6, 0x40($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X40);
    // 0x80009C54: nop

    // 0x80009C58: bne         $t6, $zero, L_80009CFC
    if (ctx->r14 != 0) {
        // 0x80009C5C: nop
    
            goto L_80009CFC;
    }
    // 0x80009C5C: nop

    // 0x80009C60: sw          $t3, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r11;
    // 0x80009C64: lwc1        $f4, 0x0($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80009C68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80009C6C: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
    // 0x80009C70: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x80009C74: addiu       $a0, $t0, 0xC
    ctx->r4 = ADD32(ctx->r8, 0XC);
    // 0x80009C78: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x80009C7C: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80009C80: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80009C84: swc1        $f8, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f8.u32l;
    // 0x80009C88: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80009C8C: addiu       $a2, $t0, 0x30
    ctx->r6 = ADD32(ctx->r8, 0X30);
    // 0x80009C90: swc1        $f10, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f10.u32l;
    // 0x80009C94: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80009C98: nop

    // 0x80009C9C: swc1        $f4, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f4.u32l;
    // 0x80009CA0: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80009CA4: nop

    // 0x80009CA8: swc1        $f6, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f6.u32l;
    // 0x80009CAC: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80009CB0: nop

    // 0x80009CB4: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x80009CB8: lwc1        $f10, 0x4($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80009CBC: nop

    // 0x80009CC0: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
    // 0x80009CC4: lwc1        $f4, 0x8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80009CC8: sw          $zero, 0x44($t0)
    MEM_W(0X44, ctx->r8) = 0;
    // 0x80009CCC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80009CD0: swc1        $f0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f0.u32l;
    // 0x80009CD4: swc1        $f0, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f0.u32l;
    // 0x80009CD8: swc1        $f0, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f0.u32l;
    // 0x80009CDC: jal         0x80028850
    // 0x80009CE0: swc1        $f4, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f4.u32l;
    func_80028850(rdram, ctx);
        goto after_0;
    // 0x80009CE0: swc1        $f4, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f4.u32l;
    after_0:
    // 0x80009CE4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80009CE8: jal         0x80009B94
    // 0x80009CEC: nop

    func_80009B94(rdram, ctx);
        goto after_1;
    // 0x80009CEC: nop

    after_1:
    // 0x80009CF0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80009CF4: b           L_80009D1C
    // 0x80009CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80009D1C;
    // 0x80009CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80009CFC:
    // 0x80009CFC: addiu       $t0, $t0, 0x48
    ctx->r8 = ADD32(ctx->r8, 0X48);
    // 0x80009D00: bne         $t0, $v0, L_80009C50
    if (ctx->r8 != ctx->r2) {
        // 0x80009D04: nop
    
            goto L_80009C50;
    }
    // 0x80009D04: nop

    // 0x80009D08: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009D0C: jal         0x80000FBC
    // 0x80009D10: addiu       $a0, $a0, 0x4D90
    ctx->r4 = ADD32(ctx->r4, 0X4D90);
    func_80000FBC(rdram, ctx);
        goto after_2;
    // 0x80009D10: addiu       $a0, $a0, 0x4D90
    ctx->r4 = ADD32(ctx->r4, 0X4D90);
    after_2:
    // 0x80009D14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80009D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80009D1C:
    // 0x80009D1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80009D20: jr          $ra
    // 0x80009D24: nop

    return;
    // 0x80009D24: nop

;}
RECOMP_FUNC void func_80009D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009D28: jr          $ra
    // 0x80009D2C: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
    return;
    // 0x80009D2C: sw          $zero, 0x40($a0)
    MEM_W(0X40, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80009D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009D30: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x80009D34: nop

    // 0x80009D38: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80009D3C: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x80009D40: nop

    // 0x80009D44: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x80009D48: lwc1        $f8, 0x2C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x80009D4C: jr          $ra
    // 0x80009D50: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x80009D50: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80009D54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009D54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80009D58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009D5C: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80009D60: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80009D64: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x80009D68: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80009D6C: nop

    // 0x80009D70: swc1        $f6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f6.u32l;
    // 0x80009D74: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80009D78: jal         0x80009B94
    // 0x80009D7C: swc1        $f8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f8.u32l;
    func_80009B94(rdram, ctx);
        goto after_0;
    // 0x80009D7C: swc1        $f8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f8.u32l;
    after_0:
    // 0x80009D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80009D84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80009D88: jr          $ra
    // 0x80009D8C: nop

    return;
    // 0x80009D8C: nop

;}
