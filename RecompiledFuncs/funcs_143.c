#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_devil_5EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005EE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005EEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005EF0: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005EF4: nop

    // 0x43005EF8: beq         $t6, $zero, L_43005F14
    if (ctx->r14 == 0) {
        // 0x43005EFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43005F14;
    }
    // 0x43005EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005F00: lw          $t9, 0x84($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X84);
    // 0x43005F04: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x43005F08: jalr        $t9
    // 0x43005F0C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005F0C: nop

    after_0:
    // 0x43005F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005F14:
    // 0x43005F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005F18: jr          $ra
    // 0x43005F1C: nop

    return;
    // 0x43005F1C: nop

;}
RECOMP_FUNC void ovl_boss_devil_5F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005F20: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005F24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005F28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43005F2C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43005F30: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43005F34: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005F38: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x43005F3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005F40: bne         $t6, $at, L_43005F88
    if (ctx->r14 != ctx->r1) {
        // 0x43005F44: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43005F88;
    }
    // 0x43005F44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005F48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43005F4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43005F50: nop

    // 0x43005F54: sub.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x43005F58: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
L_43005F5C:
    // 0x43005F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005F60: jalr        $t9
    // 0x43005F64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005F64: nop

    after_0:
    // 0x43005F68: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x43005F6C: nop

    // 0x43005F70: bc1t        L_43005F8C
    if (c1cs) {
        // 0x43005F74: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43005F8C;
    }
    // 0x43005F74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005F78: jal         0x43009B08
    // 0x43005F7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_1;
    // 0x43005F7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x43005F80: b           L_43005F5C
    // 0x43005F84: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
        goto L_43005F5C;
    // 0x43005F84: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
L_43005F88:
    // 0x43005F88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43005F8C:
    // 0x43005F8C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43005F90: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43005F94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43005F98: jr          $ra
    // 0x43005F9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43005F9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_5FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005FA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005FA8: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x43005FAC: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x43005FB0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x43005FB4: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x43005FB8: lw          $a1, 0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X4);
    // 0x43005FBC: lw          $t9, 0xB8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XB8);
    // 0x43005FC0: nop

    // 0x43005FC4: jalr        $t9
    // 0x43005FC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005FC8: nop

    after_0:
    // 0x43005FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005FD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005FD4: jr          $ra
    // 0x43005FD8: nop

    return;
    // 0x43005FD8: nop

;}
RECOMP_FUNC void ovl_boss_devil_5FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005FDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005FE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005FE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43005FE8: jal         0x43005BA4
    // 0x43005FEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_boss_devil_5BA4(rdram, ctx);
        goto after_0;
    // 0x43005FEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x43005FF0: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x43005FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005FF8: jalr        $t9
    // 0x43005FFC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43005FFC: nop

    after_1:
    // 0x43006000: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43006004: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43006008: jal         0x43000DC0
    // 0x4300600C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_2;
    // 0x4300600C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x43006010: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43006014: jal         0x4300ABEC
    // 0x43006018: nop

    ovl_boss_devil_ABEC(rdram, ctx);
        goto after_3;
    // 0x43006018: nop

    after_3:
    // 0x4300601C: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x43006020: nop

    // 0x43006024: bltz        $t6, L_43006038
    if (SIGNED(ctx->r14) < 0) {
        // 0x43006028: nop
    
            goto L_43006038;
    }
    // 0x43006028: nop

    // 0x4300602C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x43006030: jal         0x4300ABEC
    // 0x43006034: nop

    ovl_boss_devil_ABEC(rdram, ctx);
        goto after_4;
    // 0x43006034: nop

    after_4:
L_43006038:
    // 0x43006038: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x4300603C: nop

    // 0x43006040: bltz        $t7, L_43006054
    if (SIGNED(ctx->r15) < 0) {
        // 0x43006044: nop
    
            goto L_43006054;
    }
    // 0x43006044: nop

    // 0x43006048: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x4300604C: jal         0x4300ABEC
    // 0x43006050: nop

    ovl_boss_devil_ABEC(rdram, ctx);
        goto after_5;
    // 0x43006050: nop

    after_5:
L_43006054:
    // 0x43006054: jal         0x430000F4
    // 0x43006058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_devil_F4(rdram, ctx);
        goto after_6;
    // 0x43006058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x4300605C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006060: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006064: jr          $ra
    // 0x43006068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43006068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_devil_606C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300606C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006070: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006074: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43006078: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4300607C: jal         0x430000E8
    // 0x43006080: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    ovl_boss_devil_E8(rdram, ctx);
        goto after_0;
    // 0x43006080: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    after_0:
    // 0x43006084: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x43006088: jal         0x4300ABC0
    // 0x4300608C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_boss_devil_ABC0(rdram, ctx);
        goto after_1;
    // 0x4300608C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x43006090: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x43006094: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43006098: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4300609C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x430060A0: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x430060A4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x430060A8: jal         0x43000DC0
    // 0x430060AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_2;
    // 0x430060AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x430060B0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x430060B4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x430060B8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x430060BC: jal         0x43000DC0
    // 0x430060C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_3;
    // 0x430060C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x430060C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430060C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430060CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430060D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x430060D4: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x430060D8: addiu       $t6, $t6, -0x4C80
    ctx->r14 = ADD32(ctx->r14, -0X4C80);
    // 0x430060DC: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x430060E0: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x430060E4: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x430060E8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x430060EC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x430060F0: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x430060F4: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x430060F8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x430060FC: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x43006100: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x43006104: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x43006108: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x4300610C: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x43006110: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43006114: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x43006118: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    // 0x4300611C: lw          $t7, -0x483C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X483C);
    // 0x43006120: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43006124: sw          $t7, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r15;
    // 0x43006128: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x4300612C: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43006130: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43006134: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43006138: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x4300613C: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43006140: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43006144: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43006148: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x4300614C: addiu       $t8, $t8, 0x5520
    ctx->r24 = ADD32(ctx->r24, 0X5520);
    // 0x43006150: addiu       $t9, $t9, 0x552C
    ctx->r25 = ADD32(ctx->r25, 0X552C);
    // 0x43006154: addiu       $t0, $t0, 0x5560
    ctx->r8 = ADD32(ctx->r8, 0X5560);
    // 0x43006158: addiu       $t1, $t1, 0x55C4
    ctx->r9 = ADD32(ctx->r9, 0X55C4);
    // 0x4300615C: addiu       $t2, $t2, 0x5630
    ctx->r10 = ADD32(ctx->r10, 0X5630);
    // 0x43006160: addiu       $t3, $t3, 0x5690
    ctx->r11 = ADD32(ctx->r11, 0X5690);
    // 0x43006164: addiu       $t4, $t4, 0x5704
    ctx->r12 = ADD32(ctx->r12, 0X5704);
    // 0x43006168: addiu       $t5, $t5, 0x5790
    ctx->r13 = ADD32(ctx->r13, 0X5790);
    // 0x4300616C: addiu       $t6, $t6, 0x57CC
    ctx->r14 = ADD32(ctx->r14, 0X57CC);
    // 0x43006170: addiu       $t7, $t7, 0x57F8
    ctx->r15 = ADD32(ctx->r15, 0X57F8);
    // 0x43006174: sw          $t8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r24;
    // 0x43006178: sw          $t9, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r25;
    // 0x4300617C: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x43006180: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
    // 0x43006184: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x43006188: sw          $t3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r11;
    // 0x4300618C: sw          $t4, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r12;
    // 0x43006190: sw          $t5, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r13;
    // 0x43006194: sw          $t6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r14;
    // 0x43006198: sw          $t7, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r15;
    // 0x4300619C: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x430061A0: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x430061A4: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x430061A8: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x430061AC: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x430061B0: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x430061B4: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x430061B8: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x430061BC: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x430061C0: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x430061C4: addiu       $t8, $t8, 0x5834
    ctx->r24 = ADD32(ctx->r24, 0X5834);
    // 0x430061C8: addiu       $t9, $t9, 0x58BC
    ctx->r25 = ADD32(ctx->r25, 0X58BC);
    // 0x430061CC: addiu       $t0, $t0, 0x5D2C
    ctx->r8 = ADD32(ctx->r8, 0X5D2C);
    // 0x430061D0: addiu       $t1, $t1, 0x5DAC
    ctx->r9 = ADD32(ctx->r9, 0X5DAC);
    // 0x430061D4: addiu       $t2, $t2, 0x5E0C
    ctx->r10 = ADD32(ctx->r10, 0X5E0C);
    // 0x430061D8: addiu       $t3, $t3, 0x5E80
    ctx->r11 = ADD32(ctx->r11, 0X5E80);
    // 0x430061DC: addiu       $t4, $t4, 0x5EE8
    ctx->r12 = ADD32(ctx->r12, 0X5EE8);
    // 0x430061E0: addiu       $t5, $t5, 0x5F20
    ctx->r13 = ADD32(ctx->r13, 0X5F20);
    // 0x430061E4: addiu       $t6, $t6, 0x5FA0
    ctx->r14 = ADD32(ctx->r14, 0X5FA0);
    // 0x430061E8: addiu       $t7, $t7, 0x5FDC
    ctx->r15 = ADD32(ctx->r15, 0X5FDC);
    // 0x430061EC: sw          $t8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r24;
    // 0x430061F0: sw          $t9, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r25;
    // 0x430061F4: sw          $t0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r8;
    // 0x430061F8: sw          $t1, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r9;
    // 0x430061FC: sw          $t2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r10;
    // 0x43006200: sw          $t3, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r11;
    // 0x43006204: sw          $t4, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r12;
    // 0x43006208: sw          $t5, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r13;
    // 0x4300620C: sw          $t6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r14;
    // 0x43006210: sw          $t7, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r15;
    // 0x43006214: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006218: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x4300621C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43006220: jr          $ra
    // 0x43006224: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43006224: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_6228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006228: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300622C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006230: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43006234: beq         $a3, $zero, L_43006248
    if (ctx->r7 == 0) {
        // 0x43006238: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_43006248;
    }
    // 0x43006238: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x4300623C: addiu       $v1, $sp, 0x24
    ctx->r3 = ADD32(ctx->r29, 0X24);
    // 0x43006240: b           L_43006254
    // 0x43006244: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
        goto L_43006254;
    // 0x43006244: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
