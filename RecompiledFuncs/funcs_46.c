#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_5E04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40005E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40005E0C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x40005E10: jal         0x400016B4
    // 0x40005E14: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40005E14: nop

    after_0:
    // 0x40005E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40005E1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40005E20: jr          $ra
    // 0x40005E24: nop

    return;
    // 0x40005E24: nop

;}
RECOMP_FUNC void ovl_actor_main_5E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005E28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40005E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40005E30: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x40005E34: jal         0x400016B4
    // 0x40005E38: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_0;
    // 0x40005E38: nop

    after_0:
    // 0x40005E3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40005E40: beq         $v0, $at, L_40005E70
    if (ctx->r2 == ctx->r1) {
        // 0x40005E44: addiu       $t6, $zero, -0x1
        ctx->r14 = ADD32(0, -0X1);
            goto L_40005E70;
    }
    // 0x40005E44: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40005E48: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x40005E4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40005E50: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x40005E54: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x40005E58: lwc1        $f6, 0x320($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X320);
    // 0x40005E5C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x40005E60: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x40005E64: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x40005E68: jal         0x400006C4
    // 0x40005E6C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40005E6C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
L_40005E70:
    // 0x40005E70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40005E74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40005E78: jr          $ra
    // 0x40005E7C: nop

    return;
    // 0x40005E7C: nop

;}
RECOMP_FUNC void ovl_actor_main_5E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005E80: jr          $ra
    // 0x40005E84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x40005E84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_actor_main_5E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005E88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40005E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40005E90: lhu         $v0, 0x20($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X20);
    // 0x40005E94: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x40005E98: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x40005E9C: beq         $t6, $zero, L_40005EBC
    if (ctx->r14 == 0) {
        // 0x40005EA0: lui         $at, 0x4002
        ctx->r1 = S32(0X4002 << 16);
            goto L_40005EBC;
    }
    // 0x40005EA0: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40005EA4: andi        $t8, $v0, 0xF7FF
    ctx->r24 = ctx->r2 & 0XF7FF;
    // 0x40005EA8: sh          $t8, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r24;
    // 0x40005EAC: ori         $t9, $t8, 0x400
    ctx->r25 = ctx->r24 | 0X400;
    // 0x40005EB0: sh          $t9, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r25;
    // 0x40005EB4: b           L_40005ED8
    // 0x40005EB8: andi        $v0, $t9, 0xFFFF
    ctx->r2 = ctx->r25 & 0XFFFF;
        goto L_40005ED8;
    // 0x40005EB8: andi        $v0, $t9, 0xFFFF
    ctx->r2 = ctx->r25 & 0XFFFF;
L_40005EBC:
    // 0x40005EBC: andi        $t0, $v0, 0x400
    ctx->r8 = ctx->r2 & 0X400;
    // 0x40005EC0: beq         $t0, $zero, L_40005ED8
    if (ctx->r8 == 0) {
        // 0x40005EC4: andi        $t2, $v0, 0xFBFF
        ctx->r10 = ctx->r2 & 0XFBFF;
            goto L_40005ED8;
    }
    // 0x40005EC4: andi        $t2, $v0, 0xFBFF
    ctx->r10 = ctx->r2 & 0XFBFF;
    // 0x40005EC8: ori         $t3, $t2, 0x800
    ctx->r11 = ctx->r10 | 0X800;
    // 0x40005ECC: sh          $t2, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r10;
    // 0x40005ED0: sh          $t3, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r11;
    // 0x40005ED4: andi        $v0, $t3, 0xFFFF
    ctx->r2 = ctx->r11 & 0XFFFF;
L_40005ED8:
    // 0x40005ED8: andi        $t4, $v0, 0x200
    ctx->r12 = ctx->r2 & 0X200;
    // 0x40005EDC: beq         $t4, $zero, L_40005EF8
    if (ctx->r12 == 0) {
        // 0x40005EE0: andi        $t8, $v0, 0x100
        ctx->r24 = ctx->r2 & 0X100;
            goto L_40005EF8;
    }
    // 0x40005EE0: andi        $t8, $v0, 0x100
    ctx->r24 = ctx->r2 & 0X100;
    // 0x40005EE4: andi        $t6, $v0, 0xFDFF
    ctx->r14 = ctx->r2 & 0XFDFF;
    // 0x40005EE8: sh          $t6, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r14;
    // 0x40005EEC: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x40005EF0: b           L_40005F0C
    // 0x40005EF4: sh          $t7, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r15;
        goto L_40005F0C;
    // 0x40005EF4: sh          $t7, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r15;
L_40005EF8:
    // 0x40005EF8: beq         $t8, $zero, L_40005F0C
    if (ctx->r24 == 0) {
        // 0x40005EFC: andi        $t0, $v0, 0xFEFF
        ctx->r8 = ctx->r2 & 0XFEFF;
            goto L_40005F0C;
    }
    // 0x40005EFC: andi        $t0, $v0, 0xFEFF
    ctx->r8 = ctx->r2 & 0XFEFF;
    // 0x40005F00: sh          $t0, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r8;
    // 0x40005F04: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x40005F08: sh          $t1, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r9;
L_40005F0C:
    // 0x40005F0C: lb          $t2, 0x26($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X26);
    // 0x40005F10: lb          $t4, 0x27($a3)
    ctx->r12 = MEM_B(ctx->r7, 0X27);
    // 0x40005F14: negu        $t3, $t2
    ctx->r11 = SUB32(0, ctx->r10);
    // 0x40005F18: negu        $t5, $t4
    ctx->r13 = SUB32(0, ctx->r12);
    // 0x40005F1C: sb          $t3, 0x26($a3)
    MEM_B(0X26, ctx->r7) = ctx->r11;
    // 0x40005F20: sb          $t5, 0x27($a3)
    MEM_B(0X27, ctx->r7) = ctx->r13;
    // 0x40005F24: lwc1        $f4, -0x18F0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X18F0);
    // 0x40005F28: lwc1        $f0, 0x2C($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x40005F2C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40005F30: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x40005F34: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40005F38: bc1t        L_40005F7C
    if (c1cs) {
        // 0x40005F3C: addiu       $a2, $sp, 0x20
        ctx->r6 = ADD32(ctx->r29, 0X20);
            goto L_40005F7C;
    }
    // 0x40005F3C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x40005F40: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40005F44: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x40005F48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40005F4C: nop

    // 0x40005F50: add.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x40005F54: swc1        $f8, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f8.u32l;
    // 0x40005F58: lwc1        $f0, 0x2C($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x40005F5C: nop

    // 0x40005F60: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x40005F64: nop

    // 0x40005F68: bc1f        L_40005F98
    if (!c1cs) {
        // 0x40005F6C: nop
    
            goto L_40005F98;
    }
    // 0x40005F6C: nop

    // 0x40005F70: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x40005F74: b           L_40005F98
    // 0x40005F78: swc1        $f10, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f10.u32l;
        goto L_40005F98;
    // 0x40005F78: swc1        $f10, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f10.u32l;
L_40005F7C:
    // 0x40005F7C: lw          $a0, 0x10($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X10);
    // 0x40005F80: jal         0x400006C4
    // 0x40005F84: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40005F84: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x40005F88: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x40005F8C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x40005F90: nop

    // 0x40005F94: swc1        $f16, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f16.u32l;
L_40005F98:
    // 0x40005F98: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x40005F9C: lwc1        $f4, 0x30($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X30);
    // 0x40005FA0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x40005FA4: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x40005FA8: nop

    // 0x40005FAC: bc1f        L_40005FC4
    if (!c1cs) {
        // 0x40005FB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40005FC4;
    }
    // 0x40005FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40005FB4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40005FB8: nop

    // 0x40005FBC: swc1        $f6, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f6.u32l;
    // 0x40005FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40005FC4:
    // 0x40005FC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40005FC8: jr          $ra
    // 0x40005FCC: nop

    return;
    // 0x40005FCC: nop

;}
RECOMP_FUNC void ovl_actor_main_5FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40005FD0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40005FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40005FD8: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x40005FDC: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x40005FE0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x40005FE4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x40005FE8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x40005FEC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x40005FF0: lw          $t8, 0x350($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X350);
    // 0x40005FF4: addiu       $t9, $zero, 0x27
    ctx->r25 = ADD32(0, 0X27);
    // 0x40005FF8: addiu       $t0, $sp, 0x1C
    ctx->r8 = ADD32(ctx->r29, 0X1C);
    // 0x40005FFC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x40006000: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x40006004: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x40006008: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4000600C: jal         0x40001258
    // 0x40006010: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40006010: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    after_0:
    // 0x40006014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40006018: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4000601C: jr          $ra
    // 0x40006020: nop

    return;
    // 0x40006020: nop

;}
RECOMP_FUNC void ovl_actor_main_6024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006024: lhu         $t6, 0x22($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X22);
    // 0x40006028: addiu       $v0, $a0, 0x34C
    ctx->r2 = ADD32(ctx->r4, 0X34C);
    // 0x4000602C: andi        $t7, $t6, 0xC000
    ctx->r15 = ctx->r14 & 0XC000;
    // 0x40006030: beq         $t7, $zero, L_40006048
    if (ctx->r15 == 0) {
        // 0x40006034: nop
    
            goto L_40006048;
    }
    // 0x40006034: nop

    // 0x40006038: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x4000603C: nop

    // 0x40006040: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x40006044: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
L_40006048:
    // 0x40006048: addiu       $v0, $a0, 0x34C
    ctx->r2 = ADD32(ctx->r4, 0X34C);
    // 0x4000604C: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x40006050: nop

    // 0x40006054: lhu         $t1, 0x4($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X4);
    // 0x40006058: nop

    // 0x4000605C: sh          $t1, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r9;
    // 0x40006060: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x40006064: nop

    // 0x40006068: lhu         $t3, 0x6($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X6);
    // 0x4000606C: nop

    // 0x40006070: sh          $t3, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r11;
    // 0x40006074: lw          $t4, 0x8($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X8);
    // 0x40006078: nop

    // 0x4000607C: lhu         $t5, 0x8($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X8);
    // 0x40006080: nop

    // 0x40006084: sh          $t5, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r13;
    // 0x40006088: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x4000608C: nop

    // 0x40006090: lb          $t7, 0xA($t6)
    ctx->r15 = MEM_B(ctx->r14, 0XA);
    // 0x40006094: nop

    // 0x40006098: sb          $t7, 0x26($a0)
    MEM_B(0X26, ctx->r4) = ctx->r15;
    // 0x4000609C: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x400060A0: nop

    // 0x400060A4: lb          $t9, 0xB($t8)
    ctx->r25 = MEM_B(ctx->r24, 0XB);
    // 0x400060A8: nop

    // 0x400060AC: sb          $t9, 0x27($a0)
    MEM_B(0X27, ctx->r4) = ctx->r25;
    // 0x400060B0: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    // 0x400060B4: nop

    // 0x400060B8: lwc1        $f4, 0xC($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XC);
    // 0x400060BC: nop

    // 0x400060C0: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x400060C4: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x400060C8: nop

    // 0x400060CC: lwc1        $f6, 0x10($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X10);
    // 0x400060D0: nop

    // 0x400060D4: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x400060D8: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x400060DC: nop

    // 0x400060E0: lwc1        $f8, 0x14($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X14);
    // 0x400060E4: jr          $ra
    // 0x400060E8: swc1        $f8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x400060E8: swc1        $f8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void ovl_actor_main_60EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400060EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x400060F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400060F4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x400060F8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x400060FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40006100: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x40006104: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x40006108: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x4000610C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x40006110: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x40006114: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x40006118: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x4000611C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x40006120: jal         0x40001258
    // 0x40006124: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40006124: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x40006128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000612C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x40006130: jr          $ra
    // 0x40006134: nop

    return;
    // 0x40006134: nop

;}
RECOMP_FUNC void ovl_actor_main_6138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006138: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4000613C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40006140: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40006144: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40006148: jal         0x400007D8
    // 0x4000614C: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    ovl_actor_main_7D8(rdram, ctx);
        goto after_0;
    // 0x4000614C: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_0:
    // 0x40006150: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x40006154: nop

    // 0x40006158: sll         $t6, $v0, 9
    ctx->r14 = S32(ctx->r2 << 9);
    // 0x4000615C: bgez        $t6, L_40006174
    if (SIGNED(ctx->r14) >= 0) {
        // 0x40006160: sll         $t7, $v0, 10
        ctx->r15 = S32(ctx->r2 << 10);
            goto L_40006174;
    }
    // 0x40006160: sll         $t7, $v0, 10
    ctx->r15 = S32(ctx->r2 << 10);
    // 0x40006164: bltz        $t7, L_40006174
    if (SIGNED(ctx->r15) < 0) {
        // 0x40006168: nop
    
            goto L_40006174;
    }
    // 0x40006168: nop

    // 0x4000616C: jal         0x40006024
    // 0x40006170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_6024(rdram, ctx);
        goto after_1;
    // 0x40006170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_40006174:
    // 0x40006174: jal         0x400063F0
    // 0x40006178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_2;
    // 0x40006178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4000617C: beq         $v0, $zero, L_400061DC
    if (ctx->r2 == 0) {
        // 0x40006180: nop
    
            goto L_400061DC;
    }
    // 0x40006180: nop

    // 0x40006184: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x40006188: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4000618C: bne         $v1, $at, L_400061AC
    if (ctx->r3 != ctx->r1) {
        // 0x40006190: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_400061AC;
    }
    // 0x40006190: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40006194: lhu         $t8, 0x22($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X22);
    // 0x40006198: nop

    // 0x4000619C: andi        $t9, $t8, 0x3FFF
    ctx->r25 = ctx->r24 & 0X3FFF;
    // 0x400061A0: b           L_400061DC
    // 0x400061A4: sh          $t9, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r25;
        goto L_400061DC;
    // 0x400061A4: sh          $t9, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r25;
    // 0x400061A8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_400061AC:
    // 0x400061AC: bne         $v1, $at, L_400061CC
    if (ctx->r3 != ctx->r1) {
        // 0x400061B0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_400061CC;
    }
    // 0x400061B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x400061B4: lhu         $t0, 0x22($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X22);
    // 0x400061B8: nop

    // 0x400061BC: andi        $t1, $t0, 0x3FFF
    ctx->r9 = ctx->r8 & 0X3FFF;
    // 0x400061C0: b           L_400061DC
    // 0x400061C4: sh          $t1, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r9;
        goto L_400061DC;
    // 0x400061C4: sh          $t1, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r9;
    // 0x400061C8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_400061CC:
    // 0x400061CC: bne         $v1, $at, L_400061DC
    if (ctx->r3 != ctx->r1) {
        // 0x400061D0: nop
    
            goto L_400061DC;
    }
    // 0x400061D0: nop

    // 0x400061D4: jal         0x40005E88
    // 0x400061D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_5E88(rdram, ctx);
        goto after_3;
    // 0x400061D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_400061DC:
    // 0x400061DC: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x400061E0: nop

    // 0x400061E4: sll         $t2, $v0, 10
    ctx->r10 = S32(ctx->r2 << 10);
    // 0x400061E8: bgez        $t2, L_40006208
    if (SIGNED(ctx->r10) >= 0) {
        // 0x400061EC: sll         $t3, $v0, 9
        ctx->r11 = S32(ctx->r2 << 9);
            goto L_40006208;
    }
    // 0x400061EC: sll         $t3, $v0, 9
    ctx->r11 = S32(ctx->r2 << 9);
    // 0x400061F0: bltz        $t3, L_40006208
    if (SIGNED(ctx->r11) < 0) {
        // 0x400061F4: nop
    
            goto L_40006208;
    }
    // 0x400061F4: nop

    // 0x400061F8: lhu         $t4, 0x22($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X22);
    // 0x400061FC: nop

    // 0x40006200: andi        $t5, $t4, 0x7FFF
    ctx->r13 = ctx->r12 & 0X7FFF;
    // 0x40006204: sh          $t5, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r13;
L_40006208:
    // 0x40006208: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x4000620C: nop

    // 0x40006210: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x40006214: nop

    // 0x40006218: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x4000621C: bgez        $t8, L_40006240
    if (SIGNED(ctx->r24) >= 0) {
        // 0x40006220: nop
    
            goto L_40006240;
    }
    // 0x40006220: nop

    // 0x40006224: lhu         $t9, 0x22($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X22);
    // 0x40006228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000622C: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x40006230: beq         $t0, $zero, L_40006240
    if (ctx->r8 == 0) {
        // 0x40006234: nop
    
            goto L_40006240;
    }
    // 0x40006234: nop

    // 0x40006238: jal         0x40001A8C
    // 0x4000623C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_4;
    // 0x4000623C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_4:
L_40006240:
    // 0x40006240: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x40006244: nop

    // 0x40006248: andi        $t1, $v0, 0x4000
    ctx->r9 = ctx->r2 & 0X4000;
    // 0x4000624C: beq         $t1, $zero, L_400062CC
    if (ctx->r9 == 0) {
        // 0x40006250: andi        $t5, $v0, 0x8000
        ctx->r13 = ctx->r2 & 0X8000;
            goto L_400062CC;
    }
    // 0x40006250: andi        $t5, $v0, 0x8000
    ctx->r13 = ctx->r2 & 0X8000;
    // 0x40006254: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x40006258: nop

    // 0x4000625C: andi        $t3, $t2, 0x8
    ctx->r11 = ctx->r10 & 0X8;
    // 0x40006260: beq         $t3, $zero, L_400062A8
    if (ctx->r11 == 0) {
        // 0x40006264: nop
    
            goto L_400062A8;
    }
    // 0x40006264: nop

    // 0x40006268: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4000626C: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x40006270: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x40006274: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x40006278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000627C: bc1t        L_40006294
    if (c1cs) {
        // 0x40006280: nop
    
            goto L_40006294;
    }
    // 0x40006280: nop

    // 0x40006284: jal         0x40001A8C
    // 0x40006288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_5;
    // 0x40006288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x4000628C: b           L_400062A0
    // 0x40006290: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
        goto L_400062A0;
    // 0x40006290: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
L_40006294:
    // 0x40006294: jal         0x40001A8C
    // 0x40006298: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_6;
    // 0x40006298: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_6:
    // 0x4000629C: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
L_400062A0:
    // 0x400062A0: b           L_400062CC
    // 0x400062A4: andi        $t5, $v0, 0x8000
    ctx->r13 = ctx->r2 & 0X8000;
        goto L_400062CC;
    // 0x400062A4: andi        $t5, $v0, 0x8000
    ctx->r13 = ctx->r2 & 0X8000;
L_400062A8:
    // 0x400062A8: lw          $t4, 0xC8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0XC8);
    // 0x400062AC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x400062B0: beq         $t4, $at, L_400062C8
    if (ctx->r12 == ctx->r1) {
        // 0x400062B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400062C8;
    }
    // 0x400062B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400062B8: jal         0x40001A8C
    // 0x400062BC: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_7;
    // 0x400062BC: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    after_7:
    // 0x400062C0: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x400062C4: nop

L_400062C8:
    // 0x400062C8: andi        $t5, $v0, 0x8000
    ctx->r13 = ctx->r2 & 0X8000;
