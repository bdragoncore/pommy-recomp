#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8005ED40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005ED40: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x8005ED44: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8005ED48: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8005ED4C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8005ED50: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8005ED54: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8005ED58: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8005ED5C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8005ED60: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8005ED64: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005ED68: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8005ED6C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005ED70: jal         0x80007774
    // 0x8005ED74: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005ED74: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8005ED78: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8005ED7C: addiu       $t7, $t7, 0x1EF4
    ctx->r15 = ADD32(ctx->r15, 0X1EF4);
    // 0x8005ED80: lw          $fp, 0x1C($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X1C);
    // 0x8005ED84: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8005ED88: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x8005ED8C: addiu       $t6, $sp, 0x9C
    ctx->r14 = ADD32(ctx->r29, 0X9C);
L_8005ED90:
    // 0x8005ED90: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8005ED94: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8005ED98: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8005ED9C: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8005EDA0: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8005EDA4: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8005EDA8: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8005EDAC: bne         $t7, $t9, L_8005ED90
    if (ctx->r15 != ctx->r25) {
        // 0x8005EDB0: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8005ED90;
    }
    // 0x8005EDB0: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8005EDB4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8005EDB8: addiu       $s4, $sp, 0x9C
    ctx->r20 = ADD32(ctx->r29, 0X9C);
    // 0x8005EDBC: addiu       $s3, $sp, 0xC4
    ctx->r19 = ADD32(ctx->r29, 0XC4);
    // 0x8005EDC0: addiu       $s7, $sp, 0x6C
    ctx->r23 = ADD32(ctx->r29, 0X6C);
    // 0x8005EDC4: addiu       $s0, $sp, 0xD0
    ctx->r16 = ADD32(ctx->r29, 0XD0);
L_8005EDC8:
    // 0x8005EDC8: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x8005EDCC: lwc1        $f6, 0x0($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8005EDD0: lwc1        $f10, 0x4($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X4);
    // 0x8005EDD4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005EDD8: addiu       $a0, $zero, 0x79A
    ctx->r4 = ADD32(0, 0X79A);
    // 0x8005EDDC: swc1        $f8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f8.u32l;
    // 0x8005EDE0: lwc1        $f4, 0x4($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8005EDE4: lwc1        $f8, 0x8($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X8);
    // 0x8005EDE8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8005EDEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005EDF0: swc1        $f6, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f6.u32l;
    // 0x8005EDF4: lwc1        $f10, 0x8($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X8);
    // 0x8005EDF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005EDFC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005EE00: jal         0x8001D138
    // 0x8005EE04: swc1        $f4, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005EE04: swc1        $f4, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f4.u32l;
    after_1:
    // 0x8005EE08: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8005EE0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005EE10: jal         0x80019164
    // 0x8005EE14: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005EE14: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x8005EE18: sw          $s5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r21;
    // 0x8005EE1C: jal         0x800191C0
    // 0x8005EE20: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800191C0(rdram, ctx);
        goto after_3;
    // 0x8005EE20: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x8005EE24: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005EE28: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x8005EE2C: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x8005EE30: swc1        $f20, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f20.u32l;
    // 0x8005EE34: jal         0x80019114
    // 0x8005EE38: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x8005EE38: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x8005EE3C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8005EE40: bne         $s3, $s0, L_8005EDC8
    if (ctx->r19 != ctx->r16) {
        // 0x8005EE44: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_8005EDC8;
    }
    // 0x8005EE44: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x8005EE48: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8005EE4C: addiu       $s7, $s7, 0x1F24
    ctx->r23 = ADD32(ctx->r23, 0X1F24);
    // 0x8005EE50: lw          $t8, 0x24($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X24);
L_8005EE54:
    // 0x8005EE54: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8005EE58: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x8005EE5C: bne         $t9, $zero, L_8005EF04
    if (ctx->r25 != 0) {
        // 0x8005EE60: lui         $s4, 0x8009
        ctx->r20 = S32(0X8009 << 16);
            goto L_8005EF04;
    }
    // 0x8005EE60: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x8005EE64: addiu       $s4, $s4, 0x1F18
    ctx->r20 = ADD32(ctx->r20, 0X1F18);
L_8005EE68:
    // 0x8005EE68: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005EE6C: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x8005EE70: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8005EE74: bne         $at, $zero, L_8005EECC
    if (ctx->r1 != 0) {
        // 0x8005EE78: nop
    
            goto L_8005EECC;
    }
    // 0x8005EE78: nop

    // 0x8005EE7C: bne         $s6, $v0, L_8005EE9C
    if (ctx->r22 != ctx->r2) {
        // 0x8005EE80: addu        $s3, $s5, $t7
        ctx->r19 = ADD32(ctx->r21, ctx->r15);
            goto L_8005EE9C;
    }
    // 0x8005EE80: addu        $s3, $s5, $t7
    ctx->r19 = ADD32(ctx->r21, ctx->r15);
    // 0x8005EE84: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005EE88: jal         0x800191D4
    // 0x8005EE8C: nop

    func_800191D4(rdram, ctx);
        goto after_5;
    // 0x8005EE8C: nop

    after_5:
    // 0x8005EE90: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005EE94: b           L_8005EEC0
    // 0x8005EE98: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
        goto L_8005EEC0;
    // 0x8005EE98: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_8005EE9C:
    // 0x8005EE9C: addiu       $t6, $v0, 0xC
    ctx->r14 = ADD32(ctx->r2, 0XC);
    // 0x8005EEA0: bne         $s6, $t6, L_8005EEBC
    if (ctx->r22 != ctx->r14) {
        // 0x8005EEA4: nop
    
            goto L_8005EEBC;
    }
    // 0x8005EEA4: nop

    // 0x8005EEA8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005EEAC: jal         0x800191C0
    // 0x8005EEB0: nop

    func_800191C0(rdram, ctx);
        goto after_6;
    // 0x8005EEB0: nop

    after_6:
    // 0x8005EEB4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005EEB8: nop

L_8005EEBC:
    // 0x8005EEBC: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_8005EEC0:
    // 0x8005EEC0: subu        $s2, $s6, $v0
    ctx->r18 = SUB32(ctx->r22, ctx->r2);
    // 0x8005EEC4: jal         0x8005D490
    // 0x8005EEC8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_8005D490(rdram, ctx);
        goto after_7;
    // 0x8005EEC8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_7:
L_8005EECC:
    // 0x8005EECC: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8005EED0: bne         $s4, $s7, L_8005EE68
    if (ctx->r20 != ctx->r23) {
        // 0x8005EED4: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_8005EE68;
    }
    // 0x8005EED4: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8005EED8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8005EEDC: lw          $t8, 0x1F20($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F20);
    // 0x8005EEE0: nop

    // 0x8005EEE4: addiu       $t9, $t8, 0xC
    ctx->r25 = ADD32(ctx->r24, 0XC);
    // 0x8005EEE8: slt         $v0, $t9, $s6
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8005EEEC: bne         $v0, $zero, L_8005EF04
    if (ctx->r2 != 0) {
        // 0x8005EEF0: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8005EF04;
    }
    // 0x8005EEF0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8005EEF4: jal         0x80007AB0
    // 0x8005EEF8: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x8005EEF8: nop

    after_8:
    // 0x8005EEFC: b           L_8005EE54
    // 0x8005EF00: lw          $t8, 0x24($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X24);
        goto L_8005EE54;
    // 0x8005EF00: lw          $t8, 0x24($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X24);
L_8005EF04:
    // 0x8005EF04: addiu       $s3, $sp, 0xC4
    ctx->r19 = ADD32(ctx->r29, 0XC4);
    // 0x8005EF08: addiu       $s5, $s3, 0xC
    ctx->r21 = ADD32(ctx->r19, 0XC);
L_8005EF0C:
    // 0x8005EF0C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005EF10: jal         0x8001C568
    // 0x8005EF14: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x8005EF14: nop

    after_9:
    // 0x8005EF18: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8005EF1C: sltu        $at, $s3, $s5
    ctx->r1 = ctx->r19 < ctx->r21 ? 1 : 0;
    // 0x8005EF20: bne         $at, $zero, L_8005EF0C
    if (ctx->r1 != 0) {
        // 0x8005EF24: nop
    
            goto L_8005EF0C;
    }
    // 0x8005EF24: nop

    // 0x8005EF28: jal         0x8005CD50
    // 0x8005EF2C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x8005EF2C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_10:
    // 0x8005EF30: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005EF34: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005EF38: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8005EF3C: nop

    // 0x8005EF40: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x8005EF44: jal         0x80007AE0
    // 0x8005EF48: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x8005EF48: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_11:
    // 0x8005EF4C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8005EF50: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005EF54: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005EF58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005EF5C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005EF60: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8005EF64: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8005EF68: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8005EF6C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8005EF70: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8005EF74: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8005EF78: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8005EF7C: jr          $ra
    // 0x8005EF80: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x8005EF80: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_8005EF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005EF84: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x8005EF88: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8005EF8C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8005EF90: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8005EF94: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8005EF98: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8005EF9C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8005EFA0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8005EFA4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8005EFA8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005EFAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8005EFB0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005EFB4: jal         0x80007774
    // 0x8005EFB8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005EFB8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8005EFBC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8005EFC0: addiu       $t7, $t7, 0x1F24
    ctx->r15 = ADD32(ctx->r15, 0X1F24);
    // 0x8005EFC4: lw          $fp, 0x1C($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X1C);
    // 0x8005EFC8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8005EFCC: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x8005EFD0: addiu       $t6, $sp, 0x9C
    ctx->r14 = ADD32(ctx->r29, 0X9C);
L_8005EFD4:
    // 0x8005EFD4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8005EFD8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8005EFDC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8005EFE0: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8005EFE4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8005EFE8: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8005EFEC: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8005EFF0: bne         $t7, $t9, L_8005EFD4
    if (ctx->r15 != ctx->r25) {
        // 0x8005EFF4: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8005EFD4;
    }
    // 0x8005EFF4: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8005EFF8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8005EFFC: addiu       $s4, $sp, 0x9C
    ctx->r20 = ADD32(ctx->r29, 0X9C);
    // 0x8005F000: addiu       $s3, $sp, 0xC4
    ctx->r19 = ADD32(ctx->r29, 0XC4);
    // 0x8005F004: addiu       $s7, $sp, 0x6C
    ctx->r23 = ADD32(ctx->r29, 0X6C);
    // 0x8005F008: addiu       $s0, $sp, 0xD0
    ctx->r16 = ADD32(ctx->r29, 0XD0);
L_8005F00C:
    // 0x8005F00C: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x8005F010: lwc1        $f6, 0x0($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8005F014: lwc1        $f10, 0x4($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X4);
    // 0x8005F018: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005F01C: addiu       $a0, $zero, 0x79A
    ctx->r4 = ADD32(0, 0X79A);
    // 0x8005F020: swc1        $f8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f8.u32l;
    // 0x8005F024: lwc1        $f4, 0x4($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8005F028: lwc1        $f8, 0x8($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X8);
    // 0x8005F02C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8005F030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005F034: swc1        $f6, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f6.u32l;
    // 0x8005F038: lwc1        $f10, 0x8($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X8);
    // 0x8005F03C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005F040: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005F044: jal         0x8001D138
    // 0x8005F048: swc1        $f4, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005F048: swc1        $f4, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f4.u32l;
    after_1:
    // 0x8005F04C: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8005F050: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005F054: jal         0x80019164
    // 0x8005F058: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005F058: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x8005F05C: sw          $s5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r21;
    // 0x8005F060: jal         0x800191C0
    // 0x8005F064: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800191C0(rdram, ctx);
        goto after_3;
    // 0x8005F064: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x8005F068: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005F06C: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x8005F070: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x8005F074: swc1        $f20, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f20.u32l;
    // 0x8005F078: jal         0x80019114
    // 0x8005F07C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x8005F07C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x8005F080: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8005F084: bne         $s3, $s0, L_8005F00C
    if (ctx->r19 != ctx->r16) {
        // 0x8005F088: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_8005F00C;
    }
    // 0x8005F088: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x8005F08C: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8005F090: addiu       $s7, $s7, 0x1F54
    ctx->r23 = ADD32(ctx->r23, 0X1F54);
    // 0x8005F094: lw          $t8, 0x24($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X24);
L_8005F098:
    // 0x8005F098: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8005F09C: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x8005F0A0: bne         $t9, $zero, L_8005F148
    if (ctx->r25 != 0) {
        // 0x8005F0A4: lui         $s4, 0x8009
        ctx->r20 = S32(0X8009 << 16);
            goto L_8005F148;
    }
    // 0x8005F0A4: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x8005F0A8: addiu       $s4, $s4, 0x1F48
    ctx->r20 = ADD32(ctx->r20, 0X1F48);
L_8005F0AC:
    // 0x8005F0AC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005F0B0: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x8005F0B4: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8005F0B8: bne         $at, $zero, L_8005F110
    if (ctx->r1 != 0) {
        // 0x8005F0BC: nop
    
            goto L_8005F110;
    }
    // 0x8005F0BC: nop

    // 0x8005F0C0: bne         $s6, $v0, L_8005F0E0
    if (ctx->r22 != ctx->r2) {
        // 0x8005F0C4: addu        $s3, $s5, $t7
        ctx->r19 = ADD32(ctx->r21, ctx->r15);
            goto L_8005F0E0;
    }
    // 0x8005F0C4: addu        $s3, $s5, $t7
    ctx->r19 = ADD32(ctx->r21, ctx->r15);
    // 0x8005F0C8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005F0CC: jal         0x800191D4
    // 0x8005F0D0: nop

    func_800191D4(rdram, ctx);
        goto after_5;
    // 0x8005F0D0: nop

    after_5:
    // 0x8005F0D4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005F0D8: b           L_8005F104
    // 0x8005F0DC: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
        goto L_8005F104;
    // 0x8005F0DC: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_8005F0E0:
    // 0x8005F0E0: addiu       $t6, $v0, 0xC
    ctx->r14 = ADD32(ctx->r2, 0XC);
    // 0x8005F0E4: bne         $s6, $t6, L_8005F100
    if (ctx->r22 != ctx->r14) {
        // 0x8005F0E8: nop
    
            goto L_8005F100;
    }
    // 0x8005F0E8: nop

    // 0x8005F0EC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005F0F0: jal         0x800191C0
    // 0x8005F0F4: nop

    func_800191C0(rdram, ctx);
        goto after_6;
    // 0x8005F0F4: nop

    after_6:
    // 0x8005F0F8: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005F0FC: nop

L_8005F100:
    // 0x8005F100: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_8005F104:
    // 0x8005F104: subu        $s2, $s6, $v0
    ctx->r18 = SUB32(ctx->r22, ctx->r2);
    // 0x8005F108: jal         0x8005D490
    // 0x8005F10C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_8005D490(rdram, ctx);
        goto after_7;
    // 0x8005F10C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_7:
L_8005F110:
    // 0x8005F110: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8005F114: bne         $s4, $s7, L_8005F0AC
    if (ctx->r20 != ctx->r23) {
        // 0x8005F118: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_8005F0AC;
    }
    // 0x8005F118: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8005F11C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8005F120: lw          $t8, 0x1F50($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F50);
    // 0x8005F124: nop

    // 0x8005F128: addiu       $t9, $t8, 0xC
    ctx->r25 = ADD32(ctx->r24, 0XC);
    // 0x8005F12C: slt         $v0, $t9, $s6
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8005F130: bne         $v0, $zero, L_8005F148
    if (ctx->r2 != 0) {
        // 0x8005F134: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8005F148;
    }
    // 0x8005F134: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8005F138: jal         0x80007AB0
    // 0x8005F13C: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x8005F13C: nop

    after_8:
    // 0x8005F140: b           L_8005F098
    // 0x8005F144: lw          $t8, 0x24($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X24);
        goto L_8005F098;
    // 0x8005F144: lw          $t8, 0x24($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X24);
L_8005F148:
    // 0x8005F148: addiu       $s3, $sp, 0xC4
    ctx->r19 = ADD32(ctx->r29, 0XC4);
    // 0x8005F14C: addiu       $s5, $s3, 0xC
    ctx->r21 = ADD32(ctx->r19, 0XC);
L_8005F150:
    // 0x8005F150: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005F154: jal         0x8001C568
    // 0x8005F158: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x8005F158: nop

    after_9:
    // 0x8005F15C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8005F160: sltu        $at, $s3, $s5
    ctx->r1 = ctx->r19 < ctx->r21 ? 1 : 0;
    // 0x8005F164: bne         $at, $zero, L_8005F150
    if (ctx->r1 != 0) {
        // 0x8005F168: nop
    
            goto L_8005F150;
    }
    // 0x8005F168: nop

    // 0x8005F16C: jal         0x8005CD50
    // 0x8005F170: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x8005F170: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_10:
    // 0x8005F174: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005F178: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005F17C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8005F180: nop

    // 0x8005F184: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x8005F188: jal         0x80007AE0
    // 0x8005F18C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x8005F18C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_11:
    // 0x8005F190: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8005F194: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005F198: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005F19C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005F1A0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005F1A4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8005F1A8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F1AC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8005F1B0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8005F1B4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8005F1B8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8005F1BC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8005F1C0: jr          $ra
    // 0x8005F1C4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x8005F1C4: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_8005F1C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F1C8: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x8005F1CC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8005F1D0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8005F1D4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8005F1D8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8005F1DC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8005F1E0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8005F1E4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8005F1E8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8005F1EC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005F1F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8005F1F4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005F1F8: jal         0x80007774
    // 0x8005F1FC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005F1FC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8005F200: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8005F204: addiu       $t7, $t7, 0x1F54
    ctx->r15 = ADD32(ctx->r15, 0X1F54);
    // 0x8005F208: lw          $fp, 0x1C($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X1C);
    // 0x8005F20C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8005F210: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x8005F214: addiu       $t6, $sp, 0x9C
    ctx->r14 = ADD32(ctx->r29, 0X9C);
L_8005F218:
    // 0x8005F218: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8005F21C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8005F220: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8005F224: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8005F228: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8005F22C: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8005F230: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8005F234: bne         $t7, $t9, L_8005F218
    if (ctx->r15 != ctx->r25) {
        // 0x8005F238: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8005F218;
    }
    // 0x8005F238: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8005F23C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8005F240: addiu       $s4, $sp, 0x9C
    ctx->r20 = ADD32(ctx->r29, 0X9C);
    // 0x8005F244: addiu       $s3, $sp, 0xC4
    ctx->r19 = ADD32(ctx->r29, 0XC4);
    // 0x8005F248: addiu       $s7, $sp, 0x6C
    ctx->r23 = ADD32(ctx->r29, 0X6C);
    // 0x8005F24C: addiu       $s0, $sp, 0xD0
    ctx->r16 = ADD32(ctx->r29, 0XD0);
L_8005F250:
    // 0x8005F250: lwc1        $f4, 0x0($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X0);
    // 0x8005F254: lwc1        $f6, 0x0($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8005F258: lwc1        $f10, 0x4($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X4);
    // 0x8005F25C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005F260: addiu       $a0, $zero, 0x79A
    ctx->r4 = ADD32(0, 0X79A);
    // 0x8005F264: swc1        $f8, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f8.u32l;
    // 0x8005F268: lwc1        $f4, 0x4($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8005F26C: lwc1        $f8, 0x8($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X8);
    // 0x8005F270: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8005F274: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005F278: swc1        $f6, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f6.u32l;
    // 0x8005F27C: lwc1        $f10, 0x8($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X8);
    // 0x8005F280: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005F284: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005F288: jal         0x8001D138
    // 0x8005F28C: swc1        $f4, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005F28C: swc1        $f4, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f4.u32l;
    after_1:
    // 0x8005F290: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8005F294: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005F298: jal         0x80019164
    // 0x8005F29C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005F29C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x8005F2A0: sw          $s5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r21;
    // 0x8005F2A4: jal         0x800191C0
    // 0x8005F2A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800191C0(rdram, ctx);
        goto after_3;
    // 0x8005F2A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_3:
    // 0x8005F2AC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005F2B0: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x8005F2B4: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x8005F2B8: swc1        $f20, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f20.u32l;
    // 0x8005F2BC: jal         0x80019114
    // 0x8005F2C0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x8005F2C0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x8005F2C4: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8005F2C8: bne         $s3, $s0, L_8005F250
    if (ctx->r19 != ctx->r16) {
        // 0x8005F2CC: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_8005F250;
    }
    // 0x8005F2CC: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x8005F2D0: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8005F2D4: addiu       $s7, $s7, 0x1F84
    ctx->r23 = ADD32(ctx->r23, 0X1F84);
    // 0x8005F2D8: lw          $t8, 0x24($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X24);
L_8005F2DC:
    // 0x8005F2DC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8005F2E0: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x8005F2E4: bne         $t9, $zero, L_8005F38C
    if (ctx->r25 != 0) {
        // 0x8005F2E8: lui         $s4, 0x8009
        ctx->r20 = S32(0X8009 << 16);
            goto L_8005F38C;
    }
    // 0x8005F2E8: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x8005F2EC: addiu       $s4, $s4, 0x1F78
    ctx->r20 = ADD32(ctx->r20, 0X1F78);
L_8005F2F0:
    // 0x8005F2F0: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005F2F4: addiu       $t7, $sp, 0xC4
    ctx->r15 = ADD32(ctx->r29, 0XC4);
    // 0x8005F2F8: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8005F2FC: bne         $at, $zero, L_8005F354
    if (ctx->r1 != 0) {
        // 0x8005F300: nop
    
            goto L_8005F354;
    }
    // 0x8005F300: nop

    // 0x8005F304: bne         $s6, $v0, L_8005F324
    if (ctx->r22 != ctx->r2) {
        // 0x8005F308: addu        $s3, $s5, $t7
        ctx->r19 = ADD32(ctx->r21, ctx->r15);
            goto L_8005F324;
    }
    // 0x8005F308: addu        $s3, $s5, $t7
    ctx->r19 = ADD32(ctx->r21, ctx->r15);
    // 0x8005F30C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005F310: jal         0x800191D4
    // 0x8005F314: nop

    func_800191D4(rdram, ctx);
        goto after_5;
    // 0x8005F314: nop

    after_5:
    // 0x8005F318: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005F31C: b           L_8005F348
    // 0x8005F320: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
        goto L_8005F348;
    // 0x8005F320: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_8005F324:
    // 0x8005F324: addiu       $t6, $v0, 0xC
    ctx->r14 = ADD32(ctx->r2, 0XC);
    // 0x8005F328: bne         $s6, $t6, L_8005F344
    if (ctx->r22 != ctx->r14) {
        // 0x8005F32C: nop
    
            goto L_8005F344;
    }
    // 0x8005F32C: nop

    // 0x8005F330: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005F334: jal         0x800191C0
    // 0x8005F338: nop

    func_800191C0(rdram, ctx);
        goto after_6;
    // 0x8005F338: nop

    after_6:
    // 0x8005F33C: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8005F340: nop

L_8005F344:
    // 0x8005F344: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
L_8005F348:
    // 0x8005F348: subu        $s2, $s6, $v0
    ctx->r18 = SUB32(ctx->r22, ctx->r2);
    // 0x8005F34C: jal         0x8005D490
    // 0x8005F350: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    func_8005D490(rdram, ctx);
        goto after_7;
    // 0x8005F350: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_7:
L_8005F354:
    // 0x8005F354: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8005F358: bne         $s4, $s7, L_8005F2F0
    if (ctx->r20 != ctx->r23) {
        // 0x8005F35C: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_8005F2F0;
    }
    // 0x8005F35C: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8005F360: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8005F364: lw          $t8, 0x1F80($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1F80);
    // 0x8005F368: nop

    // 0x8005F36C: addiu       $t9, $t8, 0xC
    ctx->r25 = ADD32(ctx->r24, 0XC);
    // 0x8005F370: slt         $v0, $t9, $s6
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8005F374: bne         $v0, $zero, L_8005F38C
    if (ctx->r2 != 0) {
        // 0x8005F378: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8005F38C;
    }
    // 0x8005F378: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8005F37C: jal         0x80007AB0
    // 0x8005F380: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x8005F380: nop

    after_8:
    // 0x8005F384: b           L_8005F2DC
    // 0x8005F388: lw          $t8, 0x24($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X24);
        goto L_8005F2DC;
    // 0x8005F388: lw          $t8, 0x24($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X24);
L_8005F38C:
    // 0x8005F38C: addiu       $s3, $sp, 0xC4
    ctx->r19 = ADD32(ctx->r29, 0XC4);
    // 0x8005F390: addiu       $s5, $s3, 0xC
    ctx->r21 = ADD32(ctx->r19, 0XC);
L_8005F394:
    // 0x8005F394: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8005F398: jal         0x8001C568
    // 0x8005F39C: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x8005F39C: nop

    after_9:
    // 0x8005F3A0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8005F3A4: sltu        $at, $s3, $s5
    ctx->r1 = ctx->r19 < ctx->r21 ? 1 : 0;
    // 0x8005F3A8: bne         $at, $zero, L_8005F394
    if (ctx->r1 != 0) {
        // 0x8005F3AC: nop
    
            goto L_8005F394;
    }
    // 0x8005F3AC: nop

    // 0x8005F3B0: jal         0x8005CD50
    // 0x8005F3B4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x8005F3B4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_10:
    // 0x8005F3B8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005F3BC: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005F3C0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8005F3C4: nop

    // 0x8005F3C8: addiu       $t8, $t6, -0x1
    ctx->r24 = ADD32(ctx->r14, -0X1);
    // 0x8005F3CC: jal         0x80007AE0
    // 0x8005F3D0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x8005F3D0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_11:
    // 0x8005F3D4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8005F3D8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005F3DC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005F3E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005F3E4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005F3E8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8005F3EC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F3F0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8005F3F4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8005F3F8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8005F3FC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8005F400: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8005F404: jr          $ra
    // 0x8005F408: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x8005F408: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_8005F40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F40C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8005F410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005F414: jal         0x80007774
    // 0x8005F418: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005F418: nop

    after_0:
    // 0x8005F41C: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x8005F420: addiu       $a0, $zero, 0x765
    ctx->r4 = ADD32(0, 0X765);
    // 0x8005F424: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005F428: jal         0x8001D138
    // 0x8005F42C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005F42C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8005F430: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005F434: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005F438: jal         0x80019164
    // 0x8005F43C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005F43C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8005F440: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x8005F444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005F448: jal         0x8001C468
    // 0x8005F44C: addiu       $a1, $zero, 0x7C6
    ctx->r5 = ADD32(0, 0X7C6);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8005F44C: addiu       $a1, $zero, 0x7C6
    ctx->r5 = ADD32(0, 0X7C6);
    after_3:
    // 0x8005F450: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8005F454: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8005F458: jal         0x800192E8
    // 0x8005F45C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8005F45C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8005F460: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8005F464: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x8005F468: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x8005F46C: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x8005F470: jal         0x80019114
    // 0x8005F474: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8005F474: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x8005F478: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8005F47C: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
L_8005F480:
    // 0x8005F480: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x8005F484: nop

    // 0x8005F488: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8005F48C: bne         $t7, $zero, L_8005F4A8
    if (ctx->r15 != 0) {
        // 0x8005F490: nop
    
            goto L_8005F4A8;
    }
    // 0x8005F490: nop

    // 0x8005F494: jal         0x80007AB0
    // 0x8005F498: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x8005F498: nop

    after_6:
    // 0x8005F49C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8005F4A0: bne         $s0, $s1, L_8005F480
    if (ctx->r16 != ctx->r17) {
        // 0x8005F4A4: nop
    
            goto L_8005F480;
    }
    // 0x8005F4A4: nop

L_8005F4A8:
    // 0x8005F4A8: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
    // 0x8005F4AC: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x8005F4B0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8005F4B4:
    // 0x8005F4B4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005F4B8: jal         0x8001C568
    // 0x8005F4BC: nop

    func_8001C568(rdram, ctx);
        goto after_7;
    // 0x8005F4BC: nop

    after_7:
    // 0x8005F4C0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005F4C4: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8005F4C8: bne         $at, $zero, L_8005F4B4
    if (ctx->r1 != 0) {
        // 0x8005F4CC: nop
    
            goto L_8005F4B4;
    }
    // 0x8005F4CC: nop

    // 0x8005F4D0: jal         0x8005CD50
    // 0x8005F4D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_8;
    // 0x8005F4D4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_8:
    // 0x8005F4D8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005F4DC: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005F4E0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8005F4E4: nop

    // 0x8005F4E8: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8005F4EC: jal         0x80007AE0
    // 0x8005F4F0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_9;
    // 0x8005F4F0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_9:
    // 0x8005F4F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005F4F8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x8005F4FC: jr          $ra
    // 0x8005F500: nop

    return;
    // 0x8005F500: nop

;}
RECOMP_FUNC void func_8005F504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F504: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005F508: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8005F50C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005F510: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005F514: lwc1        $f20, 0x6320($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6320);
    // 0x8005F518: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8005F51C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8005F520: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8005F524: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8005F528: jal         0x8005F40C
    // 0x8005F52C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    func_8005F40C(rdram, ctx);
        goto after_0;
    // 0x8005F52C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    after_0:
    // 0x8005F530: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F534: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8005F538: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8005F53C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F540: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8005F544: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8005F548: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8005F54C: jr          $ra
    // 0x8005F550: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005F550: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005F554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F554: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005F558: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8005F55C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005F560: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005F564: lwc1        $f20, 0x6324($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6324);
    // 0x8005F568: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8005F56C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8005F570: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8005F574: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8005F578: jal         0x8005F40C
    // 0x8005F57C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    func_8005F40C(rdram, ctx);
        goto after_0;
    // 0x8005F57C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    after_0:
    // 0x8005F580: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F584: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8005F588: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8005F58C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F590: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8005F594: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8005F598: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8005F59C: jr          $ra
    // 0x8005F5A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005F5A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005F5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F5A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005F5A8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8005F5AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005F5B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005F5B4: lwc1        $f20, 0x6328($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6328);
    // 0x8005F5B8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8005F5BC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8005F5C0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8005F5C4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8005F5C8: jal         0x8005F40C
    // 0x8005F5CC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    func_8005F40C(rdram, ctx);
        goto after_0;
    // 0x8005F5CC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    after_0:
    // 0x8005F5D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F5D4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8005F5D8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8005F5DC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F5E0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8005F5E4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8005F5E8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8005F5EC: jr          $ra
    // 0x8005F5F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005F5F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005F5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F5F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005F5F8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8005F5FC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005F600: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005F604: lwc1        $f20, 0x632C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X632C);
    // 0x8005F608: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8005F60C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8005F610: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8005F614: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8005F618: jal         0x8005F40C
    // 0x8005F61C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    func_8005F40C(rdram, ctx);
        goto after_0;
    // 0x8005F61C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    after_0:
    // 0x8005F620: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F624: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8005F628: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8005F62C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F630: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8005F634: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8005F638: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8005F63C: jr          $ra
    // 0x8005F640: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005F640: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005F644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F644: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005F648: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8005F64C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8005F650: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005F654: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8005F658: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8005F65C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8005F660: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8005F664: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8005F668: jal         0x8005F40C
    // 0x8005F66C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    func_8005F40C(rdram, ctx);
        goto after_0;
    // 0x8005F66C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    after_0:
    // 0x8005F670: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F674: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8005F678: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8005F67C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F680: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8005F684: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8005F688: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8005F68C: jr          $ra
    // 0x8005F690: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8005F690: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8005F694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F694: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8005F698: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005F69C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8005F6A0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8005F6A4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8005F6A8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8005F6AC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005F6B0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005F6B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005F6B8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005F6BC: jal         0x80007774
    // 0x8005F6C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005F6C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8005F6C4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8005F6C8: addiu       $t7, $t7, 0x1F84
    ctx->r15 = ADD32(ctx->r15, 0X1F84);
    // 0x8005F6CC: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x8005F6D0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8005F6D4: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x8005F6D8: addiu       $t6, $sp, 0xAC
    ctx->r14 = ADD32(ctx->r29, 0XAC);