L_43006248:
    // 0x43006248: addiu       $v1, $sp, 0x24
    ctx->r3 = ADD32(ctx->r29, 0X24);
    // 0x4300624C: addiu       $t6, $zero, 0xFF0
    ctx->r14 = ADD32(0, 0XFF0);
    // 0x43006250: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_43006254:
    // 0x43006254: beq         $a3, $zero, L_43006264
    if (ctx->r7 == 0) {
        // 0x43006258: addiu       $v0, $zero, -0xFF
        ctx->r2 = ADD32(0, -0XFF);
            goto L_43006264;
    }
    // 0x43006258: addiu       $v0, $zero, -0xFF
    ctx->r2 = ADD32(0, -0XFF);
    // 0x4300625C: b           L_43006264
    // 0x43006260: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_43006264;
    // 0x43006260: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_43006264:
    // 0x43006264: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x43006268: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x4300626C: div         $zero, $t7, $t8
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r24)));
    // 0x43006270: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x43006274: bne         $t8, $zero, L_43006280
    if (ctx->r24 != 0) {
        // 0x43006278: nop
    
            goto L_43006280;
    }
    // 0x43006278: nop

    // 0x4300627C: break       7
    do_break(1124098684);
L_43006280:
    // 0x43006280: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43006284: bne         $t8, $at, L_43006298
    if (ctx->r24 != ctx->r1) {
        // 0x43006288: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_43006298;
    }
    // 0x43006288: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x4300628C: bne         $t7, $at, L_43006298
    if (ctx->r15 != ctx->r1) {
        // 0x43006290: nop
    
            goto L_43006298;
    }
    // 0x43006290: nop

    // 0x43006294: break       6
    do_break(1124098708);
L_43006298:
    // 0x43006298: addiu       $a2, $a2, 0x5900
    ctx->r6 = ADD32(ctx->r6, 0X5900);
    // 0x4300629C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430062A0: mflo        $t9
    ctx->r25 = lo;
    // 0x430062A4: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
    // 0x430062A8: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x430062AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x430062B0: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x430062B4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x430062B8: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x430062BC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x430062C0: jalr        $t9
    // 0x430062C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430062C4: nop

    after_0:
    // 0x430062C8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x430062CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430062D0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430062D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x430062D8: jr          $ra
    // 0x430062DC: sw          $t2, -0x4500($at)
    MEM_W(-0X4500, ctx->r1) = ctx->r10;
    return;
    // 0x430062DC: sw          $t2, -0x4500($at)
    MEM_W(-0X4500, ctx->r1) = ctx->r10;
;}
RECOMP_FUNC void ovl_boss_devil_62E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430062E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430062E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430062E8: jal         0x43006228
    // 0x430062EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_boss_devil_6228(rdram, ctx);
        goto after_0;
    // 0x430062EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x430062F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430062F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430062F8: jr          $ra
    // 0x430062FC: nop

    return;
    // 0x430062FC: nop

;}
RECOMP_FUNC void ovl_boss_devil_6300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006308: jal         0x43006228
    // 0x4300630C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_6228(rdram, ctx);
        goto after_0;
    // 0x4300630C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43006310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006318: jr          $ra
    // 0x4300631C: nop

    return;
    // 0x4300631C: nop

;}
RECOMP_FUNC void ovl_boss_devil_6320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006320: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43006324: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43006328: addiu       $v0, $v0, -0x4500
    ctx->r2 = ADD32(ctx->r2, -0X4500);
    // 0x4300632C: sh          $t6, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = ctx->r14;
    // 0x43006330: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x43006334: lh          $t8, 0x58($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X58);
    // 0x43006338: nop

    // 0x4300633C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x43006340: jr          $ra
    // 0x43006344: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    return;
    // 0x43006344: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void ovl_boss_devil_6348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006348: jr          $ra
    // 0x4300634C: sh          $zero, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = 0;
    return;
    // 0x4300634C: sh          $zero, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_boss_devil_6350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006350: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006354: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006358: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4300635C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43006360: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43006364: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x43006368: jal         0x430062E0
    // 0x4300636C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_devil_62E0(rdram, ctx);
        goto after_0;
    // 0x4300636C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x43006370: blez        $s2, L_43006394
    if (SIGNED(ctx->r18) <= 0) {
        // 0x43006374: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43006394;
    }
    // 0x43006374: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43006378:
    // 0x43006378: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x4300637C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43006380: jalr        $t9
    // 0x43006384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43006384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x43006388: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x4300638C: bne         $s0, $s2, L_43006378
    if (ctx->r16 != ctx->r18) {
        // 0x43006390: nop
    
            goto L_43006378;
    }
    // 0x43006390: nop

L_43006394:
    // 0x43006394: jal         0x43006320
    // 0x43006398: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_devil_6320(rdram, ctx);
        goto after_2;
    // 0x43006398: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x4300639C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430063A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430063A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x430063A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x430063AC: jr          $ra
    // 0x430063B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430063B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_63B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430063B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430063B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430063BC: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x430063C0: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x430063C4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x430063C8: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x430063CC: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x430063D0: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x430063D4: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x430063D8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x430063DC: nop

    // 0x430063E0: sw          $t9, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r25;
    // 0x430063E4: lw          $t0, -0x4500($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4500);
    // 0x430063E8: jal         0x43006348
    // 0x430063EC: sh          $t0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r8;
    ovl_boss_devil_6348(rdram, ctx);
        goto after_0;
    // 0x430063EC: sh          $t0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r8;
    after_0:
    // 0x430063F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430063F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430063F8: jr          $ra
    // 0x430063FC: nop

    return;
    // 0x430063FC: nop

;}
RECOMP_FUNC void ovl_boss_devil_6400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006408: jal         0x43005BA4
    // 0x4300640C: nop

    ovl_boss_devil_5BA4(rdram, ctx);
        goto after_0;
    // 0x4300640C: nop

    after_0:
    // 0x43006410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006418: jr          $ra
    // 0x4300641C: nop

    return;
    // 0x4300641C: nop

;}
RECOMP_FUNC void ovl_boss_devil_6420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006424: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43006428: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x4300642C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x43006430: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006434: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x43006438: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4300643C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x43006440: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43006444: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x43006448: addiu       $a2, $a2, 0x5AB4
    ctx->r6 = ADD32(ctx->r6, 0X5AB4);
    // 0x4300644C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43006450: jalr        $t9
    // 0x43006454: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006454: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43006458: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4300645C: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x43006460: lw          $t8, 0x6C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X6C);
    // 0x43006464: nop

    // 0x43006468: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x4300646C: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x43006470: sw          $t1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r9;
    // 0x43006474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006478: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300647C: jr          $ra
    // 0x43006480: nop

    return;
    // 0x43006480: nop

;}
RECOMP_FUNC void ovl_boss_devil_6484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006484: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006488: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300648C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43006490: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43006494: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43006498: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4300649C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430064A0: jalr        $t9
    // 0x430064A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430064A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x430064A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430064AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430064B0: jr          $ra
    // 0x430064B4: nop

    return;
    // 0x430064B4: nop

;}
RECOMP_FUNC void ovl_boss_devil_64B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430064B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430064BC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x430064C0: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x430064C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430064C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430064CC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x430064D0: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x430064D4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x430064D8: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x430064DC: addiu       $a2, $a2, 0x59EC
    ctx->r6 = ADD32(ctx->r6, 0X59EC);
    // 0x430064E0: jalr        $t9
    // 0x430064E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430064E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x430064E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430064EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430064F0: jr          $ra
    // 0x430064F4: nop

    return;
    // 0x430064F4: nop

    // 0x430064F8: nop

    // 0x430064FC: nop

;}
RECOMP_FUNC void ovl_boss_devil_6500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006500: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43006504: jr          $ra
    // 0x43006508: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x43006508: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_devil_650C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300650C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006510: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006514: jal         0x43001320
    // 0x43006518: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_boss_devil_1320(rdram, ctx);
        goto after_0;
    // 0x43006518: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x4300651C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43006520: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x43006524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006528: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300652C: jr          $ra
    // 0x43006530: nop

    return;
    // 0x43006530: nop

;}
RECOMP_FUNC void ovl_boss_devil_6534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006534: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43006538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300653C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x43006540: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x43006544: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x43006548: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4300654C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43006550: beq         $t6, $at, L_430065B0
    if (ctx->r14 == ctx->r1) {
        // 0x43006554: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_430065B0;
    }
    // 0x43006554: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x43006558: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x4300655C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x43006560: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43006564: jal         0x430006C4
    // 0x43006568: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_0;
    // 0x43006568: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_0:
    // 0x4300656C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x43006570: bne         $v0, $zero, L_430065B4
    if (ctx->r2 != 0) {
        // 0x43006574: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430065B4;
    }
    // 0x43006574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006578: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x4300657C: nop

    // 0x43006580: lwc1        $f4, 0x14($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X14);
    // 0x43006584: nop

    // 0x43006588: swc1        $f4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f4.u32l;
    // 0x4300658C: lwc1        $f6, 0x18($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X18);
    // 0x43006590: nop

    // 0x43006594: swc1        $f6, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f6.u32l;
    // 0x43006598: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4300659C: nop

    // 0x430065A0: swc1        $f8, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f8.u32l;
    // 0x430065A4: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x430065A8: nop

    // 0x430065AC: swc1        $f10, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f10.u32l;
L_430065B0:
    // 0x430065B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430065B4:
    // 0x430065B4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x430065B8: jr          $ra
    // 0x430065BC: nop

    return;
    // 0x430065BC: nop

;}
RECOMP_FUNC void ovl_boss_devil_65C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430065C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430065C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430065C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430065CC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x430065D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x430065D4: jal         0x43006534
    // 0x430065D8: nop

    ovl_boss_devil_6534(rdram, ctx);
        goto after_0;
    // 0x430065D8: nop

    after_0:
    // 0x430065DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430065E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430065E4: jr          $ra
    // 0x430065E8: nop

    return;
    // 0x430065E8: nop

;}
RECOMP_FUNC void ovl_boss_devil_65EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430065EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x430065F0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x430065F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430065F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430065FC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x43006600: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x43006604: jal         0x43006534
    // 0x43006608: nop

    ovl_boss_devil_6534(rdram, ctx);
        goto after_0;
    // 0x43006608: nop

    after_0:
    // 0x4300660C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006614: jr          $ra
    // 0x43006618: nop

    return;
    // 0x43006618: nop