L_400062CC:
    // 0x400062CC: beq         $t5, $zero, L_40006374
    if (ctx->r13 == 0) {
        // 0x400062D0: andi        $t2, $v0, 0x10
        ctx->r10 = ctx->r2 & 0X10;
            goto L_40006374;
    }
    // 0x400062D0: andi        $t2, $v0, 0x10
    ctx->r10 = ctx->r2 & 0X10;
    // 0x400062D4: lw          $t6, 0x90($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X90);
    // 0x400062D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400062DC: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x400062E0: beq         $t7, $zero, L_40006360
    if (ctx->r15 == 0) {
        // 0x400062E4: nop
    
            goto L_40006360;
    }
    // 0x400062E4: nop

    // 0x400062E8: lw          $t8, 0x2F4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X2F4);
    // 0x400062EC: nop

    // 0x400062F0: bne         $t8, $zero, L_4000632C
    if (ctx->r24 != 0) {
        // 0x400062F4: nop
    
            goto L_4000632C;
    }
    // 0x400062F4: nop

    // 0x400062F8: lw          $a1, 0x2EC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2EC);
    // 0x400062FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40006300: beq         $a1, $at, L_4000632C
    if (ctx->r5 == ctx->r1) {
        // 0x40006304: nop
    
            goto L_4000632C;
    }
    // 0x40006304: nop

    // 0x40006308: jal         0x40002A7C
    // 0x4000630C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_2A7C(rdram, ctx);
        goto after_8;
    // 0x4000630C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x40006310: lw          $t9, 0x2EC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X2EC);
    // 0x40006314: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40006318: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x4000631C: sw          $t0, 0x2DC($s0)
    MEM_W(0X2DC, ctx->r16) = ctx->r8;
    // 0x40006320: sw          $t1, 0x2EC($s0)
    MEM_W(0X2EC, ctx->r16) = ctx->r9;
    // 0x40006324: b           L_40006354
    // 0x40006328: sw          $t9, 0x2D4($s0)
    MEM_W(0X2D4, ctx->r16) = ctx->r25;
        goto L_40006354;
    // 0x40006328: sw          $t9, 0x2D4($s0)
    MEM_W(0X2D4, ctx->r16) = ctx->r25;
L_4000632C:
    // 0x4000632C: lw          $a1, 0x2D4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X2D4);
    // 0x40006330: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40006334: beq         $a1, $at, L_4000634C
    if (ctx->r5 == ctx->r1) {
        // 0x40006338: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000634C;
    }
    // 0x40006338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000633C: jal         0x40002A7C
    // 0x40006340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_2A7C(rdram, ctx);
        goto after_9;
    // 0x40006340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x40006344: b           L_40006358
    // 0x40006348: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
        goto L_40006358;
    // 0x40006348: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
L_4000634C:
    // 0x4000634C: jal         0x40001A8C
    // 0x40006350: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_10;
    // 0x40006350: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_10:
L_40006354:
    // 0x40006354: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
L_40006358:
    // 0x40006358: b           L_40006374
    // 0x4000635C: andi        $t2, $v0, 0x10
    ctx->r10 = ctx->r2 & 0X10;
        goto L_40006374;
    // 0x4000635C: andi        $t2, $v0, 0x10
    ctx->r10 = ctx->r2 & 0X10;
L_40006360:
    // 0x40006360: jal         0x40001A8C
    // 0x40006364: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_11;
    // 0x40006364: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_11:
    // 0x40006368: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x4000636C: nop

    // 0x40006370: andi        $t2, $v0, 0x10
    ctx->r10 = ctx->r2 & 0X10;
L_40006374:
    // 0x40006374: beq         $t2, $zero, L_40006394
    if (ctx->r10 == 0) {
        // 0x40006378: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40006394;
    }
    // 0x40006378: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000637C: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x40006380: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x40006384: jal         0x400060EC
    // 0x40006388: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_actor_main_60EC(rdram, ctx);
        goto after_12;
    // 0x40006388: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_12:
    // 0x4000638C: lhu         $v0, 0x22($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X22);
    // 0x40006390: nop

L_40006394:
    // 0x40006394: andi        $t3, $v0, 0x2020
    ctx->r11 = ctx->r2 & 0X2020;
    // 0x40006398: beq         $t3, $zero, L_400063B0
    if (ctx->r11 == 0) {
        // 0x4000639C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400063B0;
    }
    // 0x4000639C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400063A0: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x400063A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x400063A8: jal         0x400060EC
    // 0x400063AC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_actor_main_60EC(rdram, ctx);
        goto after_13;
    // 0x400063AC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_13:
L_400063B0:
    // 0x400063B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400063B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x400063B8: jr          $ra
    // 0x400063BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x400063BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_63C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400063C0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x400063C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400063C8: bne         $v0, $at, L_400063D8
    if (ctx->r2 != ctx->r1) {
        // 0x400063CC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_400063D8;
    }
    // 0x400063CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x400063D0: jr          $ra
    // 0x400063D4: addiu       $v0, $a0, 0x324
    ctx->r2 = ADD32(ctx->r4, 0X324);
    return;
    // 0x400063D4: addiu       $v0, $a0, 0x324
    ctx->r2 = ADD32(ctx->r4, 0X324);
L_400063D8:
    // 0x400063D8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x400063DC: bne         $v0, $at, L_400063E8
    if (ctx->r2 != ctx->r1) {
        // 0x400063E0: nop
    
            goto L_400063E8;
    }
    // 0x400063E0: nop

    // 0x400063E4: addiu       $v1, $a0, 0x324
    ctx->r3 = ADD32(ctx->r4, 0X324);
L_400063E8:
    // 0x400063E8: jr          $ra
    // 0x400063EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x400063EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_63F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400063F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400063F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400063F8: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x400063FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40006400: andi        $t7, $t6, 0x100
    ctx->r15 = ctx->r14 & 0X100;
    // 0x40006404: beq         $t7, $zero, L_4000641C
    if (ctx->r15 == 0) {
        // 0x40006408: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000641C;
    }
    // 0x40006408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4000640C: jal         0x400063C0
    // 0x40006410: nop

    ovl_actor_main_63C0(rdram, ctx);
        goto after_0;
    // 0x40006410: nop

    after_0:
    // 0x40006414: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x40006418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000641C:
    // 0x4000641C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40006420: jr          $ra
    // 0x40006424: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40006424: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_6428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006428: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000642C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x40006430: sll         $t7, $t6, 15
    ctx->r15 = S32(ctx->r14 << 15);
    // 0x40006434: bgez        $t7, L_40006450
    if (SIGNED(ctx->r15) >= 0) {
        // 0x40006438: nop
    
            goto L_40006450;
    }
    // 0x40006438: nop

    // 0x4000643C: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x40006440: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40006444: bne         $t8, $at, L_40006450
    if (ctx->r24 != ctx->r1) {
        // 0x40006448: nop
    
            goto L_40006450;
    }
    // 0x40006448: nop

    // 0x4000644C: addiu       $v1, $a0, 0x340
    ctx->r3 = ADD32(ctx->r4, 0X340);
L_40006450:
    // 0x40006450: jr          $ra
    // 0x40006454: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x40006454: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_actor_main_6458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006458: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4000645C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40006460: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x40006464: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x40006468: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x4000646C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x40006470: jal         0x400006C4
    // 0x40006474: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40006474: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x40006478: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x4000647C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x40006480: beq         $t7, $zero, L_4000649C
    if (ctx->r15 == 0) {
        // 0x40006484: ori         $t1, $t0, 0x4
        ctx->r9 = ctx->r8 | 0X4;
            goto L_4000649C;
    }
    // 0x40006484: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x40006488: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x4000648C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x40006490: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x40006494: b           L_400064A0
    // 0x40006498: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_400064A0;
    // 0x40006498: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_4000649C:
    // 0x4000649C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_400064A0:
    // 0x400064A0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x400064A4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x400064A8: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    // 0x400064AC: jal         0x400006C4
    // 0x400064B0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x400064B0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x400064B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400064B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x400064BC: jr          $ra
    // 0x400064C0: nop

    return;
    // 0x400064C0: nop

;}
RECOMP_FUNC void ovl_actor_main_64C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400064C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400064C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400064CC: jal         0x400063F0
    // 0x400064D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x400064D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x400064D4: beq         $v0, $zero, L_400064E8
    if (ctx->r2 == 0) {
        // 0x400064D8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_400064E8;
    }
    // 0x400064D8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x400064DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x400064E0: jal         0x40007BF8
    // 0x400064E4: nop

    ovl_actor_main_7BF8(rdram, ctx);
        goto after_1;
    // 0x400064E4: nop

    after_1:
L_400064E8:
    // 0x400064E8: jal         0x4000073C
    // 0x400064EC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_actor_main_73C(rdram, ctx);
        goto after_2;
    // 0x400064EC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_2:
    // 0x400064F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400064F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400064F8: jr          $ra
    // 0x400064FC: nop

    return;
    // 0x400064FC: nop

;}
RECOMP_FUNC void ovl_actor_main_6500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006500: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x40006504: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40006508: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4000650C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x40006510: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x40006514: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40006518: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x4000651C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40006520: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x40006524: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x40006528: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x4000652C: jal         0x40007BF8
    // 0x40006530: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_actor_main_7BF8(rdram, ctx);
        goto after_0;
    // 0x40006530: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x40006534: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x40006538: nop

    // 0x4000653C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x40006540: sltiu       $at, $t9, 0xB
    ctx->r1 = ctx->r25 < 0XB ? 1 : 0;
    // 0x40006544: beq         $at, $zero, L_40006708
    if (ctx->r1 == 0) {
        // 0x40006548: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_40006708;
    }
    // 0x40006548: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x4000654C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x40006550: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40006554: addu        $at, $at, $t9
    gpr jr_addend_40006560 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x40006558: lw          $t9, -0x18EC($at)
    ctx->r25 = ADD32(ctx->r1, -0X18EC);
    // 0x4000655C: nop

    // 0x40006560: jr          $t9
    // 0x40006564: nop

    switch (jr_addend_40006560 >> 2) {
        case 0: goto L_40006568; break;
        case 1: goto L_40006598; break;
        case 2: goto L_400065FC; break;
        case 3: goto L_400066A4; break;
        case 4: goto L_400066A4; break;
        case 5: goto L_40006648; break;
        case 6: goto L_400065C8; break;
        case 7: goto L_400066B0; break;
        case 8: goto L_400066E0; break;
        case 9: goto L_400066C4; break;
        case 10: goto L_40006704; break;
        default: switch_error(__func__, 0x40006560, 0x4001E714);
    }
    // 0x40006564: nop

L_40006568:
    // 0x40006568: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x4000656C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x40006570: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x40006574: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    // 0x40006578: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x4000657C: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
    // 0x40006580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006584: addiu       $a1, $zero, 0x377
    ctx->r5 = ADD32(0, 0X377);
    // 0x40006588: jal         0x4000115C
    // 0x4000658C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x4000658C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x40006590: b           L_4000670C
    // 0x40006594: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
        goto L_4000670C;
    // 0x40006594: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
L_40006598:
    // 0x40006598: lw          $t3, 0x90($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X90);
    // 0x4000659C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x400065A0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x400065A4: sw          $t4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r12;
    // 0x400065A8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x400065AC: sw          $t5, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r13;
    // 0x400065B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400065B4: addiu       $a1, $zero, 0x378
    ctx->r5 = ADD32(0, 0X378);
    // 0x400065B8: jal         0x4000115C
    // 0x400065BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x400065BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x400065C0: b           L_4000670C
    // 0x400065C4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
        goto L_4000670C;
    // 0x400065C4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
L_400065C8:
    // 0x400065C8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x400065CC: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x400065D0: jal         0x400006C4
    // 0x400065D4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x400065D4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x400065D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400065DC: jal         0x40006458
    // 0x400065E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_6458(rdram, ctx);
        goto after_4;
    // 0x400065E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x400065E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400065E8: addiu       $a1, $zero, 0x37B
    ctx->r5 = ADD32(0, 0X37B);
    // 0x400065EC: jal         0x4000115C
    // 0x400065F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_5;
    // 0x400065F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x400065F4: b           L_4000670C
    // 0x400065F8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
        goto L_4000670C;
    // 0x400065F8: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
L_400065FC:
    // 0x400065FC: addiu       $t6, $zero, 0x3AC
    ctx->r14 = ADD32(0, 0X3AC);
    // 0x40006600: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x40006604: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40006608: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x4000660C: jal         0x400006C4
    // 0x40006610: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_6;
    // 0x40006610: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x40006614: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40006618: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x4000661C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006620: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40006624: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40006628: jal         0x40008D20
    // 0x4000662C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_7;
    // 0x4000662C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_7:
    // 0x40006630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006634: addiu       $a1, $zero, 0x379
    ctx->r5 = ADD32(0, 0X379);
    // 0x40006638: jal         0x4000115C
    // 0x4000663C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_8;
    // 0x4000663C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x40006640: b           L_4000670C
    // 0x40006644: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
        goto L_4000670C;
    // 0x40006644: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
L_40006648:
    // 0x40006648: addiu       $t8, $zero, 0xC8
    ctx->r24 = ADD32(0, 0XC8);
    // 0x4000664C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x40006650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006654: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x40006658: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4000665C: jal         0x4001096C
    // 0x40006660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_1096C(rdram, ctx);
        goto after_9;
    // 0x40006660: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x40006664: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x40006668: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4000666C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x40006670: sw          $t9, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r25;
    // 0x40006674: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x40006678: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x4000667C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006680: ori         $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 | 0X4000;
    // 0x40006684: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    // 0x40006688: ori         $t3, $t1, 0x10
    ctx->r11 = ctx->r9 | 0X10;
    // 0x4000668C: sw          $t3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r11;
    // 0x40006690: addiu       $a1, $zero, 0x37A
    ctx->r5 = ADD32(0, 0X37A);
    // 0x40006694: jal         0x4000115C
    // 0x40006698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_10;
    // 0x40006698: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x4000669C: b           L_4000670C
    // 0x400066A0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
        goto L_4000670C;
    // 0x400066A0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
L_400066A4:
    // 0x400066A4: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    // 0x400066A8: b           L_40006708
    // 0x400066AC: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
        goto L_40006708;
    // 0x400066AC: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
L_400066B0:
    // 0x400066B0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x400066B4: jal         0x4000073C
    // 0x400066B8: nop

    ovl_actor_main_73C(rdram, ctx);
        goto after_11;
    // 0x400066B8: nop

    after_11:
    // 0x400066BC: b           L_4000670C
    // 0x400066C0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
        goto L_4000670C;
    // 0x400066C0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
L_400066C4:
    // 0x400066C4: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x400066C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400066CC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x400066D0: jal         0x40009000
    // 0x400066D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_9000(rdram, ctx);
        goto after_12;
    // 0x400066D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x400066D8: b           L_4000670C
    // 0x400066DC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
        goto L_4000670C;
    // 0x400066DC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
L_400066E0:
    // 0x400066E0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x400066E4: jal         0x40000EC8
    // 0x400066E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_EC8(rdram, ctx);
        goto after_13;
    // 0x400066E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x400066EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400066F0: addiu       $a1, $zero, 0x376
    ctx->r5 = ADD32(0, 0X376);
    // 0x400066F4: jal         0x4000115C
    // 0x400066F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_14;
    // 0x400066F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x400066FC: b           L_4000670C
    // 0x40006700: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
        goto L_4000670C;
    // 0x40006700: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
L_40006704:
    // 0x40006704: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_40006708:
    // 0x40006708: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
L_4000670C:
    // 0x4000670C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x40006710: beq         $t4, $zero, L_400067B8
    if (ctx->r12 == 0) {
        // 0x40006714: addiu       $at, $zero, 0x5E
        ctx->r1 = ADD32(0, 0X5E);
            goto L_400067B8;
    }
    // 0x40006714: addiu       $at, $zero, 0x5E
    ctx->r1 = ADD32(0, 0X5E);
    // 0x40006718: bne         $a1, $at, L_4000675C
    if (ctx->r5 != ctx->r1) {
        // 0x4000671C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4000675C;
    }
    // 0x4000671C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006720: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40006724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006728: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000672C: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x40006730: jal         0x4000118C
    // 0x40006734: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_15;
    // 0x40006734: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_15:
    // 0x40006738: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x4000673C: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x40006740: sw          $t5, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r13;
    // 0x40006744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006748: addiu       $a1, $zero, 0xAE
    ctx->r5 = ADD32(0, 0XAE);
    // 0x4000674C: jal         0x4000115C
    // 0x40006750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_16;
    // 0x40006750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x40006754: b           L_40006780
    // 0x40006758: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
        goto L_40006780;
    // 0x40006758: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
L_4000675C:
    // 0x4000675C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40006760: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x40006764: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40006768: jal         0x4000118C
    // 0x4000676C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_17;
    // 0x4000676C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_17:
    // 0x40006770: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40006774: sw          $t6, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r14;
    // 0x40006778: sw          $zero, 0x14($s1)
    MEM_W(0X14, ctx->r17) = 0;
    // 0x4000677C: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
L_40006780:
    // 0x40006780: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x40006784: ori         $t8, $t7, 0x100
    ctx->r24 = ctx->r15 | 0X100;
    // 0x40006788: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
    // 0x4000678C: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x40006790: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x40006794: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x40006798: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    // 0x4000679C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x400067A0: addiu       $t2, $zero, 0x1E0
    ctx->r10 = ADD32(0, 0X1E0);
    // 0x400067A4: bne         $t1, $at, L_400067B4
    if (ctx->r9 != ctx->r1) {
        // 0x400067A8: addiu       $t3, $zero, 0x1E0
        ctx->r11 = ADD32(0, 0X1E0);
            goto L_400067B4;
    }
    // 0x400067A8: addiu       $t3, $zero, 0x1E0
    ctx->r11 = ADD32(0, 0X1E0);
    // 0x400067AC: b           L_400067B8
    // 0x400067B0: sw          $t2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r10;
        goto L_400067B8;
    // 0x400067B0: sw          $t2, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r10;
L_400067B4:
    // 0x400067B4: sw          $t3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r11;
L_400067B8:
    // 0x400067B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400067BC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x400067C0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x400067C4: jr          $ra
    // 0x400067C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x400067C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_67CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400067CC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x400067D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400067D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x400067D8: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x400067DC: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x400067E0: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x400067E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400067E8: lw          $v0, 0x38($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X38);
    // 0x400067EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400067F0: beq         $v0, $at, L_40006818
    if (ctx->r2 == ctx->r1) {
        // 0x400067F4: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_40006818;
    }
    // 0x400067F4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x400067F8: beq         $v0, $at, L_40006864
    if (ctx->r2 == ctx->r1) {
        // 0x400067FC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_40006864;
    }
    // 0x400067FC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40006800: beq         $v0, $at, L_40006938
    if (ctx->r2 == ctx->r1) {
        // 0x40006804: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_40006938;
    }
    // 0x40006804: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x40006808: beq         $v0, $at, L_4000693C
    if (ctx->r2 == ctx->r1) {
        // 0x4000680C: addiu       $t8, $zero, 0x11
        ctx->r24 = ADD32(0, 0X11);
            goto L_4000693C;
    }
    // 0x4000680C: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x40006810: b           L_4000693C
    // 0x40006814: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
        goto L_4000693C;
    // 0x40006814: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
L_40006818:
    // 0x40006818: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x4000681C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x40006820: sll         $t8, $t7, 15
    ctx->r24 = S32(ctx->r15 << 15);
    // 0x40006824: bgez        $t8, L_40006848
    if (SIGNED(ctx->r24) >= 0) {
        // 0x40006828: lw          $t3, 0x64($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X64);
            goto L_40006848;
    }
    // 0x40006828: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x4000682C: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x40006830: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40006834: bne         $t0, $at, L_40006844
    if (ctx->r8 != ctx->r1) {
        // 0x40006838: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40006844;
    }
    // 0x40006838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000683C: jal         0x400082CC
    // 0x40006840: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    ovl_actor_main_82CC(rdram, ctx);
        goto after_0;
    // 0x40006840: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_0:
L_40006844:
    // 0x40006844: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
L_40006848:
    // 0x40006848: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x4000684C: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x40006850: addiu       $t2, $zero, 0x1FE
    ctx->r10 = ADD32(0, 0X1FE);
    // 0x40006854: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x40006858: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x4000685C: b           L_40006938
    // 0x40006860: sw          $t4, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r12;
        goto L_40006938;
    // 0x40006860: sw          $t4, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r12;