L_8005F6DC:
    // 0x8005F6DC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8005F6E0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8005F6E4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8005F6E8: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8005F6EC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8005F6F0: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8005F6F4: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8005F6F8: bne         $t7, $t9, L_8005F6DC
    if (ctx->r15 != ctx->r25) {
        // 0x8005F6FC: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8005F6DC;
    }
    // 0x8005F6FC: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8005F700: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8005F704: addiu       $t9, $t9, 0x1FA8
    ctx->r25 = ADD32(ctx->r25, 0X1FA8);
    // 0x8005F708: addiu       $t6, $t9, 0x24
    ctx->r14 = ADD32(ctx->r25, 0X24);
    // 0x8005F70C: addiu       $t8, $sp, 0x88
    ctx->r24 = ADD32(ctx->r29, 0X88);
L_8005F710:
    // 0x8005F710: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8005F714: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8005F718: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x8005F71C: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8005F720: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8005F724: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8005F728: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8005F72C: bne         $t9, $t6, L_8005F710
    if (ctx->r25 != ctx->r14) {
        // 0x8005F730: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8005F710;
    }
    // 0x8005F730: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x8005F734: addiu       $s1, $sp, 0xAC
    ctx->r17 = ADD32(ctx->r29, 0XAC);
    // 0x8005F738: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x8005F73C: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
    // 0x8005F740: sw          $a3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r7;
    // 0x8005F744: addiu       $s5, $sp, 0xAC
    ctx->r21 = ADD32(ctx->r29, 0XAC);
L_8005F748:
    // 0x8005F748: lw          $a3, 0xE0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE0);
    // 0x8005F74C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8005F750: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8005F754: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8005F758: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005F75C: addiu       $a0, $zero, 0x765
    ctx->r4 = ADD32(0, 0X765);
    // 0x8005F760: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x8005F764: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x8005F768: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8005F76C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8005F770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005F774: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x8005F778: lwc1        $f10, 0x8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8);
    // 0x8005F77C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005F780: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005F784: jal         0x8001D138
    // 0x8005F788: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005F788: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    after_1:
    // 0x8005F78C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8005F790: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005F794: jal         0x80019164
    // 0x8005F798: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005F798: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8005F79C: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x8005F7A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8005F7A4: jal         0x80019114
    // 0x8005F7A8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x8005F7A8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x8005F7AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005F7B0: jal         0x800191C0
    // 0x8005F7B4: nop

    func_800191C0(rdram, ctx);
        goto after_4;
    // 0x8005F7B4: nop

    after_4:
    // 0x8005F7B8: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x8005F7BC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8005F7C0: bne         $s3, $s5, L_8005F748
    if (ctx->r19 != ctx->r21) {
        // 0x8005F7C4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8005F748;
    }
    // 0x8005F7C4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005F7C8: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8005F7CC: addiu       $s7, $s7, 0x1FD8
    ctx->r23 = ADD32(ctx->r23, 0X1FD8);
    // 0x8005F7D0: addiu       $fp, $zero, 0xFF
    ctx->r30 = ADD32(0, 0XFF);
    // 0x8005F7D4: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
    // 0x8005F7D8: addiu       $s5, $sp, 0xD4
    ctx->r21 = ADD32(ctx->r29, 0XD4);
    // 0x8005F7DC: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
L_8005F7E0:
    // 0x8005F7E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005F7E4: lw          $t6, 0x24($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X24);
    // 0x8005F7E8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8005F7EC: andi        $t9, $t6, 0x4000
    ctx->r25 = ctx->r14 & 0X4000;
    // 0x8005F7F0: bne         $t9, $zero, L_8005F924
    if (ctx->r25 != 0) {
        // 0x8005F7F4: lui         $s2, 0x8009
        ctx->r18 = S32(0X8009 << 16);
            goto L_8005F924;
    }
    // 0x8005F7F4: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x8005F7F8: addiu       $s2, $s2, 0x1FCC
    ctx->r18 = ADD32(ctx->r18, 0X1FCC);
L_8005F7FC:
    // 0x8005F7FC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8005F800: nop

    // 0x8005F804: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8005F808: bne         $at, $zero, L_8005F8EC
    if (ctx->r1 != 0) {
        // 0x8005F80C: nop
    
            goto L_8005F8EC;
    }
    // 0x8005F80C: nop

    // 0x8005F810: bne         $s4, $v0, L_8005F850
    if (ctx->r20 != ctx->r2) {
        // 0x8005F814: addiu       $t8, $v0, 0x1E
        ctx->r24 = ADD32(ctx->r2, 0X1E);
            goto L_8005F850;
    }
    // 0x8005F814: addiu       $t8, $v0, 0x1E
    ctx->r24 = ADD32(ctx->r2, 0X1E);
    // 0x8005F818: addu        $s0, $s5, $s3
    ctx->r16 = ADD32(ctx->r21, ctx->r19);
    // 0x8005F81C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005F820: jal         0x800191D4
    // 0x8005F824: nop

    func_800191D4(rdram, ctx);
        goto after_5;
    // 0x8005F824: nop

    after_5:
    // 0x8005F828: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005F82C: jal         0x8001C468
    // 0x8005F830: addiu       $a1, $zero, 0x7C6
    ctx->r5 = ADD32(0, 0X7C6);
    func_8001C468(rdram, ctx);
        goto after_6;
    // 0x8005F830: addiu       $a1, $zero, 0x7C6
    ctx->r5 = ADD32(0, 0X7C6);
    after_6:
    // 0x8005F834: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005F838: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8005F83C: jal         0x800192E8
    // 0x8005F840: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_7;
    // 0x8005F840: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8005F844: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8005F848: b           L_8005F874
    // 0x8005F84C: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
        goto L_8005F874;
    // 0x8005F84C: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
L_8005F850:
    // 0x8005F850: bne         $s4, $t8, L_8005F874
    if (ctx->r20 != ctx->r24) {
        // 0x8005F854: addiu       $t6, $v0, 0x14
        ctx->r14 = ADD32(ctx->r2, 0X14);
            goto L_8005F874;
    }
    // 0x8005F854: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x8005F858: addu        $t7, $s5, $s3
    ctx->r15 = ADD32(ctx->r21, ctx->r19);
    // 0x8005F85C: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x8005F860: jal         0x800191C0
    // 0x8005F864: nop

    func_800191C0(rdram, ctx);
        goto after_8;
    // 0x8005F864: nop

    after_8:
    // 0x8005F868: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8005F86C: nop

    // 0x8005F870: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
L_8005F874:
    // 0x8005F874: slt         $at, $s4, $t6
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8005F878: bne         $at, $zero, L_8005F8EC
    if (ctx->r1 != 0) {
        // 0x8005F87C: addu        $t9, $s5, $s3
        ctx->r25 = ADD32(ctx->r21, ctx->r19);
            goto L_8005F8EC;
    }
    // 0x8005F87C: addu        $t9, $s5, $s3
    ctx->r25 = ADD32(ctx->r21, ctx->r19);
    // 0x8005F880: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x8005F884: subu        $s1, $v0, $s4
    ctx->r17 = SUB32(ctx->r2, ctx->r20);
    // 0x8005F888: addiu       $s1, $s1, 0x1E
    ctx->r17 = ADD32(ctx->r17, 0X1E);
    // 0x8005F88C: bne         $s1, $s6, L_8005F8A0
    if (ctx->r17 != ctx->r22) {
        // 0x8005F890: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8005F8A0;
    }
    // 0x8005F890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005F894: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005F898: jal         0x80018658
    // 0x8005F89C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_9;
    // 0x8005F89C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
L_8005F8A0:
    // 0x8005F8A0: multu       $s1, $fp
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005F8A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005F8A8: mflo        $t8
    ctx->r24 = lo;
    // 0x8005F8AC: nop

    // 0x8005F8B0: nop

    // 0x8005F8B4: div         $zero, $t8, $s6
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r22)));
    // 0x8005F8B8: bne         $s6, $zero, L_8005F8C4
    if (ctx->r22 != 0) {
        // 0x8005F8BC: nop
    
            goto L_8005F8C4;
    }
    // 0x8005F8BC: nop

    // 0x8005F8C0: break       7
    do_break(2147875008);
L_8005F8C4:
    // 0x8005F8C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005F8C8: bne         $s6, $at, L_8005F8DC
    if (ctx->r22 != ctx->r1) {
        // 0x8005F8CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005F8DC;
    }
    // 0x8005F8CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005F8D0: bne         $t8, $at, L_8005F8DC
    if (ctx->r24 != ctx->r1) {
        // 0x8005F8D4: nop
    
            goto L_8005F8DC;
    }
    // 0x8005F8D4: nop

    // 0x8005F8D8: break       6
    do_break(2147875032);
L_8005F8DC:
    // 0x8005F8DC: mflo        $a1
    ctx->r5 = lo;
    // 0x8005F8E0: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8005F8E4: jal         0x80018604
    // 0x8005F8E8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80018604(rdram, ctx);
        goto after_10;
    // 0x8005F8E8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_10:
L_8005F8EC:
    // 0x8005F8EC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8005F8F0: bne         $s2, $s7, L_8005F7FC
    if (ctx->r18 != ctx->r23) {
        // 0x8005F8F4: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_8005F7FC;
    }
    // 0x8005F8F4: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8005F8F8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005F8FC: lw          $t6, 0x1FD4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1FD4);
    // 0x8005F900: nop

    // 0x8005F904: addiu       $t9, $t6, 0x1E
    ctx->r25 = ADD32(ctx->r14, 0X1E);
    // 0x8005F908: slt         $v0, $t9, $s4
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8005F90C: bne         $v0, $zero, L_8005F924
    if (ctx->r2 != 0) {
        // 0x8005F910: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8005F924;
    }
    // 0x8005F910: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8005F914: jal         0x80007AB0
    // 0x8005F918: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x8005F918: nop

    after_11:
    // 0x8005F91C: b           L_8005F7E0
    // 0x8005F920: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
        goto L_8005F7E0;
    // 0x8005F920: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
L_8005F924:
    // 0x8005F924: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x8005F928: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_8005F92C:
    // 0x8005F92C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005F930: jal         0x8001C568
    // 0x8005F934: nop

    func_8001C568(rdram, ctx);
        goto after_12;
    // 0x8005F934: nop

    after_12:
    // 0x8005F938: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005F93C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8005F940: bne         $at, $zero, L_8005F92C
    if (ctx->r1 != 0) {
        // 0x8005F944: nop
    
            goto L_8005F92C;
    }
    // 0x8005F944: nop

    // 0x8005F948: lw          $a0, 0xE0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE0);
    // 0x8005F94C: jal         0x8005CD50
    // 0x8005F950: nop

    func_8005CD50(rdram, ctx);
        goto after_13;
    // 0x8005F950: nop

    after_13:
    // 0x8005F954: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005F958: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005F95C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8005F960: nop

    // 0x8005F964: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8005F968: jal         0x80007AE0
    // 0x8005F96C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_14;
    // 0x8005F96C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_14:
    // 0x8005F970: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005F974: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005F978: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005F97C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005F980: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005F984: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005F988: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8005F98C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8005F990: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8005F994: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8005F998: jr          $ra
    // 0x8005F99C: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8005F99C: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_8005F9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F9A0: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8005F9A4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005F9A8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8005F9AC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8005F9B0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8005F9B4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8005F9B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005F9BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005F9C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005F9C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005F9C8: jal         0x80007774
    // 0x8005F9CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005F9CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8005F9D0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8005F9D4: addiu       $t7, $t7, 0x1FD8
    ctx->r15 = ADD32(ctx->r15, 0X1FD8);
    // 0x8005F9D8: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x8005F9DC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8005F9E0: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x8005F9E4: addiu       $t6, $sp, 0xAC
    ctx->r14 = ADD32(ctx->r29, 0XAC);
L_8005F9E8:
    // 0x8005F9E8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8005F9EC: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8005F9F0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8005F9F4: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8005F9F8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8005F9FC: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8005FA00: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8005FA04: bne         $t7, $t9, L_8005F9E8
    if (ctx->r15 != ctx->r25) {
        // 0x8005FA08: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8005F9E8;
    }
    // 0x8005FA08: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8005FA0C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8005FA10: addiu       $t9, $t9, 0x1FFC
    ctx->r25 = ADD32(ctx->r25, 0X1FFC);
    // 0x8005FA14: addiu       $t6, $t9, 0x24
    ctx->r14 = ADD32(ctx->r25, 0X24);
    // 0x8005FA18: addiu       $t8, $sp, 0x88
    ctx->r24 = ADD32(ctx->r29, 0X88);
L_8005FA1C:
    // 0x8005FA1C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8005FA20: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8005FA24: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x8005FA28: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8005FA2C: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8005FA30: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8005FA34: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8005FA38: bne         $t9, $t6, L_8005FA1C
    if (ctx->r25 != ctx->r14) {
        // 0x8005FA3C: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8005FA1C;
    }
    // 0x8005FA3C: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x8005FA40: addiu       $s1, $sp, 0xAC
    ctx->r17 = ADD32(ctx->r29, 0XAC);
    // 0x8005FA44: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x8005FA48: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
    // 0x8005FA4C: sw          $a3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r7;
    // 0x8005FA50: addiu       $s5, $sp, 0xAC
    ctx->r21 = ADD32(ctx->r29, 0XAC);
L_8005FA54:
    // 0x8005FA54: lw          $a3, 0xE0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE0);
    // 0x8005FA58: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8005FA5C: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8005FA60: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8005FA64: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005FA68: addiu       $a0, $zero, 0x765
    ctx->r4 = ADD32(0, 0X765);
    // 0x8005FA6C: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x8005FA70: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x8005FA74: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8005FA78: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8005FA7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005FA80: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x8005FA84: lwc1        $f10, 0x8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8);
    // 0x8005FA88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005FA8C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005FA90: jal         0x8001D138
    // 0x8005FA94: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005FA94: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    after_1:
    // 0x8005FA98: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8005FA9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005FAA0: jal         0x80019164
    // 0x8005FAA4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005FAA4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8005FAA8: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x8005FAAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8005FAB0: jal         0x80019114
    // 0x8005FAB4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x8005FAB4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x8005FAB8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005FABC: jal         0x800191C0
    // 0x8005FAC0: nop

    func_800191C0(rdram, ctx);
        goto after_4;
    // 0x8005FAC0: nop

    after_4:
    // 0x8005FAC4: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x8005FAC8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8005FACC: bne         $s3, $s5, L_8005FA54
    if (ctx->r19 != ctx->r21) {
        // 0x8005FAD0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8005FA54;
    }
    // 0x8005FAD0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005FAD4: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8005FAD8: addiu       $s7, $s7, 0x202C
    ctx->r23 = ADD32(ctx->r23, 0X202C);
    // 0x8005FADC: addiu       $fp, $zero, 0xFF
    ctx->r30 = ADD32(0, 0XFF);
    // 0x8005FAE0: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
    // 0x8005FAE4: addiu       $s5, $sp, 0xD4
    ctx->r21 = ADD32(ctx->r29, 0XD4);
    // 0x8005FAE8: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
L_8005FAEC:
    // 0x8005FAEC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005FAF0: lw          $t6, 0x24($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X24);
    // 0x8005FAF4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8005FAF8: andi        $t9, $t6, 0x4000
    ctx->r25 = ctx->r14 & 0X4000;
    // 0x8005FAFC: bne         $t9, $zero, L_8005FC30
    if (ctx->r25 != 0) {
        // 0x8005FB00: lui         $s2, 0x8009
        ctx->r18 = S32(0X8009 << 16);
            goto L_8005FC30;
    }
    // 0x8005FB00: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x8005FB04: addiu       $s2, $s2, 0x2020
    ctx->r18 = ADD32(ctx->r18, 0X2020);
L_8005FB08:
    // 0x8005FB08: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8005FB0C: nop

    // 0x8005FB10: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8005FB14: bne         $at, $zero, L_8005FBF8
    if (ctx->r1 != 0) {
        // 0x8005FB18: nop
    
            goto L_8005FBF8;
    }
    // 0x8005FB18: nop

    // 0x8005FB1C: bne         $s4, $v0, L_8005FB5C
    if (ctx->r20 != ctx->r2) {
        // 0x8005FB20: addiu       $t8, $v0, 0x1E
        ctx->r24 = ADD32(ctx->r2, 0X1E);
            goto L_8005FB5C;
    }
    // 0x8005FB20: addiu       $t8, $v0, 0x1E
    ctx->r24 = ADD32(ctx->r2, 0X1E);
    // 0x8005FB24: addu        $s0, $s5, $s3
    ctx->r16 = ADD32(ctx->r21, ctx->r19);
    // 0x8005FB28: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005FB2C: jal         0x800191D4
    // 0x8005FB30: nop

    func_800191D4(rdram, ctx);
        goto after_5;
    // 0x8005FB30: nop

    after_5:
    // 0x8005FB34: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005FB38: jal         0x8001C468
    // 0x8005FB3C: addiu       $a1, $zero, 0x7C6
    ctx->r5 = ADD32(0, 0X7C6);
    func_8001C468(rdram, ctx);
        goto after_6;
    // 0x8005FB3C: addiu       $a1, $zero, 0x7C6
    ctx->r5 = ADD32(0, 0X7C6);
    after_6:
    // 0x8005FB40: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005FB44: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8005FB48: jal         0x800192E8
    // 0x8005FB4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_7;
    // 0x8005FB4C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8005FB50: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8005FB54: b           L_8005FB80
    // 0x8005FB58: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
        goto L_8005FB80;
    // 0x8005FB58: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
L_8005FB5C:
    // 0x8005FB5C: bne         $s4, $t8, L_8005FB80
    if (ctx->r20 != ctx->r24) {
        // 0x8005FB60: addiu       $t6, $v0, 0x14
        ctx->r14 = ADD32(ctx->r2, 0X14);
            goto L_8005FB80;
    }
    // 0x8005FB60: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x8005FB64: addu        $t7, $s5, $s3
    ctx->r15 = ADD32(ctx->r21, ctx->r19);
    // 0x8005FB68: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x8005FB6C: jal         0x800191C0
    // 0x8005FB70: nop

    func_800191C0(rdram, ctx);
        goto after_8;
    // 0x8005FB70: nop

    after_8:
    // 0x8005FB74: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8005FB78: nop

    // 0x8005FB7C: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
L_8005FB80:
    // 0x8005FB80: slt         $at, $s4, $t6
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8005FB84: bne         $at, $zero, L_8005FBF8
    if (ctx->r1 != 0) {
        // 0x8005FB88: addu        $t9, $s5, $s3
        ctx->r25 = ADD32(ctx->r21, ctx->r19);
            goto L_8005FBF8;
    }
    // 0x8005FB88: addu        $t9, $s5, $s3
    ctx->r25 = ADD32(ctx->r21, ctx->r19);
    // 0x8005FB8C: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x8005FB90: subu        $s1, $v0, $s4
    ctx->r17 = SUB32(ctx->r2, ctx->r20);
    // 0x8005FB94: addiu       $s1, $s1, 0x1E
    ctx->r17 = ADD32(ctx->r17, 0X1E);
    // 0x8005FB98: bne         $s1, $s6, L_8005FBAC
    if (ctx->r17 != ctx->r22) {
        // 0x8005FB9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8005FBAC;
    }
    // 0x8005FB9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005FBA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005FBA4: jal         0x80018658
    // 0x8005FBA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_9;
    // 0x8005FBA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
L_8005FBAC:
    // 0x8005FBAC: multu       $s1, $fp
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005FBB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005FBB4: mflo        $t8
    ctx->r24 = lo;
    // 0x8005FBB8: nop

    // 0x8005FBBC: nop

    // 0x8005FBC0: div         $zero, $t8, $s6
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r22)));
    // 0x8005FBC4: bne         $s6, $zero, L_8005FBD0
    if (ctx->r22 != 0) {
        // 0x8005FBC8: nop
    
            goto L_8005FBD0;
    }
    // 0x8005FBC8: nop

    // 0x8005FBCC: break       7
    do_break(2147875788);
L_8005FBD0:
    // 0x8005FBD0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005FBD4: bne         $s6, $at, L_8005FBE8
    if (ctx->r22 != ctx->r1) {
        // 0x8005FBD8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005FBE8;
    }
    // 0x8005FBD8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005FBDC: bne         $t8, $at, L_8005FBE8
    if (ctx->r24 != ctx->r1) {
        // 0x8005FBE0: nop
    
            goto L_8005FBE8;
    }
    // 0x8005FBE0: nop

    // 0x8005FBE4: break       6
    do_break(2147875812);
L_8005FBE8:
    // 0x8005FBE8: mflo        $a1
    ctx->r5 = lo;
    // 0x8005FBEC: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8005FBF0: jal         0x80018604
    // 0x8005FBF4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80018604(rdram, ctx);
        goto after_10;
    // 0x8005FBF4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_10:
L_8005FBF8:
    // 0x8005FBF8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8005FBFC: bne         $s2, $s7, L_8005FB08
    if (ctx->r18 != ctx->r23) {
        // 0x8005FC00: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_8005FB08;
    }
    // 0x8005FC00: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8005FC04: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005FC08: lw          $t6, 0x2028($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2028);
    // 0x8005FC0C: nop

    // 0x8005FC10: addiu       $t9, $t6, 0x1E
    ctx->r25 = ADD32(ctx->r14, 0X1E);
    // 0x8005FC14: slt         $v0, $t9, $s4
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8005FC18: bne         $v0, $zero, L_8005FC30
    if (ctx->r2 != 0) {
        // 0x8005FC1C: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8005FC30;
    }
    // 0x8005FC1C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8005FC20: jal         0x80007AB0
    // 0x8005FC24: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x8005FC24: nop

    after_11:
    // 0x8005FC28: b           L_8005FAEC
    // 0x8005FC2C: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
        goto L_8005FAEC;
    // 0x8005FC2C: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
L_8005FC30:
    // 0x8005FC30: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x8005FC34: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_8005FC38:
    // 0x8005FC38: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005FC3C: jal         0x8001C568
    // 0x8005FC40: nop

    func_8001C568(rdram, ctx);
        goto after_12;
    // 0x8005FC40: nop

    after_12:
    // 0x8005FC44: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005FC48: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8005FC4C: bne         $at, $zero, L_8005FC38
    if (ctx->r1 != 0) {
        // 0x8005FC50: nop
    
            goto L_8005FC38;
    }
    // 0x8005FC50: nop

    // 0x8005FC54: lw          $a0, 0xE0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE0);
    // 0x8005FC58: jal         0x8005CD50
    // 0x8005FC5C: nop

    func_8005CD50(rdram, ctx);
        goto after_13;
    // 0x8005FC5C: nop

    after_13:
    // 0x8005FC60: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005FC64: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005FC68: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8005FC6C: nop

    // 0x8005FC70: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8005FC74: jal         0x80007AE0
    // 0x8005FC78: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_14;
    // 0x8005FC78: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_14:
    // 0x8005FC7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005FC80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005FC84: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005FC88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005FC8C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005FC90: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005FC94: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8005FC98: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8005FC9C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8005FCA0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8005FCA4: jr          $ra
    // 0x8005FCA8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8005FCA8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_8005FCAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FCAC: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8005FCB0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005FCB4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8005FCB8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8005FCBC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8005FCC0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8005FCC4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005FCC8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005FCCC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005FCD0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005FCD4: jal         0x80007774
    // 0x8005FCD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005FCD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8005FCDC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8005FCE0: addiu       $t7, $t7, 0x202C
    ctx->r15 = ADD32(ctx->r15, 0X202C);
    // 0x8005FCE4: lw          $a3, 0x1C($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X1C);
    // 0x8005FCE8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8005FCEC: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x8005FCF0: addiu       $t6, $sp, 0xAC
    ctx->r14 = ADD32(ctx->r29, 0XAC);
L_8005FCF4:
    // 0x8005FCF4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8005FCF8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8005FCFC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8005FD00: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8005FD04: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8005FD08: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8005FD0C: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8005FD10: bne         $t7, $t9, L_8005FCF4
    if (ctx->r15 != ctx->r25) {
        // 0x8005FD14: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8005FCF4;
    }
    // 0x8005FD14: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8005FD18: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8005FD1C: addiu       $t9, $t9, 0x2050
    ctx->r25 = ADD32(ctx->r25, 0X2050);
    // 0x8005FD20: addiu       $t6, $t9, 0x24
    ctx->r14 = ADD32(ctx->r25, 0X24);
    // 0x8005FD24: addiu       $t8, $sp, 0x88
    ctx->r24 = ADD32(ctx->r29, 0X88);
L_8005FD28:
    // 0x8005FD28: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8005FD2C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x8005FD30: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x8005FD34: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x8005FD38: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8005FD3C: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x8005FD40: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x8005FD44: bne         $t9, $t6, L_8005FD28
    if (ctx->r25 != ctx->r14) {
        // 0x8005FD48: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_8005FD28;
    }
    // 0x8005FD48: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x8005FD4C: addiu       $s1, $sp, 0xAC
    ctx->r17 = ADD32(ctx->r29, 0XAC);
    // 0x8005FD50: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x8005FD54: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
    // 0x8005FD58: sw          $a3, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r7;
    // 0x8005FD5C: addiu       $s5, $sp, 0xAC
    ctx->r21 = ADD32(ctx->r29, 0XAC);
L_8005FD60:
    // 0x8005FD60: lw          $a3, 0xE0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XE0);
    // 0x8005FD64: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8005FD68: lwc1        $f6, 0x0($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8005FD6C: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8005FD70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005FD74: addiu       $a0, $zero, 0x765
    ctx->r4 = ADD32(0, 0X765);
    // 0x8005FD78: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x8005FD7C: lwc1        $f4, 0x4($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X4);
    // 0x8005FD80: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8005FD84: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8005FD88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005FD8C: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x8005FD90: lwc1        $f10, 0x8($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X8);
    // 0x8005FD94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8005FD98: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8005FD9C: jal         0x8001D138
    // 0x8005FDA0: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005FDA0: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    after_1:
    // 0x8005FDA4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8005FDA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005FDAC: jal         0x80019164
    // 0x8005FDB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005FDB0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8005FDB4: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x8005FDB8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8005FDBC: jal         0x80019114
    // 0x8005FDC0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x8005FDC0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x8005FDC4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005FDC8: jal         0x800191C0
    // 0x8005FDCC: nop

    func_800191C0(rdram, ctx);
        goto after_4;
    // 0x8005FDCC: nop

    after_4:
    // 0x8005FDD0: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x8005FDD4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8005FDD8: bne         $s3, $s5, L_8005FD60
    if (ctx->r19 != ctx->r21) {
        // 0x8005FDDC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8005FD60;
    }
    // 0x8005FDDC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005FDE0: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x8005FDE4: addiu       $s7, $s7, 0x2080
    ctx->r23 = ADD32(ctx->r23, 0X2080);
    // 0x8005FDE8: addiu       $fp, $zero, 0xFF
    ctx->r30 = ADD32(0, 0XFF);
    // 0x8005FDEC: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
    // 0x8005FDF0: addiu       $s5, $sp, 0xD4
    ctx->r21 = ADD32(ctx->r29, 0XD4);
    // 0x8005FDF4: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
L_8005FDF8:
    // 0x8005FDF8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8005FDFC: lw          $t6, 0x24($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X24);
    // 0x8005FE00: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8005FE04: andi        $t9, $t6, 0x4000
    ctx->r25 = ctx->r14 & 0X4000;
    // 0x8005FE08: bne         $t9, $zero, L_8005FF3C
    if (ctx->r25 != 0) {
        // 0x8005FE0C: lui         $s2, 0x8009
        ctx->r18 = S32(0X8009 << 16);
            goto L_8005FF3C;
    }
    // 0x8005FE0C: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x8005FE10: addiu       $s2, $s2, 0x2074
    ctx->r18 = ADD32(ctx->r18, 0X2074);
L_8005FE14:
    // 0x8005FE14: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8005FE18: nop

    // 0x8005FE1C: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8005FE20: bne         $at, $zero, L_8005FF04
    if (ctx->r1 != 0) {
        // 0x8005FE24: nop
    
            goto L_8005FF04;
    }
    // 0x8005FE24: nop

    // 0x8005FE28: bne         $s4, $v0, L_8005FE68
    if (ctx->r20 != ctx->r2) {
        // 0x8005FE2C: addiu       $t8, $v0, 0x1E
        ctx->r24 = ADD32(ctx->r2, 0X1E);
            goto L_8005FE68;
    }
    // 0x8005FE2C: addiu       $t8, $v0, 0x1E
    ctx->r24 = ADD32(ctx->r2, 0X1E);
    // 0x8005FE30: addu        $s0, $s5, $s3
    ctx->r16 = ADD32(ctx->r21, ctx->r19);
    // 0x8005FE34: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005FE38: jal         0x800191D4
    // 0x8005FE3C: nop

    func_800191D4(rdram, ctx);
        goto after_5;
    // 0x8005FE3C: nop

    after_5:
    // 0x8005FE40: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005FE44: jal         0x8001C468
    // 0x8005FE48: addiu       $a1, $zero, 0x7C6
    ctx->r5 = ADD32(0, 0X7C6);
    func_8001C468(rdram, ctx);
        goto after_6;
    // 0x8005FE48: addiu       $a1, $zero, 0x7C6
    ctx->r5 = ADD32(0, 0X7C6);
    after_6:
    // 0x8005FE4C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005FE50: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8005FE54: jal         0x800192E8
    // 0x8005FE58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_7;
    // 0x8005FE58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8005FE5C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8005FE60: b           L_8005FE8C
    // 0x8005FE64: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
        goto L_8005FE8C;
    // 0x8005FE64: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
L_8005FE68:
    // 0x8005FE68: bne         $s4, $t8, L_8005FE8C
    if (ctx->r20 != ctx->r24) {
        // 0x8005FE6C: addiu       $t6, $v0, 0x14
        ctx->r14 = ADD32(ctx->r2, 0X14);
            goto L_8005FE8C;
    }
    // 0x8005FE6C: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x8005FE70: addu        $t7, $s5, $s3
    ctx->r15 = ADD32(ctx->r21, ctx->r19);
    // 0x8005FE74: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x8005FE78: jal         0x800191C0
    // 0x8005FE7C: nop

    func_800191C0(rdram, ctx);
        goto after_8;
    // 0x8005FE7C: nop

    after_8:
    // 0x8005FE80: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8005FE84: nop

    // 0x8005FE88: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
L_8005FE8C:
    // 0x8005FE8C: slt         $at, $s4, $t6
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8005FE90: bne         $at, $zero, L_8005FF04
    if (ctx->r1 != 0) {
        // 0x8005FE94: addu        $t9, $s5, $s3
        ctx->r25 = ADD32(ctx->r21, ctx->r19);
            goto L_8005FF04;
    }
    // 0x8005FE94: addu        $t9, $s5, $s3
    ctx->r25 = ADD32(ctx->r21, ctx->r19);
    // 0x8005FE98: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x8005FE9C: subu        $s1, $v0, $s4
    ctx->r17 = SUB32(ctx->r2, ctx->r20);
    // 0x8005FEA0: addiu       $s1, $s1, 0x1E
    ctx->r17 = ADD32(ctx->r17, 0X1E);
    // 0x8005FEA4: bne         $s1, $s6, L_8005FEB8
    if (ctx->r17 != ctx->r22) {
        // 0x8005FEA8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8005FEB8;
    }
    // 0x8005FEA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005FEAC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005FEB0: jal         0x80018658
    // 0x8005FEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_9;
    // 0x8005FEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
L_8005FEB8:
    // 0x8005FEB8: multu       $s1, $fp
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005FEBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005FEC0: mflo        $t8
    ctx->r24 = lo;
    // 0x8005FEC4: nop

    // 0x8005FEC8: nop

    // 0x8005FECC: div         $zero, $t8, $s6
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r22)));
    // 0x8005FED0: bne         $s6, $zero, L_8005FEDC
    if (ctx->r22 != 0) {
        // 0x8005FED4: nop
    
            goto L_8005FEDC;
    }
    // 0x8005FED4: nop

    // 0x8005FED8: break       7
    do_break(2147876568);