;}
RECOMP_FUNC void ovl_boss_devil_661C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300661C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006624: lw          $a2, 0x30($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X30);
    // 0x43006628: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x4300662C: jal         0x43006534
    // 0x43006630: nop

    ovl_boss_devil_6534(rdram, ctx);
        goto after_0;
    // 0x43006630: nop

    after_0:
    // 0x43006634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300663C: jr          $ra
    // 0x43006640: nop

    return;
    // 0x43006640: nop

;}
RECOMP_FUNC void ovl_boss_devil_6644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006644: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43006648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300664C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x43006650: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x43006654: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43006658: beq         $a3, $at, L_430066B8
    if (ctx->r7 == ctx->r1) {
        // 0x4300665C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_430066B8;
    }
    // 0x4300665C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43006660: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x43006664: jal         0x430006C4
    // 0x43006668: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_0;
    // 0x43006668: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x4300666C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x43006670: bne         $v0, $zero, L_430066BC
    if (ctx->r2 != 0) {
        // 0x43006674: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430066BC;
    }
    // 0x43006674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006678: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x4300667C: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x43006680: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x43006684: lwc1        $f10, 0x30($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X30);
    // 0x43006688: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4300668C: lwc1        $f4, 0x34($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X34);
    // 0x43006690: swc1        $f8, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f8.u32l;
    // 0x43006694: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x43006698: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300669C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x430066A0: swc1        $f18, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f18.u32l;
    // 0x430066A4: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x430066A8: swc1        $f0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f0.u32l;
    // 0x430066AC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x430066B0: swc1        $f0, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f0.u32l;
    // 0x430066B4: swc1        $f8, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f8.u32l;
L_430066B8:
    // 0x430066B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430066BC:
    // 0x430066BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x430066C0: jr          $ra
    // 0x430066C4: nop

    return;
    // 0x430066C4: nop

;}
RECOMP_FUNC void ovl_boss_devil_66C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430066C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430066CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430066D0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430066D4: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x430066D8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x430066DC: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x430066E0: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x430066E4: nop

    // 0x430066E8: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x430066EC: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x430066F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430066F4: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    // 0x430066F8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x430066FC: nop

    // 0x43006700: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x43006704: jal         0x430006C4
    // 0x43006708: nop

    ovl_boss_devil_6C4(rdram, ctx);
        goto after_0;
    // 0x43006708: nop

    after_0:
    // 0x4300670C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006710: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43006714: jr          $ra
    // 0x43006718: nop

    return;
    // 0x43006718: nop

;}
RECOMP_FUNC void ovl_boss_devil_671C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300671C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43006720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006724: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43006728: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x4300672C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43006730: jal         0x430006C4
    // 0x43006734: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_0;
    // 0x43006734: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43006738: addiu       $t7, $sp, 0x18
    ctx->r15 = ADD32(ctx->r29, 0X18);
    // 0x4300673C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x43006740: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x43006744: nop

    // 0x43006748: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x4300674C: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x43006750: nop

    // 0x43006754: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x43006758: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x4300675C: nop

    // 0x43006760: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x43006764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006768: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300676C: jr          $ra
    // 0x43006770: nop

    return;
    // 0x43006770: nop

;}
RECOMP_FUNC void ovl_boss_devil_6774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300677C: jal         0x43000868
    // 0x43006780: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_devil_868(rdram, ctx);
        goto after_0;
    // 0x43006780: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43006784: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43006788: nop

    // 0x4300678C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x43006790: nop

    // 0x43006794: beq         $v0, $a0, L_430067A8
    if (ctx->r2 == ctx->r4) {
        // 0x43006798: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_430067A8;
    }
    // 0x43006798: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x4300679C: jal         0x4300082C
    // 0x430067A0: nop

    ovl_boss_devil_82C(rdram, ctx);
        goto after_1;
    // 0x430067A0: nop

    after_1:
    // 0x430067A4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
L_430067A8:
    // 0x430067A8: nop

    // 0x430067AC: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x430067B0: jal         0x430012B0
    // 0x430067B4: nop

    ovl_boss_devil_12B0(rdram, ctx);
        goto after_2;
    // 0x430067B4: nop

    after_2:
    // 0x430067B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430067BC: jal         0x430000F4
    // 0x430067C0: nop

    ovl_boss_devil_F4(rdram, ctx);
        goto after_3;
    // 0x430067C0: nop

    after_3:
    // 0x430067C4: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430067C8: addiu       $v0, $v0, -0x44F0
    ctx->r2 = ADD32(ctx->r2, -0X44F0);
    // 0x430067CC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x430067D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430067D4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x430067D8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x430067DC: jr          $ra
    // 0x430067E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x430067E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_devil_67E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430067E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x430067E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430067EC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430067F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430067F4: jal         0x43000868
    // 0x430067F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_devil_868(rdram, ctx);
        goto after_0;
    // 0x430067F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x430067FC: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x43006800: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x43006804: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x43006808: lw          $t9, 0x4C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4C);
L_4300680C:
    // 0x4300680C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006810: jalr        $t9
    // 0x43006814: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43006814: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x43006818: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x4300681C: nop

    // 0x43006820: bne         $s2, $t6, L_43006840
    if (ctx->r18 != ctx->r14) {
        // 0x43006824: nop
    
            goto L_43006840;
    }
    // 0x43006824: nop

    // 0x43006828: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x4300682C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006830: jalr        $t9
    // 0x43006834: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43006834: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x43006838: b           L_43006854
    // 0x4300683C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
        goto L_43006854;
    // 0x4300683C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_43006840:
    // 0x43006840: jal         0x43009B08
    // 0x43006844: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_3;
    // 0x43006844: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x43006848: b           L_4300680C
    // 0x4300684C: lw          $t9, 0x4C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4C);
        goto L_4300680C;
    // 0x4300684C: lw          $t9, 0x4C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4C);
    // 0x43006850: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_43006854:
    // 0x43006854: jal         0x4300AC88
    // 0x43006858: nop

    ovl_boss_devil_AC88(rdram, ctx);
        goto after_4;
    // 0x43006858: nop

    after_4:
    // 0x4300685C: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x43006860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006864: jalr        $t9
    // 0x43006868: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43006868: nop

    after_5:
    // 0x4300686C: jal         0x43000838
    // 0x43006870: nop

    ovl_boss_devil_838(rdram, ctx);
        goto after_6;
    // 0x43006870: nop

    after_6:
    // 0x43006874: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006878: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300687C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43006880: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43006884: jr          $ra
    // 0x43006888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43006888: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_devil_688C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300688C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006894: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43006898: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x4300689C: jal         0x4300082C
    // 0x430068A0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_boss_devil_82C(rdram, ctx);
        goto after_0;
    // 0x430068A0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x430068A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430068A8: nop

    // 0x430068AC: lw          $t9, 0x50($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X50);
    // 0x430068B0: nop

    // 0x430068B4: jalr        $t9
    // 0x430068B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430068B8: nop

    after_1:
    // 0x430068BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430068C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430068C4: jr          $ra
    // 0x430068C8: nop

    return;
    // 0x430068C8: nop