L_40006864:
    // 0x40006864: jal         0x40000C28
    // 0x40006868: nop

    ovl_actor_main_C28(rdram, ctx);
        goto after_1;
    // 0x40006868: nop

    after_1:
    // 0x4000686C: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x40006870: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x40006874: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x40006878: addiu       $t6, $zero, 0x1E0
    ctx->r14 = ADD32(0, 0X1E0);
    // 0x4000687C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x40006880: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x40006884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006888: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x4000688C: addu        $t9, $v0, $t0
    ctx->r25 = ADD32(ctx->r2, ctx->r8);
    // 0x40006890: lw          $t1, 0x94($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X94);
    // 0x40006894: jal         0x400064C4
    // 0x40006898: sw          $t1, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r9;
    ovl_actor_main_64C4(rdram, ctx);
        goto after_2;
    // 0x40006898: sw          $t1, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r9;
    after_2:
    // 0x4000689C: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x400068A0: addiu       $t4, $zero, 0x5FA
    ctx->r12 = ADD32(0, 0X5FA);
    // 0x400068A4: lw          $v0, 0x8($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X8);
    // 0x400068A8: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x400068AC: bne         $v0, $zero, L_400068CC
    if (ctx->r2 != 0) {
        // 0x400068B0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_400068CC;
    }
    // 0x400068B0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400068B4: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x400068B8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x400068BC: jal         0x400006C4
    // 0x400068C0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x400068C0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x400068C4: b           L_400068E8
    // 0x400068C8: nop

        goto L_400068E8;
    // 0x400068C8: nop

L_400068CC:
    // 0x400068CC: bne         $v0, $at, L_400068E8
    if (ctx->r2 != ctx->r1) {
        // 0x400068D0: addiu       $t3, $zero, 0x5FB
        ctx->r11 = ADD32(0, 0X5FB);
            goto L_400068E8;
    }
    // 0x400068D0: addiu       $t3, $zero, 0x5FB
    ctx->r11 = ADD32(0, 0X5FB);
    // 0x400068D4: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x400068D8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x400068DC: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x400068E0: jal         0x400006C4
    // 0x400068E4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_4;
    // 0x400068E4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_4:
L_400068E8:
    // 0x400068E8: jal         0x4000185C
    // 0x400068EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_185C(rdram, ctx);
        goto after_5;
    // 0x400068EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x400068F0: lw          $t5, 0xC0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC0);
    // 0x400068F4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x400068F8: bne         $t5, $at, L_40006920
    if (ctx->r13 != ctx->r1) {
        // 0x400068FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40006920;
    }
    // 0x400068FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006904: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40006908: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000690C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x40006910: jal         0x40008D20
    // 0x40006914: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_6;
    // 0x40006914: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x40006918: b           L_4000693C
    // 0x4000691C: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
        goto L_4000693C;
    // 0x4000691C: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
L_40006920:
    // 0x40006920: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40006924: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x40006928: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4000692C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40006930: jal         0x40008D20
    // 0x40006934: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_7;
    // 0x40006934: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_7:
L_40006938:
    // 0x40006938: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
L_4000693C:
    // 0x4000693C: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x40006940: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x40006944: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x40006948: jal         0x400007F0
    // 0x4000694C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    ovl_actor_main_7F0(rdram, ctx);
        goto after_8;
    // 0x4000694C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_8:
    // 0x40006950: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x40006954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006958: beq         $t0, $zero, L_40006994
    if (ctx->r8 == 0) {
        // 0x4000695C: addiu       $a1, $zero, 0xB
        ctx->r5 = ADD32(0, 0XB);
            goto L_40006994;
    }
    // 0x4000695C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x40006960: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40006964: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x40006968: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4000696C: jal         0x4000118C
    // 0x40006970: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_9;
    // 0x40006970: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x40006974: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x40006978: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x4000697C: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x40006980: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    // 0x40006984: lw          $t2, 0x64($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X64);
    // 0x40006988: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x4000698C: nop

    // 0x40006990: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
L_40006994:
    // 0x40006994: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40006998: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000699C: jr          $ra
    // 0x400069A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x400069A0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_actor_main_69A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400069A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400069A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400069AC: jal         0x40006428
    // 0x400069B0: nop

    ovl_actor_main_6428(rdram, ctx);
        goto after_0;
    // 0x400069B0: nop

    after_0:
    // 0x400069B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400069B8: beq         $v0, $zero, L_400069CC
    if (ctx->r2 == 0) {
        // 0x400069BC: nop
    
            goto L_400069CC;
    }
    // 0x400069BC: nop

    // 0x400069C0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x400069C4: b           L_400069D0
    // 0x400069C8: nop

        goto L_400069D0;
    // 0x400069C8: nop

L_400069CC:
    // 0x400069CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_400069D0:
    // 0x400069D0: jr          $ra
    // 0x400069D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x400069D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_actor_main_69D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400069D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x400069DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400069E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x400069E4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x400069E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400069EC: lw          $a1, 0x34($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X34);
    // 0x400069F0: nop

    // 0x400069F4: beq         $a1, $zero, L_40006AB4
    if (ctx->r5 == 0) {
        // 0x400069F8: nop
    
            goto L_40006AB4;
    }
    // 0x400069F8: nop

    // 0x400069FC: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x40006A00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40006A04: bne         $v1, $at, L_40006A34
    if (ctx->r3 != ctx->r1) {
        // 0x40006A08: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40006A34;
    }
    // 0x40006A08: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40006A0C: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x40006A10: nop

    // 0x40006A14: andi        $t7, $t6, 0x400
    ctx->r15 = ctx->r14 & 0X400;
    // 0x40006A18: bne         $t7, $zero, L_40006A98
    if (ctx->r15 != 0) {
        // 0x40006A1C: addiu       $t2, $zero, 0x10
        ctx->r10 = ADD32(0, 0X10);
            goto L_40006A98;
    }
    // 0x40006A1C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x40006A20: jal         0x40006500
    // 0x40006A24: addiu       $a2, $s0, 0x324
    ctx->r6 = ADD32(ctx->r16, 0X324);
    ovl_actor_main_6500(rdram, ctx);
        goto after_0;
    // 0x40006A24: addiu       $a2, $s0, 0x324
    ctx->r6 = ADD32(ctx->r16, 0X324);
    after_0:
    // 0x40006A28: b           L_40006A98
    // 0x40006A2C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
        goto L_40006A98;
    // 0x40006A2C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x40006A30: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_40006A34:
    // 0x40006A34: bne         $v1, $at, L_40006A98
    if (ctx->r3 != ctx->r1) {
        // 0x40006A38: addiu       $t2, $zero, 0x10
        ctx->r10 = ADD32(0, 0X10);
            goto L_40006A98;
    }
    // 0x40006A38: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x40006A3C: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x40006A40: nop

    // 0x40006A44: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x40006A48: beq         $at, $zero, L_40006A98
    if (ctx->r1 == 0) {
        // 0x40006A4C: addiu       $t2, $zero, 0x10
        ctx->r10 = ADD32(0, 0X10);
            goto L_40006A98;
    }
    // 0x40006A4C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x40006A50: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x40006A54: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40006A58: sll         $t0, $t9, 10
    ctx->r8 = S32(ctx->r25 << 10);
    // 0x40006A5C: bgez        $t0, L_40006A6C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x40006A60: nop
    
            goto L_40006A6C;
    }
    // 0x40006A60: nop

    // 0x40006A64: beq         $a1, $at, L_40006A98
    if (ctx->r5 == ctx->r1) {
        // 0x40006A68: addiu       $t2, $zero, 0x10
        ctx->r10 = ADD32(0, 0X10);
            goto L_40006A98;
    }
    // 0x40006A68: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
L_40006A6C:
    // 0x40006A6C: jal         0x400069A4
    // 0x40006A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_69A4(rdram, ctx);
        goto after_1;
    // 0x40006A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40006A74: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40006A78: beq         $v0, $at, L_40006A98
    if (ctx->r2 == ctx->r1) {
        // 0x40006A7C: addiu       $t2, $zero, 0x10
        ctx->r10 = ADD32(0, 0X10);
            goto L_40006A98;
    }
    // 0x40006A7C: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x40006A80: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x40006A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006A88: lw          $a1, 0x34($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X34);
    // 0x40006A8C: jal         0x40006500
    // 0x40006A90: addiu       $a2, $s0, 0x324
    ctx->r6 = ADD32(ctx->r16, 0X324);
    ovl_actor_main_6500(rdram, ctx);
        goto after_2;
    // 0x40006A90: addiu       $a2, $s0, 0x324
    ctx->r6 = ADD32(ctx->r16, 0X324);
    after_2:
    // 0x40006A94: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
L_40006A98:
    // 0x40006A98: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x40006A9C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x40006AA0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x40006AA4: jal         0x400007F0
    // 0x40006AA8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    ovl_actor_main_7F0(rdram, ctx);
        goto after_3;
    // 0x40006AA8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x40006AAC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x40006AB0: nop

L_40006AB4:
    // 0x40006AB4: lw          $t3, 0x38($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X38);
    // 0x40006AB8: nop

    // 0x40006ABC: beq         $t3, $zero, L_40006ADC
    if (ctx->r11 == 0) {
        // 0x40006AC0: nop
    
            goto L_40006ADC;
    }
    // 0x40006AC0: nop

    // 0x40006AC4: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x40006AC8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40006ACC: bne         $t4, $at, L_40006ADC
    if (ctx->r12 != ctx->r1) {
        // 0x40006AD0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40006ADC;
    }
    // 0x40006AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40006AD4: jal         0x400067CC
    // 0x40006AD8: addiu       $a1, $s0, 0x340
    ctx->r5 = ADD32(ctx->r16, 0X340);
    ovl_actor_main_67CC(rdram, ctx);
        goto after_4;
    // 0x40006AD8: addiu       $a1, $s0, 0x340
    ctx->r5 = ADD32(ctx->r16, 0X340);
    after_4:
L_40006ADC:
    // 0x40006ADC: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x40006AE0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40006AE4: bne         $t5, $at, L_40006B2C
    if (ctx->r13 != ctx->r1) {
        // 0x40006AE8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_40006B2C;
    }
    // 0x40006AE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x40006AEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x40006AF0: jal         0x40000808
    // 0x40006AF4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_808(rdram, ctx);
        goto after_5;
    // 0x40006AF4: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_5:
    // 0x40006AF8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x40006AFC: nop

    // 0x40006B00: bne         $t6, $zero, L_40006B1C
    if (ctx->r14 != 0) {
        // 0x40006B04: nop
    
            goto L_40006B1C;
    }
    // 0x40006B04: nop

    // 0x40006B08: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x40006B0C: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x40006B10: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x40006B14: b           L_40006B2C
    // 0x40006B18: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
        goto L_40006B2C;
    // 0x40006B18: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
L_40006B1C:
    // 0x40006B1C: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x40006B20: nop

    // 0x40006B24: ori         $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 | 0X4000;
    // 0x40006B28: sw          $t0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r8;
L_40006B2C:
    // 0x40006B2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40006B30: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40006B34: jr          $ra
    // 0x40006B38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x40006B38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_6B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006B3C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40006B40: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x40006B44: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x40006B48: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x40006B4C: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x40006B50: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x40006B54: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x40006B58: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x40006B5C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x40006B60: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x40006B64: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x40006B68: bne         $a1, $zero, L_40006B8C
    if (ctx->r5 != 0) {
        // 0x40006B6C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_40006B8C;
    }
    // 0x40006B6C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x40006B70: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40006B74: nop

    // 0x40006B78: andi        $t7, $t6, 0x80
    ctx->r15 = ctx->r14 & 0X80;
    // 0x40006B7C: beq         $t7, $zero, L_40006B8C
    if (ctx->r15 == 0) {
        // 0x40006B80: nop
    
            goto L_40006B8C;
    }
    // 0x40006B80: nop

    // 0x40006B84: b           L_40006C28
    // 0x40006B88: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
        goto L_40006C28;
    // 0x40006B88: sw          $zero, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = 0;
L_40006B8C:
    // 0x40006B8C: lw          $t8, 0x9C($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X9C);
    // 0x40006B90: addiu       $s6, $zero, 0x1F
    ctx->r22 = ADD32(0, 0X1F);
    // 0x40006B94: beq         $t8, $zero, L_40006C28
    if (ctx->r24 == 0) {
        // 0x40006B98: addiu       $s5, $zero, 0x1C
        ctx->r21 = ADD32(0, 0X1C);
            goto L_40006C28;
    }
    // 0x40006B98: addiu       $s5, $zero, 0x1C
    ctx->r21 = ADD32(0, 0X1C);
    // 0x40006B9C: addiu       $s3, $zero, 0x1C
    ctx->r19 = ADD32(0, 0X1C);
    // 0x40006BA0: addiu       $s2, $zero, 0x57
    ctx->r18 = ADD32(0, 0X57);
    // 0x40006BA4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_40006BA8:
    // 0x40006BA8: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
L_40006BAC:
    // 0x40006BAC: lw          $a1, 0xA0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XA0);
    // 0x40006BB0: nop

    // 0x40006BB4: beq         $s2, $a1, L_40006C00
    if (ctx->r18 == ctx->r5) {
        // 0x40006BB8: nop
    
            goto L_40006C00;
    }
    // 0x40006BB8: nop

    // 0x40006BBC: bne         $s7, $zero, L_40006BE4
    if (ctx->r23 != 0) {
        // 0x40006BC0: nop
    
            goto L_40006BE4;
    }
    // 0x40006BC0: nop

    // 0x40006BC4: jal         0x40011794
    // 0x40006BC8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_actor_main_11794(rdram, ctx);
        goto after_0;
    // 0x40006BC8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x40006BCC: beq         $v0, $s6, L_40006BF8
    if (ctx->r2 == ctx->r22) {
        // 0x40006BD0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_40006BF8;
    }
    // 0x40006BD0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x40006BD4: jal         0x400119C4
    // 0x40006BD8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_actor_main_119C4(rdram, ctx);
        goto after_1;
    // 0x40006BD8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
    // 0x40006BDC: b           L_40006BF8
    // 0x40006BE0: nop

        goto L_40006BF8;
    // 0x40006BE0: nop

L_40006BE4:
    // 0x40006BE4: jal         0x400114A8
    // 0x40006BE8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_actor_main_114A8(rdram, ctx);
        goto after_2;
    // 0x40006BE8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x40006BEC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x40006BF0: jal         0x400119C4
    // 0x40006BF4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_actor_main_119C4(rdram, ctx);
        goto after_3;
    // 0x40006BF4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
L_40006BF8:
    // 0x40006BF8: b           L_40006C0C
    // 0x40006BFC: sw          $s2, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r18;
        goto L_40006C0C;
    // 0x40006BFC: sw          $s2, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r18;
L_40006C00:
    // 0x40006C00: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x40006C04: bne         $s0, $s3, L_40006BAC
    if (ctx->r16 != ctx->r19) {
        // 0x40006C08: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_40006BAC;
    }
    // 0x40006C08: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_40006C0C:
    // 0x40006C0C: bne         $s0, $s5, L_40006C18
    if (ctx->r16 != ctx->r21) {
        // 0x40006C10: nop
    
            goto L_40006C18;
    }
    // 0x40006C10: nop

    // 0x40006C14: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_40006C18:
    // 0x40006C18: lw          $t9, 0x9C($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X9C);
    // 0x40006C1C: nop

    // 0x40006C20: bne         $t9, $zero, L_40006BA8
    if (ctx->r25 != 0) {
        // 0x40006C24: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_40006BA8;
    }
    // 0x40006C24: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_40006C28:
    // 0x40006C28: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x40006C2C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x40006C30: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x40006C34: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x40006C38: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x40006C3C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x40006C40: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x40006C44: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x40006C48: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x40006C4C: jr          $ra
    // 0x40006C50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40006C50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_6C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006C54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40006C58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40006C5C: lui         $at, 0x42C4
    ctx->r1 = S32(0X42C4 << 16);
    // 0x40006C60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40006C64: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x40006C68: nop

    // 0x40006C6C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x40006C70: nop

    // 0x40006C74: bc1f        L_40006C8C
    if (!c1cs) {
        // 0x40006C78: nop
    
            goto L_40006C8C;
    }
    // 0x40006C78: nop

    // 0x40006C7C: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40006C80: nop

    // 0x40006C84: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x40006C88: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
L_40006C8C:
    // 0x40006C8C: lw          $t8, 0x90($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X90);
    // 0x40006C90: nop

    // 0x40006C94: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x40006C98: beq         $t9, $zero, L_40006CE0
    if (ctx->r25 == 0) {
        // 0x40006C9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40006CE0;
    }
    // 0x40006C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40006CA0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x40006CA4: lwc1        $f10, 0x48($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X48);
    // 0x40006CA8: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x40006CAC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x40006CB0: nop

    // 0x40006CB4: bc1f        L_40006CE0
    if (!c1cs) {
        // 0x40006CB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40006CE0;
    }
    // 0x40006CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40006CBC: jal         0x40001A8C
    // 0x40006CC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_0;
    // 0x40006CC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40006CC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40006CC8: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x40006CCC: lw          $t0, 0x90($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X90);
    // 0x40006CD0: nop

    // 0x40006CD4: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x40006CD8: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
    // 0x40006CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40006CE0:
    // 0x40006CE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40006CE4: jr          $ra
    // 0x40006CE8: nop

    return;
    // 0x40006CE8: nop

;}
RECOMP_FUNC void ovl_actor_main_6CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40006CF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40006CF4: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40006CF8: nop

    // 0x40006CFC: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x40006D00: beq         $t6, $zero, L_40006DE8
    if (ctx->r14 == 0) {
        // 0x40006D04: nop
    
            goto L_40006DE8;
    }
    // 0x40006D04: nop

    // 0x40006D08: lw          $t7, 0x2D4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X2D4);
    // 0x40006D0C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x40006D10: beq         $v1, $t7, L_40006D60
    if (ctx->r3 == ctx->r15) {
        // 0x40006D14: nop
    
            goto L_40006D60;
    }
    // 0x40006D14: nop

    // 0x40006D18: lw          $t8, 0x2DC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X2DC);
    // 0x40006D1C: addiu       $a1, $a0, 0x2D4
    ctx->r5 = ADD32(ctx->r4, 0X2D4);
    // 0x40006D20: bne         $t8, $zero, L_40006D5C
    if (ctx->r24 != 0) {
        // 0x40006D24: nop
    
            goto L_40006D5C;
    }
    // 0x40006D24: nop

    // 0x40006D28: jal         0x40002B24
    // 0x40006D2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_actor_main_2B24(rdram, ctx);
        goto after_0;
    // 0x40006D2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x40006D30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x40006D34: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x40006D38: lw          $t9, 0x2EC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2EC);
    // 0x40006D3C: nop

    // 0x40006D40: beq         $v1, $t9, L_40006D60
    if (ctx->r3 == ctx->r25) {
        // 0x40006D44: nop
    
            goto L_40006D60;
    }
    // 0x40006D44: nop

    // 0x40006D48: lw          $t0, 0x90($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X90);
    // 0x40006D4C: nop

    // 0x40006D50: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x40006D54: b           L_40006D60
    // 0x40006D58: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
        goto L_40006D60;
    // 0x40006D58: sw          $t1, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r9;
L_40006D5C:
    // 0x40006D5C: sw          $zero, 0x2DC($a0)
    MEM_W(0X2DC, ctx->r4) = 0;