L_8005FEDC:
    // 0x8005FEDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005FEE0: bne         $s6, $at, L_8005FEF4
    if (ctx->r22 != ctx->r1) {
        // 0x8005FEE4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005FEF4;
    }
    // 0x8005FEE4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8005FEE8: bne         $t8, $at, L_8005FEF4
    if (ctx->r24 != ctx->r1) {
        // 0x8005FEEC: nop
    
            goto L_8005FEF4;
    }
    // 0x8005FEEC: nop

    // 0x8005FEF0: break       6
    do_break(2147876592);
L_8005FEF4:
    // 0x8005FEF4: mflo        $a1
    ctx->r5 = lo;
    // 0x8005FEF8: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8005FEFC: jal         0x80018604
    // 0x8005FF00: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80018604(rdram, ctx);
        goto after_10;
    // 0x8005FF00: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_10:
L_8005FF04:
    // 0x8005FF04: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8005FF08: bne         $s2, $s7, L_8005FE14
    if (ctx->r18 != ctx->r23) {
        // 0x8005FF0C: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_8005FE14;
    }
    // 0x8005FF0C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8005FF10: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005FF14: lw          $t6, 0x207C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X207C);
    // 0x8005FF18: nop

    // 0x8005FF1C: addiu       $t9, $t6, 0x1E
    ctx->r25 = ADD32(ctx->r14, 0X1E);
    // 0x8005FF20: slt         $v0, $t9, $s4
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8005FF24: bne         $v0, $zero, L_8005FF3C
    if (ctx->r2 != 0) {
        // 0x8005FF28: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8005FF3C;
    }
    // 0x8005FF28: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8005FF2C: jal         0x80007AB0
    // 0x8005FF30: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x8005FF30: nop

    after_11:
    // 0x8005FF34: b           L_8005FDF8
    // 0x8005FF38: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
        goto L_8005FDF8;
    // 0x8005FF38: lw          $t7, 0xE0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XE0);
L_8005FF3C:
    // 0x8005FF3C: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x8005FF40: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_8005FF44:
    // 0x8005FF44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8005FF48: jal         0x8001C568
    // 0x8005FF4C: nop

    func_8001C568(rdram, ctx);
        goto after_12;
    // 0x8005FF4C: nop

    after_12:
    // 0x8005FF50: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8005FF54: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8005FF58: bne         $at, $zero, L_8005FF44
    if (ctx->r1 != 0) {
        // 0x8005FF5C: nop
    
            goto L_8005FF44;
    }
    // 0x8005FF5C: nop

    // 0x8005FF60: lw          $a0, 0xE0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE0);
    // 0x8005FF64: jal         0x8005CD50
    // 0x8005FF68: nop

    func_8005CD50(rdram, ctx);
        goto after_13;
    // 0x8005FF68: nop

    after_13:
    // 0x8005FF6C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005FF70: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8005FF74: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8005FF78: nop

    // 0x8005FF7C: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8005FF80: jal         0x80007AE0
    // 0x8005FF84: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_14;
    // 0x8005FF84: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_14:
    // 0x8005FF88: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005FF8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005FF90: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005FF94: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005FF98: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005FF9C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005FFA0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8005FFA4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8005FFA8: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8005FFAC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8005FFB0: jr          $ra
    // 0x8005FFB4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8005FFB4: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_8005FFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005FFB8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8005FFBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005FFC0: jal         0x80007774
    // 0x8005FFC4: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8005FFC4: nop

    after_0:
    // 0x8005FFC8: lw          $s6, 0x1C($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X1C);
    // 0x8005FFCC: addiu       $a0, $zero, 0x760
    ctx->r4 = ADD32(0, 0X760);
    // 0x8005FFD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8005FFD4: jal         0x8001D138
    // 0x8005FFD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8005FFD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8005FFDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005FFE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005FFE4: jal         0x80019164
    // 0x8005FFE8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8005FFE8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_2:
    // 0x8005FFEC: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x8005FFF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005FFF4: jal         0x8001C468
    // 0x8005FFF8: addiu       $a1, $zero, 0x7C3
    ctx->r5 = ADD32(0, 0X7C3);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8005FFF8: addiu       $a1, $zero, 0x7C3
    ctx->r5 = ADD32(0, 0X7C3);
    after_3:
    // 0x8005FFFC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80060000: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80060004: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80060008: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8006000C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80060010: jal         0x80019114
    // 0x80060014: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x80060014: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80060018: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8006001C: addiu       $s5, $zero, 0xF
    ctx->r21 = ADD32(0, 0XF);
L_80060020:
    // 0x80060020: lw          $t6, 0x24($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X24);
    // 0x80060024: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x80060028: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8006002C: bne         $t7, $zero, L_80060050
    if (ctx->r15 != 0) {
        // 0x80060030: or          $s2, $s4, $zero
        ctx->r18 = ctx->r20 | 0;
            goto L_80060050;
    }
    // 0x80060030: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x80060034: jal         0x8005D528
    // 0x80060038: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    func_8005D528(rdram, ctx);
        goto after_5;
    // 0x80060038: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    after_5:
    // 0x8006003C: jal         0x80007AB0
    // 0x80060040: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x80060040: nop

    after_6:
    // 0x80060044: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80060048: bne         $s4, $s5, L_80060020
    if (ctx->r20 != ctx->r21) {
        // 0x8006004C: nop
    
            goto L_80060020;
    }
    // 0x8006004C: nop

L_80060050:
    // 0x80060050: addiu       $s0, $sp, 0x5C
    ctx->r16 = ADD32(ctx->r29, 0X5C);
    // 0x80060054: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x80060058: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8006005C:
    // 0x8006005C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80060060: jal         0x8001C568
    // 0x80060064: nop

    func_8001C568(rdram, ctx);
        goto after_7;
    // 0x80060064: nop

    after_7:
    // 0x80060068: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006006C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80060070: bne         $at, $zero, L_8006005C
    if (ctx->r1 != 0) {
        // 0x80060074: nop
    
            goto L_8006005C;
    }
    // 0x80060074: nop

    // 0x80060078: jal         0x8005CD50
    // 0x8006007C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8005CD50(rdram, ctx);
        goto after_8;
    // 0x8006007C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_8:
    // 0x80060080: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80060084: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80060088: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8006008C: nop

    // 0x80060090: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80060094: jal         0x80007AE0
    // 0x80060098: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_9;
    // 0x80060098: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_9:
    // 0x8006009C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800600A0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x800600A4: jr          $ra
    // 0x800600A8: nop

    return;
    // 0x800600A8: nop

;}
RECOMP_FUNC void func_800600AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800600AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800600B0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800600B4: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x800600B8: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x800600BC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800600C0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800600C4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800600C8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800600CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800600D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800600D4: jal         0x8005FFB8
    // 0x800600D8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    func_8005FFB8(rdram, ctx);
        goto after_0;
    // 0x800600D8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    after_0:
    // 0x800600DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800600E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800600E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800600E8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800600EC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800600F0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800600F4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800600F8: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800600FC: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80060100: jr          $ra
    // 0x80060104: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80060104: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80060108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060108: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006010C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80060110: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80060114: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80060118: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8006011C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80060120: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80060124: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80060128: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006012C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80060130: jal         0x8005FFB8
    // 0x80060134: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    func_8005FFB8(rdram, ctx);
        goto after_0;
    // 0x80060134: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    after_0:
    // 0x80060138: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006013C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80060140: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80060144: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80060148: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006014C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80060150: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80060154: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80060158: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8006015C: jr          $ra
    // 0x80060160: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80060160: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80060164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060164: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80060168: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006016C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80060170: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80060174: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80060178: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8006017C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80060180: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80060184: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80060188: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8006018C: jal         0x8005FFB8
    // 0x80060190: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    func_8005FFB8(rdram, ctx);
        goto after_0;
    // 0x80060190: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    after_0:
    // 0x80060194: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80060198: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006019C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800601A0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800601A4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800601A8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800601AC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800601B0: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x800601B4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x800601B8: jr          $ra
    // 0x800601BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800601BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800601C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800601C0: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x800601C4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800601C8: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800601CC: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x800601D0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800601D4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800601D8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800601DC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800601E0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800601E4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800601E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800601EC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800601F0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800601F4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800601F8: jal         0x80007774
    // 0x800601FC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800601FC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80060200: lw          $fp, 0x1C($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X1C);
    // 0x80060204: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80060208: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8006020C: addiu       $s3, $sp, 0xB8
    ctx->r19 = ADD32(ctx->r29, 0XB8);
    // 0x80060210: addiu       $s7, $sp, 0x74
    ctx->r23 = ADD32(ctx->r29, 0X74);
    // 0x80060214: addiu       $s5, $sp, 0xA8
    ctx->r21 = ADD32(ctx->r29, 0XA8);
    // 0x80060218: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_8006021C:
    // 0x8006021C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80060220: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x80060224: jal         0x8005D378
    // 0x80060228: or          $s1, $fp, $zero
    ctx->r17 = ctx->r30 | 0;
    func_8005D378(rdram, ctx);
        goto after_1;
    // 0x80060228: or          $s1, $fp, $zero
    ctx->r17 = ctx->r30 | 0;
    after_1:
    // 0x8006022C: addiu       $a0, $zero, 0x760
    ctx->r4 = ADD32(0, 0X760);
    // 0x80060230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80060234: jal         0x8001D138
    // 0x80060238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_2;
    // 0x80060238: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8006023C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80060240: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80060244: jal         0x80019164
    // 0x80060248: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x80060248: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x8006024C: sw          $s4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r20;
    // 0x80060250: swc1        $f22, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f22.u32l;
    // 0x80060254: swc1        $f22, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f22.u32l;
    // 0x80060258: swc1        $f22, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f22.u32l;
    // 0x8006025C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80060260: jal         0x80019114
    // 0x80060264: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x80060264: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x80060268: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8006026C: jal         0x800191C0
    // 0x80060270: nop

    func_800191C0(rdram, ctx);
        goto after_5;
    // 0x80060270: nop

    after_5:
    // 0x80060274: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80060278: addiu       $t6, $sp, 0xC0
    ctx->r14 = ADD32(ctx->r29, 0XC0);
    // 0x8006027C: bne         $s3, $t6, L_8006021C
    if (ctx->r19 != ctx->r14) {
        // 0x80060280: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_8006021C;
    }
    // 0x80060280: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80060284: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x80060288: addiu       $s7, $s7, 0x2088
    ctx->r23 = ADD32(ctx->r23, 0X2088);
    // 0x8006028C: lw          $t7, 0x24($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X24);
L_80060290:
    // 0x80060290: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80060294: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x80060298: bne         $t8, $zero, L_80060358
    if (ctx->r24 != 0) {
        // 0x8006029C: lui         $s4, 0x8009
        ctx->r20 = S32(0X8009 << 16);
            goto L_80060358;
    }
    // 0x8006029C: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x800602A0: addiu       $s4, $s4, 0x2080
    ctx->r20 = ADD32(ctx->r20, 0X2080);
L_800602A4:
    // 0x800602A4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x800602A8: addiu       $t9, $sp, 0xB8
    ctx->r25 = ADD32(ctx->r29, 0XB8);
    // 0x800602AC: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800602B0: bne         $at, $zero, L_80060320
    if (ctx->r1 != 0) {
        // 0x800602B4: nop
    
            goto L_80060320;
    }
    // 0x800602B4: nop

    // 0x800602B8: bne         $s6, $v0, L_800602F4
    if (ctx->r22 != ctx->r2) {
        // 0x800602BC: addu        $s3, $s5, $t9
        ctx->r19 = ADD32(ctx->r21, ctx->r25);
            goto L_800602F4;
    }
    // 0x800602BC: addu        $s3, $s5, $t9
    ctx->r19 = ADD32(ctx->r21, ctx->r25);
    // 0x800602C0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800602C4: jal         0x800191D4
    // 0x800602C8: nop

    func_800191D4(rdram, ctx);
        goto after_6;
    // 0x800602C8: nop

    after_6:
    // 0x800602CC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800602D0: jal         0x8001C468
    // 0x800602D4: addiu       $a1, $zero, 0x7C3
    ctx->r5 = ADD32(0, 0X7C3);
    func_8001C468(rdram, ctx);
        goto after_7;
    // 0x800602D4: addiu       $a1, $zero, 0x7C3
    ctx->r5 = ADD32(0, 0X7C3);
    after_7:
    // 0x800602D8: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x800602DC: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x800602E0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x800602E4: jal         0x8005D528
    // 0x800602E8: subu        $s2, $s6, $t6
    ctx->r18 = SUB32(ctx->r22, ctx->r14);
    func_8005D528(rdram, ctx);
        goto after_8;
    // 0x800602E8: subu        $s2, $s6, $t6
    ctx->r18 = SUB32(ctx->r22, ctx->r14);
    after_8:
    // 0x800602EC: b           L_80060324
    // 0x800602F0: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_80060324;
    // 0x800602F0: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_800602F4:
    // 0x800602F4: addiu       $t7, $v0, 0xF
    ctx->r15 = ADD32(ctx->r2, 0XF);
    // 0x800602F8: bne         $s6, $t7, L_80060314
    if (ctx->r22 != ctx->r15) {
        // 0x800602FC: subu        $s2, $s6, $v0
        ctx->r18 = SUB32(ctx->r22, ctx->r2);
            goto L_80060314;
    }
    // 0x800602FC: subu        $s2, $s6, $v0
    ctx->r18 = SUB32(ctx->r22, ctx->r2);
    // 0x80060300: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80060304: jal         0x800191C0
    // 0x80060308: nop

    func_800191C0(rdram, ctx);
        goto after_9;
    // 0x80060308: nop

    after_9:
    // 0x8006030C: b           L_80060324
    // 0x80060310: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_80060324;
    // 0x80060310: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80060314:
    // 0x80060314: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x80060318: jal         0x8005D528
    // 0x8006031C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_8005D528(rdram, ctx);
        goto after_10;
    // 0x8006031C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_10:
L_80060320:
    // 0x80060320: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80060324:
    // 0x80060324: bne         $s4, $s7, L_800602A4
    if (ctx->r20 != ctx->r23) {
        // 0x80060328: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_800602A4;
    }
    // 0x80060328: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8006032C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80060330: lw          $t8, 0x2084($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2084);
    // 0x80060334: nop

    // 0x80060338: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x8006033C: slt         $v0, $t9, $s6
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80060340: bne         $v0, $zero, L_80060358
    if (ctx->r2 != 0) {
        // 0x80060344: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80060358;
    }
    // 0x80060344: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80060348: jal         0x80007AB0
    // 0x8006034C: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x8006034C: nop

    after_11:
    // 0x80060350: b           L_80060290
    // 0x80060354: lw          $t7, 0x24($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X24);
        goto L_80060290;
    // 0x80060354: lw          $t7, 0x24($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X24);
L_80060358:
    // 0x80060358: addiu       $s3, $sp, 0xB8
    ctx->r19 = ADD32(ctx->r29, 0XB8);
    // 0x8006035C: addiu       $s5, $s3, 0x8
    ctx->r21 = ADD32(ctx->r19, 0X8);
L_80060360:
    // 0x80060360: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80060364: jal         0x8001C568
    // 0x80060368: nop

    func_8001C568(rdram, ctx);
        goto after_12;
    // 0x80060368: nop

    after_12:
    // 0x8006036C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80060370: sltu        $at, $s3, $s5
    ctx->r1 = ctx->r19 < ctx->r21 ? 1 : 0;
    // 0x80060374: bne         $at, $zero, L_80060360
    if (ctx->r1 != 0) {
        // 0x80060378: nop
    
            goto L_80060360;
    }
    // 0x80060378: nop

    // 0x8006037C: jal         0x8005CD50
    // 0x80060380: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005CD50(rdram, ctx);
        goto after_13;
    // 0x80060380: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_13:
    // 0x80060384: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80060388: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006038C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80060390: nop

    // 0x80060394: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80060398: jal         0x80007AE0
    // 0x8006039C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_14;
    // 0x8006039C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_14:
    // 0x800603A0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800603A4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800603A8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800603AC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800603B0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800603B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800603B8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800603BC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800603C0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800603C4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800603C8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800603CC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x800603D0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x800603D4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x800603D8: jr          $ra
    // 0x800603DC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x800603DC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_800603E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800603E0: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x800603E4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800603E8: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800603EC: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x800603F0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800603F4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800603F8: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800603FC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80060400: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80060404: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80060408: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8006040C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80060410: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80060414: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80060418: jal         0x80007774
    // 0x8006041C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006041C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80060420: lw          $fp, 0x1C($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X1C);
    // 0x80060424: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80060428: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8006042C: addiu       $s3, $sp, 0xB8
    ctx->r19 = ADD32(ctx->r29, 0XB8);
    // 0x80060430: addiu       $s7, $sp, 0x74
    ctx->r23 = ADD32(ctx->r29, 0X74);
    // 0x80060434: addiu       $s5, $sp, 0xA8
    ctx->r21 = ADD32(ctx->r29, 0XA8);
    // 0x80060438: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
L_8006043C:
    // 0x8006043C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80060440: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x80060444: jal         0x8005D378
    // 0x80060448: or          $s1, $fp, $zero
    ctx->r17 = ctx->r30 | 0;
    func_8005D378(rdram, ctx);
        goto after_1;
    // 0x80060448: or          $s1, $fp, $zero
    ctx->r17 = ctx->r30 | 0;
    after_1:
    // 0x8006044C: addiu       $a0, $zero, 0x760
    ctx->r4 = ADD32(0, 0X760);
    // 0x80060450: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80060454: jal         0x8001D138
    // 0x80060458: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_2;
    // 0x80060458: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8006045C: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80060460: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80060464: jal         0x80019164
    // 0x80060468: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x80060468: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x8006046C: sw          $s4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r20;
    // 0x80060470: swc1        $f22, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f22.u32l;
    // 0x80060474: swc1        $f22, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f22.u32l;
    // 0x80060478: swc1        $f22, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f22.u32l;
    // 0x8006047C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80060480: jal         0x80019114
    // 0x80060484: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x80060484: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x80060488: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8006048C: jal         0x800191C0
    // 0x80060490: nop

    func_800191C0(rdram, ctx);
        goto after_5;
    // 0x80060490: nop

    after_5:
    // 0x80060494: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80060498: addiu       $t6, $sp, 0xC0
    ctx->r14 = ADD32(ctx->r29, 0XC0);
    // 0x8006049C: bne         $s3, $t6, L_8006043C
    if (ctx->r19 != ctx->r14) {
        // 0x800604A0: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_8006043C;
    }
    // 0x800604A0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800604A4: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x800604A8: addiu       $s7, $s7, 0x2090
    ctx->r23 = ADD32(ctx->r23, 0X2090);
    // 0x800604AC: lw          $t7, 0x24($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X24);
L_800604B0:
    // 0x800604B0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800604B4: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x800604B8: bne         $t8, $zero, L_80060578
    if (ctx->r24 != 0) {
        // 0x800604BC: lui         $s4, 0x8009
        ctx->r20 = S32(0X8009 << 16);
            goto L_80060578;
    }
    // 0x800604BC: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x800604C0: addiu       $s4, $s4, 0x2088
    ctx->r20 = ADD32(ctx->r20, 0X2088);
L_800604C4:
    // 0x800604C4: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x800604C8: addiu       $t9, $sp, 0xB8
    ctx->r25 = ADD32(ctx->r29, 0XB8);
    // 0x800604CC: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800604D0: bne         $at, $zero, L_80060540
    if (ctx->r1 != 0) {
        // 0x800604D4: nop
    
            goto L_80060540;
    }
    // 0x800604D4: nop

    // 0x800604D8: bne         $s6, $v0, L_80060514
    if (ctx->r22 != ctx->r2) {
        // 0x800604DC: addu        $s3, $s5, $t9
        ctx->r19 = ADD32(ctx->r21, ctx->r25);
            goto L_80060514;
    }
    // 0x800604DC: addu        $s3, $s5, $t9
    ctx->r19 = ADD32(ctx->r21, ctx->r25);
    // 0x800604E0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800604E4: jal         0x800191D4
    // 0x800604E8: nop

    func_800191D4(rdram, ctx);
        goto after_6;
    // 0x800604E8: nop

    after_6:
    // 0x800604EC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800604F0: jal         0x8001C468
    // 0x800604F4: addiu       $a1, $zero, 0x7C3
    ctx->r5 = ADD32(0, 0X7C3);
    func_8001C468(rdram, ctx);
        goto after_7;
    // 0x800604F4: addiu       $a1, $zero, 0x7C3
    ctx->r5 = ADD32(0, 0X7C3);
    after_7:
    // 0x800604F8: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x800604FC: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x80060500: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80060504: jal         0x8005D528
    // 0x80060508: subu        $s2, $s6, $t6
    ctx->r18 = SUB32(ctx->r22, ctx->r14);
    func_8005D528(rdram, ctx);
        goto after_8;
    // 0x80060508: subu        $s2, $s6, $t6
    ctx->r18 = SUB32(ctx->r22, ctx->r14);
    after_8:
    // 0x8006050C: b           L_80060544
    // 0x80060510: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_80060544;
    // 0x80060510: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80060514:
    // 0x80060514: addiu       $t7, $v0, 0xF
    ctx->r15 = ADD32(ctx->r2, 0XF);
    // 0x80060518: bne         $s6, $t7, L_80060534
    if (ctx->r22 != ctx->r15) {
        // 0x8006051C: subu        $s2, $s6, $v0
        ctx->r18 = SUB32(ctx->r22, ctx->r2);
            goto L_80060534;
    }
    // 0x8006051C: subu        $s2, $s6, $v0
    ctx->r18 = SUB32(ctx->r22, ctx->r2);
    // 0x80060520: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80060524: jal         0x800191C0
    // 0x80060528: nop

    func_800191C0(rdram, ctx);
        goto after_9;
    // 0x80060528: nop

    after_9:
    // 0x8006052C: b           L_80060544
    // 0x80060530: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_80060544;
    // 0x80060530: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80060534:
    // 0x80060534: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x80060538: jal         0x8005D528
    // 0x8006053C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    func_8005D528(rdram, ctx);
        goto after_10;
    // 0x8006053C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_10:
L_80060540:
    // 0x80060540: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80060544:
    // 0x80060544: bne         $s4, $s7, L_800604C4
    if (ctx->r20 != ctx->r23) {
        // 0x80060548: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_800604C4;
    }
    // 0x80060548: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8006054C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80060550: lw          $t8, 0x208C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X208C);
    // 0x80060554: nop

    // 0x80060558: addiu       $t9, $t8, 0xF
    ctx->r25 = ADD32(ctx->r24, 0XF);
    // 0x8006055C: slt         $v0, $t9, $s6
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80060560: bne         $v0, $zero, L_80060578
    if (ctx->r2 != 0) {
        // 0x80060564: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80060578;
    }
    // 0x80060564: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80060568: jal         0x80007AB0
    // 0x8006056C: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x8006056C: nop

    after_11:
    // 0x80060570: b           L_800604B0
    // 0x80060574: lw          $t7, 0x24($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X24);
        goto L_800604B0;
    // 0x80060574: lw          $t7, 0x24($fp)
    ctx->r15 = MEM_W(ctx->r30, 0X24);
L_80060578:
    // 0x80060578: addiu       $s3, $sp, 0xB8
    ctx->r19 = ADD32(ctx->r29, 0XB8);
    // 0x8006057C: addiu       $s5, $s3, 0x8
    ctx->r21 = ADD32(ctx->r19, 0X8);
L_80060580:
    // 0x80060580: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80060584: jal         0x8001C568
    // 0x80060588: nop

    func_8001C568(rdram, ctx);
        goto after_12;
    // 0x80060588: nop

    after_12:
    // 0x8006058C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80060590: sltu        $at, $s3, $s5
    ctx->r1 = ctx->r19 < ctx->r21 ? 1 : 0;
    // 0x80060594: bne         $at, $zero, L_80060580
    if (ctx->r1 != 0) {
        // 0x80060598: nop
    
            goto L_80060580;
    }
    // 0x80060598: nop

    // 0x8006059C: jal         0x8005CD50
    // 0x800605A0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005CD50(rdram, ctx);
        goto after_13;
    // 0x800605A0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_13:
    // 0x800605A4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800605A8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800605AC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800605B0: nop

    // 0x800605B4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800605B8: jal         0x80007AE0
    // 0x800605BC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_14;
    // 0x800605BC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_14:
    // 0x800605C0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800605C4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800605C8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800605CC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800605D0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800605D4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800605D8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800605DC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800605E0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800605E4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800605E8: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800605EC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x800605F0: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x800605F4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x800605F8: jr          $ra
    // 0x800605FC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x800605FC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_80060600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060600: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80060604: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80060608: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8006060C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80060610: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80060614: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80060618: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8006061C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80060620: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80060624: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80060628: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8006062C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80060630: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80060634: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80060638: jal         0x80007774
    // 0x8006063C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006063C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80060640: lw          $a0, 0x1C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X1C);
    // 0x80060644: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80060648: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x8006064C: addiu       $s3, $sp, 0xB0
    ctx->r19 = ADD32(ctx->r29, 0XB0);
    // 0x80060650: addiu       $fp, $sp, 0xC0
    ctx->r30 = ADD32(ctx->r29, 0XC0);
    // 0x80060654: addiu       $s6, $sp, 0x74
    ctx->r22 = ADD32(ctx->r29, 0X74);
    // 0x80060658: addiu       $s5, $sp, 0xA0
    ctx->r21 = ADD32(ctx->r29, 0XA0);
    // 0x8006065C: sw          $a0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r4;
    // 0x80060660: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
L_80060664:
    // 0x80060664: lw          $s1, 0xC0($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC0);
    // 0x80060668: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006066C: jal         0x8005D378
    // 0x80060670: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    func_8005D378(rdram, ctx);
        goto after_1;
    // 0x80060670: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    after_1:
    // 0x80060674: addiu       $a0, $zero, 0x760
    ctx->r4 = ADD32(0, 0X760);
    // 0x80060678: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006067C: jal         0x8001D138
    // 0x80060680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_2;
    // 0x80060680: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80060684: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80060688: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006068C: jal         0x80019164
    // 0x80060690: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x80060690: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x80060694: sw          $s4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r20;
    // 0x80060698: swc1        $f22, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f22.u32l;
    // 0x8006069C: swc1        $f22, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f22.u32l;
    // 0x800606A0: swc1        $f22, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f22.u32l;
    // 0x800606A4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x800606A8: jal         0x80019114
    // 0x800606AC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x800606AC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_4:
    // 0x800606B0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800606B4: jal         0x800191C0
    // 0x800606B8: nop

    func_800191C0(rdram, ctx);
        goto after_5;
    // 0x800606B8: nop

    after_5:
    // 0x800606BC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800606C0: bne         $s3, $fp, L_80060664
    if (ctx->r19 != ctx->r30) {
        // 0x800606C4: lui         $at, 0x4302
        ctx->r1 = S32(0X4302 << 16);
            goto L_80060664;
    }
    // 0x800606C4: lui         $at, 0x4302
    ctx->r1 = S32(0X4302 << 16);
    // 0x800606C8: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x800606CC: addiu       $fp, $fp, 0x20A0
    ctx->r30 = ADD32(ctx->r30, 0X20A0);
    // 0x800606D0: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
L_800606D4:
    // 0x800606D4: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x800606D8: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x800606DC: addiu       $s5, $s5, 0x2090
    ctx->r21 = ADD32(ctx->r21, 0X2090);
    // 0x800606E0: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x800606E4: bne         $t8, $zero, L_800607B0
    if (ctx->r24 != 0) {
        // 0x800606E8: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_800607B0;
    }
    // 0x800606E8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_800606EC:
    // 0x800606EC: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x800606F0: addiu       $t9, $sp, 0xB0
    ctx->r25 = ADD32(ctx->r29, 0XB0);
    // 0x800606F4: slt         $at, $s7, $v0
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800606F8: bne         $at, $zero, L_80060778
    if (ctx->r1 != 0) {
        // 0x800606FC: nop
    
            goto L_80060778;
    }
    // 0x800606FC: nop

    // 0x80060700: bne         $s7, $v0, L_80060744
    if (ctx->r23 != ctx->r2) {
        // 0x80060704: addu        $s3, $s4, $t9
        ctx->r19 = ADD32(ctx->r20, ctx->r25);
            goto L_80060744;
    }
    // 0x80060704: addu        $s3, $s4, $t9
    ctx->r19 = ADD32(ctx->r20, ctx->r25);
    // 0x80060708: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006070C: addiu       $t6, $t6, 0x20A0
    ctx->r14 = ADD32(ctx->r14, 0X20A0);
    // 0x80060710: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80060714: jal         0x800191D4
    // 0x80060718: addu        $s6, $s4, $t6
    ctx->r22 = ADD32(ctx->r20, ctx->r14);
    func_800191D4(rdram, ctx);
        goto after_6;
    // 0x80060718: addu        $s6, $s4, $t6
    ctx->r22 = ADD32(ctx->r20, ctx->r14);
    after_6:
    // 0x8006071C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80060720: jal         0x8001C468
    // 0x80060724: addiu       $a1, $zero, 0x7C3
    ctx->r5 = ADD32(0, 0X7C3);
    func_8001C468(rdram, ctx);
        goto after_7;
    // 0x80060724: addiu       $a1, $zero, 0x7C3
    ctx->r5 = ADD32(0, 0X7C3);
    after_7:
    // 0x80060728: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x8006072C: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x80060730: lw          $s1, 0x0($s6)
    ctx->r17 = MEM_W(ctx->r22, 0X0);
    // 0x80060734: jal         0x8005D528
    // 0x80060738: subu        $s2, $s7, $t7
    ctx->r18 = SUB32(ctx->r23, ctx->r15);
    func_8005D528(rdram, ctx);
        goto after_8;
    // 0x80060738: subu        $s2, $s7, $t7
    ctx->r18 = SUB32(ctx->r23, ctx->r15);
    after_8:
    // 0x8006073C: b           L_8006077C
    // 0x80060740: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
        goto L_8006077C;
    // 0x80060740: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
L_80060744:
    // 0x80060744: addiu       $t8, $v0, 0xF
    ctx->r24 = ADD32(ctx->r2, 0XF);
    // 0x80060748: bne         $s7, $t8, L_80060764
    if (ctx->r23 != ctx->r24) {
        // 0x8006074C: lui         $s1, 0x8009
        ctx->r17 = S32(0X8009 << 16);
            goto L_80060764;
    }
    // 0x8006074C: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80060750: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80060754: jal         0x800191C0
    // 0x80060758: nop

    func_800191C0(rdram, ctx);
        goto after_9;
    // 0x80060758: nop

    after_9:
    // 0x8006075C: b           L_8006077C
    // 0x80060760: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
        goto L_8006077C;
    // 0x80060760: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
L_80060764:
    // 0x80060764: addu        $s1, $s1, $s4
    ctx->r17 = ADD32(ctx->r17, ctx->r20);
    // 0x80060768: lw          $s1, 0x20A0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X20A0);
    // 0x8006076C: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x80060770: jal         0x8005D528
    // 0x80060774: subu        $s2, $s7, $v0
    ctx->r18 = SUB32(ctx->r23, ctx->r2);
    func_8005D528(rdram, ctx);
        goto after_10;
    // 0x80060774: subu        $s2, $s7, $v0
    ctx->r18 = SUB32(ctx->r23, ctx->r2);
    after_10:
L_80060778:
    // 0x80060778: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
L_8006077C:
    // 0x8006077C: bne         $s5, $fp, L_800606EC
    if (ctx->r21 != ctx->r30) {
        // 0x80060780: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_800606EC;
    }
    // 0x80060780: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80060784: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80060788: lw          $t9, 0x209C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X209C);
    // 0x8006078C: nop

    // 0x80060790: addiu       $t6, $t9, 0xF
    ctx->r14 = ADD32(ctx->r25, 0XF);
    // 0x80060794: slt         $v0, $t6, $s7
    ctx->r2 = SIGNED(ctx->r14) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x80060798: bne         $v0, $zero, L_800607B0
    if (ctx->r2 != 0) {
        // 0x8006079C: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_800607B0;
    }
    // 0x8006079C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x800607A0: jal         0x80007AB0
    // 0x800607A4: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x800607A4: nop

    after_11:
    // 0x800607A8: b           L_800606D4
    // 0x800607AC: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
        goto L_800606D4;
    // 0x800607AC: lw          $t6, 0xC0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC0);