;}
RECOMP_FUNC void ovl_boss_devil_68CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430068CC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430068D0: addiu       $v1, $v1, -0x44F0
    ctx->r3 = ADD32(ctx->r3, -0X44F0);
    // 0x430068D4: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x430068D8: lw          $t7, -0x4C30($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4C30);
    // 0x430068DC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x430068E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430068E4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x430068E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430068EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430068F0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x430068F4: bne         $at, $zero, L_43006904
    if (ctx->r1 != 0) {
        // 0x430068F8: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_43006904;
    }
    // 0x430068F8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x430068FC: b           L_43006A98
    // 0x43006900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_43006A98;
    // 0x43006900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43006904:
    // 0x43006904: jal         0x430000E8
    // 0x43006908: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    ovl_boss_devil_E8(rdram, ctx);
        goto after_0;
    // 0x43006908: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_0:
    // 0x4300690C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43006910: addiu       $v1, $v1, -0x44F0
    ctx->r3 = ADD32(ctx->r3, -0X44F0);
    // 0x43006914: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x43006918: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x4300691C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x43006920: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x43006924: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x43006928: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x4300692C: addiu       $t0, $t0, -0x4C20
    ctx->r8 = ADD32(ctx->r8, -0X4C20);
    // 0x43006930: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x43006934: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x43006938: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300693C: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x43006940: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x43006944: addiu       $t6, $t6, -0x4C2C
    ctx->r14 = ADD32(ctx->r14, -0X4C2C);
    // 0x43006948: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x4300694C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x43006950: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43006954: addiu       $t5, $t4, 0x111
    ctx->r13 = ADD32(ctx->r12, 0X111);
    // 0x43006958: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x4300695C: sw          $t5, -0x4C14($at)
    MEM_W(-0X4C14, ctx->r1) = ctx->r13;
    // 0x43006960: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x43006964: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43006968: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4300696C: jal         0x430006C4
    // 0x43006970: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_1;
    // 0x43006970: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x43006974: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43006978: lw          $a0, -0x4C2C($t7)
    ctx->r4 = MEM_W(ctx->r15, -0X4C2C);
    // 0x4300697C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43006980: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43006984: jal         0x43001260
    // 0x43006988: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    ovl_boss_devil_1260(rdram, ctx);
        goto after_2;
    // 0x43006988: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    after_2:
    // 0x4300698C: jal         0x4300A024
    // 0x43006990: nop

    ovl_boss_devil_A024(rdram, ctx);
        goto after_3;
    // 0x43006990: nop

    after_3:
    // 0x43006994: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x43006998: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300699C: nop

    // 0x430069A0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x430069A4: jal         0x4300A024
    // 0x430069A8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    ovl_boss_devil_A024(rdram, ctx);
        goto after_4;
    // 0x430069A8: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x430069AC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x430069B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430069B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x430069B8: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x430069BC: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x430069C0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x430069C4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x430069C8: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x430069CC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x430069D0: jal         0x430006C4
    // 0x430069D4: nop

    ovl_boss_devil_6C4(rdram, ctx);
        goto after_5;
    // 0x430069D4: nop

    after_5:
    // 0x430069D8: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x430069DC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x430069E0: addiu       $t9, $t9, 0x650C
    ctx->r25 = ADD32(ctx->r25, 0X650C);
    // 0x430069E4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x430069E8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x430069EC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x430069F0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x430069F4: jal         0x430006C4
    // 0x430069F8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_devil_6C4(rdram, ctx);
        goto after_6;
    // 0x430069F8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x430069FC: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43006A00: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43006A04: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43006A08: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43006A0C: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43006A10: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43006A14: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43006A18: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43006A1C: addiu       $t2, $t2, 0x6500
    ctx->r10 = ADD32(ctx->r10, 0X6500);
    // 0x43006A20: addiu       $t0, $t0, 0x65C0
    ctx->r8 = ADD32(ctx->r8, 0X65C0);
    // 0x43006A24: addiu       $t1, $t1, 0x661C
    ctx->r9 = ADD32(ctx->r9, 0X661C);
    // 0x43006A28: addiu       $t3, $t3, 0x65EC
    ctx->r11 = ADD32(ctx->r11, 0X65EC);
    // 0x43006A2C: addiu       $t4, $t4, 0x6644
    ctx->r12 = ADD32(ctx->r12, 0X6644);
    // 0x43006A30: addiu       $t5, $t5, 0x66C8
    ctx->r13 = ADD32(ctx->r13, 0X66C8);
    // 0x43006A34: addiu       $t6, $t6, 0x671C
    ctx->r14 = ADD32(ctx->r14, 0X671C);
    // 0x43006A38: addiu       $t7, $t7, 0x6774
    ctx->r15 = ADD32(ctx->r15, 0X6774);
    // 0x43006A3C: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43006A40: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x43006A44: sw          $t2, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r10;
    // 0x43006A48: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x43006A4C: sw          $t1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r9;
    // 0x43006A50: sw          $t3, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r11;
    // 0x43006A54: sw          $t4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r12;
    // 0x43006A58: sw          $t5, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r13;
    // 0x43006A5C: sw          $t6, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r14;
    // 0x43006A60: sw          $t7, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r15;
    // 0x43006A64: addiu       $a0, $a0, 0x67E4
    ctx->r4 = ADD32(ctx->r4, 0X67E4);
    // 0x43006A68: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43006A6C: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    // 0x43006A70: jal         0x43000820
    // 0x43006A74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_820(rdram, ctx);
        goto after_7;
    // 0x43006A74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x43006A78: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x43006A7C: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43006A80: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x43006A84: addiu       $a0, $a0, 0x688C
    ctx->r4 = ADD32(ctx->r4, 0X688C);
    // 0x43006A88: jal         0x4300AC30
    // 0x43006A8C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_devil_AC30(rdram, ctx);
        goto after_8;
    // 0x43006A8C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x43006A90: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x43006A94: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_43006A98:
    // 0x43006A98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006A9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006AA0: jr          $ra
    // 0x43006AA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43006AA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_boss_devil_6AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006AA8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43006AAC: sw          $a0, -0x4C30($at)
    MEM_W(-0X4C30, ctx->r1) = ctx->r4;
    // 0x43006AB0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43006AB4: jr          $ra
    // 0x43006AB8: sw          $zero, -0x44F0($at)
    MEM_W(-0X44F0, ctx->r1) = 0;
    return;
    // 0x43006AB8: sw          $zero, -0x44F0($at)
    MEM_W(-0X44F0, ctx->r1) = 0;
;}
RECOMP_FUNC void ovl_boss_devil_6ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006ABC: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43006AC0: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43006AC4: lw          $t7, -0x44F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X44F0);
    // 0x43006AC8: lw          $t6, -0x4C30($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4C30);
    // 0x43006ACC: jr          $ra
    // 0x43006AD0: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    return;
    // 0x43006AD0: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x43006AD4: nop

    // 0x43006AD8: nop

    // 0x43006ADC: nop

;}
RECOMP_FUNC void ovl_boss_devil_6AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006AE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006AE4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43006AE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006AEC: lwc1        $f12, -0x49D0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X49D0);
    // 0x43006AF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43006AF4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43006AF8: jal         0x43009FA0
    // 0x43006AFC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    ovl_boss_devil_9FA0(rdram, ctx);
        goto after_0;
    // 0x43006AFC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x43006B00: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x43006B04: jal         0x4300AFA0
    // 0x43006B08: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_1;
    // 0x43006B08: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x43006B0C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43006B10: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x43006B14: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43006B18: lwc1        $f8, 0x0($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X0);
    // 0x43006B1C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x43006B20: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43006B24: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x43006B28: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43006B2C: jal         0x4300ADE0
    // 0x43006B30: nop

    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_2;
    // 0x43006B30: nop

    after_2:
    // 0x43006B34: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43006B38: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x43006B3C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x43006B40: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x43006B44: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x43006B48: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x43006B4C: swc1        $f6, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f6.u32l;
    // 0x43006B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006B54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006B58: jr          $ra
    // 0x43006B5C: nop

    return;
    // 0x43006B5C: nop

;}
RECOMP_FUNC void ovl_boss_devil_6B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006B60: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x43006B64: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x43006B68: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x43006B6C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x43006B70: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x43006B74: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x43006B78: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x43006B7C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x43006B80: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x43006B84: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x43006B88: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x43006B8C: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43006B90: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x43006B94: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43006B98: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43006B9C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43006BA0: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x43006BA4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43006BA8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43006BAC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43006BB0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43006BB4: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x43006BB8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x43006BBC: lh          $v1, 0x6A($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X6A);
    // 0x43006BC0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x43006BC4: beq         $v1, $zero, L_43006BE4
    if (ctx->r3 == 0) {
        // 0x43006BC8: addiu       $t0, $zero, 0x80
        ctx->r8 = ADD32(0, 0X80);
            goto L_43006BE4;
    }
    // 0x43006BC8: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x43006BCC: lbu         $t7, 0x6C($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6C);
    // 0x43006BD0: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x43006BD4: srl         $t8, $t7, 1
    ctx->r24 = S32(U32(ctx->r15) >> 1);
    // 0x43006BD8: sh          $t6, 0x6A($v0)
    MEM_H(0X6A, ctx->r2) = ctx->r14;
    // 0x43006BDC: b           L_43006D50
    // 0x43006BE0: sb          $t8, 0x6C($v0)
    MEM_B(0X6C, ctx->r2) = ctx->r24;
        goto L_43006D50;
    // 0x43006BE0: sb          $t8, 0x6C($v0)
    MEM_B(0X6C, ctx->r2) = ctx->r24;
L_43006BE4:
    // 0x43006BE4: lh          $t9, 0x68($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X68);
    // 0x43006BE8: sb          $t0, 0x6C($v0)
    MEM_B(0X6C, ctx->r2) = ctx->r8;
    // 0x43006BEC: sh          $t9, 0x6A($v0)
    MEM_H(0X6A, ctx->r2) = ctx->r25;
    // 0x43006BF0: lw          $v1, 0xCC($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XCC);
    // 0x43006BF4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43006BF8: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x43006BFC: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x43006C00: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x43006C04: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x43006C08: lwc1        $f11, -0x49C8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X49C8);
    // 0x43006C0C: lwc1        $f10, -0x49C4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X49C4);
    // 0x43006C10: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43006C14: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x43006C18: lwc1        $f4, 0x58($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X58);
    // 0x43006C1C: div.d       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x43006C20: lui         $s6, 0x4301
    ctx->r22 = S32(0X4301 << 16);
    // 0x43006C24: addiu       $s6, $s6, -0x4980
    ctx->r22 = ADD32(ctx->r22, -0X4980);
    // 0x43006C28: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x43006C2C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x43006C30: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
    // 0x43006C34: cvt.s.d     $f30, $f6
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f30.fl = CVT_S_D(ctx->f6.d);
    // 0x43006C38: blez        $v1, L_43006D50
    if (SIGNED(ctx->r3) <= 0) {
        // 0x43006C3C: div.s       $f28, $f4, $f8
        CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
            goto L_43006D50;
    }
    // 0x43006C3C: div.s       $f28, $f4, $f8
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f28.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x43006C40: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x43006C44: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x43006C48: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x43006C4C: addiu       $s2, $sp, 0x8C
    ctx->r18 = ADD32(ctx->r29, 0X8C);
L_43006C50:
    // 0x43006C50: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x43006C54: jal         0x4300ADE0
    // 0x43006C58: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_0;
    // 0x43006C58: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x43006C5C: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x43006C60: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x43006C64: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43006C68: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x43006C6C: jal         0x43006AE0
    // 0x43006C70: nop

    ovl_boss_devil_6AE0(rdram, ctx);
        goto after_1;
    // 0x43006C70: nop

    after_1:
    // 0x43006C74: lw          $t2, 0xC8($s4)
    ctx->r10 = MEM_W(ctx->r20, 0XC8);
    // 0x43006C78: nop

    // 0x43006C7C: blez        $t2, L_43006D38
    if (SIGNED(ctx->r10) <= 0) {
        // 0x43006C80: nop
    
            goto L_43006D38;
    }
    // 0x43006C80: nop

    // 0x43006C84: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x43006C88: nop

    // 0x43006C8C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x43006C90: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43006C94: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43006C98: nop

    // 0x43006C9C: cvt.w.s     $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    ctx->f8.u32l = CVT_W_S(ctx->f24.fl);
    // 0x43006CA0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x43006CA4: mfc1        $s3, $f8
    ctx->r19 = (int32_t)ctx->f8.u32l;
    // 0x43006CA8: nop

L_43006CAC:
    // 0x43006CAC: jal         0x4300ADE0
    // 0x43006CB0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_2;
    // 0x43006CB0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_2:
    // 0x43006CB4: mul.s       $f16, $f0, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x43006CB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43006CBC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43006CC0: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x43006CC4: jal         0x43006AE0
    // 0x43006CC8: nop

    ovl_boss_devil_6AE0(rdram, ctx);
        goto after_3;
    // 0x43006CC8: nop

    after_3:
    // 0x43006CCC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43006CD0: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x43006CD4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x43006CD8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43006CDC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43006CE0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43006CE4: cvt.w.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43006CE8: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x43006CEC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43006CF0: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x43006CF4: nop

    // 0x43006CF8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x43006CFC: sh          $t5, -0x6($s0)
    MEM_H(-0X6, ctx->r16) = ctx->r13;
    // 0x43006D00: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x43006D04: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43006D08: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43006D0C: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x43006D10: sh          $s3, -0x2($s0)
    MEM_H(-0X2, ctx->r16) = ctx->r19;
    // 0x43006D14: cvt.w.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = CVT_W_S(ctx->f6.fl);
    // 0x43006D18: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x43006D1C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x43006D20: sh          $t7, -0x4($s0)
    MEM_H(-0X4, ctx->r16) = ctx->r15;
    // 0x43006D24: lw          $t8, 0xC8($s4)
    ctx->r24 = MEM_W(ctx->r20, 0XC8);
    // 0x43006D28: nop

    // 0x43006D2C: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x43006D30: bne         $at, $zero, L_43006CAC
    if (ctx->r1 != 0) {
        // 0x43006D34: nop
    
            goto L_43006CAC;
    }
    // 0x43006D34: nop