L_40006D60:
    // 0x40006D60: lw          $t2, 0x2EC($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X2EC);
    // 0x40006D64: nop

    // 0x40006D68: beq         $v1, $t2, L_40006DB4
    if (ctx->r3 == ctx->r10) {
        // 0x40006D6C: nop
    
            goto L_40006DB4;
    }
    // 0x40006D6C: nop

    // 0x40006D70: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40006D74: nop

    // 0x40006D78: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x40006D7C: bne         $t3, $zero, L_40006DB4
    if (ctx->r11 != 0) {
        // 0x40006D80: nop
    
            goto L_40006DB4;
    }
    // 0x40006D80: nop

    // 0x40006D84: lw          $t4, 0x2F4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X2F4);
    // 0x40006D88: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x40006D8C: bne         $t4, $zero, L_40006DB0
    if (ctx->r12 != 0) {
        // 0x40006D90: and         $t5, $v0, $at
        ctx->r13 = ctx->r2 & ctx->r1;
            goto L_40006DB0;
    }
    // 0x40006D90: and         $t5, $v0, $at
    ctx->r13 = ctx->r2 & ctx->r1;
    // 0x40006D94: lw          $t6, 0x2D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2D4);
    // 0x40006D98: sw          $v1, 0x2EC($a0)
    MEM_W(0X2EC, ctx->r4) = ctx->r3;
    // 0x40006D9C: beq         $v1, $t6, L_40006DB4
    if (ctx->r3 == ctx->r14) {
        // 0x40006DA0: sw          $t5, 0x90($a0)
        MEM_W(0X90, ctx->r4) = ctx->r13;
            goto L_40006DB4;
    }
    // 0x40006DA0: sw          $t5, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r13;
    // 0x40006DA4: ori         $t8, $t5, 0x4
    ctx->r24 = ctx->r13 | 0X4;
    // 0x40006DA8: b           L_40006DB4
    // 0x40006DAC: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
        goto L_40006DB4;
    // 0x40006DAC: sw          $t8, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r24;
L_40006DB0:
    // 0x40006DB0: sw          $zero, 0x2F4($a0)
    MEM_W(0X2F4, ctx->r4) = 0;
L_40006DB4:
    // 0x40006DB4: lw          $t9, 0x2D4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2D4);
    // 0x40006DB8: nop

    // 0x40006DBC: bne         $v1, $t9, L_40006E10
    if (ctx->r3 != ctx->r25) {
        // 0x40006DC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40006E10;
    }
    // 0x40006DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40006DC4: lw          $t0, 0x2EC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X2EC);
    // 0x40006DC8: nop

    // 0x40006DCC: bne         $v1, $t0, L_40006E10
    if (ctx->r3 != ctx->r8) {
        // 0x40006DD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40006E10;
    }
    // 0x40006DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40006DD4: lw          $t1, 0x90($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X90);
    // 0x40006DD8: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x40006DDC: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x40006DE0: b           L_40006E0C
    // 0x40006DE4: sw          $t2, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r10;
        goto L_40006E0C;
    // 0x40006DE4: sw          $t2, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r10;
L_40006DE8:
    // 0x40006DE8: lw          $t3, 0x2DC($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X2DC);
    // 0x40006DEC: ori         $t5, $v0, 0x4
    ctx->r13 = ctx->r2 | 0X4;
    // 0x40006DF0: bne         $t3, $zero, L_40006E08
    if (ctx->r11 != 0) {
        // 0x40006DF4: nop
    
            goto L_40006E08;
    }
    // 0x40006DF4: nop

    // 0x40006DF8: lw          $t4, 0x2F4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X2F4);
    // 0x40006DFC: nop

    // 0x40006E00: beq         $t4, $zero, L_40006E10
    if (ctx->r12 == 0) {
        // 0x40006E04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_40006E10;
    }
    // 0x40006E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40006E08:
    // 0x40006E08: sw          $t5, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r13;
L_40006E0C:
    // 0x40006E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40006E10:
    // 0x40006E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40006E14: jr          $ra
    // 0x40006E18: nop

    return;
    // 0x40006E18: nop

;}
RECOMP_FUNC void ovl_actor_main_6E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006E1C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x40006E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40006E24: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x40006E28: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x40006E2C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x40006E30: jal         0x400014F0
    // 0x40006E34: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    ovl_actor_main_14F0(rdram, ctx);
        goto after_0;
    // 0x40006E34: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_0:
    // 0x40006E38: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x40006E3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40006E40: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x40006E44: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x40006E48: jal         0x400006C4
    // 0x40006E4C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40006E4C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x40006E50: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x40006E54: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x40006E58: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x40006E5C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x40006E60: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x40006E64: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x40006E68: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x40006E6C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x40006E70: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x40006E74: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
    // 0x40006E78: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x40006E7C: lwc1        $f6, 0xD0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XD0);
    // 0x40006E80: addiu       $t0, $a3, 0x4
    ctx->r8 = ADD32(ctx->r7, 0X4);
    // 0x40006E84: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x40006E88: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x40006E8C: lwc1        $f8, 0xD4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XD4);
    // 0x40006E90: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x40006E94: swc1        $f8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f8.u32l;
    // 0x40006E98: lwc1        $f10, 0xD8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XD8);
    // 0x40006E9C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x40006EA0: jal         0x40001258
    // 0x40006EA4: swc1        $f10, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f10.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_2;
    // 0x40006EA4: swc1        $f10, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f10.u32l;
    after_2:
    // 0x40006EA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40006EAC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x40006EB0: jr          $ra
    // 0x40006EB4: nop

    return;
    // 0x40006EB4: nop

;}
RECOMP_FUNC void ovl_actor_main_6EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006EB8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x40006EBC: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x40006EC0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x40006EC4: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x40006EC8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x40006ECC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x40006ED0: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x40006ED4: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x40006ED8: swc1        $f12, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->f12.u32l;
    // 0x40006EDC: swc1        $f14, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->f14.u32l;
    // 0x40006EE0: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x40006EE4: jr          $ra
    // 0x40006EE8: swc1        $f4, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x40006EE8: swc1        $f4, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_actor_main_6EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006EEC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x40006EF0: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x40006EF4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x40006EF8: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x40006EFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40006F00: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x40006F04: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x40006F08: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x40006F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40006F10: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x40006F14: swc1        $f12, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = ctx->f12.u32l;
    // 0x40006F18: swc1        $f14, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->f14.u32l;
    // 0x40006F1C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40006F20: jal         0x40006E1C
    // 0x40006F24: swc1        $f4, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f4.u32l;
    ovl_actor_main_6E1C(rdram, ctx);
        goto after_0;
    // 0x40006F24: swc1        $f4, 0xD8($v0)
    MEM_W(0XD8, ctx->r2) = ctx->f4.u32l;
    after_0:
    // 0x40006F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40006F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40006F30: jr          $ra
    // 0x40006F34: nop

    return;
    // 0x40006F34: nop

;}
RECOMP_FUNC void ovl_actor_main_6F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006F38: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x40006F3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40006F40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40006F44: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40006F48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40006F4C: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x40006F50: sw          $zero, 0x230($a0)
    MEM_W(0X230, ctx->r4) = 0;
    // 0x40006F54: sw          $zero, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = 0;
    // 0x40006F58: beq         $t7, $zero, L_40006FB4
    if (ctx->r15 == 0) {
        // 0x40006F5C: sw          $zero, 0x18C($a0)
        MEM_W(0X18C, ctx->r4) = 0;
            goto L_40006FB4;
    }
    // 0x40006F5C: sw          $zero, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = 0;
    // 0x40006F60: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40006F64: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x40006F68: jal         0x400006C4
    // 0x40006F6C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40006F6C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x40006F70: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x40006F74: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x40006F78: jal         0x400006C4
    // 0x40006F7C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40006F7C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x40006F80: bne         $v0, $zero, L_40006FB4
    if (ctx->r2 != 0) {
        // 0x40006F84: nop
    
            goto L_40006FB4;
    }
    // 0x40006F84: nop

    // 0x40006F88: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x40006F8C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x40006F90: bne         $t8, $zero, L_40006FB4
    if (ctx->r24 != 0) {
        // 0x40006F94: nop
    
            goto L_40006FB4;
    }
    // 0x40006F94: nop

    // 0x40006F98: jal         0x400016B4
    // 0x40006F9C: nop

    ovl_actor_main_16B4(rdram, ctx);
        goto after_2;
    // 0x40006F9C: nop

    after_2:
    // 0x40006FA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40006FA4: beq         $v0, $at, L_40006FB4
    if (ctx->r2 == ctx->r1) {
        // 0x40006FA8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_40006FB4;
    }
    // 0x40006FA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x40006FAC: jal         0x40007338
    // 0x40006FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_7338(rdram, ctx);
        goto after_3;
    // 0x40006FB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_40006FB4:
    // 0x40006FB4: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x40006FB8: addiu       $t2, $s0, 0x34
    ctx->r10 = ADD32(ctx->r16, 0X34);
    // 0x40006FBC: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x40006FC0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x40006FC4: sll         $t1, $t0, 10
    ctx->r9 = S32(ctx->r8 << 10);
    // 0x40006FC8: bltz        $t1, L_40006FE0
    if (SIGNED(ctx->r9) < 0) {
        // 0x40006FCC: nop
    
            goto L_40006FE0;
    }
    // 0x40006FCC: nop

    // 0x40006FD0: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x40006FD4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40006FD8: jal         0x400006C4
    // 0x40006FDC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_4;
    // 0x40006FDC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_4:
L_40006FE0:
    // 0x40006FE0: jal         0x40006C54
    // 0x40006FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_6C54(rdram, ctx);
        goto after_5;
    // 0x40006FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x40006FE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40006FEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40006FF0: jr          $ra
    // 0x40006FF4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x40006FF4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_actor_main_6FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40006FF8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x40006FFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40007000: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40007004: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40007008: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000700C: sll         $t6, $v0, 9
    ctx->r14 = S32(ctx->r2 << 9);
    // 0x40007010: bgez        $t6, L_400070D4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x40007014: sll         $t7, $v0, 10
        ctx->r15 = S32(ctx->r2 << 10);
            goto L_400070D4;
    }
    // 0x40007014: sll         $t7, $v0, 10
    ctx->r15 = S32(ctx->r2 << 10);
    // 0x40007018: bltz        $t7, L_400070D4
    if (SIGNED(ctx->r15) < 0) {
        // 0x4000701C: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_400070D4;
    }
    // 0x4000701C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x40007020: lw          $a0, 0x350($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X350);
    // 0x40007024: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x40007028: jal         0x400006C4
    // 0x4000702C: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000702C: sw          $a0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r4;
    after_0:
    // 0x40007030: bne         $v0, $zero, L_400070D4
    if (ctx->r2 != 0) {
        // 0x40007034: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_400070D4;
    }
    // 0x40007034: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40007038: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000703C: jal         0x400006C4
    // 0x40007040: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40007040: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_1:
    // 0x40007044: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x40007048: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x4000704C: jal         0x400006C4
    // 0x40007050: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x40007050: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x40007054: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x40007058: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4000705C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x40007060: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x40007064: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x40007068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000706C: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x40007070: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x40007074: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x40007078: jal         0x40001258
    // 0x4000707C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_3;
    // 0x4000707C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x40007080: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40007084: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40007088: jal         0x400006C4
    // 0x4000708C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_4;
    // 0x4000708C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x40007090: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x40007094: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x40007098: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x4000709C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x400070A0: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x400070A4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x400070A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x400070AC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x400070B0: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x400070B4: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x400070B8: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x400070BC: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x400070C0: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x400070C4: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x400070C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x400070CC: jal         0x400006C4
    // 0x400070D0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_5;
    // 0x400070D0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_5:
L_400070D4:
    // 0x400070D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400070D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x400070DC: jr          $ra
    // 0x400070E0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x400070E0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_actor_main_70E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400070E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400070E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400070EC: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x400070F0: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x400070F4: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x400070F8: bgez        $t7, L_4000717C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x400070FC: nop
    
            goto L_4000717C;
    }
    // 0x400070FC: nop

    // 0x40007100: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x40007104: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x40007108: lwc1        $f0, 0x2F8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2F8);
    // 0x4000710C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x40007110: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x40007114: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40007118: bc1f        L_4000712C
    if (!c1cs) {
        // 0x4000711C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_4000712C;
    }
    // 0x4000711C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x40007120: swc1        $f12, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f12.u32l;
    // 0x40007124: lwc1        $f0, 0x2F8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2F8);
    // 0x40007128: nop

L_4000712C:
    // 0x4000712C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40007130: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40007134: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x40007138: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x4000713C: nop

    // 0x40007140: bc1f        L_40007150
    if (!c1cs) {
        // 0x40007144: nop
    
            goto L_40007150;
    }
    // 0x40007144: nop

    // 0x40007148: b           L_40007204
    // 0x4000714C: swc1        $f2, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f2.u32l;
        goto L_40007204;
    // 0x4000714C: swc1        $f2, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f2.u32l;
L_40007150:
    // 0x40007150: jal         0x4000E250
    // 0x40007154: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_E250(rdram, ctx);
        goto after_0;
    // 0x40007154: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x40007158: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4000715C: bne         $v0, $zero, L_40007204
    if (ctx->r2 != 0) {
        // 0x40007160: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_40007204;
    }
    // 0x40007160: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x40007164: lwc1        $f8, 0x2F8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X2F8);
    // 0x40007168: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4000716C: nop

    // 0x40007170: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x40007174: b           L_40007204
    // 0x40007178: swc1        $f16, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f16.u32l;
        goto L_40007204;
    // 0x40007178: swc1        $f16, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f16.u32l;
L_4000717C:
    // 0x4000717C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x40007180: lwc1        $f18, 0x2F8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X2F8);
    // 0x40007184: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40007188: c.eq.s      $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f12.fl == ctx->f18.fl;
    // 0x4000718C: nop

    // 0x40007190: bc1t        L_40007200
    if (c1cs) {
        // 0x40007194: nop
    
            goto L_40007200;
    }
    // 0x40007194: nop

    // 0x40007198: jal         0x4000E250
    // 0x4000719C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_E250(rdram, ctx);
        goto after_1;
    // 0x4000719C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x400071A0: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x400071A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x400071A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400071AC: bne         $v0, $zero, L_40007200
    if (ctx->r2 != 0) {
        // 0x400071B0: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_40007200;
    }
    // 0x400071B0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x400071B4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x400071B8: lwc1        $f0, 0x2F8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2F8);
    // 0x400071BC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x400071C0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x400071C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400071C8: bc1f        L_400071DC
    if (!c1cs) {
        // 0x400071CC: nop
    
            goto L_400071DC;
    }
    // 0x400071CC: nop

    // 0x400071D0: swc1        $f2, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f2.u32l;
    // 0x400071D4: lwc1        $f0, 0x2F8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2F8);
    // 0x400071D8: nop

L_400071DC:
    // 0x400071DC: sub.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x400071E0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x400071E4: nop

    // 0x400071E8: bc1f        L_400071F8
    if (!c1cs) {
        // 0x400071EC: nop
    
            goto L_400071F8;
    }
    // 0x400071EC: nop

    // 0x400071F0: b           L_40007204
    // 0x400071F4: swc1        $f12, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f12.u32l;
        goto L_40007204;
    // 0x400071F4: swc1        $f12, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f12.u32l;
L_400071F8:
    // 0x400071F8: b           L_40007204
    // 0x400071FC: swc1        $f2, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f2.u32l;
        goto L_40007204;
    // 0x400071FC: swc1        $f2, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f2.u32l;
L_40007200:
    // 0x40007200: swc1        $f12, 0x2F8($a0)
    MEM_W(0X2F8, ctx->r4) = ctx->f12.u32l;
L_40007204:
    // 0x40007204: lwc1        $f6, 0x2FC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2FC);
    // 0x40007208: lw          $a2, 0x2F8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X2F8);
    // 0x4000720C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40007210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40007214: lui         $a3, 0x4240
    ctx->r7 = S32(0X4240 << 16);
    // 0x40007218: jal         0x40006EB8
    // 0x4000721C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_2;
    // 0x4000721C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x40007220: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40007224: jal         0x40006E1C
    // 0x40007228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_6E1C(rdram, ctx);
        goto after_3;
    // 0x40007228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x4000722C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40007230: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40007234: jr          $ra
    // 0x40007238: nop

    return;
    // 0x40007238: nop

;}
RECOMP_FUNC void ovl_actor_main_723C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4000723C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x40007240: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40007244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40007248: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x4000724C: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x40007250: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40007254: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x40007258: jal         0x400006C4
    // 0x4000725C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000725C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x40007260: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x40007264: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x40007268: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4000726C: lw          $a0, 0x2EC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X2EC);
    // 0x40007270: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40007274: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x40007278: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x4000727C: jal         0x400006C4
    // 0x40007280: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40007280: swc1        $f14, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f14.u32l;
    after_1:
    // 0x40007284: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x40007288: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4000728C: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x40007290: bne         $v0, $zero, L_4000732C
    if (ctx->r2 != 0) {
        // 0x40007294: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000732C;
    }
    // 0x40007294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40007298: lw          $t9, 0xCC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XCC);
    // 0x4000729C: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x400072A0: slti        $at, $t9, 0x14
    ctx->r1 = SIGNED(ctx->r25) < 0X14 ? 1 : 0;
    // 0x400072A4: bne         $at, $zero, L_40007324
    if (ctx->r1 != 0) {
        // 0x400072A8: nop
    
            goto L_40007324;
    }
    // 0x400072A8: nop

    // 0x400072AC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x400072B0: lui         $at, 0x42BE
    ctx->r1 = S32(0X42BE << 16);
    // 0x400072B4: bc1f        L_400072C8
    if (!c1cs) {
        // 0x400072B8: nop
    
            goto L_400072C8;
    }
    // 0x400072B8: nop

    // 0x400072BC: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
    // 0x400072C0: b           L_400072CC
    // 0x400072C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_400072CC;
    // 0x400072C4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_400072C8:
    // 0x400072C8: sub.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f12.fl - ctx->f2.fl;
L_400072CC:
    // 0x400072CC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x400072D0: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x400072D4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x400072D8: nop

    // 0x400072DC: bc1t        L_40007314
    if (c1cs) {
        // 0x400072E0: nop
    
            goto L_40007314;
    }
    // 0x400072E0: nop

    // 0x400072E4: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x400072E8: nop

    // 0x400072EC: bc1f        L_40007300
    if (!c1cs) {
        // 0x400072F0: nop
    
            goto L_40007300;
    }
    // 0x400072F0: nop

    // 0x400072F4: sub.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x400072F8: b           L_40007304
    // 0x400072FC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_40007304;
    // 0x400072FC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_40007300:
    // 0x40007300: sub.s       $f0, $f2, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f14.fl;
L_40007304:
    // 0x40007304: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x40007308: nop

    // 0x4000730C: bc1f        L_40007324
    if (!c1cs) {
        // 0x40007310: nop
    
            goto L_40007324;
    }
    // 0x40007310: nop