L_800607B0:
    // 0x800607B0: addiu       $s3, $sp, 0xB0
    ctx->r19 = ADD32(ctx->r29, 0XB0);
    // 0x800607B4: addiu       $s5, $s3, 0x10
    ctx->r21 = ADD32(ctx->r19, 0X10);
L_800607B8:
    // 0x800607B8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800607BC: jal         0x8001C568
    // 0x800607C0: nop

    func_8001C568(rdram, ctx);
        goto after_12;
    // 0x800607C0: nop

    after_12:
    // 0x800607C4: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800607C8: sltu        $at, $s3, $s5
    ctx->r1 = ctx->r19 < ctx->r21 ? 1 : 0;
    // 0x800607CC: bne         $at, $zero, L_800607B8
    if (ctx->r1 != 0) {
        // 0x800607D0: nop
    
            goto L_800607B8;
    }
    // 0x800607D0: nop

    // 0x800607D4: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x800607D8: jal         0x8005CD50
    // 0x800607DC: nop

    func_8005CD50(rdram, ctx);
        goto after_13;
    // 0x800607DC: nop

    after_13:
    // 0x800607E0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800607E4: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800607E8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800607EC: nop

    // 0x800607F0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800607F4: jal         0x80007AE0
    // 0x800607F8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_14;
    // 0x800607F8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_14:
    // 0x800607FC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80060800: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80060804: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80060808: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006080C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80060810: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80060814: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80060818: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8006081C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80060820: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80060824: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80060828: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8006082C: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80060830: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80060834: jr          $ra
    // 0x80060838: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x80060838: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_8006083C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006083C: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80060840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060844: jal         0x80007774
    // 0x80060848: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80060848: nop

    after_0:
    // 0x8006084C: addiu       $t6, $s7, 0x1
    ctx->r14 = ADD32(ctx->r23, 0X1);
    // 0x80060850: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80060854: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80060858: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006085C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80060860: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80060864: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80060868: mul.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006086C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80060870: addiu       $s3, $sp, 0x80
    ctx->r19 = ADD32(ctx->r29, 0X80);
    // 0x80060874: addiu       $s5, $sp, 0x90
    ctx->r21 = ADD32(ctx->r29, 0X90);
    // 0x80060878: addiu       $s4, $sp, 0x3C
    ctx->r20 = ADD32(ctx->r29, 0X3C);
    // 0x8006087C: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
    // 0x80060880: sw          $s1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r17;
    // 0x80060884: lw          $s1, 0x90($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X90);
L_80060888:
    // 0x80060888: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8006088C: jal         0x8005D378
    // 0x80060890: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    func_8005D378(rdram, ctx);
        goto after_1;
    // 0x80060890: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    after_1:
    // 0x80060894: addiu       $a0, $zero, 0x760
    ctx->r4 = ADD32(0, 0X760);
    // 0x80060898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006089C: jal         0x8001D138
    // 0x800608A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_2;
    // 0x800608A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800608A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800608A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800608AC: jal         0x80019164
    // 0x800608B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x800608B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x800608B4: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
    // 0x800608B8: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x800608BC: swc1        $f22, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f22.u32l;
    // 0x800608C0: swc1        $f22, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f22.u32l;
    // 0x800608C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800608C8: jal         0x80019114
    // 0x800608CC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x800608CC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_4:
    // 0x800608D0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800608D4: jal         0x800191C0
    // 0x800608D8: nop

    func_800191C0(rdram, ctx);
        goto after_5;
    // 0x800608D8: nop

    after_5:
    // 0x800608DC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800608E0: bne         $s3, $s5, L_80060888
    if (ctx->r19 != ctx->r21) {
        // 0x800608E4: lw          $s1, 0x90($sp)
        ctx->r17 = MEM_W(ctx->r29, 0X90);
            goto L_80060888;
    }
    // 0x800608E4: lw          $s1, 0x90($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X90);
    // 0x800608E8: lui         $fp, 0x8009
    ctx->r30 = S32(0X8009 << 16);
    // 0x800608EC: addiu       $fp, $fp, 0x20C0
    ctx->r30 = ADD32(ctx->r30, 0X20C0);
    // 0x800608F0: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
L_800608F4:
    // 0x800608F4: nop

    // 0x800608F8: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x800608FC: nop

    // 0x80060900: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80060904: bne         $t9, $zero, L_800609D0
    if (ctx->r25 != 0) {
        // 0x80060908: addiu       $s0, $sp, 0x80
        ctx->r16 = ADD32(ctx->r29, 0X80);
            goto L_800609D0;
    }
    // 0x80060908: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x8006090C: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x80060910: addiu       $s4, $s4, 0x20B0
    ctx->r20 = ADD32(ctx->r20, 0X20B0);
    // 0x80060914: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_80060918:
    // 0x80060918: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8006091C: addiu       $t6, $sp, 0x80
    ctx->r14 = ADD32(ctx->r29, 0X80);
    // 0x80060920: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80060924: bne         $at, $zero, L_80060994
    if (ctx->r1 != 0) {
        // 0x80060928: nop
    
            goto L_80060994;
    }
    // 0x80060928: nop

    // 0x8006092C: bne         $s6, $v0, L_80060968
    if (ctx->r22 != ctx->r2) {
        // 0x80060930: addu        $s3, $s5, $t6
        ctx->r19 = ADD32(ctx->r21, ctx->r14);
            goto L_80060968;
    }
    // 0x80060930: addu        $s3, $s5, $t6
    ctx->r19 = ADD32(ctx->r21, ctx->r14);
    // 0x80060934: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80060938: jal         0x800191D4
    // 0x8006093C: nop

    func_800191D4(rdram, ctx);
        goto after_6;
    // 0x8006093C: nop

    after_6:
    // 0x80060940: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80060944: jal         0x8001C468
    // 0x80060948: addiu       $a1, $zero, 0x7C3
    ctx->r5 = ADD32(0, 0X7C3);
    func_8001C468(rdram, ctx);
        goto after_7;
    // 0x80060948: addiu       $a1, $zero, 0x7C3
    ctx->r5 = ADD32(0, 0X7C3);
    after_7:
    // 0x8006094C: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x80060950: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x80060954: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    // 0x80060958: jal         0x8005D528
    // 0x8006095C: subu        $s2, $s6, $t7
    ctx->r18 = SUB32(ctx->r22, ctx->r15);
    func_8005D528(rdram, ctx);
        goto after_8;
    // 0x8006095C: subu        $s2, $s6, $t7
    ctx->r18 = SUB32(ctx->r22, ctx->r15);
    after_8:
    // 0x80060960: b           L_80060998
    // 0x80060964: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_80060998;
    // 0x80060964: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80060968:
    // 0x80060968: addiu       $t8, $v0, 0xF
    ctx->r24 = ADD32(ctx->r2, 0XF);
    // 0x8006096C: bne         $s6, $t8, L_80060988
    if (ctx->r22 != ctx->r24) {
        // 0x80060970: subu        $s2, $s6, $v0
        ctx->r18 = SUB32(ctx->r22, ctx->r2);
            goto L_80060988;
    }
    // 0x80060970: subu        $s2, $s6, $v0
    ctx->r18 = SUB32(ctx->r22, ctx->r2);
    // 0x80060974: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80060978: jal         0x800191C0
    // 0x8006097C: nop

    func_800191C0(rdram, ctx);
        goto after_9;
    // 0x8006097C: nop

    after_9:
    // 0x80060980: b           L_80060998
    // 0x80060984: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_80060998;
    // 0x80060984: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80060988:
    // 0x80060988: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x8006098C: jal         0x8005D528
    // 0x80060990: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    func_8005D528(rdram, ctx);
        goto after_10;
    // 0x80060990: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    after_10:
L_80060994:
    // 0x80060994: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80060998:
    // 0x80060998: bne         $s4, $fp, L_80060918
    if (ctx->r20 != ctx->r30) {
        // 0x8006099C: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_80060918;
    }
    // 0x8006099C: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x800609A0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800609A4: lw          $t9, 0x20BC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X20BC);
    // 0x800609A8: nop

    // 0x800609AC: addiu       $t6, $t9, 0xF
    ctx->r14 = ADD32(ctx->r25, 0XF);
    // 0x800609B0: slt         $v0, $t6, $s6
    ctx->r2 = SIGNED(ctx->r14) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x800609B4: bne         $v0, $zero, L_800609CC
    if (ctx->r2 != 0) {
        // 0x800609B8: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_800609CC;
    }
    // 0x800609B8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x800609BC: jal         0x80007AB0
    // 0x800609C0: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x800609C0: nop

    after_11:
    // 0x800609C4: b           L_800608F4
    // 0x800609C8: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
        goto L_800608F4;
    // 0x800609C8: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
L_800609CC:
    // 0x800609CC: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
L_800609D0:
    // 0x800609D0: addiu       $s2, $s0, 0x10
    ctx->r18 = ADD32(ctx->r16, 0X10);
    // 0x800609D4: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_800609D8:
    // 0x800609D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800609DC: jal         0x8001C568
    // 0x800609E0: nop

    func_8001C568(rdram, ctx);
        goto after_12;
    // 0x800609E0: nop

    after_12:
    // 0x800609E4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800609E8: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800609EC: bne         $at, $zero, L_800609D8
    if (ctx->r1 != 0) {
        // 0x800609F0: nop
    
            goto L_800609D8;
    }
    // 0x800609F0: nop

    // 0x800609F4: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x800609F8: jal         0x8005CD50
    // 0x800609FC: nop

    func_8005CD50(rdram, ctx);
        goto after_13;
    // 0x800609FC: nop

    after_13:
    // 0x80060A00: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80060A04: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80060A08: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80060A0C: nop

    // 0x80060A10: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80060A14: jal         0x80007AE0
    // 0x80060A18: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_14;
    // 0x80060A18: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_14:
    // 0x80060A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060A20: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x80060A24: jr          $ra
    // 0x80060A28: nop

    return;
    // 0x80060A28: nop

;}
RECOMP_FUNC void func_80060A2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060A2C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80060A30: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80060A34: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80060A38: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80060A3C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80060A40: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80060A44: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80060A48: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80060A4C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80060A50: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80060A54: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80060A58: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80060A5C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80060A60: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80060A64: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80060A68: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80060A6C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80060A70: jal         0x8006083C
    // 0x80060A74: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    func_8006083C(rdram, ctx);
        goto after_0;
    // 0x80060A74: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    after_0:
    // 0x80060A78: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80060A7C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80060A80: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80060A84: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80060A88: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80060A8C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80060A90: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80060A94: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80060A98: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80060A9C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80060AA0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80060AA4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80060AA8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80060AAC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80060AB0: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80060AB4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80060AB8: jr          $ra
    // 0x80060ABC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80060ABC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80060AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060AC0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80060AC4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80060AC8: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80060ACC: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80060AD0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80060AD4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80060AD8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80060ADC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80060AE0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80060AE4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80060AE8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80060AEC: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80060AF0: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80060AF4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80060AF8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80060AFC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80060B00: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80060B04: jal         0x8006083C
    // 0x80060B08: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    func_8006083C(rdram, ctx);
        goto after_0;
    // 0x80060B08: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    after_0:
    // 0x80060B0C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80060B10: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80060B14: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80060B18: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80060B1C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80060B20: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80060B24: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80060B28: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80060B2C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80060B30: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80060B34: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80060B38: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80060B3C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80060B40: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80060B44: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80060B48: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80060B4C: jr          $ra
    // 0x80060B50: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80060B50: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80060B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060B54: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80060B58: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80060B5C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80060B60: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80060B64: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80060B68: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80060B6C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80060B70: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80060B74: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80060B78: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80060B7C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80060B80: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80060B84: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80060B88: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80060B8C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80060B90: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80060B94: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80060B98: jal         0x8006083C
    // 0x80060B9C: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    func_8006083C(rdram, ctx);
        goto after_0;
    // 0x80060B9C: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    after_0:
    // 0x80060BA0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80060BA4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80060BA8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80060BAC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80060BB0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80060BB4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80060BB8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80060BBC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80060BC0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80060BC4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80060BC8: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80060BCC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80060BD0: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80060BD4: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80060BD8: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80060BDC: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80060BE0: jr          $ra
    // 0x80060BE4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80060BE4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80060BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060BE8: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x80060BEC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80060BF0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80060BF4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80060BF8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80060BFC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80060C00: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80060C04: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80060C08: jal         0x80007774
    // 0x80060C0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80060C0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80060C10: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80060C14: addiu       $t7, $t7, 0x20C0
    ctx->r15 = ADD32(ctx->r15, 0X20C0);
    // 0x80060C18: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x80060C1C: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x80060C20: addiu       $t6, $sp, 0xBC
    ctx->r14 = ADD32(ctx->r29, 0XBC);
L_80060C24:
    // 0x80060C24: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80060C28: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80060C2C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80060C30: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80060C34: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80060C38: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80060C3C: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80060C40: bne         $t7, $t9, L_80060C24
    if (ctx->r15 != ctx->r25) {
        // 0x80060C44: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80060C24;
    }
    // 0x80060C44: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80060C48: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80060C4C: addiu       $t9, $t9, 0x20E4
    ctx->r25 = ADD32(ctx->r25, 0X20E4);
    // 0x80060C50: addiu       $t6, $t9, 0x24
    ctx->r14 = ADD32(ctx->r25, 0X24);
    // 0x80060C54: addiu       $t8, $sp, 0x98
    ctx->r24 = ADD32(ctx->r29, 0X98);
L_80060C58:
    // 0x80060C58: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80060C5C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80060C60: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80060C64: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80060C68: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80060C6C: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x80060C70: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80060C74: bne         $t9, $t6, L_80060C58
    if (ctx->r25 != ctx->r14) {
        // 0x80060C78: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80060C58;
    }
    // 0x80060C78: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80060C7C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80060C80: addiu       $t6, $t6, 0x2108
    ctx->r14 = ADD32(ctx->r14, 0X2108);
    // 0x80060C84: addiu       $t8, $t6, 0x24
    ctx->r24 = ADD32(ctx->r14, 0X24);
    // 0x80060C88: addiu       $t7, $sp, 0x74
    ctx->r15 = ADD32(ctx->r29, 0X74);
L_80060C8C:
    // 0x80060C8C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80060C90: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80060C94: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80060C98: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80060C9C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80060CA0: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x80060CA4: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80060CA8: bne         $t6, $t8, L_80060C8C
    if (ctx->r14 != ctx->r24) {
        // 0x80060CAC: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80060C8C;
    }
    // 0x80060CAC: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x80060CB0: addiu       $s0, $sp, 0xBC
    ctx->r16 = ADD32(ctx->r29, 0XBC);
    // 0x80060CB4: addiu       $s2, $sp, 0xE4
    ctx->r18 = ADD32(ctx->r29, 0XE4);
    // 0x80060CB8: addiu       $s4, $sp, 0x74
    ctx->r20 = ADD32(ctx->r29, 0X74);
    // 0x80060CBC: addiu       $s3, $sp, 0x98
    ctx->r19 = ADD32(ctx->r29, 0X98);
    // 0x80060CC0: addiu       $s6, $sp, 0xBC
    ctx->r22 = ADD32(ctx->r29, 0XBC);
L_80060CC4:
    // 0x80060CC4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80060CC8: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80060CCC: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80060CD0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80060CD4: addiu       $a0, $zero, 0x766
    ctx->r4 = ADD32(0, 0X766);
    // 0x80060CD8: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x80060CDC: lwc1        $f4, 0x4($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X4);
    // 0x80060CE0: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80060CE4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80060CE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80060CEC: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80060CF0: lwc1        $f10, 0x8($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X8);
    // 0x80060CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80060CF8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80060CFC: jal         0x8001D138
    // 0x80060D00: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80060D00: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x80060D04: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80060D08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80060D0C: jal         0x80019164
    // 0x80060D10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80060D10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80060D14: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x80060D18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80060D1C: jal         0x8001C468
    // 0x80060D20: addiu       $a1, $zero, 0x7C7
    ctx->r5 = ADD32(0, 0X7C7);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80060D20: addiu       $a1, $zero, 0x7C7
    ctx->r5 = ADD32(0, 0X7C7);
    after_3:
    // 0x80060D24: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80060D28: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80060D2C: jal         0x800192E8
    // 0x80060D30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x80060D30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80060D34: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80060D38: jal         0x8001913C
    // 0x80060D3C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8001913C(rdram, ctx);
        goto after_5;
    // 0x80060D3C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_5:
    // 0x80060D40: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80060D44: jal         0x80019114
    // 0x80060D48: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x80060D48: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_6:
    // 0x80060D4C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80060D50: jal         0x800191C0
    // 0x80060D54: nop

    func_800191C0(rdram, ctx);
        goto after_7;
    // 0x80060D54: nop

    after_7:
    // 0x80060D58: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x80060D5C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80060D60: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80060D64: bne         $s3, $s6, L_80060CC4
    if (ctx->r19 != ctx->r22) {
        // 0x80060D68: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_80060CC4;
    }
    // 0x80060D68: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x80060D6C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80060D70: addiu       $s3, $s3, 0x2138
    ctx->r19 = ADD32(ctx->r19, 0X2138);
    // 0x80060D74: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80060D78: addiu       $s4, $sp, 0xE4
    ctx->r20 = ADD32(ctx->r29, 0XE4);
L_80060D7C:
    // 0x80060D7C: lw          $t9, 0x24($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X24);
    // 0x80060D80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80060D84: andi        $t8, $t9, 0x4000
    ctx->r24 = ctx->r25 & 0X4000;
    // 0x80060D88: bne         $t8, $zero, L_80060DE0
    if (ctx->r24 != 0) {
        // 0x80060D8C: lui         $s0, 0x8009
        ctx->r16 = S32(0X8009 << 16);
            goto L_80060DE0;
    }
    // 0x80060D8C: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80060D90: addiu       $s0, $s0, 0x212C
    ctx->r16 = ADD32(ctx->r16, 0X212C);
L_80060D94:
    // 0x80060D94: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80060D98: nop

    // 0x80060D9C: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80060DA0: bne         $at, $zero, L_80060DBC
    if (ctx->r1 != 0) {
        // 0x80060DA4: nop
    
            goto L_80060DBC;
    }
    // 0x80060DA4: nop

    // 0x80060DA8: bne         $s2, $v0, L_80060DBC
    if (ctx->r18 != ctx->r2) {
        // 0x80060DAC: addu        $t6, $s4, $s1
        ctx->r14 = ADD32(ctx->r20, ctx->r17);
            goto L_80060DBC;
    }
    // 0x80060DAC: addu        $t6, $s4, $s1
    ctx->r14 = ADD32(ctx->r20, ctx->r17);
    // 0x80060DB0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80060DB4: jal         0x800191D4
    // 0x80060DB8: nop

    func_800191D4(rdram, ctx);
        goto after_8;
    // 0x80060DB8: nop

    after_8:
L_80060DBC:
    // 0x80060DBC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80060DC0: bne         $s0, $s3, L_80060D94
    if (ctx->r16 != ctx->r19) {
        // 0x80060DC4: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80060D94;
    }
    // 0x80060DC4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80060DC8: jal         0x80007AB0
    // 0x80060DCC: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x80060DCC: nop

    after_9:
    // 0x80060DD0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80060DD4: slti        $at, $s2, 0x1E
    ctx->r1 = SIGNED(ctx->r18) < 0X1E ? 1 : 0;
    // 0x80060DD8: bne         $at, $zero, L_80060D7C
    if (ctx->r1 != 0) {
        // 0x80060DDC: nop
    
            goto L_80060D7C;
    }
    // 0x80060DDC: nop

L_80060DE0:
    // 0x80060DE0: addiu       $s0, $sp, 0xE4
    ctx->r16 = ADD32(ctx->r29, 0XE4);
    // 0x80060DE4: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_80060DE8:
    // 0x80060DE8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80060DEC: jal         0x8001C568
    // 0x80060DF0: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x80060DF0: nop

    after_10:
    // 0x80060DF4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80060DF8: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80060DFC: bne         $at, $zero, L_80060DE8
    if (ctx->r1 != 0) {
        // 0x80060E00: nop
    
            goto L_80060DE8;
    }
    // 0x80060E00: nop

    // 0x80060E04: jal         0x8005CD50
    // 0x80060E08: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x80060E08: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_11:
    // 0x80060E0C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80060E10: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80060E14: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80060E18: nop

    // 0x80060E1C: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x80060E20: jal         0x80007AE0
    // 0x80060E24: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x80060E24: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_12:
    // 0x80060E28: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80060E2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80060E30: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80060E34: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80060E38: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80060E3C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80060E40: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80060E44: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80060E48: jr          $ra
    // 0x80060E4C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x80060E4C: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_80060E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060E50: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x80060E54: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80060E58: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80060E5C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80060E60: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80060E64: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80060E68: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80060E6C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80060E70: jal         0x80007774
    // 0x80060E74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80060E74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80060E78: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80060E7C: addiu       $t7, $t7, 0x2138
    ctx->r15 = ADD32(ctx->r15, 0X2138);
    // 0x80060E80: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x80060E84: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x80060E88: addiu       $t6, $sp, 0xBC
    ctx->r14 = ADD32(ctx->r29, 0XBC);
L_80060E8C:
    // 0x80060E8C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80060E90: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80060E94: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80060E98: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80060E9C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80060EA0: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80060EA4: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80060EA8: bne         $t7, $t9, L_80060E8C
    if (ctx->r15 != ctx->r25) {
        // 0x80060EAC: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80060E8C;
    }
    // 0x80060EAC: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80060EB0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80060EB4: addiu       $t9, $t9, 0x215C
    ctx->r25 = ADD32(ctx->r25, 0X215C);
    // 0x80060EB8: addiu       $t6, $t9, 0x24
    ctx->r14 = ADD32(ctx->r25, 0X24);
    // 0x80060EBC: addiu       $t8, $sp, 0x98
    ctx->r24 = ADD32(ctx->r29, 0X98);
L_80060EC0:
    // 0x80060EC0: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80060EC4: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80060EC8: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80060ECC: lw          $at, -0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X8);
    // 0x80060ED0: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80060ED4: sw          $at, -0x8($t8)
    MEM_W(-0X8, ctx->r24) = ctx->r1;
    // 0x80060ED8: lw          $at, -0x4($t9)
    ctx->r1 = MEM_W(ctx->r25, -0X4);
    // 0x80060EDC: bne         $t9, $t6, L_80060EC0
    if (ctx->r25 != ctx->r14) {
        // 0x80060EE0: sw          $at, -0x4($t8)
        MEM_W(-0X4, ctx->r24) = ctx->r1;
            goto L_80060EC0;
    }
    // 0x80060EE0: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80060EE4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80060EE8: addiu       $t6, $t6, 0x2180
    ctx->r14 = ADD32(ctx->r14, 0X2180);
    // 0x80060EEC: addiu       $t8, $t6, 0x24
    ctx->r24 = ADD32(ctx->r14, 0X24);
    // 0x80060EF0: addiu       $t7, $sp, 0x74
    ctx->r15 = ADD32(ctx->r29, 0X74);
L_80060EF4:
    // 0x80060EF4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80060EF8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80060EFC: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80060F00: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80060F04: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80060F08: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x80060F0C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80060F10: bne         $t6, $t8, L_80060EF4
    if (ctx->r14 != ctx->r24) {
        // 0x80060F14: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80060EF4;
    }
    // 0x80060F14: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x80060F18: addiu       $s0, $sp, 0xBC
    ctx->r16 = ADD32(ctx->r29, 0XBC);
    // 0x80060F1C: addiu       $s2, $sp, 0xE4
    ctx->r18 = ADD32(ctx->r29, 0XE4);
    // 0x80060F20: addiu       $s4, $sp, 0x74
    ctx->r20 = ADD32(ctx->r29, 0X74);
    // 0x80060F24: addiu       $s3, $sp, 0x98
    ctx->r19 = ADD32(ctx->r29, 0X98);
    // 0x80060F28: addiu       $s6, $sp, 0xBC
    ctx->r22 = ADD32(ctx->r29, 0XBC);
L_80060F2C:
    // 0x80060F2C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80060F30: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80060F34: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80060F38: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80060F3C: addiu       $a0, $zero, 0x766
    ctx->r4 = ADD32(0, 0X766);
    // 0x80060F40: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x80060F44: lwc1        $f4, 0x4($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X4);
    // 0x80060F48: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80060F4C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80060F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80060F54: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80060F58: lwc1        $f10, 0x8($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X8);
    // 0x80060F5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80060F60: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80060F64: jal         0x8001D138
    // 0x80060F68: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80060F68: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x80060F6C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80060F70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80060F74: jal         0x80019164
    // 0x80060F78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80060F78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80060F7C: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x80060F80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80060F84: jal         0x8001C468
    // 0x80060F88: addiu       $a1, $zero, 0x7C7
    ctx->r5 = ADD32(0, 0X7C7);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80060F88: addiu       $a1, $zero, 0x7C7
    ctx->r5 = ADD32(0, 0X7C7);
    after_3:
    // 0x80060F8C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80060F90: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80060F94: jal         0x800192E8
    // 0x80060F98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x80060F98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80060F9C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80060FA0: jal         0x8001913C
    // 0x80060FA4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8001913C(rdram, ctx);
        goto after_5;
    // 0x80060FA4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_5:
    // 0x80060FA8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80060FAC: jal         0x80019114
    // 0x80060FB0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x80060FB0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_6:
    // 0x80060FB4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80060FB8: jal         0x800191C0
    // 0x80060FBC: nop

    func_800191C0(rdram, ctx);
        goto after_7;
    // 0x80060FBC: nop

    after_7:
    // 0x80060FC0: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x80060FC4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80060FC8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80060FCC: bne         $s3, $s6, L_80060F2C
    if (ctx->r19 != ctx->r22) {
        // 0x80060FD0: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_80060F2C;
    }
    // 0x80060FD0: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x80060FD4: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80060FD8: addiu       $s3, $s3, 0x21B0
    ctx->r19 = ADD32(ctx->r19, 0X21B0);
    // 0x80060FDC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80060FE0: addiu       $s4, $sp, 0xE4
    ctx->r20 = ADD32(ctx->r29, 0XE4);
L_80060FE4:
    // 0x80060FE4: lw          $t9, 0x24($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X24);
    // 0x80060FE8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80060FEC: andi        $t8, $t9, 0x4000
    ctx->r24 = ctx->r25 & 0X4000;
    // 0x80060FF0: bne         $t8, $zero, L_80061048
    if (ctx->r24 != 0) {
        // 0x80060FF4: lui         $s0, 0x8009
        ctx->r16 = S32(0X8009 << 16);
            goto L_80061048;
    }
    // 0x80060FF4: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x80060FF8: addiu       $s0, $s0, 0x21A4
    ctx->r16 = ADD32(ctx->r16, 0X21A4);
L_80060FFC:
    // 0x80060FFC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80061000: nop

    // 0x80061004: slt         $at, $s2, $v0
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80061008: bne         $at, $zero, L_80061024
    if (ctx->r1 != 0) {
        // 0x8006100C: nop
    
            goto L_80061024;
    }
    // 0x8006100C: nop

    // 0x80061010: bne         $s2, $v0, L_80061024
    if (ctx->r18 != ctx->r2) {
        // 0x80061014: addu        $t6, $s4, $s1
        ctx->r14 = ADD32(ctx->r20, ctx->r17);
            goto L_80061024;
    }
    // 0x80061014: addu        $t6, $s4, $s1
    ctx->r14 = ADD32(ctx->r20, ctx->r17);
    // 0x80061018: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8006101C: jal         0x800191D4
    // 0x80061020: nop

    func_800191D4(rdram, ctx);
        goto after_8;
    // 0x80061020: nop

    after_8:
L_80061024:
    // 0x80061024: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80061028: bne         $s0, $s3, L_80060FFC
    if (ctx->r16 != ctx->r19) {
        // 0x8006102C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80060FFC;
    }
    // 0x8006102C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80061030: jal         0x80007AB0
    // 0x80061034: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x80061034: nop

    after_9:
    // 0x80061038: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8006103C: slti        $at, $s2, 0x1E
    ctx->r1 = SIGNED(ctx->r18) < 0X1E ? 1 : 0;
    // 0x80061040: bne         $at, $zero, L_80060FE4
    if (ctx->r1 != 0) {
        // 0x80061044: nop
    
            goto L_80060FE4;
    }
    // 0x80061044: nop

L_80061048:
    // 0x80061048: addiu       $s0, $sp, 0xE4
    ctx->r16 = ADD32(ctx->r29, 0XE4);
    // 0x8006104C: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_80061050:
    // 0x80061050: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80061054: jal         0x8001C568
    // 0x80061058: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x80061058: nop

    after_10:
    // 0x8006105C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80061060: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80061064: bne         $at, $zero, L_80061050
    if (ctx->r1 != 0) {
        // 0x80061068: nop
    
            goto L_80061050;
    }
    // 0x80061068: nop

    // 0x8006106C: jal         0x8005CD50
    // 0x80061070: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x80061070: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_11:
    // 0x80061074: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80061078: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006107C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80061080: nop

    // 0x80061084: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x80061088: jal         0x80007AE0
    // 0x8006108C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x8006108C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_12:
    // 0x80061090: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80061094: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80061098: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006109C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800610A0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800610A4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800610A8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800610AC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800610B0: jr          $ra
    // 0x800610B4: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x800610B4: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_800610B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800610B8: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x800610BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800610C0: jal         0x80007774
    // 0x800610C4: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800610C4: nop

    after_0:
    // 0x800610C8: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x800610CC: addiu       $a0, $zero, 0x7B3
    ctx->r4 = ADD32(0, 0X7B3);
    // 0x800610D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800610D4: jal         0x8001D138
    // 0x800610D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800610D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800610DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800610E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800610E4: jal         0x80019164
    // 0x800610E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800610E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x800610EC: sw          $s0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r16;
    // 0x800610F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800610F4: jal         0x8001C468
    // 0x800610F8: addiu       $a1, $zero, 0x7B3
    ctx->r5 = ADD32(0, 0X7B3);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x800610F8: addiu       $a1, $zero, 0x7B3
    ctx->r5 = ADD32(0, 0X7B3);
    after_3:
    // 0x800610FC: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x80061100: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80061104: jal         0x800192E8
    // 0x80061108: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x80061108: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006110C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x80061110: swc1        $f22, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f22.u32l;
    // 0x80061114: swc1        $f22, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f22.u32l;
    // 0x80061118: swc1        $f22, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f22.u32l;
    // 0x8006111C: jal         0x80019114
    // 0x80061120: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80061120: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_5:
    // 0x80061124: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x80061128: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006112C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80061130: addiu       $fp, $zero, -0x401
    ctx->r30 = ADD32(0, -0X401);
    // 0x80061134: addiu       $s7, $zero, -0x801
    ctx->r23 = ADD32(0, -0X801);
    // 0x80061138: addiu       $s6, $zero, 0x14
    ctx->r22 = ADD32(0, 0X14);
    // 0x8006113C: addiu       $s5, $zero, 0x5
    ctx->r21 = ADD32(0, 0X5);