L_43006D38:
    // 0x43006D38: lw          $t9, 0xCC($s4)
    ctx->r25 = MEM_W(ctx->r20, 0XCC);
    // 0x43006D3C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x43006D40: slt         $at, $s5, $t9
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x43006D44: add.s       $f24, $f24, $f28
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f28.fl;
    // 0x43006D48: bne         $at, $zero, L_43006C50
    if (ctx->r1 != 0) {
        // 0x43006D4C: add.s       $f22, $f22, $f30
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f30.fl;
            goto L_43006C50;
    }
    // 0x43006D4C: add.s       $f22, $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f30.fl;
L_43006D50:
    // 0x43006D50: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x43006D54: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43006D58: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43006D5C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43006D60: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43006D64: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43006D68: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43006D6C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43006D70: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43006D74: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43006D78: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43006D7C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x43006D80: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43006D84: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x43006D88: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x43006D8C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x43006D90: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x43006D94: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x43006D98: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x43006D9C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x43006DA0: jr          $ra
    // 0x43006DA4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x43006DA4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void ovl_boss_devil_6DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006DA8: lw          $t9, 0xC8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC8);
    // 0x43006DAC: lw          $t0, 0xCC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XCC);
    // 0x43006DB0: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x43006DB4: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43006DB8: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x43006DBC: lbu         $t8, 0x6C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6C);
    // 0x43006DC0: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x43006DC4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43006DC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x43006DCC: or          $v1, $t7, $t8
    ctx->r3 = ctx->r15 | ctx->r24;
    // 0x43006DD0: mflo        $a2
    ctx->r6 = lo;
    // 0x43006DD4: andi        $a0, $a2, 0x3
    ctx->r4 = ctx->r6 & 0X3;
    // 0x43006DD8: blez        $a2, L_43006E18
    if (SIGNED(ctx->r6) <= 0) {
        // 0x43006DDC: nop
    
            goto L_43006E18;
    }
    // 0x43006DDC: nop

    // 0x43006DE0: beq         $a0, $zero, L_43006DFC
    if (ctx->r4 == 0) {
        // 0x43006DE4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_43006DFC;
    }
    // 0x43006DE4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_43006DE8:
    // 0x43006DE8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x43006DEC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x43006DF0: bne         $v0, $a3, L_43006DE8
    if (ctx->r2 != ctx->r7) {
        // 0x43006DF4: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_43006DE8;
    }
    // 0x43006DF4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x43006DF8: beq         $a3, $a2, L_43006E18
    if (ctx->r7 == ctx->r6) {
        // 0x43006DFC: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_43006E18;
    }
L_43006DFC:
    // 0x43006DFC: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x43006E00: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x43006E04: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x43006E08: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x43006E0C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x43006E10: bne         $a3, $a2, L_43006DFC
    if (ctx->r7 != ctx->r6) {
        // 0x43006E14: sw          $v1, -0x10($a1)
        MEM_W(-0X10, ctx->r5) = ctx->r3;
            goto L_43006DFC;
    }
    // 0x43006E14: sw          $v1, -0x10($a1)
    MEM_W(-0X10, ctx->r5) = ctx->r3;
L_43006E18:
    // 0x43006E18: jr          $ra
    // 0x43006E1C: nop

    return;
    // 0x43006E1C: nop

;}
RECOMP_FUNC void ovl_boss_devil_6E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006E28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43006E2C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x43006E30: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43006E34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x43006E38: jal         0x43009A30
    // 0x43006E3C: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_0;
    // 0x43006E3C: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    after_0:
    // 0x43006E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006E48: jr          $ra
    // 0x43006E4C: nop

    return;
    // 0x43006E4C: nop

;}
RECOMP_FUNC void ovl_boss_devil_6E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006E50: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x43006E54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006E58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43006E5C: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43006E60: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x43006E64: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43006E68: sub.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43006E6C: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x43006E70: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43006E74: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x43006E78: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43006E7C: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x43006E80: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x43006E84: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43006E88: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x43006E8C: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43006E90: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x43006E94: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x43006E98: swc1        $f14, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f14.u32l;
    // 0x43006E9C: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x43006EA0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43006EA4: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x43006EA8: jal         0x4300B110
    // 0x43006EAC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    ovl_boss_devil_B110(rdram, ctx);
        goto after_0;
    // 0x43006EAC: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x43006EB0: swc1        $f0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f0.u32l;
    // 0x43006EB4: jal         0x4300A750
    // 0x43006EB8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    ovl_boss_devil_A750(rdram, ctx);
        goto after_1;
    // 0x43006EB8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_1:
    // 0x43006EBC: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43006EC0: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43006EC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43006EC8: neg.s       $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = -ctx->f2.fl;
    // 0x43006ECC: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x43006ED0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x43006ED4: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x43006ED8: jal         0x4300A750
    // 0x43006EDC: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    ovl_boss_devil_A750(rdram, ctx);
        goto after_2;
    // 0x43006EDC: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x43006EE0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x43006EE4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x43006EE8: jal         0x4300A654
    // 0x43006EEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_boss_devil_A654(rdram, ctx);
        goto after_3;
    // 0x43006EEC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x43006EF0: jal         0x4300A750
    // 0x43006EF4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    ovl_boss_devil_A750(rdram, ctx);
        goto after_4;
    // 0x43006EF4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_4:
    // 0x43006EF8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43006EFC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43006F00: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x43006F04: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x43006F08: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x43006F0C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43006F10: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43006F14: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    // 0x43006F18: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43006F1C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x43006F20: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x43006F24: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43006F28: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x43006F2C: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x43006F30: jal         0x4300AA3C
    // 0x43006F34: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    ovl_boss_devil_AA3C(rdram, ctx);
        goto after_5;
    // 0x43006F34: swc1        $f10, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x43006F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006F3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006F40: jr          $ra
    // 0x43006F44: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x43006F44: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_boss_devil_6F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006F48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006F50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43006F54: jal         0x43009A30
    // 0x43006F58: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_0;
    // 0x43006F58: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x43006F5C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43006F60: jal         0x43006E50
    // 0x43006F64: nop

    ovl_boss_devil_6E50(rdram, ctx);
        goto after_1;
    // 0x43006F64: nop

    after_1:
    // 0x43006F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006F70: jr          $ra
    // 0x43006F74: nop

    return;
    // 0x43006F74: nop

;}
RECOMP_FUNC void ovl_boss_devil_6F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006F78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006F80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43006F84: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x43006F88: jal         0x43009A30
    // 0x43006F8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_0;
    // 0x43006F8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x43006F90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43006F94: jal         0x43006E50
    // 0x43006F98: nop

    ovl_boss_devil_6E50(rdram, ctx);
        goto after_1;
    // 0x43006F98: nop

    after_1:
    // 0x43006F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006FA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006FA4: jr          $ra
    // 0x43006FA8: nop

    return;
    // 0x43006FA8: nop

;}
RECOMP_FUNC void ovl_boss_devil_6FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006FAC: jr          $ra
    // 0x43006FB0: sw          $a1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r5;
    return;
    // 0x43006FB0: sw          $a1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_devil_6FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006FB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006FB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43006FBC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43006FC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006FC4: lw          $a1, 0x5C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X5C);
    // 0x43006FC8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43006FCC: jal         0x43000DC0
    // 0x43006FD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x43006FD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x43006FD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43006FD8: jal         0x430000F4
    // 0x43006FDC: nop

    ovl_boss_devil_F4(rdram, ctx);
        goto after_1;
    // 0x43006FDC: nop

    after_1:
    // 0x43006FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006FE8: jr          $ra
    // 0x43006FEC: nop

    return;
    // 0x43006FEC: nop

    // 0x43006FF0: jr          $ra
    // 0x43006FF4: nop

    return;
    // 0x43006FF4: nop