L_40007314:
    // 0x40007314: jal         0x40004B04
    // 0x40007318: nop

    ovl_actor_main_4B04(rdram, ctx);
        goto after_2;
    // 0x40007318: nop

    after_2:
    // 0x4000731C: b           L_4000732C
    // 0x40007320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4000732C;
    // 0x40007320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40007324:
    // 0x40007324: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x40007328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000732C:
    // 0x4000732C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x40007330: jr          $ra
    // 0x40007334: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x40007334: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_actor_main_7338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007338: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x4000733C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40007340: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40007344: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x40007348: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000734C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40007350: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x40007354: beq         $t7, $zero, L_400076F0
    if (ctx->r15 == 0) {
        // 0x40007358: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400076F0;
    }
    // 0x40007358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000735C: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x40007360: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40007364: bne         $t8, $at, L_4000737C
    if (ctx->r24 != ctx->r1) {
        // 0x40007368: nop
    
            goto L_4000737C;
    }
    // 0x40007368: nop

    // 0x4000736C: jal         0x400121FC
    // 0x40007370: nop

    ovl_actor_main_121FC(rdram, ctx);
        goto after_0;
    // 0x40007370: nop

    after_0:
    // 0x40007374: bne         $v0, $zero, L_400076F0
    if (ctx->r2 != 0) {
        // 0x40007378: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400076F0;
    }
    // 0x40007378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000737C:
    // 0x4000737C: jal         0x4000723C
    // 0x40007380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_723C(rdram, ctx);
        goto after_1;
    // 0x40007380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40007384: bne         $v0, $zero, L_400076F0
    if (ctx->r2 != 0) {
        // 0x40007388: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400076F0;
    }
    // 0x40007388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4000738C: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x40007390: nop

    // 0x40007394: beq         $t9, $zero, L_400073A4
    if (ctx->r25 == 0) {
        // 0x40007398: nop
    
            goto L_400073A4;
    }
    // 0x40007398: nop

    // 0x4000739C: jal         0x400070E4
    // 0x400073A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_70E4(rdram, ctx);
        goto after_2;
    // 0x400073A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_400073A4:
    // 0x400073A4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x400073A8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x400073AC: jal         0x400006C4
    // 0x400073B0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x400073B0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x400073B4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400073B8: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x400073BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400073C0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x400073C4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x400073C8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x400073CC: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x400073D0: jal         0x40001258
    // 0x400073D4: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_4;
    // 0x400073D4: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x400073D8: lwc1        $f0, 0x2F8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X2F8);
    // 0x400073DC: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x400073E0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x400073E4: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x400073E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x400073EC: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x400073F0: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x400073F4: swc1        $f8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f8.u32l;
    // 0x400073F8: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x400073FC: lwc1        $f6, 0x2FC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2FC);
    // 0x40007400: nop

    // 0x40007404: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    // 0x40007408: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000740C: jal         0x400006C4
    // 0x40007410: nop

    ovl_actor_main_6C4(rdram, ctx);
        goto after_5;
    // 0x40007410: nop

    after_5:
    // 0x40007414: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x40007418: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x4000741C: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x40007420: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    // 0x40007424: lw          $a0, 0x2EC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2EC);
    // 0x40007428: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4000742C: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    // 0x40007430: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x40007434: jal         0x400006C4
    // 0x40007438: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_6;
    // 0x40007438: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    after_6:
    // 0x4000743C: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x40007440: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x40007444: bne         $v0, $zero, L_400076E4
    if (ctx->r2 != 0) {
        // 0x40007448: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_400076E4;
    }
    // 0x40007448: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4000744C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x40007450: lw          $a0, 0x2EC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2EC);
    // 0x40007454: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x40007458: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    // 0x4000745C: jal         0x400006C4
    // 0x40007460: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_7;
    // 0x40007460: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_7:
    // 0x40007464: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x40007468: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x4000746C: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x40007470: bne         $t0, $zero, L_40007480
    if (ctx->r8 != 0) {
        // 0x40007474: addiu       $a1, $zero, 0x2E
        ctx->r5 = ADD32(0, 0X2E);
            goto L_40007480;
    }
    // 0x40007474: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x40007478: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x4000747C: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_40007480:
    // 0x40007480: lw          $a0, 0x2EC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2EC);
    // 0x40007484: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x40007488: swc1        $f14, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f14.u32l;
    // 0x4000748C: jal         0x400006C4
    // 0x40007490: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_8;
    // 0x40007490: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_8:
    // 0x40007494: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x40007498: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x4000749C: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x400074A0: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x400074A4: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x400074A8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400074AC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x400074B0: lwc1        $f14, 0x64($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X64);
    // 0x400074B4: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x400074B8: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x400074BC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x400074C0: bc1f        L_400074D8
    if (!c1cs) {
        // 0x400074C4: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_400074D8;
    }
    // 0x400074C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x400074C8: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x400074CC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x400074D0: b           L_40007500
    // 0x400074D4: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
        goto L_40007500;
    // 0x400074D4: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
L_400074D8:
    // 0x400074D8: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x400074DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x400074E0: nop

    // 0x400074E4: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x400074E8: nop

    // 0x400074EC: bc1f        L_400074FC
    if (!c1cs) {
        // 0x400074F0: nop
    
            goto L_400074FC;
    }
    // 0x400074F0: nop

    // 0x400074F4: b           L_40007500
    // 0x400074F8: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
        goto L_40007500;
    // 0x400074F8: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
L_400074FC:
    // 0x400074FC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_40007500:
    // 0x40007500: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x40007504: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x40007508: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4000750C: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x40007510: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x40007514: lw          $t5, 0x78($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X78);
    // 0x40007518: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x4000751C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x40007520: bc1f        L_40007530
    if (!c1cs) {
        // 0x40007524: nop
    
            goto L_40007530;
    }
    // 0x40007524: nop

    // 0x40007528: b           L_4000754C
    // 0x4000752C: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
        goto L_4000754C;
    // 0x4000752C: mov.s       $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    ctx->f2.fl = ctx->f16.fl;
L_40007530:
    // 0x40007530: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x40007534: nop

    // 0x40007538: bc1f        L_40007548
    if (!c1cs) {
        // 0x4000753C: nop
    
            goto L_40007548;
    }
    // 0x4000753C: nop

    // 0x40007540: b           L_4000754C
    // 0x40007544: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
        goto L_4000754C;
    // 0x40007544: mov.s       $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = ctx->f18.fl;
L_40007548:
    // 0x40007548: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_4000754C:
    // 0x4000754C: beq         $t2, $zero, L_40007574
    if (ctx->r10 == 0) {
        // 0x40007550: nop
    
            goto L_40007574;
    }
    // 0x40007550: nop

    // 0x40007554: swc1        $f12, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f12.u32l;
    // 0x40007558: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x4000755C: nop

    // 0x40007560: swc1        $f2, 0x34($t4)
    MEM_W(0X34, ctx->r12) = ctx->f2.u32l;
    // 0x40007564: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x40007568: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x4000756C: b           L_400075D4
    // 0x40007570: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
        goto L_400075D4;
    // 0x40007570: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
L_40007574:
    // 0x40007574: lw          $t6, 0x3C($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X3C);
    // 0x40007578: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x4000757C: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x40007580: bne         $t7, $zero, L_400075A0
    if (ctx->r15 != 0) {
        // 0x40007584: nop
    
            goto L_400075A0;
    }
    // 0x40007584: nop

    // 0x40007588: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x4000758C: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x40007590: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x40007594: swc1        $f6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f6.u32l;
    // 0x40007598: b           L_400075D4
    // 0x4000759C: add.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f12.fl;
        goto L_400075D4;
    // 0x4000759C: add.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f12.fl;
L_400075A0:
    // 0x400075A0: lwc1        $f8, 0x2C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x400075A4: nop

    // 0x400075A8: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x400075AC: swc1        $f10, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f10.u32l;
    // 0x400075B0: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x400075B4: nop

    // 0x400075B8: lwc1        $f4, 0x34($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X34);
    // 0x400075BC: nop

    // 0x400075C0: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x400075C4: swc1        $f6, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->f6.u32l;
    // 0x400075C8: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x400075CC: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x400075D0: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
L_400075D4:
    // 0x400075D4: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x400075D8: lwc1        $f2, 0x94($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X94);
    // 0x400075DC: sll         $t1, $t0, 12
    ctx->r9 = S32(ctx->r8 << 12);
    // 0x400075E0: bgez        $t1, L_4000762C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x400075E4: nop
    
            goto L_4000762C;
    }
    // 0x400075E4: nop

    // 0x400075E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x400075EC: lwc1        $f2, 0x94($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X94);
    // 0x400075F0: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x400075F4: sub.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x400075F8: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x400075FC: nop

    // 0x40007600: bc1f        L_40007624
    if (!c1cs) {
        // 0x40007604: nop
    
            goto L_40007624;
    }
    // 0x40007604: nop

    // 0x40007608: lwc1        $f4, 0x30($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X30);
    // 0x4000760C: nop

    // 0x40007610: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x40007614: swc1        $f6, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f6.u32l;
    // 0x40007618: lwc1        $f14, 0x94($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X94);
    // 0x4000761C: b           L_400076C4
    // 0x40007620: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
        goto L_400076C4;
    // 0x40007620: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
L_40007624:
    // 0x40007624: b           L_400076C0
    // 0x40007628: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
        goto L_400076C0;
    // 0x40007628: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
L_4000762C:
    // 0x4000762C: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x40007630: lwc1        $f16, 0x70($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X70);
    // 0x40007634: bc1f        L_4000764C
    if (!c1cs) {
        // 0x40007638: lui         $at, 0x4100
        ctx->r1 = S32(0X4100 << 16);
            goto L_4000764C;
    }
    // 0x40007638: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x4000763C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x40007640: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40007644: b           L_400076C0
    // 0x40007648: add.s       $f14, $f2, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f8.fl;
        goto L_400076C0;
    // 0x40007648: add.s       $f14, $f2, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f8.fl;
L_4000764C:
    // 0x4000764C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40007650: add.s       $f4, $f14, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x40007654: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x40007658: add.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x4000765C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x40007660: nop

    // 0x40007664: bc1f        L_40007674
    if (!c1cs) {
        // 0x40007668: nop
    
            goto L_40007674;
    }
    // 0x40007668: nop

    // 0x4000766C: b           L_400076C0
    // 0x40007670: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_400076C0;
    // 0x40007670: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
L_40007674:
    // 0x40007674: sub.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x40007678: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x4000767C: add.s       $f0, $f6, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x40007680: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x40007684: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x40007688: nop

    // 0x4000768C: bc1f        L_4000769C
    if (!c1cs) {
        // 0x40007690: nop
    
            goto L_4000769C;
    }
    // 0x40007690: nop

    // 0x40007694: b           L_400076C0
    // 0x40007698: add.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f12.fl;
        goto L_400076C0;
    // 0x40007698: add.s       $f14, $f2, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f12.fl;
L_4000769C:
    // 0x4000769C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x400076A0: nop

    // 0x400076A4: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x400076A8: nop

    // 0x400076AC: bc1f        L_400076BC
    if (!c1cs) {
        // 0x400076B0: nop
    
            goto L_400076BC;
    }
    // 0x400076B0: nop

    // 0x400076B4: b           L_400076C0
    // 0x400076B8: add.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f2.fl;
        goto L_400076C0;
    // 0x400076B8: add.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f2.fl;
L_400076BC:
    // 0x400076BC: add.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f2.fl;
L_400076C0:
    // 0x400076C0: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
L_400076C4:
    // 0x400076C4: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x400076C8: swc1        $f14, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f14.u32l;
    // 0x400076CC: swc1        $f10, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f10.u32l;
    // 0x400076D0: lw          $a0, 0x2EC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2EC);
    // 0x400076D4: jal         0x400006C4
    // 0x400076D8: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_9;
    // 0x400076D8: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    after_9:
    // 0x400076DC: b           L_400076F0
    // 0x400076E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400076F0;
    // 0x400076E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400076E4:
    // 0x400076E4: jal         0x4000BB3C
    // 0x400076E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_BB3C(rdram, ctx);
        goto after_10;
    // 0x400076E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x400076EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400076F0:
    // 0x400076F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x400076F4: jr          $ra
    // 0x400076F8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x400076F8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void ovl_actor_main_76FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400076FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40007700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40007704: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40007708: nop

    // 0x4000770C: andi        $t7, $t6, 0x40
    ctx->r15 = ctx->r14 & 0X40;
    // 0x40007710: beq         $t7, $zero, L_4000773C
    if (ctx->r15 == 0) {
        // 0x40007714: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4000773C;
    }
    // 0x40007714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40007718: lw          $t8, 0x314($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X314);
    // 0x4000771C: lw          $t1, 0x3FC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X3FC);
    // 0x40007720: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x40007724: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x40007728: bne         $at, $zero, L_40007738
    if (ctx->r1 != 0) {
        // 0x4000772C: sw          $t9, 0x314($a0)
        MEM_W(0X314, ctx->r4) = ctx->r25;
            goto L_40007738;
    }
    // 0x4000772C: sw          $t9, 0x314($a0)
    MEM_W(0X314, ctx->r4) = ctx->r25;
    // 0x40007730: jal         0x40008F98
    // 0x40007734: nop

    ovl_actor_main_8F98(rdram, ctx);
        goto after_0;
    // 0x40007734: nop

    after_0:
L_40007738:
    // 0x40007738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4000773C:
    // 0x4000773C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40007740: jr          $ra
    // 0x40007744: nop

    return;
    // 0x40007744: nop

;}
RECOMP_FUNC void ovl_actor_main_7748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007748: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x4000774C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40007750: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x40007754: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40007758: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x4000775C: jal         0x400006C4
    // 0x40007760: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40007760: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x40007764: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x40007768: lwc1        $f2, 0x20($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4000776C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x40007770: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40007774: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x40007778: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x4000777C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x40007780: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x40007784: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x40007788: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x4000778C: jal         0x40001258
    // 0x40007790: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x40007790: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x40007794: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x40007798: lwc1        $f0, 0x3C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4000779C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x400077A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x400077A4: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x400077A8: nop

    // 0x400077AC: bc1t        L_400077CC
    if (c1cs) {
        // 0x400077B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_400077CC;
    }
    // 0x400077B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400077B4: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x400077B8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x400077BC: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    // 0x400077C0: jal         0x400006C4
    // 0x400077C4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x400077C4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x400077C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400077CC:
    // 0x400077CC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x400077D0: jr          $ra
    // 0x400077D4: nop

    return;
    // 0x400077D4: nop

;}
RECOMP_FUNC void ovl_actor_main_77D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400077D8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x400077DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400077E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x400077E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400077E8: lwc1        $f4, 0x48($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X48);
    // 0x400077EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400077F0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x400077F4: nop

    // 0x400077F8: bc1f        L_40007918
    if (!c1cs) {
        // 0x400077FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40007918;
    }
    // 0x400077FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40007800: lwc1        $f6, 0x50($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X50);
    // 0x40007804: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40007808: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x4000780C: nop

    // 0x40007810: bc1f        L_40007918
    if (!c1cs) {
        // 0x40007814: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40007918;
    }
    // 0x40007814: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40007818: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x4000781C: jal         0x400006C4
    // 0x40007820: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40007820: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x40007824: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x40007828: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4000782C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x40007830: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40007834: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x40007838: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x4000783C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x40007840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40007844: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x40007848: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x4000784C: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x40007850: jal         0x40001258
    // 0x40007854: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x40007854: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x40007858: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x4000785C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x40007860: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x40007864: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x40007868: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4000786C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x40007870: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x40007874: add.s       $f12, $f14, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f18.fl;
    // 0x40007878: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x4000787C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40007880: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x40007884: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x40007888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000788C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x40007890: swc1        $f16, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f16.u32l;
    // 0x40007894: jal         0x40001258
    // 0x40007898: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_2;
    // 0x40007898: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x4000789C: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x400078A0: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x400078A4: andi        $t9, $t8, 0x3C0
    ctx->r25 = ctx->r24 & 0X3C0;
    // 0x400078A8: bne         $t9, $zero, L_40007914
    if (ctx->r25 != 0) {
        // 0x400078AC: mov.s       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
            goto L_40007914;
    }
    // 0x400078AC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x400078B0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x400078B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400078B8: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x400078BC: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x400078C0: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x400078C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x400078C8: c.lt.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl < ctx->f8.fl;
    // 0x400078CC: nop

    // 0x400078D0: bc1f        L_40007918
    if (!c1cs) {
        // 0x400078D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40007918;
    }
    // 0x400078D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400078D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400078DC: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x400078E0: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x400078E4: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x400078E8: nop

    // 0x400078EC: bc1f        L_40007918
    if (!c1cs) {
        // 0x400078F0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40007918;
    }
    // 0x400078F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400078F4: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x400078F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x400078FC: bc1f        L_40007918
    if (!c1cs) {
        // 0x40007900: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40007918;
    }
    // 0x40007900: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40007904: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x40007908: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x4000790C: jal         0x400006C4
    // 0x40007910: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x40007910: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_3:
L_40007914:
    // 0x40007914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40007918:
    // 0x40007918: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4000791C: jr          $ra
    // 0x40007920: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x40007920: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_actor_main_7924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007924: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40007928: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4000792C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x40007930: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40007934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40007938: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x4000793C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x40007940: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x40007944: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x40007948: jal         0x40001258
    // 0x4000794C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x4000794C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x40007950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40007954: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x40007958: jr          $ra
    // 0x4000795C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4000795C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_7960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40007964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40007968: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x4000796C: nop

    // 0x40007970: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x40007974: beq         $t7, $zero, L_400079D4
    if (ctx->r15 == 0) {
        // 0x40007978: nop
    
            goto L_400079D4;
    }
    // 0x40007978: nop

    // 0x4000797C: lwc1        $f0, 0x7C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X7C);
    // 0x40007980: lwc1        $f6, 0x80($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X80);
    // 0x40007984: lwc1        $f4, 0x60($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X60);
    // 0x40007988: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x4000798C: lwc1        $f18, 0x84($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X84);
    // 0x40007990: lwc1        $f16, 0x64($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X64);
    // 0x40007994: lw          $t8, 0x8C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8C);
    // 0x40007998: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x4000799C: lwc1        $f8, 0x68($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X68);
    // 0x400079A0: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x400079A4: swc1        $f10, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f10.u32l;
    // 0x400079A8: lwc1        $f10, 0x88($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X88);
    // 0x400079AC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x400079B0: mul.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x400079B4: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x400079B8: sw          $t9, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r25;
    // 0x400079BC: swc1        $f4, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->f4.u32l;
    // 0x400079C0: add.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x400079C4: jal         0x40009414
    // 0x400079C8: swc1        $f16, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f16.u32l;
    ovl_actor_main_9414(rdram, ctx);
        goto after_0;
    // 0x400079C8: swc1        $f16, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->f16.u32l;
    after_0:
    // 0x400079CC: b           L_400079EC
    // 0x400079D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_400079EC;
    // 0x400079D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400079D4:
    // 0x400079D4: lw          $v0, 0x8C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8C);
    // 0x400079D8: nop

    // 0x400079DC: blez        $v0, L_400079E8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x400079E0: addiu       $t0, $v0, -0x1
        ctx->r8 = ADD32(ctx->r2, -0X1);
            goto L_400079E8;
    }
    // 0x400079E0: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x400079E4: sw          $t0, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r8;
L_400079E8:
    // 0x400079E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_400079EC:
    // 0x400079EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400079F0: jr          $ra
    // 0x400079F4: nop

    return;
    // 0x400079F4: nop

;}
RECOMP_FUNC void ovl_actor_main_79F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400079F8: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x400079FC: nop

    // 0x40007A00: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x40007A04: bgez        $t7, L_40007A74
    if (SIGNED(ctx->r15) >= 0) {
        // 0x40007A08: nop
    
            goto L_40007A74;
    }
    // 0x40007A08: nop

    // 0x40007A0C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x40007A10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40007A14: bne         $v0, $at, L_40007A48
    if (ctx->r2 != ctx->r1) {
        // 0x40007A18: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_40007A48;
    }
    // 0x40007A18: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40007A1C: lw          $v1, 0x36C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X36C);
    // 0x40007A20: lui         $at, 0xF7FF
    ctx->r1 = S32(0XF7FF << 16);
    // 0x40007A24: addiu       $t8, $v1, -0x1
    ctx->r24 = ADD32(ctx->r3, -0X1);
    // 0x40007A28: bgtz        $v1, L_40007A74
    if (SIGNED(ctx->r3) > 0) {
        // 0x40007A2C: sw          $t8, 0x36C($a0)
        MEM_W(0X36C, ctx->r4) = ctx->r24;
            goto L_40007A74;
    }
    // 0x40007A2C: sw          $t8, 0x36C($a0)
    MEM_W(0X36C, ctx->r4) = ctx->r24;
    // 0x40007A30: lw          $t9, 0x90($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X90);
    // 0x40007A34: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40007A38: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x40007A3C: jr          $ra
    // 0x40007A40: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    return;
    // 0x40007A40: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    // 0x40007A44: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_40007A48:
    // 0x40007A48: bne         $v0, $at, L_40007A74
    if (ctx->r2 != ctx->r1) {
        // 0x40007A4C: nop
    
            goto L_40007A74;
    }
    // 0x40007A4C: nop

    // 0x40007A50: lw          $v1, 0x364($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X364);
    // 0x40007A54: lui         $at, 0xF7FF
    ctx->r1 = S32(0XF7FF << 16);
    // 0x40007A58: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x40007A5C: bgtz        $v1, L_40007A74
    if (SIGNED(ctx->r3) > 0) {
        // 0x40007A60: sw          $t1, 0x364($a0)
        MEM_W(0X364, ctx->r4) = ctx->r9;
            goto L_40007A74;
    }
    // 0x40007A60: sw          $t1, 0x364($a0)
    MEM_W(0X364, ctx->r4) = ctx->r9;
    // 0x40007A64: lw          $t2, 0x90($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X90);
    // 0x40007A68: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40007A6C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x40007A70: sw          $t3, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r11;