L_80061140:
    // 0x80061140: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x80061144: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x80061148: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006114C: bne         $t6, $zero, L_80061250
    if (ctx->r14 != 0) {
        // 0x80061150: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_80061250;
    }
    // 0x80061150: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80061154: beq         $t7, $zero, L_80061178
    if (ctx->r15 == 0) {
        // 0x80061158: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_80061178;
    }
    // 0x80061158: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x8006115C: jal         0x80019164
    // 0x80061160: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x80061160: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_6:
    // 0x80061164: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x80061168: nop

    // 0x8006116C: and         $v0, $t8, $s7
    ctx->r2 = ctx->r24 & ctx->r23;
    // 0x80061170: sw          $v0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r2;
    // 0x80061174: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_80061178:
    // 0x80061178: beq         $t6, $zero, L_800611A0
    if (ctx->r14 == 0) {
        // 0x8006117C: addiu       $s4, $s1, 0x1
        ctx->r20 = ADD32(ctx->r17, 0X1);
            goto L_800611A0;
    }
    // 0x8006117C: addiu       $s4, $s1, 0x1
    ctx->r20 = ADD32(ctx->r17, 0X1);
    // 0x80061180: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x80061184: jal         0x8001913C
    // 0x80061188: addiu       $a1, $s3, 0xC
    ctx->r5 = ADD32(ctx->r19, 0XC);
    func_8001913C(rdram, ctx);
        goto after_7;
    // 0x80061188: addiu       $a1, $s3, 0xC
    ctx->r5 = ADD32(ctx->r19, 0XC);
    after_7:
    // 0x8006118C: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x80061190: nop

    // 0x80061194: and         $t8, $t7, $fp
    ctx->r24 = ctx->r15 & ctx->r30;
    // 0x80061198: sw          $t8, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r24;
    // 0x8006119C: addiu       $s4, $s1, 0x1
    ctx->r20 = ADD32(ctx->r17, 0X1);
L_800611A0:
    // 0x800611A0: mtc1        $s4, $f4
    ctx->f4.u32l = ctx->r20;
    // 0x800611A4: nop

    // 0x800611A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800611AC: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x800611B0: jal         0x80028C2C
    // 0x800611B4: nop

    func_80028C2C(rdram, ctx);
        goto after_8;
    // 0x800611B4: nop

    after_8:
    // 0x800611B8: mul.s       $f12, $f0, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x800611BC: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x800611C0: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x800611C4: add.s       $f2, $f12, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f12.fl;
    // 0x800611C8: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    // 0x800611CC: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x800611D0: jal         0x80019114
    // 0x800611D4: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x800611D4: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    after_9:
    // 0x800611D8: slti        $at, $s1, 0xF
    ctx->r1 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
    // 0x800611DC: bne         $at, $zero, L_80061240
    if (ctx->r1 != 0) {
        // 0x800611E0: subu        $v0, $s6, $s1
        ctx->r2 = SUB32(ctx->r22, ctx->r17);
            goto L_80061240;
    }
    // 0x800611E0: subu        $v0, $s6, $s1
    ctx->r2 = SUB32(ctx->r22, ctx->r17);
    // 0x800611E4: lw          $s0, 0x94($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X94);
    // 0x800611E8: sll         $s2, $v0, 8
    ctx->r18 = S32(ctx->r2 << 8);
    // 0x800611EC: bne         $s5, $v0, L_80061204
    if (ctx->r21 != ctx->r2) {
        // 0x800611F0: subu        $s2, $s2, $v0
        ctx->r18 = SUB32(ctx->r18, ctx->r2);
            goto L_80061204;
    }
    // 0x800611F0: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800611F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800611F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800611FC: jal         0x80018658
    // 0x80061200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_10;
    // 0x80061200: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_80061204:
    // 0x80061204: div         $zero, $s2, $s5
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r21)));
    // 0x80061208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006120C: bne         $s5, $zero, L_80061218
    if (ctx->r21 != 0) {
        // 0x80061210: nop
    
            goto L_80061218;
    }
    // 0x80061210: nop

    // 0x80061214: break       7
    do_break(2147881492);
L_80061218:
    // 0x80061218: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006121C: bne         $s5, $at, L_80061230
    if (ctx->r21 != ctx->r1) {
        // 0x80061220: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80061230;
    }
    // 0x80061220: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80061224: bne         $s2, $at, L_80061230
    if (ctx->r18 != ctx->r1) {
        // 0x80061228: nop
    
            goto L_80061230;
    }
    // 0x80061228: nop

    // 0x8006122C: break       6
    do_break(2147881516);
L_80061230:
    // 0x80061230: mflo        $a1
    ctx->r5 = lo;
    // 0x80061234: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x80061238: jal         0x80018604
    // 0x8006123C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80018604(rdram, ctx);
        goto after_11;
    // 0x8006123C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_11:
L_80061240:
    // 0x80061240: jal         0x80007AB0
    // 0x80061244: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x80061244: nop

    after_12:
    // 0x80061248: bne         $s4, $s6, L_80061140
    if (ctx->r20 != ctx->r22) {
        // 0x8006124C: or          $s1, $s4, $zero
        ctx->r17 = ctx->r20 | 0;
            goto L_80061140;
    }
    // 0x8006124C: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
L_80061250:
    // 0x80061250: addiu       $s0, $sp, 0x94
    ctx->r16 = ADD32(ctx->r29, 0X94);
    // 0x80061254: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x80061258: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8006125C:
    // 0x8006125C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80061260: jal         0x8001C568
    // 0x80061264: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x80061264: nop

    after_13:
    // 0x80061268: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006126C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80061270: bne         $at, $zero, L_8006125C
    if (ctx->r1 != 0) {
        // 0x80061274: nop
    
            goto L_8006125C;
    }
    // 0x80061274: nop

    // 0x80061278: jal         0x8005CD50
    // 0x8006127C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x8006127C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_14:
    // 0x80061280: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80061284: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80061288: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006128C: nop

    // 0x80061290: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80061294: jal         0x80007AE0
    // 0x80061298: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x80061298: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_15:
    // 0x8006129C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800612A0: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x800612A4: jr          $ra
    // 0x800612A8: nop

    return;
    // 0x800612A8: nop

;}
RECOMP_FUNC void func_800612AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800612AC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800612B0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800612B4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800612B8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800612BC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800612C0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800612C4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x800612C8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800612CC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800612D0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800612D4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800612D8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800612DC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800612E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800612E4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800612E8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800612EC: jal         0x800610B8
    // 0x800612F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_800610B8(rdram, ctx);
        goto after_0;
    // 0x800612F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800612F4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800612F8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800612FC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80061300: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80061304: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80061308: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006130C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80061310: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80061314: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80061318: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8006131C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80061320: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80061324: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80061328: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8006132C: jr          $ra
    // 0x80061330: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80061330: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80061334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061334: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80061338: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006133C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80061340: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80061344: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80061348: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8006134C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80061350: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80061354: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80061358: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8006135C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80061360: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80061364: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80061368: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8006136C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80061370: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80061374: jal         0x800610B8
    // 0x80061378: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_800610B8(rdram, ctx);
        goto after_0;
    // 0x80061378: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006137C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80061380: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80061384: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80061388: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006138C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80061390: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80061394: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80061398: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8006139C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800613A0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800613A4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800613A8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x800613AC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x800613B0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x800613B4: jr          $ra
    // 0x800613B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800613B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800613BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800613BC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800613C0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800613C4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800613C8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800613CC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800613D0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800613D4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x800613D8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800613DC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800613E0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800613E4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800613E8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800613EC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800613F0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800613F4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800613F8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800613FC: jal         0x800610B8
    // 0x80061400: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_800610B8(rdram, ctx);
        goto after_0;
    // 0x80061400: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80061404: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80061408: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006140C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80061410: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80061414: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80061418: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006141C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80061420: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80061424: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80061428: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8006142C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80061430: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80061434: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80061438: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8006143C: jr          $ra
    // 0x80061440: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80061440: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80061444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061444: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80061448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006144C: jal         0x80007774
    // 0x80061450: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80061450: nop

    after_0:
    // 0x80061454: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x80061458: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8006145C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80061460: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80061464: jal         0x8001D138
    // 0x80061468: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80061468: sw          $t6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r14;
    after_1:
    // 0x8006146C: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x80061470: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80061474: jal         0x80019164
    // 0x80061478: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80061478: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8006147C: sw          $s0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r16;
    // 0x80061480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80061484: jal         0x8001C468
    // 0x80061488: addiu       $a1, $zero, 0x7B2
    ctx->r5 = ADD32(0, 0X7B2);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80061488: addiu       $a1, $zero, 0x7B2
    ctx->r5 = ADD32(0, 0X7B2);
    after_3:
    // 0x8006148C: sll         $t7, $s5, 2
    ctx->r15 = S32(ctx->r21 << 2);
    // 0x80061490: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80061494: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80061498: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8006149C: lwc1        $f4, 0x1E2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1E2C);
    // 0x800614A0: addiu       $fp, $sp, 0x88
    ctx->r30 = ADD32(ctx->r29, 0X88);
    // 0x800614A4: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x800614A8: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x800614AC: swc1        $f12, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f12.u32l;
    // 0x800614B0: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    // 0x800614B4: jal         0x80019114
    // 0x800614B8: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x800614B8: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x800614BC: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x800614C0: jal         0x8005D1B4
    // 0x800614C4: addiu       $a0, $s5, 0x5
    ctx->r4 = ADD32(ctx->r21, 0X5);
    func_8005D1B4(rdram, ctx);
        goto after_5;
    // 0x800614C4: addiu       $a0, $s5, 0x5
    ctx->r4 = ADD32(ctx->r21, 0X5);
    after_5:
    // 0x800614C8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800614CC: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x800614D0: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x800614D4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800614D8: addiu       $s3, $s3, 0x1E38
    ctx->r19 = ADD32(ctx->r19, 0X1E38);
    // 0x800614DC: addiu       $s4, $s4, 0x1E44
    ctx->r20 = ADD32(ctx->r20, 0X1E44);
    // 0x800614E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800614E4: addiu       $s7, $zero, 0xA
    ctx->r23 = ADD32(0, 0XA);
    // 0x800614E8: addiu       $s6, $zero, 0xD
    ctx->r22 = ADD32(0, 0XD);
    // 0x800614EC: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
L_800614F0:
    // 0x800614F0: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x800614F4: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x800614F8: nop

    // 0x800614FC: andi        $t6, $t9, 0x4000
    ctx->r14 = ctx->r25 & 0X4000;
    // 0x80061500: bne         $t6, $zero, L_800616A8
    if (ctx->r14 != 0) {
        // 0x80061504: addiu       $s0, $sp, 0x94
        ctx->r16 = ADD32(ctx->r29, 0X94);
            goto L_800616A8;
    }
    // 0x80061504: addiu       $s0, $sp, 0x94
    ctx->r16 = ADD32(ctx->r29, 0X94);
    // 0x80061508: beq         $at, $zero, L_8006151C
    if (ctx->r1 == 0) {
        // 0x8006150C: slti        $at, $s1, 0x14
        ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
            goto L_8006151C;
    }
    // 0x8006150C: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x80061510: b           L_8006152C
    // 0x80061514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_8006152C;
    // 0x80061514: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80061518: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
L_8006151C:
    // 0x8006151C: beq         $at, $zero, L_8006152C
    if (ctx->r1 == 0) {
        // 0x80061520: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8006152C;
    }
    // 0x80061520: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80061524: b           L_8006152C
    // 0x80061528: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8006152C;
    // 0x80061528: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8006152C:
    // 0x8006152C: beq         $s5, $zero, L_80061554
    if (ctx->r21 == 0) {
        // 0x80061530: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_80061554;
    }
    // 0x80061530: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80061534: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80061538: beq         $s5, $at, L_80061590
    if (ctx->r21 == ctx->r1) {
        // 0x8006153C: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_80061590;
    }
    // 0x8006153C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80061540: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80061544: beq         $s5, $at, L_800615D8
    if (ctx->r21 == ctx->r1) {
        // 0x80061548: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_800615D8;
    }
    // 0x80061548: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8006154C: b           L_80061620
    // 0x80061550: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
        goto L_80061620;
    // 0x80061550: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
L_80061554:
    // 0x80061554: lwc1        $f12, 0x90($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80061558: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8006155C: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80061560: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x80061564: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80061568: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8006156C: add.s       $f6, $f10, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80061570: addu        $t7, $s4, $v0
    ctx->r15 = ADD32(ctx->r20, ctx->r2);
    // 0x80061574: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80061578: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x8006157C: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x80061580: add.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80061584: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    // 0x80061588: b           L_8006161C
    // 0x8006158C: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
        goto L_8006161C;
    // 0x8006158C: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
L_80061590:
    // 0x80061590: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x80061594: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80061598: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8006159C: add.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800615A0: addu        $t8, $s4, $v0
    ctx->r24 = ADD32(ctx->r20, ctx->r2);
    // 0x800615A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800615A8: lwc1        $f2, 0x0($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800615AC: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800615B0: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x800615B4: lwc1        $f12, 0x90($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800615B8: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800615BC: add.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x800615C0: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x800615C4: add.s       $f12, $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f8.fl;
    // 0x800615C8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800615CC: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
    // 0x800615D0: b           L_8006161C
    // 0x800615D4: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
        goto L_8006161C;
    // 0x800615D4: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
L_800615D8:
    // 0x800615D8: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x800615DC: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800615E0: lwc1        $f10, 0x88($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800615E4: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x800615E8: addu        $t9, $s4, $v0
    ctx->r25 = ADD32(ctx->r20, ctx->r2);
    // 0x800615EC: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800615F0: lwc1        $f12, 0x90($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X90);
    // 0x800615F4: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800615F8: lwc1        $f10, 0x0($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X0);
    // 0x800615FC: swc1        $f8, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f8.u32l;
    // 0x80061600: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80061604: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80061608: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006160C: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80061610: swc1        $f8, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f8.u32l;
    // 0x80061614: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x80061618: swc1        $f12, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f12.u32l;
L_8006161C:
    // 0x8006161C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
L_80061620:
    // 0x80061620: jal         0x80019114
    // 0x80061624: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x80061624: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_6:
    // 0x80061628: slti        $at, $s1, -0x3
    ctx->r1 = SIGNED(ctx->r17) < -0X3 ? 1 : 0;
    // 0x8006162C: bne         $at, $zero, L_80061690
    if (ctx->r1 != 0) {
        // 0x80061630: subu        $v0, $s7, $s1
        ctx->r2 = SUB32(ctx->r23, ctx->r17);
            goto L_80061690;
    }
    // 0x80061630: subu        $v0, $s7, $s1
    ctx->r2 = SUB32(ctx->r23, ctx->r17);
    // 0x80061634: lw          $s0, 0x94($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X94);
    // 0x80061638: sll         $s2, $v0, 8
    ctx->r18 = S32(ctx->r2 << 8);
    // 0x8006163C: bne         $s6, $v0, L_80061654
    if (ctx->r22 != ctx->r2) {
        // 0x80061640: subu        $s2, $s2, $v0
        ctx->r18 = SUB32(ctx->r18, ctx->r2);
            goto L_80061654;
    }
    // 0x80061640: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x80061644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80061648: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006164C: jal         0x80018658
    // 0x80061650: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x80061650: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_80061654:
    // 0x80061654: div         $zero, $s2, $s6
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r22)));
    // 0x80061658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006165C: bne         $s6, $zero, L_80061668
    if (ctx->r22 != 0) {
        // 0x80061660: nop
    
            goto L_80061668;
    }
    // 0x80061660: nop

    // 0x80061664: break       7
    do_break(2147882596);
L_80061668:
    // 0x80061668: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006166C: bne         $s6, $at, L_80061680
    if (ctx->r22 != ctx->r1) {
        // 0x80061670: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80061680;
    }
    // 0x80061670: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80061674: bne         $s2, $at, L_80061680
    if (ctx->r18 != ctx->r1) {
        // 0x80061678: nop
    
            goto L_80061680;
    }
    // 0x80061678: nop

    // 0x8006167C: break       6
    do_break(2147882620);
L_80061680:
    // 0x80061680: mflo        $a1
    ctx->r5 = lo;
    // 0x80061684: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80061688: jal         0x80018604
    // 0x8006168C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_8;
    // 0x8006168C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_8:
L_80061690:
    // 0x80061690: jal         0x80007AB0
    // 0x80061694: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x80061694: nop

    after_9:
    // 0x80061698: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006169C: bne         $s1, $s7, L_800614F0
    if (ctx->r17 != ctx->r23) {
        // 0x800616A0: lw          $t8, 0x98($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X98);
            goto L_800614F0;
    }
    // 0x800616A0: lw          $t8, 0x98($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X98);
    // 0x800616A4: addiu       $s0, $sp, 0x94
    ctx->r16 = ADD32(ctx->r29, 0X94);
L_800616A8:
    // 0x800616A8: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x800616AC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_800616B0:
    // 0x800616B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800616B4: jal         0x8001C568
    // 0x800616B8: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x800616B8: nop

    after_10:
    // 0x800616BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800616C0: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800616C4: bne         $at, $zero, L_800616B0
    if (ctx->r1 != 0) {
        // 0x800616C8: nop
    
            goto L_800616B0;
    }
    // 0x800616C8: nop

    // 0x800616CC: lw          $a0, 0x98($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X98);
    // 0x800616D0: jal         0x8005CD50
    // 0x800616D4: nop

    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x800616D4: nop

    after_11:
    // 0x800616D8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800616DC: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800616E0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800616E4: nop

    // 0x800616E8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800616EC: jal         0x80007AE0
    // 0x800616F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x800616F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_12:
    // 0x800616F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800616F8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x800616FC: jr          $ra
    // 0x80061700: nop

    return;
    // 0x80061700: nop

;}
RECOMP_FUNC void func_80061704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061704: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80061708: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8006170C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80061710: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80061714: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80061718: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8006171C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80061720: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80061724: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80061728: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8006172C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80061730: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80061734: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80061738: jal         0x80061444
    // 0x8006173C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    func_80061444(rdram, ctx);
        goto after_0;
    // 0x8006173C: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    after_0:
    // 0x80061740: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80061744: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80061748: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006174C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80061750: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80061754: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80061758: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8006175C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80061760: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80061764: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80061768: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8006176C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80061770: jr          $ra
    // 0x80061774: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80061774: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80061778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061778: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8006177C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80061780: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80061784: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80061788: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8006178C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80061790: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80061794: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80061798: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8006179C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800617A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800617A4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800617A8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800617AC: jal         0x80061444
    // 0x800617B0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    func_80061444(rdram, ctx);
        goto after_0;
    // 0x800617B0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    after_0:
    // 0x800617B4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800617B8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800617BC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800617C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800617C4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800617C8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800617CC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800617D0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800617D4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800617D8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800617DC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x800617E0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x800617E4: jr          $ra
    // 0x800617E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800617E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800617EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800617EC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800617F0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800617F4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800617F8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x800617FC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80061800: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80061804: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80061808: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8006180C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80061810: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80061814: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80061818: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006181C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80061820: jal         0x80061444
    // 0x80061824: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    func_80061444(rdram, ctx);
        goto after_0;
    // 0x80061824: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    after_0:
    // 0x80061828: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8006182C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80061830: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80061834: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80061838: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8006183C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80061840: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80061844: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80061848: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8006184C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80061850: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80061854: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80061858: jr          $ra
    // 0x8006185C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8006185C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80061860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061860: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80061864: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80061868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006186C: addiu       $t6, $t6, 0x21B0
    ctx->r14 = ADD32(ctx->r14, 0X21B0);
    // 0x80061870: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80061874: addiu       $s1, $sp, 0x8C
    ctx->r17 = ADD32(ctx->r29, 0X8C);
    // 0x80061878: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x8006187C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80061880: nop

    // 0x80061884: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x80061888: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006188C: jal         0x80007774
    // 0x80061890: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80061890: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    after_0:
    // 0x80061894: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80061898: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006189C: addiu       $a0, $zero, 0x769
    ctx->r4 = ADD32(0, 0X769);
    // 0x800618A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800618A4: jal         0x8001D138
    // 0x800618A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800618A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800618AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800618B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800618B4: jal         0x80019164
    // 0x800618B8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800618B8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x800618BC: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x800618C0: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x800618C4: sll         $t8, $s4, 2
    ctx->r24 = S32(ctx->r20 << 2);
    // 0x800618C8: addu        $t7, $s1, $t8
    ctx->r15 = ADD32(ctx->r17, ctx->r24);
    // 0x800618CC: lwc1        $f0, 0x0($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800618D0: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x800618D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800618D8: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x800618DC: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x800618E0: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x800618E4: jal         0x80019114
    // 0x800618E8: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x800618E8: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x800618EC: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x800618F0: addiu       $s6, $s6, 0x1E5C
    ctx->r22 = ADD32(ctx->r22, 0X1E5C);
    // 0x800618F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800618F8: addiu       $fp, $zero, 0x16
    ctx->r30 = ADD32(0, 0X16);
    // 0x800618FC: addiu       $s7, $zero, 0x19
    ctx->r23 = ADD32(0, 0X19);
    // 0x80061900: addiu       $s5, $zero, -0x801
    ctx->r21 = ADD32(0, -0X801);
L_80061904:
    // 0x80061904: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x80061908: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8006190C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x80061910: bne         $t6, $zero, L_800619E4
    if (ctx->r14 != 0) {
        // 0x80061914: addiu       $t9, $t9, 0x1E68
        ctx->r25 = ADD32(ctx->r25, 0X1E68);
            goto L_800619E4;
    }
    // 0x80061914: addiu       $t9, $t9, 0x1E68
    ctx->r25 = ADD32(ctx->r25, 0X1E68);
    // 0x80061918: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x8006191C: beq         $t8, $zero, L_80061940
    if (ctx->r24 == 0) {
        // 0x80061920: addu        $s1, $s4, $t9
        ctx->r17 = ADD32(ctx->r20, ctx->r25);
            goto L_80061940;
    }
    // 0x80061920: addu        $s1, $s4, $t9
    ctx->r17 = ADD32(ctx->r20, ctx->r25);
    // 0x80061924: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80061928: jal         0x80019164
    // 0x8006192C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006192C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x80061930: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x80061934: nop

    // 0x80061938: and         $t6, $t7, $s5
    ctx->r14 = ctx->r15 & ctx->r21;
    // 0x8006193C: sw          $t6, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r14;
L_80061940:
    // 0x80061940: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80061944: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80061948: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8006194C: beq         $at, $zero, L_8006198C
    if (ctx->r1 == 0) {
        // 0x80061950: addu        $v0, $s6, $s4
        ctx->r2 = ADD32(ctx->r22, ctx->r20);
            goto L_8006198C;
    }
    // 0x80061950: addu        $v0, $s6, $s4
    ctx->r2 = ADD32(ctx->r22, ctx->r20);
    // 0x80061954: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80061958: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8006195C: lwc1        $f10, 0x78($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80061960: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80061964: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80061968: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x8006196C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80061970: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80061974: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80061978: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x8006197C: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80061980: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x80061984: jal         0x80019114
    // 0x80061988: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80061988: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    after_5:
L_8006198C:
    // 0x8006198C: beq         $s2, $zero, L_800619AC
    if (ctx->r18 == 0) {
        // 0x80061990: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800619AC;
    }
    // 0x80061990: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80061994: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80061998: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    // 0x8006199C: jal         0x80018658
    // 0x800619A0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_6;
    // 0x800619A0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_6:
    // 0x800619A4: b           L_800619D0
    // 0x800619A8: nop

        goto L_800619D0;
    // 0x800619A8: nop

L_800619AC:
    // 0x800619AC: beq         $s0, $fp, L_800619BC
    if (ctx->r16 == ctx->r30) {
        // 0x800619B0: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_800619BC;
    }
    // 0x800619B0: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x800619B4: bne         $s0, $at, L_800619D0
    if (ctx->r16 != ctx->r1) {
        // 0x800619B8: nop
    
            goto L_800619D0;
    }
    // 0x800619B8: nop

L_800619BC:
    // 0x800619BC: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x800619C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800619C4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x800619C8: jal         0x80018658
    // 0x800619CC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x800619CC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    after_7:
L_800619D0:
    // 0x800619D0: jal         0x80007AB0
    // 0x800619D4: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x800619D4: nop

    after_8:
    // 0x800619D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800619DC: bne         $s0, $s7, L_80061904
    if (ctx->r16 != ctx->r23) {
        // 0x800619E0: nop
    
            goto L_80061904;
    }
    // 0x800619E0: nop

L_800619E4:
    // 0x800619E4: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x800619E8: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x800619EC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_800619F0:
    // 0x800619F0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800619F4: jal         0x8001C568
    // 0x800619F8: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x800619F8: nop

    after_9:
    // 0x800619FC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80061A00: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80061A04: bne         $at, $zero, L_800619F0
    if (ctx->r1 != 0) {
        // 0x80061A08: nop
    
            goto L_800619F0;
    }
    // 0x80061A08: nop

    // 0x80061A0C: jal         0x8005CD50
    // 0x80061A10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x80061A10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
    // 0x80061A14: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80061A18: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80061A1C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80061A20: nop

    // 0x80061A24: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80061A28: jal         0x80007AE0
    // 0x80061A2C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x80061A2C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_11:
    // 0x80061A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80061A34: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    // 0x80061A38: jr          $ra
    // 0x80061A3C: nop

    return;
    // 0x80061A3C: nop

;}
RECOMP_FUNC void func_80061A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061A40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80061A44: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80061A48: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80061A4C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80061A50: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80061A54: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80061A58: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80061A5C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80061A60: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80061A64: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80061A68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80061A6C: jal         0x80061860
    // 0x80061A70: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    func_80061860(rdram, ctx);
        goto after_0;
    // 0x80061A70: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    after_0:
    // 0x80061A74: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80061A78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80061A7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80061A80: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80061A84: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80061A88: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80061A8C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80061A90: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80061A94: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80061A98: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80061A9C: jr          $ra
    // 0x80061AA0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80061AA0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80061AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061AA4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80061AA8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80061AAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80061AB0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80061AB4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80061AB8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80061ABC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80061AC0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80061AC4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80061AC8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80061ACC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80061AD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80061AD4: jal         0x80061860
    // 0x80061AD8: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    func_80061860(rdram, ctx);
        goto after_0;
    // 0x80061AD8: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    after_0:
    // 0x80061ADC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80061AE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80061AE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80061AE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80061AEC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80061AF0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80061AF4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80061AF8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80061AFC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80061B00: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80061B04: jr          $ra
    // 0x80061B08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80061B08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80061B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061B0C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80061B10: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80061B14: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80061B18: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80061B1C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80061B20: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80061B24: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80061B28: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80061B2C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80061B30: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80061B34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80061B38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80061B3C: jal         0x80061860
    // 0x80061B40: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    func_80061860(rdram, ctx);
        goto after_0;
    // 0x80061B40: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    after_0:
    // 0x80061B44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80061B48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80061B4C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80061B50: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80061B54: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80061B58: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80061B5C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80061B60: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80061B64: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80061B68: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80061B6C: jr          $ra
    // 0x80061B70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80061B70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80061B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061B74: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80061B78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80061B7C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80061B80: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80061B84: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80061B88: jal         0x80007774
    // 0x80061B8C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80061B8C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80061B90: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80061B94: addiu       $a0, $zero, 0x7A8
    ctx->r4 = ADD32(0, 0X7A8);
    // 0x80061B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80061B9C: jal         0x8001D138
    // 0x80061BA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80061BA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80061BA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80061BA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80061BAC: jal         0x80019164
    // 0x80061BB0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80061BB0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x80061BB4: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x80061BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80061BBC: jal         0x8001C468
    // 0x80061BC0: addiu       $a1, $zero, 0x7A8
    ctx->r5 = ADD32(0, 0X7A8);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80061BC0: addiu       $a1, $zero, 0x7A8
    ctx->r5 = ADD32(0, 0X7A8);
    after_3:
    // 0x80061BC4: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80061BC8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80061BCC: jal         0x800192E8
    // 0x80061BD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x80061BD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80061BD4: lw          $s0, 0x74($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X74);
    // 0x80061BD8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80061BDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80061BE0: jal         0x80018658
    // 0x80061BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x80061BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80061BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80061BEC: jal         0x80018604
    // 0x80061BF0: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    func_80018604(rdram, ctx);
        goto after_6;
    // 0x80061BF0: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_6:
    // 0x80061BF4: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
L_80061BF8:
    // 0x80061BF8: nop

    // 0x80061BFC: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80061C00: bne         $t7, $zero, L_80061C1C
    if (ctx->r15 != 0) {
        // 0x80061C04: addiu       $s0, $sp, 0x74
        ctx->r16 = ADD32(ctx->r29, 0X74);
            goto L_80061C1C;
    }
    // 0x80061C04: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
    // 0x80061C08: jal         0x80007AB0
    // 0x80061C0C: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x80061C0C: nop

    after_7:
    // 0x80061C10: b           L_80061BF8
    // 0x80061C14: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
        goto L_80061BF8;
    // 0x80061C14: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x80061C18: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
L_80061C1C:
    // 0x80061C1C: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_80061C20:
    // 0x80061C20: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80061C24: jal         0x8001C568
    // 0x80061C28: nop

    func_8001C568(rdram, ctx);
        goto after_8;
    // 0x80061C28: nop

    after_8:
    // 0x80061C2C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80061C30: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80061C34: bne         $at, $zero, L_80061C20
    if (ctx->r1 != 0) {
        // 0x80061C38: nop
    
            goto L_80061C20;
    }
    // 0x80061C38: nop

    // 0x80061C3C: jal         0x8005CD50
    // 0x80061C40: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x80061C40: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_9:
    // 0x80061C44: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80061C48: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80061C4C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80061C50: nop

    // 0x80061C54: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80061C58: jal         0x80007AE0
    // 0x80061C5C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x80061C5C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_10:
    // 0x80061C60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80061C64: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80061C68: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80061C6C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80061C70: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80061C74: jr          $ra
    // 0x80061C78: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80061C78: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80061C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061C7C: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x80061C80: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80061C84: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x80061C88: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x80061C8C: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80061C90: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80061C94: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80061C98: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80061C9C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80061CA0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80061CA4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80061CA8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80061CAC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80061CB0: jal         0x80007774
    // 0x80061CB4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80061CB4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80061CB8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80061CBC: addiu       $t7, $t7, 0x21BC
    ctx->r15 = ADD32(ctx->r15, 0X21BC);
    // 0x80061CC0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80061CC4: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80061CC8: addiu       $t6, $sp, 0x9C
    ctx->r14 = ADD32(ctx->r29, 0X9C);
    // 0x80061CCC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80061CD0: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80061CD4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80061CD8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80061CDC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80061CE0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80061CE4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80061CE8: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x80061CEC: addiu       $s2, $sp, 0xCC
    ctx->r18 = ADD32(ctx->r29, 0XCC);
    // 0x80061CF0: addiu       $s6, $sp, 0x9C
    ctx->r22 = ADD32(ctx->r29, 0X9C);
    // 0x80061CF4: addiu       $s7, $sp, 0x6C
    ctx->r23 = ADD32(ctx->r29, 0X6C);
    // 0x80061CF8: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x80061CFC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
L_80061D00:
    // 0x80061D00: addiu       $t8, $s1, -0x1
    ctx->r24 = ADD32(ctx->r17, -0X1);
    // 0x80061D04: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80061D08: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80061D0C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80061D10: addiu       $a0, $zero, 0x76B
    ctx->r4 = ADD32(0, 0X76B);
    // 0x80061D14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80061D18: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80061D1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80061D20: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80061D24: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x80061D28: lwc1        $f8, 0x4($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80061D2C: nop

    // 0x80061D30: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x80061D34: lwc1        $f4, 0x8($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80061D38: jal         0x8001D138
    // 0x80061D3C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80061D3C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x80061D40: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80061D44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80061D48: jal         0x80019164
    // 0x80061D4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80061D4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80061D50: lwc1        $f0, 0x0($s6)
    ctx->f0.u32l = MEM_W(ctx->r22, 0X0);
    // 0x80061D54: sw          $s4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r20;
    // 0x80061D58: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80061D5C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80061D60: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x80061D64: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x80061D68: jal         0x80019114
    // 0x80061D6C: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x80061D6C: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x80061D70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80061D74: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80061D78: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80061D7C: bne         $s1, $s5, L_80061D00
    if (ctx->r17 != ctx->r21) {
        // 0x80061D80: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_80061D00;
    }
    // 0x80061D80: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x80061D84: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80061D88: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80061D8C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80061D90: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