;}
RECOMP_FUNC void ovl_boss_devil_6FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006FF8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43006FFC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43007000: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x43007004: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x43007008: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x4300700C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x43007010: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x43007014: jal         0x430000E8
    // 0x43007018: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_boss_devil_E8(rdram, ctx);
        goto after_0;
    // 0x43007018: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_0:
    // 0x4300701C: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x43007020: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43007024: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43007028: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4300702C: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x43007030: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43007034: nop

    // 0x43007038: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x4300703C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x43007040: nop

    // 0x43007044: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x43007048: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x4300704C: nop

    // 0x43007050: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x43007054: nop

    // 0x43007058: sw          $at, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r1;
    // 0x4300705C: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x43007060: nop

    // 0x43007064: sw          $t3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r11;
    // 0x43007068: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x4300706C: jal         0x43006E50
    // 0x43007070: sw          $at, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r1;
    ovl_boss_devil_6E50(rdram, ctx);
        goto after_1;
    // 0x43007070: sw          $at, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r1;
    after_1:
    // 0x43007074: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x43007078: lui         $t5, 0x4301
    ctx->r13 = S32(0X4301 << 16);
    // 0x4300707C: addiu       $t5, $t5, -0x4C10
    ctx->r13 = ADD32(ctx->r13, -0X4C10);
    // 0x43007080: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x43007084: addiu       $t8, $sp, 0x3C
    ctx->r24 = ADD32(ctx->r29, 0X3C);
    // 0x43007088: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x4300708C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x43007090: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x43007094: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x43007098: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x4300709C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x430070A0: addiu       $a1, $s0, 0x5C
    ctx->r5 = ADD32(ctx->r16, 0X5C);
    // 0x430070A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430070A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x430070AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x430070B0: jal         0x43000DC0
    // 0x430070B4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_2;
    // 0x430070B4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_2:
    // 0x430070B8: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x430070BC: lui         $v1, 0x4300
    ctx->r3 = S32(0X4300 << 16);
    // 0x430070C0: addiu       $v1, $v1, 0x6FF0
    ctx->r3 = ADD32(ctx->r3, 0X6FF0);
    // 0x430070C4: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x430070C8: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x430070CC: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x430070D0: lw          $a0, 0xC0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC0);
    // 0x430070D4: addiu       $t9, $t9, 0x6B60
    ctx->r25 = ADD32(ctx->r25, 0X6B60);
    // 0x430070D8: addiu       $t2, $t2, 0x6E20
    ctx->r10 = ADD32(ctx->r10, 0X6E20);
    // 0x430070DC: addiu       $t1, $t1, 0x6DA8
    ctx->r9 = ADD32(ctx->r9, 0X6DA8);
    // 0x430070E0: sw          $v1, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r3;
    // 0x430070E4: sw          $v1, 0xB4($v0)
    MEM_W(0XB4, ctx->r2) = ctx->r3;
    // 0x430070E8: sw          $t9, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r25;
    // 0x430070EC: sw          $t2, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r10;
    // 0x430070F0: sw          $t1, 0xB8($v0)
    MEM_W(0XB8, ctx->r2) = ctx->r9;
    // 0x430070F4: sw          $s0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r16;
    // 0x430070F8: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x430070FC: lh          $t0, 0x2($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2);
    // 0x43007100: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
    // 0x43007104: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x43007108: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x4300710C: nop

    // 0x43007110: sll         $t3, $a2, 6
    ctx->r11 = S32(ctx->r6 << 6);
    // 0x43007114: addiu       $a2, $t3, -0x40
    ctx->r6 = ADD32(ctx->r11, -0X40);
    // 0x43007118: srl         $t4, $a2, 2
    ctx->r12 = S32(U32(ctx->r6) >> 2);
    // 0x4300711C: jal         0x43009A30
    // 0x43007120: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_3;
    // 0x43007120: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_3:
    // 0x43007124: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x43007128: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x4300712C: sw          $t5, 0x64($s0)
    MEM_W(0X64, ctx->r16) = ctx->r13;
    // 0x43007130: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x43007134: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x43007138: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x4300713C: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43007140: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x43007144: addiu       $t6, $t6, 0x6F48
    ctx->r14 = ADD32(ctx->r14, 0X6F48);
    // 0x43007148: addiu       $t9, $t9, 0x6F78
    ctx->r25 = ADD32(ctx->r25, 0X6F78);
    // 0x4300714C: addiu       $t2, $t2, 0x6FAC
    ctx->r10 = ADD32(ctx->r10, 0X6FAC);
    // 0x43007150: addiu       $t1, $t1, 0x6FB4
    ctx->r9 = ADD32(ctx->r9, 0X6FB4);
    // 0x43007154: sh          $zero, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = 0;
    // 0x43007158: sb          $zero, 0x6C($s0)
    MEM_B(0X6C, ctx->r16) = 0;
    // 0x4300715C: sb          $t7, 0x6D($s0)
    MEM_B(0X6D, ctx->r16) = ctx->r15;
    // 0x43007160: sw          $t6, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r14;
    // 0x43007164: sw          $t9, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r25;
    // 0x43007168: sw          $t2, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r10;
    // 0x4300716C: sw          $t1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r9;
    // 0x43007170: sh          $t8, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r24;
    // 0x43007174: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43007178: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x4300717C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x43007180: jr          $ra
    // 0x43007184: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43007184: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x43007188: nop

    // 0x4300718C: nop

;}
RECOMP_FUNC void ovl_boss_devil_7190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007190: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43007194: addiu       $a1, $a1, -0x4010
    ctx->r5 = ADD32(ctx->r5, -0X4010);
    // 0x43007198: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x4300719C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430071A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x430071A4: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x430071A8: lw          $v1, -0x4050($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4050);
    // 0x430071AC: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x430071B0: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x430071B4: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x430071B8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x430071BC: addiu       $t9, $t9, -0x44D0
    ctx->r25 = ADD32(ctx->r25, -0X44D0);
    // 0x430071C0: addiu       $t7, $a0, 0x1
    ctx->r15 = ADD32(ctx->r4, 0X1);
    // 0x430071C4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x430071C8: jr          $ra
    // 0x430071CC: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    return;
    // 0x430071CC: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
;}
RECOMP_FUNC void ovl_boss_devil_71D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430071D0: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430071D4: addiu       $v1, $v1, -0x4010
    ctx->r3 = ADD32(ctx->r3, -0X4010);
    // 0x430071D8: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
    // 0x430071DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x430071E0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430071E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x430071E8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x430071EC: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x430071F0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x430071F4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x430071F8: jr          $ra
    // 0x430071FC: sw          $t6, -0x4050($at)
    MEM_W(-0X4050, ctx->r1) = ctx->r14;
    return;
    // 0x430071FC: sw          $t6, -0x4050($at)
    MEM_W(-0X4050, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void ovl_boss_devil_7200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007200: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x43007204: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x43007208: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x4300720C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007210: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x43007214: lwc1        $f30, -0x49C0($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X49C0);
    // 0x43007218: lw          $s7, -0x44E0($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X44E0);
    // 0x4300721C: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x43007220: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x43007224: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x43007228: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300722C: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43007230: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x43007234: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x43007238: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x4300723C: addiu       $s5, $t6, -0x4050
    ctx->r21 = ADD32(ctx->r14, -0X4050);
    // 0x43007240: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x43007244: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x43007248: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x4300724C: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x43007250: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x43007254: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x43007258: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x4300725C: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43007260: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43007264: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43007268: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x4300726C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43007270: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43007274: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43007278: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x4300727C: or          $s6, $s5, $zero
    ctx->r22 = ctx->r21 | 0;
    // 0x43007280: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x43007284: addiu       $s4, $sp, 0xA0
    ctx->r20 = ADD32(ctx->r29, 0XA0);
    // 0x43007288: addiu       $s7, $s7, 0x9C
    ctx->r23 = ADD32(ctx->r23, 0X9C);
L_4300728C:
    // 0x4300728C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43007290: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x43007294: addiu       $a1, $a1, -0x44D0
    ctx->r5 = ADD32(ctx->r5, -0X44D0);
L_43007298:
    // 0x43007298: lhu         $t7, 0x8($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X8);
    // 0x4300729C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x430072A0: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x430072A4: beq         $t8, $zero, L_430072F4
    if (ctx->r24 == 0) {
        // 0x430072A8: nop
    
            goto L_430072F4;
    }
    // 0x430072A8: nop

    // 0x430072AC: lwc1        $f0, 0x40($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X40);
    // 0x430072B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x430072B4: add.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f0.fl;
L_430072B8:
    // 0x430072B8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x430072BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x430072C0: beq         $v0, $zero, L_430072E0
    if (ctx->r2 == 0) {
        // 0x430072C4: nop
    
            goto L_430072E0;
    }
    // 0x430072C4: nop

    // 0x430072C8: lwc1        $f4, 0x40($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X40);
    // 0x430072CC: nop

    // 0x430072D0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x430072D4: nop

    // 0x430072D8: bc1f        L_430072EC
    if (!c1cs) {
        // 0x430072DC: nop
    
            goto L_430072EC;
    }
    // 0x430072DC: nop

L_430072E0:
    // 0x430072E0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x430072E4: b           L_430072F4
    // 0x430072E8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
        goto L_430072F4;
    // 0x430072E8: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_430072EC:
    // 0x430072EC: bne         $v1, $s3, L_430072B8
    if (ctx->r3 != ctx->r19) {
        // 0x430072F0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430072B8;
    }
    // 0x430072F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_430072F4:
    // 0x430072F4: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x430072F8: sltu        $at, $a1, $s5
    ctx->r1 = ctx->r5 < ctx->r21 ? 1 : 0;
    // 0x430072FC: bne         $at, $zero, L_43007298
    if (ctx->r1 != 0) {
        // 0x43007300: nop
    
            goto L_43007298;
    }
    // 0x43007300: nop

    // 0x43007304: nop

    // 0x43007308: div.s       $f24, $f28, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = DIV_S(ctx->f28.fl, ctx->f26.fl);
    // 0x4300730C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43007310: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43007314: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43007318: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x4300731C: addiu       $a1, $a1, -0x44D0
    ctx->r5 = ADD32(ctx->r5, -0X44D0);
    // 0x43007320: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
L_43007324:
    // 0x43007324: lhu         $t9, 0x8($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X8);
    // 0x43007328: nop

    // 0x4300732C: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x43007330: beq         $t0, $zero, L_43007548
    if (ctx->r8 == 0) {
        // 0x43007334: nop
    
            goto L_43007548;
    }
    // 0x43007334: nop

    // 0x43007338: lbu         $t1, 0x14($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X14);
    // 0x4300733C: lwc1        $f6, 0x40($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X40);
    // 0x43007340: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x43007344: mul.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x43007348: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x4300734C: bgez        $t1, L_43007360
    if (SIGNED(ctx->r9) >= 0) {
        // 0x43007350: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_43007360;
    }
    // 0x43007350: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43007354: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43007358: nop

    // 0x4300735C: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_43007360:
    // 0x43007360: lbu         $t2, 0x15($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X15);
    // 0x43007364: mul.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x43007368: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x4300736C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x43007370: bgez        $t2, L_43007384
    if (SIGNED(ctx->r10) >= 0) {
        // 0x43007374: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_43007384;
    }
    // 0x43007374: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43007378: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300737C: nop

    // 0x43007380: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_43007384:
    // 0x43007384: lbu         $t3, 0x16($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X16);
    // 0x43007388: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x4300738C: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x43007390: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x43007394: bgez        $t3, L_430073A8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x43007398: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_430073A8;
    }
    // 0x43007398: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x4300739C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430073A0: nop

    // 0x430073A4: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_430073A8:
    // 0x430073A8: mul.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x430073AC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x430073B0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430073B4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x430073B8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x430073BC: nop

    // 0x430073C0: cvt.w.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.u32l = CVT_W_S(ctx->f2.fl);
    // 0x430073C4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x430073C8: nop

    // 0x430073CC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x430073D0: beq         $t5, $zero, L_4300741C
    if (ctx->r13 == 0) {
        // 0x430073D4: nop
    
            goto L_4300741C;
    }
    // 0x430073D4: nop

    // 0x430073D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430073DC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x430073E0: sub.s       $f8, $f2, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x430073E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x430073E8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x430073EC: nop

    // 0x430073F0: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x430073F4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x430073F8: nop

    // 0x430073FC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x43007400: bne         $t5, $zero, L_43007414
    if (ctx->r13 != 0) {
        // 0x43007404: nop
    
            goto L_43007414;
    }
    // 0x43007404: nop

    // 0x43007408: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x4300740C: b           L_4300742C
    // 0x43007410: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_4300742C;
    // 0x43007410: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_43007414:
    // 0x43007414: b           L_4300742C
    // 0x43007418: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_4300742C;
    // 0x43007418: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_4300741C:
    // 0x4300741C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x43007420: nop

    // 0x43007424: bltz        $t5, L_43007414
    if (SIGNED(ctx->r13) < 0) {
        // 0x43007428: nop
    
            goto L_43007414;
    }
    // 0x43007428: nop