L_40007A74:
    // 0x40007A74: jr          $ra
    // 0x40007A78: nop

    return;
    // 0x40007A78: nop

;}
RECOMP_FUNC void ovl_actor_main_7A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007A7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40007A80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40007A84: jal         0x4000185C
    // 0x40007A88: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_185C(rdram, ctx);
        goto after_0;
    // 0x40007A88: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x40007A8C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40007A90: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40007A94: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x40007A98: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40007A9C: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x40007AA0: beq         $t7, $zero, L_40007AC4
    if (ctx->r15 == 0) {
        // 0x40007AA4: nop
    
            goto L_40007AC4;
    }
    // 0x40007AA4: nop

    // 0x40007AA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40007AAC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x40007AB0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40007AB4: jal         0x40008D20
    // 0x40007AB8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_1;
    // 0x40007AB8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_1:
    // 0x40007ABC: b           L_40007B10
    // 0x40007AC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40007B10;
    // 0x40007AC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40007AC4:
    // 0x40007AC4: lw          $t9, 0xC0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC0);
    // 0x40007AC8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x40007ACC: bne         $t9, $at, L_40007AF4
    if (ctx->r25 != ctx->r1) {
        // 0x40007AD0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_40007AF4;
    }
    // 0x40007AD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40007AD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40007AD8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40007ADC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40007AE0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x40007AE4: jal         0x40008D20
    // 0x40007AE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_2;
    // 0x40007AE8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x40007AEC: b           L_40007B10
    // 0x40007AF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40007B10;
    // 0x40007AF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40007AF4:
    // 0x40007AF4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40007AF8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40007AFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40007B00: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x40007B04: jal         0x40008D20
    // 0x40007B08: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_3;
    // 0x40007B08: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_3:
    // 0x40007B0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40007B10:
    // 0x40007B10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40007B14: jr          $ra
    // 0x40007B18: nop

    return;
    // 0x40007B18: nop

;}
RECOMP_FUNC void ovl_actor_main_7B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007B1C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40007B20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40007B24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x40007B28: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40007B2C: lui         $t8, 0x4002
    ctx->r24 = S32(0X4002 << 16);
    // 0x40007B30: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x40007B34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x40007B38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40007B3C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x40007B40: lw          $t8, -0x20CC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X20CC);
    // 0x40007B44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40007B48: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x40007B4C: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40007B50: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x40007B54: jal         0x400006C4
    // 0x40007B58: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40007B58: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x40007B5C: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x40007B60: lui         $t1, 0x4002
    ctx->r9 = S32(0X4002 << 16);
    // 0x40007B64: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x40007B68: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x40007B6C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x40007B70: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x40007B74: lw          $t1, -0x20C4($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X20C4);
    // 0x40007B78: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x40007B7C: lhu         $a1, 0x2($t1)
    ctx->r5 = MEM_HU(ctx->r9, 0X2);
    // 0x40007B80: nop

    // 0x40007B84: beq         $a1, $at, L_40007B94
    if (ctx->r5 == ctx->r1) {
        // 0x40007B88: nop
    
            goto L_40007B94;
    }
    // 0x40007B88: nop

    // 0x40007B8C: jal         0x40008EF8
    // 0x40007B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x40007B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_40007B94:
    // 0x40007B94: jal         0x40007A7C
    // 0x40007B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_7A7C(rdram, ctx);
        goto after_2;
    // 0x40007B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40007B9C: jal         0x40005014
    // 0x40007BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_5014(rdram, ctx);
        goto after_3;
    // 0x40007BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x40007BA4: jal         0x400087DC
    // 0x40007BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_87DC(rdram, ctx);
        goto after_4;
    // 0x40007BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x40007BAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40007BB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40007BB4: jr          $ra
    // 0x40007BB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x40007BB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_7BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40007BC0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x40007BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40007BC8: addiu       $a2, $a3, 0x18
    ctx->r6 = ADD32(ctx->r7, 0X18);
    // 0x40007BCC: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x40007BD0: jal         0x40001258
    // 0x40007BD4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_actor_main_1258(rdram, ctx);
        goto after_0;
    // 0x40007BD4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x40007BD8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x40007BDC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40007BE0: sw          $t6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r14;
    // 0x40007BE4: sw          $zero, 0x14($a3)
    MEM_W(0X14, ctx->r7) = 0;
    // 0x40007BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40007BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40007BF0: jr          $ra
    // 0x40007BF4: nop

    return;
    // 0x40007BF4: nop

;}
RECOMP_FUNC void ovl_actor_main_7BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007BF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40007BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40007C00: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x40007C04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x40007C08: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40007C0C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40007C10: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x40007C14: beq         $t6, $zero, L_40007D10
    if (ctx->r14 == 0) {
        // 0x40007C18: or          $s1, $a1, $zero
        ctx->r17 = ctx->r5 | 0;
            goto L_40007D10;
    }
    // 0x40007C18: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x40007C1C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x40007C20: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x40007C24: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x40007C28: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x40007C2C: nop

    // 0x40007C30: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x40007C34: sltiu       $at, $t9, 0x9
    ctx->r1 = ctx->r25 < 0X9 ? 1 : 0;
    // 0x40007C38: beq         $at, $zero, L_40007CF0
    if (ctx->r1 == 0) {
        // 0x40007C3C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_40007CF0;
    }
    // 0x40007C3C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x40007C40: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40007C44: addu        $at, $at, $t9
    gpr jr_addend_40007C50 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x40007C48: lw          $t9, -0x18C0($at)
    ctx->r25 = ADD32(ctx->r1, -0X18C0);
    // 0x40007C4C: nop

    // 0x40007C50: jr          $t9
    // 0x40007C54: nop

    switch (jr_addend_40007C50 >> 2) {
        case 0: goto L_40007C58; break;
        case 1: goto L_40007C58; break;
        case 2: goto L_40007C90; break;
        case 3: goto L_40007CF0; break;
        case 4: goto L_40007CF0; break;
        case 5: goto L_40007CA0; break;
        case 6: goto L_40007C74; break;
        case 7: goto L_40007CD4; break;
        case 8: goto L_40007CE4; break;
        default: switch_error(__func__, 0x40007C50, 0x4001E740);
    }
    // 0x40007C54: nop

L_40007C58:
    // 0x40007C58: lw          $t0, 0x90($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X90);
    // 0x40007C5C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x40007C60: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x40007C64: sw          $t1, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r9;
    // 0x40007C68: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x40007C6C: b           L_40007CF0
    // 0x40007C70: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
        goto L_40007CF0;
    // 0x40007C70: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
L_40007C74:
    // 0x40007C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40007C78: jal         0x40006458
    // 0x40007C7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_6458(rdram, ctx);
        goto after_0;
    // 0x40007C7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x40007C80: jal         0x40007A7C
    // 0x40007C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_7A7C(rdram, ctx);
        goto after_1;
    // 0x40007C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40007C88: b           L_40007CF4
    // 0x40007C8C: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
        goto L_40007CF4;
    // 0x40007C8C: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
L_40007C90:
    // 0x40007C90: jal         0x40007B1C
    // 0x40007C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_7B1C(rdram, ctx);
        goto after_2;
    // 0x40007C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40007C98: b           L_40007CF4
    // 0x40007C9C: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
        goto L_40007CF4;
    // 0x40007C9C: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
L_40007CA0:
    // 0x40007CA0: lw          $t3, 0x90($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X90);
    // 0x40007CA4: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x40007CA8: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x40007CAC: sw          $t4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r12;
    // 0x40007CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40007CB4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x40007CB8: jal         0x40010934
    // 0x40007CBC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_actor_main_10934(rdram, ctx);
        goto after_3;
    // 0x40007CBC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
    // 0x40007CC0: lw          $t5, 0x90($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X90);
    // 0x40007CC4: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x40007CC8: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x40007CCC: b           L_40007CF0
    // 0x40007CD0: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
        goto L_40007CF0;
    // 0x40007CD0: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
L_40007CD4:
    // 0x40007CD4: jal         0x4000073C
    // 0x40007CD8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_actor_main_73C(rdram, ctx);
        goto after_4;
    // 0x40007CD8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_4:
    // 0x40007CDC: b           L_40007CF4
    // 0x40007CE0: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
        goto L_40007CF4;
    // 0x40007CE0: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
L_40007CE4:
    // 0x40007CE4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x40007CE8: jal         0x40000EC8
    // 0x40007CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_EC8(rdram, ctx);
        goto after_5;
    // 0x40007CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_40007CF0:
    // 0x40007CF0: lw          $t7, 0x18($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X18);
L_40007CF4:
    // 0x40007CF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40007CF8: beq         $t7, $at, L_40007D08
    if (ctx->r15 == ctx->r1) {
        // 0x40007CFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40007D08;
    }
    // 0x40007CFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40007D00: jal         0x40007BBC
    // 0x40007D04: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_actor_main_7BBC(rdram, ctx);
        goto after_6;
    // 0x40007D04: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
L_40007D08:
    // 0x40007D08: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    // 0x40007D0C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
L_40007D10:
    // 0x40007D10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40007D14: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x40007D18: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x40007D1C: jr          $ra
    // 0x40007D20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x40007D20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_actor_main_7D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007D24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40007D28: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x40007D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40007D30: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x40007D34: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x40007D38: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x40007D3C: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x40007D40: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x40007D44: bltz        $v0, L_40007D6C
    if (SIGNED(ctx->r2) < 0) {
        // 0x40007D48: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_40007D6C;
    }
    // 0x40007D48: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x40007D4C: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x40007D50: beq         $at, $zero, L_40007D6C
    if (ctx->r1 == 0) {
        // 0x40007D54: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_40007D6C;
    }
    // 0x40007D54: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x40007D58: lui         $t8, 0x4002
    ctx->r24 = S32(0X4002 << 16);
    // 0x40007D5C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x40007D60: lw          $t8, -0x28AC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X28AC);
    // 0x40007D64: b           L_40007D70
    // 0x40007D68: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
        goto L_40007D70;
    // 0x40007D68: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_40007D6C:
    // 0x40007D6C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_40007D70:
    // 0x40007D70: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x40007D74: jal         0x400006C4
    // 0x40007D78: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40007D78: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x40007D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40007D80: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x40007D84: jr          $ra
    // 0x40007D88: nop

    return;
    // 0x40007D88: nop

;}
RECOMP_FUNC void ovl_actor_main_7D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007D8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40007D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40007D94: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x40007D98: lw          $a1, 0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X10);
    // 0x40007D9C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x40007DA0: jal         0x40007D24
    // 0x40007DA4: ori         $a2, $t6, 0x8000
    ctx->r6 = ctx->r14 | 0X8000;
    ovl_actor_main_7D24(rdram, ctx);
        goto after_0;
    // 0x40007DA4: ori         $a2, $t6, 0x8000
    ctx->r6 = ctx->r14 | 0X8000;
    after_0:
    // 0x40007DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40007DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40007DB0: jr          $ra
    // 0x40007DB4: nop

    return;
    // 0x40007DB4: nop

;}
RECOMP_FUNC void ovl_actor_main_7DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007DB8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x40007DBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40007DC0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x40007DC4: lw          $t6, 0x18($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X18);
    // 0x40007DC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40007DCC: beq         $t6, $at, L_40007E50
    if (ctx->r14 == ctx->r1) {
        // 0x40007DD0: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_40007E50;
    }
    // 0x40007DD0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x40007DD4: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x40007DD8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x40007DDC: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x40007DE0: bgtz        $v0, L_40007DFC
    if (SIGNED(ctx->r2) > 0) {
        // 0x40007DE4: sw          $t7, 0x14($a1)
        MEM_W(0X14, ctx->r5) = ctx->r15;
            goto L_40007DFC;
    }
    // 0x40007DE4: sw          $t7, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r15;
    // 0x40007DE8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x40007DEC: jal         0x40007BBC
    // 0x40007DF0: nop

    ovl_actor_main_7BBC(rdram, ctx);
        goto after_0;
    // 0x40007DF0: nop

    after_0:
    // 0x40007DF4: b           L_40007E54
    // 0x40007DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40007E54;
    // 0x40007DF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40007DFC:
    // 0x40007DFC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x40007E00: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40007E04: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    // 0x40007E08: jal         0x400006C4
    // 0x40007E0C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40007E0C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    after_1:
    // 0x40007E10: lw          $a3, 0x54($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X54);
    // 0x40007E14: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x40007E18: lw          $t9, 0x18($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X18);
    // 0x40007E1C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40007E20: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x40007E24: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x40007E28: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x40007E2C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x40007E30: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x40007E34: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x40007E38: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x40007E3C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x40007E40: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x40007E44: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x40007E48: jal         0x40001258
    // 0x40007E4C: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_2;
    // 0x40007E4C: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    after_2:
L_40007E50:
    // 0x40007E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40007E54:
    // 0x40007E54: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x40007E58: jr          $ra
    // 0x40007E5C: nop

    return;
    // 0x40007E5C: nop

;}
RECOMP_FUNC void ovl_actor_main_7E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40007E60: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x40007E64: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40007E68: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x40007E6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40007E70: jal         0x400063C0
    // 0x40007E74: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    ovl_actor_main_63C0(rdram, ctx);
        goto after_0;
    // 0x40007E74: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_0:
    // 0x40007E78: beq         $v0, $zero, L_400082B8
    if (ctx->r2 == 0) {
        // 0x40007E7C: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_400082B8;
    }
    // 0x40007E7C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x40007E80: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
    // 0x40007E84: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x40007E88: sll         $t6, $v1, 14
    ctx->r14 = S32(ctx->r3 << 14);
    // 0x40007E8C: bgez        $t6, L_400080A0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x40007E90: andi        $t2, $v1, 0x100
        ctx->r10 = ctx->r3 & 0X100;
            goto L_400080A0;
    }
    // 0x40007E90: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
    // 0x40007E94: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40007E98: jal         0x400006C4
    // 0x40007E9C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40007E9C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x40007EA0: lw          $v1, 0xC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC);
    // 0x40007EA4: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x40007EA8: beq         $v1, $zero, L_40007ED4
    if (ctx->r3 == 0) {
        // 0x40007EAC: nop
    
            goto L_40007ED4;
    }
    // 0x40007EAC: nop

    // 0x40007EB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40007EB4: beq         $v1, $at, L_40007EE8
    if (ctx->r3 == ctx->r1) {
        // 0x40007EB8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_40007EE8;
    }
    // 0x40007EB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40007EBC: beq         $v1, $at, L_40007F90
    if (ctx->r3 == ctx->r1) {
        // 0x40007EC0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_40007F90;
    }
    // 0x40007EC0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x40007EC4: beq         $v1, $at, L_40007F40
    if (ctx->r3 == ctx->r1) {
        // 0x40007EC8: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_40007F40;
    }
    // 0x40007EC8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x40007ECC: b           L_40008040
    // 0x40007ED0: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
        goto L_40008040;
    // 0x40007ED0: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
L_40007ED4:
    // 0x40007ED4: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x40007ED8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40007EDC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x40007EE0: b           L_4000803C
    // 0x40007EE4: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
        goto L_4000803C;
    // 0x40007EE4: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
L_40007EE8:
    // 0x40007EE8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x40007EEC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40007EF0: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x40007EF4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40007EF8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x40007EFC: nop

    // 0x40007F00: bc1f        L_4000803C
    if (!c1cs) {
        // 0x40007F04: nop
    
            goto L_4000803C;
    }
    // 0x40007F04: nop

    // 0x40007F08: lwc1        $f4, -0x189C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X189C);
    // 0x40007F0C: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x40007F10: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x40007F14: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x40007F18: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x40007F1C: bc1f        L_4000803C
    if (!c1cs) {
        // 0x40007F20: nop
    
            goto L_4000803C;
    }
    // 0x40007F20: nop

    // 0x40007F24: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x40007F28: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x40007F2C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40007F30: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x40007F34: b           L_4000803C
    // 0x40007F38: sw          $t0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r8;
        goto L_4000803C;
    // 0x40007F38: sw          $t0, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r8;
    // 0x40007F3C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
L_40007F40:
    // 0x40007F40: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40007F44: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x40007F48: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40007F4C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x40007F50: nop

    // 0x40007F54: bc1f        L_4000803C
    if (!c1cs) {
        // 0x40007F58: nop
    
            goto L_4000803C;
    }
    // 0x40007F58: nop

    // 0x40007F5C: lwc1        $f6, -0x1898($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1898);
    // 0x40007F60: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x40007F64: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x40007F68: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x40007F6C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x40007F70: bc1f        L_4000803C
    if (!c1cs) {
        // 0x40007F74: nop
    
            goto L_4000803C;
    }
    // 0x40007F74: nop

    // 0x40007F78: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x40007F7C: lw          $t1, 0x90($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X90);
    // 0x40007F80: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40007F84: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x40007F88: b           L_4000803C
    // 0x40007F8C: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
        goto L_4000803C;
    // 0x40007F8C: sw          $t2, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r10;
L_40007F90:
    // 0x40007F90: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x40007F94: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40007F98: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x40007F9C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40007FA0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x40007FA4: nop

    // 0x40007FA8: bc1f        L_40007FE4
    if (!c1cs) {
        // 0x40007FAC: nop
    
            goto L_40007FE4;
    }
    // 0x40007FAC: nop

    // 0x40007FB0: lwc1        $f8, -0x1894($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1894);
    // 0x40007FB4: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x40007FB8: sub.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x40007FBC: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x40007FC0: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x40007FC4: bc1f        L_4000803C
    if (!c1cs) {
        // 0x40007FC8: nop
    
            goto L_4000803C;
    }
    // 0x40007FC8: nop

    // 0x40007FCC: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x40007FD0: lw          $t3, 0x90($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X90);
    // 0x40007FD4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40007FD8: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x40007FDC: b           L_4000803C
    // 0x40007FE0: sw          $t4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r12;
        goto L_4000803C;
    // 0x40007FE0: sw          $t4, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r12;
L_40007FE4:
    // 0x40007FE4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x40007FE8: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x40007FEC: bc1f        L_4000802C
    if (!c1cs) {
        // 0x40007FF0: nop
    
            goto L_4000802C;
    }
    // 0x40007FF0: nop

    // 0x40007FF4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40007FF8: lwc1        $f10, -0x1890($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1890);
    // 0x40007FFC: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x40008000: add.s       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x40008004: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x40008008: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x4000800C: bc1f        L_4000803C
    if (!c1cs) {
        // 0x40008010: nop
    
            goto L_4000803C;
    }
    // 0x40008010: nop

    // 0x40008014: swc1        $f2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f2.u32l;
    // 0x40008018: lw          $t5, 0x90($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X90);
    // 0x4000801C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40008020: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x40008024: b           L_4000803C
    // 0x40008028: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
        goto L_4000803C;
    // 0x40008028: sw          $t6, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r14;
L_4000802C:
    // 0x4000802C: lw          $t7, 0x90($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X90);
    // 0x40008030: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40008034: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x40008038: sw          $t8, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r24;
L_4000803C:
    // 0x4000803C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