L_80061D94:
    // 0x80061D94: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80061D98: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80061D9C: bne         $t7, $zero, L_80061E84
    if (ctx->r15 != 0) {
        // 0x80061DA0: addiu       $s0, $sp, 0xA8
        ctx->r16 = ADD32(ctx->r29, 0XA8);
            goto L_80061E84;
    }
    // 0x80061DA0: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x80061DA4: addiu       $s2, $sp, 0xCC
    ctx->r18 = ADD32(ctx->r29, 0XCC);
L_80061DA8:
    // 0x80061DA8: jal         0x80028AB8
    // 0x80061DAC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80028AB8(rdram, ctx);
        goto after_4;
    // 0x80061DAC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_4:
    // 0x80061DB0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80061DB4: jal         0x800191E8
    // 0x80061DB8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800191E8(rdram, ctx);
        goto after_5;
    // 0x80061DB8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_5:
    // 0x80061DBC: beq         $s1, $s4, L_80061E34
    if (ctx->r17 == ctx->r20) {
        // 0x80061DC0: nop
    
            goto L_80061E34;
    }
    // 0x80061DC0: nop

    // 0x80061DC4: jal         0x80027F1C
    // 0x80061DC8: nop

    func_80027F1C(rdram, ctx);
        goto after_6;
    // 0x80061DC8: nop

    after_6:
    // 0x80061DCC: cvt.s.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f6.fl = CVT_S_D(ctx->f0.d);
    // 0x80061DD0: addiu       $t9, $s1, -0x1
    ctx->r25 = ADD32(ctx->r17, -0X1);
    // 0x80061DD4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80061DD8: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80061DDC: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80061DE0: lwc1        $f10, 0x0($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80061DE4: mul.s       $f4, $f8, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80061DE8: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80061DEC: jal         0x80027F1C
    // 0x80061DF0: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    func_80027F1C(rdram, ctx);
        goto after_7;
    // 0x80061DF0: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    after_7:
    // 0x80061DF4: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x80061DF8: lwc1        $f6, 0x4($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80061DFC: mul.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x80061E00: nop

    // 0x80061E04: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80061E08: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80061E0C: jal         0x80027F1C
    // 0x80061E10: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    func_80027F1C(rdram, ctx);
        goto after_8;
    // 0x80061E10: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    after_8:
    // 0x80061E14: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x80061E18: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80061E1C: mul.s       $f10, $f4, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80061E20: nop

    // 0x80061E24: mul.s       $f6, $f10, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80061E28: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80061E2C: b           L_80061E58
    // 0x80061E30: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
        goto L_80061E58;
    // 0x80061E30: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
L_80061E34:
    // 0x80061E34: lwc1        $f10, 0x0($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80061E38: nop

    // 0x80061E3C: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80061E40: lwc1        $f6, 0x4($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80061E44: nop

    // 0x80061E48: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80061E4C: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80061E50: nop

    // 0x80061E54: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_80061E58:
    // 0x80061E58: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80061E5C: jal         0x80019164
    // 0x80061E60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x80061E60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x80061E64: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80061E68: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80061E6C: bne         $s1, $s5, L_80061DA8
    if (ctx->r17 != ctx->r21) {
        // 0x80061E70: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80061DA8;
    }
    // 0x80061E70: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80061E74: jal         0x80007AB0
    // 0x80061E78: nop

    func_80007AB0(rdram, ctx);
        goto after_10;
    // 0x80061E78: nop

    after_10:
    // 0x80061E7C: b           L_80061D94
    // 0x80061E80: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
        goto L_80061D94;
    // 0x80061E80: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
L_80061E84:
    // 0x80061E84: addiu       $s0, $sp, 0xCC
    ctx->r16 = ADD32(ctx->r29, 0XCC);
    // 0x80061E88: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_80061E8C:
    // 0x80061E8C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80061E90: jal         0x8001C568
    // 0x80061E94: nop

    func_8001C568(rdram, ctx);
        goto after_11;
    // 0x80061E94: nop

    after_11:
    // 0x80061E98: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80061E9C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80061EA0: bne         $at, $zero, L_80061E8C
    if (ctx->r1 != 0) {
        // 0x80061EA4: nop
    
            goto L_80061E8C;
    }
    // 0x80061EA4: nop

    // 0x80061EA8: jal         0x8005CD50
    // 0x80061EAC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_12;
    // 0x80061EAC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_12:
    // 0x80061EB0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80061EB4: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80061EB8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80061EBC: nop

    // 0x80061EC0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80061EC4: jal         0x80007AE0
    // 0x80061EC8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_13;
    // 0x80061EC8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_13:
    // 0x80061ECC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80061ED0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80061ED4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80061ED8: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80061EDC: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80061EE0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80061EE4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80061EE8: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80061EEC: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80061EF0: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80061EF4: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x80061EF8: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x80061EFC: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x80061F00: jr          $ra
    // 0x80061F04: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x80061F04: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_80061F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80061F08: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x80061F0C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80061F10: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80061F14: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80061F18: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80061F1C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80061F20: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80061F24: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80061F28: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80061F2C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80061F30: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80061F34: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80061F38: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80061F3C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80061F40: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80061F44: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80061F48: jal         0x80007774
    // 0x80061F4C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80061F4C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80061F50: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80061F54: lwc1        $f24, 0x6330($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6330);
    // 0x80061F58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80061F5C: lui         $s1, 0x8009
    ctx->r17 = S32(0X8009 << 16);
    // 0x80061F60: lw          $s6, 0x1C($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X1C);
    // 0x80061F64: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80061F68: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80061F6C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80061F70: addiu       $s1, $s1, 0x1DB4
    ctx->r17 = ADD32(ctx->r17, 0X1DB4);
    // 0x80061F74: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80061F78: addiu       $s4, $sp, 0xC8
    ctx->r20 = ADD32(ctx->r29, 0XC8);
    // 0x80061F7C: addiu       $s2, $sp, 0xE0
    ctx->r18 = ADD32(ctx->r29, 0XE0);
    // 0x80061F80: addiu       $s5, $sp, 0xB0
    ctx->r21 = ADD32(ctx->r29, 0XB0);
    // 0x80061F84: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_80061F88:
    // 0x80061F88: lwc1        $f0, 0x0($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80061F8C: swc1        $f20, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f20.u32l;
    // 0x80061F90: swc1        $f20, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f20.u32l;
    // 0x80061F94: swc1        $f0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f0.u32l;
    // 0x80061F98: lwc1        $f4, 0x0($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X0);
    // 0x80061F9C: addiu       $a0, $zero, 0x76B
    ctx->r4 = ADD32(0, 0X76B);
    // 0x80061FA0: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80061FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80061FA8: swc1        $f6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f6.u32l;
    // 0x80061FAC: lwc1        $f8, 0x4($s6)
    ctx->f8.u32l = MEM_W(ctx->r22, 0X4);
    // 0x80061FB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80061FB4: swc1        $f8, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f8.u32l;
    // 0x80061FB8: lwc1        $f10, 0x8($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X8);
    // 0x80061FBC: jal         0x8001D138
    // 0x80061FC0: swc1        $f10, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f10.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80061FC0: swc1        $f10, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f10.u32l;
    after_1:
    // 0x80061FC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80061FC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80061FCC: jal         0x80019164
    // 0x80061FD0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80061FD0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x80061FD4: mtc1        $fp, $f4
    ctx->f4.u32l = ctx->r30;
    // 0x80061FD8: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
    // 0x80061FDC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80061FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80061FE4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80061FE8: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80061FEC: sub.s       $f0, $f22, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f22.fl - ctx->f8.fl;
    // 0x80061FF0: swc1        $f0, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->f0.u32l;
    // 0x80061FF4: swc1        $f0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->f0.u32l;
    // 0x80061FF8: jal         0x80019114
    // 0x80061FFC: swc1        $f0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x80061FFC: swc1        $f0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f0.u32l;
    after_3:
    // 0x80062000: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80062004: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x80062008: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006200C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80062010: bne         $fp, $s3, L_80061F88
    if (ctx->r30 != ctx->r19) {
        // 0x80062014: addiu       $s5, $s5, 0xC
        ctx->r21 = ADD32(ctx->r21, 0XC);
            goto L_80061F88;
    }
    // 0x80062014: addiu       $s5, $s5, 0xC
    ctx->r21 = ADD32(ctx->r21, 0XC);
    // 0x80062018: addiu       $fp, $sp, 0xE0
    ctx->r30 = ADD32(ctx->r29, 0XE0);
L_8006201C:
    // 0x8006201C: lw          $t6, 0x24($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X24);
    // 0x80062020: addiu       $s4, $sp, 0xC8
    ctx->r20 = ADD32(ctx->r29, 0XC8);
    // 0x80062024: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80062028: bne         $t7, $zero, L_80062104
    if (ctx->r15 != 0) {
        // 0x8006202C: addiu       $s5, $sp, 0xE0
        ctx->r21 = ADD32(ctx->r29, 0XE0);
            goto L_80062104;
    }
    // 0x8006202C: addiu       $s5, $sp, 0xE0
    ctx->r21 = ADD32(ctx->r29, 0XE0);
L_80062030:
    // 0x80062030: beq         $s5, $fp, L_80062058
    if (ctx->r21 == ctx->r30) {
        // 0x80062034: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80062058;
    }
    // 0x80062034: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80062038: jal         0x80028AB8
    // 0x8006203C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80028AB8(rdram, ctx);
        goto after_4;
    // 0x8006203C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_4:
    // 0x80062040: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80062044: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80062048: jal         0x8005D5E8
    // 0x8006204C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005D5E8(rdram, ctx);
        goto after_5;
    // 0x8006204C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_5:
    // 0x80062050: b           L_80062074
    // 0x80062054: lwc1        $f12, 0x10($s6)
    ctx->f12.u32l = MEM_W(ctx->r22, 0X10);
        goto L_80062074;
    // 0x80062054: lwc1        $f12, 0x10($s6)
    ctx->f12.u32l = MEM_W(ctx->r22, 0X10);
L_80062058:
    // 0x80062058: div         $zero, $s7, $at
    lo = S32(S64(S32(ctx->r23)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r23)) % S64(S32(ctx->r1)));
    // 0x8006205C: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80062060: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80062064: mfhi        $s1
    ctx->r17 = hi;
    // 0x80062068: jal         0x8005D5E8
    // 0x8006206C: nop

    func_8005D5E8(rdram, ctx);
        goto after_6;
    // 0x8006206C: nop

    after_6:
    // 0x80062070: lwc1        $f12, 0x10($s6)
    ctx->f12.u32l = MEM_W(ctx->r22, 0X10);
L_80062074:
    // 0x80062074: jal         0x8007A640
    // 0x80062078: nop

    __sinf_recomp(rdram, ctx);
        goto after_7;
    // 0x80062078: nop

    after_7:
    // 0x8006207C: lwc1        $f10, 0x8($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X8);
    // 0x80062080: nop

    // 0x80062084: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80062088: swc1        $f4, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f4.u32l;
    // 0x8006208C: lwc1        $f12, 0x10($s6)
    ctx->f12.u32l = MEM_W(ctx->r22, 0X10);
    // 0x80062090: jal         0x8007A800
    // 0x80062094: nop

    __cosf_recomp(rdram, ctx);
        goto after_8;
    // 0x80062094: nop

    after_8:
    // 0x80062098: lwc1        $f6, 0x8($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X8);
    // 0x8006209C: lwc1        $f10, 0x0($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X0);
    // 0x800620A0: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800620A4: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x800620A8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800620AC: swc1        $f8, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f8.u32l;
    // 0x800620B0: lwc1        $f4, 0x0($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X0);
    // 0x800620B4: lwc1        $f8, 0x4($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X4);
    // 0x800620B8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800620BC: swc1        $f6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f6.u32l;
    // 0x800620C0: lwc1        $f10, 0x4($s6)
    ctx->f10.u32l = MEM_W(ctx->r22, 0X4);
    // 0x800620C4: lwc1        $f6, 0x8($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X8);
    // 0x800620C8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800620CC: swc1        $f4, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f4.u32l;
    // 0x800620D0: lwc1        $f8, 0x8($s6)
    ctx->f8.u32l = MEM_W(ctx->r22, 0X8);
    // 0x800620D4: nop

    // 0x800620D8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800620DC: jal         0x80019164
    // 0x800620E0: swc1        $f10, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f10.u32l;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x800620E0: swc1        $f10, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f10.u32l;
    after_9:
    // 0x800620E4: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x800620E8: addiu       $t8, $sp, 0xE8
    ctx->r24 = ADD32(ctx->r29, 0XE8);
    // 0x800620EC: bne         $s5, $t8, L_80062030
    if (ctx->r21 != ctx->r24) {
        // 0x800620F0: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_80062030;
    }
    // 0x800620F0: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x800620F4: jal         0x80007AB0
    // 0x800620F8: nop

    func_80007AB0(rdram, ctx);
        goto after_10;
    // 0x800620F8: nop

    after_10:
    // 0x800620FC: b           L_8006201C
    // 0x80062100: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
        goto L_8006201C;
    // 0x80062100: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_80062104:
    // 0x80062104: addiu       $s4, $sp, 0xE0
    ctx->r20 = ADD32(ctx->r29, 0XE0);
    // 0x80062108: addiu       $s1, $s4, 0x8
    ctx->r17 = ADD32(ctx->r20, 0X8);
L_8006210C:
    // 0x8006210C: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80062110: jal         0x8001C568
    // 0x80062114: nop

    func_8001C568(rdram, ctx);
        goto after_11;
    // 0x80062114: nop

    after_11:
    // 0x80062118: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8006211C: sltu        $at, $s4, $s1
    ctx->r1 = ctx->r20 < ctx->r17 ? 1 : 0;
    // 0x80062120: bne         $at, $zero, L_8006210C
    if (ctx->r1 != 0) {
        // 0x80062124: nop
    
            goto L_8006210C;
    }
    // 0x80062124: nop

    // 0x80062128: jal         0x8005CD50
    // 0x8006212C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8005CD50(rdram, ctx);
        goto after_12;
    // 0x8006212C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_12:
    // 0x80062130: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80062134: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80062138: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006213C: nop

    // 0x80062140: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80062144: jal         0x80007AE0
    // 0x80062148: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_13;
    // 0x80062148: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_13:
    // 0x8006214C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80062150: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80062154: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80062158: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006215C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80062160: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80062164: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80062168: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8006216C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80062170: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80062174: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80062178: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8006217C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80062180: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80062184: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80062188: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8006218C: jr          $ra
    // 0x80062190: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x80062190: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_80062194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062194: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x80062198: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8006219C: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x800621A0: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x800621A4: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x800621A8: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x800621AC: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x800621B0: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x800621B4: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x800621B8: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x800621BC: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x800621C0: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x800621C4: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x800621C8: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x800621CC: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x800621D0: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x800621D4: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800621D8: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x800621DC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800621E0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x800621E4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800621E8: jal         0x80007774
    // 0x800621EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800621EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800621F0: lui         $s4, 0x8009
    ctx->r20 = S32(0X8009 << 16);
    // 0x800621F4: lw          $s6, 0x1C($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X1C);
    // 0x800621F8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800621FC: addiu       $s4, $s4, 0x21C8
    ctx->r20 = ADD32(ctx->r20, 0X21C8);
    // 0x80062200: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80062204: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x80062208: addiu       $s1, $sp, 0xC8
    ctx->r17 = ADD32(ctx->r29, 0XC8);
    // 0x8006220C: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
L_80062210:
    // 0x80062210: addiu       $t6, $s5, -0x1
    ctx->r14 = ADD32(ctx->r21, -0X1);
    // 0x80062214: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80062218: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8006221C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80062220: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80062224: lwc1        $f4, 0x0($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X0);
    // 0x80062228: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006222C: addiu       $a0, $zero, 0x76B
    ctx->r4 = ADD32(0, 0X76B);
    // 0x80062230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80062234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80062238: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8006223C: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x80062240: lwc1        $f8, 0x4($s6)
    ctx->f8.u32l = MEM_W(ctx->r22, 0X4);
    // 0x80062244: nop

    // 0x80062248: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8006224C: lwc1        $f4, 0x8($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X8);
    // 0x80062250: jal         0x8001D138
    // 0x80062254: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80062254: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x80062258: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8006225C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80062260: jal         0x80019164
    // 0x80062264: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80062264: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80062268: sw          $s3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r19;
    // 0x8006226C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80062270: jal         0x80019114
    // 0x80062274: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x80062274: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x80062278: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8006227C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80062280: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80062284: bne         $s5, $s7, L_80062210
    if (ctx->r21 != ctx->r23) {
        // 0x80062288: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_80062210;
    }
    // 0x80062288: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x8006228C: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80062290: lwc1        $f24, 0x0($s6)
    ctx->f24.u32l = MEM_W(ctx->r22, 0X0);
    // 0x80062294: lwc1        $f26, 0x4($s6)
    ctx->f26.u32l = MEM_W(ctx->r22, 0X4);
    // 0x80062298: lwc1        $f28, 0x8($s6)
    ctx->f28.u32l = MEM_W(ctx->r22, 0X8);
    // 0x8006229C: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x800622A0: addiu       $s7, $zero, -0x801
    ctx->r23 = ADD32(0, -0X801);
    // 0x800622A4: addiu       $s4, $sp, 0xD0
    ctx->r20 = ADD32(ctx->r29, 0XD0);
    // 0x800622A8: addiu       $s3, $sp, 0xCC
    ctx->r19 = ADD32(ctx->r29, 0XCC);
    // 0x800622AC: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
L_800622B0:
    // 0x800622B0: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x800622B4: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x800622B8: bne         $t7, $zero, L_800623AC
    if (ctx->r15 != 0) {
        // 0x800622BC: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_800623AC;
    }
    // 0x800622BC: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x800622C0: beq         $t8, $zero, L_800622DC
    if (ctx->r24 == 0) {
        // 0x800622C4: addiu       $at, $zero, 0x168
        ctx->r1 = ADD32(0, 0X168);
            goto L_800622DC;
    }
    // 0x800622C4: addiu       $at, $zero, 0x168
    ctx->r1 = ADD32(0, 0X168);
    // 0x800622C8: and         $t9, $v0, $s7
    ctx->r25 = ctx->r2 & ctx->r23;
    // 0x800622CC: lwc1        $f24, 0x0($s6)
    ctx->f24.u32l = MEM_W(ctx->r22, 0X0);
    // 0x800622D0: lwc1        $f26, 0x4($s6)
    ctx->f26.u32l = MEM_W(ctx->r22, 0X4);
    // 0x800622D4: lwc1        $f28, 0x8($s6)
    ctx->f28.u32l = MEM_W(ctx->r22, 0X8);
    // 0x800622D8: sw          $t9, 0x24($s6)
    MEM_W(0X24, ctx->r22) = ctx->r25;
L_800622DC:
    // 0x800622DC: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x800622E0: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x800622E4: addiu       $s1, $sp, 0xC8
    ctx->r17 = ADD32(ctx->r29, 0XC8);
    // 0x800622E8: mfhi        $t7
    ctx->r15 = hi;
    // 0x800622EC: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x800622F0: nop

    // 0x800622F4: cvt.s.w     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    ctx->f22.fl = CVT_S_W(ctx->f10.u32l);
L_800622F8:
    // 0x800622F8: beq         $s1, $s3, L_80062360
    if (ctx->r17 == ctx->r19) {
        // 0x800622FC: sll         $t8, $s2, 1
        ctx->r24 = S32(ctx->r18 << 1);
            goto L_80062360;
    }
    // 0x800622FC: sll         $t8, $s2, 1
    ctx->r24 = S32(ctx->r18 << 1);
    // 0x80062300: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80062304: jal         0x80027F1C
    // 0x80062308: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    func_80027F1C(rdram, ctx);
        goto after_4;
    // 0x80062308: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x8006230C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80062310: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80062314: cvt.s.d     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f8.fl = CVT_S_D(ctx->f0.d);
    // 0x80062318: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8006231C: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80062320: add.s       $f6, $f10, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x80062324: sub.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f30.fl;
    // 0x80062328: jal         0x80028C2C
    // 0x8006232C: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x8006232C: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    after_5:
    // 0x80062330: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80062334: add.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x80062338: jal         0x80027F1C
    // 0x8006233C: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    func_80027F1C(rdram, ctx);
        goto after_6;
    // 0x8006233C: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    after_6:
    // 0x80062340: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80062344: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80062348: cvt.s.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f6.fl = CVT_S_D(ctx->f0.d);
    // 0x8006234C: mul.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80062350: add.s       $f10, $f4, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x80062354: sub.s       $f6, $f10, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f30.fl;
    // 0x80062358: b           L_80062384
    // 0x8006235C: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
        goto L_80062384;
    // 0x8006235C: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
L_80062360:
    // 0x80062360: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x80062364: swc1        $f24, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f24.u32l;
    // 0x80062368: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x8006236C: jal         0x80028C2C
    // 0x80062370: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    func_80028C2C(rdram, ctx);
        goto after_7;
    // 0x80062370: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    after_7:
    // 0x80062374: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80062378: swc1        $f28, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f28.u32l;
    // 0x8006237C: add.s       $f10, $f4, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x80062380: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
L_80062384:
    // 0x80062384: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80062388: jal         0x80019164
    // 0x8006238C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x8006238C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x80062390: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80062394: bne         $s1, $s4, L_800622F8
    if (ctx->r17 != ctx->r20) {
        // 0x80062398: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_800622F8;
    }
    // 0x80062398: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8006239C: jal         0x80007AB0
    // 0x800623A0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x800623A0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_9:
    // 0x800623A4: b           L_800622B0
    // 0x800623A8: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
        goto L_800622B0;
    // 0x800623A8: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
L_800623AC:
    // 0x800623AC: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x800623B0: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_800623B4:
    // 0x800623B4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800623B8: jal         0x8001C568
    // 0x800623BC: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x800623BC: nop

    after_10:
    // 0x800623C0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800623C4: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800623C8: bne         $at, $zero, L_800623B4
    if (ctx->r1 != 0) {
        // 0x800623CC: nop
    
            goto L_800623B4;
    }
    // 0x800623CC: nop

    // 0x800623D0: jal         0x8005CD50
    // 0x800623D4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x800623D4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_11:
    // 0x800623D8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800623DC: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800623E0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800623E4: nop

    // 0x800623E8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800623EC: jal         0x80007AE0
    // 0x800623F0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x800623F0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_12:
    // 0x800623F4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x800623F8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800623FC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80062400: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80062404: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80062408: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006240C: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80062410: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80062414: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80062418: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006241C: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80062420: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80062424: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80062428: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x8006242C: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x80062430: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x80062434: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x80062438: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x8006243C: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x80062440: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x80062444: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x80062448: jr          $ra
    // 0x8006244C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x8006244C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_80062450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062450: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80062454: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80062458: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8006245C: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x80062460: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80062464: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80062468: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8006246C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80062470: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80062474: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80062478: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006247C: jal         0x80007774
    // 0x80062480: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80062480: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80062484: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80062488: addiu       $t6, $t6, 0x21E0
    ctx->r14 = ADD32(ctx->r14, 0X21E0);
    // 0x8006248C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80062490: addiu       $s7, $sp, 0x80
    ctx->r23 = ADD32(ctx->r29, 0X80);
    // 0x80062494: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80062498: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x8006249C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800624A0: addiu       $a0, $zero, 0x76B
    ctx->r4 = ADD32(0, 0X76B);
    // 0x800624A4: sw          $t9, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r25;
    // 0x800624A8: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800624AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800624B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800624B4: jal         0x8001D138
    // 0x800624B8: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800624B8: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    after_1:
    // 0x800624BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800624C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800624C4: jal         0x80019164
    // 0x800624C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800624C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x800624CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800624D0: lwc1        $f20, 0x6334($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6334);
    // 0x800624D4: sw          $s0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r16;
    // 0x800624D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800624DC: addiu       $s6, $zero, -0x801
    ctx->r22 = ADD32(0, -0X801);
    // 0x800624E0: addiu       $s5, $zero, 0xF
    ctx->r21 = ADD32(0, 0XF);
    // 0x800624E4: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
L_800624E8:
    // 0x800624E8: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x800624EC: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x800624F0: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x800624F4: bne         $t8, $zero, L_800625C4
    if (ctx->r24 != 0) {
        // 0x800624F8: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_800625C4;
    }
    // 0x800624F8: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x800624FC: beq         $t7, $zero, L_80062520
    if (ctx->r15 == 0) {
        // 0x80062500: slti        $at, $s1, 0xA
        ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
            goto L_80062520;
    }
    // 0x80062500: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80062504: jal         0x80019164
    // 0x80062508: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x80062508: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x8006250C: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x80062510: nop

    // 0x80062514: and         $t9, $t6, $s6
    ctx->r25 = ctx->r14 & ctx->r22;
    // 0x80062518: sw          $t9, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r25;
    // 0x8006251C: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
L_80062520:
    // 0x80062520: beq         $at, $zero, L_8006254C
    if (ctx->r1 == 0) {
        // 0x80062524: slti        $at, $s1, 0xA
        ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
            goto L_8006254C;
    }
    // 0x80062524: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80062528: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8006252C: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80062530: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x80062534: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80062538: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8006253C: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x80062540: jal         0x80019114
    // 0x80062544: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x80062544: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80062548: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
L_8006254C:
    // 0x8006254C: bne         $at, $zero, L_800625B0
    if (ctx->r1 != 0) {
        // 0x80062550: subu        $v0, $s5, $s1
        ctx->r2 = SUB32(ctx->r21, ctx->r17);
            goto L_800625B0;
    }
    // 0x80062550: subu        $v0, $s5, $s1
    ctx->r2 = SUB32(ctx->r21, ctx->r17);
    // 0x80062554: lw          $s0, 0x8C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8C);
    // 0x80062558: sll         $s2, $v0, 8
    ctx->r18 = S32(ctx->r2 << 8);
    // 0x8006255C: bne         $s4, $v0, L_80062574
    if (ctx->r20 != ctx->r2) {
        // 0x80062560: subu        $s2, $s2, $v0
        ctx->r18 = SUB32(ctx->r18, ctx->r2);
            goto L_80062574;
    }
    // 0x80062560: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x80062564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80062568: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006256C: jal         0x80018658
    // 0x80062570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x80062570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_80062574:
    // 0x80062574: div         $zero, $s2, $s4
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r20)));
    // 0x80062578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006257C: bne         $s4, $zero, L_80062588
    if (ctx->r20 != 0) {
        // 0x80062580: nop
    
            goto L_80062588;
    }
    // 0x80062580: nop

    // 0x80062584: break       7
    do_break(2147886468);
L_80062588:
    // 0x80062588: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006258C: bne         $s4, $at, L_800625A0
    if (ctx->r20 != ctx->r1) {
        // 0x80062590: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800625A0;
    }
    // 0x80062590: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80062594: bne         $s2, $at, L_800625A0
    if (ctx->r18 != ctx->r1) {
        // 0x80062598: nop
    
            goto L_800625A0;
    }
    // 0x80062598: nop

    // 0x8006259C: break       6
    do_break(2147886492);
L_800625A0:
    // 0x800625A0: mflo        $a1
    ctx->r5 = lo;
    // 0x800625A4: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x800625A8: jal         0x80018604
    // 0x800625AC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_6;
    // 0x800625AC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_6:
L_800625B0:
    // 0x800625B0: jal         0x80007AB0
    // 0x800625B4: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x800625B4: nop

    after_7:
    // 0x800625B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800625BC: bne         $s1, $s5, L_800624E8
    if (ctx->r17 != ctx->r21) {
        // 0x800625C0: nop
    
            goto L_800624E8;
    }
    // 0x800625C0: nop

L_800625C4:
    // 0x800625C4: addiu       $s0, $sp, 0x8C
    ctx->r16 = ADD32(ctx->r29, 0X8C);
    // 0x800625C8: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_800625CC:
    // 0x800625CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800625D0: jal         0x8001C568
    // 0x800625D4: nop

    func_8001C568(rdram, ctx);
        goto after_8;
    // 0x800625D4: nop

    after_8:
    // 0x800625D8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800625DC: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800625E0: bne         $at, $zero, L_800625CC
    if (ctx->r1 != 0) {
        // 0x800625E4: nop
    
            goto L_800625CC;
    }
    // 0x800625E4: nop

    // 0x800625E8: jal         0x8005CD50
    // 0x800625EC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x800625EC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_9:
    // 0x800625F0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800625F4: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800625F8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800625FC: nop

    // 0x80062600: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x80062604: jal         0x80007AE0
    // 0x80062608: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x80062608: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_10:
    // 0x8006260C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80062610: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80062614: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80062618: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8006261C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80062620: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80062624: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80062628: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8006262C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80062630: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80062634: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x80062638: jr          $ra
    // 0x8006263C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8006263C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80062640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062640: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x80062644: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80062648: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8006264C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80062650: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80062654: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80062658: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8006265C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80062660: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80062664: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80062668: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8006266C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80062670: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80062674: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80062678: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006267C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80062680: jal         0x80007774
    // 0x80062684: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80062684: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80062688: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8006268C: addiu       $t7, $t7, 0x21EC
    ctx->r15 = ADD32(ctx->r15, 0X21EC);
    // 0x80062690: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80062694: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x80062698: addiu       $t6, $sp, 0xC8
    ctx->r14 = ADD32(ctx->r29, 0XC8);
L_8006269C:
    // 0x8006269C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800626A0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x800626A4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x800626A8: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x800626AC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x800626B0: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x800626B4: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x800626B8: bne         $t7, $t9, L_8006269C
    if (ctx->r15 != ctx->r25) {
        // 0x800626BC: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8006269C;
    }
    // 0x800626BC: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x800626C0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800626C4: sw          $zero, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = 0;
    // 0x800626C8: addiu       $t9, $t9, 0x2210
    ctx->r25 = ADD32(ctx->r25, 0X2210);
    // 0x800626CC: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x800626D0: addiu       $t8, $sp, 0x98
    ctx->r24 = ADD32(ctx->r29, 0X98);
    // 0x800626D4: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x800626D8: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x800626DC: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x800626E0: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x800626E4: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x800626E8: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800626EC: sw          $v1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r3;
    // 0x800626F0: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x800626F4: addiu       $s1, $sp, 0xEC
    ctx->r17 = ADD32(ctx->r29, 0XEC);
    // 0x800626F8: addiu       $s3, $sp, 0xF8
    ctx->r19 = ADD32(ctx->r29, 0XF8);
L_800626FC:
    // 0x800626FC: lw          $v1, 0xF8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF8);
    // 0x80062700: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80062704: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80062708: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8006270C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80062710: addiu       $a0, $zero, 0x76D
    ctx->r4 = ADD32(0, 0X76D);
    // 0x80062714: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x80062718: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8006271C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80062720: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80062724: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80062728: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x8006272C: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80062730: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80062734: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80062738: jal         0x8001D138
    // 0x8006273C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006273C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x80062740: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80062744: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80062748: jal         0x80019164
    // 0x8006274C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006274C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80062750: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80062754: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80062758: bne         $s1, $s3, L_800626FC
    if (ctx->r17 != ctx->r19) {
        // 0x8006275C: sw          $s2, -0x4($s1)
        MEM_W(-0X4, ctx->r17) = ctx->r18;
            goto L_800626FC;
    }
    // 0x8006275C: sw          $s2, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->r18;
    // 0x80062760: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80062764: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80062768: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x8006276C: lui         $fp, 0xFF00
    ctx->r30 = S32(0XFF00 << 16);
    // 0x80062770: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80062774: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80062778: ori         $fp, $fp, 0xFF
    ctx->r30 = ctx->r30 | 0XFF;
    // 0x8006277C: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x80062780: addiu       $s6, $sp, 0xEC
    ctx->r22 = ADD32(ctx->r29, 0XEC);
    // 0x80062784: lw          $t7, 0xF8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF8);
L_80062788:
    // 0x80062788: nop

    // 0x8006278C: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x80062790: nop

    // 0x80062794: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80062798: bne         $t9, $zero, L_80062C10
    if (ctx->r25 != 0) {
        // 0x8006279C: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80062C10;
    }
    // 0x8006279C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800627A0: lw          $v0, 0x2224($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2224);
    // 0x800627A4: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800627A8: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x800627AC: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800627B0: beq         $at, $zero, L_800628A4
    if (ctx->r1 == 0) {
        // 0x800627B4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_800628A4;
    }
    // 0x800627B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800627B8: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x800627BC: addiu       $s3, $s3, 0x221C
    ctx->r19 = ADD32(ctx->r19, 0X221C);