L_4300742C:
    // 0x4300742C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43007430: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43007434: sb          $t5, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r13;
    // 0x43007438: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x4300743C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x43007440: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43007444: cvt.w.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.u32l = CVT_W_S(ctx->f12.fl);
    // 0x43007448: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x4300744C: nop

    // 0x43007450: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x43007454: beq         $t7, $zero, L_430074A0
    if (ctx->r15 == 0) {
        // 0x43007458: nop
    
            goto L_430074A0;
    }
    // 0x43007458: nop

    // 0x4300745C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43007460: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43007464: sub.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x43007468: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x4300746C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x43007470: nop

    // 0x43007474: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43007478: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x4300747C: nop

    // 0x43007480: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x43007484: bne         $t7, $zero, L_43007498
    if (ctx->r15 != 0) {
        // 0x43007488: nop
    
            goto L_43007498;
    }
    // 0x43007488: nop

    // 0x4300748C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x43007490: b           L_430074B0
    // 0x43007494: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_430074B0;
    // 0x43007494: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_43007498:
    // 0x43007498: b           L_430074B0
    // 0x4300749C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_430074B0;
    // 0x4300749C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_430074A0:
    // 0x430074A0: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x430074A4: nop

    // 0x430074A8: bltz        $t7, L_43007498
    if (SIGNED(ctx->r15) < 0) {
        // 0x430074AC: nop
    
            goto L_43007498;
    }
    // 0x430074AC: nop

L_430074B0:
    // 0x430074B0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x430074B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x430074B8: sb          $t7, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r15;
    // 0x430074BC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x430074C0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x430074C4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430074C8: cvt.w.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = CVT_W_S(ctx->f14.fl);
    // 0x430074CC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x430074D0: nop

    // 0x430074D4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x430074D8: beq         $t9, $zero, L_43007524
    if (ctx->r25 == 0) {
        // 0x430074DC: nop
    
            goto L_43007524;
    }
    // 0x430074DC: nop

    // 0x430074E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430074E4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x430074E8: sub.s       $f4, $f14, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x430074EC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x430074F0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x430074F4: nop

    // 0x430074F8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x430074FC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x43007500: nop

    // 0x43007504: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x43007508: bne         $t9, $zero, L_4300751C
    if (ctx->r25 != 0) {
        // 0x4300750C: nop
    
            goto L_4300751C;
    }
    // 0x4300750C: nop

    // 0x43007510: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x43007514: b           L_43007534
    // 0x43007518: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_43007534;
    // 0x43007518: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_4300751C:
    // 0x4300751C: b           L_43007534
    // 0x43007520: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_43007534;
    // 0x43007520: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
L_43007524:
    // 0x43007524: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x43007528: nop

    // 0x4300752C: bltz        $t9, L_4300751C
    if (SIGNED(ctx->r25) < 0) {
        // 0x43007530: nop
    
            goto L_4300751C;
    }
    // 0x43007530: nop

L_43007534:
    // 0x43007534: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x43007538: sb          $t9, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r25;
    // 0x4300753C: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x43007540: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x43007544: add.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f14.fl;
L_43007548:
    // 0x43007548: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x4300754C: sltu        $at, $a1, $s6
    ctx->r1 = ctx->r5 < ctx->r22 ? 1 : 0;
    // 0x43007550: bne         $at, $zero, L_43007324
    if (ctx->r1 != 0) {
        // 0x43007554: nop
    
            goto L_43007324;
    }
    // 0x43007554: nop

    // 0x43007558: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x4300755C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43007560: sll         $t7, $zero, 3
    ctx->r15 = S32(0 << 3);
    // 0x43007564: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x43007568: subu        $t7, $t7, $zero
    ctx->r15 = SUB32(ctx->r15, 0);
    // 0x4300756C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x43007570: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43007574: add.s       $f2, $f8, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f28.fl;
    // 0x43007578: addu        $s0, $s7, $t7
    ctx->r16 = ADD32(ctx->r23, ctx->r15);
    // 0x4300757C: c.lt.s      $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f30.fl < ctx->f2.fl;
    // 0x43007580: nop

    // 0x43007584: bc1f        L_43007590
    if (!c1cs) {
        // 0x43007588: nop
    
            goto L_43007590;
    }
    // 0x43007588: nop

    // 0x4300758C: mov.s       $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    ctx->f2.fl = ctx->f30.fl;
L_43007590:
    // 0x43007590: mul.s       $f10, $f20, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x43007594: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43007598: addiu       $v0, $s7, 0x188
    ctx->r2 = ADD32(ctx->r23, 0X188);
    // 0x4300759C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x430075A0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x430075A4: nop

    // 0x430075A8: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x430075AC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x430075B0: nop

    // 0x430075B4: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x430075B8: beq         $t1, $zero, L_43007604
    if (ctx->r9 == 0) {
        // 0x430075BC: nop
    
            goto L_43007604;
    }
    // 0x430075BC: nop

    // 0x430075C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430075C4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x430075C8: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x430075CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x430075D0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x430075D4: nop

    // 0x430075D8: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x430075DC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x430075E0: nop

    // 0x430075E4: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x430075E8: bne         $t1, $zero, L_430075FC
    if (ctx->r9 != 0) {
        // 0x430075EC: nop
    
            goto L_430075FC;
    }
    // 0x430075EC: nop

    // 0x430075F0: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x430075F4: b           L_43007614
    // 0x430075F8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_43007614;
    // 0x430075F8: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_430075FC:
    // 0x430075FC: b           L_43007614
    // 0x43007600: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_43007614;
    // 0x43007600: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_43007604:
    // 0x43007604: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x43007608: nop

    // 0x4300760C: bltz        $t1, L_430075FC
    if (SIGNED(ctx->r9) < 0) {
        // 0x43007610: nop
    
            goto L_430075FC;
    }
    // 0x43007610: nop

L_43007614:
    // 0x43007614: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x43007618: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x4300761C: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x43007620: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x43007624: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43007628: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x4300762C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x43007630: nop

    // 0x43007634: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x43007638: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x4300763C: nop

    // 0x43007640: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x43007644: beq         $t3, $zero, L_43007690
    if (ctx->r11 == 0) {
        // 0x43007648: nop
    
            goto L_43007690;
    }
    // 0x43007648: nop

    // 0x4300764C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43007650: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x43007654: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x43007658: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x4300765C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x43007660: nop

    // 0x43007664: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43007668: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x4300766C: nop

    // 0x43007670: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x43007674: bne         $t3, $zero, L_43007688
    if (ctx->r11 != 0) {
        // 0x43007678: nop
    
            goto L_43007688;
    }
    // 0x43007678: nop

    // 0x4300767C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x43007680: b           L_430076A0
    // 0x43007684: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_430076A0;
    // 0x43007684: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_43007688:
    // 0x43007688: b           L_430076A0
    // 0x4300768C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_430076A0;
    // 0x4300768C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_43007690:
    // 0x43007690: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x43007694: nop

    // 0x43007698: bltz        $t3, L_43007688
    if (SIGNED(ctx->r11) < 0) {
        // 0x4300769C: nop
    
            goto L_43007688;
    }
    // 0x4300769C: nop

L_430076A0:
    // 0x430076A0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x430076A4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x430076A8: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x430076AC: sb          $t3, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r11;
    // 0x430076B0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430076B4: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x430076B8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x430076BC: nop

    // 0x430076C0: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x430076C4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x430076C8: nop

    // 0x430076CC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x430076D0: beq         $t5, $zero, L_4300771C
    if (ctx->r13 == 0) {
        // 0x430076D4: nop
    
            goto L_4300771C;
    }
    // 0x430076D4: nop

    // 0x430076D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430076DC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x430076E0: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x430076E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x430076E8: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x430076EC: nop

    // 0x430076F0: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x430076F4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x430076F8: nop

    // 0x430076FC: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x43007700: bne         $t5, $zero, L_43007714
    if (ctx->r13 != 0) {
        // 0x43007704: nop
    
            goto L_43007714;
    }
    // 0x43007704: nop

    // 0x43007708: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x4300770C: b           L_4300772C
    // 0x43007710: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_4300772C;
    // 0x43007710: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_43007714:
    // 0x43007714: b           L_4300772C
    // 0x43007718: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_4300772C;
    // 0x43007718: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_4300771C:
    // 0x4300771C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x43007720: nop

    // 0x43007724: bltz        $t5, L_43007714
    if (SIGNED(ctx->r13) < 0) {
        // 0x43007728: nop
    
            goto L_43007714;
    }
    // 0x43007728: nop

L_4300772C:
    // 0x4300772C: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x43007730: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x43007734: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43007738: beq         $s2, $zero, L_43007774
    if (ctx->r18 == 0) {
        // 0x4300773C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43007774;
    }
    // 0x4300773C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43007740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007744:
    // 0x43007744: addiu       $a1, $s2, 0x8
    ctx->r5 = ADD32(ctx->r18, 0X8);
    // 0x43007748: jal         0x43009A30
    // 0x4300774C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_0;
    // 0x4300774C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_0:
    // 0x43007750: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x43007754: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43007758: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
    // 0x4300775C: lw          $s2, 0x0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X0);
    // 0x43007760: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x43007764: beq         $s2, $zero, L_43007778
    if (ctx->r18 == 0) {
        // 0x43007768: slti        $at, $s1, 0x7
        ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
            goto L_43007778;
    }
    // 0x43007768: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x4300776C: bne         $s1, $s3, L_43007744
    if (ctx->r17 != ctx->r19) {
        // 0x43007770: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43007744;
    }
    // 0x43007770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007774:
    // 0x43007774: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