L_40008040:
    // 0x40008040: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x40008044: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x40008048: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x4000804C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40008050: jal         0x400006C4
    // 0x40008054: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x40008054: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x40008058: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
    // 0x4000805C: nop

    // 0x40008060: sll         $t9, $v1, 14
    ctx->r25 = S32(ctx->r3 << 14);
    // 0x40008064: bltz        $t9, L_4000809C
    if (SIGNED(ctx->r25) < 0) {
        // 0x40008068: andi        $t0, $v1, 0x20
        ctx->r8 = ctx->r3 & 0X20;
            goto L_4000809C;
    }
    // 0x40008068: andi        $t0, $v1, 0x20
    ctx->r8 = ctx->r3 & 0X20;
    // 0x4000806C: beq         $t0, $zero, L_400080A0
    if (ctx->r8 == 0) {
        // 0x40008070: andi        $t2, $v1, 0x100
        ctx->r10 = ctx->r3 & 0X100;
            goto L_400080A0;
    }
    // 0x40008070: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
    // 0x40008074: lw          $t1, 0xC8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC8);
    // 0x40008078: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x4000807C: beq         $t1, $at, L_400080A0
    if (ctx->r9 == ctx->r1) {
        // 0x40008080: andi        $t2, $v1, 0x100
        ctx->r10 = ctx->r3 & 0X100;
            goto L_400080A0;
    }
    // 0x40008080: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
    // 0x40008084: jal         0x400090A0
    // 0x40008088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_90A0(rdram, ctx);
        goto after_3;
    // 0x40008088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4000808C: jal         0x40010D48
    // 0x40008090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_10D48(rdram, ctx);
        goto after_4;
    // 0x40008090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x40008094: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
    // 0x40008098: nop

L_4000809C:
    // 0x4000809C: andi        $t2, $v1, 0x100
    ctx->r10 = ctx->r3 & 0X100;
L_400080A0:
    // 0x400080A0: beq         $t2, $zero, L_400082B8
    if (ctx->r10 == 0) {
        // 0x400080A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400082B8;
    }
    // 0x400080A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400080A8: jal         0x40007DB8
    // 0x400080AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_actor_main_7DB8(rdram, ctx);
        goto after_5;
    // 0x400080AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x400080B0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x400080B4: nop

    // 0x400080B8: beq         $v0, $zero, L_400080CC
    if (ctx->r2 == 0) {
        // 0x400080BC: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_400080CC;
    }
    // 0x400080BC: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x400080C0: bgez        $t3, L_400080CC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x400080C4: sw          $t3, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r11;
            goto L_400080CC;
    }
    // 0x400080C4: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x400080C8: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_400080CC:
    // 0x400080CC: lw          $t5, 0x8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8);
    // 0x400080D0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x400080D4: bne         $t5, $at, L_40008234
    if (ctx->r13 != ctx->r1) {
        // 0x400080D8: nop
    
            goto L_40008234;
    }
    // 0x400080D8: nop

    // 0x400080DC: lw          $t6, 0x4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X4);
    // 0x400080E0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x400080E4: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x400080E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400080EC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x400080F0: mfhi        $t7
    ctx->r15 = hi;
    // 0x400080F4: bne         $t7, $zero, L_40008110
    if (ctx->r15 != 0) {
        // 0x400080F8: nop
    
            goto L_40008110;
    }
    // 0x400080F8: nop

    // 0x400080FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40008100: lui         $a3, 0x42A0
    ctx->r7 = S32(0X42A0 << 16);
    // 0x40008104: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40008108: jal         0x4000118C
    // 0x4000810C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_6;
    // 0x4000810C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_6:
L_40008110:
    // 0x40008110: lw          $t8, 0x10($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X10);
    // 0x40008114: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x40008118: bne         $t8, $zero, L_40008168
    if (ctx->r24 != 0) {
        // 0x4000811C: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_40008168;
    }
    // 0x4000811C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x40008120: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x40008124: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40008128: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x4000812C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40008130: lwc1        $f18, 0xC($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0XC);
    // 0x40008134: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x40008138: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x4000813C: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x40008140: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x40008144: nop

    // 0x40008148: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x4000814C: nop

    // 0x40008150: bc1f        L_400081A8
    if (!c1cs) {
        // 0x40008154: nop
    
            goto L_400081A8;
    }
    // 0x40008154: nop

    // 0x40008158: swc1        $f2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f2.u32l;
    // 0x4000815C: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x40008160: b           L_400081A8
    // 0x40008164: sw          $t9, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r25;
        goto L_400081A8;
    // 0x40008164: sw          $t9, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r25;
L_40008168:
    // 0x40008168: lwc1        $f8, 0xC($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0XC);
    // 0x4000816C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40008170: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x40008174: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x40008178: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x4000817C: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x40008180: nop

    // 0x40008184: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x40008188: nop

    // 0x4000818C: bc1f        L_400081A8
    if (!c1cs) {
        // 0x40008190: nop
    
            goto L_400081A8;
    }
    // 0x40008190: nop

    // 0x40008194: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40008198: sw          $zero, 0x10($s1)
    MEM_W(0X10, ctx->r17) = 0;
    // 0x4000819C: swc1        $f4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f4.u32l;
    // 0x400081A0: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x400081A4: nop

L_400081A8:
    // 0x400081A8: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x400081AC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x400081B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400081B4: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x400081B8: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x400081BC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x400081C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x400081C4: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x400081C8: beq         $t1, $zero, L_40008218
    if (ctx->r9 == 0) {
        // 0x400081CC: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_40008218;
    }
    // 0x400081CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x400081D0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x400081D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400081D8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x400081DC: sub.s       $f6, $f0, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x400081E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x400081E4: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x400081E8: nop

    // 0x400081EC: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x400081F0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x400081F4: nop

    // 0x400081F8: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x400081FC: bne         $t1, $zero, L_40008210
    if (ctx->r9 != 0) {
        // 0x40008200: nop
    
            goto L_40008210;
    }
    // 0x40008200: nop

    // 0x40008204: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x40008208: b           L_40008228
    // 0x4000820C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_40008228;
    // 0x4000820C: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_40008210:
    // 0x40008210: b           L_40008228
    // 0x40008214: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_40008228;
    // 0x40008214: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_40008218:
    // 0x40008218: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x4000821C: nop

    // 0x40008220: bltz        $t1, L_40008210
    if (SIGNED(ctx->r9) < 0) {
        // 0x40008224: nop
    
            goto L_40008210;
    }
    // 0x40008224: nop

L_40008228:
    // 0x40008228: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x4000822C: jal         0x4001096C
    // 0x40008230: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    ovl_actor_main_1096C(rdram, ctx);
        goto after_7;
    // 0x40008230: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_7:
L_40008234:
    // 0x40008234: lw          $t2, 0x4($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X4);
    // 0x40008238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4000823C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x40008240: bgez        $t3, L_400082B8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x40008244: sw          $t3, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->r11;
            goto L_400082B8;
    }
    // 0x40008244: sw          $t3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r11;
    // 0x40008248: lw          $t5, 0x8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8);
    // 0x4000824C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40008250: bne         $t5, $at, L_40008274
    if (ctx->r13 != ctx->r1) {
        // 0x40008254: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_40008274;
    }
    // 0x40008254: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x40008258: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x4000825C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40008260: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x40008264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x40008268: bne         $t7, $at, L_40008278
    if (ctx->r15 != ctx->r1) {
        // 0x4000826C: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_40008278;
    }
    // 0x4000826C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x40008270: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_40008274:
    // 0x40008274: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
L_40008278:
    // 0x40008278: jal         0x40007BF8
    // 0x4000827C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    ovl_actor_main_7BF8(rdram, ctx);
        goto after_8;
    // 0x4000827C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_8:
    // 0x40008280: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x40008284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40008288: beq         $v0, $zero, L_400082BC
    if (ctx->r2 == 0) {
        // 0x4000828C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_400082BC;
    }
    // 0x4000828C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40008290: jal         0x40007D8C
    // 0x40008294: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    ovl_actor_main_7D8C(rdram, ctx);
        goto after_9;
    // 0x40008294: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_9:
    // 0x40008298: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x4000829C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400082A0: bne         $v0, $at, L_400082BC
    if (ctx->r2 != ctx->r1) {
        // 0x400082A4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_400082BC;
    }
    // 0x400082A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400082A8: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x400082AC: nop

    // 0x400082B0: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x400082B4: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
L_400082B8:
    // 0x400082B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400082BC:
    // 0x400082BC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x400082C0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x400082C4: jr          $ra
    // 0x400082C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x400082C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_82CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400082CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400082D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400082D4: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x400082D8: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x400082DC: sll         $t6, $v0, 15
    ctx->r14 = S32(ctx->r2 << 15);
    // 0x400082E0: bgez        $t6, L_40008320
    if (SIGNED(ctx->r14) >= 0) {
        // 0x400082E4: ori         $at, $at, 0xFFFF
        ctx->r1 = ctx->r1 | 0XFFFF;
            goto L_40008320;
    }
    // 0x400082E4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x400082E8: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x400082EC: sw          $t7, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r15;
    // 0x400082F0: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x400082F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x400082F8: beq         $v1, $at, L_40008318
    if (ctx->r3 == ctx->r1) {
        // 0x400082FC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_40008318;
    }
    // 0x400082FC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40008300: bne         $v1, $at, L_40008318
    if (ctx->r3 != ctx->r1) {
        // 0x40008304: nop
    
            goto L_40008318;
    }
    // 0x40008304: nop

    // 0x40008308: jal         0x40007B1C
    // 0x4000830C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_actor_main_7B1C(rdram, ctx);
        goto after_0;
    // 0x4000830C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x40008310: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x40008314: nop

L_40008318:
    // 0x40008318: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x4000831C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
L_40008320:
    // 0x40008320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40008324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40008328: jr          $ra
    // 0x4000832C: nop

    return;
    // 0x4000832C: nop

;}
RECOMP_FUNC void ovl_actor_main_8330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008330: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40008334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40008338: jal         0x40006428
    // 0x4000833C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_actor_main_6428(rdram, ctx);
        goto after_0;
    // 0x4000833C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x40008340: beq         $v0, $zero, L_40008404
    if (ctx->r2 == 0) {
        // 0x40008344: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_40008404;
    }
    // 0x40008344: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x40008348: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x4000834C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x40008350: beq         $v1, $at, L_40008368
    if (ctx->r3 == ctx->r1) {
        // 0x40008354: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_40008368;
    }
    // 0x40008354: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x40008358: beq         $v1, $at, L_400083E4
    if (ctx->r3 == ctx->r1) {
        // 0x4000835C: nop
    
            goto L_400083E4;
    }
    // 0x4000835C: nop

    // 0x40008360: b           L_400083E8
    // 0x40008364: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
        goto L_400083E8;
    // 0x40008364: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
L_40008368:
    // 0x40008368: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x4000836C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x40008370: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x40008374: bgtz        $t7, L_400083E4
    if (SIGNED(ctx->r15) > 0) {
        // 0x40008378: sw          $t7, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r15;
            goto L_400083E4;
    }
    // 0x40008378: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x4000837C: jal         0x4000034C
    // 0x40008380: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_actor_main_34C(rdram, ctx);
        goto after_1;
    // 0x40008380: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_1:
    // 0x40008384: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x40008388: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x4000838C: beq         $t9, $zero, L_400083DC
    if (ctx->r25 == 0) {
        // 0x40008390: addiu       $t0, $zero, 0x26
        ctx->r8 = ADD32(0, 0X26);
            goto L_400083DC;
    }
    // 0x40008390: addiu       $t0, $zero, 0x26
    ctx->r8 = ADD32(0, 0X26);
    // 0x40008394: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40008398: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x4000839C: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x400083A0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x400083A4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x400083A8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x400083AC: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x400083B0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x400083B4: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x400083B8: ori         $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 | 0X8000;
    // 0x400083BC: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x400083C0: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x400083C4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x400083C8: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x400083CC: jal         0x400006C4
    // 0x400083D0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x400083D0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x400083D4: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x400083D8: nop

L_400083DC:
    // 0x400083DC: addiu       $t4, $zero, 0x78
    ctx->r12 = ADD32(0, 0X78);
    // 0x400083E0: sw          $t4, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r12;
L_400083E4:
    // 0x400083E4: lw          $t5, 0x0($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X0);
L_400083E8:
    // 0x400083E8: nop

    // 0x400083EC: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x400083F0: bgtz        $t6, L_40008404
    if (SIGNED(ctx->r14) > 0) {
        // 0x400083F4: sw          $t6, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r14;
            goto L_40008404;
    }
    // 0x400083F4: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x400083F8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x400083FC: jal         0x400082CC
    // 0x40008400: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    ovl_actor_main_82CC(rdram, ctx);
        goto after_3;
    // 0x40008400: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_3:
L_40008404:
    // 0x40008404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40008408: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4000840C: jr          $ra
    // 0x40008410: nop

    return;
    // 0x40008410: nop

;}
RECOMP_FUNC void ovl_actor_main_8414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008414: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40008418: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4000841C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40008420: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x40008424: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x40008428: bne         $t6, $at, L_40008694
    if (ctx->r14 != ctx->r1) {
        // 0x4000842C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_40008694;
    }
    // 0x4000842C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40008430: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x40008434: nop

    // 0x40008438: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x4000843C: bgez        $t7, L_400085CC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x40008440: sll         $t1, $v0, 10
        ctx->r9 = S32(ctx->r2 << 10);
            goto L_400085CC;
    }
    // 0x40008440: sll         $t1, $v0, 10
    ctx->r9 = S32(ctx->r2 << 10);
    // 0x40008444: lw          $t8, 0x360($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X360);
    // 0x40008448: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x4000844C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x40008450: slti        $at, $t9, 0x14
    ctx->r1 = SIGNED(ctx->r25) < 0X14 ? 1 : 0;
    // 0x40008454: bne         $at, $zero, L_40008480
    if (ctx->r1 != 0) {
        // 0x40008458: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_40008480;
    }
    // 0x40008458: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x4000845C: lui         $at, 0xFBFF
    ctx->r1 = S32(0XFBFF << 16);
    // 0x40008460: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40008464: and         $t0, $v0, $at
    ctx->r8 = ctx->r2 & ctx->r1;
    // 0x40008468: sw          $t0, 0x90($a0)
    MEM_W(0X90, ctx->r4) = ctx->r8;
    // 0x4000846C: jal         0x40010934
    // 0x40008470: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_actor_main_10934(rdram, ctx);
        goto after_0;
    // 0x40008470: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x40008474: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x40008478: b           L_400085CC
    // 0x4000847C: sll         $t1, $v0, 10
    ctx->r9 = S32(ctx->r2 << 10);
        goto L_400085CC;
    // 0x4000847C: sll         $t1, $v0, 10
    ctx->r9 = S32(ctx->r2 << 10);
L_40008480:
    // 0x40008480: addiu       $v0, $s0, 0x324
    ctx->r2 = ADD32(ctx->r16, 0X324);
    // 0x40008484: lw          $t1, 0x3C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X3C);
    // 0x40008488: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x4000848C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x40008490: sll         $t4, $t2, 0
    ctx->r12 = S32(ctx->r10 << 0);
    // 0x40008494: bltz        $t4, L_400084E8
    if (SIGNED(ctx->r12) < 0) {
        // 0x40008498: sw          $t2, 0x3C($v0)
        MEM_W(0X3C, ctx->r2) = ctx->r10;
            goto L_400084E8;
    }
    // 0x40008498: sw          $t2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r10;
    // 0x4000849C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x400084A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400084A4: lwc1        $f4, 0x38($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X38);
    // 0x400084A8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x400084AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x400084B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x400084B4: swc1        $f8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f8.u32l;
    // 0x400084B8: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x400084BC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x400084C0: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x400084C4: nop

    // 0x400084C8: bc1f        L_40008534
    if (!c1cs) {
        // 0x400084CC: nop
    
            goto L_40008534;
    }
    // 0x400084CC: nop

    // 0x400084D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400084D4: or          $t6, $t2, $v1
    ctx->r14 = ctx->r10 | ctx->r3;
    // 0x400084D8: swc1        $f16, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f16.u32l;
    // 0x400084DC: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x400084E0: b           L_40008534
    // 0x400084E4: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
        goto L_40008534;
    // 0x400084E4: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
L_400084E8:
    // 0x400084E8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x400084EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400084F0: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x400084F4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x400084F8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x400084FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40008500: swc1        $f6, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f6.u32l;
    // 0x40008504: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x40008508: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x4000850C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x40008510: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x40008514: bc1f        L_40008534
    if (!c1cs) {
        // 0x40008518: nop
    
            goto L_40008534;
    }
    // 0x40008518: nop

    // 0x4000851C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x40008520: lw          $t7, 0x3C($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X3C);
    // 0x40008524: swc1        $f10, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f10.u32l;
    // 0x40008528: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x4000852C: lwc1        $f0, 0x38($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X38);
    // 0x40008530: sw          $t8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r24;
L_40008534:
    // 0x40008534: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x40008538: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x4000853C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40008540: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x40008544: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x40008548: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x4000854C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x40008550: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x40008554: beq         $t0, $zero, L_400085A4
    if (ctx->r8 == 0) {
        // 0x40008558: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_400085A4;
    }
    // 0x40008558: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4000855C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x40008560: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40008564: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40008568: sub.s       $f16, $f0, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x4000856C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x40008570: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x40008574: nop

    // 0x40008578: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x4000857C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x40008580: nop

    // 0x40008584: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x40008588: bne         $t0, $zero, L_4000859C
    if (ctx->r8 != 0) {
        // 0x4000858C: nop
    
            goto L_4000859C;
    }
    // 0x4000858C: nop

    // 0x40008590: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x40008594: b           L_400085B4
    // 0x40008598: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_400085B4;
    // 0x40008598: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_4000859C:
    // 0x4000859C: b           L_400085B4
    // 0x400085A0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_400085B4;
    // 0x400085A0: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_400085A4:
    // 0x400085A4: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x400085A8: nop

    // 0x400085AC: bltz        $t0, L_4000859C
    if (SIGNED(ctx->r8) < 0) {
        // 0x400085B0: nop
    
            goto L_4000859C;
    }
    // 0x400085B0: nop

L_400085B4:
    // 0x400085B4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x400085B8: jal         0x4001096C
    // 0x400085BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    ovl_actor_main_1096C(rdram, ctx);
        goto after_1;
    // 0x400085BC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_1:
    // 0x400085C0: lw          $v0, 0x90($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X90);
    // 0x400085C4: nop

    // 0x400085C8: sll         $t1, $v0, 10
    ctx->r9 = S32(ctx->r2 << 10);
L_400085CC:
    // 0x400085CC: bgez        $t1, L_40008658
    if (SIGNED(ctx->r9) >= 0) {
        // 0x400085D0: sll         $t5, $v0, 9
        ctx->r13 = S32(ctx->r2 << 9);
            goto L_40008658;
    }
    // 0x400085D0: sll         $t5, $v0, 9
    ctx->r13 = S32(ctx->r2 << 9);
    // 0x400085D4: sll         $t2, $v0, 9
    ctx->r10 = S32(ctx->r2 << 9);
    // 0x400085D8: bltz        $t2, L_400085F8
    if (SIGNED(ctx->r10) < 0) {
        // 0x400085DC: nop
    
            goto L_400085F8;
    }
    // 0x400085DC: nop

    // 0x400085E0: lw          $v0, 0x350($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X350);
    // 0x400085E4: nop

    // 0x400085E8: blez        $v0, L_40008694
    if (SIGNED(ctx->r2) <= 0) {
        // 0x400085EC: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_40008694;
    }
    // 0x400085EC: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x400085F0: b           L_40008694
    // 0x400085F4: sw          $t3, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r11;
        goto L_40008694;
    // 0x400085F4: sw          $t3, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r11;