L_800627C0:
    // 0x800627C0: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x800627C4: addiu       $t6, $sp, 0x98
    ctx->r14 = ADD32(ctx->r29, 0X98);
    // 0x800627C8: slt         $at, $v0, $s5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x800627CC: beq         $at, $zero, L_80062884
    if (ctx->r1 == 0) {
        // 0x800627D0: addiu       $t7, $v0, 0xA
        ctx->r15 = ADD32(ctx->r2, 0XA);
            goto L_80062884;
    }
    // 0x800627D0: addiu       $t7, $v0, 0xA
    ctx->r15 = ADD32(ctx->r2, 0XA);
    // 0x800627D4: bne         $s5, $t7, L_800627F4
    if (ctx->r21 != ctx->r15) {
        // 0x800627D8: addu        $s2, $s1, $t6
        ctx->r18 = ADD32(ctx->r17, ctx->r14);
            goto L_800627F4;
    }
    // 0x800627D8: addu        $s2, $s1, $t6
    ctx->r18 = ADD32(ctx->r17, ctx->r14);
    // 0x800627DC: addu        $t8, $s6, $s1
    ctx->r24 = ADD32(ctx->r22, ctx->r17);
    // 0x800627E0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x800627E4: jal         0x800191C0
    // 0x800627E8: nop

    func_800191C0(rdram, ctx);
        goto after_3;
    // 0x800627E8: nop

    after_3:
    // 0x800627EC: b           L_80062830
    // 0x800627F0: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
        goto L_80062830;
    // 0x800627F0: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
L_800627F4:
    // 0x800627F4: slt         $at, $v0, $s5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x800627F8: beq         $at, $zero, L_8006282C
    if (ctx->r1 == 0) {
        // 0x800627FC: sll         $t9, $s4, 2
        ctx->r25 = S32(ctx->r20 << 2);
            goto L_8006282C;
    }
    // 0x800627FC: sll         $t9, $s4, 2
    ctx->r25 = S32(ctx->r20 << 2);
    // 0x80062800: subu        $t9, $t9, $s4
    ctx->r25 = SUB32(ctx->r25, ctx->r20);
    // 0x80062804: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80062808: addiu       $t6, $sp, 0xC8
    ctx->r14 = ADD32(ctx->r29, 0XC8);
    // 0x8006280C: addu        $a1, $t9, $t6
    ctx->r5 = ADD32(ctx->r25, ctx->r14);
    // 0x80062810: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80062814: addu        $t7, $s6, $s1
    ctx->r15 = ADD32(ctx->r22, ctx->r17);
    // 0x80062818: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x8006281C: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x80062820: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80062824: jal         0x80019164
    // 0x80062828: nop

    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80062828: nop

    after_4:
L_8006282C:
    // 0x8006282C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
L_80062830:
    // 0x80062830: addu        $t9, $s6, $s1
    ctx->r25 = ADD32(ctx->r22, ctx->r17);
    // 0x80062834: beq         $t8, $zero, L_80062850
    if (ctx->r24 == 0) {
        // 0x80062838: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80062850;
    }
    // 0x80062838: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006283C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80062840: jal         0x80018658
    // 0x80062844: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x80062844: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_5:
    // 0x80062848: b           L_80062884
    // 0x8006284C: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
        goto L_80062884;
    // 0x8006284C: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_80062850:
    // 0x80062850: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80062854: addu        $t8, $s6, $s1
    ctx->r24 = ADD32(ctx->r22, ctx->r17);
    // 0x80062858: addiu       $t6, $v0, 0x7
    ctx->r14 = ADD32(ctx->r2, 0X7);
    // 0x8006285C: beq         $s5, $t6, L_8006286C
    if (ctx->r21 == ctx->r14) {
        // 0x80062860: addiu       $t7, $v0, 0x9
        ctx->r15 = ADD32(ctx->r2, 0X9);
            goto L_8006286C;
    }
    // 0x80062860: addiu       $t7, $v0, 0x9
    ctx->r15 = ADD32(ctx->r2, 0X9);
    // 0x80062864: bne         $s5, $t7, L_80062884
    if (ctx->r21 != ctx->r15) {
        // 0x80062868: nop
    
            goto L_80062884;
    }
    // 0x80062868: nop

L_8006286C:
    // 0x8006286C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80062870: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80062874: jal         0x80018658
    // 0x80062878: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80018658(rdram, ctx);
        goto after_6;
    // 0x80062878: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_6:
    // 0x8006287C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80062880: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
L_80062884:
    // 0x80062884: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80062888: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006288C: bne         $s4, $s7, L_800627C0
    if (ctx->r20 != ctx->r23) {
        // 0x80062890: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_800627C0;
    }
    // 0x80062890: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80062894: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80062898: lw          $v1, 0x2230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2230);
    // 0x8006289C: b           L_80062BF4
    // 0x800628A0: addiu       $t9, $v1, 0x22
    ctx->r25 = ADD32(ctx->r3, 0X22);
        goto L_80062BF4;
    // 0x800628A0: addiu       $t9, $v1, 0x22
    ctx->r25 = ADD32(ctx->r3, 0X22);
L_800628A4:
    // 0x800628A4: bne         $s5, $v0, L_80062910
    if (ctx->r21 != ctx->r2) {
        // 0x800628A8: lui         $v1, 0x8009
        ctx->r3 = S32(0X8009 << 16);
            goto L_80062910;
    }
    // 0x800628A8: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800628AC: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x800628B0: addiu       $s1, $sp, 0xEC
    ctx->r17 = ADD32(ctx->r29, 0XEC);
    // 0x800628B4: addiu       $s2, $sp, 0x98
    ctx->r18 = ADD32(ctx->r29, 0X98);
L_800628B8:
    // 0x800628B8: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800628BC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800628C0: sub.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f22.fl;
    // 0x800628C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800628C8: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x800628CC: jal         0x80018658
    // 0x800628D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x800628D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x800628D4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800628D8: jal         0x800191D4
    // 0x800628DC: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    func_800191D4(rdram, ctx);
        goto after_8;
    // 0x800628DC: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    after_8:
    // 0x800628E0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800628E4: jal         0x80019164
    // 0x800628E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x800628E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x800628EC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800628F0: addiu       $t6, $sp, 0xA4
    ctx->r14 = ADD32(ctx->r29, 0XA4);
    // 0x800628F4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800628F8: bne         $s2, $t6, L_800628B8
    if (ctx->r18 != ctx->r14) {
        // 0x800628FC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800628B8;
    }
    // 0x800628FC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80062900: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80062904: lw          $v1, 0x2230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2230);
    // 0x80062908: b           L_80062BF4
    // 0x8006290C: addiu       $t9, $v1, 0x22
    ctx->r25 = ADD32(ctx->r3, 0X22);
        goto L_80062BF4;
    // 0x8006290C: addiu       $t9, $v1, 0x22
    ctx->r25 = ADD32(ctx->r3, 0X22);
L_80062910:
    // 0x80062910: lw          $v1, 0x2230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2230);
    // 0x80062914: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80062918: addiu       $v0, $v1, 0xA
    ctx->r2 = ADD32(ctx->r3, 0XA);
    // 0x8006291C: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80062920: beq         $at, $zero, L_80062A14
    if (ctx->r1 == 0) {
        // 0x80062924: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80062A14;
    }
    // 0x80062924: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80062928: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8006292C: addiu       $s3, $s3, 0x221C
    ctx->r19 = ADD32(ctx->r19, 0X221C);
L_80062930:
    // 0x80062930: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x80062934: addiu       $t7, $sp, 0x98
    ctx->r15 = ADD32(ctx->r29, 0X98);
    // 0x80062938: slt         $at, $v0, $s5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8006293C: beq         $at, $zero, L_800629F4
    if (ctx->r1 == 0) {
        // 0x80062940: addiu       $t8, $v0, 0xA
        ctx->r24 = ADD32(ctx->r2, 0XA);
            goto L_800629F4;
    }
    // 0x80062940: addiu       $t8, $v0, 0xA
    ctx->r24 = ADD32(ctx->r2, 0XA);
    // 0x80062944: bne         $s5, $t8, L_80062964
    if (ctx->r21 != ctx->r24) {
        // 0x80062948: addu        $s2, $s1, $t7
        ctx->r18 = ADD32(ctx->r17, ctx->r15);
            goto L_80062964;
    }
    // 0x80062948: addu        $s2, $s1, $t7
    ctx->r18 = ADD32(ctx->r17, ctx->r15);
    // 0x8006294C: addu        $t9, $s6, $s1
    ctx->r25 = ADD32(ctx->r22, ctx->r17);
    // 0x80062950: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x80062954: jal         0x800191C0
    // 0x80062958: nop

    func_800191C0(rdram, ctx);
        goto after_10;
    // 0x80062958: nop

    after_10:
    // 0x8006295C: b           L_800629A0
    // 0x80062960: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
        goto L_800629A0;
    // 0x80062960: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
L_80062964:
    // 0x80062964: slt         $at, $v0, $s5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80062968: beq         $at, $zero, L_8006299C
    if (ctx->r1 == 0) {
        // 0x8006296C: sll         $t6, $s4, 2
        ctx->r14 = S32(ctx->r20 << 2);
            goto L_8006299C;
    }
    // 0x8006296C: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x80062970: subu        $t6, $t6, $s4
    ctx->r14 = SUB32(ctx->r14, ctx->r20);
    // 0x80062974: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80062978: addiu       $t7, $sp, 0xC8
    ctx->r15 = ADD32(ctx->r29, 0XC8);
    // 0x8006297C: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80062980: lwc1        $f6, 0x4($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80062984: addu        $t8, $s6, $s1
    ctx->r24 = ADD32(ctx->r22, ctx->r17);
    // 0x80062988: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x8006298C: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x80062990: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80062994: jal         0x80019164
    // 0x80062998: nop

    func_80019164(rdram, ctx);
        goto after_11;
    // 0x80062998: nop

    after_11:
L_8006299C:
    // 0x8006299C: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
L_800629A0:
    // 0x800629A0: addu        $t6, $s6, $s1
    ctx->r14 = ADD32(ctx->r22, ctx->r17);
    // 0x800629A4: beq         $t9, $zero, L_800629C0
    if (ctx->r25 == 0) {
        // 0x800629A8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800629C0;
    }
    // 0x800629A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800629AC: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x800629B0: jal         0x80018658
    // 0x800629B4: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    func_80018658(rdram, ctx);
        goto after_12;
    // 0x800629B4: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_12:
    // 0x800629B8: b           L_800629F4
    // 0x800629BC: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
        goto L_800629F4;
    // 0x800629BC: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_800629C0:
    // 0x800629C0: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x800629C4: addu        $t9, $s6, $s1
    ctx->r25 = ADD32(ctx->r22, ctx->r17);
    // 0x800629C8: addiu       $t7, $v0, 0x7
    ctx->r15 = ADD32(ctx->r2, 0X7);
    // 0x800629CC: beq         $s5, $t7, L_800629DC
    if (ctx->r21 == ctx->r15) {
        // 0x800629D0: addiu       $t8, $v0, 0x9
        ctx->r24 = ADD32(ctx->r2, 0X9);
            goto L_800629DC;
    }
    // 0x800629D0: addiu       $t8, $v0, 0x9
    ctx->r24 = ADD32(ctx->r2, 0X9);
    // 0x800629D4: bne         $s5, $t8, L_800629F4
    if (ctx->r21 != ctx->r24) {
        // 0x800629D8: nop
    
            goto L_800629F4;
    }
    // 0x800629D8: nop

L_800629DC:
    // 0x800629DC: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x800629E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800629E4: jal         0x80018658
    // 0x800629E8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_80018658(rdram, ctx);
        goto after_13;
    // 0x800629E8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_13:
    // 0x800629EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800629F0: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
L_800629F4:
    // 0x800629F4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800629F8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800629FC: bne         $s4, $s7, L_80062930
    if (ctx->r20 != ctx->r23) {
        // 0x80062A00: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80062930;
    }
    // 0x80062A00: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80062A04: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80062A08: lw          $v1, 0x2230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2230);
    // 0x80062A0C: b           L_80062BF4
    // 0x80062A10: addiu       $t9, $v1, 0x22
    ctx->r25 = ADD32(ctx->r3, 0X22);
        goto L_80062BF4;
    // 0x80062A10: addiu       $t9, $v1, 0x22
    ctx->r25 = ADD32(ctx->r3, 0X22);
L_80062A14:
    // 0x80062A14: bne         $s5, $v0, L_80062AB8
    if (ctx->r21 != ctx->r2) {
        // 0x80062A18: slt         $at, $v0, $s5
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
            goto L_80062AB8;
    }
    // 0x80062A18: slt         $at, $v0, $s5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80062A1C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80062A20: sw          $t7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r15;
    // 0x80062A24: addiu       $s1, $sp, 0xEC
    ctx->r17 = ADD32(ctx->r29, 0XEC);
    // 0x80062A28: addiu       $s0, $sp, 0xF8
    ctx->r16 = ADD32(ctx->r29, 0XF8);
L_80062A2C:
    // 0x80062A2C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80062A30: jal         0x8001C568
    // 0x80062A34: nop

    func_8001C568(rdram, ctx);
        goto after_14;
    // 0x80062A34: nop

    after_14:
    // 0x80062A38: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80062A3C: bne         $s1, $s0, L_80062A2C
    if (ctx->r17 != ctx->r16) {
        // 0x80062A40: nop
    
            goto L_80062A2C;
    }
    // 0x80062A40: nop

    // 0x80062A44: addiu       $a0, $zero, 0x76C
    ctx->r4 = ADD32(0, 0X76C);
    // 0x80062A48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80062A4C: jal         0x8001D138
    // 0x80062A50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_15;
    // 0x80062A50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x80062A54: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x80062A58: sw          $v0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r2;
    // 0x80062A5C: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80062A60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80062A64: swc1        $f10, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f10.u32l;
    // 0x80062A68: lwc1        $f4, 0x4($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80062A6C: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    // 0x80062A70: swc1        $f4, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f4.u32l;
    // 0x80062A74: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80062A78: jal         0x80019164
    // 0x80062A7C: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    func_80019164(rdram, ctx);
        goto after_16;
    // 0x80062A7C: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    after_16:
    // 0x80062A80: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80062A84: swc1        $f24, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f24.u32l;
    // 0x80062A88: swc1        $f24, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f24.u32l;
    // 0x80062A8C: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x80062A90: jal         0x80019114
    // 0x80062A94: swc1        $f24, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f24.u32l;
    func_80019114(rdram, ctx);
        goto after_17;
    // 0x80062A94: swc1        $f24, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f24.u32l;
    after_17:
    // 0x80062A98: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80062A9C: lwc1        $f8, 0x6338($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6338);
    // 0x80062AA0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80062AA4: lw          $v1, 0x2230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2230);
    // 0x80062AA8: swc1        $f24, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f24.u32l;
    // 0x80062AAC: swc1        $f24, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f24.u32l;
    // 0x80062AB0: b           L_80062BF0
    // 0x80062AB4: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
        goto L_80062BF0;
    // 0x80062AB4: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
L_80062AB8:
    // 0x80062AB8: beq         $at, $zero, L_80062BF0
    if (ctx->r1 == 0) {
        // 0x80062ABC: subu        $v0, $s5, $v1
        ctx->r2 = SUB32(ctx->r21, ctx->r3);
            goto L_80062BF0;
    }
    // 0x80062ABC: subu        $v0, $s5, $v1
    ctx->r2 = SUB32(ctx->r21, ctx->r3);
    // 0x80062AC0: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x80062AC4: bne         $v0, $zero, L_80062ADC
    if (ctx->r2 != 0) {
        // 0x80062AC8: slti        $at, $v0, 0x5
        ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_80062ADC;
    }
    // 0x80062AC8: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80062ACC: swc1        $f24, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f24.u32l;
    // 0x80062AD0: swc1        $f24, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f24.u32l;
    // 0x80062AD4: b           L_80062BB8
    // 0x80062AD8: swc1        $f24, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f24.u32l;
        goto L_80062BB8;
    // 0x80062AD8: swc1        $f24, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f24.u32l;
L_80062ADC:
    // 0x80062ADC: beq         $at, $zero, L_80062B0C
    if (ctx->r1 == 0) {
        // 0x80062AE0: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_80062B0C;
    }
    // 0x80062AE0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80062AE4: lwc1        $f2, 0xC4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80062AE8: lwc1        $f10, 0x1E74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1E74);
    // 0x80062AEC: lwc1        $f6, 0x1E78($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1E78);
    // 0x80062AF0: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80062AF4: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x80062AF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80062AFC: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x80062B00: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x80062B04: b           L_80062BB8
    // 0x80062B08: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
        goto L_80062BB8;
    // 0x80062B08: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
L_80062B0C:
    // 0x80062B0C: slti        $at, $v0, 0xA
    ctx->r1 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80062B10: beq         $at, $zero, L_80062B4C
    if (ctx->r1 == 0) {
        // 0x80062B14: slti        $at, $v0, 0xF
        ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
            goto L_80062B4C;
    }
    // 0x80062B14: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
    // 0x80062B18: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80062B1C: addiu       $v0, $v0, 0x1E74
    ctx->r2 = ADD32(ctx->r2, 0X1E74);
    // 0x80062B20: lwc1        $f2, 0xC4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80062B24: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80062B28: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80062B2C: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80062B30: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x80062B34: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80062B38: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x80062B3C: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x80062B40: b           L_80062BB8
    // 0x80062B44: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
        goto L_80062BB8;
    // 0x80062B44: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    // 0x80062B48: slti        $at, $v0, 0xF
    ctx->r1 = SIGNED(ctx->r2) < 0XF ? 1 : 0;
L_80062B4C:
    // 0x80062B4C: beq         $at, $zero, L_80062B88
    if (ctx->r1 == 0) {
        // 0x80062B50: slti        $at, $v0, 0x19
        ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
            goto L_80062B88;
    }
    // 0x80062B50: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x80062B54: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80062B58: addiu       $v0, $v0, 0x1E74
    ctx->r2 = ADD32(ctx->r2, 0X1E74);
    // 0x80062B5C: lwc1        $f2, 0xC4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80062B60: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80062B64: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80062B68: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80062B6C: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x80062B70: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80062B74: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x80062B78: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x80062B7C: b           L_80062BB8
    // 0x80062B80: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
        goto L_80062BB8;
    // 0x80062B80: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
    // 0x80062B84: slti        $at, $v0, 0x19
    ctx->r1 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
L_80062B88:
    // 0x80062B88: beq         $at, $zero, L_80062BB8
    if (ctx->r1 == 0) {
        // 0x80062B8C: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_80062BB8;
    }
    // 0x80062B8C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80062B90: addiu       $v0, $v0, 0x1E74
    ctx->r2 = ADD32(ctx->r2, 0X1E74);
    // 0x80062B94: lwc1        $f2, 0xC4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80062B98: lwc1        $f10, 0x14($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80062B9C: lwc1        $f6, 0x18($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80062BA0: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80062BA4: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x80062BA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80062BAC: swc1        $f2, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f2.u32l;
    // 0x80062BB0: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x80062BB4: swc1        $f2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f2.u32l;
L_80062BB8:
    // 0x80062BB8: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80062BBC: jal         0x80019114
    // 0x80062BC0: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    func_80019114(rdram, ctx);
        goto after_18;
    // 0x80062BC0: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    after_18:
    // 0x80062BC4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80062BC8: lwc1        $f4, 0x633C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X633C);
    // 0x80062BCC: lwc1        $f10, 0xB4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80062BD0: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80062BD4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80062BD8: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x80062BDC: jal         0x8001913C
    // 0x80062BE0: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    func_8001913C(rdram, ctx);
        goto after_19;
    // 0x80062BE0: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    after_19:
    // 0x80062BE4: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80062BE8: lw          $v1, 0x2230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2230);
    // 0x80062BEC: nop

L_80062BF0:
    // 0x80062BF0: addiu       $t9, $v1, 0x22
    ctx->r25 = ADD32(ctx->r3, 0X22);
L_80062BF4:
    // 0x80062BF4: slt         $v0, $t9, $s5
    ctx->r2 = SIGNED(ctx->r25) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80062BF8: bne         $v0, $zero, L_80062C10
    if (ctx->r2 != 0) {
        // 0x80062BFC: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_80062C10;
    }
    // 0x80062BFC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80062C00: jal         0x80007AB0
    // 0x80062C04: nop

    func_80007AB0(rdram, ctx);
        goto after_20;
    // 0x80062C04: nop

    after_20:
    // 0x80062C08: b           L_80062788
    // 0x80062C0C: lw          $t7, 0xF8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF8);
        goto L_80062788;
    // 0x80062C0C: lw          $t7, 0xF8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF8);
L_80062C10:
    // 0x80062C10: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80062C14: nop

    // 0x80062C18: beq         $t6, $zero, L_80062C38
    if (ctx->r14 == 0) {
        // 0x80062C1C: addiu       $s1, $sp, 0xEC
        ctx->r17 = ADD32(ctx->r29, 0XEC);
            goto L_80062C38;
    }
    // 0x80062C1C: addiu       $s1, $sp, 0xEC
    ctx->r17 = ADD32(ctx->r29, 0XEC);
    // 0x80062C20: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80062C24: jal         0x8001C568
    // 0x80062C28: nop

    func_8001C568(rdram, ctx);
        goto after_21;
    // 0x80062C28: nop

    after_21:
    // 0x80062C2C: b           L_80062C58
    // 0x80062C30: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
        goto L_80062C58;
    // 0x80062C30: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x80062C34: addiu       $s1, $sp, 0xEC
    ctx->r17 = ADD32(ctx->r29, 0XEC);
L_80062C38:
    // 0x80062C38: addiu       $s0, $sp, 0xF8
    ctx->r16 = ADD32(ctx->r29, 0XF8);
L_80062C3C:
    // 0x80062C3C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80062C40: jal         0x8001C568
    // 0x80062C44: nop

    func_8001C568(rdram, ctx);
        goto after_22;
    // 0x80062C44: nop

    after_22:
    // 0x80062C48: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80062C4C: bne         $s1, $s0, L_80062C3C
    if (ctx->r17 != ctx->r16) {
        // 0x80062C50: nop
    
            goto L_80062C3C;
    }
    // 0x80062C50: nop

    // 0x80062C54: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
L_80062C58:
    // 0x80062C58: jal         0x8005CD50
    // 0x80062C5C: nop

    func_8005CD50(rdram, ctx);
        goto after_23;
    // 0x80062C5C: nop

    after_23:
    // 0x80062C60: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80062C64: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80062C68: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80062C6C: nop

    // 0x80062C70: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80062C74: jal         0x80007AE0
    // 0x80062C78: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_24;
    // 0x80062C78: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_24:
    // 0x80062C7C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80062C80: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80062C84: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80062C88: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80062C8C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80062C90: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80062C94: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80062C98: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80062C9C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80062CA0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80062CA4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80062CA8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80062CAC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80062CB0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80062CB4: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80062CB8: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80062CBC: jr          $ra
    // 0x80062CC0: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x80062CC0: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_80062CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062CC4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80062CC8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80062CCC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80062CD0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80062CD4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80062CD8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80062CDC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80062CE0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80062CE4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80062CE8: jal         0x80007774
    // 0x80062CEC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80062CEC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80062CF0: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80062CF4: addiu       $t6, $t6, 0x2234
    ctx->r14 = ADD32(ctx->r14, 0X2234);
    // 0x80062CF8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80062CFC: addiu       $s1, $sp, 0x64
    ctx->r17 = ADD32(ctx->r29, 0X64);
    // 0x80062D00: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80062D04: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x80062D08: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80062D0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80062D10: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x80062D14: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80062D18: addiu       $a0, $zero, 0x76E
    ctx->r4 = ADD32(0, 0X76E);
    // 0x80062D1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80062D20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80062D24: jal         0x8001D138
    // 0x80062D28: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80062D28: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    after_1:
    // 0x80062D2C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80062D30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80062D34: jal         0x80019164
    // 0x80062D38: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80062D38: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x80062D3C: sw          $s2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r18;
    // 0x80062D40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80062D44: jal         0x80019114
    // 0x80062D48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x80062D48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x80062D4C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80062D50: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80062D54: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80062D58: lwc1        $f20, 0x6340($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6340);
    // 0x80062D5C: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x80062D60: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
L_80062D64:
    // 0x80062D64: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80062D68: andi        $t7, $t8, 0x4000
    ctx->r15 = ctx->r24 & 0X4000;
    // 0x80062D6C: bne         $t7, $zero, L_80062E34
    if (ctx->r15 != 0) {
        // 0x80062D70: nop
    
            goto L_80062E34;
    }
    // 0x80062D70: nop

    // 0x80062D74: beq         $at, $zero, L_80062DA4
    if (ctx->r1 == 0) {
        // 0x80062D78: nop
    
            goto L_80062DA4;
    }
    // 0x80062D78: nop

    // 0x80062D7C: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80062D80: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80062D84: add.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x80062D88: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80062D8C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x80062D90: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x80062D94: jal         0x80019114
    // 0x80062D98: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x80062D98: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80062D9C: b           L_80062E24
    // 0x80062DA0: nop

        goto L_80062E24;
    // 0x80062DA0: nop

L_80062DA4:
    // 0x80062DA4: div         $zero, $s0, $s2
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r18)));
    // 0x80062DA8: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80062DAC: bne         $s2, $zero, L_80062DB8
    if (ctx->r18 != 0) {
        // 0x80062DB0: nop
    
            goto L_80062DB8;
    }
    // 0x80062DB0: nop

    // 0x80062DB4: break       7
    do_break(2147888564);
L_80062DB8:
    // 0x80062DB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80062DBC: bne         $s2, $at, L_80062DD0
    if (ctx->r18 != ctx->r1) {
        // 0x80062DC0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80062DD0;
    }
    // 0x80062DC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80062DC4: bne         $s0, $at, L_80062DD0
    if (ctx->r16 != ctx->r1) {
        // 0x80062DC8: nop
    
            goto L_80062DD0;
    }
    // 0x80062DC8: nop

    // 0x80062DCC: break       6
    do_break(2147888588);
L_80062DD0:
    // 0x80062DD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80062DD4: mfhi        $t6
    ctx->r14 = hi;
    // 0x80062DD8: slti        $at, $t6, 0x5
    ctx->r1 = SIGNED(ctx->r14) < 0X5 ? 1 : 0;
    // 0x80062DDC: beq         $at, $zero, L_80062E0C
    if (ctx->r1 == 0) {
        // 0x80062DE0: nop
    
            goto L_80062E0C;
    }
    // 0x80062DE0: nop

    // 0x80062DE4: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80062DE8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80062DEC: sub.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f20.fl;
    // 0x80062DF0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80062DF4: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x80062DF8: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x80062DFC: jal         0x80019114
    // 0x80062E00: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80062E00: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x80062E04: b           L_80062E24
    // 0x80062E08: nop

        goto L_80062E24;
    // 0x80062E08: nop

L_80062E0C:
    // 0x80062E0C: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x80062E10: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80062E14: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x80062E18: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x80062E1C: jal         0x80019114
    // 0x80062E20: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x80062E20: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_6:
L_80062E24:
    // 0x80062E24: jal         0x80007AB0
    // 0x80062E28: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x80062E28: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_7:
    // 0x80062E2C: b           L_80062D64
    // 0x80062E30: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
        goto L_80062D64;
    // 0x80062E30: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
L_80062E34:
    // 0x80062E34: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
    // 0x80062E38: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_80062E3C:
    // 0x80062E3C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80062E40: jal         0x8001C568
    // 0x80062E44: nop

    func_8001C568(rdram, ctx);
        goto after_8;
    // 0x80062E44: nop

    after_8:
    // 0x80062E48: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80062E4C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80062E50: bne         $at, $zero, L_80062E3C
    if (ctx->r1 != 0) {
        // 0x80062E54: nop
    
            goto L_80062E3C;
    }
    // 0x80062E54: nop

    // 0x80062E58: jal         0x8005CD50
    // 0x80062E5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x80062E5C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_9:
    // 0x80062E60: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80062E64: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80062E68: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80062E6C: nop

    // 0x80062E70: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80062E74: jal         0x80007AE0
    // 0x80062E78: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x80062E78: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_10:
    // 0x80062E7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80062E80: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80062E84: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80062E88: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80062E8C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80062E90: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80062E94: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80062E98: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80062E9C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80062EA0: jr          $ra
    // 0x80062EA4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80062EA4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80062EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80062EA8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80062EAC: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80062EB0: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80062EB4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80062EB8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80062EBC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80062EC0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80062EC4: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80062EC8: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80062ECC: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80062ED0: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80062ED4: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80062ED8: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80062EDC: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80062EE0: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80062EE4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80062EE8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80062EEC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80062EF0: jal         0x80007774
    // 0x80062EF4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80062EF4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80062EF8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80062EFC: addiu       $t6, $t6, 0x2240
    ctx->r14 = ADD32(ctx->r14, 0X2240);
    // 0x80062F00: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80062F04: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80062F08: addiu       $s4, $sp, 0x94
    ctx->r20 = ADD32(ctx->r29, 0X94);
    // 0x80062F0C: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x80062F10: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80062F14: addiu       $a0, $zero, 0x771
    ctx->r4 = ADD32(0, 0X771);
    // 0x80062F18: sw          $t9, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r25;
    // 0x80062F1C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80062F20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80062F24: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x80062F28: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80062F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80062F30: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x80062F34: lwc1        $f6, 0x4($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80062F38: nop

    // 0x80062F3C: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x80062F40: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80062F44: jal         0x8001D138
    // 0x80062F48: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80062F48: swc1        $f8, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80062F4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80062F50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80062F54: jal         0x80019164
    // 0x80062F58: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80062F58: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    after_2:
    // 0x80062F5C: sw          $s0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r16;
    // 0x80062F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80062F64: jal         0x80019114
    // 0x80062F68: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x80062F68: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x80062F6C: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80062F70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80062F74: jal         0x80018658
    // 0x80062F78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_4;
    // 0x80062F78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80062F7C: lui         $at, 0x4148
    ctx->r1 = S32(0X4148 << 16);
    // 0x80062F80: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80062F84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80062F88: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x80062F8C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80062F90: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80062F94: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80062F98: lwc1        $f24, 0x6344($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6344);
    // 0x80062F9C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80062FA0: lwc1        $f22, 0x6348($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6348);
    // 0x80062FA4: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x80062FA8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80062FAC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80062FB0: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_80062FB4:
    // 0x80062FB4: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x80062FB8: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80062FBC: andi        $t7, $t8, 0x4000
    ctx->r15 = ctx->r24 & 0X4000;
    // 0x80062FC0: bne         $t7, $zero, L_800630E8
    if (ctx->r15 != 0) {
        // 0x80062FC4: addiu       $s1, $s0, 0x1
        ctx->r17 = ADD32(ctx->r16, 0X1);
            goto L_800630E8;
    }
    // 0x80062FC4: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x80062FC8: beq         $at, $zero, L_80062FFC
    if (ctx->r1 == 0) {
        // 0x80062FCC: slti        $at, $s0, 0x5
        ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
            goto L_80062FFC;
    }
    // 0x80062FCC: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x80062FD0: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x80062FD4: nop

    // 0x80062FD8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80062FDC: mul.s       $f12, $f4, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80062FE0: jal         0x80028C2C
    // 0x80062FE4: nop

    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x80062FE4: nop

    after_5:
    // 0x80062FE8: add.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x80062FEC: add.s       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f28.fl;
    // 0x80062FF0: b           L_8006303C
    // 0x80062FF4: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
        goto L_8006303C;
    // 0x80062FF4: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    // 0x80062FF8: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