L_43007778:
    // 0x43007778: beq         $at, $zero, L_430077A4
    if (ctx->r1 == 0) {
        // 0x4300777C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_430077A4;
    }
    // 0x4300777C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43007780: sll         $t9, $s1, 3
    ctx->r25 = S32(ctx->r17 << 3);
    // 0x43007784: subu        $t9, $t9, $s1
    ctx->r25 = SUB32(ctx->r25, ctx->r17);
    // 0x43007788: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x4300778C: addu        $s0, $s7, $t9
    ctx->r16 = ADD32(ctx->r23, ctx->r25);
L_43007790:
    // 0x43007790: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43007794: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x43007798: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x4300779C: bne         $at, $zero, L_43007790
    if (ctx->r1 != 0) {
        // 0x430077A0: sh          $zero, -0x38($s0)
        MEM_H(-0X38, ctx->r16) = 0;
            goto L_43007790;
    }
    // 0x430077A0: sh          $zero, -0x38($s0)
    MEM_H(-0X38, ctx->r16) = 0;
L_430077A4:
    // 0x430077A4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x430077A8: jal         0x43009B08
    // 0x430077AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_1;
    // 0x430077AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_1:
    // 0x430077B0: b           L_4300728C
    // 0x430077B4: nop

        goto L_4300728C;
    // 0x430077B4: nop

    // 0x430077B8: nop

    // 0x430077BC: nop

    // 0x430077C0: nop

    // 0x430077C4: nop

    // 0x430077C8: nop

    // 0x430077CC: nop

    // 0x430077D0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x430077D4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x430077D8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x430077DC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x430077E0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x430077E4: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x430077E8: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430077EC: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x430077F0: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430077F4: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x430077F8: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430077FC: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43007800: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43007804: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x43007808: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x4300780C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x43007810: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x43007814: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x43007818: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x4300781C: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x43007820: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x43007824: jr          $ra
    // 0x43007828: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x43007828: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_boss_devil_782C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300782C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007830: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43007834: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007838: lw          $a0, -0x44D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X44D8);
    // 0x4300783C: jal         0x4300082C
    // 0x43007840: nop

    ovl_boss_devil_82C(rdram, ctx);
        goto after_0;
    // 0x43007840: nop

    after_0:
    // 0x43007844: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43007848: lw          $a2, -0x44DC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X44DC);
    // 0x4300784C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x43007850: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x43007854: jal         0x43000DC0
    // 0x43007858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x43007858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x4300785C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43007860: lw          $a0, -0x44E0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X44E0);
    // 0x43007864: jal         0x430000F4
    // 0x43007868: nop

    ovl_boss_devil_F4(rdram, ctx);
        goto after_2;
    // 0x43007868: nop

    after_2:
    // 0x4300786C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007870: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007874: jr          $ra
    // 0x43007878: nop

    return;
    // 0x43007878: nop

;}
RECOMP_FUNC void ovl_boss_devil_787C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300787C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007884: jal         0x430000E8
    // 0x43007888: addiu       $a0, $zero, 0x230
    ctx->r4 = ADD32(0, 0X230);
    ovl_boss_devil_E8(rdram, ctx);
        goto after_0;
    // 0x43007888: addiu       $a0, $zero, 0x230
    ctx->r4 = ADD32(0, 0X230);
    after_0:
    // 0x4300788C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43007890: addiu       $v1, $v1, -0x44E0
    ctx->r3 = ADD32(ctx->r3, -0X44E0);
    // 0x43007894: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43007898: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x4300789C: addiu       $a1, $a1, -0x44DC
    ctx->r5 = ADD32(ctx->r5, -0X44DC);
    // 0x430078A0: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x430078A4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x430078A8: jal         0x43000DC0
    // 0x430078AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x430078AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x430078B0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430078B4: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430078B8: lw          $a1, -0x44DC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X44DC);
    // 0x430078BC: lw          $a0, -0x44E0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X44E0);
    // 0x430078C0: jal         0x43009A30
    // 0x430078C4: addiu       $a2, $zero, 0x8C
    ctx->r6 = ADD32(0, 0X8C);
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_2;
    // 0x430078C4: addiu       $a2, $zero, 0x8C
    ctx->r6 = ADD32(0, 0X8C);
    after_2:
    // 0x430078C8: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430078CC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430078D0: addiu       $a0, $a0, -0x4050
    ctx->r4 = ADD32(ctx->r4, -0X4050);
    // 0x430078D4: addiu       $v0, $v0, -0x44D0
    ctx->r2 = ADD32(ctx->r2, -0X44D0);
    // 0x430078D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x430078DC: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
L_430078E0:
    // 0x430078E0: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x430078E4: addiu       $a2, $v1, 0x2
    ctx->r6 = ADD32(ctx->r3, 0X2);
    // 0x430078E8: addiu       $a3, $v1, 0x3
    ctx->r7 = ADD32(ctx->r3, 0X3);
    // 0x430078EC: sw          $v1, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r3;
    // 0x430078F0: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x430078F4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x430078F8: sw          $a3, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r7;
    // 0x430078FC: sw          $a3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r7;
    // 0x43007900: sw          $a2, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r6;
    // 0x43007904: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x43007908: sw          $a1, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r5;
    // 0x4300790C: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x43007910: sh          $zero, 0x50($v0)
    MEM_H(0X50, ctx->r2) = 0;
    // 0x43007914: sh          $zero, 0x98($v0)
    MEM_H(0X98, ctx->r2) = 0;
    // 0x43007918: sh          $zero, 0xE0($v0)
    MEM_H(0XE0, ctx->r2) = 0;
    // 0x4300791C: addiu       $v0, $v0, 0x120
    ctx->r2 = ADD32(ctx->r2, 0X120);
    // 0x43007920: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x43007924: bne         $v1, $t0, L_430078E0
    if (ctx->r3 != ctx->r8) {
        // 0x43007928: sh          $zero, -0x118($v0)
        MEM_H(-0X118, ctx->r2) = 0;
            goto L_430078E0;
    }
    // 0x43007928: sh          $zero, -0x118($v0)
    MEM_H(-0X118, ctx->r2) = 0;
    // 0x4300792C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007930: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43007934: sw          $zero, -0x4010($at)
    MEM_W(-0X4010, ctx->r1) = 0;
    // 0x43007938: addiu       $a0, $a0, 0x7200
    ctx->r4 = ADD32(ctx->r4, 0X7200);
    // 0x4300793C: ori         $a1, $zero, 0xFECE
    ctx->r5 = 0 | 0XFECE;
    // 0x43007940: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43007944: jal         0x43000820
    // 0x43007948: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_820(rdram, ctx);
        goto after_3;
    // 0x43007948: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x4300794C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007950: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007954: sw          $v0, -0x44D8($at)
    MEM_W(-0X44D8, ctx->r1) = ctx->r2;
    // 0x43007958: jr          $ra
    // 0x4300795C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x4300795C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_devil_7960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007968: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4300796C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x43007970: nop

    // 0x43007974: lw          $t6, 0x1FC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1FC);
    // 0x43007978: nop

    // 0x4300797C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x43007980: jal         0x4300A370
    // 0x43007984: sw          $t7, 0x1FC($v0)
    MEM_W(0X1FC, ctx->r2) = ctx->r15;
    ovl_boss_devil_A370(rdram, ctx);
        goto after_0;
    // 0x43007984: sw          $t7, 0x1FC($v0)
    MEM_W(0X1FC, ctx->r2) = ctx->r15;
    after_0:
    // 0x43007988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300798C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007990: jr          $ra
    // 0x43007994: nop

    return;
    // 0x43007994: nop

;}
RECOMP_FUNC void ovl_boss_devil_7998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007998: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300799C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430079A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430079A4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x430079A8: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x430079AC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430079B0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x430079B4: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x430079B8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x430079BC: bltz        $a1, L_430079D8
    if (SIGNED(ctx->r5) < 0) {
        // 0x430079C0: nop
    
            goto L_430079D8;
    }
    // 0x430079C0: nop

    // 0x430079C4: jal         0x43007EC4
    // 0x430079C8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_boss_devil_7EC4(rdram, ctx);
        goto after_0;
    // 0x430079C8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x430079CC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x430079D0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x430079D4: sw          $t7, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r15;
L_430079D8:
    // 0x430079D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x430079DC: jal         0x4300A2F8
    // 0x430079E0: nop

    ovl_boss_devil_A2F8(rdram, ctx);
        goto after_1;
    // 0x430079E0: nop

    after_1:
    // 0x430079E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430079E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430079EC: jr          $ra
    // 0x430079F0: nop

    return;
    // 0x430079F0: nop

;}
RECOMP_FUNC void ovl_boss_devil_79F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430079F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430079F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430079FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43007A00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43007A04: jal         0x4300A2F8
    // 0x43007A08: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_devil_A2F8(rdram, ctx);
        goto after_0;
    // 0x43007A08: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43007A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007A14: jr          $ra
    // 0x43007A18: nop

    return;
    // 0x43007A18: nop

;}
RECOMP_FUNC void ovl_boss_devil_7A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007A24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43007A28: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43007A2C: lw          $a3, 0x24($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X24);
    // 0x43007A30: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43007A34: bne         $a1, $at, L_43007A60
    if (ctx->r5 != ctx->r1) {
        // 0x43007A38: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_43007A60;
    }
    // 0x43007A38: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43007A3C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x43007A40: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43007A44: bltz        $a1, L_43007A64
    if (SIGNED(ctx->r5) < 0) {
        // 0x43007A48: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43007A64;
    }
    // 0x43007A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007A4C: jal         0x43007EC4
    // 0x43007A50: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_boss_devil_7EC4(rdram, ctx);
        goto after_0;
    // 0x43007A50: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x43007A54: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43007A58: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43007A5C: sw          $t6, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r14;
L_43007A60:
    // 0x43007A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43007A64:
    // 0x43007A64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007A68: jr          $ra
    // 0x43007A6C: nop

    return;
    // 0x43007A6C: nop

;}