L_400085F8:
    // 0x400085F8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x400085FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40008600: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x40008604: lw          $a0, 0x34C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34C);
    // 0x40008608: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    // 0x4000860C: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    // 0x40008610: jal         0x400016B4
    // 0x40008614: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
    ovl_actor_main_16B4(rdram, ctx);
        goto after_2;
    // 0x40008614: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
    after_2:
    // 0x40008618: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4000861C: bne         $v0, $at, L_40008638
    if (ctx->r2 != ctx->r1) {
        // 0x40008620: nop
    
            goto L_40008638;
    }
    // 0x40008620: nop

    // 0x40008624: lw          $a1, 0x34C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X34C);
    // 0x40008628: jal         0x40002630
    // 0x4000862C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_2630(rdram, ctx);
        goto after_3;
    // 0x4000862C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x40008630: b           L_40008698
    // 0x40008634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40008698;
    // 0x40008634: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40008638:
    // 0x40008638: lw          $t4, 0x32C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X32C);
    // 0x4000863C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x40008640: bne         $t4, $at, L_40008698
    if (ctx->r12 != ctx->r1) {
        // 0x40008644: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_40008698;
    }
    // 0x40008644: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40008648: jal         0x40007D8C
    // 0x4000864C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_7D8C(rdram, ctx);
        goto after_4;
    // 0x4000864C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x40008650: b           L_40008698
    // 0x40008654: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40008698;
    // 0x40008654: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40008658:
    // 0x40008658: bgez        $t5, L_40008680
    if (SIGNED(ctx->r13) >= 0) {
        // 0x4000865C: nop
    
            goto L_40008680;
    }
    // 0x4000865C: nop

    // 0x40008660: lw          $t6, 0x34C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X34C);
    // 0x40008664: nop

    // 0x40008668: bgtz        $t6, L_40008698
    if (SIGNED(ctx->r14) > 0) {
        // 0x4000866C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_40008698;
    }
    // 0x4000866C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40008670: jal         0x40005FD0
    // 0x40008674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_5FD0(rdram, ctx);
        goto after_5;
    // 0x40008674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x40008678: b           L_40008698
    // 0x4000867C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40008698;
    // 0x4000867C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40008680:
    // 0x40008680: lw          $v0, 0x358($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X358);
    // 0x40008684: nop

    // 0x40008688: blez        $v0, L_40008694
    if (SIGNED(ctx->r2) <= 0) {
        // 0x4000868C: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_40008694;
    }
    // 0x4000868C: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x40008690: sw          $t7, 0x358($s0)
    MEM_W(0X358, ctx->r16) = ctx->r15;
L_40008694:
    // 0x40008694: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40008698:
    // 0x40008698: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4000869C: jr          $ra
    // 0x400086A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x400086A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_86A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400086A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x400086A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400086AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x400086B0: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x400086B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400086B8: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x400086BC: beq         $t7, $zero, L_4000878C
    if (ctx->r15 == 0) {
        // 0x400086C0: nop
    
            goto L_4000878C;
    }
    // 0x400086C0: nop

    // 0x400086C4: jal         0x400063F0
    // 0x400086C8: nop

    ovl_actor_main_63F0(rdram, ctx);
        goto after_0;
    // 0x400086C8: nop

    after_0:
    // 0x400086CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400086D0: jal         0x40009414
    // 0x400086D4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_actor_main_9414(rdram, ctx);
        goto after_1;
    // 0x400086D4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x400086D8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x400086DC: nop

    // 0x400086E0: beq         $a1, $zero, L_400086F0
    if (ctx->r5 == 0) {
        // 0x400086E4: nop
    
            goto L_400086F0;
    }
    // 0x400086E4: nop

    // 0x400086E8: jal         0x40007DB8
    // 0x400086EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_7DB8(rdram, ctx);
        goto after_2;
    // 0x400086EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_400086F0:
    // 0x400086F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x400086F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400086F8: ori         $a1, $zero, 0xC000
    ctx->r5 = 0 | 0XC000;
    // 0x400086FC: ori         $a2, $zero, 0xC000
    ctx->r6 = 0 | 0XC000;
    // 0x40008700: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x40008704: jal         0x400090EC
    // 0x40008708: swc1        $f4, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_90EC(rdram, ctx);
        goto after_3;
    // 0x40008708: swc1        $f4, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f4.u32l;
    after_3:
    // 0x4000870C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x40008710: lwc1        $f6, 0x300($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X300);
    // 0x40008714: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x40008718: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x4000871C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x40008720: lw          $t9, 0x3FC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X3FC);
    // 0x40008724: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x40008728: lw          $t1, 0x314($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X314);
    // 0x4000872C: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x40008730: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x40008734: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x40008738: slti        $at, $t0, 0x78
    ctx->r1 = SIGNED(ctx->r8) < 0X78 ? 1 : 0;
    // 0x4000873C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x40008740: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x40008744: sw          $t0, 0x3FC($s0)
    MEM_W(0X3FC, ctx->r16) = ctx->r8;
    // 0x40008748: sw          $t2, 0x314($s0)
    MEM_W(0X314, ctx->r16) = ctx->r10;
    // 0x4000874C: bne         $at, $zero, L_4000875C
    if (ctx->r1 != 0) {
        // 0x40008750: swc1        $f10, 0x300($s0)
        MEM_W(0X300, ctx->r16) = ctx->f10.u32l;
            goto L_4000875C;
    }
    // 0x40008750: swc1        $f10, 0x300($s0)
    MEM_W(0X300, ctx->r16) = ctx->f10.u32l;
    // 0x40008754: jal         0x40004120
    // 0x40008758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_4120(rdram, ctx);
        goto after_4;
    // 0x40008758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_4000875C:
    // 0x4000875C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x40008760: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x40008764: beq         $v1, $v0, L_4000878C
    if (ctx->r3 == ctx->r2) {
        // 0x40008768: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_4000878C;
    }
    // 0x40008768: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x4000876C: bne         $a0, $v0, L_400087D0
    if (ctx->r4 != ctx->r2) {
        // 0x40008770: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400087D0;
    }
    // 0x40008770: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40008774: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x40008778: nop

    // 0x4000877C: beq         $v1, $v0, L_4000878C
    if (ctx->r3 == ctx->r2) {
        // 0x40008780: nop
    
            goto L_4000878C;
    }
    // 0x40008780: nop

    // 0x40008784: bne         $a0, $v0, L_400087D0
    if (ctx->r4 != ctx->r2) {
        // 0x40008788: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_400087D0;
    }
    // 0x40008788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4000878C:
    // 0x4000878C: jal         0x40011A58
    // 0x40008790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11A58(rdram, ctx);
        goto after_5;
    // 0x40008790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x40008794: jal         0x400077D8
    // 0x40008798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_77D8(rdram, ctx);
        goto after_6;
    // 0x40008798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x4000879C: jal         0x40007960
    // 0x400087A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_7960(rdram, ctx);
        goto after_7;
    // 0x400087A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x400087A4: jal         0x400079F8
    // 0x400087A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_79F8(rdram, ctx);
        goto after_8;
    // 0x400087A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x400087AC: jal         0x400076FC
    // 0x400087B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_76FC(rdram, ctx);
        goto after_9;
    // 0x400087B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x400087B4: jal         0x40007E60
    // 0x400087B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_7E60(rdram, ctx);
        goto after_10;
    // 0x400087B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x400087BC: jal         0x40008330
    // 0x400087C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8330(rdram, ctx);
        goto after_11;
    // 0x400087C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x400087C4: jal         0x40008414
    // 0x400087C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8414(rdram, ctx);
        goto after_12;
    // 0x400087C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x400087CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400087D0:
    // 0x400087D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x400087D4: jr          $ra
    // 0x400087D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x400087D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_87DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400087DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x400087E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400087E4: lw          $t6, 0x90($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X90);
    // 0x400087E8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x400087EC: sll         $t7, $t6, 10
    ctx->r15 = S32(ctx->r14 << 10);
    // 0x400087F0: bgez        $t7, L_40008854
    if (SIGNED(ctx->r15) >= 0) {
        // 0x400087F4: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_40008854;
    }
    // 0x400087F4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x400087F8: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x400087FC: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x40008800: jal         0x400006C4
    // 0x40008804: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40008804: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x40008808: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x4000880C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x40008810: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x40008814: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x40008818: lw          $a0, 0x10($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X10);
    // 0x4000881C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x40008820: jal         0x400006C4
    // 0x40008824: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x40008824: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x40008828: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x4000882C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40008830: lui         $t1, 0x5FA0
    ctx->r9 = S32(0X5FA0 << 16);
    // 0x40008834: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x40008838: ori         $t1, $t1, 0x96A0
    ctx->r9 = ctx->r9 | 0X96A0;
    // 0x4000883C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x40008840: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x40008844: lw          $a0, 0x10($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X10);
    // 0x40008848: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x4000884C: jal         0x400006C4
    // 0x40008850: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x40008850: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
L_40008854:
    // 0x40008854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40008858: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4000885C: jr          $ra
    // 0x40008860: nop

    return;
    // 0x40008860: nop

;}
RECOMP_FUNC void ovl_actor_main_8864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008864: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40008868: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4000886C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40008870: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40008874: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40008878: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x4000887C: jal         0x400006C4
    // 0x40008880: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40008880: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x40008884: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x40008888: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x4000888C: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x40008890: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x40008894: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x40008898: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x4000889C: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x400088A0: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x400088A4: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x400088A8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x400088AC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x400088B0: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x400088B4: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x400088B8: addiu       $t4, $zero, 0xAE
    ctx->r12 = ADD32(0, 0XAE);
    // 0x400088BC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x400088C0: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x400088C4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x400088C8: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x400088CC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x400088D0: jal         0x400006C4
    // 0x400088D4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x400088D4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x400088D8: jal         0x40005014
    // 0x400088DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_5014(rdram, ctx);
        goto after_2;
    // 0x400088DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x400088E0: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x400088E4: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x400088E8: lw          $t6, 0x10($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X10);
    // 0x400088EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400088F0: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x400088F4: beq         $t7, $zero, L_40008910
    if (ctx->r15 == 0) {
        // 0x400088F8: nop
    
            goto L_40008910;
    }
    // 0x400088F8: nop

    // 0x400088FC: lw          $t8, 0x90($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X90);
    // 0x40008900: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x40008904: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x40008908: jal         0x400087DC
    // 0x4000890C: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    ovl_actor_main_87DC(rdram, ctx);
        goto after_3;
    // 0x4000890C: sw          $t9, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r25;
    after_3:
L_40008910:
    // 0x40008910: lw          $t0, 0x14($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X14);
    // 0x40008914: nop

    // 0x40008918: addiu       $t1, $t0, -0x3
    ctx->r9 = ADD32(ctx->r8, -0X3);
    // 0x4000891C: sltiu       $at, $t1, 0x2C
    ctx->r1 = ctx->r9 < 0X2C ? 1 : 0;
    // 0x40008920: beq         $at, $zero, L_40008950
    if (ctx->r1 == 0) {
        // 0x40008924: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_40008950;
    }
    // 0x40008924: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x40008928: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4000892C: addu        $at, $at, $t1
    gpr jr_addend_40008938 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x40008930: lw          $t1, -0x188C($at)
    ctx->r9 = ADD32(ctx->r1, -0X188C);
    // 0x40008934: nop

    // 0x40008938: jr          $t1
    // 0x4000893C: nop

    switch (jr_addend_40008938 >> 2) {
        case 0: goto L_40008940; break;
        case 1: goto L_40008940; break;
        case 2: goto L_40008950; break;
        case 3: goto L_40008950; break;
        case 4: goto L_40008950; break;
        case 5: goto L_40008950; break;
        case 6: goto L_40008950; break;
        case 7: goto L_40008950; break;
        case 8: goto L_40008940; break;
        case 9: goto L_40008950; break;
        case 10: goto L_40008940; break;
        case 11: goto L_40008950; break;
        case 12: goto L_40008950; break;
        case 13: goto L_40008950; break;
        case 14: goto L_40008950; break;
        case 15: goto L_40008950; break;
        case 16: goto L_40008950; break;
        case 17: goto L_40008950; break;
        case 18: goto L_40008950; break;
        case 19: goto L_40008950; break;
        case 20: goto L_40008950; break;
        case 21: goto L_40008950; break;
        case 22: goto L_40008950; break;
        case 23: goto L_40008950; break;
        case 24: goto L_40008950; break;
        case 25: goto L_40008950; break;
        case 26: goto L_40008940; break;
        case 27: goto L_40008950; break;
        case 28: goto L_40008950; break;
        case 29: goto L_40008940; break;
        case 30: goto L_40008950; break;
        case 31: goto L_40008940; break;
        case 32: goto L_40008940; break;
        case 33: goto L_40008940; break;
        case 34: goto L_40008950; break;
        case 35: goto L_40008940; break;
        case 36: goto L_40008940; break;
        case 37: goto L_40008940; break;
        case 38: goto L_40008940; break;
        case 39: goto L_40008950; break;
        case 40: goto L_40008940; break;
        case 41: goto L_40008940; break;
        case 42: goto L_40008940; break;
        case 43: goto L_40008940; break;
        default: switch_error(__func__, 0x40008938, 0x4001E774);
    }
    // 0x4000893C: nop

L_40008940:
    // 0x40008940: lw          $t2, 0x90($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X90);
    // 0x40008944: nop

    // 0x40008948: ori         $t3, $t2, 0x4000
    ctx->r11 = ctx->r10 | 0X4000;
    // 0x4000894C: sw          $t3, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r11;
L_40008950:
    // 0x40008950: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40008954: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x40008958: jr          $ra
    // 0x4000895C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x4000895C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_8960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40008960: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40008964: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40008968: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4000896C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40008970: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40008974: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x40008978: jal         0x400006C4
    // 0x4000897C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4000897C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x40008980: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x40008984: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x40008988: swc1        $f4, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f4.u32l;
    // 0x4000898C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x40008990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40008994: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x40008998: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4000899C: jal         0x40008D20
    // 0x400089A0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_1;
    // 0x400089A0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x400089A4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x400089A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400089AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400089B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x400089B4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x400089B8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x400089BC: jal         0x40006EB8
    // 0x400089C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_2;
    // 0x400089C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x400089C4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x400089C8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x400089CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400089D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400089D4: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x400089D8: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x400089DC: jal         0x40006EB8
    // 0x400089E0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_actor_main_6EB8(rdram, ctx);
        goto after_3;
    // 0x400089E0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x400089E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400089E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x400089EC: jr          $ra
    // 0x400089F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x400089F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_89F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400089F4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x400089F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400089FC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x40008A00: jal         0x40000868
    // 0x40008A04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_actor_main_868(rdram, ctx);
        goto after_0;
    // 0x40008A04: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x40008A08: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x40008A0C: jal         0x40002110
    // 0x40008A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_2110(rdram, ctx);
        goto after_1;
    // 0x40008A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40008A14: jal         0x40008864
    // 0x40008A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8864(rdram, ctx);
        goto after_2;
    // 0x40008A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x40008A1C: jal         0x40008960
    // 0x40008A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8960(rdram, ctx);
        goto after_3;
    // 0x40008A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x40008A24: jal         0x4000085C
    // 0x40008A28: nop

    ovl_actor_main_85C(rdram, ctx);
        goto after_4;
    // 0x40008A28: nop

    after_4:
    // 0x40008A2C: addiu       $s1, $sp, 0x44
    ctx->r17 = ADD32(ctx->r29, 0X44);
    // 0x40008A30: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_40008A34:
    // 0x40008A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40008A38: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x40008A3C: jal         0x40001258
    // 0x40008A40: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_actor_main_1258(rdram, ctx);
        goto after_5;
    // 0x40008A40: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x40008A44: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x40008A48: nop

    // 0x40008A4C: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x40008A50: nop

    // 0x40008A54: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x40008A58: beq         $t7, $zero, L_40008A80
    if (ctx->r15 == 0) {
        // 0x40008A5C: andi        $t8, $v0, 0x1
        ctx->r24 = ctx->r2 & 0X1;
            goto L_40008A80;
    }
    // 0x40008A5C: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x40008A60: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40008A64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x40008A68: jal         0x400006C4
    // 0x40008A6C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_6;
    // 0x40008A6C: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_6:
L_40008A70:
    // 0x40008A70: jal         0x4000085C
    // 0x40008A74: nop

    ovl_actor_main_85C(rdram, ctx);
        goto after_7;
    // 0x40008A74: nop

    after_7:
    // 0x40008A78: b           L_40008A70
    // 0x40008A7C: nop

        goto L_40008A70;
    // 0x40008A7C: nop

L_40008A80:
    // 0x40008A80: bne         $t8, $zero, L_40008AB0
    if (ctx->r24 != 0) {
        // 0x40008A84: andi        $t1, $v0, 0x2
        ctx->r9 = ctx->r2 & 0X2;
            goto L_40008AB0;
    }
    // 0x40008A84: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
L_40008A88:
    // 0x40008A88: jal         0x4000085C
    // 0x40008A8C: nop

    ovl_actor_main_85C(rdram, ctx);
        goto after_8;
    // 0x40008A8C: nop

    after_8:
    // 0x40008A90: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x40008A94: nop

    // 0x40008A98: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x40008A9C: nop

    // 0x40008AA0: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x40008AA4: beq         $t0, $zero, L_40008A88
    if (ctx->r8 == 0) {
        // 0x40008AA8: nop
    
            goto L_40008A88;
    }
    // 0x40008AA8: nop

    // 0x40008AAC: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
L_40008AB0:
    // 0x40008AB0: bne         $t1, $zero, L_40008B04
    if (ctx->r9 != 0) {
        // 0x40008AB4: nop
    
            goto L_40008B04;
    }
    // 0x40008AB4: nop

    // 0x40008AB8: jal         0x40006138
    // 0x40008ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_6138(rdram, ctx);
        goto after_9;
    // 0x40008ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x40008AC0: jal         0x400069D8
    // 0x40008AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_69D8(rdram, ctx);
        goto after_10;
    // 0x40008AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x40008AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40008ACC: jal         0x40006B3C
    // 0x40008AD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_6B3C(rdram, ctx);
        goto after_11;
    // 0x40008AD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x40008AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40008AD8: jal         0x40006E1C
    // 0x40008ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_6E1C(rdram, ctx);
        goto after_12;
    // 0x40008ADC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x40008AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40008AE4: jal         0x40006E1C
    // 0x40008AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_6E1C(rdram, ctx);
        goto after_13;
    // 0x40008AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x40008AEC: jal         0x400086A4
    // 0x40008AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_86A4(rdram, ctx);
        goto after_14;
    // 0x40008AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x40008AF4: jal         0x40006F38
    // 0x40008AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_6F38(rdram, ctx);
        goto after_15;
    // 0x40008AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x40008AFC: b           L_40008B28
    // 0x40008B00: nop

        goto L_40008B28;
    // 0x40008B00: nop

L_40008B04:
    // 0x40008B04: jal         0x400012A4
    // 0x40008B08: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    ovl_actor_main_12A4(rdram, ctx);
        goto after_16;
    // 0x40008B08: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    after_16:
    // 0x40008B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40008B10: jal         0x40006B3C
    // 0x40008B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_actor_main_6B3C(rdram, ctx);
        goto after_17;
    // 0x40008B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x40008B18: jal         0x400086A4
    // 0x40008B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_86A4(rdram, ctx);
        goto after_18;
    // 0x40008B1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x40008B20: jal         0x40006F38
    // 0x40008B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_6F38(rdram, ctx);
        goto after_19;
    // 0x40008B24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
L_40008B28:
    // 0x40008B28: jal         0x4000085C
    // 0x40008B2C: nop

    ovl_actor_main_85C(rdram, ctx);
        goto after_20;
    // 0x40008B2C: nop

    after_20:
    // 0x40008B30: b           L_40008A34
    // 0x40008B34: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
        goto L_40008A34;
    // 0x40008B34: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x40008B38: nop

    // 0x40008B3C: nop

    // 0x40008B40: nop

    // 0x40008B44: nop

    // 0x40008B48: nop

    // 0x40008B4C: nop

    // 0x40008B50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40008B54: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x40008B58: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x40008B5C: jr          $ra
    // 0x40008B60: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x40008B60: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