L_80062FFC:
    // 0x80062FFC: beq         $at, $zero, L_80063010
    if (ctx->r1 == 0) {
        // 0x80063000: addiu       $t6, $s0, -0x4
        ctx->r14 = ADD32(ctx->r16, -0X4);
            goto L_80063010;
    }
    // 0x80063000: addiu       $t6, $s0, -0x4
    ctx->r14 = ADD32(ctx->r16, -0X4);
    // 0x80063004: swc1        $f26, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f26.u32l;
    // 0x80063008: b           L_8006303C
    // 0x8006300C: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
        goto L_8006303C;
    // 0x8006300C: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
L_80063010:
    // 0x80063010: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80063014: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80063018: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006301C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80063020: nop

    // 0x80063024: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80063028: jal         0x80028C00
    // 0x8006302C: nop

    func_80028C00(rdram, ctx);
        goto after_6;
    // 0x8006302C: nop

    after_6:
    // 0x80063030: mul.s       $f8, $f0, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80063034: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x80063038: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
L_8006303C:
    // 0x8006303C: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80063040: beq         $at, $zero, L_80063070
    if (ctx->r1 == 0) {
        // 0x80063044: addiu       $t9, $s0, -0x3
        ctx->r25 = ADD32(ctx->r16, -0X3);
            goto L_80063070;
    }
    // 0x80063044: addiu       $t9, $s0, -0x3
    ctx->r25 = ADD32(ctx->r16, -0X3);
    // 0x80063048: mtc1        $s1, $f10
    ctx->f10.u32l = ctx->r17;
    // 0x8006304C: nop

    // 0x80063050: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80063054: mul.s       $f12, $f4, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80063058: jal         0x80028C00
    // 0x8006305C: nop

    func_80028C00(rdram, ctx);
        goto after_7;
    // 0x8006305C: nop

    after_7:
    // 0x80063060: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80063064: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x80063068: b           L_8006309C
    // 0x8006306C: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
        goto L_8006309C;
    // 0x8006306C: swc1        $f8, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f8.u32l;
L_80063070:
    // 0x80063070: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80063074: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80063078: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006307C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80063080: nop

    // 0x80063084: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80063088: jal         0x80028C00
    // 0x8006308C: nop

    func_80028C00(rdram, ctx);
        goto after_8;
    // 0x8006308C: nop

    after_8:
    // 0x80063090: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80063094: add.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x80063098: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
L_8006309C:
    // 0x8006309C: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x800630A0: jal         0x80019114
    // 0x800630A4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x800630A4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_9:
    // 0x800630A8: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x800630AC: bne         $at, $zero, L_800630C8
    if (ctx->r1 != 0) {
        // 0x800630B0: lw          $a0, 0xA4($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA4);
            goto L_800630C8;
    }
    // 0x800630B0: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x800630B4: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800630B8: nop

    // 0x800630BC: add.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f30.fl;
    // 0x800630C0: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x800630C4: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
L_800630C8:
    // 0x800630C8: jal         0x80019164
    // 0x800630CC: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    func_80019164(rdram, ctx);
        goto after_10;
    // 0x800630CC: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    after_10:
    // 0x800630D0: jal         0x800072B0
    // 0x800630D4: nop

    func_800072B0(rdram, ctx);
        goto after_11;
    // 0x800630D4: nop

    after_11:
    // 0x800630D8: jal         0x80007AB0
    // 0x800630DC: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x800630DC: nop

    after_12:
    // 0x800630E0: bne         $s1, $s2, L_80062FB4
    if (ctx->r17 != ctx->r18) {
        // 0x800630E4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80062FB4;
    }
    // 0x800630E4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_800630E8:
    // 0x800630E8: addiu       $s0, $sp, 0xA4
    ctx->r16 = ADD32(ctx->r29, 0XA4);
    // 0x800630EC: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_800630F0:
    // 0x800630F0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800630F4: jal         0x8001C568
    // 0x800630F8: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x800630F8: nop

    after_13:
    // 0x800630FC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80063100: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80063104: bne         $at, $zero, L_800630F0
    if (ctx->r1 != 0) {
        // 0x80063108: nop
    
            goto L_800630F0;
    }
    // 0x80063108: nop

    // 0x8006310C: jal         0x8005CD50
    // 0x80063110: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x80063110: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_14:
    // 0x80063114: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80063118: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006311C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80063120: nop

    // 0x80063124: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80063128: jal         0x80007AE0
    // 0x8006312C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x8006312C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_15:
    // 0x80063130: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80063134: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80063138: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006313C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80063140: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80063144: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80063148: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006314C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80063150: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80063154: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80063158: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8006315C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80063160: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80063164: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80063168: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8006316C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80063170: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80063174: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80063178: jr          $ra
    // 0x8006317C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x8006317C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_80063180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063180: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80063184: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80063188: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8006318C: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x80063190: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80063194: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80063198: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8006319C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800631A0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800631A4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800631A8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800631AC: jal         0x80007774
    // 0x800631B0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800631B0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800631B4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800631B8: addiu       $t6, $t6, 0x224C
    ctx->r14 = ADD32(ctx->r14, 0X224C);
    // 0x800631BC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800631C0: addiu       $s7, $sp, 0x7C
    ctx->r23 = ADD32(ctx->r29, 0X7C);
    // 0x800631C4: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x800631C8: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x800631CC: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800631D0: addiu       $a0, $zero, 0x76F
    ctx->r4 = ADD32(0, 0X76F);
    // 0x800631D4: sw          $t9, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r25;
    // 0x800631D8: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800631DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800631E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800631E4: jal         0x8001D138
    // 0x800631E8: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800631E8: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    after_1:
    // 0x800631EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800631F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800631F4: jal         0x80019164
    // 0x800631F8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800631F8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x800631FC: sw          $s0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r16;
    // 0x80063200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80063204: jal         0x80019114
    // 0x80063208: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x80063208: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_3:
    // 0x8006320C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80063210: lwc1        $f20, 0x634C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X634C);
    // 0x80063214: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80063218: addiu       $s6, $zero, -0x801
    ctx->r22 = ADD32(0, -0X801);
    // 0x8006321C: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x80063220: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
L_80063224:
    // 0x80063224: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x80063228: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006322C: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x80063230: bne         $t8, $zero, L_800632F4
    if (ctx->r24 != 0) {
        // 0x80063234: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_800632F4;
    }
    // 0x80063234: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80063238: beq         $t7, $zero, L_80063258
    if (ctx->r15 == 0) {
        // 0x8006323C: nop
    
            goto L_80063258;
    }
    // 0x8006323C: nop

    // 0x80063240: jal         0x80019164
    // 0x80063244: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80063244: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x80063248: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x8006324C: nop

    // 0x80063250: and         $t9, $t6, $s6
    ctx->r25 = ctx->r14 & ctx->r22;
    // 0x80063254: sw          $t9, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r25;
L_80063258:
    // 0x80063258: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8006325C: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80063260: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x80063264: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80063268: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x8006326C: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x80063270: jal         0x80019114
    // 0x80063274: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80063274: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x80063278: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x8006327C: bne         $at, $zero, L_800632E0
    if (ctx->r1 != 0) {
        // 0x80063280: subu        $v0, $s5, $s1
        ctx->r2 = SUB32(ctx->r21, ctx->r17);
            goto L_800632E0;
    }
    // 0x80063280: subu        $v0, $s5, $s1
    ctx->r2 = SUB32(ctx->r21, ctx->r17);
    // 0x80063284: lw          $s0, 0x8C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X8C);
    // 0x80063288: sll         $s2, $v0, 8
    ctx->r18 = S32(ctx->r2 << 8);
    // 0x8006328C: bne         $s4, $v0, L_800632A4
    if (ctx->r20 != ctx->r2) {
        // 0x80063290: subu        $s2, $s2, $v0
        ctx->r18 = SUB32(ctx->r18, ctx->r2);
            goto L_800632A4;
    }
    // 0x80063290: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x80063294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80063298: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006329C: jal         0x80018658
    // 0x800632A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_6;
    // 0x800632A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_800632A4:
    // 0x800632A4: div         $zero, $s2, $s4
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r20)));
    // 0x800632A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800632AC: bne         $s4, $zero, L_800632B8
    if (ctx->r20 != 0) {
        // 0x800632B0: nop
    
            goto L_800632B8;
    }
    // 0x800632B0: nop

    // 0x800632B4: break       7
    do_break(2147889844);
L_800632B8:
    // 0x800632B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800632BC: bne         $s4, $at, L_800632D0
    if (ctx->r20 != ctx->r1) {
        // 0x800632C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800632D0;
    }
    // 0x800632C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800632C4: bne         $s2, $at, L_800632D0
    if (ctx->r18 != ctx->r1) {
        // 0x800632C8: nop
    
            goto L_800632D0;
    }
    // 0x800632C8: nop

    // 0x800632CC: break       6
    do_break(2147889868);
L_800632D0:
    // 0x800632D0: mflo        $a1
    ctx->r5 = lo;
    // 0x800632D4: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x800632D8: jal         0x80018604
    // 0x800632DC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_7;
    // 0x800632DC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_7:
L_800632E0:
    // 0x800632E0: jal         0x80007AB0
    // 0x800632E4: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x800632E4: nop

    after_8:
    // 0x800632E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800632EC: bne         $s1, $s5, L_80063224
    if (ctx->r17 != ctx->r21) {
        // 0x800632F0: nop
    
            goto L_80063224;
    }
    // 0x800632F0: nop

L_800632F4:
    // 0x800632F4: addiu       $s0, $sp, 0x8C
    ctx->r16 = ADD32(ctx->r29, 0X8C);
    // 0x800632F8: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_800632FC:
    // 0x800632FC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80063300: jal         0x8001C568
    // 0x80063304: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x80063304: nop

    after_9:
    // 0x80063308: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006330C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80063310: bne         $at, $zero, L_800632FC
    if (ctx->r1 != 0) {
        // 0x80063314: nop
    
            goto L_800632FC;
    }
    // 0x80063314: nop

    // 0x80063318: jal         0x8005CD50
    // 0x8006331C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x8006331C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
    // 0x80063320: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80063324: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80063328: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006332C: nop

    // 0x80063330: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x80063334: jal         0x80007AE0
    // 0x80063338: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x80063338: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_11:
    // 0x8006333C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80063340: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80063344: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80063348: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8006334C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80063350: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80063354: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80063358: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8006335C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80063360: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80063364: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x80063368: jr          $ra
    // 0x8006336C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8006336C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80063370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063370: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80063374: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80063378: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8006337C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80063380: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80063384: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80063388: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8006338C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80063390: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80063394: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80063398: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006339C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800633A0: jal         0x80007774
    // 0x800633A4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800633A4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800633A8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800633AC: addiu       $t6, $t6, 0x2258
    ctx->r14 = ADD32(ctx->r14, 0X2258);
    // 0x800633B0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800633B4: addiu       $s5, $sp, 0x84
    ctx->r21 = ADD32(ctx->r29, 0X84);
    // 0x800633B8: lw          $s6, 0x1C($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X1C);
    // 0x800633BC: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x800633C0: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800633C4: addiu       $a0, $zero, 0x770
    ctx->r4 = ADD32(0, 0X770);
    // 0x800633C8: sw          $t9, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r25;
    // 0x800633CC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800633D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800633D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800633D8: jal         0x8001D138
    // 0x800633DC: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800633DC: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    after_1:
    // 0x800633E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800633E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800633E8: jal         0x80019164
    // 0x800633EC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800633EC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_2:
    // 0x800633F0: sw          $s0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r16;
    // 0x800633F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800633F8: jal         0x80019114
    // 0x800633FC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x800633FC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x80063400: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80063404: lwc1        $f22, 0x6350($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6350);
    // 0x80063408: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006340C: lwc1        $f20, 0x6354($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6354);
    // 0x80063410: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80063414: addiu       $s4, $zero, 0xE
    ctx->r20 = ADD32(0, 0XE);
    // 0x80063418: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
L_8006341C:
    // 0x8006341C: lw          $t8, 0x24($s6)
    ctx->r24 = MEM_W(ctx->r22, 0X24);
    // 0x80063420: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80063424: andi        $t7, $t8, 0x4000
    ctx->r15 = ctx->r24 & 0X4000;
    // 0x80063428: bne         $t7, $zero, L_800634E8
    if (ctx->r15 != 0) {
        // 0x8006342C: slti        $at, $s1, 0x5
        ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
            goto L_800634E8;
    }
    // 0x8006342C: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x80063430: beq         $at, $zero, L_80063448
    if (ctx->r1 == 0) {
        // 0x80063434: slti        $at, $s1, 0xF
        ctx->r1 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
            goto L_80063448;
    }
    // 0x80063434: slti        $at, $s1, 0xF
    ctx->r1 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
    // 0x80063438: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x8006343C: b           L_80063460
    // 0x80063440: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
        goto L_80063460;
    // 0x80063440: swc1        $f6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f6.u32l;
    // 0x80063444: slti        $at, $s1, 0xF
    ctx->r1 = SIGNED(ctx->r17) < 0XF ? 1 : 0;
L_80063448:
    // 0x80063448: beq         $at, $zero, L_80063464
    if (ctx->r1 == 0) {
        // 0x8006344C: lw          $a0, 0x94($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X94);
            goto L_80063464;
    }
    // 0x8006344C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x80063450: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80063454: nop

    // 0x80063458: sub.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x8006345C: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
L_80063460:
    // 0x80063460: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
L_80063464:
    // 0x80063464: jal         0x80019114
    // 0x80063468: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x80063468: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_4:
    // 0x8006346C: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80063470: bne         $at, $zero, L_800634D4
    if (ctx->r1 != 0) {
        // 0x80063474: subu        $v0, $s4, $s1
        ctx->r2 = SUB32(ctx->r20, ctx->r17);
            goto L_800634D4;
    }
    // 0x80063474: subu        $v0, $s4, $s1
    ctx->r2 = SUB32(ctx->r20, ctx->r17);
    // 0x80063478: lw          $s0, 0x94($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X94);
    // 0x8006347C: sll         $s2, $v0, 8
    ctx->r18 = S32(ctx->r2 << 8);
    // 0x80063480: bne         $s3, $v0, L_80063498
    if (ctx->r19 != ctx->r2) {
        // 0x80063484: subu        $s2, $s2, $v0
        ctx->r18 = SUB32(ctx->r18, ctx->r2);
            goto L_80063498;
    }
    // 0x80063484: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x80063488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006348C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80063490: jal         0x80018658
    // 0x80063494: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x80063494: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_80063498:
    // 0x80063498: div         $zero, $s2, $s3
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r19)));
    // 0x8006349C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800634A0: bne         $s3, $zero, L_800634AC
    if (ctx->r19 != 0) {
        // 0x800634A4: nop
    
            goto L_800634AC;
    }
    // 0x800634A4: nop

    // 0x800634A8: break       7
    do_break(2147890344);
L_800634AC:
    // 0x800634AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800634B0: bne         $s3, $at, L_800634C4
    if (ctx->r19 != ctx->r1) {
        // 0x800634B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800634C4;
    }
    // 0x800634B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800634B8: bne         $s2, $at, L_800634C4
    if (ctx->r18 != ctx->r1) {
        // 0x800634BC: nop
    
            goto L_800634C4;
    }
    // 0x800634BC: nop

    // 0x800634C0: break       6
    do_break(2147890368);
L_800634C4:
    // 0x800634C4: mflo        $a1
    ctx->r5 = lo;
    // 0x800634C8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x800634CC: jal         0x80018604
    // 0x800634D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_6;
    // 0x800634D0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_6:
L_800634D4:
    // 0x800634D4: jal         0x80007AB0
    // 0x800634D8: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x800634D8: nop

    after_7:
    // 0x800634DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800634E0: bne         $s1, $s4, L_8006341C
    if (ctx->r17 != ctx->r20) {
        // 0x800634E4: nop
    
            goto L_8006341C;
    }
    // 0x800634E4: nop

L_800634E8:
    // 0x800634E8: addiu       $s0, $sp, 0x94
    ctx->r16 = ADD32(ctx->r29, 0X94);
    // 0x800634EC: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_800634F0:
    // 0x800634F0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800634F4: jal         0x8001C568
    // 0x800634F8: nop

    func_8001C568(rdram, ctx);
        goto after_8;
    // 0x800634F8: nop

    after_8:
    // 0x800634FC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80063500: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80063504: bne         $at, $zero, L_800634F0
    if (ctx->r1 != 0) {
        // 0x80063508: nop
    
            goto L_800634F0;
    }
    // 0x80063508: nop

    // 0x8006350C: jal         0x8005CD50
    // 0x80063510: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x80063510: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_9:
    // 0x80063514: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80063518: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006351C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80063520: nop

    // 0x80063524: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80063528: jal         0x80007AE0
    // 0x8006352C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x8006352C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_10:
    // 0x80063530: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80063534: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80063538: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006353C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80063540: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80063544: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80063548: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8006354C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80063550: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80063554: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80063558: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8006355C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80063560: jr          $ra
    // 0x80063564: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80063564: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80063568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063568: addiu       $sp, $sp, -0x248
    ctx->r29 = ADD32(ctx->r29, -0X248);
    // 0x8006356C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80063570: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x80063574: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80063578: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8006357C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80063580: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80063584: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80063588: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8006358C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80063590: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80063594: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80063598: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8006359C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800635A0: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800635A4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800635A8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800635AC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800635B0: jal         0x80007774
    // 0x800635B4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800635B4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800635B8: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x800635BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800635C0: lwc1        $f26, 0x6358($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X6358);
    // 0x800635C4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800635C8: addiu       $s0, $sp, 0x1BC
    ctx->r16 = ADD32(ctx->r29, 0X1BC);
    // 0x800635CC: addiu       $s2, $sp, 0x220
    ctx->r18 = ADD32(ctx->r29, 0X220);
    // 0x800635D0: addiu       $s3, $sp, 0xFC
    ctx->r19 = ADD32(ctx->r29, 0XFC);
    // 0x800635D4: addiu       $s1, $sp, 0x15C
    ctx->r17 = ADD32(ctx->r29, 0X15C);
    // 0x800635D8: addiu       $s7, $sp, 0x1BC
    ctx->r23 = ADD32(ctx->r29, 0X1BC);
    // 0x800635DC: addiu       $s5, $v1, 0xC
    ctx->r21 = ADD32(ctx->r3, 0XC);
    // 0x800635E0: sw          $v1, 0x240($sp)
    MEM_W(0X240, ctx->r29) = ctx->r3;
L_800635E4:
    // 0x800635E4: lw          $v1, 0x240($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X240);
    // 0x800635E8: addiu       $a0, $zero, 0x76A
    ctx->r4 = ADD32(0, 0X76A);
    // 0x800635EC: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x800635F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800635F4: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x800635F8: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800635FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80063600: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80063604: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80063608: jal         0x8001D138
    // 0x8006360C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006360C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    after_1:
    // 0x80063610: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80063614: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80063618: jal         0x80019164
    // 0x8006361C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006361C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80063620: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    // 0x80063624: jal         0x80028AB8
    // 0x80063628: sw          $s4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r20;
    func_80028AB8(rdram, ctx);
        goto after_3;
    // 0x80063628: sw          $s4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r20;
    after_3:
    // 0x8006362C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80063630: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    // 0x80063634: jal         0x80028AB8
    // 0x80063638: cvt.s.w     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    ctx->f22.fl = CVT_S_W(ctx->f10.u32l);
    func_80028AB8(rdram, ctx);
        goto after_4;
    // 0x80063638: cvt.s.w     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    ctx->f22.fl = CVT_S_W(ctx->f10.u32l);
    after_4:
    // 0x8006363C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80063640: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80063644: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80063648: lwc1        $f8, 0x4($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X4);
    // 0x8006364C: sub.s       $f20, $f22, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f22.fl - ctx->f6.fl;
    // 0x80063650: cvt.s.w     $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    ctx->f24.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80063654: jal         0x80028C2C
    // 0x80063658: add.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f8.fl;
    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x80063658: add.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f8.fl;
    after_5:
    // 0x8006365C: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x80063660: swc1        $f10, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f10.u32l;
    // 0x80063664: jal         0x80028C2C
    // 0x80063668: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    func_80028C2C(rdram, ctx);
        goto after_6;
    // 0x80063668: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    after_6:
    // 0x8006366C: add.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x80063670: swc1        $f4, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f4.u32l;
    // 0x80063674: lwc1        $f6, 0x4($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X4);
    // 0x80063678: jal         0x80028C00
    // 0x8006367C: add.s       $f12, $f20, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f6.fl;
    func_80028C00(rdram, ctx);
        goto after_7;
    // 0x8006367C: add.s       $f12, $f20, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f20.fl + ctx->f6.fl;
    after_7:
    // 0x80063680: add.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x80063684: swc1        $f8, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f8.u32l;
    // 0x80063688: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8006368C: swc1        $f26, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f26.u32l;
    // 0x80063690: swc1        $f26, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f26.u32l;
    // 0x80063694: jal         0x800191C0
    // 0x80063698: swc1        $f26, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f26.u32l;
    func_800191C0(rdram, ctx);
        goto after_8;
    // 0x80063698: swc1        $f26, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f26.u32l;
    after_8:
    // 0x8006369C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800636A0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800636A4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800636A8: bne         $s1, $s7, L_800635E4
    if (ctx->r17 != ctx->r23) {
        // 0x800636AC: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_800635E4;
    }
    // 0x800636AC: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x800636B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800636B4: lwc1        $f20, 0x635C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X635C);
    // 0x800636B8: addiu       $fp, $zero, 0x6
    ctx->r30 = ADD32(0, 0X6);
    // 0x800636BC: lw          $t6, 0x240($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X240);
L_800636C0:
    // 0x800636C0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800636C4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x800636C8: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x800636CC: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x800636D0: bne         $t8, $zero, L_80063868
    if (ctx->r24 != 0) {
        // 0x800636D4: lui         $s5, 0x8009
        ctx->r21 = S32(0X8009 << 16);
            goto L_80063868;
    }
    // 0x800636D4: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x800636D8: addiu       $s5, $s5, 0x2264
    ctx->r21 = ADD32(ctx->r21, 0X2264);
L_800636DC:
    // 0x800636DC: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x800636E0: sll         $v1, $s4, 2
    ctx->r3 = S32(ctx->r20 << 2);
    // 0x800636E4: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800636E8: bne         $at, $zero, L_80063828
    if (ctx->r1 != 0) {
        // 0x800636EC: subu        $v1, $v1, $s4
        ctx->r3 = SUB32(ctx->r3, ctx->r20);
            goto L_80063828;
    }
    // 0x800636EC: subu        $v1, $v1, $s4
    ctx->r3 = SUB32(ctx->r3, ctx->r20);
    // 0x800636F0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800636F4: addiu       $t9, $sp, 0x1BC
    ctx->r25 = ADD32(ctx->r29, 0X1BC);
    // 0x800636F8: addiu       $t6, $sp, 0x220
    ctx->r14 = ADD32(ctx->r29, 0X220);
    // 0x800636FC: addiu       $t7, $sp, 0xFC
    ctx->r15 = ADD32(ctx->r29, 0XFC);
    // 0x80063700: addiu       $t8, $sp, 0x15C
    ctx->r24 = ADD32(ctx->r29, 0X15C);
    // 0x80063704: addu        $s1, $v1, $t8
    ctx->r17 = ADD32(ctx->r3, ctx->r24);
    // 0x80063708: addu        $s3, $v1, $t7
    ctx->r19 = ADD32(ctx->r3, ctx->r15);
    // 0x8006370C: addu        $s2, $s7, $t6
    ctx->r18 = ADD32(ctx->r23, ctx->r14);
    // 0x80063710: bne         $s6, $v0, L_8006372C
    if (ctx->r22 != ctx->r2) {
        // 0x80063714: addu        $s0, $v1, $t9
        ctx->r16 = ADD32(ctx->r3, ctx->r25);
            goto L_8006372C;
    }
    // 0x80063714: addu        $s0, $v1, $t9
    ctx->r16 = ADD32(ctx->r3, ctx->r25);
    // 0x80063718: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8006371C: jal         0x800191D4
    // 0x80063720: nop

    func_800191D4(rdram, ctx);
        goto after_9;
    // 0x80063720: nop

    after_9:
    // 0x80063724: b           L_80063748
    // 0x80063728: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
        goto L_80063748;
    // 0x80063728: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
L_8006372C:
    // 0x8006372C: addiu       $t9, $v0, 0xF
    ctx->r25 = ADD32(ctx->r2, 0XF);
    // 0x80063730: bne         $s6, $t9, L_80063744
    if (ctx->r22 != ctx->r25) {
        // 0x80063734: nop
    
            goto L_80063744;
    }
    // 0x80063734: nop

    // 0x80063738: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8006373C: jal         0x800191C0
    // 0x80063740: nop

    func_800191C0(rdram, ctx);
        goto after_10;
    // 0x80063740: nop

    after_10:
L_80063744:
    // 0x80063744: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
L_80063748:
    // 0x80063748: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8006374C: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80063750: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80063754: lwc1        $f10, 0x4($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80063758: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x8006375C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80063760: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80063764: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80063768: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8006376C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80063770: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80063774: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x80063778: jal         0x80019164
    // 0x8006377C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_11;
    // 0x8006377C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x80063780: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80063784: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80063788: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x8006378C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80063790: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    // 0x80063794: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x80063798: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8006379C: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x800637A0: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    // 0x800637A4: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x800637A8: jal         0x80019114
    // 0x800637AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x800637AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x800637B0: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x800637B4: nop

    // 0x800637B8: addiu       $t6, $v0, 0x9
    ctx->r14 = ADD32(ctx->r2, 0X9);
    // 0x800637BC: slt         $at, $s6, $t6
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800637C0: bne         $at, $zero, L_80063828
    if (ctx->r1 != 0) {
        // 0x800637C4: subu        $s1, $v0, $s6
        ctx->r17 = SUB32(ctx->r2, ctx->r22);
            goto L_80063828;
    }
    // 0x800637C4: subu        $s1, $v0, $s6
    ctx->r17 = SUB32(ctx->r2, ctx->r22);
    // 0x800637C8: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x800637CC: addiu       $s1, $s1, 0xF
    ctx->r17 = ADD32(ctx->r17, 0XF);
    // 0x800637D0: bne         $s1, $fp, L_800637E4
    if (ctx->r17 != ctx->r30) {
        // 0x800637D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800637E4;
    }
    // 0x800637D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800637D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800637DC: jal         0x80018658
    // 0x800637E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_13;
    // 0x800637E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
L_800637E4:
    // 0x800637E4: sll         $t7, $s1, 8
    ctx->r15 = S32(ctx->r17 << 8);
    // 0x800637E8: subu        $t7, $t7, $s1
    ctx->r15 = SUB32(ctx->r15, ctx->r17);
    // 0x800637EC: div         $zero, $t7, $fp
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r30))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r30)));
    // 0x800637F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800637F4: bne         $fp, $zero, L_80063800
    if (ctx->r30 != 0) {
        // 0x800637F8: nop
    
            goto L_80063800;
    }
    // 0x800637F8: nop

    // 0x800637FC: break       7
    do_break(2147891196);
L_80063800:
    // 0x80063800: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80063804: bne         $fp, $at, L_80063818
    if (ctx->r30 != ctx->r1) {
        // 0x80063808: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80063818;
    }
    // 0x80063808: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006380C: bne         $t7, $at, L_80063818
    if (ctx->r15 != ctx->r1) {
        // 0x80063810: nop
    
            goto L_80063818;
    }
    // 0x80063810: nop

    // 0x80063814: break       6
    do_break(2147891220);
L_80063818:
    // 0x80063818: mflo        $a1
    ctx->r5 = lo;
    // 0x8006381C: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80063820: jal         0x80018604
    // 0x80063824: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_14;
    // 0x80063824: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_14:
L_80063828:
    // 0x80063828: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8006382C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80063830: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x80063834: bne         $s4, $at, L_800636DC
    if (ctx->r20 != ctx->r1) {
        // 0x80063838: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_800636DC;
    }
    // 0x80063838: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8006383C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80063840: lw          $t9, 0x2280($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2280);
    // 0x80063844: nop

    // 0x80063848: addiu       $t6, $t9, 0xF
    ctx->r14 = ADD32(ctx->r25, 0XF);
    // 0x8006384C: slt         $v0, $t6, $s6
    ctx->r2 = SIGNED(ctx->r14) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80063850: bne         $v0, $zero, L_80063868
    if (ctx->r2 != 0) {
        // 0x80063854: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80063868;
    }
    // 0x80063854: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80063858: jal         0x80007AB0
    // 0x8006385C: nop

    func_80007AB0(rdram, ctx);
        goto after_15;
    // 0x8006385C: nop

    after_15:
    // 0x80063860: b           L_800636C0
    // 0x80063864: lw          $t6, 0x240($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X240);
        goto L_800636C0;
    // 0x80063864: lw          $t6, 0x240($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X240);
L_80063868:
    // 0x80063868: addiu       $s0, $sp, 0x220
    ctx->r16 = ADD32(ctx->r29, 0X220);
    // 0x8006386C: addiu       $s2, $s0, 0x20
    ctx->r18 = ADD32(ctx->r16, 0X20);
L_80063870:
    // 0x80063870: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80063874: jal         0x8001C568
    // 0x80063878: nop

    func_8001C568(rdram, ctx);
        goto after_16;
    // 0x80063878: nop

    after_16:
    // 0x8006387C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80063880: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80063884: bne         $at, $zero, L_80063870
    if (ctx->r1 != 0) {
        // 0x80063888: nop
    
            goto L_80063870;
    }
    // 0x80063888: nop

    // 0x8006388C: lw          $a0, 0x240($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X240);
    // 0x80063890: jal         0x8005CD50
    // 0x80063894: nop

    func_8005CD50(rdram, ctx);
        goto after_17;
    // 0x80063894: nop

    after_17:
    // 0x80063898: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006389C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800638A0: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800638A4: nop

    // 0x800638A8: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800638AC: jal         0x80007AE0
    // 0x800638B0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_18;
    // 0x800638B0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_18:
    // 0x800638B4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x800638B8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800638BC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800638C0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800638C4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800638C8: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800638CC: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800638D0: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800638D4: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800638D8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x800638DC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x800638E0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x800638E4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x800638E8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x800638EC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x800638F0: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x800638F4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x800638F8: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x800638FC: jr          $ra
    // 0x80063900: addiu       $sp, $sp, 0x248
    ctx->r29 = ADD32(ctx->r29, 0X248);
    return;
    // 0x80063900: addiu       $sp, $sp, 0x248
    ctx->r29 = ADD32(ctx->r29, 0X248);
;}
RECOMP_FUNC void func_80063904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063904: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80063908: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8006390C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80063910: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80063914: addiu       $t6, $zero, 0x7C4
    ctx->r14 = ADD32(0, 0X7C4);
    // 0x80063918: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8006391C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80063920: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80063924: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80063928: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8006392C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80063930: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80063934: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80063938: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006393C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80063940: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80063944: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80063948: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8006394C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80063950: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80063954: jal         0x8005E454
    // 0x80063958: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x80063958: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    after_0:
    // 0x8006395C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80063960: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80063964: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80063968: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006396C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80063970: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80063974: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80063978: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8006397C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80063980: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80063984: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80063988: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8006398C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80063990: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80063994: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80063998: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8006399C: jr          $ra
    // 0x800639A0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800639A0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800639A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800639A4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800639A8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800639AC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x800639B0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800639B4: addiu       $t6, $zero, 0x7C4
    ctx->r14 = ADD32(0, 0X7C4);
    // 0x800639B8: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x800639BC: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x800639C0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800639C4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800639C8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800639CC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800639D0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800639D4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800639D8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800639DC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800639E0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800639E4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800639E8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800639EC: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x800639F0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800639F4: jal         0x8005E454
    // 0x800639F8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x800639F8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    after_0:
    // 0x800639FC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80063A00: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80063A04: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80063A08: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80063A0C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80063A10: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80063A14: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80063A18: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80063A1C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80063A20: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80063A24: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80063A28: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80063A2C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80063A30: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80063A34: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80063A38: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80063A3C: jr          $ra
    // 0x80063A40: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80063A40: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
